#ifndef Z_OBJ_LOST_WOODS_H
#define Z_OBJ_LOST_WOODS_H

#include "ultra64.h"
#include "actor.h"

struct ObjLostWoods;

typedef void (*ObjLostWoodsActionFunc)(struct ObjLostWoods*, struct PlayState*);

typedef struct ObjLostWoods {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x016C */ ColliderCylinder collider;
    /* 0x01B8 */ bool cut;
} ObjLostWoods; // size = 0x1BC

#endif
