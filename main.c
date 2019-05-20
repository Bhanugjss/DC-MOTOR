/*
 * GccApplication2.c
 *
 * Created: 15-05-2019 14:02:19
 * Author : G J S S BHANU
 */ 
#ifndef F_CPU
#include <avr/io.h>
#define F_CPU 16000000UL
#endif
#include<util/delay.h>
int main(void)
{
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {
	
			PORTB=(1<<PB1);
			PORTB=~(1<<PB2);
			_delay_ms(100);
			PORTB=~(1<<PB1);
			PORTB=(1<<PB2);
			_delay_ms(100);
	
    }
}

