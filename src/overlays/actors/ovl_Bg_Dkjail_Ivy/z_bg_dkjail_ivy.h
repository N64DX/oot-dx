#ifndef Z_BG_DKJAIL_IVY_H
#define Z_BG_DKJAIL_IVY_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_dkjail_obj/object_dkjail_obj.h"

#define BG_DKJAIL_GET_SWITCH_FLAG(thisx) ((thisx)->params & 0x7F)

struct BgDkjailIvy;

typedef void (*BgDkjailIvyActionFunc)(struct BgDkjailIvy*, struct PlayState*);

typedef struct BgDkjailIvy {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderCylinder collider;
    /* 0x1A8 */ BgDkjailIvyActionFunc actionFunc;
    /* 0x1AC */ s8 fadeOutTimer;
    /* 0x1AD */ u8 alpha;
} BgDkjailIvy; // size = 0x1B0

#endif
