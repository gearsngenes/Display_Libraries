#include "GnGminiTFTjoystickFeather.h"
void GnGminiTFTjoystickFeather::printString(String label, uint16_t color)
{
  setTextColor(color);
  print(label);

}

void GnGminiTFTjoystickFeather::printFloat(float floatValue, int precision, uint16_t color)
{

  setTextColor(color);
  print(floatValue, precision);

}
void GnGminiTFTjoystickFeather::setDisplayVals(int xv, int yv, int fsize, bool wrap, uint16_t color )
{
  setCursor(xv, yv);
  setTextColor(color);
  setTextWrap(wrap);
  setTextSize(fsize);
}

void GnGminiTFTjoystickFeather::nextline()
{
  this->setCursor (0, this->getCursorY() + this->textsize_y * 8);
}
void GnGminiTFTjoystickFeather::clearDisplayAfter(int waitv)
{
  if (waitv > 0) {
    delay(waitv);
  };
  fillScreen( ST77XX_BLACK);
}

GnGminiTFTjoystickFeather::GnGminiTFTjoystickFeather() : Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST)
{

}

void GnGminiTFTjoystickFeather::Setup()
{
  Serial.begin(115200);

  Serial.print("Hello! ST77xx TFT Test");

  if (!ss1.begin()) {
    Serial.println("seesaw init error!");
    while (1);
  }
  else Serial.println("seesaw started");

  ss1.tftReset();
  ss1.setBacklight(0x0); //set the backlight fully on

  // Use this initializer (uncomment) if you're using a 0.96" 180x60 TFT
  initR(INITR_MINI160x80);   // initialize a ST7735S chip, mini display

  setRotation(3);

  Serial.println("Initialized");

  uint16_t time = millis();
  fillScreen(ST77XX_BLACK);
  time = millis() - time;

  Serial.println(time, DEC);
  delay(500);


  Serial.println("done");
  delay(1000);
}