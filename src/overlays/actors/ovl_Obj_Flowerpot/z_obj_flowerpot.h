#ifndef Z_OBJ_FLOWERPOT_H
#define Z_OBJ_FLOWERPOT_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_flowerpot/object_flowerpot.h"

struct ObjFlowerpot;

typedef void (*ObjFlowerpotActionFunc)(struct ObjFlowerpot*, struct PlayState*);

typedef struct ObjFlowerpot {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderJntSph collider;
    /* 0x164 */ ColliderJntSphElement colliderElements[2];
    /* 0x1E4 */ ObjFlowerpotActionFunc actionFunc;
    /* 0x1E8 */ s16 unk_1E8;
    /* 0x1EA */ u8 unk_1EA;
    /* 0x1EB */ s8 unk_1EB;
    /* 0x1EC */ s8 unk_1EC;
    /* 0x1ED */ bool droppedRupeeOnPickup;
} ObjFlowerpot; // size = 0x1F0

#endif
