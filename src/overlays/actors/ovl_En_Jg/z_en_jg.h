#ifndef Z_EN_JG_H
#define Z_EN_JG_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_jg/object_jg.h"

//#include "overlays/actors/ovl_En_S_Goro/z_en_s_goro.h"
//#include "overlays/actors/ovl_Obj_Ice_Poly/z_obj_ice_poly.h"

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
    /* 0x1DC */ EnJgActionFunc actionFunc;
                NpcInteractInfo interactInfo;
    /* 0x1EC */ Vec3s headRot; // set but unused
    /* 0x1F2 */ Vec3s torsoRot; // set but unused
    /* 0x1F8 */ Vec3s jointTable[GORON_ELDER_LIMB_MAX];
    /* 0x2CA */ Vec3s morphTable[GORON_ELDER_LIMB_MAX];
    /* 0x39E */ s16 animIndex;
    /* 0x3A4 */ Vec3f breathPos;
    /* 0x3B0 */ Vec3f breathVelocity;
    /* 0x3BC */ Vec3f breathAccel;
    /* 0x3CC */ u16 flags;
    /* 0x3CE */ u16 textId;
                u16 trackingMode;
                f32 interactRange;
} EnJg; // size = 0x3D4

#endif
