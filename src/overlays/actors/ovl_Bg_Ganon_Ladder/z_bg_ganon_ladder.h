#ifndef Z_BG_GANONLADDER_H
#define Z_BG_GANONLADDER_H 1

#include "ultra64.h"
#include "actor.h"

struct BgGanonLadder;

typedef void (*BgGanonLadderActionFunc)(struct BgGanonLadder*, struct PlayState*);

typedef struct BgGanonLadder {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgGanonLadderActionFunc actionFunc;
} BgGanonLadder; // size = 0x0168

#endif
