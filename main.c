#include <stdio.h>
#include "PORT.h"
#include "Main.h"
#include "UART.h"
#include "memory_test.h"
#include "print_bytes.h"
#include "hardware_delay_ms_T0.h"
#include "LCD.H"

void main()
{
	uint8_t code Line_One[7]="Line 1";
	uint8_t code Line_Two[7]="Line 2";
	uint8_t index, value;
	uint8_t * code_memory_ptr;
	uint8_t * xdata_memory_ptr;

	LCD_Module_Init();

	LCD_Write(0,0x80);
	hardware_delay_ms_T0(1);
	index = 0;
	value = Line_One[index];
	while(value!=0)
	{
		LCD_Write(0x01,value);
		hardware_delay_ms_T0(1);
		index++;
		value = Line_One[index];
	}
	LCD_Write(0x00,0xC0);

	
	LCD_Write(0,0x80);
	hardware_delay_ms_T0(1);
	index = 0;
	value = Line_Two[index];
	while(value!=0)
	{
		LCD_Write(0x01,value);
		hardware_delay_ms_T0(1);
		index++;
		value = Line_Two[index];
	}
	//LCD_Write(0x00,0xC0);
	


	

	UART_Init();

	code_memory_ptr = code_memory_init();
	xdata_memory_ptr  = xdata_memory_init();

	print_memory(code_memory_ptr, 41);
	print_memory(xdata_memory_ptr, 42);

    while(1)
    {
		//UART_Receive();
        //UART_Transmit('F');

    }
}
