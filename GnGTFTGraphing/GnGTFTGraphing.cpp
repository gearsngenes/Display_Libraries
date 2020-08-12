#include "GnGTFTGraphing.h"


GnGTFTGraphing::GnGTFTGraphing(int originposition, float rangeXMax, float rangeYMax):GnG_TFTFeather_35()
{
 // this->setRotation(0);//this is the confirmed positioning
  if (originposition == 7)//this is the confirmed origin (at x=0pixels, y= (height-1) pixels)
  {
    this->xorigin = 0;
    this->yorigin = this->height() - 1;
   
    this->xScalefactor = ((this->width()*1.0)/rangeXMax);
  yScalefactor = ((this->height()*1.0)/rangeYMax);
  Serial.print("xScalefactor..");Serial.println(xScalefactor,2);
  Serial.print("yScalefactor..");Serial.println(yScalefactor,2);
  Serial.print("width..");Serial.println(this->width());
  Serial.print("height..");Serial.println(this->height());
  }
}


int GnGTFTGraphing::getXcoord(float xvalue)
{
    return (int)(xvalue*this->xScalefactor);
}
int GnGTFTGraphing::getYcoord(float yvalue)
{
  return (yorigin - (int)( yvalue*this->yScalefactor));
}
 
void GnGTFTGraphing::drawGrid(int xsize, int ysize, int xdotseparation, int ydotseperation)
{
    this->drawLine(0, 0, 0, this->height(), HX8357_GREEN); //Y Axis
  this->drawLine(0, this->height()-1, this->width(), this->height()-1, HX8357_GREEN); //X Axis
  //XGrids
  for (uint16_t j = 0; j <= (this->height()/ysize); j++) {
    for (uint16_t i = 0; i < this->width(); i += xdotseparation) {
      
      this->drawPixel(i, j * ysize, HX8357_YELLOW);
    }
  }
  //YGrids
  for (uint16_t i = 0; i <=(this->width()/xsize); i++) {
    for (uint16_t j = 0; j < this->height(); j += ydotseperation) {
      this->drawPixel(i * xsize, j, HX8357_WHITE);
    }
  } 
}

void GnGTFTGraphing::setRange(float xMax, float yMax)
{ this->xScalefactor = ((this->width()*1.0)/xMax);
  this->yScalefactor = ((this->height()*1.0)/yMax);
  Serial.print("xScalefactor..");Serial.println(this->xScalefactor,2);
  Serial.print("yScalefactor..");Serial.println(this->yScalefactor,2);
  Serial.print("width..");Serial.println(this->width());
  Serial.print("height..");Serial.println(this->height());
  
}


void GnGTFTGraphing::drawBasicExample()
{
  this->fillScreen(HX8357_BLACK);
  this->setforPrint(12, 12, HX8357_WHITE, 2);
  String s1 = "Random Float:  ";
  this->print(s1);
  this->drawRect(8, 8, this->width() - 15, 24, HX8357_GREEN);
  long temp1 = random(0, 15);
  long temp2 = random(0, 25);
  float ib1 = (1.0 * temp1) / (1.0 * temp2);
  this->println(ib1, 4);
  this->drawRect(8, 8, 180, 24, HX8357_RED);
}

void GnGTFTGraphing::printPoint(float xvalue, float yvalue)
{
    int xcoord = getXcoord (xvalue);
  int ycoord = getYcoord(yvalue);
  Serial.print ("xvalue:"); Serial.print(xvalue);
  Serial.print ("  y value:"); Serial.println(yvalue);
  
  Serial.print ("x xcoord:"); Serial.print(xcoord);
  Serial.print ("  y ycoord:"); Serial.println(ycoord);
  this->fillCircle(xcoord, ycoord, 3, HX8357_YELLOW);
   
}