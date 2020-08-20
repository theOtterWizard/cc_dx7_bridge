#pragma once

#include "dx7_params.h"
#include <stdint.h>

void make_sysex_message(uint8_t param, uint8_t value, uint8_t *buf, bool voice_param=true);
