#ifndef Z_BG_WEATHER_H
#define Z_BG_WEATHER_H

#include "ultra64.h"
#include "actor.h"

typedef struct BgWeather {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ f32 rainFogIntensity;
    /* 0x0150 */ f32 nightMistIntensity;
    /* 0x0154 */ Vec3f fogLastEye;
    /* 0x0160 */ f32 fogWakeX;
    /* 0x0164 */ f32 fogWakeZ;
    /* 0x0168 */ u8 fogWakeInitialized;
} BgWeather; // size = 0x016C

#endif
