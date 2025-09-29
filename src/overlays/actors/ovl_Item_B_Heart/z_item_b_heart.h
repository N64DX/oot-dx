#ifndef Z_ITEM_B_HEART_H
#define Z_ITEM_B_HEART_H

#include "ultra64.h"
#include "actor.h"

struct ItemBHeart;

typedef struct ItemBHeart {
    /* 0x0000 */ Actor actor;
    /* 0x0158 */ f32 unk_158;
    /* 0x0164 */ s16 unk_164;
} ItemBHeart; // size = 0x016C

#endif
