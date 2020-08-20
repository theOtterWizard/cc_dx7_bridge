#include "dx7_sysex.h"

void make_sysex_message(uint8_t param, uint8_t value, uint8_t *buf, bool voice_param) { 
  buf[0] = 0x43; // Yamaha identifier
  buf[1] = 0x10; // Sub-status 1, channel number 1
  buf[2] = ((voice_param ? 0 : 2) << 2) | (param >= 128 ? 1 : 0);
  buf[3] = 0x7f & param;
  buf[4] = 0x7f & value;
}
