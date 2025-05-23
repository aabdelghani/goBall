// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: Go Ball Raspbery PI

#include "../ui.h"

void ui_MPPSScreen_screen_init(void)
{
    ui_MPPSScreen = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_MPPSScreen, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE |
                       LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_MPPSScreen, lv_color_hex(0xACB6BD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MPPSScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui_MPPSScreen, &ui_img_venice_18th_2560x720_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_MPPSScreen, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_MPPSScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_MPPSScreen, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MPPS1V1Button = lv_image_create(ui_MPPSScreen);
    lv_image_set_src(ui_MPPS1V1Button, &ui_img_go_ball_350x319_png);
    lv_obj_set_width(ui_MPPS1V1Button, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_MPPS1V1Button, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_MPPS1V1Button, -245);
    lv_obj_set_y(ui_MPPS1V1Button, 90);
    lv_obj_set_align(ui_MPPS1V1Button, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MPPS1V1Button, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPS1V1Button,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MPPS1V1BText = lv_label_create(ui_MPPS1V1Button);
    lv_obj_set_width(ui_MPPS1V1BText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MPPS1V1BText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MPPS1V1BText, 0);
    lv_obj_set_y(ui_MPPS1V1BText, 8);
    lv_obj_set_align(ui_MPPS1V1BText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MPPS1V1BText, "Individual\n1V1");
    lv_obj_add_flag(ui_MPPS1V1BText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPS1V1BText, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MPPS1V1BText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MPPS1V1BText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MPPS1V1BText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MPPS1V1BText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MPPS1V1BText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MPPS1V1BText, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MPPS2V2Button = lv_image_create(ui_MPPSScreen);
    lv_image_set_src(ui_MPPS2V2Button, &ui_img_go_ball_350x319_png);
    lv_obj_set_width(ui_MPPS2V2Button, LV_SIZE_CONTENT);   /// 350
    lv_obj_set_height(ui_MPPS2V2Button, LV_SIZE_CONTENT);    /// 319
    lv_obj_set_x(ui_MPPS2V2Button, 245);
    lv_obj_set_y(ui_MPPS2V2Button, 90);
    lv_obj_set_align(ui_MPPS2V2Button, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MPPS2V2Button, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPS2V2Button,
                       LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                       LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MPPS2V2BText = lv_label_create(ui_MPPS2V2Button);
    lv_obj_set_width(ui_MPPS2V2BText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MPPS2V2BText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MPPS2V2BText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MPPS2V2BText, "Team\n2V2");
    lv_obj_add_flag(ui_MPPS2V2BText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPS2V2BText, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MPPS2V2BText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MPPS2V2BText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MPPS2V2BText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MPPS2V2BText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MPPS2V2BText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MPPS2V2BText, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MPPSFormat = lv_image_create(ui_MPPSScreen);
    lv_image_set_src(ui_MPPSFormat, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_MPPSFormat, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MPPSFormat, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MPPSFormat, -510);
    lv_obj_set_y(ui_MPPSFormat, -155);
    lv_obj_set_align(ui_MPPSFormat, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MPPSFormat, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MPPSFText = lv_label_create(ui_MPPSFormat);
    lv_obj_set_width(ui_MPPSFText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MPPSFText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MPPSFText, 0);
    lv_obj_set_y(ui_MPPSFText, 4);
    lv_obj_set_align(ui_MPPSFText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MPPSFText, "Match\nPlay");
    lv_obj_remove_flag(ui_MPPSFText, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MPPSFText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MPPSFText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_MPPSFText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MPPSFText, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MPPSBButton = lv_image_create(ui_MPPSScreen);
    lv_image_set_src(ui_MPPSBButton, &ui_img_go_ball_225x205_png);
    lv_obj_set_width(ui_MPPSBButton, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MPPSBButton, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MPPSBButton, 510);
    lv_obj_set_y(ui_MPPSBButton, -155);
    lv_obj_set_align(ui_MPPSBButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MPPSBButton, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPSBButton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_MPPSBBText = lv_label_create(ui_MPPSBButton);
    lv_obj_set_width(ui_MPPSBBText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MPPSBBText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MPPSBBText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MPPSBBText, "Back");
    lv_obj_add_flag(ui_MPPSBBText, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_MPPSBBText, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MPPSBBText, lv_color_hex(0x5AB66A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MPPSBBText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_MPPSBBText, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_MPPSBBText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MPPSBBText, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MPPSSLogo = lv_image_create(ui_MPPSScreen);
    lv_image_set_src(ui_MPPSSLogo, &ui_img_studio_go_ball_logo_225x205_png);
    lv_obj_set_width(ui_MPPSSLogo, LV_SIZE_CONTENT);   /// 225
    lv_obj_set_height(ui_MPPSSLogo, LV_SIZE_CONTENT);    /// 205
    lv_obj_set_x(ui_MPPSSLogo, 0);
    lv_obj_set_y(ui_MPPSSLogo, -155);
    lv_obj_set_align(ui_MPPSSLogo, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_MPPSSLogo, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                       LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    lv_obj_add_event_cb(ui_MPPS1V1BText, ui_event_MPPS1V1BText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MPPS1V1Button, ui_event_MPPS1V1Button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MPPS2V2BText, ui_event_MPPS2V2BText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MPPS2V2Button, ui_event_MPPS2V2Button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MPPSBBText, ui_event_MPPSBBText, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MPPSBButton, ui_event_MPPSBButton, LV_EVENT_ALL, NULL);

}
