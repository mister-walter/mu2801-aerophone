#include <Arduino.h>
#include "Aerophone.h"
#include "Music.h"
#include "Hardware.h"

#define NUM_HOLE_SOLENOIDS 6
#define HOLE_SOLENOID_PIN_OFFSET 2
#define VALVE_SOLENOID_PIN 10

void setup() {
  FingeringScheme scheme;
  scheme.addFingering(87, (char) 0x3); // d#
  scheme.addFingering(89, (char) 0x41); // f
  scheme.addFingering(85, (char) 0x7); // c#

  HoleController holeControllers[NUM_HOLE_SOLENOIDS];
  
  for(int i = 0; i < NUM_HOLE_SOLENOIDS; i++) {
    pinMode(HOLE_SOLENOID_PIN_OFFSET + i, OUTPUT);
    Solenoid s(HOLE_SOLENOID_PIN_OFFSET + i);
    holeControllers[i].setHoleNum(i);
    holeControllers[i].setSolenoid(s);
  }

  Solenoid valveSolenoid(VALVE_SOLENOID_PIN);
  ValveController valveController(valveSolenoid);

  Note _cSharp(85, 1);
  Note _dSharp(87, 1);
  Note _f(89, 1);
  Rest _qRest(1);

  SongAtom* cs = &_cSharp;
  SongAtom* ds = &_dSharp;
  SongAtom* f = &_f;
  SongAtom* qr = &_qRest;

  SongAtom* notes[8];
  notes[0] = f;
  notes[1] = ds;
  notes[2] = cs;
  notes[3] = ds;
  notes[4] = f;
  notes[5] = f;
  notes[6] = f;
  notes[7] = qr;
  
  Song song((SongAtom**)notes, 8);

  AerophoneInteractor interactor(holeControllers, valveController);
  AerophoneKnowledge aerophone(interactor, scheme);
  MusicPlayer player(aerophone, song);
  player.play();
}

void loop() {
}

