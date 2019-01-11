
#include <pic16f1459.h>

void ports_setup(void)
{
    TRISBbits.TRISB6 = 0;           // LED diagnostic
    /*SET DATA DIRECTION FOR UART*******************/
    TRISBbits.TRISB7 = 0;   
    PORTBbits.RB7 = 0;              // TX pin 10
}
