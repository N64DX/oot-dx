#ifndef Z_BG_IKANA_BLOCK_H
#define Z_BG_IKANA_BLOCK_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_extra.h"

struct BgIkanaBlock;

typedef void (*BgIkanaBlockActionFunc) (struct BgIkanaBlock*, struct PlayState*);

typedef struct BgIkanaBlock {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ BgIkanaBlockActionFunc actionFunc;
    /* 0x160 */ f32* unk_164;
    /* 0x164 */ f32 unk_168;
    /* 0x168 */ f32 unk_16C;
    /* 0x16C */ f32 unk_170;
    /* 0x170 */ Vec3s unk_174;
    /* 0x176 */ u8 unk_17A;
    /* 0x177 */ s8 unk_17B;
    /* 0x178 */ u8 unk_17C;
    /* 0x179 */ s8 unk_17D;
    /* 0x17A */ s8 unk_17E;
    /* 0x17B */ s8 unk_17F;
    /* 0x17C */ u8 csId;
} BgIkanaBlock; // size = 0x180

#endif
