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
