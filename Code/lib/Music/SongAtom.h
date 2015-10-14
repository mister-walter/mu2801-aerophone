// SongAtom.h
// A class representing a single element of a Song
// It is an abstract class that is currently implemented by Note and Rest

#ifndef Song_Atom_h
#define Song_Atom_h

#include "AerophoneKnowledge.h"
class SongAtom
{
    public:
        virtual void play(AerophoneKnowledge aerophone, int bpm) {}
        virtual bool isRest() {}
};

#endif
