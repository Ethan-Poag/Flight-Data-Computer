
#include "CALC_LCD_INIT.h"
#include "CALC_KEB_LIB_1.h"

long Tupto;
long milsss;

void setup()
{

  Serial.begin(115200);
  // Serial.setDebugOutput(true);
  // while(!Serial);
  Serial.println("LVGL Hello World Demo");

  LCD_INIT();
  KEB_INIT();
  ui_init();

}

void loop()
{
  HomeScreen();

  delay(5);
}

void HomeScreen () {
  int CurOpt = 0;
  
  lv_scr_load(ui_Screen1);
  lv_roller_set_selected(ui_Screen1_Roller1, 0, LV_ANIM_ON);
  lv_timer_handler();
  
  while(1) {
    KEB_GET_KEYS();

    if(SW_STATES[15] == 2) {
      if(CurOpt < 1) CurOpt = 15;
      else CurOpt--;
      lv_roller_set_selected(ui_Screen1_Roller1, CurOpt, LV_ANIM_ON);
    }

    if(SW_STATES[17] == 2) {
      if(CurOpt > 14) CurOpt = 0;
      else CurOpt++;
      lv_roller_set_selected(ui_Screen1_Roller1, CurOpt, LV_ANIM_ON);
    }

    if(SW_STATES[16] == 2) {
      uint16_t SelectIT = lv_roller_get_selected(ui_Screen1_Roller1);
      if(SelectIT == 0) {
      UnitConversions();
      }
    }
    
    lv_timer_handler();

    delay(10);
  }
}

void UnitConversions () {
  lv_scr_load(ui_Screen2);
  lv_timer_handler();
  while(1) {
    KEB_GET_KEYS();
    if(SW_STATES[2] == 2) {
      HomeScreen();
    }
    delay(10);
  }
}
