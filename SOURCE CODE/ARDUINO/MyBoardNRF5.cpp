// ###################  Micro temperature and humidity sensor with electronic ink display 1.02 Inch | nRF52 ############### //
//                                                                                                                          //
//        @filename   :   EFEKTA_THEINK102_1.4.ino                                                                          //
//        @brief en   :   Wireless, battery-operated temperature and humidity sensor (SHT20, SI7020)                        //
//                        with electronic ink display(Good Display GDEW0102T4). Works on nRF52.                             //
//        @brief ru   :   Беcпроводной, батарейный датчик температуры и влажности(sht20, si7020)                            //
//                        с дисплеем на электронных чернилах(Good Display GDEW0102T4). Работает на nRF52.                   //
//        @author     :   Andrew Lamchenko aka Berk                                                                         //
//                                                                                                                          //
//        Copyright (C) EFEKTALAB 2020                                                                                      //
//                                                                                                                          //
// ######################################################################################################################## //

#ifdef MYBOARDNRF5
#include <variant.h>

/*
 * Pins descriptions. Attributes are ignored by arduino-nrf5 variant. 
 * Definition taken from Arduino Primo Core with ordered ports
 */
const PinDescription g_APinDescription[]=
{
  { NOT_A_PORT, 0, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // LFCLK
  { NOT_A_PORT, 1, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // LFCLK
  { PORT0,  2, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A0, PWM4, NOT_ON_TIMER},
  { PORT0,  3, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A1, PWM5, NOT_ON_TIMER},
  { PORT0,  4, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A2, PWM6, NOT_ON_TIMER},
  { PORT0,  5, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A3, PWM7, NOT_ON_TIMER},
  { PORT0,  6, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT3
  { PORT0,  7, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT4
  { PORT0,  8, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM10, NOT_ON_TIMER},    //USER_LED
  { PORT0,  9, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // NFC1
  { PORT0, 10, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // NFC2
  { PORT0, 11, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // TX
  { PORT0, 12, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // RX
  { PORT0, 13, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // SDA
  { PORT0, 14, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // SCL
  { PORT0, 15, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // SDA1
  { PORT0, 16, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // SCL1
  { PORT0, 17, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // TP4
  { PORT0, 18, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // TP5
  { PORT0, 19, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT2
  { PORT0, 20, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT1
  { PORT0, 21, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT1
  { PORT0, 22, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM9, NOT_ON_TIMER},
  { PORT0, 23, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM8, NOT_ON_TIMER},
  { PORT0, 24, PIO_DIGITAL, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER}, // INT
  { PORT0, 25, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM11, NOT_ON_TIMER},   //RED_LED
  { PORT0, 26, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM11, NOT_ON_TIMER},  //GREEN_LED
  { PORT0, 27, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), No_ADC_Channel, PWM11, NOT_ON_TIMER},  //BLUE_LED
  { PORT0, 28, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A4, PWM3, NOT_ON_TIMER},
  { PORT0, 29, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A5, PWM2, NOT_ON_TIMER},
  { PORT0, 30, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A6, PWM1, NOT_ON_TIMER},
  { PORT0, 31, PIO_DIGITAL, (PIN_ATTR_DIGITAL|PIN_ATTR_PWM), ADC_A7, PWM0, NOT_ON_TIMER}
};

// Don't remove this line
#include <compat_pin_mapping.h>

#endif
