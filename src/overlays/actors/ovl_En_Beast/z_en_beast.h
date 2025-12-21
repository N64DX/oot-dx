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
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GBEASTSKEL_NUM_LIMBS];
    Vec3s morphTable[GBEASTSKEL_NUM_LIMBS];
    u8 hurtboxCooldown;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[3];
    s16 headRotx;
    s16 headRoty;
    Vec3f WeaponTip, Weapon, ArmR, Chest, Head, LegL, LegR, HandR, HandL;
    u8 alarmstate;
    u8 cantSee;
    u8 canDodge;
    u8 inrange;
    f32 deathTimer;
    u8 type;
    u8 switchFlag;
    bool miniboss;
    bool aggroed;
} EnBeast;

typedef enum BeastType {
    /* 0 */ BEAST_TYPE_IDLE,
    /* 1 */ BEAST_TYPE_AMBUSH,
    /* 2 */ BEAST_TYPE_IDLE2
} BeastType;

#endif
