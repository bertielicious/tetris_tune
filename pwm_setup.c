
#include <pic16f1459.h>

void pwm_setup(void)
{
    ANSELC = 0x00;              // all PORTC analogue inputs disabled
    TRISCbits.TRISC5 = 1;       // disable PWM1 output (pin 5)
    //TRISCbits.TRISC6 = 1;       // disable PWM2 output (pin 8)
    
    PWM1CON = 0x00;             // PWM1 control register cleared
    PR2 = 0x2e;                 // load PR2 with PWM period value
    PWM1DCH = 0x18;             // PWM1DCH 50% duty cycle 
    PWM1DCL = 0xc0;             // PWM1DCL 
    
    PIR1bits.TMR2IF = 0;        // clear TMR2 interrupt flag
    T2CONbits.T2CKPS1 = 1;      // Timer2 prescale bits set to 16
    T2CONbits.T2CKPS0 = 0;
    T2CONbits.TMR2ON = 1;       // enable TMR2 
    TRISCbits.TRISC5 = 0;       // enable PWM1 output (pin 5)
    PWM1CONbits.PWM1EN = 0;
    PWM1CONbits.PWM1OE = 1;     // Output to PWM1 pin is enabled (pin5)
}
