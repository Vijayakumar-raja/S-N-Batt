
#ifndef LEDG_H
#define LEDG_H
#endif

#ifdef __cplusplus
extern "C"
{
#endif


/*  Defines  */
#define LEDG_PIN P1_7
#define LEDG_ON 1
#define LEDG_OFF 0


/*  Functions  */
void LEDG_init();
void LEDG_start();
void LEDG_stop();