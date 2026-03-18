#ifndef Z_BG_YDAN_MARUTA2_H
#define Z_BG_YDAN_MARUTA2_H

#include "ultra64.h"
#include "actor.h"

struct BgYdanMaruta2;

typedef void (*BgYdanMaruta2ActionFunc)(struct BgYdanMaruta2*, struct PlayState* play);

typedef struct BgYdanMaruta2 {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ BgYdanMaruta2ActionFunc actionFunc;
    /* 0x0168 */ s32 timer;
} BgYdanMaruta2; // size = 0x0244

#endif
