#ifndef Z_BG_IKANA_RAY_H
#define Z_BG_IKANA_RAY_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_ikana_obj/object_ikana_obj.h"

struct BgIkanaRay;

typedef void (*BgIkanaRayActionFunc)(struct BgIkanaRay*, struct PlayState*);

#define BGIKANARAY_GET_SWITCH_FLAG(thisx) ((thisx)->params & 0x3F)

typedef struct BgIkanaRay {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder collision;
    /* 0x194 */ BgIkanaRayActionFunc actionFunc;
} BgIkanaRay; // size = 0x198

#endif
