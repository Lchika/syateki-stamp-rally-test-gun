/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

#include "user.h"
#include "osc.h"

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */

void SetupPWM(void)
{
    /*
    TRISA1 = 1;     // disable output driver
    PWM2CON = 0;    // clear PWMxCON
    PR2 = 0x34;     // set PWM period
    PWM2DCH = 0;    // clear PWMxDCH
    PWM2DCL = 0;    // clear PWMxDCL<7:6>
    TMR2IF = 0;     // clear timer intterupts flag
    T2CKPS1 = 0;    // set Timer2 pre scale to 1:1
    T2CKPS0 = 0;    // set Timer2 pre scale to 1:1
    TMR2ON = 1;     // enable Timer2
    PWM2OE = 1;
    while(TMR2IF == 0){
        __delay_us(1);
    }
    TRISA1 = 0;
    PWM2EN = 1;
    */
    PR2 = 52;
    T2CONbits.TOUTPS = 0b0000;//Timer2 Output Postscaler = 1
    T2CONbits.T2CKPS = 0b00;//Timer2 Clock Prescale is 1
    T2CONbits.TMR2ON = 1;//Timer2 is on
    PWM2DCH = 0b00010001;
    PWM2DCL = 0b11;
    PWM2CONbits.PWM2EN = 1;//PWM Module Enabled
    PWM2CONbits.PWM2OE = 0;//Output to PWMx pin is disabled
    PIR1bits.TMR2IF = 0;
}

void InitApp(void)
{
    /* TODO Initialize User Ports/Peripherals/Project here */

    /* Setup analog functionality and port direction */
    // (4)Define WPUA Register (All Pull-UP disable)
    WPUA = 0b00000000;
    TRISA = 0b00001100; // RA2:INPUT, RA1: OUTPUT, RA0: OUTPUT
    LATA = 0b00000000;  // PORT initialize

    /* Initialize peripherals */
    ANSELA = 0; // ALL digital port
    
    /* Enable interrupts */
    /*
    GIE = 1;
    PEIE = 1;
    TMR2IE = 1;
    */
    SetupPWM();
}

