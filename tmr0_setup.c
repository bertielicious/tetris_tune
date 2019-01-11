#include <pic16f1459.h>

void tmr0_setup(void)
{
    OPTION_REGbits.TMR0CS = 0;  // Internal instruction cycle clock  (fosc/4 = 1MHz)
    OPTION_REGbits.PSA = 0;     // Prescaler is assigned to the Timer0 module
    OPTION_REGbits.PS2 = 0;     // rate sellect bits 1:4 yielding a 1ms interrupt period
    OPTION_REGbits.PS1 = 0;
    OPTION_REGbits.PS0 = 1;
    TMR0 = 0x0c;                // TMR0 counts from 5 to 255 (250 x 4) and then overflows = 1ms
    INTCONbits.GIE = 1;
    INTCONbits.TMR0IE = 0;
    INTCONbits.TMR0IF = 0;   
}
