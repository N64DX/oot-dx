#ifndef Z_BG_HAKA_TOMB_H
#define Z_BG_HAKA_TOMB_H

#include "ultra64.h"
#include "actor.h"

struct BgHakaTomb;

typedef void (*BgHakaTombActionFunc)(struct BgHakaTomb*, struct PlayState*);

typedef struct BgHakaTomb {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ BgHakaTombActionFunc actionFunc;
} BgHakaTomb; // size = 0x160

#endif
