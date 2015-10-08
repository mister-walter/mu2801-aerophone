#include "Rest.h"

Rest::Rest(double beats) 
{
  _beats = beats;
}

bool Rest::isRest()
{
  return true;
}

void Rest::play(AerophoneInteractor aerophone, int bpm)
{
  delay( 60.0 / bpm * _beats);
}
