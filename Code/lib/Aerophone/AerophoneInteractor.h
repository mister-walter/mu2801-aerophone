// AerophoneInteractor.h
// Description: Class for a mechanism that interacts with aerophone using
// HoleControllers and ValveController


#ifndef Aerophone_Interactor_h
#define Aerophone_Interactor_h

#include "Arduino.h"
#include "../Hardware/HoleController.h"
#include "../Hardware/ValveController.h"

class AerophoneInteractor
{
  public:
    AerophoneInteractor();
    AerophoneInteractor(HoleController* holeControllers,
                        ValveController valveController);
    void updateHoleStates(bool states[]);
    void updateHoleStates(char states);
    void turnValveOn();
    void turnValveOff();
    HoleController *getHoleControllers();
  private:
    HoleController* _holeControllers;
    ValveController _valveController;
};

#endif
