// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: Go Ball Raspbery PI

#include "../ui.h"

void ui_MP2V29HGScreen_screen_init(void)
{
    ui_MP2V29HGScreen = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_MP2V29HGScreen,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                       LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_MP2V29HGScreen, lv_color_hex(0xACB6BD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MP2V29HGScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui_MP2V29HGScreen, &ui_img_venice_18th_2560x720_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_MP2V29HGScreen, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_MP2V29HGScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_MP2V29HGScreen, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSLogo = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSLogo, &ui_img_studio_go_ball_logo_350x319_png);
    lv_obj_set_width(ui_MP2V29HGSLogo, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_MP2V29HGSLogo, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_MP2V29HGSLogo, 0);
    lv_obj_set_y(ui_MP2V29HGSLogo, -110);
    lv_obj_set_align(ui_MP2V29HGSLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MP2V29HGSLogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_remove_flag(ui_MP2V29HGSLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MP2V29HGST1Scoreboard = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGST1Scoreboard, &ui_img_go_ball_350x319_png);
    lv_obj_set_width(ui_MP2V29HGST1Scoreboard, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_MP2V29HGST1Scoreboard, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_MP2V29HGST1Scoreboard, -326);
    lv_obj_set_y(ui_MP2V29HGST1Scoreboard, 83);
    lv_obj_set_align(ui_MP2V29HGST1Scoreboard, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGST1Scoreboard,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGST1SText = lv_label_create(ui_MP2V29HGST1Scoreboard);
    lv_obj_set_width(ui_MP2V29HGST1SText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGST1SText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MP2V29HGST1SText, 0);
    lv_obj_set_y(ui_MP2V29HGST1SText, -56);
    lv_obj_set_align(ui_MP2V29HGST1SText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGST1SText, "Team 1");
    lv_obj_remove_flag(ui_MP2V29HGST1SText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGST1SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGST1SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MP2V29HGST1SText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MP2V29HGST1SText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGST1SText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGST1SPanel = lv_obj_create(ui_MP2V29HGST1Scoreboard);
    lv_obj_set_width(ui_MP2V29HGST1SPanel, 106);
    lv_obj_set_height(ui_MP2V29HGST1SPanel, 98);
    lv_obj_set_x(ui_MP2V29HGST1SPanel, 0);
    lv_obj_set_y(ui_MP2V29HGST1SPanel, 45);
    lv_obj_set_align(ui_MP2V29HGST1SPanel, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGST1SPanel,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_MP2V29HGST1SPanel, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MP2V29HGST1SPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGST1SPText = lv_label_create(ui_MP2V29HGST1SPanel);
    lv_obj_set_width(ui_MP2V29HGST1SPText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGST1SPText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGST1SPText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGST1SPText, "0");
    lv_obj_remove_flag(ui_MP2V29HGST1SPText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGST1SPText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGST1SPText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGST1SPText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSBCounter = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSBCounter, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_MP2V29HGSBCounter, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MP2V29HGSBCounter, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MP2V29HGSBCounter, 0);
    lv_obj_set_y(ui_MP2V29HGSBCounter, 166);
    lv_obj_set_align(ui_MP2V29HGSBCounter, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGSBCounter,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGSBCText = lv_label_create(ui_MP2V29HGSBCounter);
    lv_obj_set_width(ui_MP2V29HGSBCText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSBCText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MP2V29HGSBCText, -2);
    lv_obj_set_y(ui_MP2V29HGSBCText, -54);
    lv_obj_set_align(ui_MP2V29HGSBCText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSBCText, "Balls");
    lv_obj_remove_flag(ui_MP2V29HGSBCText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSBCText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSBCText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSBCText, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSBCPanel = lv_obj_create(ui_MP2V29HGSBCounter);
    lv_obj_set_width(ui_MP2V29HGSBCPanel, 85);
    lv_obj_set_height(ui_MP2V29HGSBCPanel, 80);
    lv_obj_set_x(ui_MP2V29HGSBCPanel, 0);
    lv_obj_set_y(ui_MP2V29HGSBCPanel, 30);
    lv_obj_set_align(ui_MP2V29HGSBCPanel, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGSBCPanel,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_MP2V29HGSBCPanel, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MP2V29HGSBCPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSBCPText = lv_label_create(ui_MP2V29HGSBCPanel);
    lv_obj_set_width(ui_MP2V29HGSBCPText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSBCPText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGSBCPText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSBCPText, "0");
    lv_obj_remove_flag(ui_MP2V29HGSBCPText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSBCPText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSBCPText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSBCPText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSSCButton = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSSCButton, &ui_img_go_ball_300x273_png);
    lv_obj_set_width(ui_MP2V29HGSSCButton, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_MP2V29HGSSCButton, LV_SIZE_CONTENT);    /// 273
    lv_obj_set_x(ui_MP2V29HGSSCButton, 620);
    lv_obj_set_y(ui_MP2V29HGSSCButton, -128);
    lv_obj_set_align(ui_MP2V29HGSSCButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MP2V29HGSSCButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MP2V29HGSSCButton,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGSSCBText = lv_label_create(ui_MP2V29HGSSCButton);
    lv_obj_set_width(ui_MP2V29HGSSCBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSSCBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGSSCBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSSCBText, "Scorecard");
    lv_obj_add_flag(ui_MP2V29HGSSCBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MP2V29HGSSCBText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSSCBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSSCBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSSCBText, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSMMButton = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSMMButton, &ui_img_go_ball_300x273_png);
    lv_obj_set_width(ui_MP2V29HGSMMButton, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_MP2V29HGSMMButton, LV_SIZE_CONTENT);    /// 273
    lv_obj_set_x(ui_MP2V29HGSMMButton, -618);
    lv_obj_set_y(ui_MP2V29HGSMMButton, -128);
    lv_obj_set_align(ui_MP2V29HGSMMButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MP2V29HGSMMButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MP2V29HGSMMButton,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGSMMBText = lv_label_create(ui_MP2V29HGSMMButton);
    lv_obj_set_width(ui_MP2V29HGSMMBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSMMBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGSMMBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSMMBText, "Main\nMenu");
    lv_obj_add_flag(ui_MP2V29HGSMMBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MP2V29HGSMMBText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSMMBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSMMBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MP2V29HGSMMBText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MP2V29HGSMMBText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MP2V29HGSMMBText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSMMBText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGST2Scoreboard = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGST2Scoreboard, &ui_img_go_ball_350x319_png);
    lv_obj_set_width(ui_MP2V29HGST2Scoreboard, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_MP2V29HGST2Scoreboard, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_MP2V29HGST2Scoreboard, 326);
    lv_obj_set_y(ui_MP2V29HGST2Scoreboard, 87);
    lv_obj_set_align(ui_MP2V29HGST2Scoreboard, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGST2Scoreboard,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGST2SText = lv_label_create(ui_MP2V29HGST2Scoreboard);
    lv_obj_set_width(ui_MP2V29HGST2SText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGST2SText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MP2V29HGST2SText, 0);
    lv_obj_set_y(ui_MP2V29HGST2SText, -56);
    lv_obj_set_align(ui_MP2V29HGST2SText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGST2SText, "Team 2");
    lv_obj_remove_flag(ui_MP2V29HGST2SText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGST2SText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGST2SText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MP2V29HGST2SText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MP2V29HGST2SText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGST2SText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGST2SPanel = lv_obj_create(ui_MP2V29HGST2Scoreboard);
    lv_obj_set_width(ui_MP2V29HGST2SPanel, 106);
    lv_obj_set_height(ui_MP2V29HGST2SPanel, 98);
    lv_obj_set_x(ui_MP2V29HGST2SPanel, 0);
    lv_obj_set_y(ui_MP2V29HGST2SPanel, 45);
    lv_obj_set_align(ui_MP2V29HGST2SPanel, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGST2SPanel,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_MP2V29HGST2SPanel, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MP2V29HGST2SPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGST2SPText = lv_label_create(ui_MP2V29HGST2SPanel);
    lv_obj_set_width(ui_MP2V29HGST2SPText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGST2SPText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGST2SPText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGST2SPText, "0");
    lv_obj_remove_flag(ui_MP2V29HGST2SPText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGST2SPText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGST2SPText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGST2SPText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSHCounter = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSHCounter, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_MP2V29HGSHCounter, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MP2V29HGSHCounter, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MP2V29HGSHCounter, 635);
    lv_obj_set_y(ui_MP2V29HGSHCounter, 148);
    lv_obj_set_align(ui_MP2V29HGSHCounter, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGSHCounter,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGSHCText = lv_label_create(ui_MP2V29HGSHCounter);
    lv_obj_set_width(ui_MP2V29HGSHCText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSHCText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MP2V29HGSHCText, 0);
    lv_obj_set_y(ui_MP2V29HGSHCText, -46);
    lv_obj_set_align(ui_MP2V29HGSHCText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSHCText, "Hole");
    lv_obj_remove_flag(ui_MP2V29HGSHCText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSHCText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSHCText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MP2V29HGSHCText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MP2V29HGSHCText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSHCText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSHCPanel = lv_obj_create(ui_MP2V29HGSHCounter);
    lv_obj_set_width(ui_MP2V29HGSHCPanel, 85);
    lv_obj_set_height(ui_MP2V29HGSHCPanel, 80);
    lv_obj_set_x(ui_MP2V29HGSHCPanel, 0);
    lv_obj_set_y(ui_MP2V29HGSHCPanel, 30);
    lv_obj_set_align(ui_MP2V29HGSHCPanel, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGSHCPanel,
                       LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_MP2V29HGSHCPanel, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MP2V29HGSHCPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSHCPText = lv_label_create(ui_MP2V29HGSHCPanel);
    lv_obj_set_width(ui_MP2V29HGSHCPText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSHCPText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MP2V29HGSHCPText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSHCPText, "0");
    lv_obj_remove_flag(ui_MP2V29HGSHCPText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSHCPText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSHCPText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSHCPText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MP2V29HGSHFormat = lv_image_create(ui_MP2V29HGScreen);
    lv_image_set_src(ui_MP2V29HGSHFormat, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_MP2V29HGSHFormat, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MP2V29HGSHFormat, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MP2V29HGSHFormat, -639);
    lv_obj_set_y(ui_MP2V29HGSHFormat, 146);
    lv_obj_set_align(ui_MP2V29HGSHFormat, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MP2V29HGSHFormat,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MP2V29HGSHFText = lv_label_create(ui_MP2V29HGSHFormat);
    lv_obj_set_width(ui_MP2V29HGSHFText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MP2V29HGSHFText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MP2V29HGSHFText, 0);
    lv_obj_set_y(ui_MP2V29HGSHFText, 6);
    lv_obj_set_align(ui_MP2V29HGSHFText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MP2V29HGSHFText, "Team\nMatch\n9H");
    lv_obj_remove_flag(ui_MP2V29HGSHFText,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MP2V29HGSHFText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MP2V29HGSHFText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MP2V29HGSHFText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MP2V29HGSHFText, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_MP2V29HGSSCBText, ui_event_MP2V29HGSSCBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MP2V29HGSSCButton, ui_event_MP2V29HGSSCButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MP2V29HGSMMBText, ui_event_MP2V29HGSMMBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MP2V29HGSMMButton, ui_event_MP2V29HGSMMButton, LV_EVENT_ALL, NULL);

}
