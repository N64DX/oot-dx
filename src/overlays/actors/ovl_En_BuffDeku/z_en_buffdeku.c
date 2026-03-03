/*
 * File: z_en_buffedeku.c
 * Overlay: ovl_En_BuffDeku
 * Description: Really Fucking Buff Mad Scrub
 * How to spawn: set the params of a regular scrub to 0xXX80. When hit, it'll disappear and spawn the buff scrub.
  * Author: CLeSeducteur
 */

#include "z_en_buffdeku.h"
#include "overlays/effects/ovl_Effect_Ss_Hahen/z_eff_ss_hahen.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "gfx.h"
#include "ichain.h"
#include "segmented_address.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_en_item00.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "player.h"
#include "audio.h"
#include "save.h"

#include "assets/objects/object_buffdeku/object_buffdeku.h"
#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

#define FLAGS (ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnBuffDeku_Init(Actor* thisx, PlayState* play);
void EnBuffDeku_Destroy(Actor* thisx, PlayState* play);
void EnBuffDeku_Update(Actor* thisx, PlayState* play);
void EnBuffDeku_Draw(Actor* thisx, PlayState* play);

void EnBuffDeku_SetupWaitGetOutGround(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_WaitGetOutGround(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupGetOutGround(EnBuffDeku* this);
void EnBuffDeku_GetOutGround(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupBehaviour(EnBuffDeku* this);
void EnBuffDeku_Behaviour(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupPunch(EnBuffDeku* this);
void EnBuffDeku_Punch(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupTaunt(EnBuffDeku* this);
void EnBuffDeku_Taunt(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupDeath(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_Death(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupSpin(EnBuffDeku* this);
void EnBuffDeku_Spin(EnBuffDeku* this, struct PlayState* play);
bool EnBuffDeku_ShouldPanic(EnBuffDeku* this, struct PlayState* play);
void EnBuffDeku_SetupPanic(EnBuffDeku* this);
void EnBuffDeku_Panic(EnBuffDeku* this, struct PlayState* play);
Actor* EnBuffDeku_SpawnAssists(EnBuffDeku* this, PlayState* play);

static bool isHyper;
static Actor* spawnedAssists[3] = { NULL, NULL, NULL };
static u16 spawnType[]   = {    0, ACTOR_EN_IK, ACTOR_EN_DINOFOS, ACTOR_EN_TEST, ACTOR_EN_ZF,    0 };
static u16 spawnParams[] = {    0,      0xFF06,           0xFF00,        0x0003,      0xFFFF,    0 };
static u8 spawnNum[]     = {    0,           2,                3,             2,           2,    0 }; 
static f32 moveSpeed[]   = { 1.5f,        3.0f,            2.50f,          2.0f,       1.75f, 1.5f };
static Vec3f cameraAt;

ActorProfile En_BuffDeku_Profile = {
    /**/ ACTOR_EN_BUFFDEKU,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_BUFFDEKU,
    /**/ sizeof(EnBuffDeku),
    /**/ EnBuffDeku_Init,
    /**/ EnBuffDeku_Destroy,
    /**/ EnBuffDeku_Update,
    /**/ EnBuffDeku_Draw,
};

static CollisionCheckInfoInit sColChkInfoInit = { 1, 18, 32, MASS_IMMOVABLE };

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, 0x1),
    /* Deku stick    */ DMG_ENTRY(2, 0x0),
    /* Slingshot     */ DMG_ENTRY(1, 0x0),
    /* Explosive     */ DMG_ENTRY(2, 0x0),
    /* Boomerang     */ DMG_ENTRY(1, 0x0),
    /* Normal arrow  */ DMG_ENTRY(2, 0x0),
    /* Hammer swing  */ DMG_ENTRY(2, 0x0),
    /* Hookshot      */ DMG_ENTRY(2, 0x0),
    /* Kokiri sword  */ DMG_ENTRY(1, 0x0),
    /* Master sword  */ DMG_ENTRY(2, 0x0),
    /* Giant's Knife */ DMG_ENTRY(4, 0x0),
    /* Fire arrow    */ DMG_ENTRY(4, 0x2),
    /* Ice arrow     */ DMG_ENTRY(2, 0x3),
    /* Light arrow   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(2, 0x0),
    /* Fire magic    */ DMG_ENTRY(4, 0x2),
    /* Ice magic     */ DMG_ENTRY(0, 0x3),
    /* Light magic   */ DMG_ENTRY(0, 0x0),
    /* Shield        */ DMG_ENTRY(0, 0x0),
    /* Mirror Ray    */ DMG_ENTRY(0, 0x0),
    /* Kokiri spin   */ DMG_ENTRY(1, 0x0),
    /* Giant spin    */ DMG_ENTRY(4, 0x0),
    /* Master spin   */ DMG_ENTRY(2, 0x0),
    /* Kokiri jump   */ DMG_ENTRY(2, 0x0),
    /* Giant jump    */ DMG_ENTRY(8, 0x0),
    /* Master jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 1     */ DMG_ENTRY(0, 0x0),
    /* Unblockable   */ DMG_ENTRY(0, 0x0),
    /* Hammer jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 2     */ DMG_ENTRY(0, 0x0),
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_HIT6,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 28, 60, 0, { 0, 0, 0 } },
};

static ColliderJntSphElementInit sJntSphItemsInit[4] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x04, 0x28 }, //0x01 : fire, 0x02: ice, 0x03 :thunder, 0x04: 
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_HAND_L_LIMB, { { 0, 0, 0 }, 30 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x04 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_HAND_R_LIMB, { { 0, 0, 0 }, 30 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_FOREARM_L_LIMB, { { 0, 0, 0 }, 30 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_FOREARM_R_LIMB, { { 0, 0, 0 }, 30 }, 100 },
    },
};

static ColliderJntSphElementInit sJntSphItemsInitBoss[4] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x04, 0x40 }, //0x01 : fire, 0x02: ice, 0x03 :thunder, 0x04: 
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_HAND_L_LIMB, { { 0, 0, 0 }, 30 }, 200 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x04 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_HAND_R_LIMB, { { 0, 0, 0 }, 30 }, 200 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_FOREARM_L_LIMB, { { 0, 0, 0 }, 30 }, 200 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            ATELEM_NONE,
            ACELEM_ON,
            OCELEM_ON,
        },
        { BUFFDEKUSKEL_FOREARM_R_LIMB, { { 0, 0, 0 }, 30 }, 200 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_HIT6,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON |  AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphItemsInit),
    sJntSphItemsInit,
};

static ColliderJntSphInit sJntSphInitBoss = {
    {
        COL_MATERIAL_HIT6,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON |  AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphItemsInitBoss),
    sJntSphItemsInitBoss,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(gravity, -1, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 2600, ICHAIN_STOP),
};

void EnBuffDeku_Init(Actor* thisx, PlayState* play) {
	EnBuffDeku* this = (EnBuffDeku*)thisx;
    isHyper = play->sceneId == SCENE_WOODFALL_TEMPLE_BOSS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
	this->timer = 0;
    this->panicTest = false;
    this->playerHit = false;
    this->actor.gravity = -1.0f;
    this->onFire = false;
    this->actor.naviEnemyId = isHyper ? NAVI_ENEMY_KING_DEKU : NAVI_ENEMY_BUFF_SCRUB;
    this->dekuStickCooldownTimer = 0;
    
    if ((this->actor.params & 0x20))
         this->switchFlag = this->actor.params & 0x1F;
    else this->switchFlag = 0xFF;

	ActorShape_Init(&thisx->shape, 0.0f, ActorShadow_DrawCircle, 40.0f);

    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, thisx, isHyper ? &sJntSphInitBoss : &sJntSphInit, this->colliderSpheresElements);
    Collider_InitCylinder(play, &this->colliderBody);
    Collider_SetCylinder(play, &this->colliderBody, &this->actor, &sCylinderInit);

    this->colliderBody.base.acFlags &= ~AC_ON;
    this->colliderSpheres.base.acFlags &= ~AC_ON;
    this->colliderSpheres.base.atFlags &= ~AT_ON;

	CollisionCheck_SetInfo(&thisx->colChkInfo, &sDamageTable, &sColChkInfoInit);
    SkelAnime_InitFlex(play, &this->skelAnime, &BuffDekuSkel, &BuffDekuSkelGetoutgroundAnim, this->jointTable, this->morphTable, BUFFDEKUSKEL_NUM_LIMBS);
	EnBuffDeku_SetupWaitGetOutGround(this, play);

    if (isHyper) {
        this->actor.colChkInfo.health = 5;
        Actor_SetScale(thisx, 0.02f);
        this->actor.flags |= ACTOR_FLAG_DRAW_CULLING_DISABLED;
        Flags_SetSwitch(play, 0x10);
    }
}

void EnBuffDeku_Destroy(Actor* thisx, PlayState* play) {
	EnBuffDeku* this = (EnBuffDeku*)thisx;
	
	SkelAnime_Free(&this->skelAnime, play);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
    Collider_DestroyCylinder(play, &this->colliderBody);
    
    if (this->actor.params & 0x40)
        func_800F5B58();
}

bool EnBuffDeku_ShouldPanic(EnBuffDeku* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Actor* actor;
    actor = play->actorCtx.actorLists[ACTORCAT_ITEMACTION].head;

    while (actor != NULL) {
        if (actor->id == ACTOR_ARROW_FIRE)
            return true;
        actor = actor->next;
    }

    if ( (player->heldItemAction == PLAYER_IA_DEKU_STICK) && (player->unk_860 != 0))
        return true;

    return false;
}

void EnBuffDeku_ColliderCheck(EnBuffDeku* this, PlayState* play) {
    if (this->colliderSpheres.base.atFlags & AT_HIT)
        this->playerHit = true;

    if ((this->colliderBody.base.acFlags & AC_HIT) || (this->colliderSpheres.base.acFlags & AC_HIT))  {
        this->colliderSpheres.base.acFlags &= ~AC_HIT;
        this->colliderBody.base.acFlags &= ~AC_HIT;
        if (this->actor.colChkInfo.damageReaction == 2) { // Fire damage
            this->actor.colChkInfo.health--;
            if (this->actor.colChkInfo.health == 0) // Death
                EnBuffDeku_SetupDeath(this, play);
            else {
                Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 8);
                Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DAMAGE);
            }
        }
    }
}

void EnBuffDeku_Update(Actor* thisx, PlayState* play) {
	EnBuffDeku* this = (EnBuffDeku*)thisx;

    thisx->shape.rot.y = thisx->world.rot.y;

	EnBuffDeku_ColliderCheck(this, play);
    this->actionFunc(this, play);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 20.0f, this->colliderBody.dim.radius,  this->colliderBody.dim.height,  UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2 |  UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);


    Collider_UpdateCylinder(&this->actor, &this->colliderBody);

    if (this->colliderBody.base.acFlags & AC_ON) {
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderBody.base);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSpheres.base);
    }

    if (this->colliderSpheres.base.atFlags & AT_ON)
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);

    CollisionCheck_SetOC(play, &play->colChkCtx, &this->colliderBody.base);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->colliderSpheres.base);

    if (isHyper) {
        u8 i;

        if (spawnedAssists[0] == NULL && spawnedAssists[1] == NULL && spawnedAssists[2] == NULL && !Flags_GetSwitch(play, 0x10))
            Flags_SetSwitch(play, 0x10);

        for (i=0; i<ARRAY_COUNT(spawnedAssists); i++)
            if (spawnedAssists[i] != NULL && spawnedAssists[i]->update == NULL)
                spawnedAssists[i] = NULL;
    }

    /* Panic mode */
    if (EnBuffDeku_ShouldPanic(this,play) && (this->colliderBody.base.acFlags & AC_ON) )
        EnBuffDeku_SetupPanic(this);
    else if (this->actionFunc == EnBuffDeku_Panic)
        EnBuffDeku_SetupBehaviour(this);

    if (this->dekuStickCooldownTimer > 0)
        this->dekuStickCooldownTimer--;
}

void EnBuffDeku_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnBuffDeku* this = (EnBuffDeku*)thisx;
	Vec3f src = { 0.0f, 10.0f, 0.0f };
    Vec3f dest;
    s32 bodyPartIndex = -1;
    static Vec3f bodyPartVec = { 1.0f, 1.0f, 1.0f };

    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);

    switch (limbIndex) {
        case BUFFDEKUSKEL_HEAD_LIMB: // Focus
            Matrix_MultVec3f(&src, &dest);
            this->actor.focus.pos.x = dest.x;
            this->actor.focus.pos.y = dest.y;
            this->actor.focus.pos.z = dest.z;
            break;
        default:
            break;
    }

    if (this->onFire) {
        switch (limbIndex) {
            case BUFFDEKUSKEL_HEAD_LIMB:
                bodyPartIndex = 0;
                break;
            case BUFFDEKUSKEL_HAND_L_LIMB:
                bodyPartIndex = 1;
                break;
            case BUFFDEKUSKEL_HAND_R_LIMB:
                bodyPartIndex = 2;
                break;
            case BUFFDEKUSKEL_SHOULDER_R_LIMB:
                bodyPartIndex = 3;
                break;
            case BUFFDEKUSKEL_SHOULDER_L_LIMB:
                bodyPartIndex = 4;
                break;
            case BUFFDEKUSKEL_TORSO_LIMB:
                bodyPartIndex = 5;
                break;
            case BUFFDEKUSKEL_THIGH_R_LIMB:
                bodyPartIndex = 6;
                break;
            case BUFFDEKUSKEL_THIGH_L_LIMB:
                bodyPartIndex = 7;
                break;
            default:
                break;
        }

        if (bodyPartIndex >= 0) {
            Matrix_MultVec3f(&src, &dest);
            this->bodyPartsPos[bodyPartIndex].x = dest.x;
            this->bodyPartsPos[bodyPartIndex].y = dest.y;
            this->bodyPartsPos[bodyPartIndex].z = dest.z;
        }
    }
}

void EnBuffDeku_Draw(Actor* thisx, PlayState* play) {
	EnBuffDeku* this = (EnBuffDeku*)thisx;

    Gfx* gfx = play->state.gfxCtx->polyOpa.p + 1;
    gSPDisplayList(play->state.gfxCtx->overlay.p++, gfx);
    gSPEndDisplayList(gfx++);
    gSPBranchList(play->state.gfxCtx->polyOpa.p, gfx);
    play->state.gfxCtx->polyOpa.p = gfx;
    OPEN_DISPS(play->state.gfxCtx, "../z_en_buffdeku.c", 369);
	SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL, EnBuffDeku_PostLimbDraw, this);

    if (this->onFire) {
        u8 i;
        for (i = 0; i <= 2; i++) 
            EffectSsEnFire_SpawnVec3f(play, &this->actor, &this->bodyPartsPos[Rand_S16Offset(0,8)], 0x8C, 0, 0, -1);
    }

    CLOSE_DISPS(play->state.gfxCtx, "", 0);
}

void EnBuffDeku_SetupWaitGetOutGround(EnBuffDeku* this, PlayState* play) {
	Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelGetoutgroundAnim, -3.0f);
	this->actionFunc = EnBuffDeku_WaitGetOutGround;
    
    if (isHyper && !GET_EVENTCHKINF(EVENTCHKINF_BEGAN_KING_DEKU_BATTLE)) {
        Player* player = GET_PLAYER(play);
        Vec3f eye = { 0.0f, 50.0f, 200.0f };

        this->subCamId = Play_CreateSubCamera(play);
        Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
        Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
        Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
        this->actor.world.rot.y = this->actor.shape.rot.y = 0;
        player->actor.world.rot.y = player->actor.shape.rot.y = 0x8000;
        player->actor.world.pos.x = player->actor.world.pos.y = 0;
        player->actor.world.pos.z = 150;
        Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_5);
        Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);
#if OOT_NTSC_N64
        TitleCard_InitBossName(play, &play->actorCtx.titleCtx, SEGMENTED_TO_VIRTUAL((gSaveContext.language == LANGUAGE_JPN) ? gKingDekuTitleCardTex : gKingDekuTitleCardPalTex), 160, 180, 128, 40);
#else
        TitleCard_InitBossName(play, &play->actorCtx.titleCtx, SEGMENTED_TO_VIRTUAL(gKingDekuTitleCardPalTex), 160, 180, 128, 40);
#endif
    }
}

void EnBuffDeku_WaitGetOutGround(EnBuffDeku* this, PlayState* play) {
	this->timer++;
	if (this->timer >= 20) {
		EnBuffDeku_SetupGetOutGround(this);
		this->timer = 0;
	}
}

void EnBuffDeku_SetupGetOutGround(EnBuffDeku* this) {
	this->actionFunc = EnBuffDeku_GetOutGround;
}

void EnBuffDeku_GetOutGround(EnBuffDeku* this, PlayState* play) {
	SkelAnime_Update(&this->skelAnime);

    if (isHyper && !GET_EVENTCHKINF(EVENTCHKINF_BEGAN_KING_DEKU_BATTLE) && this->skelAnime.curFrame == 40) {
        Vec3f eye = { 0.0f, 200.0f, 200.0f };
        Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
    }

	if (this->skelAnime.curFrame == 7 || this->skelAnime.curFrame == 25 || this->skelAnime.curFrame == 47)
		Actor_PlaySfx(&this->actor, NA_SE_EV_EARTHQUAKE); //rumble 7, 25, 47
    else if (this->skelAnime.curFrame == 17  || this->skelAnime.curFrame == 35) { 
		Audio_StopSfxById(NA_SE_EV_EARTHQUAKE);
		Actor_PlaySfx(&this->actor,NA_SE_EN_IRONNACK_BREAK_PILLAR2); // Big sound 17, 35
	} else if (this->skelAnime.curFrame == 28 || this->skelAnime.curFrame == 44)
		Actor_PlaySfx(&this->actor,NA_SE_EN_DODO_J_WALK); // Touch ground hand 28, 44
    else if (this->skelAnime.curFrame == 60) {
		Audio_StopSfxById(NA_SE_EV_EARTHQUAKE);
		Actor_PlaySfx(&this->actor,NA_SE_EN_DODO_J_WALK); // Stop it + step
	} else if (this->skelAnime.curFrame == Animation_GetLastFrame(&BuffDekuSkelGetoutgroundAnim)) {
		EnBuffDeku_SetupBehaviour(this);
        if ((this->actor.params & 0x40)) {
            func_800F5ACC(isHyper ? NA_BGM_BOSS2 : NA_BGM_MINI_BOSS2);
            if (isHyper & !GET_EVENTCHKINF(EVENTCHKINF_BEGAN_KING_DEKU_BATTLE)) {
                Play_ClearCamera(play, this->subCamId);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
                Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_7);
                Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_ALL);
                SET_EVENTCHKINF(EVENTCHKINF_BEGAN_KING_DEKU_BATTLE);
            }
        }
	}
}

void EnBuffDeku_SetupBehaviour(EnBuffDeku* this) {
	Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelWalkcycleAnim , -3.0f);
	this->actor.flags |=  ACTOR_FLAG_ATTENTION_ENABLED ;
    this->colliderBody.base.acFlags |= AC_ON;
    this->colliderSpheres.base.acFlags |= AC_ON;
    this->panicTest = false;
	this->actionFunc = EnBuffDeku_Behaviour;
}

void EnBuffDeku_Behaviour(EnBuffDeku* this, PlayState* play) {

	SkelAnime_Update(&this->skelAnime);
    
    if ( ABS((s16) this->actor.yawTowardsPlayer - this->actor.world.rot.y) > 0x4000 ) {
        if (this->actor.xzDistToPlayer <= 100.0f)
            EnBuffDeku_SetupSpin(this);
        this->actor.speed = 0.0f;
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xE38, 0x0);
    }
    else {
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x310, 0x0);
        if (this->actor.xzDistToPlayer <= 90.0f)
            EnBuffDeku_SetupPunch(this); //setupAttack
        else this->actor.speed = (isHyper ? moveSpeed[this->actor.colChkInfo.health] : 1.5f); //Walk
    }

    if ((this->skelAnime.curFrame == 3) || (this->skelAnime.curFrame == 12))
        Actor_PlaySfx(&this->actor,NA_SE_EN_DODO_J_WALK);
}

void EnBuffDeku_SetupPunch(EnBuffDeku* this) {
    Animation_MorphToPlayOnce(&this->skelAnime, &BuffDekuSkelPunchAnim, -3.0f);
    this->actor.speed = 0.5f;
    this->actionFunc = EnBuffDeku_Punch;
}

void EnBuffDeku_Punch(EnBuffDeku* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xF6, 0x0);

    if (this->skelAnime.curFrame == 8) {
        this->colliderSpheres.base.atFlags |= AT_ON;
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    else if (this->skelAnime.curFrame == 16)
        this->colliderSpheres.base.atFlags &= ~AT_ON;
    else if (this->skelAnime.curFrame == Animation_GetLastFrame( &BuffDekuSkelPunchAnim )) {
        if (this->playerHit) {
            this->playerHit = false;
            EnBuffDeku_SetupTaunt(this);
        }
        else EnBuffDeku_SetupBehaviour(this);
    }
}

void EnBuffDeku_SetupTaunt(EnBuffDeku* this) {
    switch ( Rand_S16Offset(0,4)) {
        case 0 : 
            Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelTaunt1Anim , -3.0f);
            break;
        case 1 : 
            Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelTaunt2Anim , -3.0f);
            break;
        case 2 : 
            Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelTaunt3Anim , -3.0f);
            break; 
        case 3 : 
            Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelTaunt4Anim , -3.0f);
            break;
        default: //okazou
            Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelTaunt1Anim , -3.0f);
            break;
    }
    this->timer = 0;
    this->actor.speed = 0.0f;
    Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DAMAGE);
    this->actionFunc = EnBuffDeku_Taunt;
}

void EnBuffDeku_Taunt(EnBuffDeku* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame == Animation_GetLastFrame( &BuffDekuSkelTaunt1Anim )) {
        this->timer++;
        if (this->timer == 5)
            EnBuffDeku_SetupBehaviour(this);
    }
}

void EnBuffDeku_SetupSpin(EnBuffDeku* this) {
    this->actor.speed = 0.5f;
    this->timer = 0;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelSpinAnim, -4.0f);
    this->actionFunc = EnBuffDeku_Spin;
}

void EnBuffDeku_Spin(EnBuffDeku* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame == 5)
        this->colliderSpheres.base.atFlags |= AT_ON;
    else if (this->skelAnime.curFrame == Animation_GetLastFrame( &BuffDekuSkelSpinAnim )) {
		this->timer++;
        if (this->timer == 2) {
            this->colliderSpheres.base.atFlags &= ~AT_ON;
            EnBuffDeku_SetupBehaviour(this);
        }
	}
}

void EnBuffDeku_SetupDeath(EnBuffDeku* this, PlayState* play) {
    this->actor.speed = 0.0f;
    this->onFire = true;
    Animation_MorphToPlayOnce(&this->skelAnime, &BuffDekuSkelDeathAnim, -3.0f);
    this->actionFunc = EnBuffDeku_Death;
    Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DEAD);
    if (isHyper) {
        Player* player = GET_PLAYER(play);
        Vec3f eye = { 0.0f, 200.0f, 200.0f };

        this->skelAnime.playSpeed = 0.75f;

        this->subCamId = Play_CreateSubCamera(play);
        Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
        Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
        Play_SetCameraAtEye(play, this->subCamId, &cameraAt, &eye);
        this->actor.world.rot.y = this->actor.shape.rot.y = 0;
        player->actor.world.rot.y = player->actor.shape.rot.y = 0x8000;
        player->actor.world.pos.x = player->actor.world.pos.y = this->actor.world.pos.x = this->actor.world.pos.y = this->actor.world.pos.z = 0;;
        player->actor.world.pos.z = 100;
        Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_5);
        Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);
        
        func_800F5ACC(NA_BGM_BOSS_CLEAR);
    }
}

void EnBuffDeku_Death(EnBuffDeku* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame == Animation_GetLastFrame(&BuffDekuSkelDeathAnim)) {
        if (isHyper) {
            u8 i;

            Flags_SetClear(play, 1);
            Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_DOOR_WARP1, 0.0f, 0.0f, 0.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
            Actor_Spawn(&play->actorCtx, play, ACTOR_ITEM_B_HEART, 100.0f, 0.0f, 0.0f, 0, 0, 0, 0);

            for (i=0; i<ARRAY_COUNT(spawnedAssists); i++)
                if (spawnedAssists[i] != NULL) {
                    Actor_Kill(spawnedAssists[i]);
                    spawnedAssists[1] = NULL;
                }

            Play_ClearCamera(play, this->subCamId);
            Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
            Player_SetCsAction(play, &this->actor, PLAYER_CSACTION_7);
            Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_ALL);
        } else if (this->switchFlag != 0xFF)
            Flags_SetSwitch(play, this->switchFlag);
        Actor_Kill(&this->actor);
    }
}

void EnBuffDeku_SetupPanic(EnBuffDeku* this) {
    if (!this->panicTest) {
        this->panicTest = true;
        Animation_MorphToLoop(&this->skelAnime, &BuffDekuSkelPanicAnim , -3.0f);
        this->actionFunc = EnBuffDeku_Panic;
    }
}

void EnBuffDeku_Panic(EnBuffDeku* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame == 0)
        	Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_FAINT);

    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xE38, 0x0);
    if (this->actor.xzDistToPlayer <= 500.0f)
        this->actor.speed = -4.5f;
    else this->actor.speed = 0.0f;

    if (Player_IsBurningStickInRange(play, &this->actor.world.pos, 70.0f, 50.0f) != 0 && this->dekuStickCooldownTimer == 0) {
        this->dekuStickCooldownTimer = ONE_SEC;
        this->actor.colChkInfo.health--;
        if (this->actor.colChkInfo.health == 0) // Death
            EnBuffDeku_SetupDeath(this, play);
        else {
            Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 8);
            Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DAMAGE);
            if (isHyper) {
                u8 i;
                Flags_UnsetSwitch(play, 0x10);
                GET_PLAYER(play)->unk_860 = 0;

                for (i=0; i<ARRAY_COUNT(spawnedAssists); i++)
                    if (spawnedAssists[i] != NULL) {
                        Actor_Kill(spawnedAssists[i]);
                        spawnedAssists[1] = NULL;
                    }

                for (i=0; i<spawnNum[this->actor.colChkInfo.health]; i++)
                    spawnedAssists[i] = EnBuffDeku_SpawnAssists(this, play);
            }
        }
    }
}

Actor* EnBuffDeku_SpawnAssists(EnBuffDeku* this, PlayState* play) {
    Vec3f spawnCoords;
    f32 r;

    if (play->sceneId != SCENE_WOODFALL_TEMPLE_BOSS)
        return NULL;

    spawnCoords.x = Rand_ZeroOne() * 400.0f;
    spawnCoords.z = Rand_ZeroOne() * 400.0f;
    spawnCoords.y = 100.0f;

    r = Rand_ZeroOne() * 1.0f;
    if (r < 0.5f)
        spawnCoords.x *= -1;
    r = Rand_ZeroOne() * 1.0f;
    if (r < 0.5f)
        spawnCoords.z *= -1;

    return Actor_Spawn(&play->actorCtx, play, spawnType[this->actor.colChkInfo.health], spawnCoords.x, spawnCoords.y, spawnCoords.z, 0, 0, 0, spawnParams[this->actor.colChkInfo.health]);
}
