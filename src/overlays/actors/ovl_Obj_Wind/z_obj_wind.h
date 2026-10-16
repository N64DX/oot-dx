#ifndef Z_OBJ_WIND_H
#define Z_OBJ_WIND_H

#include "ultra64.h"
#include "actor.h"

#define OBJ_WIND_GET_TYPE(thisx)        (((thisx)->params >> 8) & 0x1F)
#define OBJ_WIND_GET_SWITCH_FLAG(thisx)  ((thisx)->params & 0x3F)

struct ObjWind;

typedef struct ObjWindStruct {
    /* 0x0 */ s16 unk_0;
    /* 0x2 */ s16 unk_2;
    /* 0x4 */ s16 unk_4;
    /* 0x6 */ s16 unk_6;
    /* 0x8 */ s16 unk_8;
} ObjWindStruct; // size = 0xA

typedef struct ObjWind {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u8 isUnderWater;
} ObjWind; // size = 0x148

#endif
