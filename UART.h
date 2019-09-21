//
// Created by User on 9/21/2019.
//

#ifndef UART_H
#define UART_H


#define baudRate 9600
#define SMOD1 0
#define SPD 0

void UART_Init();

uint8_t UART_Transmit(uint8_t send_value);

uint8_t UART_Receive(void);


#endif
