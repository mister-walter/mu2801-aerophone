#include "FingeringScheme.h"

FingeringScheme::FingeringScheme() 
{
}

void FingeringScheme::addFingering(int note, char fingering) 
{
  _fingerings[note] = fingering;
}

char FingeringScheme::getFingering(int note) 
{
  return _fingerings[note];
}

char FingeringScheme::allClosed() {
  return (char) 0;
}

