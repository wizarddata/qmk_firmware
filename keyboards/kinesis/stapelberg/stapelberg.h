#ifndef KINESIS_STAPELBERG_H
#define KINESIS_STAPELBERG_H

#include "quantum.h"

#define ___ KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments as on the physical keyboard
// The second converts the arguments into the 2-D scanned array

#define LAYOUT(                                   \
    kC0, kD0, kE0, kC1, kD1, kE1, kC2, kD2, kE2,  \
    k00, k10, k20, k30, k40, k50,                 \
    k01, k11, k21, k31, k41, k51,                 \
    k02, k12, k22, k32, k42, k52,                 \
    k03, k13, k23, k33, k43, k53,                 \
         k14, k24, k34, k54,                      \
                             k56, k55,            \
                                  k35,            \
                        k36, k46, k25,            \
                                                  \
    kC3, kD3, kE3, kC4, kD4, kE4, kC5, kE5, kD5,  \
                   k60, k70, k80, k90, kA0, kB0,  \
                   k61, k71, k81, k91, kA1, kB1,  \
                   k62, k72, k82, k92, kA2, kB2,  \
                   k63, k73, k83, k93, kA3, kB3,  \
                        k64, k84, k94, kA4,       \
              k96, k85,                           \
              k86,                                \
              k66, k75, k65                       \
) {                                              \
        { KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_NO,    KC_NO,    KC_NO      }, \
        { KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_NO,    KC_NO      }, \
        { KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_NO      }, \
        { KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36   }, \
        { KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_NO,    KC_NO,    KC_##k46   }, \
        { KC_##k50, KC_##k51, KC_##k52, KC_##k53, KC_##k54, KC_##k55, KC_##k56   }, \
        { KC_##k60, KC_##k61, KC_##k62, KC_##k63, KC_##k64, KC_##k65, KC_##k66   }, \
        { KC_##k70, KC_##k71, KC_##k72, KC_##k73, KC_NO,    KC_##k75, KC_NO      }, \
        { KC_##k80, KC_##k81, KC_##k82, KC_##k83, KC_##k84, KC_##k85, KC_##k86   }, \
        { KC_##k90, KC_##k91, KC_##k92, KC_##k93, KC_##k94, KC_NO,    KC_##k96   }, \
        { KC_##kA0, KC_##kA1, KC_##kA2, KC_##kA3, KC_##kA4, KC_NO,    KC_NO      }, \
        { KC_##kB0, KC_##kB1, KC_##kB2, KC_##kB3, KC_NO,    KC_NO,    KC_NO      }, \
        { KC_##kC0, KC_##kC1, KC_##kC2, KC_##kC3, KC_##kC4, KC_##kC5, KC_NO      }, \
        { KC_##kD0, KC_##kD1, KC_##kD2, KC_##kD3, KC_##kD4, KC_##kD5, KC_NO      }, \
        { KC_##kE0, KC_##kE1, KC_##kE2, KC_##kE3, KC_##kE4, KC_##kE5, KC_NO      } \
}

/*  ---------------- LEFT HAND -----------------   ---------------- RIGHT HAND ---------------- */
#define LAYOUT_pretty(                                                                           \
    kC0, kD0, kE0, kC1, kD1, kE1, kC2, kD2, kE2,   kC3, kD3, kE3, kC4, kD4, kE4, kC5, kE5, kD5,  \
    k00, k10, k20, k30, k40, k50,                            k60, k70, k80, k90, kA0, kB0,       \
    k01, k11, k21, k31, k41, k51,                            k61, k71, k81, k91, kA1, kB1,       \
    k02, k12, k22, k32, k42, k52,                            k62, k72, k82, k92, kA2, kB2,       \
    k03, k13, k23, k33, k43, k53,                            k63, k73, k83, k93, kA3, kB3,       \
         k14, k24, k34, k54,                                      k64, k84, k94, kA4,            \
                             k56, k55,                  k96, k85,                                \
                                  k35,                  k86,                                     \
                        k36, k46, k25,                  k66, k75, k65                            \
) {                                              \
        { KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_NO,    KC_NO,    KC_NO      }, \
        { KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_NO,    KC_NO      }, \
        { KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_NO      }, \
        { KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36   }, \
        { KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_NO,    KC_NO,    KC_##k46   }, \
        { KC_##k50, KC_##k51, KC_##k52, KC_##k53, KC_##k54, KC_##k55, KC_##k56   }, \
        { KC_##k60, KC_##k61, KC_##k62, KC_##k63, KC_##k64, KC_##k65, KC_##k66   }, \
        { KC_##k70, KC_##k71, KC_##k72, KC_##k73, KC_NO,    KC_##k75, KC_NO      }, \
        { KC_##k80, KC_##k81, KC_##k82, KC_##k83, KC_##k84, KC_##k85, KC_##k86   }, \
        { KC_##k90, KC_##k91, KC_##k92, KC_##k93, KC_##k94, KC_NO,    KC_##k96   }, \
        { KC_##kA0, KC_##kA1, KC_##kA2, KC_##kA3, KC_##kA4, KC_NO,    KC_NO      }, \
        { KC_##kB0, KC_##kB1, KC_##kB2, KC_##kB3, KC_NO,    KC_NO,    KC_NO      }, \
        { KC_##kC0, KC_##kC1, KC_##kC2, KC_##kC3, KC_##kC4, KC_##kC5, KC_NO      }, \
        { KC_##kD0, KC_##kD1, KC_##kD2, KC_##kD3, KC_##kD4, KC_##kD5, KC_NO      }, \
        { KC_##kE0, KC_##kE1, KC_##kE2, KC_##kE3, KC_##kE4, KC_##kE5, KC_NO      } \

/*
This is the Stapelberg matrix as published at
https://github.com/stapelberg/kinesis-firmware/blob/master/kb_kinesis/config.kspec
Along with the pins for each row and column
             PB0 PB1 PB2 PB3 PB4 PB5 PB6
             kx0 kx1 kx2 kx3 kx4 kx5 kx6
PD0 k0x Row: EQL TAB CAP LSH X2  --  --
PD1 k1x Row: 1   Q   A   Z   BQ  --  --
PD2 k2x Row: 2   W   S   X   INS END --
PD3 k3x Row: 3   E   D   C   LFT HOM BAK
PD4 k4x Row: 4   R   F   V   --  --  DEL
PD5 k5x Row: 5   T   G   B   RT  LAL LCT
PD6 k6x Row: 6   Y   H   N   UP  SPC PGD
PD7 k7x Row: 7   U   J   M   --  RET --
PC0 k8x Row: 8   I   K   COM DWN RCT PGU
PC1 k9x Row: 9   O   L   PER LBR --  RAL
PC2 kAx Row: 0   P   SEM SLA RBR --  --
PC3 kBx Row: MIN BSL APO RSH X1  --  --
PC4 kCx Row: ESC F3  F6  F9  F12 PAU --
PC5 kDx Row: F1  F4  F7  F10 PRT PRG --
PC6 kEx Row: F2  F5  F8  F11 SLK KEY --
*/



#endif
