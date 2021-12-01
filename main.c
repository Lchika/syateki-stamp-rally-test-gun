/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp */
#include "osc.h"

/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/

void main(void)
{
    /* Configure the oscillator for the device */
    ConfigureOscillator();

    /* Initialize I/O and Peripherals for application */
    InitApp();

    /* TODO <INSERT USER APPLICATION CODE HERE> */

    while(1)
    {
        if (RA2 == 0) {
            RA0 = 1;    // led on
            // send 01110100011
            PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
            __delay_us(500);
            PWM2CONbits.PWM2OE = 1;//Output to PWMx pin is enabled
            __delay_us(1500);
            PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
            __delay_us(500);
            PWM2CONbits.PWM2OE = 1;//Output to PWMx pin is enabled
            __delay_us(500);
            PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
            __delay_us(1500);
            PWM2CONbits.PWM2OE = 1;//Output to PWMx pin is enabled
            __delay_us(1000);
            PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
            __delay_ms(1000);
            RA0 = 0;    // led off
        }
        PWM2CONbits.PWM2OE = 1;//Output to PWMx pin is enabled
        __delay_us(1500);
        PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
        __delay_ms(1000);
    }

}

