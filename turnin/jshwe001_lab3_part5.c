/*	Author: jshwe001
 *  Partner(s) Name: Ryan Giron
 *	Lab Section: 024
 *	Assignment:1 Lab #2  Exercise # 1
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void)
{
    DDRB = 0xFE;
    PORTB = 0x01;
    DDRD = 0x00;
    PORTD = 0xFF;

    unsigned char tmpB;
    unsigned char tmpD;

    PORTB = 0x00;
    DDRB = 0xFF;
    PORTD = 0xFF;
    DDRD = 0x00;

    while (1)
    {
        long num = (PIND << 1) + (PINB % 2);

        if (num >= 70)
        {
            PORTB = 2;
        }

        if (num > 5 && num < 70)
        {
            PORTB = 4;
        }
    }
}
