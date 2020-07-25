/***************************************************
  This is a library for the Adafruit 0.96" Mini TFT Featherwing

  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  MIT license, all text above must be included in any redistribution

  ----------GnGminiTFTjoystickFeather notes---------
  The GnGminiTFTjoystickFeather library is a derived class from adafruit
  The main benefit is to improve the ease of setting it up for beginners
  This will be used for future lessons by GearsNGenes
 ****************************************************/

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include "Adafruit_miniTFTWing.h"
#include "GnGminiTFTjoystickFeather.h"

int height;//160
int width;//80

GnGminiTFTjoystickFeather tft;
//Adafruit_miniTFTWing ss = tft.ss1;

void setup(void) {
  Serial.begin(115200);
  Serial.print("Hello! ST77xx TFT Test");
  tft.Setup();
 // tft.setDisplayVals();
  Serial.println("done");
  delay(100);
}

void loop() {

  tft.setDisplayVals(0, 0, 2);

  tft.printString(String("entry1:"));
  tft.printFloat(((random(-1, 20) * 1.0) / (random(-1, 7))), 2, ST77XX_YELLOW);

  tft.nextline();

  tft.printString(String("entry2:"));
  tft.printFloat(((random(1, 200) * 1.0) / (random(1, 5) * 1.0)), 1, ST77XX_YELLOW);
  
  tft.nextline();
  tft.nextline();
  
  tft.printString(String("entry3:"));
  tft.printFloat(((random(-1, 20) * 1.0) / (random(-1, 7))), 2, ST77XX_YELLOW);
  tft.nextline();
  
  tft.printString(String("entry4:"));
  tft.printFloat(((random(1, 200) * 1.0) / (random(1, 5) * 1.0)), 1, ST77XX_YELLOW);
  
  tft.clearDisplayAfter(500);
}
