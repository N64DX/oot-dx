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
    Vec3f firePos;
    Vec3f fleePos;
    Vec3f targetPos;
    ColliderCylinder collider;
    u16 fleeTimer;
    u8 drowned;
    u8 spawnIceTimer;
    u8 fireTimer;
    s16 targetYaw;
    s16 blinkTimer;
    s16 eyeTexture;
    s16 mouthTexture;
    GoombActionFunc actionFunc;
} EnGoomba;

#endif
