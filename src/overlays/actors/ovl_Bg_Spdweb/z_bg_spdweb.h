#ifndef Z_BG_SPDWEB_H
#define Z_BG_SPDWEB_H

#include "ultra64.h"
#include "actor.h"

struct BgSpdweb;

typedef void (*BgSpdwebActionFunc)(struct BgSpdweb*, struct PlayState*);

#define BGSPDWEB_GET_SWITCH_FLAG(thisx) (((thisx)->params >> 8) & 0x3F)

typedef struct BgSpdweb {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ BgSpdwebActionFunc actionFunc;
    /* 0x160 */ u8 switchFlag;
    /* 0x161 */ u8 unk_161;
    /* 0x162 */ s16 unk_162;
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ ColliderTris collider;
    /* 0x188 */ ColliderTrisElement colliderElements[4];
    /* 0x2F8 */ Vec3s* unk_2F8;
} BgSpdweb; // size = 0x2FC

#endif
