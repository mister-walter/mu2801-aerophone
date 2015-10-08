// Song.cpp
// Description: Class for a song, which is a collection of musical notes

#include "Arduino.h"
#include "Song.h"

// TODO ARRAY!
Song::Song(Note notes[])
{
  int size = sizeof(notes) / sizeof(Note);
  _notes[size];
  int i;
  for (i = 0; i < size; i++) {
    _notes[i] = notes[i];
  }
}

// TODO ARRAY!
Song::getNotes()
{
  return _notes;
}
