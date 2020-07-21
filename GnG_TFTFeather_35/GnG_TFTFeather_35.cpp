#include "GnG_TFTFeather_35.h"

void GnG_TFTFeather_35 :: tftSetup()
{
  (*this).begin();
}
void GnG_TFTFeather_35 :: setforPrint(int xv, int yv, uint16_t color,int font=2)
{
  setCursor(xv,yv);
  setTextColor (color);
  setTextSize(font);
}