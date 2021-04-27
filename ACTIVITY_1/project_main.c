
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
        /**
         * @brief AND D0 and D1 is considered as input, b0 as output
         * Inputs are controlled by a push button
         * 
         */

DDRB=0b00000001;
DDRD=0b00000000;
PORTD=0b00000011;

while(1)
{
        /**
         * @brief If both D1 and D0 trigger then enable else disable
         * 
         */
        if((!(PIND&(1<<PD0))) &&(!(PIND&(1<<PD1))))
        {
                PORTB|=(1<<PB0);
        }
        else
        {
                PORTB&=~(1<<PB0);
        }
        }
}