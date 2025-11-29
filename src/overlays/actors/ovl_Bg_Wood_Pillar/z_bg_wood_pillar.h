#ifndef Z_BG_WOOD_PILLAR_H
#define Z_BG_WOOD_PILLAR_H

#include "ultra64.h"
#include "actor.h"

struct BgWoodPillarobj;

typedef void (*BgWoodPillarobjActionFunc)(struct BgWoodPillarobj*, struct PlayState*);

typedef struct BgWoodPillarobj {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgWoodPillarobjActionFunc actionFunc;
    /* 0x0168 */ ColliderCylinder colliderCylinder;
} BgWoodPillarobj; // size = 0x01B4

#endif
