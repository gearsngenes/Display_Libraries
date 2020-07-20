#include "GnG_AF_OledFeather.h"

GnG_AF_OledFeather::GnG_AF_OledFeather()
{

}
void GnG_AF_OledFeather::setup()
{
  Serial.begin(115200);
  this->begin(SSD1306_SWITCHCAPVCC, 0x3C); // Address 0x3C for 128x32
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(BUTTON_B, INPUT_PULLUP);
  pinMode(BUTTON_C, INPUT_PULLUP);
  //adafruit picture
  display();
  delay(50);
  clearDisplay();
  printTestString();
}

void GnG_AF_OledFeather::printTestString(String testString,  boolean show, int delay1, boolean clear1, int fsize, int xcurs , int ycurs)
{
//  Serial.println(testString);
  setTextSize(fsize);
  setTextColor(SSD1306_WHITE);
  setCursor(xcurs, ycurs);
  print(testString);
  if (show) {
    display(); // actually display all of the above
    delay(delay1);
  }

  if (clear1) {
    clearDisplay();
    display();
  }
  // actually display all of the above
}