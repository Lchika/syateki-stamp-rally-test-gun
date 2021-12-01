/******************************************************************************/
/* Main Files to Include                                                      */
/******************************************************************************/

#pragma config FOSC = INTOSC    // Oscillator Selection bits (INTOSC oscillator: CLKIN function disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // MCLR Pin Function Select bit (MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)
#pragma config LPBOR = ON       // Brown-out Reset Selection bits (BOR enabled)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

/******************************************************************************/
/* Configuration Bits                                                         */
/*                                                                            */
/* Refer to your Hi-Tech User Manual in the PICC installation directory       */
/* /doc folder for more information on filling in configuration bits.         */
/* In addition, configuration bit mnemonics can be found in your              */
/* PICC\version\include\<processor name>.h file for your device.  The XC8     */
/* compiler contains documentation on the configuration bit macros within     */
/* the compiler installation /docs folder in a file called                    */
/* pic18_chipinfo.html.                                                       */
/*                                                                            */
/* For additional information about what the hardware configurations mean in  */
/* terms of device operation, refer to the device datasheet.                  */
/*                                                                            */
/* A feature of MPLAB X is the 'Generate Source Code to Output' utility in    */
/* the Configuration Bits window.  Under Window > PIC Memory Views >          */
/* Configuration Bits, a user controllable configuration bits window is       */
/* available to Generate Configuration Bits source code which the user can    */
/* paste into this project.                                                   */
/*                                                                            */
/******************************************************************************/

/* TODO Fill in your config bits here.  Use the configuration bits generator. */
