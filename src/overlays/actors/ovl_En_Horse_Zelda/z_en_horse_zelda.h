#ifndef Z_EN_HORSE_ZELDA_H
#define Z_EN_HORSE_ZELDA_H

#include "ultra64.h"
#include "actor.h"
#include "skin.h"

struct EnHorseZelda;

typedef void (*EnHorseZeldaActionFunc)(struct EnHorseZelda*, struct PlayState*);

typedef struct EnHorseZelda {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ s32 action;
    /* 0x0150 */ s32 animationIndex;
    /* 0x0154 */ Skin skin;
    /* 0x01EC */ s32 fieldPosIndex;
    /* 0x01F4 */ f32 floorYForwards;
    /* 0x01FC */ ColliderCylinder colliderCylinder;
    /* 0x0248 */ ColliderJntSph colliderJntSph;
    /* 0x0268 */ ColliderJntSphElement colliderJntSphElements[1];
} EnHorseZelda; // size = 0x02A8

#endif
