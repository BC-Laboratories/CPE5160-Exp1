/*
Experiment #1 - CpE5160
Team Members: Tyler Andrews, Brennan Campbell, Tyler Tetens
*/

#ifndef _HARDWARE_DELAY_MS_T0_H
#define _HARDWARE_DELAY_MS_T0_H

#include "Main.h"
#include "PORT.H"

//Defines preload constant for the timer
#define PRELOAD ((uint16_t)(65536-(OSC_FREQ/(OSC_PER_INST*1020ul))))
#define PRELOAD_H (PRELOAD/256)
#define PRELOAD_L (PRELOAD%256)

void hardware_delay_ms_T0(uint16_t num_ms);

#endif
