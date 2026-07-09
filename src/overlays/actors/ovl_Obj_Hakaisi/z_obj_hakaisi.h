#ifndef Z_OBJ_HAKAISI_H
#define Z_OBJ_HAKAISI_H

#include "ultra64.h"
#include "actor.h"

struct ObjHakaisi;

typedef void (*ObjHakaisiActionFunc)(struct ObjHakaisi*, struct PlayState*);

#define OBJHAKAISI_GET_FF(thisx)           ((thisx)->params & 0xFF)
#define OBJHAKAISI_GET_SWITCH_FLAG(thisx) (((thisx)->params & 0xFF00) >> 8)

typedef struct ObjHakaisi {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ObjHakaisiActionFunc actionFunc;
    /* 0x160 */ Vec3f unk_160[3];
    /* 0x184 */ Vec3f unk_184;
    /* 0x190 */ u8 switchFlag;
    /* 0x191 */ u8 unk_194;
    /* 0x192 */ u8 unk_198;
    /* 0x193 */ u8 unk_19A;
    /* 0x194 */ u8 unk_19E;
    /* 0x195 */ s16 unk_19C;
    /* 0x198 */ ColliderCylinder collider;
} ObjHakaisi; // size = 0x1E4

#endif
