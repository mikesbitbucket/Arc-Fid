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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F16Q40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSELA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set A2DCS aliases
#define A2DCS_TRIS                 TRISBbits.TRISB4
#define A2DCS_LAT                  LATBbits.LATB4
#define A2DCS_PORT                 PORTBbits.RB4
#define A2DCS_WPU                  WPUBbits.WPUB4
#define A2DCS_OD                   ODCONBbits.ODCB4
#define A2DCS_ANS                  ANSELBbits.ANSELB4
#define A2DCS_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define A2DCS_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define A2DCS_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define A2DCS_GetValue()           PORTBbits.RB4
#define A2DCS_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define A2DCS_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define A2DCS_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define A2DCS_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define A2DCS_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define A2DCS_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define A2DCS_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define A2DCS_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set TPRB5 aliases
#define TPRB5_TRIS                 TRISBbits.TRISB5
#define TPRB5_LAT                  LATBbits.LATB5
#define TPRB5_PORT                 PORTBbits.RB5
#define TPRB5_WPU                  WPUBbits.WPUB5
#define TPRB5_OD                   ODCONBbits.ODCB5
#define TPRB5_ANS                  ANSELBbits.ANSELB5
#define TPRB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define TPRB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define TPRB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define TPRB5_GetValue()           PORTBbits.RB5
#define TPRB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define TPRB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define TPRB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define TPRB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define TPRB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define TPRB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define TPRB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define TPRB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set ERROR aliases
#define ERROR_TRIS                 TRISBbits.TRISB6
#define ERROR_LAT                  LATBbits.LATB6
#define ERROR_PORT                 PORTBbits.RB6
#define ERROR_WPU                  WPUBbits.WPUB6
#define ERROR_OD                   ODCONBbits.ODCB6
#define ERROR_ANS                  ANSELBbits.ANSELB6
#define ERROR_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ERROR_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ERROR_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ERROR_GetValue()           PORTBbits.RB6
#define ERROR_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ERROR_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ERROR_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ERROR_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ERROR_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define ERROR_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define ERROR_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define ERROR_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSELB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSELC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set IN_MICRO aliases
#define IN_MICRO_TRIS                 TRISCbits.TRISC3
#define IN_MICRO_LAT                  LATCbits.LATC3
#define IN_MICRO_PORT                 PORTCbits.RC3
#define IN_MICRO_WPU                  WPUCbits.WPUC3
#define IN_MICRO_OD                   ODCONCbits.ODCC3
#define IN_MICRO_ANS                  ANSELCbits.ANSELC3
#define IN_MICRO_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IN_MICRO_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IN_MICRO_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IN_MICRO_GetValue()           PORTCbits.RC3
#define IN_MICRO_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IN_MICRO_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IN_MICRO_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IN_MICRO_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IN_MICRO_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IN_MICRO_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IN_MICRO_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IN_MICRO_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set TPRC4 aliases
#define TPRC4_TRIS                 TRISCbits.TRISC4
#define TPRC4_LAT                  LATCbits.LATC4
#define TPRC4_PORT                 PORTCbits.RC4
#define TPRC4_WPU                  WPUCbits.WPUC4
#define TPRC4_OD                   ODCONCbits.ODCC4
#define TPRC4_ANS                  ANSELCbits.ANSELC4
#define TPRC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define TPRC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define TPRC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define TPRC4_GetValue()           PORTCbits.RC4
#define TPRC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define TPRC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define TPRC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define TPRC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define TPRC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define TPRC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define TPRC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define TPRC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set TPRC5 aliases
#define TPRC5_TRIS                 TRISCbits.TRISC5
#define TPRC5_LAT                  LATCbits.LATC5
#define TPRC5_PORT                 PORTCbits.RC5
#define TPRC5_WPU                  WPUCbits.WPUC5
#define TPRC5_OD                   ODCONCbits.ODCC5
#define TPRC5_ANS                  ANSELCbits.ANSELC5
#define TPRC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define TPRC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define TPRC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define TPRC5_GetValue()           PORTCbits.RC5
#define TPRC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define TPRC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define TPRC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define TPRC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define TPRC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define TPRC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define TPRC5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define TPRC5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set PBIn aliases
#define PBIn_TRIS                 TRISCbits.TRISC6
#define PBIn_LAT                  LATCbits.LATC6
#define PBIn_PORT                 PORTCbits.RC6
#define PBIn_WPU                  WPUCbits.WPUC6
#define PBIn_OD                   ODCONCbits.ODCC6
#define PBIn_ANS                  ANSELCbits.ANSELC6
#define PBIn_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PBIn_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PBIn_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PBIn_GetValue()           PORTCbits.RC6
#define PBIn_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PBIn_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PBIn_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PBIn_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PBIn_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PBIn_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PBIn_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define PBIn_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

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