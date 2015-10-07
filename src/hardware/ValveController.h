// ValveController.h
// Description: Class for valve controller that opens and closes the valve by
// controlling a solenoid.

#ifndef Valve_Controller_h
#define Valve_Controller_h

#include "Arduino.h"

class ValveController
{
  public:
    ValveController(Solenoid solenoid);
    void open();
    void close();
  private:
    Solenoid _solenoid;
};

#endif
