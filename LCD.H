#ifndef LCD_H
#define LCD_H


sbit E = P3^7;
sbit RS = P3^6;

void LCD_Write(uint8_t RS_value, uint8_t value);

void LCD_Module_Init(void);

#endif
