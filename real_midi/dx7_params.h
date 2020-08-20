/*
 * VOICE PARAMETERS
 */

/* Operator offsets */
// Add the operator you want to address to the parameter you want to address to get the proper value.
#define OP_OFFSET(op) ((-op+6)*21)


/* Operator parameters */
#define OP_EG_RATE_1 0 // Envelope Generator rate. Value range: 0-99
#define OP_EG_RATE_2 1
#define OP_EG_RATE_3 2
#define OP_EG_RATE_4 3

#define OP_EG_LEVEL_1 4 // Envelope Generator level. Value range: 0-99
#define OP_EG_LEVEL_2 5
#define OP_EG_LEVEL_3 6
#define OP_EG_LEVEL_4 7

#define OP_KBD_LEV_SCL_BRK_PT 8 // Keyboard Level Scaling Break Point. Value range: 0-99. C3=$27
#define OP_KBD_LEV_SCL_LFT_DEPTH 9 // Keyboard Level Scaling Left Depth. Value range: 0-99.
#define OP_KBD_LEV_SCL_RHT_DEPTH 10 // Keyboard Level Scaling Right Depth. Value range: 0-99.
#define OP_KBD_LEV_SCL_LFT_CURVE 11 // Keyboard Level Scaling Left Curve. Value range: 0-3. {0: -LIN, 1: -EXP, 2: +EXP, 3: +LIN}
#define OP_KBD_LEV_SCL_RHT_CURVE 12 // Keyboard Level Scaling Right Curve. Value range: 0-3. {0: -LIN, 1: -EXP, 2: +EXP, 3: +LIN}

#define OP_KBD_RATE_SCALING 13 // Keyboard Rate Scaling. Value range: 0-7

#define OP_AMP_MOD_SENSITIVITY 14 // Amplitude Modulation Sensitivity. Value range: 0-3

#define OP_KEY_VEL_SENSITIVITY 15 // Key Velocity Sensitivity. Value range: 0-7

#define OP_OPERATOR_OUTPUT_LEVEL 16 // Operator Output Level. Value range: 0-99

#define OP_OSC_MODE 17 // Oscillator Mode (ratio/fixed). Value range: 0-1. {0: ratio, 1: fixed}

#define OP_OSC_FREQ_COARSE 18 // Oscillator Frequency Coarse. Value range: 0-31
#define OP_OSC_FREQ_FINE 19 // Oscillator Frequency Fine. Value range: 0-31

#define OP_OSC_DETUNE 20 // Oscillator Detune. Value range: 0-14. 0 = -7 detune


/* General parameters */

#define PITCH_EG_RATE_1 126 // Pitch Envelope Rate 1. Value range: 0-99
#define PITCH_EG_RATE_2 127
#define PITCH_EG_RATE_3 128
#define PITCH_EG_RATE_4 129

#define PITCH_EG_LEVEL_1 130 // Pitch Envelope Level 1. Value range: 0-99
#define PITCH_EG_LEVEL_2 131
#define PITCH_EG_LEVEL_3 132
#define PITCH_EG_LEVEL_4 133

#define ALGORITHM_NUMBER 134 // Algorithm selector. Value range: 0-31

#define FEEDBACK 135 // Feedback amount? or type? Value range: 0-7

#define OSC_SYNC 136 // Oscillator sync. Value range: 0-1 (on/off?)

#define LFO_SPEED 137 // LFO Speed. Value range: 0-99
#define LFO_DELAY 138
#define LFO_PITCH_MOD_DEPTH 139
#define LFO_AMP_MOD_DEPTH 140
#define LFO_SYNC 141 // Value range: 0-1
#define LFO_WAVEFORM 142 // Value range: 0-5. {0: Triangle, 1: Saw Down, 2: Saw up, 3: Square, 4: Sine, 5: Sample & Hold}

#define PITCH_MOD_SENSITIVITY 143 // Value range: 0-7

#define TRANSPOSE 144 // Value range: 0-48. 12 = C2

#define VOICE_NAME_CHAR_1 145 // ASCII
#define VOICE_NAME_CHAR_2 146
#define VOICE_NAME_CHAR_3 147
#define VOICE_NAME_CHAR_4 148
#define VOICE_NAME_CHAR_5 149
#define VOICE_NAME_CHAR_6 150
#define VOICE_NAME_CHAR_7 151
#define VOICE_NAME_CHAR_8 152
#define VOICE_NAME_CHAR_9 153
#define VOICE_NAME_CHAR_10 154

#define OPERATOR_ACTIVE 155 // value = 0 | (OP1 << 5) | (OP2 << 4) | (OP3 << 3) | (OP4 << 2) | (OP5 << 1) | (OP6 << 0);


/*
 * FUNCTION PARAMETERS
 */

 #define MONO_POLY_MODE 64 // range: 0-1. 0=POLY

// TODO: finish this part.
