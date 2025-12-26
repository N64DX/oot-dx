#ifndef LIBC64_QRAND_H
#define LIBC64_QRAND_H

#include "ultra64.h"
#include "libc64/math64.h"

u32 Rand_Next(void);
void Rand_Seed(u32 seed);
f32 Rand_ZeroOne(void);
void Rand_Seed_Variable(u32* rndNum, u32 seed);
u32 Rand_Next_Variable(u32* rndNum);
f32 Rand_ZeroOne_Variable(u32* rndNum);

#if !PLATFORM_N64
f32 Rand_Centered(void);
f32 Rand_Centered_Variable(u32* rndNum);
#endif

#define RANDOM_RANGE(min, max) ((Rand_ZeroOne() * (((f32)max)-((f32)min))) + (f32)min)
#define IRANDOM_RANGE(min, max) Math_FRoundF((Rand_ZeroOne() * (((f32)max)-((f32)min))) + (f32)min)

#endif
