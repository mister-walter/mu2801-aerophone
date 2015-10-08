// HoleController.cpp
// Description: Class for a hole controller that opens and closes a hole of
// the aerophone by controlling a solenoid.

#include "HoleController.h"

HoleController::HoleController() 
{
}

HoleController::HoleController(int hole_num, Solenoid solenoid)
{
  _hole_num = hole_num;
  _solenoid = solenoid;
}

void HoleController::setHoleNum(int hole_num) 
{
  _hole_num = hole_num;
}
void HoleController::setSolenoid(Solenoid solenoid) 
{
  _solenoid = solenoid;
}

void HoleController::open()
{
  _solenoid.turnoff();
}

void HoleController::close()
{
  _solenoid.turnon();
}

int HoleController::getHoleNum()
{
  return _hole_num;
}

bool HoleController::isHoleOpen()
{
  return !_solenoid.isOn();
}
