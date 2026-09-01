#ifndef Z_BG_HAKA_CURTAIN_H
#define Z_BG_HAKA_CURTAIN_H

#include "ultra64.h"
#include "actor.h"

struct BgHakaCurtain;

typedef void (*BgHakaCurtainActionFunc)(struct BgHakaCurtain*, struct PlayState*);

typedef struct BgHakaCurtain {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ BgHakaCurtainActionFunc actionFunc;
} BgHakaCurtain; // size = 0x164

#endif
