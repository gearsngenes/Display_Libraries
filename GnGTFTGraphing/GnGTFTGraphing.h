#ifndef GnGTFTGraphing_h
#define GnGTFTGraphing_h
#include "GnG_TFTFeather_35.h"
#include "Arduino.h"

class GnGTFTGraphing : public GnG_TFTFeather_35
{
  public:
    static int ORIGIN_POSITION; //number 7 corresponds to x=0;y=height-1
    GnGTFTGraphing(int originposition, float rangeXMax, float rangeYMax);
    int getXcoord(float xvalue);
    int getYcoord(float xvalue);
    void drawGrid(int xsize, int ysize, int xdotseparation = 5, int ydotseperation = 5);
    void basicTest();
    void printPoint(float xvalue, float yvalue);
    void setRange(float xMax, float yMax);
    void drawBasicExample();
    float xScalefactor = 1.0;
    float yScalefactor = 1.0;
    int xorigin = 0;
    int yorigin = 0;

};
#endif