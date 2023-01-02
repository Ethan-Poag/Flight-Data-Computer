// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Screen1_Panel1;
lv_obj_t * ui_WAKE_TITLE;
lv_obj_t * ui_Screen1_Label6;
lv_obj_t * ui_Screen1_Label7;
lv_obj_t * ui_Screen1_Roller1;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Screen2Panel1;
lv_obj_t * ui_WAKE_TITLE1;
lv_obj_t * ui_Screen1_Label1;
lv_obj_t * ui_Screen1_Label2;
lv_obj_t * ui_Screen2_Label1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Panel1, 480);
    lv_obj_set_height(ui_Screen1_Panel1, 25);
    lv_obj_set_align(ui_Screen1_Panel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Panel1, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WAKE_TITLE = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_WAKE_TITLE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WAKE_TITLE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WAKE_TITLE, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WAKE_TITLE, "PC-1");
    lv_obj_set_style_text_align(ui_WAKE_TITLE, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label6 = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label6, "14:29Z");

    ui_Screen1_Label7 = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_Screen1_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label7, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Screen1_Label7, "BATT");

    ui_Screen1_Roller1 = lv_roller_create(ui_Screen1);
    lv_roller_set_options(ui_Screen1_Roller1,
                          "Unit Conversions\nAltitude\nCloud Base\nStandard Atmosphere\nAirspeed\nFuel\nGround Speed\nGlide\nClimb & Descent\nWind Component\nEstimated Time Arrival\nTo - From\nCompass Heading\nWind Correction\nRhumb Line\nHolding Pattern",
                          LV_ROLLER_MODE_INFINITE);
    lv_obj_set_width(ui_Screen1_Roller1, 480);
    lv_obj_set_height(ui_Screen1_Roller1, 295);
    lv_obj_set_x(ui_Screen1_Roller1, 0);
    lv_obj_set_y(ui_Screen1_Roller1, 12);
    lv_obj_set_align(ui_Screen1_Roller1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Screen1_Roller1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Screen1_Roller1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Screen1_Roller1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen1_Roller1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1_Roller1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen1_Roller1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2Panel1 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2Panel1, 480);
    lv_obj_set_height(ui_Screen2Panel1, 25);
    lv_obj_set_align(ui_Screen2Panel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Screen2Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Screen2Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2Panel1, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Screen2Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WAKE_TITLE1 = lv_label_create(ui_Screen2Panel1);
    lv_obj_set_width(ui_WAKE_TITLE1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WAKE_TITLE1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WAKE_TITLE1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_WAKE_TITLE1, "PC-1");
    lv_obj_set_style_text_align(ui_WAKE_TITLE1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label1 = lv_label_create(ui_Screen2Panel1);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Label1, "14:29Z");

    ui_Screen1_Label2 = lv_label_create(ui_Screen2Panel1);
    lv_obj_set_width(ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Label2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Screen1_Label2, "BATT");

    ui_Screen2_Label1 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen2_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label1, "Unit Conversions");

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
