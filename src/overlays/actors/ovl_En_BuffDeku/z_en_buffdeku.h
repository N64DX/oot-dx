#ifndef Z_EN_BUFFDEKU
#define Z_EN_BUFFDEKU

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_buffdeku/object_buffdeku.h"

struct EnBuffDeku;

typedef void (*EnBuffDekuActionFunc)(struct EnBuffDeku*, struct PlayState*);

typedef struct EnBuffDeku {
    Actor actor;
    SkelAnime skelAnime;
    Vec3s jointTable[BUFFDEKUSKEL_NUM_LIMBS];
    Vec3s morphTable[BUFFDEKUSKEL_NUM_LIMBS];
    EnBuffDekuActionFunc actionFunc;
	u8 timer;
    ColliderCylinder colliderBody;
    bool playerHit;
    bool onFire;
    bool panicTest;
    u8 switchFlag;
    Vec3f bodyPartsPos[8];
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[4];
} EnBuffDeku;

#endif
