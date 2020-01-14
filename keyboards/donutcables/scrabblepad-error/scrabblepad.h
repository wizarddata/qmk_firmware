/* Copyright 2018 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

// Written in the format K(row)(column) where numbering is in hexadecimal
/*#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E,  \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E,  \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E,  \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E,  \
    k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B, k5C, k5D, k5E,  \
    k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B, k6C, k6D, k6E,  \
    k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k7A, k7B, k7C, k7D, k7E,  \
    k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A, k8B, k8C, k8D, k8E,  \
    k90, k91, k92, k93, k94, k95, k96, k97, k98, k99, k9A, k9B, k9C, k9D, k9E,  \
    kA0, kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kAA, kAB, kAC, kAD, kAE,  \
    kB0, kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9, kBA, kBB, kBC, kBD, kBE,  \
    kC0, kC1, kC2, kC3, kC4, kC5, kC6, kC7, kC8, kC9, kCA, kCB, kCC, kCD, kCE,  \
    kD0, kD1, kD2, kD3, kD4, kD5, kD6, kD7, kD8, kD9, kDA, kDB, kDC, kDD, kDE,  \
    kE0, kE1, kE2, kE3, kE4, kE5, kE6, kE7, kE8, kE9, kEA, kEB, kEC, kED, kEE  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E, }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E, }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E, }, \
    { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B, k5C, k5D, k5E, }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B, k6C, k6D, k6E, }, \
    { k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k7A, k7B, k7C, k7D, k7E, }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A, k8B, k8C, k8D, k8E, }, \
    { k90, k91, k92, k93, k94, k95, k96, k97, k98, k99, k9A, k9B, k9C, k9D, k9E, }, \
    { kA0, kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kAA, kAB, kAC, kAD, kAE, }, \
    { kB0, kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9, kBA, kBB, kBC, kBD, kBE, }, \
    { kC0, kC1, kC2, kC3, kC4, kC5, kC6, kC7, kC8, kC9, kCA, kCB, kCC, kCD, kCE, }, \
    { kD0, kD1, kD2, kD3, kD4, kD5, kD6, kD7, kD8, kD9, kDA, kDB, kDC, kDD, kDE, }, \
    { kE0, kE1, kE2, kE3, kE4, kE5, kE6, kE7, kE8, kE9, kEA, kEB, kEC, kED, kEE } \
}
*/

#define KC_LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E,  \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E,  \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E,  \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E,  \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E,  \
    k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5A, k5B, k5C, k5D, k5E,  \
    k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B, k6C, k6D, k6E,  \
    k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k7A, k7B, k7C, k7D, k7E,  \
    k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k8A, k8B, k8C, k8D, k8E,  \
    k90, k91, k92, k93, k94, k95, k96, k97, k98, k99, k9A, k9B, k9C, k9D, k9E,  \
    kA0, kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kAA, kAB, kAC, kAD, kAE,  \
    kB0, kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9, kBA, kBB, kBC, kBD, kBE,  \
    kC0, kC1, kC2, kC3, kC4, kC5, kC6, kC7, kC8, kC9, kCA, kCB, kCC, kCD, kCE,  \
    kD0, kD1, kD2, kD3, kD4, kD5, kD6, kD7, kD8, kD9, kDA, kDB, kDC, kDD, kDE,  \
    kE0, kE1, kE2, kE3, kE4, kE5, kE6, kE7, kE8, kE9, kEA, kEB, kEC, kED, kEE  \
) \
{ \
    { KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, KC_##k0A, KC_##k0B, KC_##k0C, KC_##k0D, KC_##k0E, }, \
    { KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k1A, KC_##k1B, KC_##k1C, KC_##k1D, KC_##k1E, }, \
    { KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, KC_##k2A, KC_##k2B, KC_##k2C, KC_##k2D, KC_##k2E, }, \
    { KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, KC_##k3A, KC_##k3B, KC_##k3C, KC_##k3D, KC_##k3E, }, \
    { KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_##k44, KC_##k45, KC_##k46, KC_##k47, KC_##k48, KC_##k49, KC_##k4A, KC_##k4B, KC_##k4C, KC_##k4D, KC_##k4E, }, \
    { KC_##k50, KC_##k51, KC_##k52, KC_##k53, KC_##k54, KC_##k55, KC_##k56, KC_##k57, KC_##k58, KC_##k59, KC_##k5A, KC_##k5B, KC_##k5C, KC_##k5D, KC_##k5E, }, \
    { KC_##k60, KC_##k61, KC_##k62, KC_##k63, KC_##k64, KC_##k65, KC_##k66, KC_##k67, KC_##k68, KC_##k69, KC_##k6A, KC_##k6B, KC_##k6C, KC_##k6D, KC_##k6E, }, \
    { KC_##k70, KC_##k71, KC_##k72, KC_##k73, KC_##k74, KC_##k75, KC_##k76, KC_##k77, KC_##k78, KC_##k79, KC_##k7A, KC_##k7B, KC_##k7C, KC_##k7D, KC_##k7E, }, \
    { KC_##k80, KC_##k81, KC_##k82, KC_##k83, KC_##k84, KC_##k85, KC_##k86, KC_##k87, KC_##k88, KC_##k89, KC_##k8A, KC_##k8B, KC_##k8C, KC_##k8D, KC_##k8E, }, \
    { KC_##k90, KC_##k91, KC_##k92, KC_##k93, KC_##k94, KC_##k95, KC_##k96, KC_##k97, KC_##k98, KC_##k99, KC_##k9A, KC_##k9B, KC_##k9C, KC_##k9D, KC_##k9E, }, \
    { KC_##kA0, KC_##kA1, KC_##kA2, KC_##kA3, KC_##kA4, KC_##kA5, KC_##kA6, KC_##kA7, KC_##kA8, KC_##kA9, KC_##kAA, KC_##kAB, KC_##kAC, KC_##kAD, KC_##kAE, }, \
    { KC_##kB0, KC_##kB1, KC_##kB2, KC_##kB3, KC_##kB4, KC_##kB5, KC_##kB6, KC_##kB7, KC_##kB8, KC_##kB9, KC_##kBA, KC_##kBB, KC_##kBC, KC_##kBD, KC_##kBE, }, \
    { KC_##kC0, KC_##kC1, KC_##kC2, KC_##kC3, KC_##kC4, KC_##kC5, KC_##kC6, KC_##kC7, KC_##kC8, KC_##kC9, KC_##kCA, KC_##kCB, KC_##kCC, KC_##kCD, KC_##kCE, }, \
    { KC_##kD0, KC_##kD1, KC_##kD2, KC_##kD3, KC_##kD4, KC_##kD5, KC_##kD6, KC_##kD7, KC_##kD8, KC_##kD9, KC_##kDA, KC_##kDB, KC_##kDC, KC_##kDD, KC_##kDE, }, \
    { KC_##kE0, KC_##kE1, KC_##kE2, KC_##kE3, KC_##kE4, KC_##kE5, KC_##kE6, KC_##kE7, KC_##kE8, KC_##kE9, KC_##kEA, KC_##kEB, KC_##kEC, KC_##kED, KC_##kEE } \
}

