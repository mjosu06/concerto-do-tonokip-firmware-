#ifndef PINS_H
#define PINS_H

/****************************************************************************************
* Arduino pin assignment
*
*                  ATMega168
*                   +-\/-+
*             PC6  1|    |28  PC5 (AI 5 / D19)
*       (D 0) PD0  2|    |27  PC4 (AI 4 / D18)
*       (D 1) PD1  3|    |26  PC3 (AI 3 / D17)
*       (D 2) PD2  4|    |25  PC2 (AI 2 / D16)
*  PWM+ (D 3) PD3  5|    |24  PC1 (AI 1 / D15)
*       (D 4) PD4  6|    |23  PC0 (AI 0 / D14)
*             VCC  7|    |22  GND
*             GND  8|    |21  AREF
*             PB6  9|    |20  AVCC
*             PB7 10|    |19  PB5 (D 13)
*  PWM+ (D 5) PD5 11|    |18  PB4 (D 12)
*  PWM+ (D 6) PD6 12|    |17  PB3 (D 11) PWM
*       (D 7) PD7 13|    |16  PB2 (D 10) PWM
*       (D 8) PB0 14|    |15  PB1 (D 9)  PWM
*                   +----+
****************************************************************************************/
#if MOTHERBOARD == 0
#ifndef __AVR_ATmega168__
#error Oops!  Make sure you have 'Arduino Diecimila' selected from the boards menu.
#endif

#define X_STEP_PIN          2
#define X_DIR_PIN           3
#define X_ENABLE_PIN       -1
#define X_MIN_PIN           4
#define X_MAX_PIN           9

#define Y_STEP_PIN         10
#define Y_DIR_PIN           7
#define Y_ENABLE_PIN       -1
#define Y_MIN_PIN           8
#define Y_MAX_PIN          13

#define Z_STEP_PIN         19
#define Z_DIR_PIN          18
#define Z_ENABLE_PIN        5
#define Z_MIN_PIN          17
#define Z_MAX_PIN          16

#define E_STEP_PIN         11
#define E_DIR_PIN          12
#define E_ENABLE_PIN       -1

#define SDPOWER          -1
#define SDSS          -1
#define LED_PIN            -1
#define FAN_PIN            -1
#define PS_ON_PIN          15
#define KILL_PIN           -1

#define HEATER_0_PIN        6
#define TEMP_0_PIN          0    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






/****************************************************************************************
* Sanguino/RepRap Motherboard with direct-drive extruders
*
*                        ATMega644P
*
*                        +---\/---+
*            (D 0) PB0  1|        |40  PA0 (AI 0 / D31)
*            (D 1) PB1  2|        |39  PA1 (AI 1 / D30)
*       INT2 (D 2) PB2  3|        |38  PA2 (AI 2 / D29)
*        PWM (D 3) PB3  4|        |37  PA3 (AI 3 / D28)
*        PWM (D 4) PB4  5|        |36  PA4 (AI 4 / D27)
*       MOSI (D 5) PB5  6|        |35  PA5 (AI 5 / D26)
*       MISO (D 6) PB6  7|        |34  PA6 (AI 6 / D25)
*        SCK (D 7) PB7  8|        |33  PA7 (AI 7 / D24)
*                  RST  9|        |32  AREF
*                  VCC 10|        |31  GND 
*                  GND 11|        |30  AVCC
*                XTAL2 12|        |29  PC7 (D 23)
*                XTAL1 13|        |28  PC6 (D 22)
*       RX0 (D 8)  PD0 14|        |27  PC5 (D 21) TDI
*       TX0 (D 9)  PD1 15|        |26  PC4 (D 20) TDO
*  INT0 RX1 (D 10) PD2 16|        |25  PC3 (D 19) TMS
*  INT1 TX1 (D 11) PD3 17|        |24  PC2 (D 18) TCK
*       PWM (D 12) PD4 18|        |23  PC1 (D 17) SDA
*       PWM (D 13) PD5 19|        |22  PC0 (D 16) SCL
*       PWM (D 14) PD6 20|        |21  PD7 (D 15) PWM
*                        +--------+
*
****************************************************************************************/
#elif MOTHERBOARD == 1
#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN         15
#define X_DIR_PIN          18
#define X_ENABLE_PIN       19
#define X_MIN_PIN          20
#define X_MAX_PIN          21

#define Y_STEP_PIN         23
#define Y_DIR_PIN          22
#define Y_ENABLE_PIN       19
#define Y_MIN_PIN          25
#define Y_MAX_PIN          26

#define Z_STEP_PIN         29
#define Z_DIR_PIN          30
#define Z_ENABLE_PIN       31
#define Z_MIN_PIN           2
#define Z_MAX_PIN           1

#define E_STEP_PIN         12
#define E_DIR_PIN          16
#define E_ENABLE_PIN        3

#define SDPOWER          -1
#define SDSS          -1
#define LED_PIN             0
#define FAN_PIN            -1
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       14
#define TEMP_0_PIN          4 //D27   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!

/*  Unused (1) (2) (3) 4 5 6 7 8 9 10 11 12 13 (14) (15) (16) 17 (18) (19) (20) (21) (22) (23) 24 (25) (26) (27) 28 (29) (30) (31)  */






/****************************************************************************************
* RepRap Motherboard  ****---NOOOOOO RS485/EXTRUDER CONTROLLER!!!!!!!!!!!!!!!!!---*******
*
****************************************************************************************/
#elif MOTHERBOARD == 2
#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_MIN_PIN       20
#define X_MAX_PIN       21

#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    24
#define Y_MIN_PIN       25
#define Y_MAX_PIN       26

#define Z_STEP_PINN     27
#define Z_DIR_PINN      28
#define Z_ENABLE_PIN    29
#define Z_MIN_PIN       30
#define Z_MAX_PIN       31

#define E_STEP_PIN      17
#define E_DIR_PIN       16
#define E_ENABLE_PIN    -1

#define SDPOWER          -1
#define SDSS          4
#define LED_PIN          0

#define SD_CARD_WRITE    2
#define SD_CARD_DETECT   3
#define SD_CARD_SELECT   4

//our RS485 pins
#define TX_ENABLE_PIN	12
#define RX_ENABLE_PIN	13

//pin for controlling the PSU.
#define PS_ON_PIN       14

#define FAN_PIN         -1
#define KILL_PIN        -1

#define HEATER_0_PIN    -1
#define TEMP_0_PIN      -1    // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!






/****************************************************************************************
* Arduino Mega pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 3
//////////////////FIX THIS//////////////
#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif

#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24
#define X_MIN_PIN           3
#define X_MAX_PIN           -2 //2

#define Y_STEP_PIN         38
#define Y_DIR_PIN          40
#define Y_ENABLE_PIN       36
#define Y_MIN_PIN          16
#define Y_MAX_PIN          -1 //17

#define Z_STEP_PIN         44
#define Z_DIR_PIN          46
#define Z_ENABLE_PIN       42
#define Z_MIN_PIN          18
#define Z_MAX_PIN          -1 //19

#define E_STEP_PIN         32
#define E_DIR_PIN          34
#define E_ENABLE_PIN       30

#define SDPOWER          48
#define SDSS          53
#define LED_PIN            13

//#define FAN_PIN            11 // UNCOMMENT THIS LINE FOR V1.0
#define FAN_PIN            9 // THIS LINE FOR V1.1

#define PS_ON_PIN          -1
#define KILL_PIN           -1

//#define HEATER_0_PIN        12  // UNCOMMENT THIS LINE FOR V1.0
#define HEATER_0_PIN       10 // THIS LINE FOR V1.1
#define HEATER_1_PIN       8 // THIS LINE FOR V1.1

#define TEMP_0_PIN          2   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN          1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!


#ifndef SDSUPPORT

// SPI for Max6675 Thermocouple (these pins are defined in the SD library if building with SD support).
#define SCK_PIN             52
#define MISO_PIN            50
#define MOSI_PIN            51
#define MAX6675_SS              53
#else
#define MAX6675_SS              49
#endif



/****************************************************************************************
* Duemilanove w/ ATMega328P pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 4
#ifndef __AVR_ATmega328P__
#error Oops!  Make sure you have 'Arduino Duemilanove w/ ATMega328' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN          2
#define X_DIR_PIN           5
#define X_ENABLE_PIN        8
#define X_MIN_PIN           9
#define X_MAX_PIN          -1

#define Y_STEP_PIN          3
#define Y_DIR_PIN           6
#define Y_ENABLE_PIN       X_ENABLE_PIN
#define Y_MIN_PIN          10
#define Y_MAX_PIN          -1

#define Z_STEP_PIN          4
#define Z_DIR_PIN           7
#define Z_ENABLE_PIN        X_ENABLE_PIN 
#define Z_MIN_PIN          11
#define Z_MAX_PIN          -1

#define E_STEP_PIN         12
#define E_DIR_PIN          13
#define E_ENABLE_PIN       X_ENABLE_PIN

#define SDPOWER            -1
#define SDSS               -1
#define LED_PIN            -1
#define FAN_PIN            -1
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN        A1 //ou pino 15 digital 
#define TEMP_0_PIN          A3 // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!




/****************************************************************************************
* Gen6 pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 5

#ifndef __AVR_ATmega644P__
    #error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

//x axis pins
    #define X_STEP_PIN      15
    #define X_DIR_PIN       18
    #define X_ENABLE_PIN    19
    #define X_MIN_PIN       20
    #define X_MAX_PIN       -1
    
    //y axis pins
    #define Y_STEP_PIN      23
    #define Y_DIR_PIN       22
    #define Y_ENABLE_PIN    24
    #define Y_MIN_PIN       25
    #define Y_MAX_PIN       -1
    
    //z axis pins
    #define Z_STEP_PIN      27
    #define Z_DIR_PIN       28
    #define Z_ENABLE_PIN    29
    #define Z_MIN_PIN       30
    #define Z_MAX_PIN       -1
    
    //extruder pins
    #define E_STEP_PIN      4     //Edited @ EJE Electronics 20100715
    #define E_DIR_PIN       2     //Edited @ EJE Electronics 20100715
    #define E_ENABLE_PIN    3     //Added @ EJE Electronics 20100715
    #define TEMP_0_PIN      5     //changed @ rkoeppl 20110410
    #define HEATER_0_PIN    14    //changed @ rkoeppl 20110410
    #define HEATER_1_PIN    -1    //changed @ rkoeppl 20110410
    
    
    #define SDPOWER          -1
    #define SDSS          -1
    #define LED_PIN         -1    //changed @ rkoeppl 20110410
    #define TEMP_1_PIN      -1    //changed @ rkoeppl 20110410
    #define FAN_PIN         -1    //changed @ rkoeppl 20110410
    #define PS_ON_PIN       -1    //changed @ rkoeppl 20110410
    //our pin for debugging.
    
    #define DEBUG_PIN        0
    
    //our RS485 pins
    #define TX_ENABLE_PIN	12
    #define RX_ENABLE_PIN	13


/****************************************************************************************
* Sanguinololu pin assignment
*
****************************************************************************************/
#elif MOTHERBOARD == 6
#ifndef __AVR_ATmega644P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN         15
#define X_DIR_PIN          21
#define X_ENABLE_PIN       -1
#define X_MIN_PIN          18
#define X_MAX_PIN           -2 //2

#define Y_STEP_PIN         22
#define Y_DIR_PIN          23
#define Y_ENABLE_PIN       -1
#define Y_MIN_PIN          19
#define Y_MAX_PIN          -1 //17

#define Z_STEP_PIN         3
#define Z_DIR_PIN          2
#define Z_ENABLE_PIN       -1
#define Z_MIN_PIN          20
#define Z_MAX_PIN          -1 //19

#define E_STEP_PIN         1
#define E_DIR_PIN          0
#define E_ENABLE_PIN       -1

#define LED_PIN            -1

#define FAN_PIN            -1 // THIS LINE FOR V1.0

#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       13 // THIS LINE FOR V1.0 (extruder)
#define HEATER_1_PIN       14 // THIS LINE FOR V1.0 (bed)

#define TEMP_0_PIN          7   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 33 extruder)
#define TEMP_1_PIN          6   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!! (pin 34 bed)

#else

#error Unknown MOTHERBOARD value in configuration.h

#endif

#endif
