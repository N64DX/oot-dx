#ifndef Z_EN_MKK_H
#define Z_EN_MKK_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_mkk/object_mkk.h"

#define ENMKK_GET_2(thisx) ((thisx)->params & 2)
#define ENMKK_GET_4(thisx) ((thisx)->params & 4)
#define ENMKK_GET_FF00(thisx) (((thisx)->params >> 8) & 0xFF)

struct EnMkk;

typedef void (*EnMkkActionFunc)(struct EnMkk*, struct PlayState*);

typedef struct EnMkk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ EnMkkActionFunc actionFunc;
    /* 0x148 */ u8 primColorSelect;
    /* 0x149 */ u8 unk_149;
    /* 0x14A */ u8 alpha;
    /* 0x14B */ u8 unk_14B;
    /* 0x14C */ u8 unk_14C;
    /* 0x14E */ s16 unk_14E;
    /* 0x150 */ s16 unk_150;
    /* 0x152 */ s16 unk_152;
    /* 0x154 */ Vec3f unk_154;
    /* 0x160 */ Vec3f unk_160;
    /* 0x16C */ Vec3f unk_16C;
    /* 0x178 */ f32 unk_178;
    /* 0x17C */ ColliderJntSph collider;
    /* 0x19C */ ColliderJntSphElement colliderItem[1];
} EnMkk; // size = 0x1F4

#endif
