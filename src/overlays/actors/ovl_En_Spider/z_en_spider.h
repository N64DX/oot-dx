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
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[ARMATURE_NUM_LIMBS];
    Vec3s morphTable[ARMATURE_NUM_LIMBS];
    u8 hurtboxCooldown;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[2];
    Vec3f ArmR, Chest, Head, LegL, LegR, HandR, HandL;
    bool alarmstate;
    bool cantSee;
    bool canDodge;
    f32 deathTimer;
} EnSpider;

#endif
