// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: Go Ball Raspbery PI

#include "../ui.h"

void ui_Q2P9HGScreen_screen_init(void)
{
    ui_Q2P9HGScreen = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_Q2P9HGScreen, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE |
                       LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_Q2P9HGScreen, lv_color_hex(0xACB6BD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Q2P9HGScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui_Q2P9HGScreen, &ui_img_venice_18th_2560x720_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Q2P9HGScreen, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Q2P9HGScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Q2P9HGScreen, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSLogo = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSLogo, &ui_img_studio_go_ball_logo_225x205_png);
    lv_obj_set_width(ui_Q2P9HGSLogo, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_Q2P9HGSLogo, LV_SIZE_CONTENT);    /// 217
    lv_obj_set_x(ui_Q2P9HGSLogo, 0);
    lv_obj_set_y(ui_Q2P9HGSLogo, -125);
    lv_obj_set_align(ui_Q2P9HGSLogo, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSLogo, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSMMButton = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSMMButton, &ui_img_go_ball_300x273_png);
    lv_obj_set_width(ui_Q2P9HGSMMButton, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_Q2P9HGSMMButton, LV_SIZE_CONTENT);    /// 273
    lv_obj_set_x(ui_Q2P9HGSMMButton, -610);
    lv_obj_set_y(ui_Q2P9HGSMMButton, -128);
    lv_obj_set_align(ui_Q2P9HGSMMButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Q2P9HGSMMButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_Q2P9HGSMMButton,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSMMBText = lv_label_create(ui_Q2P9HGSMMButton);
    lv_obj_set_width(ui_Q2P9HGSMMBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSMMBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSMMBText, 1);
    lv_obj_set_y(ui_Q2P9HGSMMBText, -4);
    lv_obj_set_align(ui_Q2P9HGSMMBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSMMBText, "Main\nMenu");
    lv_obj_add_flag(ui_Q2P9HGSMMBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_Q2P9HGSMMBText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSMMBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSMMBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Q2P9HGSMMBText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Q2P9HGSMMBText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Q2P9HGSMMBText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSMMBText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSFormat = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSFormat, &ui_img_go_ball_300x273_png);
    lv_obj_set_width(ui_Q2P9HGSFormat, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_Q2P9HGSFormat, LV_SIZE_CONTENT);    /// 287
    lv_obj_set_x(ui_Q2P9HGSFormat, 610);
    lv_obj_set_y(ui_Q2P9HGSFormat, -128);
    lv_obj_set_align(ui_Q2P9HGSFormat, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSFormat,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSFText = lv_label_create(ui_Q2P9HGSFormat);
    lv_obj_set_width(ui_Q2P9HGSFText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSFText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSFText, -2);
    lv_obj_set_y(ui_Q2P9HGSFText, 2);
    lv_obj_set_align(ui_Q2P9HGSFText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSFText, "2P\nQuota\n9H");
    lv_obj_remove_flag(ui_Q2P9HGSFText, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSFText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSFText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Q2P9HGSFText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSFText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSBCounter = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSBCounter, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_Q2P9HGSBCounter, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_Q2P9HGSBCounter, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_Q2P9HGSBCounter, 0);
    lv_obj_set_y(ui_Q2P9HGSBCounter, 140);
    lv_obj_set_align(ui_Q2P9HGSBCounter, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSBCounter,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSBCText = lv_label_create(ui_Q2P9HGSBCounter);
    lv_obj_set_width(ui_Q2P9HGSBCText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSBCText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSBCText, -2);
    lv_obj_set_y(ui_Q2P9HGSBCText, -48);
    lv_obj_set_align(ui_Q2P9HGSBCText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSBCText, "Balls");
    lv_obj_add_flag(ui_Q2P9HGSBCText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_Q2P9HGSBCText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSBCText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSBCText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSBCText, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSBCSpinbox = lv_spinbox_create(ui_Q2P9HGSBCounter);
    lv_obj_set_width(ui_Q2P9HGSBCSpinbox, 80);
    lv_obj_set_height(ui_Q2P9HGSBCSpinbox, 85);
    lv_obj_set_x(ui_Q2P9HGSBCSpinbox, -1);
    lv_obj_set_y(ui_Q2P9HGSBCSpinbox, 31);
    lv_obj_set_align(ui_Q2P9HGSBCSpinbox, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSBCSpinbox,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_spinbox_set_digit_format(ui_Q2P9HGSBCSpinbox, 1, 2);
    lv_spinbox_set_range(ui_Q2P9HGSBCSpinbox, 0, 2);
    lv_spinbox_set_cursor_pos(ui_Q2P9HGSBCSpinbox, 1 - 1);
    lv_spinbox_set_value(ui_Q2P9HGSBCSpinbox, 2);
    lv_obj_set_style_bg_color(ui_Q2P9HGSBCSpinbox, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Q2P9HGSBCSpinbox, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Q2P9HGSBCSpinbox, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Q2P9HGSBCSpinbox, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Q2P9HGSBCSpinbox, lv_color_hex(0xACB6BD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSBCSpinbox, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Q2P9HGSBCSpinbox, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSBCSpinbox, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Q2P9HGSBCSpinbox, lv_color_hex(0x5AB66A), LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Q2P9HGSBCSpinbox, 255, LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Q2P9HGSBCSpinbox, lv_color_hex(0xACB6BD), LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSBCSpinbox, 255, LV_PART_CURSOR | LV_STATE_DEFAULT);

    ui_Q2P9HGSP1Scoreboard = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSP1Scoreboard, &ui_img_go_ball_450x431_png);
    lv_obj_set_width(ui_Q2P9HGSP1Scoreboard, LV_SIZE_CONTENT);   /// 450
    lv_obj_set_height(ui_Q2P9HGSP1Scoreboard, LV_SIZE_CONTENT);    /// 431
    lv_obj_set_x(ui_Q2P9HGSP1Scoreboard, -292);
    lv_obj_set_y(ui_Q2P9HGSP1Scoreboard, 5);
    lv_obj_set_align(ui_Q2P9HGSP1Scoreboard, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSP1Scoreboard,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSP1SText = lv_label_create(ui_Q2P9HGSP1Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP1SText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP1SText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP1SText, 0);
    lv_obj_set_y(ui_Q2P9HGSP1SText, -127);
    lv_obj_set_align(ui_Q2P9HGSP1SText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP1SText, "Player 1");
    lv_obj_remove_flag(ui_Q2P9HGSP1SText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP1SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP1SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Q2P9HGSP1SText, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP1SText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Q2P9HGSP1SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Q2P9HGSP1SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP1SPar3Text = lv_label_create(ui_Q2P9HGSP1Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP1SPar3Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP1SPar3Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP1SPar3Text, -4);
    lv_obj_set_y(ui_Q2P9HGSP1SPar3Text, -50);
    lv_obj_set_align(ui_Q2P9HGSP1SPar3Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP1SPar3Text, "Par 3 - 0 0 ");
    lv_obj_remove_flag(ui_Q2P9HGSP1SPar3Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP1SPar3Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP1SPar3Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP1SPar3Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP1SPar4Text = lv_label_create(ui_Q2P9HGSP1Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP1SPar4Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP1SPar4Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP1SPar4Text, 0);
    lv_obj_set_y(ui_Q2P9HGSP1SPar4Text, 8);
    lv_obj_set_align(ui_Q2P9HGSP1SPar4Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP1SPar4Text, "Par 4 - 0 0 0 0 0");
    lv_obj_remove_flag(ui_Q2P9HGSP1SPar4Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP1SPar4Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP1SPar4Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP1SPar4Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP1SPar5Text = lv_label_create(ui_Q2P9HGSP1Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP1SPar5Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP1SPar5Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP1SPar5Text, -9);
    lv_obj_set_y(ui_Q2P9HGSP1SPar5Text, 67);
    lv_obj_set_align(ui_Q2P9HGSP1SPar5Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP1SPar5Text, "Par 5 - 0 0 ");
    lv_obj_remove_flag(ui_Q2P9HGSP1SPar5Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP1SPar5Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP1SPar5Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP1SPar5Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP2Scoreboard = lv_image_create(ui_Q2P9HGScreen);
    lv_image_set_src(ui_Q2P9HGSP2Scoreboard, &ui_img_go_ball_450x431_png);
    lv_obj_set_width(ui_Q2P9HGSP2Scoreboard, LV_SIZE_CONTENT);   /// 450
    lv_obj_set_height(ui_Q2P9HGSP2Scoreboard, LV_SIZE_CONTENT);    /// 431
    lv_obj_set_x(ui_Q2P9HGSP2Scoreboard, 292);
    lv_obj_set_y(ui_Q2P9HGSP2Scoreboard, 5);
    lv_obj_set_align(ui_Q2P9HGSP2Scoreboard, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_Q2P9HGSP2Scoreboard,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_Q2P9HGSP2SText = lv_label_create(ui_Q2P9HGSP2Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP2SText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP2SText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP2SText, 0);
    lv_obj_set_y(ui_Q2P9HGSP2SText, -127);
    lv_obj_set_align(ui_Q2P9HGSP2SText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP2SText, "Player 2");
    lv_obj_remove_flag(ui_Q2P9HGSP2SText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP2SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP2SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Q2P9HGSP2SText, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP2SText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Q2P9HGSP2SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Q2P9HGSP2SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP2SPar3Text = lv_label_create(ui_Q2P9HGSP2Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP2SPar3Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP2SPar3Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP2SPar3Text, -4);
    lv_obj_set_y(ui_Q2P9HGSP2SPar3Text, -50);
    lv_obj_set_align(ui_Q2P9HGSP2SPar3Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP2SPar3Text, "Par 3 - 0 0 ");
    lv_obj_remove_flag(ui_Q2P9HGSP2SPar3Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP2SPar3Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP2SPar3Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP2SPar3Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP2SPar4Text = lv_label_create(ui_Q2P9HGSP2Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP2SPar4Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP2SPar4Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP2SPar4Text, 0);
    lv_obj_set_y(ui_Q2P9HGSP2SPar4Text, 8);
    lv_obj_set_align(ui_Q2P9HGSP2SPar4Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP2SPar4Text, "Par 4 - 0 0 0 0 0");
    lv_obj_remove_flag(ui_Q2P9HGSP2SPar4Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP2SPar4Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP2SPar4Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP2SPar4Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Q2P9HGSP2SPar5Text = lv_label_create(ui_Q2P9HGSP2Scoreboard);
    lv_obj_set_width(ui_Q2P9HGSP2SPar5Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Q2P9HGSP2SPar5Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Q2P9HGSP2SPar5Text, -9);
    lv_obj_set_y(ui_Q2P9HGSP2SPar5Text, 67);
    lv_obj_set_align(ui_Q2P9HGSP2SPar5Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Q2P9HGSP2SPar5Text, "Par 5 - 0 0 ");
    lv_obj_remove_flag(ui_Q2P9HGSP2SPar5Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Q2P9HGSP2SPar5Text, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Q2P9HGSP2SPar5Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Q2P9HGSP2SPar5Text, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Q2P9HGSMMBText, ui_event_Q2P9HGSMMBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Q2P9HGSMMButton, ui_event_Q2P9HGSMMButton, LV_EVENT_ALL, NULL);

}
