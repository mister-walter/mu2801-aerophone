#include "AerophoneKnowledge.h"

AerophoneKnowledge::AerophoneKnowledge()
{
}

AerophoneKnowledge::AerophoneKnowledge(AerophoneInteractor interactor, FingeringScheme fingerings) 
{
  _interactor = interactor;
  _fingerings = fingerings;
}

void AerophoneKnowledge::playMidi(int note, double duration)
{
  _interactor.updateHoleStates(_fingerings.getFingering(note));
  _interactor.turnValveOn();
  delay(duration);
  _interactor.turnValveOff();
}

void AerophoneKnowledge::turnOnMidi(int note) {
  _interactor.updateHoleStates(_fingerings.getFingering(note));
  _interactor.turnValveOn();
}

void AerophoneKnowledge::turnOffMidi() {
  _interactor.turnValveOff();
  _interactor.updateHoleStates(_fingerings.allClosed());
}
