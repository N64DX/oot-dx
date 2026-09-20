#ifndef Z_EN_GOOMBA_H
#define Z_EN_GOOMBA_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_goomba/object_goomba.h"

#define ENGOOMBA_FLEE_RADIUS     200.0f
#define ENGOOMBA_NOTICE_RADIUS   300.0f
#define ENGOOMBA_ATTACK_RADIUS   100.0f
#define ENGOOMBA_HOME_RADIUS     450.0f

struct EnGoomba;

typedef void (*GoombActionFunc)(struct EnGoomba*, struct PlayState*);

typedef struct EnGoomba {
    Actor actor;
    SkelAnime skelAnime;
    Vec3s jointTable[GGOOMBASKEL_NUM_LIMBS];
    Vec3s morphTable[GGOOMBASKEL_NUM_LIMBS];
    GoombActionFunc actionFunc;
    ColliderCylinder collider;
    u8 drowned, spawnIceTimer, fireTimer;
    u16 fleeTimer;
    s16 targetYaw, blinkTimer, eyeTexture, mouthTexture;
    Vec3f firePos, fleePos, targetPos;
} EnGoomba;

#endif
