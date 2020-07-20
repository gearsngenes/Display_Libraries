#ifndef GnG_AF_OledFeather_h
#define GnG_AF_OledFeather_h
#include "Arduino.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


// OLED FeatherWing buttons map to different pins depending on board:
#if defined(ESP8266)
  #define BUTTON_A  0
  #define BUTTON_B 16
  #define BUTTON_C  2
#elif defined(ESP32)
  #define BUTTON_A 15
  #define BUTTON_B 32
  #define BUTTON_C 14
#else // 32u4, M0, M4, nrf52840 and 328p
  #define BUTTON_A  9
  #define BUTTON_B  6
  #define BUTTON_C  5
#endif

class GnG_AF_OledFeather:public Adafruit_SSD1306 
{
  public:
  void setup();
  GnG_AF_OledFeather();
  void printTestString( String testString = "OLED Begun",  boolean show=true,int delay1 =0, boolean clear1 = true,int fsize = 2,int xcurs =0, int ycurs=0);
};
#endif