#ifndef Z_EN_OKUTA2_H
#define Z_EN_OKUTA2_H

#include "ultra64.h"
#include "actor.h"

struct EnOkuta2;

typedef void (*EnOkuta2ActionFunc)(struct EnOkuta2*, struct PlayState*);

#define EN_OKUTA2_GET_NUM_CONSECUTIVE_PROJECTILES(thisx) (((thisx)->params >> 8) & 0xFF)
#define EN_OKUTA2_GET_TYPE(thisx)                         ((thisx)->params)

typedef enum OctorokLimb {
    /* 0x00 */ OCTOROK_LIMB_NONE,
    /* 0x01 */ OCTOROK_LIMB_BODY,
    /* 0x02 */ OCTOROK_LIMB_FRONT_LEFT_ARM_BASE,
    /* 0x03 */ OCTOROK_LIMB_FRONT_LEFT_ARM_MIDDLE,
    /* 0x04 */ OCTOROK_LIMB_FRONT_LEFT_ARM_END,
    /* 0x05 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_BASE,
    /* 0x06 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_MIDDLE,
    /* 0x07 */ OCTOROK_LIMB_FRONT_RIGHT_ARM_END,
    /* 0x08 */ OCTOROK_LIMB_BACK_LEFT_ARM_BASE,
    /* 0x09 */ OCTOROK_LIMB_BACK_LEFT_ARM_MIDDLE,
    /* 0x0A */ OCTOROK_LIMB_BACK_LEFT_ARM_END,
    /* 0x0B */ OCTOROK_LIMB_BACK_RIGHT_ARM_BASE,
    /* 0x0C */ OCTOROK_LIMB_BACK_RIGHT_ARM_MIDDLE,
    /* 0x0D */ OCTOROK_LIMB_BACK_RIGHT_ARM_END,
    /* 0x0E */ OCTOROK_LIMB_HEAD,
    /* 0x0F */ OCTOROK_LIMB_SNOUT,
    /* 0x10 */ OCTOROK_LIMB_MAX
} OctorokLimb;

typedef enum EnOkuta2Type {
    /*  0 */ EN_OKUTA2_TYPE_RED_OCTOROK,
    /*  1 */ EN_OKUTA2_TYPE_BLUE_OCTOROK, // Unused in the final game. This variant is invincible to all attacks and can chase the player underwater if they dive.
    /* 16 */ EN_OKUTA2_TYPE_PROJECTILE_BASE = 16,
    /* 16 */ EN_OKUTA2_TYPE_RED_PROJECTILE = EN_OKUTA2_TYPE_RED_OCTOROK + EN_OKUTA2_TYPE_PROJECTILE_BASE,
    /* 17 */ EN_OKUTA2_TYPE_BLUE_PROJECTILE = EN_OKUTA2_TYPE_BLUE_OCTOROK + EN_OKUTA2_TYPE_PROJECTILE_BASE
} EnOkuta2Type;

typedef enum EnOkuta2BodyPart {
    /*  0 */ EN_OKUTA2_BODYPART_BODY,
    /*  1 */ EN_OKUTA2_BODYPART_FRONT_LEFT_ARM_END,
    /*  2 */ EN_OKUTA2_BODYPART_FRONT_RIGHT_ARM_END,
    /*  3 */ EN_OKUTA2_BODYPART_BACK_LEFT_ARM_END,
    /*  4 */ EN_OKUTA2_BODYPART_BACK_RIGHT_ARM_END,
    /*  5 */ EN_OKUTA2_BODYPART_SNOUT,
    /*  6 */ EN_OKUTA2_BODYPART_HEAD,
    /*  7 */ EN_OKUTA2_BODYPART_EFFECTS_1,
    /*  8 */ EN_OKUTA2_BODYPART_EFFECTS_2,
    /*  9 */ EN_OKUTA2_BODYPART_EFFECTS_3,
    /* 10 */ EN_OKUTA2_BODYPART_MAX
} EnOkuta2BodyPart;

typedef struct EnOkuta2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ EnOkuta2ActionFunc actionFunc;
    /* 0x18C */ u8 drawDmgEffType;
    /* 0x18E */ s16 timer;
    /* 0x190 */ s16 numConsecutiveProjectiles; // when the Octorok starts shooting projectiles, it will shoot this many projectiles in a row before stopping
    /* 0x192 */ Vec3s jointTable[38];
    /* 0x1F2 */ Vec3s morphTable[38];
    /* 0x254 */ f32 drawDmgEffAlpha;
    /* 0x258 */ f32 drawDmgEffScale;
    /* 0x25C */ f32 drawDmgEffFrozenSteamScale;
    /* 0x260 */ f32 jumpHeight;
    /* 0x264 */ Vec3f headScale;
    /* 0x270 */ Vec3f bodyPartsPos[EN_OKUTA2_BODYPART_MAX];
    /* 0x2E8 */ ColliderCylinder collider;
} EnOkuta2; // size = 0x334

#endif
