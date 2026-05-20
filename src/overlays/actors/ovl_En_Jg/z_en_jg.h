#ifndef Z_EN_JG_H
#define Z_EN_JG_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_jg/object_jg.h"

#define EN_JG_IS_IN_GORON_SHRINE(thisx) ((thisx)->params & 0x1)
#define EN_JG_GET_PATH_INDEX(thisx) (((thisx)->params & 0xFC00) >> 10)

#define EN_JG_PATH_INDEX_NONE 0x3F

struct EnJg;

typedef void (*EnJgActionFunc)(struct EnJg*, struct PlayState*);

typedef struct EnJgDataStruct2 {
    f32 shape_unk_10;
    f32 scale;
    s8 actor_unk_1F;
    f32 interactRange;
} EnJgDataStruct2; // size = 0x10

typedef struct EnJg {
    /* 0x000 */ Actor actor;
    /* 0x14C */ ColliderCylinder collider;
    /* 0x198 */ SkelAnime skelAnime;
    /* 0x1DC */ NpcInteractInfo interactInfo;
    /* 0x200 */ Vec3s jointTable[GORON_ELDER_LIMB_MAX];
    /* 0x2D2 */ Vec3s morphTable[GORON_ELDER_LIMB_MAX];
    /* 0x3A4 */ Vec3f breathPos;
    /* 0x3AC */ Vec3f breathVelocity;
    /* 0x3B4 */ Vec3f breathAccel;
    /* 0x3BA */ u16 trackingMode;
    /* 0x3CC */ f32 interactRange;
} EnJg; // size = 0x3C0

#endif
