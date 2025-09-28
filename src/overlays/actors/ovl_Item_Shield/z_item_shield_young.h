#ifndef Z_ITEM_SHIELD_YOUNG_H
#define Z_ITEM_SHIELD_YOUNG_H

#include "ultra64.h"
#include "actor.h"

struct ItemShieldYoung;

typedef void (*ItemShieldYoungActionFunc)(struct ItemShieldYoung*, struct PlayState*);

typedef struct ItemShieldYoung {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ColliderCylinder collider;
    /* 0x0198 */ s16 unk_198;
    /* 0x019A */ s16 timer;
    /* 0x019C */ s16 unk_19C;
    /* 0x019E */ u8 unk_19E[8];
    /* 0x01A8 */ Vec3f unk_1A8[8];
    /* 0x0208 */ ItemShieldYoungActionFunc actionFunc;
} ItemShieldYoung; // size = 0x020C

#endif
