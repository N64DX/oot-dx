#ifndef Z_EN_WIZ_H
#define Z_EN_WIZ_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_wiz/object_wiz.h"

#define EN_WIZ_GET_SWITCH_FLAG(thisx)  ((thisx)->params       & 0x3F)
#define EN_WIZ_GET_TYPE(thisx)        (((thisx)->params >> 8) & 0xFF)
#define EN_WIZ_SWITCH_FLAG_NONE                                 0x3F

typedef enum EnWizType {
    /* 0 */ EN_WIZ_TYPE_FIRE,
    /* 1 */ EN_WIZ_TYPE_ICE,
    /* 2 */ EN_WIZ_TYPE_FIRE_NO_BGM // does not request the mini-boss BGM
} EnWizType;

typedef enum EnWizAction {
    /* 1 */ EN_WIZ_ACTION_APPEAR = 1,
    /* 2 */ EN_WIZ_ACTION_RUN_BETWEEN_PLATFORMS,
    /* 3 */ EN_WIZ_ACTION_DISAPPEAR,
    /* 4 */ EN_WIZ_ACTION_DAMAGED,
    /* 5 */ EN_WIZ_ACTION_DEAD,
    /* 6 */ EN_WIZ_ACTION_BURST_INTO_FLAMES,
    /* 7 */ EN_WIZ_ACTION_RUN_IN_CIRCLES,
    /* 8 */ EN_WIZ_ACTION_ATTACK,
    /* 9 */ EN_WIZ_ACTION_DANCE
} EnWizAction;

typedef enum EnWizIntroCutsceneState {
    /* 0 */ EN_WIZ_INTRO_CS_NOT_STARTED,
    /* 1 */ EN_WIZ_INTRO_CS_CAMERA_MOVE_TO_PLATFORM,
    /* 2 */ EN_WIZ_INTRO_CS_APPEAR,
    /* 3 */ EN_WIZ_INTRO_CS_CAMERA_SPIN_TO_FACE_WIZROBE,
    /* 4 */ EN_WIZ_INTRO_CS_WAIT_BEFORE_RUN,
    /* 5 */ EN_WIZ_INTRO_CS_RUN_IN_CIRCLES,
    /* 6 */ EN_WIZ_INTRO_CS_DISAPPEAR,
    /* 7 */ EN_WIZ_INTRO_CS_END
} EnWizIntroCutsceneState;

typedef enum EnWizFightState {
    /* 0 */ EN_WIZ_FIGHT_STATE_FIRST_PHASE,
    /* 1 */ EN_WIZ_FIGHT_STATE_SECOND_PHASE_CUTSCENE,
    /* 2 */ EN_WIZ_FIGHT_STATE_SECOND_PHASE_GHOSTS_COPY_WIZROBE,
    /* 3 */ EN_WIZ_FIGHT_STATE_SECOND_PHASE_GHOSTS_RUN_AROUND
} EnWizFightState;

typedef enum EnWizBodyPart {
    /*  0 */ EN_WIZ_BODYPART_0,
    /*  1 */ EN_WIZ_BODYPART_1,
    /*  2 */ EN_WIZ_BODYPART_2,
    /*  3 */ EN_WIZ_BODYPART_3,
    /*  4 */ EN_WIZ_BODYPART_4,
    /*  5 */ EN_WIZ_BODYPART_5,
    /*  6 */ EN_WIZ_BODYPART_6,
    /*  7 */ EN_WIZ_BODYPART_7,
    /*  8 */ EN_WIZ_BODYPART_8,
    /*  9 */ EN_WIZ_BODYPART_9,
    /* 10 */ EN_WIZ_BODYPART_10,
    /* 11 */ EN_WIZ_BODYPART_11,
    /* 12 */ EN_WIZ_BODYPART_MAX
} EnWizBodyPart;

typedef enum EnWizAnimation {
    /* 0 */ EN_WIZ_ANIM_IDLE,
    /* 1 */ EN_WIZ_ANIM_RUN,
    /* 2 */ EN_WIZ_ANIM_DANCE,
    /* 3 */ EN_WIZ_ANIM_WIND_UP,
    /* 4 */ EN_WIZ_ANIM_ATTACK,
    /* 5 */ EN_WIZ_ANIM_DAMAGE,
    /* 6 */ EN_WIZ_ANIM_MAX
} EnWizAnimation;

struct EnWiz;

typedef void (*EnWizActionFunc) (struct EnWiz*, struct PlayState*);

typedef struct EnWiz {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s jointTable[WIZROBE_LIMB_MAX];
    /* 0x200 */ Vec3s morphTable[WIZROBE_LIMB_MAX];
    /* 0x278 */ SkelAnime ghostSkelAnime;
    /* 0x2BC */ Vec3s ghostBaseJointTable[WIZROBE_LIMB_MAX];
    /* 0x334 */ Vec3s ghostMorphTable[WIZROBE_LIMB_MAX];
    /* 0x3AC */ EnWizActionFunc actionFunc;
    /* 0x3B0 */ s16 action;
    /* 0x3B2 */ s16 timer;
    /* 0x3B4 */ s16 introCutsceneTimer;
    /* 0x3B6 */ s16 fightState;
    /* 0x3B8 */ s16 staffFlameScroll;
    /* 0x3BA */ s16 hasActiveProjectile;
    /* 0x3BC */ u8 hasRunToEveryPlatform; // used for the second phase cutscene to make sure the Wizrobe visits every platform
    /* 0x3C0 */ s16 angularVelocity;
    /* 0x3C2 */ s16 alpha;
    /* 0x3C4 */ s16 platformLightAlpha;
    /* 0x3C6 */ s16 targetPlatformLightAlpha;
    /* 0x3C8 */ s16 introCutsceneCameraAngle;
    /* 0x3CA */ u8 shouldStartTimer;
    /* 0x3CB */ u8 introCutsceneState;
    /* 0x3CC */ s32 musicStartTimer;
    /* 0x3D0 */ f32 animEndFrame;
    /* 0x3D4 */ f32 scale;
    /* 0x3D8 */ Vec3f staffFlamePos;
    /* 0x3E4 */ Vec3f staffFlameScale;
    /* 0x3F0 */ Vec3f staffTargetFlameScale;
    /* 0x414 */ Vec3f platformLightPos;
    /* 0x420 */ Actor* platforms[10];
    /* 0x448 */ Actor* freezard;
    /* 0x44C */ s16 animLoopCounter;
    /* 0x454 */ ColliderJntSph ghostColliders;
    /* 0x474 */ ColliderJntSphElement ghostColliderElements[10];
    /* 0x6F4 */ ColliderCylinder collider;
    /* 0x740 */ u8 platformCount;
    /* 0x744 */ s8 nextPlatformIndex; // used for the second phase cutscene to dictate where the Wizrobe should run to next
    /* 0x748 */ s8 curPlatformIndex;
    /* 0x74A */ u8 type;
    /* 0x74C */ s8 switchFlag;
    /* 0x74E */ s8 subCamId;
    /* 0x750 */ u8 isDead;
    /* 0x752 */ s16 drawDmgEffTimer;
    /* 0x754 */ s16 drawDmgEffType;
    /* 0x758 */ f32 drawDmgEffScale;
    /* 0x75C */ f32 drawDmgEffFrozenSteamScale;
    /* 0x760 */ Vec3f bodyPartsPos[EN_WIZ_BODYPART_MAX];
    /* 0x7F0 */ s16 bodyPartIndex;
    /* 0x7F2 */ s16 ghostAlpha[10];
    /* 0x806 */ s16 ghostNextPlatformIndex[10];
    /* 0x81C */ Vec3f ghostPos[10];
    /* 0x894 */ Vec3s ghostRot[10];
    /* 0x8D0 */ Vec3s ghostJointTables[10][WIZROBE_LIMB_MAX];
} EnWiz; // size = 0xD80

#endif
