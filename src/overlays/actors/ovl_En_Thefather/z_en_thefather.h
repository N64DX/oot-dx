#ifndef Z_EN_THEFATHER_H
#define Z_EN_THEFATHER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_thefather/object_thefather.h"

struct EnThefather;

typedef void (*EnThefatherActionFunc)(struct EnThefather*, struct PlayState*);

typedef struct EnThefather {
    Actor actor;
    EnThefatherActionFunc actionFunc;
    SkelAnime skelAnime;
    Vec3s jointTable[GTHEFATHER_NUM_LIMBS];
    Vec3s morphTable[GTHEFATHER_NUM_LIMBS];
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[16];
    Vec3f armR, armL, chest, head, legL, legR, handR, handL, shinR, shinL, footR, footL, shoulderR, shoulderL, waist, abdomen;
    u16 deathTimer;
    u8 timer, csTimer, hurtboxCooldown, poise, screamcountdown, subCamId, cutscene, alarmstate, cantSee;
} EnThefather;

#endif
