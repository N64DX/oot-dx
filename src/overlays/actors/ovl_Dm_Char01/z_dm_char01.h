#ifndef Z_DM_CHAR01_H
#define Z_DM_CHAR01_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_mtoride/object_mtoride.h"

struct DmChar01;

typedef struct DmChar01 {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x1AC */ u8 unk_34C;
    /* 0x1CD */ bool hasCollision;
} DmChar01; // size = 0x1B0

#endif
