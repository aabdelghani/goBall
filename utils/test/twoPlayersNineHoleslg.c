#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <gpiod.h>  // Include libgpiod

#define DEBOUNCE_TIME 3  // Time to prevent multiple sensor readings
#define NUM_PLAYERS 2
#define MAX_HOLES 8
#define SENSORS_PER_TURN 2

// Define sensor pins - RPI 5 -
int sensor_pins[] = {17, 26, 27, 24};
#define NUM_SENSORS 4  // Number of sensor pins

// Player data
typedef struct {
    int score;
    int current_hole;
    int detection_count;
} Player;

Player players[NUM_PLAYERS];
int current_player_index = 0;
time_t last_activation_times[NUM_SENSORS];

// GPIO chip and line handles
struct gpiod_chip *chip;
struct gpiod_line *sensor_lines[NUM_SENSORS];

void update_label_text(int player_index, int current_hole, int score, int detection_count) {
    printf("Player %d - Hole %d - Score: %d - Detection Count: %d\n", player_index + 1, current_hole + 1, score, detection_count);
}

void handle_sensor_event(int pin_index) {
    time_t current_time = time(NULL);

    if (current_time - last_activation_times[pin_index] > DEBOUNCE_TIME) {
        last_activation_times[pin_index] = current_time;
        Player *player = &players[current_player_index];

        if (player->detection_count < SENSORS_PER_TURN) {
            if (pin_index == 0) {
                player->score += 3;
            } else if (pin_index == 1) {
                player->score += 4;
            } else if (pin_index == 2) {
                player->score += 5;
            } else if (pin_index == 3) {
                player->score += 0;
            }

            player->detection_count++;
            update_label_text(current_player_index, player->current_hole, player->score, player->detection_count);

            if (player->detection_count == SENSORS_PER_TURN) {
                player->current_hole++;
                player->detection_count = 0;
                current_player_index = (current_player_index + 1) % NUM_PLAYERS;

                if (player->current_hole > MAX_HOLES) {
                    printf("All players have completed the game.\n");
                    for (int i = 0; i < NUM_SENSORS; i++) {
                        gpiod_line_release(sensor_lines[i]);
                    }
                    gpiod_chip_close(chip);
                    exit(0);
                }
            }
        }
    }
}

int main() {
    // Initialize players
    for (int i = 0; i < NUM_PLAYERS; i++) {
        players[i].score = 0;
        players[i].current_hole = 0;
        players[i].detection_count = 0;
    }

    // Initialize last activation times
    for (int i = 0; i < NUM_SENSORS; i++) {
        last_activation_times[i] = 0;
    }

    // Open the GPIO chip
    chip = gpiod_chip_open_by_name("gpiochip0");
    if (!chip) {
        perror("Failed to open GPIO chip");
        return 1;
    }

    // Get GPIO lines for sensor pins
    for (int i = 0; i < NUM_SENSORS; i++) {
        sensor_lines[i] = gpiod_chip_get_line(chip, sensor_pins[i]);
        if (!sensor_lines[i]) {
            perror("Failed to get GPIO line");
            for (int j = 0; j < i; j++) {
                gpiod_line_release(sensor_lines[j]);
            }
            gpiod_chip_close(chip);
            return 1;
        }

        // Request the line as input
        if (gpiod_line_request_input(sensor_lines[i], "sensor") < 0) {
            perror("Failed to request GPIO line as input");
            for (int j = 0; j <= i; j++) {
                gpiod_line_release(sensor_lines[j]);
            }
            gpiod_chip_close(chip);
            return 1;
        }
    }

    printf("Waiting for sensor inputs...\n");

    // Main loop to poll sensor states
    while (1) {
        for (int i = 0; i < NUM_SENSORS; i++) {
            int state = gpiod_line_get_value(sensor_lines[i]);
            if (state == 0) {  // Active low (assuming sensors pull the pin low when triggered)
                handle_sensor_event(i);
            }
        }
        usleep(10000);  // Poll every 10ms
    }

    // Cleanup (unreachable in this example)
    for (int i = 0; i < NUM_SENSORS; i++) {
        gpiod_line_release(sensor_lines[i]);
    }
    gpiod_chip_close(chip);

    return 0;
}
