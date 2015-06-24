
#ifndef LEDB_H
#define LEDB_H
#endif

#ifdef __cplusplus
extern "C"
{
#endif


/*  Defines  */
#define LEDB_PIN P1_7
#define LEDB_ON 1
#define LEDB_OFF 0


/*  Functions  */
void LEDB_init();
void LEDB_start();
void LEDB_stop();