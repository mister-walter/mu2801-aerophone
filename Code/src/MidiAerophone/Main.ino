#include <Arduino.h>
#include <MIDI.h>
#include "Aerophone.h"
#include "Music.h"
#include "Hardware.h"

#define NUM_HOLE_SOLENOIDS 5
#define HOLE_SOLENOID_PIN_OFFSET 2
#define VALVE_SOLENOID_PIN 12

// Create an instance of the MidiInterface class with name MIDI
MIDI_CREATE_DEFAULT_INSTANCE()
    AerophoneKnowledge *g_aerophone;

    void HandleNoteOn(byte channel, byte pitch, byte velocity) { 
        g_aerophone->turnOnMidi((int)pitch);
    }

void HandleNoteOff(byte channel, byte pitch, byte velocity) {
    if((int)velocity != 0) {
        g_aerophone->turnOffMidi();
    }
}

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

    AerophoneInteractor interactor(holeControllers, valveController);
    AerophoneKnowledge aerophone(interactor, scheme);
    g_aerophone = &aerophone;

    MIDI.begin(MIDI_CHANNEL_OMNI);
    MIDI.setHandleNoteOn(HandleNoteOn);
    MIDI.setHandleNoteOff(HandleNoteOff);
}

void loop() {
    MIDI.read();
}

