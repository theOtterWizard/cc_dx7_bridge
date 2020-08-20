#include "dx7_params.h"
#include "dx7_sysex.h"
#include <SoftwareSerial.h>
#include <MIDI.h>

SoftwareSerial softSerial(14, -1); // Rx = 4 (D2 on NodeMCU), we don't need Tx.

MIDI_CREATE_INSTANCE(HardwareSerial, Serial, midi_main); // main midi. Receives midi from DAW and sends midi + SysEx to DX7
MIDI_CREATE_INSTANCE(SoftwareSerial, softSerial, midi_cc); // the cc midi we use to make our SysEx

uint8_t SysExMessage[5] = {0};

void setup() {
  midi_main.begin(MIDI_CHANNEL_OMNI);
  Serial.swap();
  midi_cc.begin(MIDI_CHANNEL_OMNI);
  midi_cc.setHandleControlChange(midi_cc_callback);
}

void loop() {
  midi_cc.read();
  midi_main.read();
}

void midi_cc_callback(byte ch, byte cc_num, byte value) {
  switch(cc_num) {
    case 96:
      make_sysex_message(OP_OPERATOR_OUTPUT_LEVEL + OP_OFFSET(1), value, SysExMessage, true);
      midi_main.sendSysEx(5, SysExMessage);//, true);
      break;
    default:
      break;
  }
}
