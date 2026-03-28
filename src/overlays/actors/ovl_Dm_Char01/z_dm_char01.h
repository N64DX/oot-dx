#ifndef Z_DM_CHAR01_H
#define Z_DM_CHAR01_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_mtoride/object_mtoride.h"

struct DmChar01;

typedef void (*DmChar01ActionFunc)(struct DmChar01*, struct PlayState*);

typedef struct DmChar01 {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ UNK_TYPE1 unk15C[0x44];
    /* 0x1A0 */ DmChar01ActionFunc actionFunc;
    /* 0x1A4 */ UNK_TYPE1 unk1A4[0x8];
    /* 0x1AC */ s16 unk_1AC[205];
    /* 0x346 */ s16 unk_346;
    /* 0x348 */ f32 unk_348;
    /* 0x34C */ u8 unk_34C;
    /* 0x34D */ u8 unk_34D;
} DmChar01; // size = 0x350

#endif
