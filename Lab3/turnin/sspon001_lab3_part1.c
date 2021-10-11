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
    /* Insert DDR and PORT initializations */
	DDRA = 0x00 ; PORTA = 0xFF ;
	DDRB = 0x00 ; PORTB = 0xFF ;
	DDRC = 0xFF ; PORTC = 0x00 ;
	unsigned char a, b, count ;

    while (1) {
	count = 0x00 ;
	a = PINA ;
	b = PINB ;
	if(a & 0x01) count++ ;
	if(a & 0x02) count++ ;
	if(a & 0x02) count++ ;
	if(a & 0x04) count++ ;
	if(a & 0x08) count++ ;
	if(a & 0x10) count++ ;
	if(a & 0x20) count++ ;
	if(a & 0x40) count++ ;
	if(a & 0x80) count++ ;
	if(b & 0x01) count++ ;
	if(b & 0x02) count++ ;
	if(b & 0x04) count++ ;
	if(b & 0x08) count++ ;
	if(b & 0x10) count++ ;
	if(b & 0x20) count++ ;
	if(b & 0x40) count++ ;
	if(b & 0x80) count++ ;
	PORTC = count ;
    }
    return 1;
}
