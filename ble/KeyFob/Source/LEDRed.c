
#include "hal_mcu.h"
#include "LedRed.h"

uint8 LEDRstate = 0;

void LEDR_init()
{
  P1DIR = BV(6);
  LEDR_PIN = 0;
  
}
void LEDR_start()
{
  LEDR_PIN = 1;
  LEDRstate = LEDR_ON;
}

void LEDR_stop()
{
  LEDR_PIN = 0;
  LEDRstate = LEDR_OFF;

}