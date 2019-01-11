/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 06 January 2019, 14:34
 */


#include <xc.h>
#include <stdio.h>
#include "main.h"
#include "config.h"
#include "putch.h"
#include "set_usart.h"
#include "config_osc.h"
#include "ports_setup.h"
#include "pwm_setup.h"
#include "tmr0_setup.h"


void main(void) 
{
tune[0].note = 0x2e;        //1318;
tune[0].duration = 375;
tune[0].rest = 25;

tune[1].note = 0x3e;        //988;
tune[1].duration = 188;
tune[1].rest = 25;

tune[2].note = 0x3a;        //1047;
tune[2].duration = 188;
tune[2].rest = 25;

tune[3].note = 0x34;        //1175;
tune[3].duration = 375;
tune[3].rest = 25;

tune[4].note = 0x3a;        //1047;
tune[4].duration = 188;
tune[4].rest = 25;

tune[5].note = 0x3e;        //988;
tune[5].duration = 188;
tune[5].rest = 25;

tune[6].note = 0x46;        //880;
tune[6].duration = 375;
tune[6].rest = 50;

tune[7].note = 0x46;         //880;
tune[7].duration = 188;
tune[7].rest = 25;

tune[8].note = 0x3a;         //1047;
tune[8].duration = 188;
tune[8].rest = 25;

tune[9].note = 0x2e;        //1318;
tune[9].duration = 375;
tune[9].rest = 25;

tune[10].note = 0x34;       //1175;
tune[10].duration = 188;
tune[10].rest = 25;

tune[11].note = 0x3a;       //1047;
tune[11].duration = 188;
tune[11].rest = 25;

tune[12].note = 0x3e;       //988;
tune[12].duration = 563;
tune[12].rest = 25;

tune[13].note = 0x3a;       //1047;
tune[13].duration = 188;
tune[13].rest = 25;

tune[14].note = 0x34;       //1175;
tune[14].duration = 375;
tune[14].rest = 25;

tune[15].note = 0x2e;       //1318;
tune[15].duration = 375;
tune[15].rest = 25;

tune[16].note = 0x3a;       //1047;
tune[16].duration = 375;
tune[16].rest = 25;

tune[17].note = 0x46;       //880;
tune[17].duration = 375;
tune[17].rest = 50;

tune[18].note = 0x46;       // 880;
tune[18].duration = 188;
tune[18].rest = 25;

tune[19].note = 0x46;       //880;
tune[19].duration = 188;
tune[19].rest = 25;


tune[20].note = 0x3e;       //988;
tune[20].duration = 188;
tune[20].rest = 25;

tune[21].note = 0x3a;       //1046;
tune[21].duration = 188;
tune[21].rest = 25;
/****************2nd line of music*******************/
tune[22].note = 0x34;       //1175;
tune[22].duration = 563;
tune[22].rest = 25;

tune[23].note = 0x2b;       //1397
tune[23].duration = 188;
tune[23].rest = 25;

tune[24].note = 0x22;       //1760;
tune[24].duration = 375;
tune[24].rest = 25;

tune[25].note = 0x26;       //1568
tune[25].duration = 188;
tune[25].rest = 25;

tune[26].note = 0x2b;       //1397;
tune[26].duration = 188;
tune[26].rest = 25;

tune[27].note = 0x2e;       //1319;
tune[27].duration = 563;
tune[27].rest = 25;

tune[28].note = 0x3a;       //1047;
tune[28].duration = 188;
tune[28].rest = 25;

tune[29].note = 0x2e;       //1318;
tune[29].duration = 375;
tune[29].rest = 25;

tune[30].note = 0x34;       //1175;
tune[30].duration = 188;
tune[30].rest = 25;

tune[31].note = 0x3a;       //1047;
tune[31].duration = 188;
tune[31].rest = 25;

tune[32].note = 0x3e;       //988;
tune[32].duration = 375;
tune[32].rest = 25;

tune[33].note = 0x3e;       //988;
tune[33].duration = 188;
tune[33].rest = 25;

tune[34].note = 0x3a;       //1046;
tune[34].duration = 188;
tune[34].rest = 25;

tune[35].note = 0x34;       //1175;
tune[35].duration = 375;
tune[35].rest = 25;

tune[36].note = 0x2e;       //1318;
tune[36].duration = 375;
tune[36].rest = 50;

tune[37].note = 0x3a;       //1046;
tune[37].duration = 375;
tune[37].rest = 25;

tune[38].note = 0x46;       //880;
tune[38].duration = 375;
tune[38].rest = 25;

tune[39].note = 0x46;       //1046;
tune[39].duration = 375;
tune[39].rest = 375;
/****************3rd line of music*******************/
tune[40].note = 0x2e;       //1318;
tune[40].duration = 725;
tune[40].rest = 25;

tune[41].note = 0x3a;       //1046;
tune[41].duration = 725;
tune[41].rest = 25;

tune[42].note = 0x34;       //1174;
tune[42].duration = 725;
tune[42].rest = 25;

tune[43].note = 0x3e;       //988;
tune[43].duration = 725;
tune[43].rest = 25;

tune[44].note = 0x3a;       //1047;
tune[44].duration = 725;
tune[44].rest = 25;

tune[45].note = 0x46;       //880;
tune[45].duration = 725;
tune[45].rest = 25;

tune[46].note = 0xa7;       //370;
tune[46].duration = 700;
tune[46].rest = 75;

tune[47].note = 0x3e;       //988;
tune[47].duration = 350;
tune[47].rest = 400;

tune[48].note = 0x2e;       //1318;
tune[48].duration = 725;
tune[48].rest = 25;

tune[49].note = 0x3a;       //1046;
tune[49].duration = 725;
tune[49].rest = 25;

tune[50].note = 0x34;       //1174;
tune[50].duration = 725;
tune[50].rest = 25;

tune[51].note = 0x3e;       //988;
tune[51].duration = 725;
tune[51].rest = 25;

tune[52].note = 0x3a;       //1047;
tune[52].duration = 375;
tune[52].rest = 25;

tune[53].note = 0x2e;       //1319;
tune[53].duration = 375;
tune[53].rest = 25;

tune[54].note = 0x22;       //1760;
tune[54].duration = 725;
tune[54].rest = 25;

tune[55].note = 0x26;       //1568;
tune[55].duration = 725;
tune[55].rest = 750;

config_osc();
ports_setup();
set_usart();
pwm_setup();            
tmr0_setup();       // establish a 1ms interrupt via TMR0 to count how long a note has played for or how long a rest
printf("hello world\n");
printf("tune[0].note = %d\n",tune[0].note);
printf("tune[0].duration = %d\n",tune[0].duration);
printf("tune[0].rest = %d\n",tune[0].rest);


unsigned char note;

int index = 0;
    while(1)
    {
        for (index = 0; index < 56; index++)
        {  
          note = tune[index].note;
          duration = tune[index].duration;
          rest = tune[index].rest;
          PR2 = note;
          INTCONbits.TMR0IE = 1;
          
          while(time_elapsed < duration)
          {
              PWM1CONbits.PWM1EN = 1;
          }
          
          PWM1CONbits.PWM1EN = 0;
          //INTCONbits.TMR0IE = 0;
          time_elapsed = 0;
          
          while(time_elapsed < rest)
          {
              ;
          }
          PWM1CONbits.PWM1EN = 0;
          INTCONbits.TMR0IE = 0;
          time_elapsed = 0;
        }
    }
}
