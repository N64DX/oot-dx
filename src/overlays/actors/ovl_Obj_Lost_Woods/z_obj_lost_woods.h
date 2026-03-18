#ifndef Z_OBJ_LOST_WOODS_H
#define Z_OBJ_LOST_WOODS_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_lost_woods/object_lost_woods.h"

struct ObjLostWoods;

typedef void (*ObjLostWoodsActionFunc)(struct ObjLostWoods*, struct PlayState*);

typedef struct ObjLostWoods {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x016C */ ColliderCylinder collider;
                 u8 cut;
} ObjLostWoods;

#endif
