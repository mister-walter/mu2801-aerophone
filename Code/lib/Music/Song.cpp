// Song.cpp
// Description: Class for a song, which is a collection of musical notes

#include "Song.h"

Song::Song()
{
}

Song::Song(SongAtom** notes, int numNotes) {
  int size = numNotes * sizeof(SongAtom*);
  _notes[size];
  int i;
  for (i = 0; i < size; i++) {
    _notes[i] = notes[i];
  }

  _numNotes = numNotes;
}

// TODO ARRAY!
SongAtom** Song::getNotes()
{
  return _notes;
}

void Song::play(AerophoneKnowledge aerophone, int bpm) {
  int size = sizeof(_notes) / sizeof(Note);
  for(int i = 0; i < size; i++) {
    _notes[i]->play(aerophone, bpm);
  }
}
