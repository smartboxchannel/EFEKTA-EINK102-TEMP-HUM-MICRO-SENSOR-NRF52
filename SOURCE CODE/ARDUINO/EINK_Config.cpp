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

#include "EINK_Config.h"

void GPIO_Init()
{
  pinMode(EPD_CS_PIN, OUTPUT);
  pinMode(EPD_RST_PIN, OUTPUT);
  pinMode(EPD_DC_PIN, OUTPUT);
  pinMode(EPD_BUSY_PIN, INPUT);
 
 }
 void Config_Init()
 {

  GPIO_Init();
  
  
  //spi
  SPI.setDataMode(SPI_MODE3);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV2);
  SPI.begin();
  }
