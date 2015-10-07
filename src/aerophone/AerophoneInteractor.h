// AerophoneInteractor.h
// Description: Class for a mechanism that interacts with aerophone using
// HoleControllers and ValveController


#ifndef Aerophone_Interactor_h
#define Aerophone_Interactor_h

#include "Arduino.h"
#include "HoleController.h"
#include "ValveController.h"

class AerophoneInteractor
{
  public:
    AerophoneInteractor(HoleController* holeControllers, ValveController valveController);
    void updateHoleStates(bool states[]);
    void turnValveOn();
    void turnValveOff();
  private:
    HoleController* _holeControllers;
    ValveController _valveController;
}

#endif
