#include <stdio.h>
#include "PORT.h"
#include "Main.h"
#include "UART.h"
#include "memory_test.h"
#include "print_bytes.h"

void main()
{
	uint8_t * generic_ptr;

	generic_ptr = code_memory_init();

    UART_Init();
    while(1)
    {
		//UART_Receive();
        //UART_Transmit('F');

    }
}
