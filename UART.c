#include "UART.h"
#include "AT89C51RC2.h"

void UART_Init()
{
    //PCON
    PCON = 0x00;
	ES = 0;
    //SCON -
    SCON |= 0x53;
    //BDRCON Clear
    BDRCON = 0x00;
    //Baud rate generator
    BRL = (uint8_t) (256-(((1+(5*SPD))*(1+(1*SMOD1))*OSC_FREQ)/(32*OSC_PER_INST*(uint32_t)baudRate)));
    //Set BDRCON
    BDRCON = 0x1C | (SPD << 1);
}

uint8_t UART_Transmit(uint8_t send_value)
{
	while(!TI)
	{
	//Timeout needed.
	//Will return error
	}

	SBUF = send_value;
	TI = 0;
	return send_value;
}

uint8_t UART_Receive(void)
{
	uint8_t received_value;
	while(!RI)
	{
		
	}
	received_value = SBUF;
	RI = 0;
	return received_value;
}
