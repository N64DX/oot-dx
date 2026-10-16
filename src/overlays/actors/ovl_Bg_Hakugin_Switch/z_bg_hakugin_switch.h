#ifndef Z_BG_HAKUGIN_SWITCH_H
#define Z_BG_HAKUGIN_SWITCH_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_goronswitch/object_goronswitch.h"

struct BgHakuginSwitch;

typedef void (*BgHakuginSwitchActionFunc) (struct BgHakuginSwitch*, struct PlayState*);
typedef void (*BgHakuginSwitchUnkFunc)    (struct BgHakuginSwitch*, struct PlayState*);

#define BGHAKUGINSWITCH_GET_7(thisx)            ((thisx)->params & 7)
#define BGHAKUGINSWITCH_GET_10(thisx)          (((thisx)->params >> 4) & 1)
#define BGHAKUGINSWITCH_GET_SWITCH_FLAG(thisx) (((thisx)->params >> 8) & 0x3F)

#define BGHAKUGINSWITCH_GET_7_1 1

typedef struct BgHakuginSwitch {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderCylinder collider;
    /* 0x1A8 */ Gfx* unk_1A8;
    /* 0x1AC */ BgHakuginSwitchActionFunc actionFunc;
    /* 0x1B0 */ s16 unk_1B0;
    /* 0x1B2 */ s8 unk_1B2;
    /* 0x1B4 */ BgHakuginSwitchUnkFunc unk_1B4;
    /* 0x1B8 */ u8 csId;
    /* 0x1BE */ s8 unk_1BE;
    /* 0x1BF */ s8 unk_1BF;
    /* 0x1C0 */ s8 unk_1C0;
    /* 0x1C4 */ f32 unk_1C4;
    /* 0x1C8 */ f32 unk_1C8;
} BgHakuginSwitch; // size = 0x1CC

#endif
