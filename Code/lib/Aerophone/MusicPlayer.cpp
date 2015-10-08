// MusicPlayer.cpp
// Description: class for a music player that plays the aerophone
#include "MusicPlayer.h"

MusicPlayer::MusicPlayer(AerophoneKnowledge aerophone,
                         Song song) 
{
    _aerophone = aerophone;
    _song = song;
}

void MusicPlayer::play() 
{
}

void MusicPlayer::changeSong(Song newSong) 
{
    _song = newSong;
}
