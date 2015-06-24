
#include "hal_mcu.h"
#include "LedGreen.h"

uint8 LEDGstate = 0;

void LEDG_init()
{
  P2DIR = BV(0);
  LEDG_PIN = 0;
  
}
void LEDG_start()
{
  LEDG_PIN = 1;
  LEDGstate = LEDG_ON;
}

void LEDG_stop()
{
  LEDG_PIN = 0;
  LEDGstate = LEDG_OFF;

}