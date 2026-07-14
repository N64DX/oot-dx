#ifndef Z_BG_DBLUE_WATERFALL_H
#define Z_BG_DBLUE_WATERFALL_H

#include "ultra64.h"
#include "actor.h"

#define BGDBLUEWATERFALL_GET_SWITCH_FLAG(thisx)  ((thisx)->params & 0x7F)
#define BGDBLUEWATERFALL_GET_100(thisx)         (((thisx)->params >> 8) & 1)
#define BGDBLUEWATERFALL_GET_7000(thisx)        (((thisx)->params >> 12) & 7)
#define BGDBLUEWATERFALL_GET_8000(thisx)        (((thisx)->params >> 15) & 1)

struct BgDblueWaterfall;

typedef void (*BgDblueWaterfallActionFunc)(struct BgDblueWaterfall*, struct PlayState*);

typedef struct BgDblueWaterfall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder collider;
    /* 0x194 */ BgDblueWaterfallActionFunc actionFunc;
    /* 0x198 */ f32 unk_198;
    /* 0x19C */ s16 unk_19C;
    /* 0x19E */ u8 unk_19E;
    /* 0x19F */ u8 unk_19F;
    /* 0x1A0 */ u8 unk_1A0;
    /* 0x1A7 */ s8 unk_1A7;
    /* 0x1A8 */ f32 unk_1A8;
} BgDblueWaterfall; // size = 0x1AC

#endif
