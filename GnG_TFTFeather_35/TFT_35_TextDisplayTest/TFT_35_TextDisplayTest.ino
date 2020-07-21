
#include "GnG_TFTFeather_35.h"

GnG_TFTFeather_35 tft;

void setup() {
  Serial.println("HX8357D Test!");
  tft.tftSetup();
  tft.fillScreen(HX8357_BLACK);
}

void loop(void) {
  tft.fillScreen(HX8357_BLACK);
  tft.setforPrint(12, 12,HX8357_WHITE,2);
  String s1 = "Random Float:  ";
  tft.print(s1);
  tft.drawRect(8, 8, tft.width()-15,24, HX8357_GREEN);
  long temp1= random(0,15);
  long temp2 = random(0,25);
  float ib1 = (1.0*temp1)/(1.0*temp2);
  tft.println(ib1,4);
  tft.drawRect(8, 8, 180,24, HX8357_RED);
 
  delay(1000);
}
