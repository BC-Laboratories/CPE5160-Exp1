#include "main.h"
#include "LCD.h"
#include "PORT.h"
#include "AT89C51RC2.h"
#include "hardware_delay_ms_T0.h"


void LCD_Write(uint8_t RS_value, uint8_t value)
{
	RS = RS_value;

	E = 1;
	P0 = value;
	E = 0;
	P0 = 0xFF;
}

void LCD_Module_Init(void){
	hardware_delay_ms_T0(30);
	LCD_Write(0x00, 0x38);
	hardware_delay_ms_T0(5);
	LCD_Write(0x00, 0x38);
	hardware_delay_ms_T0(1);
	LCD_Write(0x00, 0x38);
	hardware_delay_ms_T0(1);
	LCD_Write(0x00, 0x38);
	hardware_delay_ms_T0(1);
	LCD_Write(0x00, 0x0C);
	hardware_delay_ms_T0(1);
	LCD_Write(0x00, 0x01);
	hardware_delay_ms_T0(3);
	LCD_Write(0x00, 0x06);
	hardware_delay_ms_T0(1);
}
