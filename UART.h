/*
Experiment #1 - CpE5160
Team Members: Tyler Andrews, Brennan Campbell, Tyler Tetens
*/

#ifndef UART_H
#define UART_H

#include "main.h"

#define baudRate 9600
#define SMOD1 0
#define SPD 0

void UART_Init();

uint8_t UART_Transmit(uint8_t send_value);

uint8_t UART_Receive(void);

#endif
