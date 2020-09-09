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

#ifndef _EINK_1IN02_H_
#define _EINK_1IN02_H_

#include "EINK_Config.h"

// Display resolution
#define EPD_WIDTH   80
#define EPD_HEIGHT  128

UBYTE EPD_Init(void);
void EPD_TurnOnDisplay(void);
void EPD_Clear(void);
void EPD_Clear2(void);
void EPD_Clear3(void);
void EPD_Display_Image(UBYTE *Image);
void EPD_Sleep(void);
void EPD_Part_Init(void);
void EPD_DisplayPartia_Clear(void);
void EPD_SendData(UBYTE Data);
#endif
