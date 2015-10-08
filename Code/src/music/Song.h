// Song.h
// Description: Class for a song, which is a collection of musical notes

#ifndef Song_h
#define Song_h

#include "Arduino.h"
#include "Note.h"

class Song
{
  public:
    Song(Note notes[]);
    Note *getNotes();
  private:
    Note *_notes;
};

#endif
