#ifndef Z_EN_SPIDER_H
#define Z_EN_SPIDER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_spider/object_spider.h"

struct EnSpider;

typedef void (*EnSpiderActionFunc)(struct EnSpider*, struct PlayState*);

typedef struct EnSpider {
    Actor actor;
    EnSpiderActionFunc actionFunc;
    SkelAnime skelAnime;
    Vec3s jointTable[ARMATURE_NUM_LIMBS];
    Vec3s morphTable[ARMATURE_NUM_LIMBS];
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[2];
    Vec3f armR, chest, head, legL, legR;
    u8 timer, deathTimer, hurtboxCooldown, type, switchFlag, alarmstate, cantSee, canDodge, miniboss;
} EnSpider;

#endif
