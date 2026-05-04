#ifndef Z_OBJ_FLOATER_H
#define Z_OBJ_FLOATER_H

#include "ultra64.h"
#include "actor.h"

#define FLOATER_TYPE(params) (params & 0xFF)

#include "assets/objects/object_crashbox/object_crashbox.h"

struct ObjFloater;

typedef enum ObjFloaterType {
    /* 0x0 */ OBJ_FLOATER,
    /* 0x1 */ OBJ_FLOATER_BIG
} ObjFloaterType;

typedef void (*ObjFloaterActionFunc)(struct ObjFloater*, struct PlayState*);

typedef struct ObjFloater {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ ObjFloaterActionFunc actionFunc;
    /* 0x0170 */ ColliderCylinder collider;
    /* 0x01BC */ s8 timer;
} ObjFloater; // size = 0x01C0

#endif
