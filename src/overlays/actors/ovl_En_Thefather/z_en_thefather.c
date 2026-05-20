/*
 * File: z_en_thefather.c
 * Overlay: Ovl_En_Thefather
 * Description: The father of all beasts and monsters
 * Authors: Curse of Moonlight
 */

// NA_SE_EN_IRONNACK_DASH -> CScream1
// NA_SE_VO_ST_DAMAGE -> CScream2
// NA_SE_VO_FR_LAUGH_0 -> CScream3
// NA_SE_EN_GOLON_WAKE_UP -> CScream4 // broken
// NA_SE_EN_GOLON_GOOD_BIG -> CScream5 // broken

#include "z_en_thefather.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "segmented_address.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "player.h"
#include "audio.h"
#include "effect.h"
#include "z_en_item00.h"
#include "seqcmd.h"
#include "save.h"

#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void EnThefather_Init(Actor* thisx, struct PlayState* play);
void EnThefather_Destroy(Actor* thisx, struct PlayState* play);
void EnThefather_Update(Actor* thisx, struct PlayState* play);
void EnThefather_Draw(Actor* thisx, struct PlayState* play);

void EnThefather_MoveF(EnThefather* this, struct PlayState* play);
void EnThefather_SetupMoveF(EnThefather* this, struct PlayState* play);
void EnThefather_ForwardBackCheck(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackA(EnThefather* this, struct PlayState* play); // 1
void EnThefather_AttackA(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackB(EnThefather* this, struct PlayState* play); // 2
void EnThefather_AttackB(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackC(EnThefather* this, struct PlayState* play); // 3
void EnThefather_AttackC(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackD(EnThefather* this, struct PlayState* play); // 4
void EnThefather_AttackD(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackE(EnThefather* this, struct PlayState* play); // 5
void EnThefather_AttackE(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackF(EnThefather* this, struct PlayState* play); // 6
void EnThefather_AttackF(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackG(EnThefather* this, struct PlayState* play); // 7
void EnThefather_AttackG(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackH(EnThefather* this, struct PlayState* play); // 8
void EnThefather_AttackH(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackI(EnThefather* this, struct PlayState* play); // 9
void EnThefather_AttackI(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackJ(EnThefather* this, struct PlayState* play); // 10
void EnThefather_AttackJ(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackK(EnThefather* this, struct PlayState* play); // 11
void EnThefather_AttackK(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackL(EnThefather* this, struct PlayState* play); // 12
void EnThefather_AttackL(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackMa(EnThefather* this, struct PlayState* play); // 13
void EnThefather_AttackMa(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackMc(EnThefather* this, struct PlayState* play);
void EnThefather_AttackMc(EnThefather* this, struct PlayState* play);
void EnThefather_SetupAttackMb(EnThefather* this, struct PlayState* play);
void EnThefather_AttackMb(EnThefather* this, struct PlayState* play);
void EnThefather_SetupHurt(EnThefather* this, struct PlayState* play);
void EnThefather_Hurt(EnThefather* this, struct PlayState* play);
void EnThefather_SetupDeath(EnThefather* this, struct PlayState* play);
void EnThefather_Death(EnThefather* this, struct PlayState* play);
void EnThefather_SetupRiseA(EnThefather* this, struct PlayState* play);
void EnThefather_RiseA(EnThefather* this, struct PlayState* play);
void EnThefather_SetupRiseB(EnThefather* this, struct PlayState* play);
void EnThefather_RiseB(EnThefather* this, struct PlayState* play);
void EnThefather_SetupRiseC(EnThefather* this, struct PlayState* play);
void EnThefather_RiseC(EnThefather* this, struct PlayState* play);
void EnThefather_SetupIdle(EnThefather* this, struct PlayState* play);
void EnThefather_Idle(EnThefather* this, struct PlayState* play);
void EnThefather_SetupIdleP(EnThefather* this, struct PlayState* play);
void EnThefather_IdleP(EnThefather* this, struct PlayState* play);
void EnThefather_SetupIdle2(EnThefather* this, struct PlayState* play);
void EnThefather_Idle2(EnThefather* this, struct PlayState* play);
void EnThefather_SetupIdle3(EnThefather* this, struct PlayState* play);
void EnThefather_Idle3(EnThefather* this, struct PlayState* play);
void EnThefather_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnThefather_ChangeAnimation(EnThefather* this, s32 anim);
void EnThefather_CheckDamage(EnThefather* this, struct PlayState* play);
void EnThefather_Scream(EnThefather* this, struct PlayState* play);

ActorProfile En_Thefather_Profile = {
    /**/ ACTOR_EN_THEFATHER,
    /**/ ACTORCAT_BOSS,
    /**/ FLAGS,
    /**/ OBJECT_THEFATHER,
    /**/ sizeof(EnThefather),
    /**/ EnThefather_Init,
    /**/ EnThefather_Destroy,
    /**/ EnThefather_Update,
    /**/ EnThefather_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL,
        ACELEM_NONE,
        OCELEM_ON,
    },
    { 35, 20, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInit = { 80, 30.0f, 80.0f, 0, MASS_IMMOVABLE };

static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HEAD_LIMB, { { 0, 0, 0 }, 50 }, 45 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HAND_L_LIMB, { { 0, 0, 0 }, 50 }, 50 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HAND_R_LIMB, { { 0, 0, 0 }, 50 }, 50 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0xFFCFFFFF, 0x04, 0x30 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_CHEST_LIMB, { { 0, 0, 0 }, 50 }, 55 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHIN_L_LIMB, { { 0, 0, 0 }, 50 }, 40 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0xFFCFFFFF, 0x04, 0x30 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HOOF_L_LIMB, { { 0, 0, 0 }, 50 }, 40 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0xFFCFFFFF, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HOOF_R_LIMB, { { 0, 0, 0 }, 50 }, 40 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHIN_R_LIMB, { { 0, 0, 0 }, 50 }, 40 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_UPPERLEG_L_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HIP_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_TORSO_LIMB, { { 0, 0, 0 }, 50 }, 55 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_ARM_L_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_ARM_R_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHOULDER_L_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    }, {
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHOULDER_R_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    },{
        {
            COL_MATERIAL_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_UPPERLEG_R_LIMB, { { 0, 0, 0 }, 50 }, 30 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_HIT7,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphItemsInit),
    sJntSphItemsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, NAVI_ENEMY_THEFATHER, ICHAIN_CONTINUE),
    ICHAIN_S8(attentionRangeType, ATTENTION_RANGE_2, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, -3000, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 45, ICHAIN_STOP)
};

typedef enum gThefatherAnim {
    GTHEFATHER_ANIM_IDLE = 0,
    GTHEFATHER_ANIM_ATTACKA, // 1
    GTHEFATHER_ANIM_ATTACKB, // 2
    GTHEFATHER_ANIM_ATTACKC, // 3
    GTHEFATHER_ANIM_ATTACKD, // 4
    GTHEFATHER_ANIM_ATTACKE, // 5
    GTHEFATHER_ANIM_ATTACKF, // 6
    GTHEFATHER_ANIM_ATTACKG, // 7
    GTHEFATHER_ANIM_ATTACKH, // 8
    GTHEFATHER_ANIM_ATTACKI, // 9
    GTHEFATHER_ANIM_ATTACKJ, // 10
    GTHEFATHER_ANIM_ATTACKK, // 11
    GTHEFATHER_ANIM_ATTACKL, // 12
    GTHEFATHER_ANIM_ATTACKM, // 13
    GTHEFATHER_ANIM_ATTACKMHIT,
    GTHEFATHER_ANIM_ATTACKMMISS,
    GTHEFATHER_ANIM_WALK,
    GTHEFATHER_ANIM_HURT,
    GTHEFATHER_ANIM_DEATH,
    GTHEFATHER_ANIM_MAX
} gThefatherAnim;

typedef enum gTheFatherCutscenePhases {
    GTHEFATHER_CUTSCENE_NONE = 0,
    GTHEFATHER_CUTSCENE_FALLING_DOWN1,
    GTHEFATHER_CUTSCENE_FALLING_DOWN2,
    GTHEFATHER_CUTSCENE_FALLING_DOWN3,
    GTHEFATHER_CUTSCENE_BOSS_FOCUS,
    GTHEFATHER_CUTSCENE_PLAYER_FOCUS,
    GTHEFATHER_CUTSCENE_INTRO_IDLE,
    GTHEFATHER_CUTSCENE_DEAD,
    GTHEFATHER_CUTSCENE_DEAD_IDLE
} gTheFatherCutscenePhases;

static AnimationInfo sAnimationInfo[GTHEFATHER_ANIM_MAX] = {
    { &gThefatherIdleAnim,         1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gThefatherAttack1Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gThefatherAttack2Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gThefatherAttack3Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack4Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack5Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack6Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack7Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack8Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack9Anim,      1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack10Anim,     1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack11Anim,     1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack12Anim,     1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack13Anim,     1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack13hitAnim,  1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherAttack13missAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherWalkAnim,         1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherHurtAnim,         0.5f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gThefatherDeathAnim,        1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

void EnTheFather_HandleCutscenes(EnThefather* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (this->csTimer > 0)
        this->csTimer--;

    switch (this->cutscene) {
        case GTHEFATHER_CUTSCENE_NONE:
            if (this->actor.yDistToPlayer <= 1000.0f) {
                Vec3f eye      = { 0.0f, -900.0f, -4500.0f };
                Vec3f cameraAt = { 0.0f,    0.0f,     0.0f };

                this->cutscene = GTHEFATHER_CUTSCENE_FALLING_DOWN1;

                player->actor.world.rot.y = player->actor.shape.rot.y = player->yaw = player->parallelYaw = 0x8000;
                player->actor.world.pos.x =     0;
                player->actor.world.pos.z = -4415;
                player->speedXZ           =     0;

                this->subCamId = Play_CreateSubCamera(play);
                Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);

                Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_5);
                Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);
            }
            break;

        case GTHEFATHER_CUTSCENE_FALLING_DOWN1:
            if (this->actor.yDistToPlayer <= 300.0f) {
                Vec3f eye      = { 0.0f, -1100.0f, -4600.0f };
                Vec3f cameraAt = { 0.0f,     0.0f,     0.0f };

#if OOT_NTSC_N64
                TitleCard_InitBossName(play, &play->actorCtx.titleCtx, SEGMENTED_TO_VIRTUAL((gSaveContext.language == LANGUAGE_JPN) ? gBlackBeastTitleCardTex : gBlackBeastTitleCardPalTex), 160, 180, 192, 40);
#else
                TitleCard_InitBossName(play, &play->actorCtx.titleCtx, SEGMENTED_TO_VIRTUAL(gBlackBeastTitleCardPalTex), 160, 180, 192, 40);
#endif

                this->cutscene = GTHEFATHER_CUTSCENE_FALLING_DOWN2;
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
                this->csTimer = SECONDS(1);
            }
            break;

        case GTHEFATHER_CUTSCENE_FALLING_DOWN2:
            if (this->csTimer == 0) {
                Vec3f eye      = { 0.0f, -1250.0f, -4600.0f };
                Vec3f cameraAt = { 0.0f,     0.0f,     0.0f };

                this->cutscene = GTHEFATHER_CUTSCENE_FALLING_DOWN3;
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
                this->csTimer = SECONDS(1);
            }
            break;

        case GTHEFATHER_CUTSCENE_FALLING_DOWN3:
            if (this->csTimer == 0) {
                Vec3f eye      = { 200.0f, -1200.0f, -5500.0f };
                Vec3f cameraAt = { 0.0f,       0.0f,     0.0f };

                this->cutscene = GTHEFATHER_CUTSCENE_BOSS_FOCUS;
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
                this->csTimer = SECONDS(3);
            }
            break;

        case GTHEFATHER_CUTSCENE_BOSS_FOCUS:
            if (this->csTimer == 0) {
                Vec3f eye      = { 0.0f, -1200.0f, -4350.0f };
                Vec3f cameraAt = { 0.0f, -1200.0f, -4400.0f };

                this->cutscene = GTHEFATHER_CUTSCENE_PLAYER_FOCUS;
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
                this->csTimer = 2;
            }
            break;

        case GTHEFATHER_CUTSCENE_PLAYER_FOCUS:
            if (this->csTimer == 0) {
                this->cutscene = GTHEFATHER_CUTSCENE_INTRO_IDLE;
                Play_ClearCamera(play, this->subCamId);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
                Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_7);
                Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_ALL);
                SET_EVENTCHKINF(EVENTCHKINF_BEGAN_BLACK_BEAST_BATTLE);
            }
            break;

        case GTHEFATHER_CUTSCENE_INTRO_IDLE:
            if (this->deathTimer > 0) {
                Vec3f eye      = { 300.0f, -1200.0f, -4750.0f };
                Vec3f cameraAt = { 550.0f, -1280.0f, -5300.0f };

                this->cutscene = GTHEFATHER_CUTSCENE_DEAD;

                this->subCamId = Play_CreateSubCamera(play);
                Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
                Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);

                this->actor.world.rot.y = this->actor.shape.rot.y = 0;
                this->actor.world.pos.x =   500;
                this->actor.world.pos.y = -1280;
                this->actor.world.pos.z = -5100;

                player->actor.world.rot.y = player->actor.shape.rot.y = player->yaw = player->parallelYaw = 0x8000;
                player->actor.world.pos.x =   500;
                player->actor.world.pos.y = -1280;
                player->actor.world.pos.z = -4950;

                Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_5);
                Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);
            }
            break;

        case GTHEFATHER_CUTSCENE_DEAD:
            if (this->deathTimer <= 0) {
                this->cutscene = GTHEFATHER_CUTSCENE_DEAD_IDLE;
                Play_ClearCamera(play, this->subCamId);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
                Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_7);
                Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_ALL);
            }
            break;
    }
}

void EnThefather_Init(Actor* thisx, PlayState* play) {
    EnThefather* this = (EnThefather*)thisx;

    Actor_ProcessInitChain(&this->actor, sInitChain);

    if (Flags_GetClear(play, play->roomCtx.curRoom.num)) {
        Actor_Kill(&this->actor);
        Actor_Spawn(&play->actorCtx, play, ACTOR_DOOR_WARP1, 0.0f, -1280.0f, -5400.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
        Actor_Spawn(&play->actorCtx, play, ACTOR_ITEM_B_HEART, 100.0f, -1280.0f, -5400.0f, 0, 0, 0, 0);
    }

    this->alarmstate = false;
    this->cantSee = true;
    this->cutscene = GET_EVENTCHKINF(EVENTCHKINF_BEGAN_BLACK_BEAST_BATTLE) ? GTHEFATHER_CUTSCENE_INTRO_IDLE : GTHEFATHER_CUTSCENE_NONE;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 20.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gThefatherSkel, &gThefatherIdleAnim, this->jointTable, this->morphTable, GTHEFATHER_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);

    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &sColChkInit);
    this->poise = 255;
    this->timer = 60;
    this->csTimer = this->deathTimer = 0;
    EnThefather_SetupIdle(this, play);
    this->actor.speed = 0.0f;
    this->actor.colChkInfo.health = this->actor.maxHealth = Actor_EnemyHealthMultiply(80, BOSS_HP);
}

Vec3f EnThefather_VectorBetween(Vec3f a, Vec3f b) {
    Vec3f result;
    result.x = (a.x + b.x) / 2.0f;
    result.y = (a.y + b.y) / 2.0f;
    result.z = (a.z + b.z) / 2.0f;
    return result;
}

void EnThefather_Destroy(Actor* thisx, PlayState* play) {
    EnThefather* this = (EnThefather*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnThefather_Update(Actor* thisx, PlayState* play) {
    EnThefather* this = (EnThefather*)thisx;

    s16 targetFaceRotX, targetFaceRotY;
    Vec3f pos, epos, colPoint;
    Player* player = GET_PLAYER(play);
    CollisionPoly* poly;
    s32 bgId;

    Actor_MoveXZGravity(&this->actor);
    this->actionFunc(this, play);
    EnTheFather_HandleCutscenes(this, play);

    if (this->actionFunc != EnThefather_Death) {
        EnThefather_CheckDamage(this, play);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }

    if (this->actionFunc != EnThefather_Death)
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    if (this->poise <= 0) {
        this->timer = 100;
        this->poise = 255;
        EnThefather_SetupHurt(this, play);
    } else if (this->poise < 255 && (play->gameplayFrames % 15) == 0)
        this->poise += 1;

    Actor_UpdateBgCheckInfo(play, &this->actor, 80.0f, 36.0f, 0.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    
    if (this->screamcountdown > 0)
        this->screamcountdown--;
    if (this->hurtboxCooldown > 0)
        this->hurtboxCooldown--;

    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 100.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;

    if (this->actor.xzDistToPlayer < 900.0f && (play->gameplayFrames % 10) == 0) {
        if (BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, true, true, true, &bgId))
            this->cantSee = true;
        else  this->cantSee = false;
    } else this->cantSee = true;
}

void EnThefather_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnThefather* this = (EnThefather*)thisx;

    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    if (limbIndex == GTHEFATHER_HEAD_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->head);
    else if (limbIndex == GTHEFATHER_HAND_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->handL);
    else if (limbIndex == GTHEFATHER_HAND_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->handR);
    else if (limbIndex == GTHEFATHER_SHOULDER_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->shoulderR);
    else if (limbIndex == GTHEFATHER_SHOULDER_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->shoulderL);
    else if (limbIndex == GTHEFATHER_SHIN_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->shinR);
    else if (limbIndex == GTHEFATHER_SHIN_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->shinL);
    else if (limbIndex == GTHEFATHER_HOOF_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->footL);
    else if (limbIndex == GTHEFATHER_HOOF_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->footR);
    else if (limbIndex == GTHEFATHER_CHEST_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->chest);
    else if (limbIndex == GTHEFATHER_TORSO_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->abdomen);
    else if (limbIndex == GTHEFATHER_HIP_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->waist);
    else if (limbIndex == GTHEFATHER_ARM_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->armR);
    else if (limbIndex == GTHEFATHER_ARM_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->armL);

    this->actor.focus.pos = this->chest;

    if (this->actionFunc != EnThefather_Death)
        Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    if (this->hurtboxCooldown == 0)
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSpheres.base);
}

void EnThefather_Draw(Actor* thisx, PlayState* play) {
    EnThefather* this = (EnThefather*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL, EnThefather_PostLimbDraw, this);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnThefather_CheckDamage(EnThefather* this, PlayState* play) {
    ColliderElement* acHitElem;
    s16 i, j;
    s32 damage, swordDamage, dmgFlags;

    if (this->hurtboxCooldown != 0) {
        for (i=0; i<ARRAY_COUNT(this->colliderSpheresElements); i++)
            this->colliderSpheres.elements[i].base.acElemFlags &= ~ACELEM_HIT;
    } else {
        for (i=0; i<ARRAY_COUNT(this->colliderSpheresElements); i++) {
            if (this->colliderSpheres.elements[i].base.acElemFlags & ACELEM_HIT) {
                for (j=0; j<ARRAY_COUNT(this->colliderSpheresElements); j++)
                    this->colliderSpheres.elements[j].base.acElemFlags &= ~ACELEM_HIT;

                acHitElem = this->colliderSpheres.elements[i].base.acHitElem;
                dmgFlags = acHitElem->atDmgInfo.dmgFlags;
                damage = swordDamage = CollisionCheck_GetSwordDamage(acHitElem->atDmgInfo.dmgFlags);

                switch (dmgFlags) {
                    case DMG_SLINGSHOT:
                        damage = Actor_AdjustDealtDamage(1, dmgFlags, this->actor.colChkInfo.itemAction);;
                        break;
                    case DMG_ARROW_NORMAL:
                    case DMG_ARROW_FIRE:
                    case DMG_ARROW_LIGHT:
                    case DMG_EXPLOSIVE:
                        damage = Actor_AdjustDealtDamage(2, dmgFlags, this->actor.colChkInfo.itemAction);
                        break;
                    case DMG_MAGIC_FIRE:
                        damage = Actor_AdjustDealtDamage(4, dmgFlags, this->actor.colChkInfo.itemAction);
                        break;
                    case DMG_ARROW_ICE:
                        damage = Actor_AdjustDealtDamage(5, dmgFlags, this->actor.colChkInfo.itemAction);
                        break;
                }

                if (damage > 0) {
                    if (this->actor.colChkInfo.health <= damage)
                        this->actor.colChkInfo.health = 0;
                    else this->actor.colChkInfo.health -= damage;

                    if (this->actor.colChkInfo.health <= 0 && swordDamage == 0)
                        this->actor.colChkInfo.health = Actor_EnemyHealthCheckMultiply(2);

                    if (this->actor.colChkInfo.health == 0) {
                        this->deathTimer = 360;
                        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DEAD);
                        EnThefather_SetupDeath(this, play);
                    }

                    
                    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 150, COLORFILTER_BUFFLAG_OPA, 20);
                    Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DAMAGE);

                    if (this->actionFunc != EnThefather_Hurt) {
                        if (acHitElem->atDmgInfo.dmgFlags & (DMG_JUMP_KOKIRI | DMG_SPIN_KOKIRI | DMG_SLASH_KOKIRI | DMG_JUMP_MASTER | DMG_SPIN_MASTER | DMG_SLASH_MASTER)) {
                            if (acHitElem->atDmgInfo.dmgFlags & (DMG_JUMP_KOKIRI | DMG_JUMP_MASTER))
                                this->poise = (this->poise > 15) ? (this->poise - 15) : 0;
                            else this->poise = (this->poise > 8) ? (this->poise - 8) : 0;
                        } else if (acHitElem->atDmgInfo.dmgFlags & (DMG_JUMP_GIANT | DMG_SPIN_GIANT | DMG_SLASH_GIANT)) {
                            if (acHitElem->atDmgInfo.dmgFlags & DMG_JUMP_GIANT)
                                this->poise = (this->poise > 25) ? (this->poise - 25) : 0;
                            else this->poise = (this->poise > 15) ? (this->poise - 15) : 0;
                        } else if (acHitElem->atDmgInfo.dmgFlags & DMG_DEKU_NUT)
                            this->poise = (this->poise > 40) ? (this->poise - 40) : 0;
                        else if (acHitElem->atDmgInfo.dmgFlags & DMG_ARROW_NORMAL)
                            this->poise = (this->poise > 6) ? (this->poise - 6) : 0;
                        else if (acHitElem->atDmgInfo.dmgFlags & DMG_EXPLOSIVE)
                            this->poise = (this->poise > 20) ? (this->poise - 20) : 0;
                    }

                    this->hurtboxCooldown = this->actionFunc != EnThefather_Hurt ? SECONDS(1) : SECONDS(0.5);
                    break;
                }
            }
        }
    }
}

void EnThefather_SetupDeath(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_DEATH);

    SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_BGM_MAIN, 0, 0, NA_BGM_BOSS_CLEAR);
    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;

    this->actionFunc = EnThefather_Death;
}

void EnThefather_Death(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer > 0) {
        if (this->deathTimer == 1) {
            Flags_SetClear(play, play->roomCtx.curRoom.num);
            Actor_Spawn(&play->actorCtx, play, ACTOR_DOOR_WARP1, 0.0f, -1280.0f, -5400.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
            Actor_Spawn(&play->actorCtx, play, ACTOR_ITEM_B_HEART, 100.0f, -1280.0f, -5400.0f, 0, 0, 0, 0);
        }
        this->deathTimer -= 1;
        if (this->skelAnime.curFrame < 31.0f) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
            Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
            this->actor.speed = -3.0f;

            if (this->skelAnime.curFrame == 16.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            } else if (this->skelAnime.curFrame == 30.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
        } else {
            this->actor.speed = 0;
            if (this->skelAnime.curFrame == 54.0f || this->skelAnime.curFrame == 263.0f) {
                EnThefather_Scream(this, play);
            } else if (this->skelAnime.curFrame == 93.0f || this->skelAnime.curFrame == 330.0f || this->skelAnime.curFrame == 337.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            } else if (this->skelAnime.curFrame == 326.0f || this->skelAnime.curFrame == 334.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->handL, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            } else if (this->skelAnime.curFrame == 319.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->shinR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->shinR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            } else if (this->skelAnime.curFrame > 308.0f && this->skelAnime.curFrame < 319.0f) {
                this->actor.shape.shadowDraw = 0;
                this->actor.speed = 5.0;
            } else if (this->skelAnime.curFrame == 327.0f || this->skelAnime.curFrame == 333.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->chest, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            } else if (this->skelAnime.curFrame == 326.0f || this->skelAnime.curFrame == 334.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
        }
    }
}

void EnThefather_ChangeAnimation(EnThefather* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

void EnThefather_ForwardBackCheck(EnThefather* this, PlayState* play) {
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = ABS(this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    
    if (!this->alarmstate && this->cantSee) {
        this->timer = 60;
        EnThefather_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate) {
        if (this->actor.xzDistToPlayer < 400.0f && this->actor.xzDistToPlayer > 300.0f) {
            if (this->actor.colChkInfo.health < Actor_EnemyHealthMultiply(60, BOSS_HP)) {
                this->timer = 92;
                EnThefather_SetupAttackL(this, play); // Jump2Fists
            } else {
                this->timer = 65;
                EnThefather_SetupAttackJ(this, play); // Jump2Fists
            }
        } else if (this->actor.xzDistToPlayer < 300.0f && this->actor.xzDistToPlayer >= 150.0f) {
            this->timer = 40;
            EnThefather_SetupAttackF(this, play); // jumpattack
        } else if (this->actor.xzDistToPlayer < 150.0f && this->actor.xzDistToPlayer >= 100.0f) {
            if (this->actor.colChkInfo.health < Actor_EnemyHealthMultiply(40, BOSS_HP)) {
                if (Rand_ZeroOne() < 0.65) {
                    this->timer = 67;
                    EnThefather_SetupAttackI(this, play); // doubledownards
                } else {
                    this->timer = 40;
                    EnThefather_SetupAttackF(this, play); // jumpattack
                }
            } else {
                this->timer = 44;
                EnThefather_SetupAttackB(this, play); // doubledownards
            }
        } else if (this->actor.xzDistToPlayer < 100.0f && this->actor.xzDistToPlayer >= 80.0f) {
            if ((Rand_ZeroOne() < 0.5) && (relYawTowardsPlayer < 1500)) {
                this->timer = 37;
                EnThefather_SetupAttackE(this, play); // bite
            } else {
                this->timer = 112;
                EnThefather_SetupAttackK(this, play); // combomoving
            }
        } else if (this->actor.xzDistToPlayer < 80.0f && this->actor.xzDistToPlayer > 60.0f) {
            if (relYawTowardsPlayer < 1500) {
                if (Rand_ZeroOne() < 0.3) {
                    this->timer = 120;
                    EnThefather_SetupAttackA(this, play); // howlthenpunish
                } else {
                    this->timer = 28;
                    EnThefather_SetupAttackMa(this, play); // grab
                }
            } else if (relYawTowardsPlayer <= 0x4000) {
                this->timer = 50;
                EnThefather_SetupAttackH(this, play); // SweepL
            } else if (relYawTowardsPlayer > 0x4000 && relYawTowardsPlayer <= 0x6000) {
                this->timer = 38;
                EnThefather_SetupAttackD(this, play); // backhandl
            } else if (relYawTowardsPlayer > 0x6000 && relYawTowardsPlayer < 0x7FFF) {
                this->timer = 38;
                EnThefather_SetupAttackC(this, play); // backhandr
            }
        } else if (this->actor.xzDistToPlayer <= 60.0f) {
            this->timer = 43;
            EnThefather_SetupAttackG(this, play); // punchRSparks
        } else if (this->actor.xzDistToPlayer >= 400.0f) {
            this->alarmstate = true;
            this->timer = 40;
            EnThefather_SetupMoveF(this, play);
        }
    }
}
void EnThefather_SetupIdle(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_IDLE);
    this->actionFunc = EnThefather_Idle;
}

void EnThefather_Idle(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        if ((ABS(this->actor.yawTowardsPlayer - this->actor.shape.rot.y) < 0x2388 || (this->actor.xzDistToPlayer < 300.0f && GET_PLAYER(play)->meleeWeaponState != 0)) && this->actor.yDistToPlayer <= 50.0f) {
            if (!this->alarmstate)
                SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_BGM_MAIN, 0, 0, NA_BGM_KOLOKTOS);

            this->timer = 0;
            this->alarmstate = true;
            EnThefather_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 39;
        EnThefather_SetupIdle(this, play);
    }
}

void EnThefather_SetupHurt(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_HURT);
    this->actionFunc = EnThefather_Hurt;
}

void EnThefather_Hurt(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        this->timer -= 1;
        this->actor.speed = 0;
    }
    if (this->timer <= 0)
        EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupMoveF(EnThefather* this, PlayState* play) {
    this->actionFunc = EnThefather_MoveF;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_WALK);
}

void EnThefather_MoveF(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);

    if (this->timer > 0 && this->actor.xzDistToPlayer >= 80.0f) {
        this->actor.speed = 3.0f;
        this->timer -= 1;

        if (this->skelAnime.curFrame == 14.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 34.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        }

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
            this->actor.world.pos = this->actor.prevPos;
    } else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackA(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKA);
    this->actionFunc = EnThefather_AttackA;
}

void EnThefather_AttackA(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if ((this->skelAnime.curFrame >= 92.0f && this->skelAnime.curFrame < 103.0f) || (this->skelAnime.curFrame >= 85.0f && this->skelAnime.curFrame < 90.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }

    if (this->skelAnime.curFrame == 87.0f || this->skelAnime.curFrame == 99.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    else if (this->skelAnime.curFrame == 42.0f && this->screamcountdown <= 0)
        EnThefather_Scream(this, play);

    if (this->skelAnime.curFrame > 85.0f && this->skelAnime.curFrame < 96.0f) {
        if (this->skelAnime.curFrame == 90) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 6, 13);
        }
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x10;
    } else if (this->skelAnime.curFrame > 96.0f && this->skelAnime.curFrame < 93.0f) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
    } else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackB(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKB);
    this->actionFunc = EnThefather_AttackB;
}

void EnThefather_AttackB(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if ((this->skelAnime.curFrame >= 24.0f && this->skelAnime.curFrame < 32.0f) || (this->skelAnime.curFrame >= 34.0f && this->skelAnime.curFrame < 45.0f)) {
        this->actor.speed = 6;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        if (this->skelAnime.curFrame == 31.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 43.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        }
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 16.0f && this->screamcountdown <= 0)
        EnThefather_Scream(this, play);
    else if ((this->skelAnime.curFrame == 22.0f) || (this->skelAnime.curFrame == 28.0f))
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    
    if ((this->skelAnime.curFrame > 18.0f) && (this->skelAnime.curFrame < 24.0f)) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
    }

    if ((this->skelAnime.curFrame > 27.0f) && (this->skelAnime.curFrame < 35.0f)) {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackC(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKC);
    this->actionFunc = EnThefather_AttackC;
}

void EnThefather_AttackC(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 3.0f && this->skelAnime.curFrame < 15.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x1FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x1FF, 1);
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 13.0f && this->screamcountdown <= 0.0f) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }

    if (this->skelAnime.curFrame >= 11.0f && this->skelAnime.curFrame < 16.0f) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackD(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKD);
    this->actionFunc = EnThefather_AttackD;
}

void EnThefather_AttackD(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 3.0f && this->skelAnime.curFrame < 15.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 13.0f && this->screamcountdown <= 0) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }

    if (this->skelAnime.curFrame >= 11.0f && this->skelAnime.curFrame < 16.0f) {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackE(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKE);
    this->actionFunc = EnThefather_AttackE;
}

void EnThefather_AttackE(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 3.0f && this->skelAnime.curFrame < 15.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 13.0f && this->screamcountdown <= 0) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEKU_MOUTH);
    }

    if (this->skelAnime.curFrame >= 12.0f && this->skelAnime.curFrame < 17.0f) {
        this->colliderSpheres.elements[0].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[0].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[0].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[0].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[0].base.atDmgInfo.hitSpecialEffect = 0x00;
        this->colliderSpheres.elements[0].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackF(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKF);
    this->actionFunc = EnThefather_AttackF;
}

void EnThefather_AttackF(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 1.0f && this->skelAnime.curFrame < 12.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    } else if (this->skelAnime.curFrame >= 12 && this->skelAnime.curFrame < 28)
        this->actor.speed = 1 + (this->actor.xzDistToPlayer * 0.1);
    else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 16.0f && this->screamcountdown <= 0)
        EnThefather_Scream(this, play);
    else if (this->skelAnime.curFrame == 13.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);

    if (this->skelAnime.curFrame >= 24.0f && this->skelAnime.curFrame < 29.0f) {
        if (this->skelAnime.curFrame == 27) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackG(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKG);
    this->actionFunc = EnThefather_AttackG;
}

void EnThefather_AttackG(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 1.0f && this->skelAnime.curFrame < 12.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    }

    if (this->skelAnime.curFrame == 22.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    else if (this->skelAnime.curFrame == 11.0f && this->screamcountdown <= 0)
        EnThefather_Scream(this, play);

    if (this->skelAnime.curFrame >= 21.0f && this->skelAnime.curFrame < 35.0f) {
        if (this->skelAnime.curFrame == 24.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        } else CollisionCheck_SpawnShieldParticlesMetal(play, &this->handR);
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0) {
        this->actor.speed = 0;
        this->timer -= 1;
    } else EnThefather_ForwardBackCheck(this, play);
}
void EnThefather_SetupAttackH(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKH);
    this->actionFunc = EnThefather_AttackH;
}

void EnThefather_AttackH(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 1.0f && this->skelAnime.curFrame < 12.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    } else if (this->skelAnime.curFrame == 22.0f && this->screamcountdown <= 0) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }

    if (this->skelAnime.curFrame >= 24.0f && this->skelAnime.curFrame < 33.0f) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x10;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0) {
        this->actor.speed = 0;
        this->timer -= 1;
    } else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackJ(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKJ);
    this->actionFunc = EnThefather_AttackJ;
}

void EnThefather_AttackJ(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 1.0f && this->skelAnime.curFrame < 32.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 0;
        if (this->skelAnime.curFrame == 31.0f)
            this->actor.velocity.y = 10;
        else if (this->skelAnime.curFrame == 44.0f && this->screamcountdown <= 0)
            EnThefather_Scream(this, play);
    } else if (this->skelAnime.curFrame >= 32.0f && this->skelAnime.curFrame < 60.0f) {
        if (this->skelAnime.curFrame >= 32.0f && this->skelAnime.curFrame < 45.0f)
            this->actor.velocity.y = 10;
        this->actor.speed = (this->actor.xzDistToPlayer * 0.1);
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 55)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);

    if ((this->skelAnime.curFrame >= 58.0f) && (this->skelAnime.curFrame < 63.0f)) {
        if (this->skelAnime.curFrame == 60) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0x00;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0x00;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }
    
    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackI(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKI);
    this->actionFunc = EnThefather_AttackI;
}

void EnThefather_AttackI(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 9.0f && this->skelAnime.curFrame < 41.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);

        this->actor.speed = 5;
        if (this->skelAnime.curFrame == 21) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 39) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 22.0f || this->skelAnime.curFrame == 32.0f || this->skelAnime.curFrame == 45.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);

    if ((this->skelAnime.curFrame >= 18.0f) && (this->skelAnime.curFrame < 26.0f)) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
    } else if (this->skelAnime.curFrame >= 28.0f && this->skelAnime.curFrame < 35.0f) {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x20;
    } else if (this->skelAnime.curFrame >= 40.0f && this->skelAnime.curFrame < 49.0f) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
    } else if (this->skelAnime.curFrame >= 53.0f && this->skelAnime.curFrame < 58.0f) {
        this->colliderSpheres.elements[0].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[0].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[0].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[0].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[0].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[0].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackK(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKK);
    this->actionFunc = EnThefather_AttackK;
}

void EnThefather_AttackK(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if ((this->skelAnime.curFrame >= 26.0f && this->skelAnime.curFrame < 35.0f) || (this->skelAnime.curFrame >= 59.0f && this->skelAnime.curFrame < 76.0f) || (this->skelAnime.curFrame >= 90.0f && this->skelAnime.curFrame < 96.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        if (this->skelAnime.curFrame == 72.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 94.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }

        if ((this->skelAnime.curFrame >= 59.0f && this->skelAnime.curFrame < 76.0f) || (this->skelAnime.curFrame >= 90.0f && this->skelAnime.curFrame < 96.0f))
            this->actor.speed = 4;
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 67.0f || this->skelAnime.curFrame == 94.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);

    if (this->skelAnime.curFrame >= 26.0f && this->skelAnime.curFrame < 37.0f) {
        if (this->skelAnime.curFrame == 31.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        } else if (this->skelAnime.curFrame == 32.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handL, 10.0f, 3, 2.0f, 250, 150, false);
        }
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x20;
    } else if (this->skelAnime.curFrame >= 65.0f && this->skelAnime.curFrame < 69.0f) {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
    } else if (this->skelAnime.curFrame >= 90.0f && this->skelAnime.curFrame < 97.0f) {
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackL(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKL);
    this->actionFunc = EnThefather_AttackL;
}

void EnThefather_AttackL(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame >= 1.0f && this->skelAnime.curFrame < 32.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 0;
    } else if (this->skelAnime.curFrame >= 32.0f && this->skelAnime.curFrame < 59.0f) {
        if (this->skelAnime.curFrame >= 32.0f && this->skelAnime.curFrame < 45.0f) 
            this->actor.velocity.y = 10;
        this->actor.speed = (this->actor.xzDistToPlayer * 0.06);
    } else if ((this->skelAnime.curFrame >= 73.0f && this->skelAnime.curFrame < 80.0f) || (this->skelAnime.curFrame >= 83.0f && this->skelAnime.curFrame < 92.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 5.0f;
        if (this->skelAnime.curFrame == 79.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 91.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }
    } else this->actor.speed = 0;

    if (this->skelAnime.curFrame == 55.0f || this->skelAnime.curFrame == 70.0f || this->skelAnime.curFrame == 88.0f)
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);

    if (this->skelAnime.curFrame >= 58.0f && this->skelAnime.curFrame < 88.0f) {
        if (this->skelAnime.curFrame == 60.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->handR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->footR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0x20;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 4;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0x20;
    } else {
        this->colliderSpheres.elements[1].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].base.atDmgInfo.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].base.atDmgInfo.hitSpecialEffect = 0x00;
        this->colliderSpheres.elements[1].base.atDmgInfo.damage = 0;
        this->colliderSpheres.elements[2].base.atDmgInfo.hitSpecialEffect = 0x00;
        this->colliderSpheres.elements[2].base.atDmgInfo.damage = 0;
    }

    if (this->timer > 0)
        this->timer -= 1;
    else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackMa(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKM);
    this->actionFunc = EnThefather_AttackMa;
}

void EnThefather_AttackMa(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }

    if (this->timer > 0) {
        if ((this->skelAnime.curFrame == 22.0f) && (this->screamcountdown <= 0))
            EnThefather_Scream(this, play);

        this->actor.speed = 0.0f;
        if (this->skelAnime.curFrame >= 22.0f && this->actor.xzDistToPlayer <= 90 && ABS(this->actor.yawTowardsPlayer - this->actor.shape.rot.y) < 0x1000) {
            this->actor.speed = 0.0f;
            this->timer = 71;
            EnThefather_SetupAttackMb(this, play);
            GET_PLAYER(play)->invincibilityTimer = 0;
        }
        this->timer -= 1;
    } else {
        this->timer = 35;
        EnThefather_SetupAttackMc(this, play);
    }
}

void EnThefather_SetupAttackMb(EnThefather* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKMHIT);
    this->actionFunc = EnThefather_AttackMb;

    play->grabPlayer(play, player);
    player->actor.parent = &this->actor;
    this->actor.child = &player->actor;
}

void EnThefather_AttackMb(EnThefather* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos;
    Vec3f result = EnThefather_VectorBetween(this->handR, this->handL);

    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;

    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame == 40) {
        play->damagePlayer(play, -0x30);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }

    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
        if (this->skelAnime.curFrame < 40) {
            player->actor.world.pos.x = this->handL.x;
            player->actor.world.pos.z = this->handL.z;
            player->actor.world.pos.y = this->handL.y - 20;
        }
        if (this->skelAnime.curFrame == 30.0f && this->screamcountdown <= 0)
            EnThefather_Scream(this, play);

        if (this->skelAnime.curFrame == 40 || this->actionFunc == EnThefather_Death) {
            player->actor.parent = NULL;
            this->actor.child = NULL;
            Actor_SetPlayerKnockbackLargeNoDamage(play, &this->actor, 10.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    } else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_SetupAttackMc(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKMMISS);
    this->actionFunc = EnThefather_AttackMc;
}

void EnThefather_AttackMc(EnThefather* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

    } else EnThefather_ForwardBackCheck(this, play);
}

void EnThefather_Scream(EnThefather* this, PlayState* play) {
    f32 rand = Rand_ZeroOne();

    this->screamcountdown = 100;

    if (rand < 0.4)
        Actor_PlaySfx(&this->actor, NA_SE_EN_BLACKBEAST_SCREAM1);
    else if (rand < 0.7)
        Actor_PlaySfx(&this->actor, NA_SE_EN_BLACKBEAST_SCREAM2);
    else Actor_PlaySfx(&this->actor, NA_SE_EN_BLACKBEAST_SCREAM3);
}
