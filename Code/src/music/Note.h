// Note.h
// Description: Class for a musical note

#ifndef Note_h
#define Note_h

#include "Arduino.h"

class Note
{
  public:
    Note(int pitch, int duration);
    int getPitch();
    int getDuration();
  private:
    int _pitch; // Hz
    int _duration; // note duration in miliseconds
};

#endif
