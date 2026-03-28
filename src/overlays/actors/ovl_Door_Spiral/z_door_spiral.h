#ifndef Z_DOOR_SPIRAL_H
#define Z_DOOR_SPIRAL_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_numa_obj/object_numa_obj.h"

struct DoorSpiral;

typedef void (*DoorSpiralActionFunc)(struct DoorSpiral*, struct PlayState*);

#define DOORSPIRAL_GET_DIRECTION(thisx) (((thisx)->params >> 7) & 0x1)

typedef struct DoorSpiral {
    /* 0x000 */ Actor actor;
    /* 0x146 */ u8 direction; // represents a staircase up or down
    /* 0x147 */ u8 index;
    /* 0x149 */ s8 objectSlot;
    /* 0x14C */ DoorSpiralActionFunc actionFunc;
} DoorSpiral; // size = 0x150

#endif
