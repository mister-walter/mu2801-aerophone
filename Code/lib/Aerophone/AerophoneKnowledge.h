// Aerophone.h
// Description: Class for an aerophone that has a knowledge of fingering -> note relationships 
// and is able to interact with an aerophone using an AerophoneInteractor
#ifndef Aerophone_Knowledge_h
#define Aerophone_Knowledge_h

#include "Arduino.h"
#include "AerophoneInteractor.h"
#include "FingeringScheme.h"

class AerophoneKnowledge
{
  public:
    AerophoneKnowledge();
    AerophoneKnowledge(AerophoneInteractor interactor, FingeringScheme fingerings);
    void playMidi(int note, double duration);
    void turnOnMidi(int note);
    void turnOffMidi();
  private:
    AerophoneInteractor _interactor;
    FingeringScheme _fingerings;
};

#endif
