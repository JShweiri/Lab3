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
    DDRA = 0x00;
    PORTA = 0xFF;
    DDRC = 0xFF;
    PORTC = 0x00;

    unsigned char tmpA;
    unsigned char tmpC;

    while (1)
    {
        tmpC = 0;
        tmpA = PINA & 15;

        if (tmpA >= 1 && tmpA <= 2)
        {
            tmpC = 32;
        }

        if (tmpA >= 3 && tmpA <= 4)
        {
            tmpC = 48;
        }

        if (tmpA >= 5 && tmpA <= 6)
        {
            tmpC = 56;
        }

        if (tmpA >= 7 && tmpA <= 9)
        {
            tmpC = 60;
        }

        if (tmpA >= 10 && tmpA <= 12)
        {
            tmpC = 62;
        }

        if (tmpA >= 13 && tmpA <= 15)
        {
            tmpC = 63;
        }

        if (tmpA <= 4)
        {
            tmpC |= 64;
        }

        PORTC = tmpC;
    }
}
