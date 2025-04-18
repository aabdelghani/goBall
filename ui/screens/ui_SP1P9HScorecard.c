// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: Go Ball Raspbery PI

#include "../ui.h"

void ui_SP1P9HScorecard_screen_init(void)
{
    ui_SP1P9HScorecard = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_SP1P9HScorecard,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                       LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScorecard, lv_color_hex(0xACB6BD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScorecard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui_SP1P9HScorecard, &ui_img_venice_18th_2560x720_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SP1P9HScorecard, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SP1P9HScorecard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SP1P9HScorecard, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScLogo = lv_image_create(ui_SP1P9HScorecard);
    lv_image_set_src(ui_SP1P9HScLogo, &ui_img_studio_go_ball_logo_350x319_png);
    lv_obj_set_width(ui_SP1P9HScLogo, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_SP1P9HScLogo, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_SP1P9HScLogo, 0);
    lv_obj_set_y(ui_SP1P9HScLogo, -125);
    lv_obj_set_align(ui_SP1P9HScLogo, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScLogo, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_SP1P9HScMMButton = lv_image_create(ui_SP1P9HScorecard);
    lv_image_set_src(ui_SP1P9HScMMButton, &ui_img_go_ball_450x431_png);
    lv_obj_set_width(ui_SP1P9HScMMButton, LV_SIZE_CONTENT);   /// 450
    lv_obj_set_height(ui_SP1P9HScMMButton, LV_SIZE_CONTENT);    /// 431
    lv_obj_set_x(ui_SP1P9HScMMButton, -915);
    lv_obj_set_y(ui_SP1P9HScMMButton, -80);
    lv_obj_set_align(ui_SP1P9HScMMButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SP1P9HScMMButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_SP1P9HScMMButton,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_SP1P9HScMMBText = lv_label_create(ui_SP1P9HScMMButton);
    lv_obj_set_width(ui_SP1P9HScMMBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScMMBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScMMBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScMMBText, "Main\nMenu");
    lv_obj_add_flag(ui_SP1P9HScMMBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_SP1P9HScMMBText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScMMBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScMMBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_SP1P9HScMMBText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_SP1P9HScMMBText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_SP1P9HScMMBText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScMMBText, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScBButton = lv_image_create(ui_SP1P9HScorecard);
    lv_image_set_src(ui_SP1P9HScBButton, &ui_img_go_ball_450x431_png);
    lv_obj_set_width(ui_SP1P9HScBButton, LV_SIZE_CONTENT);   /// 450
    lv_obj_set_height(ui_SP1P9HScBButton, LV_SIZE_CONTENT);    /// 431
    lv_obj_set_x(ui_SP1P9HScBButton, 915);
    lv_obj_set_y(ui_SP1P9HScBButton, -80);
    lv_obj_set_align(ui_SP1P9HScBButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SP1P9HScBButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_SP1P9HScBButton,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_SP1P9HScBBText = lv_label_create(ui_SP1P9HScBButton);
    lv_obj_set_width(ui_SP1P9HScBBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScBBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScBBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScBBText, "Back");
    lv_obj_add_flag(ui_SP1P9HScBBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_SP1P9HScBBText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScBBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScBBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_SP1P9HScBBText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_SP1P9HScBBText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScBBText, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP19HPScPText = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP19HPScPText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP19HPScPText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP19HPScPText, -532);
    lv_obj_set_y(ui_SP19HPScPText, 225);
    lv_obj_set_align(ui_SP19HPScPText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP19HPScPText, "Player 1");
    lv_obj_remove_flag(ui_SP19HPScPText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP19HPScPText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP19HPScPText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_SP19HPScPText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_SP19HPScPText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP19HPScPText, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText, -478);
    lv_obj_set_y(ui_SP1P9HScHText, 120);
    lv_obj_set_align(ui_SP1P9HScHText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText, "Hole");
    lv_obj_remove_flag(ui_SP1P9HScHText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText1 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText1, -343);
    lv_obj_set_y(ui_SP1P9HScHText1, 120);
    lv_obj_set_align(ui_SP1P9HScHText1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText1, "1");
    lv_obj_remove_flag(ui_SP1P9HScHText1,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText1, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText2 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText2, -238);
    lv_obj_set_y(ui_SP1P9HScHText2, 120);
    lv_obj_set_align(ui_SP1P9HScHText2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText2, "2");
    lv_obj_remove_flag(ui_SP1P9HScHText2,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText2, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText3 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText3, -133);
    lv_obj_set_y(ui_SP1P9HScHText3, 120);
    lv_obj_set_align(ui_SP1P9HScHText3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText3, "3");
    lv_obj_remove_flag(ui_SP1P9HScHText3,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText3, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText4 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText4, -28);
    lv_obj_set_y(ui_SP1P9HScHText4, 120);
    lv_obj_set_align(ui_SP1P9HScHText4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText4, "4");
    lv_obj_remove_flag(ui_SP1P9HScHText4,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText4, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText5 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText5, 77);
    lv_obj_set_y(ui_SP1P9HScHText5, 120);
    lv_obj_set_align(ui_SP1P9HScHText5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText5, "5");
    lv_obj_remove_flag(ui_SP1P9HScHText5,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText5, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText6 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText6, 183);
    lv_obj_set_y(ui_SP1P9HScHText6, 120);
    lv_obj_set_align(ui_SP1P9HScHText6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText6, "6");
    lv_obj_remove_flag(ui_SP1P9HScHText6,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText6, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText7 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText7, 289);
    lv_obj_set_y(ui_SP1P9HScHText7, 120);
    lv_obj_set_align(ui_SP1P9HScHText7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText7, "7");
    lv_obj_remove_flag(ui_SP1P9HScHText7,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText7, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText8 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText8, 395);
    lv_obj_set_y(ui_SP1P9HScHText8, 120);
    lv_obj_set_align(ui_SP1P9HScHText8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText8, "8");
    lv_obj_remove_flag(ui_SP1P9HScHText8,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText8, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHText9 = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHText9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHText9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHText9, 501);
    lv_obj_set_y(ui_SP1P9HScHText9, 120);
    lv_obj_set_align(ui_SP1P9HScHText9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHText9, "9");
    lv_obj_remove_flag(ui_SP1P9HScHText9,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHText9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHText9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHText9, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScHTextF = lv_label_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScHTextF, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScHTextF, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SP1P9HScHTextF, 607);
    lv_obj_set_y(ui_SP1P9HScHTextF, 120);
    lv_obj_set_align(ui_SP1P9HScHTextF, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScHTextF, "F");
    lv_obj_remove_flag(ui_SP1P9HScHTextF,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScHTextF, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScHTextF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScHTextF, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox1 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox1, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox1, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox1, -343);
    lv_obj_set_y(ui_SP1P9HScPSpinbox1, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox1, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox1,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox1, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS1Text = lv_label_create(ui_SP1P9HScPSpinbox1);
    lv_obj_set_width(ui_SP1P9HScPS1Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS1Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS1Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS1Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS1Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS1Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS1Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS1Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox2 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox2, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox2, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox2, -238);
    lv_obj_set_y(ui_SP1P9HScPSpinbox2, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox2, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox2,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox2, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS2Text = lv_label_create(ui_SP1P9HScPSpinbox2);
    lv_obj_set_width(ui_SP1P9HScPS2Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS2Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS2Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS2Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS2Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS2Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS2Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS2Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox3 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox3, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox3, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox3, -133);
    lv_obj_set_y(ui_SP1P9HScPSpinbox3, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox3, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox3,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox3, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS3Text = lv_label_create(ui_SP1P9HScPSpinbox3);
    lv_obj_set_width(ui_SP1P9HScPS3Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS3Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS3Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS3Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS3Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS3Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS3Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS3Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox4 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox4, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox4, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox4, -28);
    lv_obj_set_y(ui_SP1P9HScPSpinbox4, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox4, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox4,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox4, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS4Text = lv_label_create(ui_SP1P9HScPSpinbox4);
    lv_obj_set_width(ui_SP1P9HScPS4Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS4Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS4Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS4Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS4Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS4Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS4Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS4Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox5 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox5, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox5, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox5, 77);
    lv_obj_set_y(ui_SP1P9HScPSpinbox5, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox5, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox5,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox5, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS5Text = lv_label_create(ui_SP1P9HScPSpinbox5);
    lv_obj_set_width(ui_SP1P9HScPS5Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS5Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS5Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS5Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS5Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS5Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS5Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS5Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox6 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox6, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox6, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox6, 183);
    lv_obj_set_y(ui_SP1P9HScPSpinbox6, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox6, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox6,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox6, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS6Text = lv_label_create(ui_SP1P9HScPSpinbox6);
    lv_obj_set_width(ui_SP1P9HScPS6Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS6Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS6Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS6Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS6Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS6Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS6Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS6Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox7 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox7, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox7, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox7, 289);
    lv_obj_set_y(ui_SP1P9HScPSpinbox7, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox7, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox7,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox7, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS7Text = lv_label_create(ui_SP1P9HScPSpinbox7);
    lv_obj_set_width(ui_SP1P9HScPS7Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS7Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS7Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS7Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS7Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS7Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS7Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS7Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox8 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox8, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox8, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox8, 395);
    lv_obj_set_y(ui_SP1P9HScPSpinbox8, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox8, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox8,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox8, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS8Text = lv_label_create(ui_SP1P9HScPSpinbox8);
    lv_obj_set_width(ui_SP1P9HScPS8Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS8Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS8Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS8Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS8Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS8Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS8Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS8Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinbox9 = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinbox9, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinbox9, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinbox9, 501);
    lv_obj_set_y(ui_SP1P9HScPSpinbox9, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinbox9, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinbox9,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinbox9, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinbox9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPS9Text = lv_label_create(ui_SP1P9HScPSpinbox9);
    lv_obj_set_width(ui_SP1P9HScPS9Text, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPS9Text, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPS9Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPS9Text, "0");
    lv_obj_remove_flag(ui_SP1P9HScPS9Text,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPS9Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPS9Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPS9Text, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSpinboxF = lv_obj_create(ui_SP1P9HScorecard);
    lv_obj_set_width(ui_SP1P9HScPSpinboxF, 100);
    lv_obj_set_height(ui_SP1P9HScPSpinboxF, 100);
    lv_obj_set_x(ui_SP1P9HScPSpinboxF, 607);
    lv_obj_set_y(ui_SP1P9HScPSpinboxF, 225);
    lv_obj_set_align(ui_SP1P9HScPSpinboxF, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_SP1P9HScPSpinboxF,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_SP1P9HScPSpinboxF, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SP1P9HScPSpinboxF, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SP1P9HScPSFText = lv_label_create(ui_SP1P9HScPSpinboxF);
    lv_obj_set_width(ui_SP1P9HScPSFText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SP1P9HScPSFText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SP1P9HScPSFText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SP1P9HScPSFText, "0");
    lv_obj_remove_flag(ui_SP1P9HScPSFText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_SP1P9HScPSFText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SP1P9HScPSFText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SP1P9HScPSFText, &ui_font_Unitblock_72, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_SP1P9HScMMBText, ui_event_SP1P9HScMMBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SP1P9HScMMButton, ui_event_SP1P9HScMMButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SP1P9HScBBText, ui_event_SP1P9HScBBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SP1P9HScBButton, ui_event_SP1P9HScBButton, LV_EVENT_ALL, NULL);

}
