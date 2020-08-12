#include "GnGTFTGraphing.h"

GnGTFTGraphing* tftgraph = new GnGTFTGraphing (7, 20, 500);
GnGTFTGraphing tft = *tftgraph; // ease of use

void basicsetup()
{
  Serial.println("HX8357D Test!");
  tft.tftSetup();
  tft.fillScreen(HX8357_BLACK);
}

void setup()
{
  Serial.begin(115200);
  basicsetup();
}

void loop() {

  tft.drawBasicExample();
  delay(1000);
  tft.fillScreen(HX8357_BLACK);
  tft.setRange(20, 500); //20 units on x axis, 500 units on y axis
  tft.drawGrid(32, 48);

  for (int i = 0; i < 201; i += 20)
  {
    tft.printPoint(i / 10, i / 10 * 25);
  }

  delay(1000);

}
