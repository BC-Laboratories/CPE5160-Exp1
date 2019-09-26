#ifndef LCD_H
#define LCD_H

// E is enable pin for LCD
sbit E = P3^7;
// RS is register select: 0 = command, 1 = data
sbit RS = P3^6;

void LCD_Write(uint8_t RS_value, uint8_t value);

void LCD_Module_Init(void);

#endif
