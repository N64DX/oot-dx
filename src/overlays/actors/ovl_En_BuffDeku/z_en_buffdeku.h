#ifndef Z_EN_BUFFDEKU
#define Z_EN_BUFFDEKU

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_buffdeku/object_buffdeku.h"

struct EnBuffDeku;

typedef void (*EnBuffDekuActionFunc)(struct EnBuffDeku*, struct PlayState*);

typedef struct EnBuffDeku {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime skelAnime;
    /* 0x0188 */ Vec3s jointTable[BUFFDEKUSKEL_NUM_LIMBS];
    /* 0x018E */ Vec3s morphTable[BUFFDEKUSKEL_NUM_LIMBS];
    /* 0x0194 */ EnBuffDekuActionFunc actionFunc;
    /* 0x0198 */ Vec3f bodyPartsPos[8];
    /* 0x01F8 */ ColliderCylinder colliderBody;
    /* 0x0244 */ ColliderJntSph colliderSpheres;
    /* 0x0264 */ ColliderJntSphElement colliderSpheresElements[4];
    /* 0x02A4 */ u8 playerHit, onFire, panicTest;
    /* 0x02A7 */ s8 subCamId;
    /* 0x02A8 */ u8 timer, switchFlag, dekuStickCooldownTimer, attackCooldownTimer;
} EnBuffDeku; // size = 0x02AC

#endif
