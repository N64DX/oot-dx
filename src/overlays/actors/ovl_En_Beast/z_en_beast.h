#ifndef Z_EN_BEAST_H
#define Z_EN_BEAST_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_beast/object_beast.h"

struct EnBeast;

typedef void (*EnBeastActionFunc)(struct EnBeast*, struct PlayState*);

typedef struct EnBeast {
    Actor actor;
    EnBeastActionFunc actionFunc;
    SkelAnime skelAnime;
    Vec3s jointTable[GBEASTSKEL_NUM_LIMBS];
    Vec3s morphTable[GBEASTSKEL_NUM_LIMBS];
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[3];
    Vec3f armR, chest, head, legL, legR, handR, handL;
    f32 timer;
    s16 headRotx, headRoty;
    u8 deathTimer, hurtboxCooldown, inrange, type, switchFlag;
    bool alarmstate, cantSee, canDodge, miniboss;
} EnBeast;

typedef enum BeastType {
    /* 0 */ BEAST_TYPE_IDLE,
    /* 1 */ BEAST_TYPE_AMBUSH,
    /* 2 */ BEAST_TYPE_IDLE2
} BeastType;

#endif
