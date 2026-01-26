#ifndef Z_EN_GANON_SWORD_H
#define Z_EN_GANON_SWORD_H

#include "ultra64.h"
#include "actor.h"

struct EnGanonSword;

typedef void (*EnGanonSwordActionFunc)(struct EnGanonSword*, struct PlayState*);

typedef struct EnGanonSword {
    Actor actor;
    EnGanonSwordActionFunc actionFunc;
    ColliderJntSph collider;
    ColliderJntSphElement swordSphs[6];
    bool swordAT;
    bool setY;
    u8 sfxTimer;
} EnGanonSword;

#endif
