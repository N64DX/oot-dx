#ifndef Z_BG_F40_BLOCK_H
#define Z_BG_F40_BLOCK_H

#include "ultra64.h"
#include "actor.h"
#include "path.h"

struct BgF40Block;

#define BGF40BLOCK_GET_PATH_INDEX(thisx)    (((thisx)->params & 0x1FC)  >> 2)
#define BGF40BLOCK_GET_SWITCH_FLAG(thisx)   (((thisx)->params & 0x7E00) >> 9)
#define BGF40BLOCK_PATH_INDEX_NONE          0x3F

typedef void (*BgF40BlockActionFunc)(struct BgF40Block*, struct PlayState*);

typedef struct BgF40Block {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ Path* path;
    /* 0x160 */ s32 unk_160;
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s32 unk_168;
    /* 0x16C */ BgF40BlockActionFunc actionFunc;
} BgF40Block; // size = 0x170

#endif
