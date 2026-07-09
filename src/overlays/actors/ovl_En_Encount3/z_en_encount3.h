#ifndef Z_EN_ENCOUNT3_H
#define Z_EN_ENCOUNT3_H

#include "ultra64.h"
#include "actor.h"

struct EnEncount3;

typedef void (*EnEncount3ActionFunc)(struct EnEncount3*, struct PlayState*);

#define ENCOUNT3_GET_SPAWN_INDEX(thisx) (((thisx)->params >> 0xC) & 0xF)
#define ENCOUNT3_GET_PARAM_F80(thisx)   (((thisx)->params >> 7)   & 0x1F)
#define ENCOUNT3_GET_SWITCH_FLAG(thisx)  ((thisx)->params         & 0x7F)
#define ENCOUNT3_GET_ROTZ(thisx)         ((thisx)->world.rot.z)
#define ENCOUNT3_SWITCH_FLAG_NONE                                   0x3F

typedef struct EnEncount3 {
    /* 0x000 */ Actor actor;
    /* 0x150 */ Actor* child;
    /* 0x154 */ EnEncount3ActionFunc actionFunc;
    /* 0x158 */ f32 unk160;
    /* 0x15C */ f32 unk164;
    /* 0x160 */ f32 unk168;
    /* 0x164 */ f32 unk16C;
    /* 0x168 */ f32 unk170;
    /* 0x16C */ f32 unk174;
    /* 0x170 */ f32 unk178;
    /* 0x174 */ u8 unk148;
    /* 0x175 */ u8 unk14E;
    /* 0x176 */ s8 switchFlag;
    /* 0x177 */ u8 timer;
} EnEncount3; // size = 0x178

#endif
