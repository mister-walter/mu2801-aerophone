// HoleController.h
// Description: Class for a hole controller that opens and closes a hole of
// the aerophone by controlling a solenoid.

#ifndef Hole_Controller_h
#define Hole_Controller_h

#include "Arduino.h"

class HoleController
{
  public:
    HoleController(int hole_num, Solenoid solenoid);
    void open();
    void close();
    int getHoleNum();
    bool isHoleOpen();
  private:
    int _hole_num;
    Solenoid _solenoid;
};

#endif
