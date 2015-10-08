// AerophoneInteractor.cpp
// Description: Class for a mechanism that interacts with aerophone using
// HoleControllers and ValveController

AerophoneInteractor::AerophoneInteractor(HoleController* holeControllers,
                                         ValveController valveController)
{
  // Initialize the array of HoleControllers
  int numHoleControllers = sizeof(holeControllers) / sizeof(holeControllers[0]);
  _holeControllers = new HoleController[numHoleControllers];
  int i;
  for (i = 0; i < numHoleControllers; i++) {
    _holeControllers[i] = holeControllers[i];
  }

  // Initialize valve controller
  _valveController = valveController;
}

void AerophoneInteractor::updateHoleStates(bool states[])
{
  // Close hole whose corresponding value in states is true
  int i;
  int numHoleControllers = sizeof(holeControllers) / sizeof(holeControllers[0]);
  for (i = 0; i < numHoleControllers; i++) {
    states[i] ? _holeControllers[i]->close(); : _holeControllers[i]->open();
  }
}

void AerophoneInteractor::turnValveOn()
{
  _valveController.open();
}

void AerophoneInteractor::turnValveOff()
{
  _valveController.close();
}

HoleController *AerophoneInteractor::getHoleControllers()
{
  return _holeControllers;
}
