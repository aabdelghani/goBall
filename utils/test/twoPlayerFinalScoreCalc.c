#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <wiringPi.h>

#define DEBOUNCE_TIME 3  // Time to prevent multiple sensor readings
#define MAX_PLAYERS 4
#define MAX_HOLES 9
#define SENSORS_PER_TURN 2

// Define sensor pins - RPI GPIO pins
int sensor_pins[] = {17, 26, 27, 23};

// Player data
typedef struct {
    int score;
    int current_hole;
    int detection_count;
} Player;

Player *players = NULL;
int *final_scores = NULL;
int **individual_scores = NULL;
int **prev_scores = NULL;
int current_player_index = 0;
time_t last_activation_times[4];
int num_players = 0;

void allocate_memory_for_players(int num_players) {
    players = (Player *)malloc(num_players * sizeof(Player));
    final_scores = (int *)malloc(num_players * sizeof(int));
    individual_scores = (int **)malloc(num_players * sizeof(int *));
    prev_scores = (int **)malloc(num_players * sizeof(int *));
    for (int i = 0; i < num_players; i++) {
        individual_scores[i] = (int *)malloc(MAX_HOLES * sizeof(int));
        prev_scores[i] = (int *)malloc(MAX_HOLES * sizeof(int));
    }
}

void free_memory_for_players(void) {
    for (int i = 0; i < num_players; i++) {
        free(individual_scores[i]);
        free(prev_scores[i]);
    }
    free(individual_scores);
    free(prev_scores);
    free(players);
    free(final_scores);
}

void reset_scores(void) {
    for (int i = 0; i < num_players; i++) {
        players[i].score = 0;
        players[i].current_hole = 0;
        players[i].detection_count = 0;
        final_scores[i] = 0;

        for (int j = 0; j < MAX_HOLES; j++) {
            individual_scores[i][j] = 0;
            prev_scores[i][j] = 0;
        }
    }
}

void update_scoreCard(int player_index, int cumulative_score, int current_hole) {
    if (current_hole < 0 || current_hole >= MAX_HOLES) {
        return;
    }

    int individual_score;
    if (current_hole == 0) {
        individual_score = cumulative_score;
    } else {
        individual_score = cumulative_score - prev_scores[player_index][current_hole - 1];
    }

    individual_scores[player_index][current_hole] = individual_score;
    prev_scores[player_index][current_hole] = cumulative_score;

    printf("Player %d, Hole %d, Individual Score: %d\n", player_index + 1, current_hole + 1, individual_score);

    final_scores[player_index] = 0;
    for (int i = 0; i < MAX_HOLES; i++) {
        final_scores[player_index] += individual_scores[player_index][i];
    }
    printf("Player %d, Final Score: %d\n", player_index + 1, final_scores[player_index]);
}

void update_label_text(int player_index, int current_hole, int score, int detection_count) {
    printf("Updating Labels:\n");
    printf("Player %d, Current Hole: %d, Score: %d, Detection Count: %d\n",
           player_index + 1, current_hole + 1, score, detection_count);
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
            switch (pin) {
                case 17:
                    player->score += 3;
                    break;
                case 26:
                    player->score += 4;
                    break;
                case 27:
                    player->score += 5;
                    break;
                case 23:
                    player->score += 0;
                    break;
            }

            player->detection_count++;
            update_label_text(current_player_index, player->current_hole, player->score, player->detection_count);

            if (player->detection_count == SENSORS_PER_TURN) {
                player->current_hole++;
                player->detection_count = 0;

                // Update the scorecard before moving to the next player
                update_scoreCard(current_player_index, player->score, player->current_hole - 1);

                current_player_index = (current_player_index + 1) % num_players;

                // Check if the game is over for all players
                int game_completed = 1;
                for (int i = 0; i < num_players; i++) {
                    if (players[i].current_hole < MAX_HOLES) {
                        game_completed = 0;
                        break;
                    }
                }

                if (game_completed) {
                    printf("All players have completed the game.\n");
                    for (int i = 0; i < 4; i++) {
                        pinMode(sensor_pins[i], INPUT);
                        pullUpDnControl(sensor_pins[i], PUD_DOWN);
                    }
                    free_memory_for_players();
                    exit(0);
                }
            }
        }
    }
}

int main() {
    wiringPiSetupGpio();
    for (int i = 0; i < 4; i++) {
        pinMode(sensor_pins[i], INPUT);
        pullUpDnControl(sensor_pins[i], PUD_DOWN);
        last_activation_times[i] = 0;
    }

    printf("Enter the number of players (1-4): ");
    scanf("%d", &num_players);

    if (num_players < 1 || num_players > MAX_PLAYERS) {
        printf("Invalid number of players.\n");
        return 1;
    }

    allocate_memory_for_players(num_players);
    reset_scores();

    for (int i = 0; i < 4; i++) {
        wiringPiISR(sensor_pins[i], INT_EDGE_FALLING, &sensor_callback);
    }

    printf("Waiting for sensor inputs...\n");

    while (1) {
        sleep(1);
    }

    return 0;
}
