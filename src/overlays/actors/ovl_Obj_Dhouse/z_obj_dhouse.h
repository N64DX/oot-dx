#ifndef Z_OBJ_DHOUSE_H
#define Z_OBJ_DHOUSE_H

#include "ultra64.h"
#include "actor.h"

struct ObjDhouse;

typedef void (*ObjDhouseActionFunc)(struct ObjDhouse*, struct PlayState*);

typedef struct ObjDhouse {
    /* 0x0000 */ DynaPolyActor dyna;
} ObjDhouse; // size = 0x1374

#endif
