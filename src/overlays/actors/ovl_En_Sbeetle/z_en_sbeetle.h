#ifndef Z_EN_SBEETLE_H
#define Z_EN_SBEETLE_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_sbeetle/object_sbeetle.h"

#define ENSBEETLE_PINCER_THROW_FRAME        12.0f
#define ENSBEETLE_PINCER_OUT_TIME           (FRAMES(18))
#define ENSBEETLE_PINCER_RETURN_TIME        (FRAMES(20))
#define ENSBEETLE_PINCER_CURVE              55.0f
#define ENSBEETLE_PINCER_ARC_HEIGHT         25.0f
#define ENSBEETLE_PINCER_SPIN_SPEED         0x2800
#define ENSBEETLE_PINCER_FAST_RETURN_TIME   (FRAMES(6))
#define ENSBEETLE_FORGET_DISTANCE           460.0f
#define ENSBEETLE_FORGET_HEIGHT             140.0f
#define ENSBEETLE_FORGET_TIME               (FRAMES(60))
#define ENSBEETLE_HEARING_DISTANCE          200.0f
#define ENSBEETLE_FRONT_DISTANCE            460.0f
#define ENSBEETLE_FRONT_ANGLE               0x2000
#define ENSBEETLE_SIDE_DISTANCE             300.0f
#define ENSBEETLE_SIDE_ANGLE                0x5000
#define ENSBEETLE_DETECT_HEIGHT             80.0f

typedef enum EnSbeetleDamageEffect {
    /*  0 */ ENSBEETLE_DMGEFF_NONE,
    /*  1 */ ENSBEETLE_DMGEFF_STUN,
    /*  6 */ ENSBEETLE_DMGEFF_ICE_MAGIC = 6,
    /* 13 */ ENSBEETLE_DMGEFF_LIGHT_MAGIC = 13,
    /* 14 */ ENSBEETLE_DMGEFF_FIRE
} EnSbeetleDamageEffect;

typedef enum EnSbeetleAnimation {
    /* 0 */ SCISSORSBEETLE_ANIMATION_IDLE1,
    /* 1 */ SCISSORSBEETLE_ANIMATION_IDLE2,
    /* 2 */ SCISSORSBEETLE_ANIMATION_IDLE3,
    /* 3 */ SCISSORSBEETLE_ANIMATION_WALK,
    /* 4 */ SCISSORSBEETLE_ANIMATION_HOP,
    /* 5 */ SCISSORSBEETLE_ANIMATION_ATTACK,
    /* 6 */ SCISSORSBEETLE_ANIMATION_SWING,
    /* 7 */ SCISSORSBEETLE_ANIMATION_HURT,
    /* 8 */ SCISSORSBEETLE_ANIMATION_DIE
} EnSbeetleAnimation;

typedef enum EnSbeetlePincerState {
    /* 0 */ ENSBEETLE_PINCER_ATTACHED,
    /* 1 */ ENSBEETLE_PINCER_WINDUP,
    /* 2 */ ENSBEETLE_PINCER_OUTBOUND,
    /* 3 */ ENSBEETLE_PINCER_RETURN,
    /* 4 */ ENSBEETLE_PINCER_FAST_RETURN
} EnSbeetlePincerState;

struct EnSbeetle;

typedef void (*EnSbeetleActionFunc)(struct EnSbeetle*, struct PlayState*);

typedef struct EnSbeetle {
    Actor actor;
    Vec3s jointTable[GSCISSORSBEETLESKEL_NUM_LIMBS];
    Vec3s morphTable[GSCISSORSBEETLESKEL_NUM_LIMBS];
    SkelAnime skelAnime;
    ColliderCylinder collider, pincerLCollider, pincerRCollider;
    EnSbeetleActionFunc actionFunc, idleAction;
    Vec3f pincerLWorldPos, pincerRWorldPos, pincerLHomePos, pincerRHomePos, pincerLReturnStart, pincerRReturnStart, pincerTargetPos;
    f32 playerDistAtSetup;
    s16 nextIdleTimer, afterAnimTimer, attackTimer, hurtboxCooldown, damageTimer, deathFreeze, randomWalkTimer, playerLostTimer, spawnIceTimer, fireTimer, pincerState, pincerFlightTimer, pincerLSpin, pincerRSpin;
    u8 frozen, audioPlayed;
} EnSbeetle;

#endif