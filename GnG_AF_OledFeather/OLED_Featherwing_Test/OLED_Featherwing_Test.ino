
#include "GnG_AF_OledFeather.h"

GnG_AF_OledFeather goled;
int i = 0;
float iB=0.0; //DC base current
float iC=0.0; //DC Collector current
float iE=0.0; //DC Emitter current

float ViB=0.0; //DC input base voltage
float VBo = 0.0; //voltage at the output terminal of the base resistor - that goes into the transistor
float VEi= 0.0;  //voltage at the input terminal of the emitter resistor - that comes out of the transistor

int ViBPin = A0;
int VBoPin = A1;
int VEiPin = A2;

const float rB=100.0;//ohms; base resistor

void setup()
{
  goled.setup();
  pinMode(ViBPin, OUTPUT);
  pinMode(VBoPin, INPUT);
}

void loop() {

  int j = 0;
  for (int i = 0; i < 4096; i += 120)
  {
    analogWrite(ViBPin, i);
    Serial.println(j = analogRead(VBoPin));
    String s2 = String(j);
    goled.printTestString(s2, true, 0, true, 2, 10, 10);
    delay(1);

  }
  //  processEvents();
}
