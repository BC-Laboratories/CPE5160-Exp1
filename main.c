#include <stdio.h>
#include "PORT.h"
#include "Main.h"
#include "UART.h"
#include "memory_test.h"
#include "print_bytes.h"


void main()
{
    UART_Init();
    while(1)
    {
        printf("F my life");
    }
}
