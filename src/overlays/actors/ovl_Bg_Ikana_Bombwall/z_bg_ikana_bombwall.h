#ifndef Z_BG_IKANA_BOMBWALL_H
#define Z_BG_IKANA_BOMBWALL_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_ikana_obj/object_ikana_obj.h"

struct BgIkanaBombwall;

typedef void (*BgIkanaBombwallActionFunc) (struct BgIkanaBombwall*, struct PlayState*);

#define BGIKANABOMBWALL_GET_SWITCH_FLAG(thisx)   ((thisx)->params & 0x3F)
#define BGIKANABOMBWALL_GET_100(thisx)          (((thisx)->params >> 8) & 1)

typedef struct BgIkanaBombwall {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderCylinder collider;
    /* 0x1A8 */ BgIkanaBombwallActionFunc actionFunc;
    /* 0x1AC */ s8 unk_1AC;
    /* 0x1AD */ u8 csId;
} BgIkanaBombwall; // size = 0x1B0

#endif
