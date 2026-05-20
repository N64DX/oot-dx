#ifndef Z_OBJ_SYOKUDAI2_H
#define Z_OBJ_SYOKUDAI2_H

#include "ultra64.h"
#include "actor.h"
#include "light.h"

struct ObjSyokudai2;

typedef struct ObjSyokudai2 {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ColliderCylinder standCollider;
    /* 0x0198 */ ColliderCylinder flameCollider;
    /* 0x01E4 */ u8 switchFlag;
    /* 0x01E5 */ u8 torchCount;
    /* 0x01E6 */ u8 flameTexScroll;
    /* 0x01E8 */ LightNode* lightNode;
    /* 0x01EC */ LightInfo lightInfo;
    /* 0x01FC */ bool isLit;
} ObjSyokudai2; // size = 0x0200

#endif
