// MusicPlayer.h
// Description: class for a music player that plays the aerophone

#ifndef Music_Player_h
#define Music_Player_h

#include "AerophoneKnowledge.h"
#include "../Music/Song.h"

class MusicPlayer
{
    public: 
        MusicPlayer(AerophoneKnowledge aerophone,
                    Song song);
        void play();
        void changeSong(Song newSong);
    private:
        AerophoneKnowledge _aerophone;
        Song _song;
};

#endif
