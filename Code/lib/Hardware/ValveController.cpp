// ValveController.cpp
// Description: Class for valve controller that opens and closes the valve by
// controlling a solenoid.

#include "ValveController.h"

ValveController::ValveController() 
{
}

ValveController::ValveController(Solenoid solenoid)
{
  _solenoid = solenoid;
}

void ValveController::open()
{
  // TODO: does turning solenoid off mean opening valve?
  _solenoid.turnoff();
}

void ValveController::close()
{
  // TODO: does turning solenoid on mean opening valve?
  _solenoid.turnon();
}
