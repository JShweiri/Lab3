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

unsigned char getBit(unsigned char data, unsigned char pos)
{
    return (data & (0x01 << pos));
}

int main(void)
{
    DDRA = 0x00;
    PORTA = 0xFF;
    DDRB = 0x00;
    PORTB = 0xFF;
    DDRC = 0xFF;
    PORTC = 0x00;

    unsigned char tmpA;
    unsigned char tmpB;
    unsigned char count = 0;

    while (1)
    {
        count = 0;
        tmpA = PINA;
        tmpB = PINB;

        for (unsigned char i = 0; i < 8; i++)
        {
            if (getBit(tmpA, i))
            {
                count++;
            }
            if (getBit(tmpB, i))
            {
                count++;
            }
        }

        PORTC = count;
    }
}
