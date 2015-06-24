
#include "hal_mcu.h"
#include "LedBlue.h"

uint8 LEDBstate = 0;

void LEDB_init()
{
  P1DIR = BV(7);
  LEDB_PIN = 0;
  
}
void LEDB_start()
{
  LEDB_PIN = 1;
  LEDBstate = LEDB_ON;
}

void LEDB_stop()
{
  LEDB_PIN = 0;
  LEDBstate = LEDB_OFF;

}