#ifndef Z_BG_BREAKWALL2_H
#define Z_BG_BREAKWALL2_H

#include "ultra64.h"
#include "actor.h"

struct BgBreakwall2;

typedef void (*BgBreakwall2ActionFunc)(struct BgBreakwall2*, struct PlayState*);

typedef struct BgBreakwall2 {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ Gfx* bombableWallDList;
    /* 0x0168 */ s8 colType;
    /* 0x016C */ ColliderQuad collider;
    /* 0x01EC */ BgBreakwall2ActionFunc actionFunc;
    /* 0x01F0 */ Gfx* tunnelDList;
} BgBreakwall2; // size = 0x01F0

typedef enum BombableWall2Type {
    /* 0 */ BWALL2_TUNNEL1,
    /* 1 */ BWALL2_TUNNEL2,
    /* 2 */ BWALL2_TUNNEL3,
    /* 3 */ BWALL2_FLOOR,     // Used in the Black Beast boss room
    /* 4 */ BWALL2_LAVA_COVER // Spawned by Black Beast to cover the floor of the boss room after the fight so the lava does not hurt the player anymore
} BombableWall2Type;

#endif
