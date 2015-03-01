/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

// A simple blinky program for ATtiny85
// Connect red LED at pin 3 (PB4)
//

#include <avr/io.h>
#include <util/delay.h>


int main (void)
{
    // set PB4 to be output
    DDRB = 0b00001000;
    while (1) {

        // flash# 1:
        // set PB4 high
        PORTB = 0b00010000;
        _delay_ms(200);
        // set PB4 low
        PORTB = 0b00000000;
        _delay_ms(200);

        // flash# 2:
        // set PB4 high
        PORTB = 0b00010000;
        _delay_ms(1000);
        // set PB4 low
        PORTB = 0b00000000;
        _delay_ms(1000);

        // flash# 3:
        // set PB4 high
        PORTB = 0b00010000;
        _delay_ms(3000);
        // set PB4 low
        PORTB = 0b00000000;
        _delay_ms(3000);
    }

    return 1;
}
