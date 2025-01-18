/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdlib.h>
#include <unistd.h>
#include "lvgl/lvgl.h"
#include "ui/ui.h"
#include <wiringPi.h>
#include <time.h>
#include <unistd.h>
/*********************
 *      DEFINES
 *********************/
#define DEBOUNCE_TIME 3  // Time to prevent multiple sensor readings
#define NUM_PLAYERS 1
#define MAX_HOLES 8
#define SENSORS_PER_TURN 2
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static lv_display_t * hal_init(int32_t w, int32_t h);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *      VARIABLES
 **********************/
char update_flag = 0;
 // Define sensor pins
 // 26 -> #1
 // 19 -> #2
 // 20 -> #4
char sensor_pins[] = {17, 26, 27, 23};

Player players[MAX_PLAYERS];
char current_player_index = 0;
time_t last_activation_times[4];
char num_players = 1; // Default to 1 player
/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
char prev_scores[MAX_PLAYERS][9] = {0};      // Previous cumulative scores for each hole for all players
char individual_scores[MAX_PLAYERS][10] = {0}; // Individual scores for each hole for all players
char final_scores[MAX_PLAYERS] = {0};         // Final cumulative scores for all players

void cleanup_gpio(void) {
    for (int i = 0; i < 4; i++) {
        pinMode(sensor_pins[i], INPUT); // Set as input
        pullUpDnControl(sensor_pins[i], PUD_DOWN); // Disable pull-up/down resistors
    }
    printf("GPIO pins have been reset and released.\n");
}

void check_all_players_completed(void) {
    int all_players_completed = 1;
    for (int i = 0; i < num_players; i++) {
        if (players[i].current_hole <= MAX_HOLES) {
            all_players_completed = 0;
            break;
        }
    }
    if (all_players_completed) {
        printf("All players have completed the game.\n");
        update_flag = 1;
    }
}

void update_scoreCard(int player_index, int cumulative_score, int current_hole) {
    // Check current_hole bounds
    if (current_hole < 0 || current_hole >= 9) {
        printf("Invalid hole number: %d\n", current_hole);
        return;
    }
    // Calculate the individual score for the current hole
    printf("Calculating the individual score for the current hole...\n");
    int individual_score;
    if (current_hole == 0) {
        // For the first hole, the previous score is 0
        printf("For the first hole, the previous score is 0\n");
        individual_score = cumulative_score;
    } else {
        // For subsequent holes, subtract the previous cumulative score
        printf("For subsequent holes, subtract the previous cumulative score\n");
        individual_score = cumulative_score - prev_scores[player_index][current_hole - 1];
    }

    // Store the individual score
    printf("Storing the individual score: %d for player %d, hole %d\n", individual_score, player_index + 1, current_hole + 1);
    individual_scores[player_index][current_hole] = individual_score;


    // Print debug information before updating prev_scores
    printf("Player %d, Hole %d:\n", player_index + 1, current_hole + 1);
    if (current_hole == 0) {
        printf("Previous Score: None (First Hole)\n");
    } else {
        printf("Previous Score: %d\n", prev_scores[player_index][current_hole - 1]);
    }
    printf("Cumulative Score Received: %d\n", cumulative_score);
    printf("Individual Score Calculated: %d\n", individual_score);

    // Update the previous cumulative score for this hole
    prev_scores[player_index][current_hole] = cumulative_score;
    printf("Updated Previous Score: %d\n", prev_scores[player_index][current_hole]);

    // Update the scorecard UI for the current hole (individual score)
    if (num_players == 1) {
        switch (current_hole) {
            case 0:
                printf("Updating UI for Hole 1 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS1Text, "%d", individual_score);
                break;
            case 1:
                printf("Updating UI for Hole 2 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS2Text, "%d", individual_score);
                break;
            case 2:
                printf("Updating UI for Hole 3 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS3Text, "%d", individual_score);
                break;
            case 3:
                printf("Updating UI for Hole 4 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS4Text, "%d", individual_score);
                break;
            case 4:
                printf("Updating UI for Hole 5 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS5Text, "%d", individual_score);
                break;
            case 5:
                printf("Updating UI for Hole 6 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS6Text, "%d", individual_score);
                break;
            case 6:
                printf("Updating UI for Hole 7 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS7Text, "%d", individual_score);
                break;
            case 7:
                printf("Updating UI for Hole 8 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS8Text, "%d", individual_score);
                break;
            case 8:
                printf("Updating UI for Hole 9 with Individual Score: %d\n", individual_score);
                lv_label_set_text_fmt(ui_SP1P9HScPS9Text, "%d", individual_score);
                break;
            default:
                printf("Invalid hole number: %d\n", current_hole);
                break;
        }
    } else if (num_players == 2) {
        if (player_index == 0) {
            switch (current_hole) {
                case 0:
                    printf("Updating Player 1's UI for Hole 1 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S1Text, "%d", individual_score);
                    break;
                case 1:
                    printf("Updating Player 1's UI for Hole 2 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S2Text, "%d", individual_score);
                    break;
                case 2:
                    printf("Updating Player 1's UI for Hole 3 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S3Text, "%d", individual_score);
                    break;
                case 3:
                    printf("Updating Player 1's UI for Hole 4 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S4Text, "%d", individual_score);
                    break;
                case 4:
                    printf("Updating Player 1's UI for Hole 5 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S5Text, "%d", individual_score);
                    break;
                case 5:
                    printf("Updating Player 1's UI for Hole 6 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S6Text, "%d", individual_score);
                    break;
                case 6:
                    printf("Updating Player 1's UI for Hole 7 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S7Text, "%d", individual_score);
                    break;
                case 7:
                    printf("Updating Player 1's UI for Hole 8 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S8Text, "%d", individual_score);
                    break;
                case 8:
                    printf("Updating Player 1's UI for Hole 9 with Individual Score: %d\n", individual_score);
                    lv_label_set_text_fmt(ui_SP2P9HScP1S9Text, "%d", individual_score);
                    break;
                    default:
                        printf("Invalid hole number: %d\n", current_hole);
                        break;
                }
            } else if (player_index == 1) {
                switch (current_hole) {
                    case 0:
                        printf("Updating Player 2's UI for Hole 1 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S1Text, "%d", individual_score);
                        break;
                    case 1:
                        printf("Updating Player 2's UI for Hole 2 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S2Text, "%d", individual_score);
                        break;
                    case 2:
                        printf("Updating Player 2's UI for Hole 3 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S3Text, "%d", individual_score);
                        break;
                    case 3:
                        printf("Updating Player 2's UI for Hole 4 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S4Text, "%d", individual_score);
                        break;
                    case 4:
                        printf("Updating Player 2's UI for Hole 5 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S5Text, "%d", individual_score);
                        break;
                    case 5:
                        printf("Updating Player 2's UI for Hole 6 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S6Text, "%d", individual_score);
                        break;
                    case 6:
                        printf("Updating Player 2's UI for Hole 7 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S7Text, "%d", individual_score);
                        break;
                    case 7:
                        printf("Updating Player 2's UI for Hole 8 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S8Text, "%d", individual_score);
                        break;
                    case 8:
                        printf("Updating Player 2's UI for Hole 9 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP2P9HScP2S9Text, "%d", individual_score);
                        break;
                    default:
                        printf("Invalid hole number: %d\n", current_hole);
                        break;
                }
            }
        } else if (num_players == 3) {
            if (player_index == 0) {
                switch (current_hole) {
                    case 0:
                        printf("Updating Player 1's UI for Hole 1 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S1Text, "%d", individual_score);
                        break;
                    case 1:
                        printf("Updating Player 1's UI for Hole 2 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S2Text, "%d", individual_score);
                        break;
                    case 2:
                        printf("Updating Player 1's UI for Hole 3 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S3Text, "%d", individual_score);
                        break;
                    case 3:
                        printf("Updating Player 1's UI for Hole 4 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S4Text, "%d", individual_score);
                        break;
                    case 4:
                        printf("Updating Player 1's UI for Hole 5 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S5Text, "%d", individual_score);
                        break;
                    case 5:
                        printf("Updating Player 1's UI for Hole 6 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S6Text, "%d", individual_score);
                        break;
                    case 6:
                        printf("Updating Player 1's UI for Hole 7 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S7Text, "%d", individual_score);
                        break;
                    case 7:
                        printf("Updating Player 1's UI for Hole 8 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S8Text, "%d", individual_score);
                        break;
                    case 8:
                        printf("Updating Player 1's UI for Hole 9 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP1S9Text, "%d", individual_score);
                        break;
                        default:
                            printf("Invalid hole number: %d\n", current_hole);
                            break;
                }
            } else if (player_index == 1) {
                switch (current_hole) {
                    case 0:
                        printf("Updating Player 2's UI for Hole 1 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S1Text, "%d", individual_score);
                        break;
                    case 1:
                        printf("Updating Player 2's UI for Hole 2 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S2Text, "%d", individual_score);
                        break;
                    case 2:
                        printf("Updating Player 2's UI for Hole 3 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S3Text, "%d", individual_score);
                        break;
                    case 3:
                        printf("Updating Player 2's UI for Hole 4 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S4Text, "%d", individual_score);
                        break;
                    case 4:
                        printf("Updating Player 2's UI for Hole 5 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S5Text, "%d", individual_score);
                        break;
                    case 5:
                        printf("Updating Player 2's UI for Hole 6 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S6Text, "%d", individual_score);
                        break;
                    case 6:
                        printf("Updating Player 2's UI for Hole 7 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S7Text, "%d", individual_score);
                        break;
                    case 7:
                        printf("Updating Player 2's UI for Hole 8 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S8Text, "%d", individual_score);
                        break;
                    case 8:
                        printf("Updating Player 2's UI for Hole 9 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP2S9Text, "%d", individual_score);
                        break;
                    default:
                        printf("Invalid hole number: %d\n", current_hole);
                        break;
                }
            }else if (player_index == 2) {
                switch (current_hole) {
                    case 0:
                        printf("Updating Player 3's UI for Hole 1 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S1Text, "%d", individual_score);
                        break;
                    case 1:
                        printf("Updating Player 3's UI for Hole 2 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S2Text, "%d", individual_score);
                        break;
                    case 2:
                        printf("Updating Player 3's UI for Hole 3 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S3Text, "%d", individual_score);
                        break;
                    case 3:
                        printf("Updating Player 3's UI for Hole 4 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S4Text, "%d", individual_score);
                        break;
                    case 4:
                        printf("Updating Player 3's UI for Hole 5 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S5Text, "%d", individual_score);
                        break;
                    case 5:
                        printf("Updating Player 3's UI for Hole 6 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S6Text, "%d", individual_score);
                        break;
                    case 6:
                        printf("Updating Player 3's UI for Hole 7 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S7Text, "%d", individual_score);
                        break;
                    case 7:
                        printf("Updating Player 3's UI for Hole 8 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S8Text, "%d", individual_score);
                        break;
                    case 8:
                        printf("Updating Player 3's UI for Hole 9 with Individual Score: %d\n", individual_score);
                        lv_label_set_text_fmt(ui_SP3P9HScP3S9Text, "%d", individual_score);
                        break;
                    default:
                        printf("Invalid hole number: %d\n", current_hole);
                        break;
                }
            }
        }

        // Calculate the final score for this player
        final_scores[player_index] = 0;
        printf("Resetting Final Score !!! Player %d Final Score: %d\n", player_index + 1, final_scores[player_index]);
    
        for (int i = 0; i < 9; i++) {
            printf("Final Score for iteration %d - Player %d Final Score: %d\nIndividual scores at player_index %d and iteration %d is: %d\n", 
                                            i, player_index + 1, final_scores[player_index], player_index, i, individual_scores[player_index][i]);
            final_scores[player_index] += individual_scores[player_index][i];
        }
        printf("Player %d Final Score: %d\n", player_index + 1, final_scores[player_index]);

        // Update the final score label
        if (num_players == 1) {
            lv_label_set_text_fmt(ui_SP1P9HScPSFText, "%d", final_scores[player_index]);
        } else if (num_players == 2) {
            if (player_index == 0) {
                lv_label_set_text_fmt(ui_SP2P9HScP1SFText, "%d", final_scores[player_index]);
            } else if (player_index == 1) {
                lv_label_set_text_fmt(ui_SP2P9HScP2SFText, "%d", final_scores[player_index]);
            }
        }else if (num_players == 3) {
            if (player_index == 0) {
                lv_label_set_text_fmt(ui_SP3P9HScP1SFText, "%d", final_scores[player_index]);
            } else if (player_index == 1) {
                lv_label_set_text_fmt(ui_SP3P9HScP2SFText, "%d", final_scores[player_index]);
            } else if (player_index == 2) {
                lv_label_set_text_fmt(ui_SP3P9HScP3SFText, "%d", final_scores[player_index]);
            }
        }
    }

void update_label_text(int player_index, int current_hole, int score, int detection_count) {
    printf("Updating labels for Player %d, Hole %d, Score: %d, Detection Count: %d\n", player_index + 1, current_hole + 1, score, detection_count);

    if (num_players == 1) {
        // Single-player labels
        printf("Updating UI for Single Player Mode - Player %d\n", player_index + 1);
        lv_label_set_text_fmt(ui_SP1P9HGSPSText, "Player %d", player_index + 1);
        printf("Updated ui_SP1P9HGSPSText with Player %d\n", player_index + 1);
        lv_label_set_text_fmt(ui_SP1P9HGSPSPText, "%d", score);
        printf("Updated ui_SP1P9HGSPSPText with Score %d\n", score);
        lv_label_set_text_fmt(ui_SP1P9HGSHCPText, "%d", current_hole + 1);
        printf("Updated ui_SP1P9HGSHCPText with Current Hole %d\n", current_hole + 1);
        lv_label_set_text_fmt(ui_SP1P9HGSBCPText, "%d", detection_count);
        printf("Updated ui_SP1P9HGSBCPText with Detection Count %d\n", detection_count);
    } else if (num_players == 2) {
        printf("Two Player Mode\n");
        // Two-player labels
        if (player_index == 0) {
            // Update Player 1's label
            printf("Updating Player 1's label\n");
            lv_label_set_text_fmt(ui_SP2P9HGSP1SText, "Player %d", player_index + 1);
            printf("Updated ui_SP2P9HGSP1SText with Player %d\n", player_index + 1);
            lv_label_set_text_fmt(ui_SP2P9HGSP1SPText, "%d", score);
            printf("Updated ui_SP2P9HGSP1SPText with Score %d\n", score);
            lv_label_set_text_fmt(ui_SP2P9HGSHCPText, "%d", current_hole + 1);
            printf("Updated ui_SP2P9HGSHCPText with Current Hole %d\n", current_hole + 1);
            lv_label_set_text_fmt(ui_SP2P9HGSBCPText, "%d", detection_count);
            printf("Updated ui_SP2P9HGSBCPText with Detection Count %d\n", detection_count);
        } else if (player_index == 1) {
            // Update Player 2's label
            printf("Updating Player 2's label\n");
            lv_label_set_text_fmt(ui_SP2P9HGSP2SText, "Player %d", player_index + 1);
            printf("Updated ui_SP2P9HGSP2SText with Player %d\n", player_index + 1);
            lv_label_set_text_fmt(ui_SP2P9HGSP2SPText, "%d", score);
            printf("Updated ui_SP2P9HGSP2SPText with Score %d\n", score);
            lv_label_set_text_fmt(ui_SP2P9HGSHCPText, "%d", current_hole + 1);
            printf("Updated ui_SP2P9HGSHCPText with Current Hole %d\n", current_hole + 1);
            lv_label_set_text_fmt(ui_SP2P9HGSBCPText, "%d", detection_count);
            printf("Updated ui_SP2P9HGSBCPText with Detection Count %d\n", detection_count);
            }
        } else if (num_players == 3) {
            printf("Three Player Mode\n");
            // Three-player labels
            if (player_index == 0) {
                // Update Player 1's label
                printf("Updating Player 1's label\n");
                lv_label_set_text_fmt(ui_SP3P9HGSP1SText, "Player %d", player_index + 1);
                printf("Updated ui_SP3P9HGSP1SText with Player %d\n", player_index + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSP1SPText, "%d", score);
                printf("Updated ui_SP3P9HGSP1SPText with Score %d\n", score);
                lv_label_set_text_fmt(ui_SP3P9HGSHCPText, "%d", current_hole + 1);
                printf("Updated ui_SP3P9HGSHCPText with Current Hole %d\n", current_hole + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSBCPText, "%d", detection_count);
                printf("Updated ui_SP3P9HGSBCPText with Detection Count %d\n", detection_count);
            } else if (player_index == 1) {
                // Update Player 2's label
                printf("Updating Player 2's label\n");
                lv_label_set_text_fmt(ui_SP3P9HGSP2SText, "Player %d", player_index + 1);
                printf("Updated ui_SP3P9HGSP2SText with Player %d\n", player_index + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSP2SPText, "%d", score);
                printf("Updated ui_SP3P9HGSP2SPText with Score %d\n", score);
                lv_label_set_text_fmt(ui_SP3P9HGSHCPText, "%d", current_hole + 1);
                printf("Updated ui_SP3P9HGSHCPText with Current Hole %d\n", current_hole + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSBCPText, "%d", detection_count);
                printf("Updated ui_SP3P9HGSBCPText with Detection Count %d\n", detection_count);
            } else if (player_index == 2) {
                // Update Player 3's label
                printf("Updating Player 3's label\n");
                lv_label_set_text_fmt(ui_SP3P9HGSP3SText, "Player %d", player_index + 1);
                printf("Updated ui_SP3P9HGSP2SText with Player %d\n", player_index + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSP3SPText, "%d", score);
                printf("Updated ui_SP3P9HGSP2SPText with Score %d\n", score);
                lv_label_set_text_fmt(ui_SP3P9HGSHCPText, "%d", current_hole + 1);
                printf("Updated ui_SP3P9HGSHCPText with Current Hole %d\n", current_hole + 1);
                lv_label_set_text_fmt(ui_SP3P9HGSBCPText, "%d", detection_count);
                printf("Updated ui_SP3P9HGSBCPText with Detection Count %d\n", detection_count);
            }
    }
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

    if ((current_time - last_activation_times[pin] > DEBOUNCE_TIME) && !update_flag) {
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

            if ((player->detection_count == SENSORS_PER_TURN) && !update_flag) {
                update_scoreCard(current_player_index, player->score, player->current_hole);

                player->current_hole++;
                player->detection_count = 0;
                current_player_index = (current_player_index + 1) % num_players;

                //check if all players have finished their turns
                check_all_players_completed();
            }
        }
    }
}

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  // Register the cleanup function
  atexit(cleanup_gpio);
    
  /*Initialize LVGL*/
  lv_init();

  /*Initialize the display, and the input devices*/
  hal_init( 2560, 720 );

  ui_init();
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


  while(1) {
      /* Periodically call the lv_task handler.
       * It could be done in a timer interrupt or an OS task too.*/
      lv_timer_handler();

      usleep(5* 1000);
  }

  lv_deinit();
  return 0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Initialize the Hardware Abstraction Layer (HAL) for the LVGL graphics
 * library
 */
static lv_display_t * hal_init(int32_t w, int32_t h)
{
  lv_group_set_default(lv_group_create());

  lv_display_t * disp = lv_sdl_window_create(w, h);

  lv_indev_t * mouse = lv_sdl_mouse_create();
  lv_indev_set_group(mouse, lv_group_get_default());
  lv_indev_set_display(mouse, disp);
  lv_display_set_default(disp);

  //LV_IMAGE_DECLARE(mouse_cursor_icon); /*Declare the image file.*/
  //lv_obj_t * cursor_obj;
  //cursor_obj = lv_image_create(lv_screen_active()); /*Create an image object for the cursor */
  //lv_image_set_src(cursor_obj, &mouse_cursor_icon);           /*Set the image source*/
  //lv_indev_set_cursor(mouse, cursor_obj);             /*Connect the image  object to the driver*/

  lv_indev_t * mousewheel = lv_sdl_mousewheel_create();
  lv_indev_set_display(mousewheel, disp);

  lv_indev_t * keyboard = lv_sdl_keyboard_create();
  lv_indev_set_display(keyboard, disp);
  lv_indev_set_group(keyboard, lv_group_get_default());

  return disp;
}

