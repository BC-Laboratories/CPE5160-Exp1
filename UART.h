//
// Created by User on 9/21/2019.
//

#ifndef UART_H
#define UART_H

void UART_Init();

uint8_t UART_Transmit(uint8_t send_value);

uint8_t UART_Receive(void);


#endif
