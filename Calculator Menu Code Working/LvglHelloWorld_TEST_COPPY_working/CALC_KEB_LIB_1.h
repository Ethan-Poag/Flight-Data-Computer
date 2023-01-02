#include <Adafruit_TCA8418.h>

Adafruit_TCA8418 keypad;

#define ROWS 7
#define COLS 5
#define CTR_BUTTON 34

unsigned long SW16_ris_time = 0;  
unsigned long last_SW16_ris_time = 0;
unsigned long SW16_fal_time = 0;  
unsigned long last_SW16_fal_time = 0;

int swnum;

int SW16_STATE;

uint8_t SW_STATES[36];

uint8_t keymap [ROWS][COLS] = {{1, 8, 15, 22, 29},
                               {2, 9, 16, 23, 30},
                               {3, 10, 17, 24, 31},
                               {4, 11, 18, 25, 32},
                               {5, 12, 19, 26, 33},
                               {6, 13, 20, 27, 34},
                               {7, 14, 21, 28, 35}};

void IRAM_ATTR GET_SW16() 
{
    if (digitalRead(CTR_BUTTON) == RISING) {
      SW16_ris_time = millis();
      if (SW16_ris_time - last_SW16_ris_time > 300)
      {
        SW16_STATE = 2;
        last_SW16_ris_time = SW16_ris_time;
      }
    }
    else {
      SW16_fal_time = millis();
      if (SW16_fal_time - last_SW16_fal_time > 300)
      {
        SW16_STATE = 1;
        last_SW16_fal_time = SW16_fal_time;
      }
    }
}

void KEB_INIT() {
  
  keypad.begin(TCA8418_DEFAULT_ADDR, &Wire);

  keypad.matrix(ROWS, COLS);

  keypad.flush();

  attachInterrupt(CTR_BUTTON, GET_SW16, CHANGE);
  
}

void KEB_GET_KEYS() {
  
  if (SW16_STATE > 0) 
  {
    SW_STATES[16] = SW16_STATE;
    SW16_STATE = 0;
  }
  else if (keypad.available() > 0)
  {
    int k = keypad.getEvent();
    int k2 = k;
    k2 &= 0x7F;
    k2--;
    swnum = keymap[k2 / 10][k2 % 10];
    
    if (k > 128) {
      SW_STATES[swnum] = 1;
    }
    else {
      SW_STATES[swnum] = 2;
    }
    
  }
  else 
  {
    SW_STATES[swnum] = 0;
  }
}
