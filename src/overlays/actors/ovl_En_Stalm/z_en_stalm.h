#ifndef Z_EN_STALMASTER_H
#define Z_EN_STALMASTER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_stalm/object_stalm.h"

#define BONE_SPREAD             120.0f // This is used in the setup of the limbs, its used for the spread of bones spawn
#define STALMASTER_MAX_EFFECT   13
#define TAIL_NUMBER             10

struct EnStalmaster;

typedef void (*EnStalmasterActionFunc)(struct EnStalmaster*, struct PlayState*);

typedef enum StalmasterCutsceneStates {
    STALMASTER_CUTSCENE_INTRO_WAIT,
    STALMASTER_CUTSCENE_INTRO_OPENING,
    STALMASTER_CUTSCENE_THREAT_WAIT,
    STALMASTER_CUTSCENE_THREAT_DO,
    STALMASTER_CUTSCENE_DIE_WAIT,
    STALMASTER_CUTSCENE_DIE_DO
} StalmasterCutsceneStates;

typedef enum StalmasterEffectType {
    STALMASTER_EFFECT_NONE,
    STALMASTER_EFFECT_HELMET,
    STALMASTER_EFFECT_TAIL,
    STALMASTER_EFFECT_TIP,
    STALMASTER_EFFECT_PLATE
} StalmasterEffectType;

typedef enum StalmasterDamageEffect {
    STALMASTER_DMGEFF_NONE,
    STALMASTER_DMGEFF_NORMAL,
    STALMASTER_DMGEFF_PARRY,
    STALMASTER_DMGEFF_EXPLOSIVE,
    STALMASTER_DMGEFF_SPIN
} StalmasterDamageEffect;

typedef struct StalmasterParts {
    bool csHandled;
    bool invisible;
    u8 gravity;
    u8 onGround;
    u8 bounceCounter;
    u8 type;
    Vec3f velocity;
    Vec3f skeletonPos;
    Vec3s skeletonRot;
    Vec3f pos;
    Vec3s rot;
} StalmasterParts;

typedef struct EnStalmasterFlags {
    u16 helmetOff         : 1;
    u16 plateOff          : 1;
    u16 miniboss          : 1;
    u16 switchFlag        : 1;
    u16 swordAActive      : 1;
    u16 swordBActive      : 1;
    u16 swordCActive      : 1;
    u16 swordDActive      : 1;
    u16 inSecondPhase     : 1;
    u16 hasTakenWeaponry  : 1;
    u16 startfade         : 1;
    u16 burnEffectStarted : 1;
} EnStalmasterFlags;

typedef struct EnStalmaster {
    Actor actor;
    EnStalmasterActionFunc actionFunc;
    SkelAnime skelAnime;
    Vec3s jointTable[STALMASTER_LIMB_MAX];
    Vec3s morphTable[STALMASTER_LIMB_MAX];
    EnStalmasterFlags flags;
    u8 csState;
    u8 commonTimer;
    u8 aggressionTimer;
    u8 dmgFogEffectTimer;
    u8 alpha;
    u8 animationTimer;
    s8 subCamId;
    s8 burntimer;
    s32 effectIndex1;
    s32 effectIndex2;
    s32 effectIndex3;
    s32 effectIndex4;
    f32 subCamFov;
    f32 torsoRotX;
    f32 torsoRotZ;
    Vec3f subCamEye;
    Vec3f subCamAt;
    Vec3f tailPos[4];
    ColliderJntSph colliderSwordUpLeft;
    ColliderJntSphElement collidersSwordUpLeft[2];
    ColliderJntSph colliderSwordUpRight;
    ColliderJntSphElement collidersSwordUpRight[2];
    ColliderJntSph colliderSwordDownLeft;
    ColliderJntSphElement collidersSwordDownLeft[2];
    ColliderJntSph colliderSwordDownRight;
    ColliderJntSphElement collidersSwordDownRight[2];
    ColliderCylinder bodyCollider;
    StalmasterParts sStalmasterParts[STALMASTER_LIMB_MAX];
    StalmasterParts sStalmasterEffects[STALMASTER_MAX_EFFECT];
} EnStalmaster;

typedef enum StalmasterType {
    /* 1 */ STALM_TYPE_NORMAL,
    /* 0 */ BEAST_TYPE_MINIBOSS
} StalmasterType;

#endif
