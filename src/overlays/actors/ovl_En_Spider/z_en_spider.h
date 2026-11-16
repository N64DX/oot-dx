#ifndef Z_EN_SPIDER_H
#define Z_EN_SPIDER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_spider/object_spider.h"

struct EnSpider;

#define SPIDER_AGGRO_RANGE_NORMAL       700.0f
#define SPIDER_AGGRO_RANGE_MINI         250.0f
#define SPIDER_AGGRO_RANGE(this)        (this->type2 == SPIDER_MINI ? SPIDER_AGGRO_RANGE_MINI : SPIDER_AGGRO_RANGE_NORMAL)
#define SPIDER_SPEED(this, main, mini)  (this->type2 == SPIDER_MINI ? mini : main)

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
    u8 timer, deathTimer, hurtTimer, type1, type2, switchFlag, alarmstate, cantSee, canDodge;
} EnSpider;

typedef enum SpiderType1 {
    /* 0 */ SPIDER_ON_FLOOR,
    /* 1 */ SPIDER_HANGING,
    /* 2 */ SPIDER_ON_FLOOR_ANGRY
} SpiderType1;

typedef enum SpiderType2 {
    /* 0 */ SPIDER_NORMAL,
    /* 1 */ SPIDER_MINI,
    /* 2 */ SPIDER_MINIBOSS
} SpiderType2;

#endif
