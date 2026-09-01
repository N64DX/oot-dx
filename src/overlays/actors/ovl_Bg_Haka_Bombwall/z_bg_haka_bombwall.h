#ifndef Z_BG_HAKA_BOMBWALL_H
#define Z_BG_HAKA_BOMBWALL_H

#include "ultra64.h"
#include "actor.h"

#define BGHAKABOMBWALL_GET_SWITCH_FLAG(thisx) ((thisx)->params & 0x7F)

struct BgHakaBombwall;

typedef void (*BgHakaBombwallActionFunc)(struct BgHakaBombwall*, struct PlayState*);

typedef struct BgHakaBombwall {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderCylinder collider;
    /* 0x1A8 */ BgHakaBombwallActionFunc actionFunc;
    /* 0x1AC */ s8 csTimer;
} BgHakaBombwall; // size = 0x1B0

#endif
