#ifndef Fingering_Scheme_h
#define Fingering_Scheme_h

class FingeringScheme
{
  public:
    FingeringScheme();
    void addFingering(int note, char fingering);
    char getFingering(int note);
  private:
    char _fingerings[128];
};

#endif
