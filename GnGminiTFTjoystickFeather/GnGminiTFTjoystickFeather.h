#ifndef GnGminiTFTjoystickFeather_h
#define GnGminiTFTjoystickFeather_h
#include "Arduino.h"
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include "Adafruit_miniTFTWing.h"



#define TFT_RST    -1    // we use the seesaw for resetting to save a pin

#ifdef ESP8266
#define TFT_CS   2
#define TFT_DC   16
#endif
#ifdef ESP32
#define TFT_CS   14
#define TFT_DC   32
#endif
#ifdef TEENSYDUINO
#define TFT_CS   8
#define TFT_DC   3
#endif
#ifdef ARDUINO_STM32_FEATHER
#define TFT_CS   PC5
#define TFT_DC   PC7
#endif
#ifdef ARDUINO_NRF52832_FEATHER /* BSP 0.6.5 and higher! */
#define TFT_CS   27
#define TFT_DC   30
#endif

// Anything else!
#if defined (__AVR_ATmega32U4__) || defined(ARDUINO_SAMD_FEATHER_M0) || defined (__AVR_ATmega328P__) || \
    defined(ARDUINO_SAMD_ZERO) || defined(__SAMD51__) || defined(__SAM3X8E__) || defined(ARDUINO_NRF52840_FEATHER)
#define TFT_CS   5
#define TFT_DC   6
#endif



class GnGminiTFTjoystickFeather : public Adafruit_ST7735
{
  public:
    GnGminiTFTjoystickFeather();
    Adafruit_miniTFTWing ss1;

    void Setup();
    void setDisplayVals(int xv=0, int yv=0, int fsize=2, bool wrap=true, uint16_t color = ST77XX_WHITE);
    void nextline();
    void printString(String label, uint16_t color = ST77XX_WHITE);
    void printFloat(float floatValue, int precision = 2,uint16_t color = ST77XX_WHITE);
    void clearDisplayAfter(int waitv = 500);
};

#endif