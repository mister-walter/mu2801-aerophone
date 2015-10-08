// Solenoid.cpp
// Description: Class for a single solenoid

#include "Arduino.h"
#include "Solenoid.h"

Solenoid::Solenoid(int pin)
{
  _pin = pin;
  _is_on = false;
}

Solenoid::Solenoid(int pin, bool is_on)
{
  _pin = pin;
  _is_on = is_on;
}

void Solenoid::turnon()
{
  // Turn the solenoid on
  _is_on = true;
  digitalWrite(_pin, HIGH);
}

void Solenoid::turnoff()
{
  // Turn the solenoid off
  _is_on = false;
  digitalWrite(_pin, LOW);
}

bool Solenoid::isOn()
{
  return _is_on;
}
