// Song.h
// Description: Class for a song, which is a collection of musical notes

#ifndef Song_h
#define Song_h

#include "Arduino.h"
#include "SongAtom.h"
#include "Note.h"
#include "../Aerophone/AerophoneKnowledge.h"

class Song 
{
  public:
    Song();
    Song(SongAtom **notes, int numNotes);
    SongAtom** getNotes();
    void play(AerophoneKnowledge aerophone, int bpm);
  private:
    SongAtom **_notes;
    int _numNotes;
};

#endif
