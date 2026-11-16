#ifndef Z_EFF_EN_ICE_BLOCK_H
#define Z_EFF_EN_ICE_BLOCK_H

#include "ultra64.h"
#include "actor.h"

typedef struct EffectEnIceBlockInitParams {
    /* 0x00 */ Actor* actor;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ Vec3f velocity;
    /* 0x1C */ Vec3f accel;
    /* 0x28 */ s16 scale;
} EffectEnIceBlockInitParams; // size = 0x2C

#endif
