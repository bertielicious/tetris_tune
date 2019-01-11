
#include <pic16f1459.h>
#include "config.h"

void interrupt isr(void)
{
    if(INTCONbits.TMR0IF == 1)
    {
        PORTBbits.RB6 = ~PORTBbits.RB6;
        TMR0 = 0x0c;
        INTCONbits.TMR0IF = 0;
        time_elapsed++;
    }
}
