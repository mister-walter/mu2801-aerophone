// Note.cpp
// Description: Class for a musical note
#include "Note.h"
Note::Note(int midiNote, int duration)
{
  _midiNote = midiNote;
  _duration = duration;
}

int Note::getMidiNote()
{
  return _midiNote;
}

int Note::getDuration()
{
  return _duration;
}

bool Note::isRest()
{
  return false;
}

void Note::play(AerophoneKnowledge aerophoneKnowledge, int bpm)
{
    aerophoneKnowledge.playMidi(_midiNote, 60.0 / bpm * _duration);
}
