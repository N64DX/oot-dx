#ifndef Z_EN_JSO_H
#define Z_EN_JSO_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_jso/object_jso.h"

struct EnJso;

#define EN_JSO_GET_HINT_TYPE(thisx) ((thisx)->params)
#define EN_JSO_AFTERIMAGE_COUNT     20

typedef void (*EnJsoActionFunc)(struct EnJso*, struct PlayState*);

typedef enum EnJsoBodyPart {
    /*  0 */ EN_JSO_BODYPART_LEFT_SWORD,
    /*  1 */ EN_JSO_BODYPART_RIGHT_SWORD,
    /*  2 */ EN_JSO_BODYPART_ROBE_TOP,
    /*  3 */ EN_JSO_BODYPART_ROBE_BACK,
    /*  4 */ EN_JSO_BODYPART_ROBE_LEFT,
    /*  5 */ EN_JSO_BODYPART_ROBE_RIGHT,
    /*  6 */ EN_JSO_BODYPART_ROBE_FRONT,
    /*  7 */ EN_JSO_BODYPART_HEAD,
    /*  8 */ EN_JSO_BODYPART_RIGHT_THIGH,
    /*  9 */ EN_JSO_BODYPART_RIGHT_FOOT,
    /* 10 */ EN_JSO_BODYPART_LEFT_THIGH,
    /* 11 */ EN_JSO_BODYPART_LEFT_FOOT,
    /* 12 */ EN_JSO_BODYPART_MAX
} EnJsoBodyPart;

typedef struct EnJso {
    /* 0x000 */ Actor actor;
    /* 0x150 */ SkelAnime skelAnime;
    /* 0x194 */ Vec3s jointTable[GARO_LIMB_MAX];
    /* 0x20C */ Vec3s morphTable[GARO_LIMB_MAX];
    /* 0x284 */ EnJsoActionFunc actionFunc;
    /* 0x288 */ ColliderCylinder bodyCollider;
    /* 0x2D4 */ ColliderQuad rightSwordCollider;
    /* 0x354 */ ColliderQuad leftSwordCollider;
    /* 0x3D4 */ Vec3f afterimagePos[EN_JSO_AFTERIMAGE_COUNT];
    /* 0x4C4 */ Vec3f knockbackVelocity; // Adds a little push backwards when the Garo is bounced off the player's shield, damaged, or stunned
    /* 0x4D0 */ Vec3f bodyPartsPos[EN_JSO_BODYPART_MAX];
    /* 0x560 */ Vec3s afterimageRot[EN_JSO_AFTERIMAGE_COUNT];
    /* 0x5D8 */ Vec3s afterimageJointTable[EN_JSO_AFTERIMAGE_COUNT][GARO_LIMB_MAX];
    /* 0xF38 */ Vec3s robeRightRot;
    /* 0xF3E */ Vec3s targetRobeRightRot;
    /* 0xF44 */ Vec3s rightArmRot;
    /* 0xF4A */ Vec3s targetRightArmRot;
    /* 0xF50 */ f32 drawDmgEffScale;
    /* 0xF54 */ f32 drawDmgEffFrozenSteamScale;
    /* 0xF58 */ f32 animEndFrame;
    /* 0xF5C */ f32 scale;
    /* 0xF60 */ s32 rightSwordBlureIndex;
    /* 0xF64 */ s32 leftSwordBlureIndex;
    /* 0xF68 */ s16 circlingAngle;
    /* 0xF6A */ s16 circlingAngularVelocity;
    /* 0xF6C */ s16 bodyPartIndex;
    /* 0xF6E */ u8 isPlayerLockedOn;
    /* 0xF6F */ u8 isAttacking;
    /* 0xF70 */ u8 slashHitSomething;
    /* 0xF71 */ u8 disableBlure;
    /* 0xF72 */ u8 swordState;
    /* 0xF73 */ s8 action;
    /* 0xF74 */ s8 attackMovementTimer;
    /* 0xF75 */ s8 attackTimer; // while bouncing, the Garo cannot start an attack until this reaches 0
    /* 0xF76 */ s8 timer;
    /* 0xF77 */ s8 drawDmgEffAlpha;
    /* 0xF78 */ s8 drawDmgEffType;
    /* 0xF79 */ s8 afterimageIndex;
    /* 0xF7A */ s8 afterimageCount;
} EnJso; // size = 0xF7C

#endif
