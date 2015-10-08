
#ifndef Rest_h
#define Rest_h

#include "Arduino.h"
#include "SongAtom.h"
#include "AerophoneInteractor.h"
class Rest : public SongAtom
{
    public:
        Rest(double beats);
        void play(AerophoneInteractor aerophone, int bpm);
        bool isRest();
    private:
        double _beats;
};

#endif
