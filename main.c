
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <unistd.h>
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "lvgl/lvgl.h"
#include "lv_drivers/sdl/sdl.h"
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
static void hal_init(void);

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
int update_flag = 0;
 // Define sensor pins
int sensor_pins[] = {19, 26, 20, 21};

Player players[NUM_PLAYERS];
int current_player_index = 0;
time_t last_activation_times[4];

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
int prev_scores[9] = {0}; // Array to store previous cumulative scores for each hole
int individual_scores[9] = {0}; // Array to store individual scores for each hole
int final_score = 0;      // Variable to store the total cumulative score

void update_scoreCard(int cumulative_score, int current_hole) {
    // Check current_hole bounds
    if (current_hole < 0 || current_hole >= 9) {
        printf("Invalid hole number: %d\n", current_hole);
        return;
    }

    // Calculate the individual score for the current hole
    int individual_score;
    if (current_hole == 0) {
        // For the first hole, the previous score is 0
        individual_score = cumulative_score;
    } else {
        // For subsequent holes, subtract the previous cumulative score
        individual_score = cumulative_score - prev_scores[current_hole - 1];
    }

    // Store the individual score
    individual_scores[current_hole] = individual_score;

    // Print debug information before updating prev_scores
    printf("Hole %d:\n", current_hole + 1);
    if (current_hole == 0) {
        printf("Previous Score: None (First Hole)\n");
    } else {
        printf("Previous Score: %d\n", prev_scores[current_hole - 1]);
    }
    printf("Cumulative Score Received: %d\n", cumulative_score);
    printf("Individual Score Calculated: %d\n", individual_score);

    // Update the previous cumulative score for this hole
    prev_scores[current_hole] = cumulative_score; // This ensures prev_scores is updated correctly
    printf("Updated Previous Score: %d\n", prev_scores[current_hole]);

    // Update the scorecard UI for the current hole (individual score)
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

    // Calculate the final score as the sum of all individual scores
    final_score = 0;
    for (int i = 0; i < 9; i++) {
        final_score += individual_scores[i];
    }
    printf("Final Score (Sum of Individual Scores): %d\n", final_score);

    // Update the final score label
    lv_label_set_text_fmt(ui_SP1P9HScPSFText, "%d", final_score);
}


void update_label_text(int player_index, int current_hole, int score, int detection_count) {
    //Player_number
    lv_label_set_text_fmt(ui_SP1P9HGSPSText, "Player %d", player_index+1);
    //Score
    lv_label_set_text_fmt(ui_SP1P9HGSPSPText, "%d", score);
    //Holes
    lv_label_set_text_fmt(ui_SP1P9HGSHCPText, "%d", current_hole + 1);
    //Balls
    lv_label_set_text_fmt(ui_SP1P9HGSBCPText, "%d", detection_count);

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
                update_scoreCard(player->score, player->current_hole);

                player->current_hole++;
                player->detection_count = 0;
                current_player_index = (current_player_index + 1) % NUM_PLAYERS;

                if (player->current_hole > MAX_HOLES) {
                    printf("All players have completed the game.\n");
                    for (int i = 0; i < 4; i++) {
                        pinMode(sensor_pins[i], INPUT);
                        pullUpDnControl(sensor_pins[i], PUD_DOWN);
                    }
                    update_flag = 1;
                }
            }
        }
    }
}

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/
  lv_init();

  /*Initialize the HAL (display, input devices, tick) for LVGL*/
  hal_init();

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

      usleep(5 * 1000);
  }

  return 0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Initialize the Hardware Abstraction Layer (HAL) for LVGL
 */
static void hal_init(void)
{
  /* Use the 'monitor' driver which creates window on PC's monitor to simulate a display*/
  sdl_init();

  /*Create a display buffer*/
  static lv_color_t buf[SDL_HOR_RES * SDL_VER_RES];
  static lv_disp_draw_buf_t disp_draw_buf;
  lv_disp_draw_buf_init(&disp_draw_buf, buf, NULL, SDL_HOR_RES * SDL_VER_RES);

  /*Create a display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv); /*Basic initialization*/
  disp_drv.draw_buf = &disp_draw_buf;
  disp_drv.flush_cb = sdl_display_flush;
  disp_drv.hor_res = SDL_HOR_RES;
  disp_drv.ver_res = SDL_VER_RES;
  lv_disp_drv_register(&disp_drv);

  /* Add a mouse as input device */
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv); /*Basic initialization*/
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = sdl_mouse_read;
  lv_indev_drv_register(&indev_drv);
}
