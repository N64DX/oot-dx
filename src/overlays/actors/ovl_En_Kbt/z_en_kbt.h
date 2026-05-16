#ifndef Z_EN_KBT_H
#define Z_EN_KBT_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_kbt/object_kbt.h"

struct EnKbt;

typedef void (*EnKbtActionFunc)(struct EnKbt*, struct PlayState*);

typedef struct EnKbtDataStruct2 {
    f32 shape_unk_10;
    f32 scale;
    s8 actor_unk_1F;
    f32 interactRange;
} EnKbtDataStruct2; // size = 0x10

typedef struct EnKbt {
    /* 0x000 */ Actor actor;
    /* 0x14C */ ColliderCylinder collider;
    /* 0x198 */ SkelAnime skelAnime;
    /* 0x1DC */ NpcInteractInfo interactInfo;
    /* 0x200 */ Vec3s jointTable[OBJECT_KBT_LIMB_MAX];
    /* 0x2D2 */ Vec3s morphTable[OBJECT_KBT_LIMB_MAX];
    /* 0x2D8 */ u16 trackingMode;
    /* 0x2DC */ f32 interactRange;
    /* 0x2E0 */ u8 eyeTexIndex;
    /* 0x2E1 */ u8 mouthTexIndex;
    /* 0x2E2 */ u8 blinkTimer;
    /* 0x2E3 */ u8 switchFlag;
} EnKbt; // size = 0x2E4

#endif
