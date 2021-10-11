/*	Author: sspon001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00 ; PORTA = 0xFF ;
	DDRB = 0xFF ; PORTB = 0x00 ;
	DDRC = 0xFF ; PORTC = 0x00 ;
	unsigned char a, b ,c ;
    while (1) {
	a = PINA ; 
	b = (a >> 4) & 0x0F ;
	c = (a << 4) & 0xF0 ;
	PORTB = b ;
	PORTC = c ;
    }
    return 1 ;
}
