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

#ifndef _EINK_CONFIG_H_
#define _EINK_CONFIG_H_
#include <arduino.h>
#include <stdint.h>
#include <stdio.h>
#include <SPI.h>
#include <avr/pgmspace.h>



#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t

/**
 * GPIO config
**/
#define EPD_RST_PIN         12
#define EPD_DC_PIN          17
#define EPD_CS_PIN          29
#define EPD_BUSY_PIN        11


/**
 * GPIO read and write
**/
#define EINK_Digital_Write(_pin, _value) digitalWrite(_pin, _value == 0? LOW:HIGH)
#define EINK_Digital_Read(_pin) digitalRead(_pin)


/**
 * SPI
**/
#define EINK_SPI_WriteByte(_dat)   SPI.transfer(_dat)

/**
 * delay x ms
**/
#define EINK_Delay_ms(__xms)    delay(__xms)



/*-----------------------------------------------------------------------------*/
 void Config_Init();
#endif
