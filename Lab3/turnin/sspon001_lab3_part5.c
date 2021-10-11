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
	DDRB = 0x01 ; PORTB = 0x00 ;
	DDRD = 0x00 ; PORTD = 0xFF ;
	unsigned char b, d, temp ;
	unsigned short weight = 0x0000 ;
    while (1) {
	d = PIND ;
	b = PINB ;
	temp = 0x00 ;
	weight = (d << 1) | (b & 0x01) ;
	if(weight >= 0x0046) temp = 0x02 ;
	else if (weight > 0x0005) temp = 0x04 ;
	else temp = 0x00 ;
	PORTB = temp ;
    }
    return 1 ;
}
