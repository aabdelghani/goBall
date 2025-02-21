#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <wiringPi.h>

#define DEBOUNCE_TIME 3  // Time to prevent multiple sensor readings
#define NUM_PLAYERS 2
#define MAX_HOLES 8
#define SENSORS_PER_TURN 2

// Define sensor pins - RPI 5 -
int sensor_pins[] = {17, 26, 27, 24};

// Player data
typedef struct {
    int score;
    int current_hole;
    int detection_count;
} Player;

Player players[NUM_PLAYERS];
int current_player_index = 0;
time_t last_activation_times[4];

void update_label_text(int player_index, int current_hole, int score, int detection_count) {
    printf("Player %d - Hole %d - Score: %d - Detection Count: %d\n", player_index + 1, current_hole + 1, score, detection_count);
}

void sensor_callback(void) {
    time_t current_time = time(NULL);
    int pin = 0;

    for (int i = 0; i < 4; i++) {
        if (digitalRead(sensor_pins[i]) == LOW) {
            pin = sensor_pins[i];
            break;
        }
    }

    if (current_time - last_activation_times[pin] > DEBOUNCE_TIME) {
        last_activation_times[pin] = current_time;
        Player *player = &players[current_player_index];

        if (player->detection_count < SENSORS_PER_TURN) {
            if (pin == sensor_pins[0]) {
                player->score += 3;
            } else if (pin == sensor_pins[1]) {
                player->score += 4;
            } else if (pin == sensor_pins[2]) {
                player->score += 5;
            } else if (pin == sensor_pins[3]) {
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
                    for (int i = 0; i < 4; i++) {
                        pinMode(sensor_pins[i], INPUT);
                        pullUpDnControl(sensor_pins[i], PUD_DOWN);
                    }
                    exit(0);
                }
            }
        }
    }
}

int main() {
    // Initialize WiringPi and GPIO
    wiringPiSetupGpio();
    for (int i = 0; i < 4; i++) {
        pinMode(sensor_pins[i], INPUT);
        pullUpDnControl(sensor_pins[i], PUD_DOWN);
        last_activation_times[i] = 0;
    }

    // Setup sensor interrupts
    for (int i = 0; i < 4; i++) {
        wiringPiISR(sensor_pins[i], INT_EDGE_FALLING, &sensor_callback);
    }

    printf("Waiting for sensor inputs...\n");

    // Main loop
    while (1) {
        sleep(1); // Sleep for 1 second
    }

    return 0;
}
