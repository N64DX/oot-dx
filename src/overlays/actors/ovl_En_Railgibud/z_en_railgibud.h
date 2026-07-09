#ifndef Z_EN_RAILGIBUD_H
#define Z_EN_RAILGIBUD_H

#include "ultra64.h"
#include "actor.h"

struct EnRailgibud;

typedef void (*EnRailgibudActionFunc)(struct EnRailgibud*, struct PlayState*);

#define ENRAILGIBUD_GET_PATH_INDEX(thisx) (((thisx)->params & 0xFF00) >> 8)

typedef enum EnRailgibudLimb {
    /*  0 */ GIBDO_LIMB_NONE,
    /*  1 */ GIBDO_LIMB_ROOT,
    /*  2 */ GIBDO_LIMB_LEFT_LEG_ROOT,
    /*  3 */ GIBDO_LIMB_LEFT_THIGH,
    /*  4 */ GIBDO_LIMB_LEFT_SHIN,
    /*  5 */ GIBDO_LIMB_LEFT_FOOT_ROOT,
    /*  6 */ GIBDO_LIMB_LEFT_FOOT,
    /*  7 */ GIBDO_LIMB_RIGHT_LEG_ROOT,
    /*  8 */ GIBDO_LIMB_RIGHT_THIGH,
    /*  9 */ GIBDO_LIMB_RIGHT_SHIN,
    /* 10 */ GIBDO_LIMB_RIGHT_FOOT_ROOT,
    /* 11 */ GIBDO_LIMB_RIGHT_FOOT,
    /* 12 */ GIBDO_LIMB_UPPER_BODY_ROOT,
    /* 13 */ GIBDO_LIMB_TORSO_ROOT,
    /* 14 */ GIBDO_LIMB_TORSO,
    /* 15 */ GIBDO_LIMB_LEFT_ARM_ROOT,
    /* 16 */ GIBDO_LIMB_LEFT_UPPER_ARM,
    /* 17 */ GIBDO_LIMB_LEFT_FOREARM,
    /* 18 */ GIBDO_LIMB_LEFT_HAND,
    /* 19 */ GIBDO_LIMB_RIGHT_ARM_ROOT,
    /* 20 */ GIBDO_LIMB_RIGHT_UPPER_ARM,
    /* 21 */ GIBDO_LIMB_RIGHT_FOREARM,
    /* 22 */ GIBDO_LIMB_RIGHT_HAND,
    /* 23 */ GIBDO_LIMB_HEAD_ROOT,
    /* 24 */ GIBDO_LIMB_HEAD,
    /* 25 */ GIBDO_LIMB_PELVIS,
    /* 26 */ GIBDO_LIMB_MAX
} EnRailgibudLimb;

typedef enum EnRailgibudBodyPart {
    /*  0 */ ENRAILGIBUD_BODYPART_0,
    /*  1 */ ENRAILGIBUD_BODYPART_1,
    /*  2 */ ENRAILGIBUD_BODYPART_2,
    /*  3 */ ENRAILGIBUD_BODYPART_3,
    /*  4 */ ENRAILGIBUD_BODYPART_4,
    /*  5 */ ENRAILGIBUD_BODYPART_5,
    /*  6 */ ENRAILGIBUD_BODYPART_6,
    /*  7 */ ENRAILGIBUD_BODYPART_7,
    /*  8 */ ENRAILGIBUD_BODYPART_8,
    /*  9 */ ENRAILGIBUD_BODYPART_9,
    /* 10 */ ENRAILGIBUD_BODYPART_10,
    /* 11 */ ENRAILGIBUD_BODYPART_11,
    /* 12 */ ENRAILGIBUD_BODYPART_12,
    /* 13 */ ENRAILGIBUD_BODYPART_13,
    /* 14 */ ENRAILGIBUD_BODYPART_14,
    /* 15 */ ENRAILGIBUD_BODYPART_MAX
} EnRailgibudBodyPart;

typedef struct EnRailgibud {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder collider;
    /* 0x190 */ SkelAnime skelAnime;
    /* 0x1D4 */ EnRailgibudActionFunc actionFunc;
    /* 0x1D8 */ Vec3f bodyPartsPos[ENRAILGIBUD_BODYPART_MAX];
    /* 0x28C */ s32 bodyPartIndex;
    /* 0x290 */ UNK_TYPE1 unk290[0x4];
    /* 0x294 */ Vec3s* pathPoints;
    /* 0x298 */ s32 currentPoint;
    /* 0x29C */ s32 pathCount;
    /* 0x2A0 */ f32 drawDmgEffAlpha;
    /* 0x2A4 */ f32 drawDmgEffScale;
    /* 0x2A8 */ Vec3s jointTable[GIBDO_LIMB_MAX];
    /* 0x344 */ Vec3s morphTable[GIBDO_LIMB_MAX];
    /* 0x3E0 */ Vec3s headRot;
    /* 0x3E6 */ Vec3s torsoRot;
    /* 0x3EC */ s16 shouldWalkForward; // Only used by the "main" Gibdo
    /* 0x3EE */ s16 shouldWalkForwardNextFrame; // Only used by the "main" Gibdo
    /* 0x3F0 */ union {
                    s16 grabState;
                    s16 csAnimIndex;
                };
    /* 0x3F2 */ union {
                    s16 playerStunWaitTimer; // Cannot stun the player if this is non-zero
                    s16 grabDamageTimer;
                    s16 headShakeTimer;
                    s16 stunTimer;
                    s16 deathTimer;
                    s16 sinkTimer;
                };
    /* 0x3F4 */ s16 grabWaitTimer; // Cannot grab the player if this is non-zero
    /* 0x3F6 */ s16 drawDmgEffTimer;
    /* 0x3F8 */ s16 type;
    /* 0x3FA */ s16 isInvincible;
    /* 0x3FC */ u16 textId;
    /* 0x3FE */ u8 drawDmgEffType;
    /* 0x3FF */ s8 unk_405; // related to player->unk_ADD
} EnRailgibud; // size = 0x400

#endif
