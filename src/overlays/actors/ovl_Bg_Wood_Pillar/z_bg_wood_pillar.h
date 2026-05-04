#ifndef Z_BG_WOOD_PILLAR_H
#define Z_BG_WOOD_PILLAR_H

#include "ultra64.h"
#include "actor.h"

struct BgWoodPillar;

typedef void (*BgWoodPillarActionFunc)(struct BgWoodPillar*, struct PlayState*);

typedef struct BgWoodPillar {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgWoodPillarActionFunc actionFunc;
    /* 0x0168 */ ColliderCylinder colliderCylinder;
} BgWoodPillar; // size = 0x01B4

#endif
