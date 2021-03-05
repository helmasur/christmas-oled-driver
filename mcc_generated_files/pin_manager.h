/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED5 aliases
#define LED5_TRIS                 TRISAbits.TRISA1
#define LED5_LAT                  LATAbits.LATA1
#define LED5_PORT                 PORTAbits.RA1
#define LED5_WPU                  WPUAbits.WPUA1
#define LED5_OD                   ODCONAbits.ODA1
#define LED5_ANS                  ANSELAbits.ANSA1
#define LED5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED5_GetValue()           PORTAbits.RA1
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED5_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define LED5_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define LED5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS                 TRISAbits.TRISA2
#define LED6_LAT                  LATAbits.LATA2
#define LED6_PORT                 PORTAbits.RA2
#define LED6_WPU                  WPUAbits.WPUA2
#define LED6_OD                   ODCONAbits.ODA2
#define LED6_ANS                  ANSELAbits.ANSA2
#define LED6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED6_GetValue()           PORTAbits.RA2
#define LED6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED6_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define LED6_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define LED6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISAbits.TRISA5
#define LED4_LAT                  LATAbits.LATA5
#define LED4_PORT                 PORTAbits.RA5
#define LED4_WPU                  WPUAbits.WPUA5
#define LED4_OD                   ODCONAbits.ODA5
#define LED4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED4_GetValue()           PORTAbits.RA5
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISBbits.TRISB4
#define SDA_LAT                  LATBbits.LATB4
#define SDA_PORT                 PORTBbits.RB4
#define SDA_WPU                  WPUBbits.WPUB4
#define SDA_OD                   ODCONBbits.ODB4
#define SDA_ANS                  ANSELBbits.ANSB4
#define SDA_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDA_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDA_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDA_GetValue()           PORTBbits.RB4
#define SDA_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDA_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISBbits.TRISB6
#define SCL_LAT                  LATBbits.LATB6
#define SCL_PORT                 PORTBbits.RB6
#define SCL_WPU                  WPUBbits.WPUB6
#define SCL_OD                   ODCONBbits.ODB6
#define SCL_ANS                  ANSELBbits.ANSB6
#define SCL_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SCL_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SCL_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SCL_GetValue()           PORTBbits.RB6
#define SCL_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SCL_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set POT aliases
#define POT_TRIS                 TRISCbits.TRISC0
#define POT_LAT                  LATCbits.LATC0
#define POT_PORT                 PORTCbits.RC0
#define POT_WPU                  WPUCbits.WPUC0
#define POT_OD                   ODCONCbits.ODC0
#define POT_ANS                  ANSELCbits.ANSC0
#define POT_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define POT_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define POT_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define POT_GetValue()           PORTCbits.RC0
#define POT_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define POT_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define POT_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define POT_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define POT_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define POT_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define POT_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define POT_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set BTN aliases
#define BTN_TRIS                 TRISCbits.TRISC4
#define BTN_LAT                  LATCbits.LATC4
#define BTN_PORT                 PORTCbits.RC4
#define BTN_WPU                  WPUCbits.WPUC4
#define BTN_OD                   ODCONCbits.ODC4
#define BTN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define BTN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define BTN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define BTN_GetValue()           PORTCbits.RC4
#define BTN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define BTN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define BTN_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define BTN_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define BTN_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define BTN_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set LED7 aliases
#define LED7_TRIS                 TRISCbits.TRISC5
#define LED7_LAT                  LATCbits.LATC5
#define LED7_PORT                 PORTCbits.RC5
#define LED7_WPU                  WPUCbits.WPUC5
#define LED7_OD                   ODCONCbits.ODC5
#define LED7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED7_GetValue()           PORTCbits.RC5
#define LED7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED7_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define LED7_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set DRES aliases
#define DRES_TRIS                 TRISCbits.TRISC7
#define DRES_LAT                  LATCbits.LATC7
#define DRES_PORT                 PORTCbits.RC7
#define DRES_WPU                  WPUCbits.WPUC7
#define DRES_OD                   ODCONCbits.ODC7
#define DRES_ANS                  ANSELCbits.ANSC7
#define DRES_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define DRES_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define DRES_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define DRES_GetValue()           PORTCbits.RC7
#define DRES_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define DRES_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define DRES_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define DRES_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define DRES_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define DRES_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define DRES_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define DRES_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/