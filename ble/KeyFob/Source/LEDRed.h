
#ifndef LEDR_H
#define LEDR_H
#endif

#ifdef __cplusplus
extern "C"
{
#endif


/*  Defines  */
#define LEDR_PIN P1_6
#define LEDR_ON 1
#define LEDR_OFF 0


/*  Functions  */
void LEDR_init();
void LEDR_start();
void LEDR_stop();