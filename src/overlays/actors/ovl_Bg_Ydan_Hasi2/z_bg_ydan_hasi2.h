#ifndef Z_BG_YDAN_HASI2_H
#define Z_BG_YDAN_HASI2_H

#include "ultra64.h"
#include "actor.h"

struct BgYdanHasi2;

typedef void (*BgYdanHasi2ActionFunc)(struct BgYdanHasi2*, struct PlayState*);

typedef struct BgYdanHasi2 {
    DynaPolyActor dyna;
    BgYdanHasi2ActionFunc actionFunc;
    u8 switchFlag;
    s8 timer;
    s16 rotShake;
    s16 yShake;
    s16 xzShake;
    f32 fallAmount;
    Vec3s homeRot;
} BgYdanHasi2; // size = 0x016C

#endif
