#ifndef Z_BG_FLAMETHROWER_H
#define Z_BG_FLAMETHROWER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_hidan_objects/object_hidan_objects.h"

#define FLAME_COUNT       5
#define FLAME_DURATION    100

struct BgFlameThrower;

typedef void (*BgFlameThrowerActionFunc)(struct BgFlameThrower*, struct PlayState*);

typedef struct BgFlameThrower {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgFlameThrowerActionFunc actionFunc;
    /* 0x0170 */ ColliderCylinder collider;
    /* 0x01BC */ ColliderJntSph colliderSph;
    /* 0x01DC */ ColliderJntSphElement colliderItems[FLAME_COUNT];
    /* 0x031C */ s8 timer;
    /* 0x031D */ s8 unk_170;
} BgFlameThrower; // size = 0x0320

#endif
