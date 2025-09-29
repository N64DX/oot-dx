#ifndef Z_BG_HAKA_MEGANE_H
#define Z_BG_HAKA_MEGANE_H

#include "ultra64.h"
#include "actor.h"

struct BgHakaMegane;

typedef void (*BgHakaMeganeActionFunc)(struct BgHakaMegane*, struct PlayState*);

typedef struct BgHakaMegane {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgHakaMeganeActionFunc actionFunc;
    /* 0x0169 */ s8 requiredObjectSlot;
} BgHakaMegane; // size = 0x016C

#endif
