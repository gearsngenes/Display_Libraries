
void processEvents()
{
  
  if (!digitalRead(BUTTON_A))
  {
    String sA = " ";
    //goled.printTestString(sA, true,100, true, 1, 10, 10);
    i=0;
    goled.setup();
  }
  if (!digitalRead(BUTTON_B))
  {
    delay(100);
    String sB = "B";
     goled.printTestString(sB, true, 100, true, 2,10, 10);
  }
  if (!digitalRead(BUTTON_C))
  {
    delay(100);
    String sC = "C";
    goled.printTestString(sC, true, 100, true, 2, 10, 10);
  }
}
