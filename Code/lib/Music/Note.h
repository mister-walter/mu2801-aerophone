// Note.h
// Description: Class for a musical note

#ifndef Note_h
#define Note_h

#include "Arduino.h"
#include "SongAtom.h"
#include "../Aerophone/AerophoneKnowledge.h"

class Note : public SongAtom
{
  public:
    Note(int midiNote, int beats);
    int getMidiNote();
    int getDuration();
    void play(AerophoneKnowledge aerophone, int bpm);
    bool isRest();
  private:
    int _midiNote; // midi note number
    int _duration; // note duration in beats 
};

#endif
