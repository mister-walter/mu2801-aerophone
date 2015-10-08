// Note.cpp
// Description: Class for a musical note

Note::Note(int pitch, int duration)
{
  _pitch = pitch;
  _duration = duration;
}

Note::getPitch()
{
  return _pitch;
}

Note::getDuration()
{
  return _duration;
}
