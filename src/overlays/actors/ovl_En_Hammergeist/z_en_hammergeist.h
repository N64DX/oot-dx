#ifndef Z_EN_HAMMERGEIST_H
#define Z_EN_HAMMERGEIST_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_hammergeist/object_hammergeist.h"

struct EnHammergeist;

typedef void (*EnHammergeistActionFunc)(struct EnHammergeist*, struct PlayState*);

typedef struct EnHammergeist {
    Actor actor;
    Vec3s firePos[10]; // Because of the fire effect spawn function, it's necessary that firePos is exactly at this offset (0x014C)
    Vec3s jointTable[GHAMMERGEISTSKEL_NUM_LIMBS];
    Vec3s morphTable[GHAMMERGEISTSKEL_NUM_LIMBS];
    Vec3s headRot, upperBodyRot;
    SkelAnime skelAnime;
    ColliderCylinder collider, hammerLeftCollider, hammerRightCollider;
    ColliderJntSph explosionCollider;
    ColliderJntSphElement explosionColliderItems[1];
    s16 faceIndex, fireHammerIndex, iceHammerIndex, hurtboxCooldown, explosionTimer, infuseTimer, slamTimer, heavySlamTimer, heavySlamCooldown, genericAnimationTimer, fireTimer, alpha;
    u8 explosionRadiusIncrease, leftHammerInfused, rightHammerInfused, playerHit, noHitAgain, switchFlag;
    EnHammergeistActionFunc actionFunc;
} EnHammergeist;

#endif
