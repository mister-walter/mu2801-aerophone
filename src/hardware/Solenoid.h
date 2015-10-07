// Solenoid.h
// Description: Class for a single solenoid

#ifndef Solenoid_h
#define Solenoid_h

#include "Arduino.h"

class Solenoid
{
  public:
    Solenoid(int pin);
    Solenoid(int pin, bool is_on);
    void turnon();
    void turnoff();
    bool isOn();
  private:
    int _pin;
    bool _is_on;
};

#endif
