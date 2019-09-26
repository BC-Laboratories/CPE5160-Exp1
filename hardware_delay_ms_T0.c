/*
Experiment #1 - CpE5160
Team Members: Tyler Andrews, Brennan Campbell, Tyler Tetens
*/
#include "Main.h"
#include "PORT.H"
#include "hardware_delay_ms_T0.h"

void hardware_delay_ms_T0(uint16_t num_ms){
	uint16_t index;
	//config timer 0 as 16 bit mode 1
	TMOD &= 0xF0;
	TMOD |= 0x01;
	ET0=0;
	//runs a timer controlled delay per millisecond
	for(index = 0; index<num_ms; index++){
		TH0 = PRELOAD_H;
		TL0 = PRELOAD_L;
		TF0 = 0;
		TR0 = 1;
		while(TF0 == 0);
		TR0 = 0;
	}
}
