#ifndef Z_OBJ_KIBAKO3_H
#define Z_OBJ_KIBAKO3_H

#include "ultra64.h"
#include "actor.h"

struct ObjKibako3;

typedef void (*ObjKibako3ActionFunc)(struct ObjKibako3*, struct PlayState*);

typedef struct ObjKibako3 {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ ColliderCylinder collider;
    /* 0x01B0 */ ObjKibako3ActionFunc actionFunc;
} ObjKibako3; // size = 0x01B4

#endif
