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

extern const unsigned char LOGO[1280];
extern const unsigned char bNum0[200];
extern const unsigned char bNum1[200];
extern const unsigned char bNum2[200];
extern const unsigned char bNum3[200];
extern const unsigned char bNum4[200];
extern const unsigned char bNum5[200];
extern const unsigned char bNum6[200];
extern const unsigned char bNum7[200];
extern const unsigned char bNum8[200];
extern const unsigned char bNum9[200];
extern const unsigned char bNum0d[200];
extern const unsigned char bNum1d[200];
extern const unsigned char bNum2d[200];
extern const unsigned char bNum3d[200];
extern const unsigned char bNum4d[200];
extern const unsigned char bNum5d[200];
extern const unsigned char bNum6d[200];
extern const unsigned char bNum7d[200];
extern const unsigned char bNum8d[200];
extern const unsigned char bNum9d[200];
extern const unsigned char bNumN[200];
extern const unsigned char sNum0[102];
extern const unsigned char sNum1[102];
extern const unsigned char sNum2[102];
extern const unsigned char sNum3[102];
extern const unsigned char sNum4[102];
extern const unsigned char sNum5[102];
extern const unsigned char sNum6[102];
extern const unsigned char sNum7[102];
extern const unsigned char sNum8[102];
extern const unsigned char sNum9[102];
extern const unsigned char sNum0d[102];
extern const unsigned char sNum1d[102];
extern const unsigned char sNum2d[102];
extern const unsigned char sNum3d[102];
extern const unsigned char sNum4d[102];
extern const unsigned char sNum5d[102];
extern const unsigned char sNum6d[102];
extern const unsigned char sNum7d[102];
extern const unsigned char sNum8d[102];
extern const unsigned char sNum9d[102];
extern const unsigned char sNumN[102];
extern const unsigned char tempRU[100];
extern const unsigned char tempEN[100];
extern const unsigned char humRU[100];
extern const unsigned char humEN[100];
extern const unsigned char batt000[30];
extern const unsigned char batt167[30];
extern const unsigned char batt333[30];
extern const unsigned char batt500[30];
extern const unsigned char batt667[30];
extern const unsigned char batt833[30];
extern const unsigned char batt1000[30];
extern const unsigned char sigNo[30];
extern const unsigned char sig0[30];
extern const unsigned char sig25[30];
extern const unsigned char sig50[30];
extern const unsigned char sig75[30];
extern const unsigned char sig100[30];
extern const unsigned char sCel[11];
extern const unsigned char sProc[11];
extern const unsigned char sCeld[11];
extern const unsigned char sProcd[11];
extern const unsigned char BS[350];
extern const unsigned char BS2[350];
extern const unsigned char BSEN[350];
extern const unsigned char BS2EN[350];
extern const unsigned char CHSD[350];
extern const unsigned char CHSD2[350];
extern const unsigned char CHSDEN[350];
extern const unsigned char CHSD2EN[350];
extern const unsigned char BIND[350];
extern const unsigned char BIND2[350];
extern const unsigned char BINDEN[350];
extern const unsigned char BIND2EN[350];
extern const unsigned char CONF[350];
extern const unsigned char CONF2[350];
extern const unsigned char CONFEN[350];
extern const unsigned char CONF2EN[350];
extern const unsigned char RESET[350];
extern const unsigned char RESET2[350];
extern const unsigned char RESETEN[350];
extern const unsigned char RESET2EN[350];
extern const unsigned char PRESENT[350];
extern const unsigned char PRESENT2[350];
extern const unsigned char PRESENTEN[350];
extern const unsigned char PRESENT2EN[350];
extern const unsigned char FINDNET[350];
extern const unsigned char FINDNET2[350];
extern const unsigned char FINDNETEN[350];
extern const unsigned char FINDNET2EN[350];
extern const unsigned char BINDOK[350];
extern const unsigned char BINDOKEN[350];
extern const unsigned char CONECT[350];
extern const unsigned char CONECTEN[350];
