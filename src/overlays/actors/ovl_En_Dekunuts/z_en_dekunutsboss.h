#ifndef Z_EN_DEKUNUTSBOSS_H
#define Z_EN_DEKUNUTSBOSS_H

#include "ultra64.h"
#include "actor.h"

struct EnDekunutsBoss;

typedef void (*EnDekunutsBossActionFunc)(struct EnDekunutsBoss*, struct PlayState*);

typedef struct EnDekunutsBoss {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ EnDekunutsBossActionFunc actionFunc;
    /* 0x0196 */ s16 animFlagAndTimer;
    /* 0x019C */ Vec3s jointTable[25];
    /* 0x0232 */ Vec3s morphTable[25];
    /* 0x02C8 */ ColliderCylinder collider;
} EnDekunutsBoss; // size = 0x0361

#endif
