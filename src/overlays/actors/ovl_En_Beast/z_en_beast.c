/*
 * File: z_en_beast.c
 * Overlay: Ovl_En_Beast
 * Description: A beast of a monster
 * Authors: Curse of Moonlight
 */

#include "z_en_beast.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "player.h"
#include "audio.h"
#include "effect.h"
#include "z_en_item00.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void EnBeast_Init(Actor* thisx, struct PlayState* play);
void EnBeast_Destroy(Actor* thisx, struct PlayState* play);
void EnBeast_Update(Actor* thisx, struct PlayState* play);
void EnBeast_Draw(Actor* thisx, struct PlayState* play);

void EnBeast_MoveR(EnBeast* this, struct PlayState* play);
void EnBeast_SetupMoveR(EnBeast* this, struct PlayState* play);
void EnBeast_MoveL(EnBeast* this, struct PlayState* play);
void EnBeast_SetupMoveL(EnBeast* this, struct PlayState* play);
void EnBeast_MoveB(EnBeast* this, struct PlayState* play);
void EnBeast_MoveF(EnBeast* this, struct PlayState* play);
void EnBeast_SetupMoveB(EnBeast* this, struct PlayState* play);
void EnBeast_SetupMoveF(EnBeast* this, struct PlayState* play);
void EnBeast_MoveFP(EnBeast* this, struct PlayState* play);
void EnBeast_SetupMoveFP(EnBeast* this, struct PlayState* play);
void EnBeast_ForwardBackCheck(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackA(EnBeast* this, struct PlayState* play);
void EnBeast_AttackA(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackA2(EnBeast* this, struct PlayState* play);
void EnBeast_AttackA2(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackB(EnBeast* this, struct PlayState* play);
void EnBeast_AttackB(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackC(EnBeast* this, struct PlayState* play);
void EnBeast_AttackC(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackDa(EnBeast* this, struct PlayState* play);
void EnBeast_AttackDa(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackDc(EnBeast* this, struct PlayState* play);
void EnBeast_AttackDc(EnBeast* this, struct PlayState* play);
void EnBeast_SetupAttackDb(EnBeast* this, struct PlayState* play);
void EnBeast_AttackDb(EnBeast* this, struct PlayState* play);
void EnBeast_SetupIdle(EnBeast* this, struct PlayState* play);
void EnBeast_Idle(EnBeast* this, struct PlayState* play);
void EnBeast_SetupIdleP(EnBeast* this, struct PlayState* play);
void EnBeast_IdleP(EnBeast* this, struct PlayState* play);
void EnBeast_SetupIdle2(EnBeast* this, struct PlayState* play);
void EnBeast_Idle2(EnBeast* this, struct PlayState* play);
void EnBeast_SetupWaittojump(EnBeast* this, struct PlayState* play);
void EnBeast_Waittojump(EnBeast* this, struct PlayState* play);
s32 EnBeast_OverrideLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx);
void EnBeast_PostLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnBeast_ChangeAnimation(EnBeast* this, s32 anim);
void EnBeast_CheckDamage(EnBeast* this, struct PlayState* play);
void EnBeast_SetupDeath(EnBeast* this, struct PlayState* play);
void EnBeast_Death(EnBeast* this, struct PlayState* play);
void EnBeast_Scream(EnBeast* this, struct PlayState* play);

ActorProfile En_Beast_Profile = {
    /**/ ACTOR_EN_BEAST,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_BEAST,
    /**/ sizeof(EnBeast),
    /**/ EnBeast_Init,
    /**/ EnBeast_Destroy,
    /**/ EnBeast_Update,
    /**/ EnBeast_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_HIT7,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xFFCFFFFF, 0x0, 0x00 },
        { 0xFFCFFFFF, 0x0, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 60, 60, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInit = { 20, 0, 60.0f, 60.0f, MASS_HEAVY };

static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x04, 0x14 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { GBEASTSKEL_CLAW_L_LIMB, { { 0, 0, 0 }, 35 }, 70 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x04, 0x14 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { GBEASTSKEL_CLAW_R_LIMB, { { 0, 0, 0 }, 35 }, 70 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphItemsInit),
    sJntSphItemsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, NAVI_ENEMY_BEAST, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 2000, ICHAIN_CONTINUE),
    ICHAIN_S8(attentionRangeType, 2, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, -3000, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 20, ICHAIN_STOP),
};

typedef enum {
    WERE_ANIM_IDLE1 = 0,
    WERE_ANIM_IDLE2,
    WERE_ANIM_ATTACKA,
    WERE_ANIM_ATTACKB,
    WERE_ANIM_ATTACKC,
    WERE_ANIM_ATTACKD,
    WERE_ANIM_ATTACKDB,
    WERE_ANIM_ATTACKDC,
    WERE_ANIM_DEATH,
    WERE_ANIM_JUMPBACK,
    WERE_ANIM_WALK,
    WERE_ANIM_STAGGER,
    WERE_ANIM_MAX
} SWereAnim;

static AnimationInfo sAnimationInfo[WERE_ANIM_MAX] = {
    { &gBeastSkelIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 5.0f },
    { &gBeastSkelIdle2Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
    { &gBeastSkelAttackaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 6.0f },
    { &gBeastSkelAttackbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &gBeastSkelAttackcAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &gBeastSkelAttackdaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &gBeastSkelAttackdbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 0.0f },
    { &gBeastSkelAttackdcAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 0.0f },
    { &gBeastSkelDeathAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gBeastSkelBackjumpAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 7.0f },
    { &gBeastSkelWalkaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 7.0f },
    { &gBeastSkelStaggerAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

typedef enum {
    /* 0x0 */ WERE_DMGEFF_NORMAL,
    /* 0x1 */ WERE_DMGEFF_STUN,
    /* 0x6 */ WERE_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ WERE_DMGEFF_SLING = 0xD,
    /* 0xE */ WERE_DMGEFF_LIGHT,
    /* 0xF */ WERE_DMGEFF_FREEZE
} WereDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, WERE_DMGEFF_STUN),
    /* Deku stick    */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(1, WERE_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, WERE_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, WERE_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(4, WERE_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, WERE_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, WERE_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, WERE_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, WERE_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(8, WERE_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
};

void EnBeast_Init(Actor* thisx, struct PlayState* play) {
    EnBeast* this = (EnBeast*)thisx;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    this->cantSee = 1;
    this->canDodge = 1;
    this->aggroed = false;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawHorse, 10.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gBeastSkel, &gBeastSkelIdleAnim, this->jointTable, this->morphTable, GBEASTSKEL_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(this->actor.colChkInfo.health, ELITE_HP);

    this->type       =  this->actor.params        & 0xFF;
    this->miniboss   = (this->actor.params >> 15) & 1;
    this->switchFlag = (this->actor.params >> 8)  & 0x7F;

    if (this->type == BEAST_TYPE_IDLE) {
        this->timer = 39;
        EnBeast_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->type == BEAST_TYPE_AMBUSH) {
        this->timer = 39;
        EnBeast_SetupWaittojump(this, play);
        this->actor.speed = 0.0f;
    } else if (this->type >= BEAST_TYPE_IDLE2) {
        this->timer = 95;
        EnBeast_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }

    if (this->switchFlag <= 0x3F && Flags_GetSwitch(play, this->switchFlag))
            Actor_Kill(thisx);
}

void EnBeast_Destroy(Actor* thisx, struct PlayState* play) {
    EnBeast* this = (EnBeast*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
    
    if (this->aggroed && this->miniboss)
        func_800F5B58();
}

void EnBeast_Update(Actor* thisx, struct PlayState* play) {
    EnBeast* this = (EnBeast*)thisx;

    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    Player* player = GET_PLAYER(play);
    CollisionPoly* poly;
    s32 bgId;
    Vec3f colPoint;
    Actor_MoveXZGravity(&this->actor);
    this->actionFunc(this, play);
    
    if (this->actor.xzDistToPlayer < 900.0f) {
        if (!this->aggroed) {
                if (this->miniboss)
                    func_800F5ACC(NA_BGM_MINI_BOSS2);
                this->aggroed = true;
            }
    }
    
    if ((this->inrange == 1) && (this->actor.xzDistToPlayer > 250))
        this->inrange = 3;

    EnBeast_CheckDamage(this, play);
    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    if (((this->actionFunc == EnBeast_AttackA) || (this->actionFunc == EnBeast_AttackA2)) && (this->skelAnime.curFrame > 20.0f) && (this->skelAnime.curFrame < 36.0f))
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    if ((this->actionFunc == EnBeast_AttackB) && (this->skelAnime.curFrame > 13.0f) && (this->skelAnime.curFrame < 21.0f))
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    if ((this->actionFunc == EnBeast_AttackC) && (this->skelAnime.curFrame > 14.0f) && (this->skelAnime.curFrame < 20.0f))
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);

    if ((this->colliderSpheres.base.atFlags & AT_HIT)) {
        this->colliderSpheres.base.atFlags &= ~AT_HIT;
        Actor_SetPlayerKnockbackSmallNoDamage(play, &this->actor, 8.0f, this->actor.yawTowardsPlayer, 6.0f);
    }

    if ((this->actionFunc != EnBeast_Death) && (this->actionFunc != EnBeast_AttackDb)) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if ((DECR(this->hurtboxCooldown) == 0) && (this->actionFunc != EnBeast_Waittojump))
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }

    if ((player->meleeWeaponState != 0) && Actor_IsFacingPlayer(&this->actor, 0xA38) && (this->actor.xzDistToPlayer < 200.0f) && (this->canDodge == 1) && (this->hurtboxCooldown == 0) && (this->actor.world.pos.y >= player->actor.world.pos.y - 10.0f)) {
        this->alarmstate = 1;
        this->canDodge = 0;
        this->timer = 15;
        EnBeast_SetupMoveB(this, play);
    }

    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;

    if ((this->actor.xzDistToPlayer < 900.0f) && ((play->gameplayFrames % 10) == 0)) {
        if (((BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, true, true, true, &bgId) == true)))
            this->cantSee = 1;
        else  this->cantSee = 0;
    } else this->cantSee = 1;

    targetFaceRotY = Actor_WorldYawTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.y;
    targetFaceRotX = Actor_WorldPitchTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.x;
    Math_ApproachS(&this->headRoty, targetFaceRotY, 3, 0x7D0);
    this->headRoty = CLAMP(this->headRoty, -12000, 12000);
    Math_ApproachS(&this->headRotx, targetFaceRotX, 3, 0x7D0);
    this->headRotx = CLAMP(this->headRotx, -6000, 6000);
}

void EnBeast_Draw(Actor* thisx, struct PlayState* play) {
    EnBeast* this = (EnBeast*)thisx;

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnBeast_OverrideLimbDraw, EnBeast_PostLimbDraw, this);
}

void EnBeast_CheckDamage(EnBeast* this, struct PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;

        if (this->alarmstate == 0) {
            this->timer = 29;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnBeast_SetupMoveF(this, play);
        }

        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);

        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 42;
            Actor_PlaySfx(&this->actor, NA_SE_EV_DOG_CRY_EVENING);
            EnBeast_SetupDeath(this, play);
        } else Actor_PlaySfx(&this->actor, NA_SE_EN_WOLFOS_DAMAGE);
    }
}

void EnBeast_SetupDeath(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_DEATH);

    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;

    this->actionFunc = EnBeast_Death;
    this->actor.speed = 0;
}

Vec3f vector_between(Vec3f a, Vec3f b) {
    Vec3f result;
    result.x = (a.x + b.x) / 2.0f;
    result.y = (a.y + b.y) / 2.0f;
    result.z = (a.z + b.z) / 2.0f;
    return result;
}

void EnBeast_Death(EnBeast* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);

    if ((player->actor.parent == &this->actor) || (this->actor.child == &player->actor)) {
        player->actor.parent = NULL;
        this->actor.child = NULL;
        Actor_SetPlayerKnockbackSmallNoDamage(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
    }

    if (this->deathTimer <= 0) {
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x10);
        if (this->switchFlag <= 0x3F)
            Flags_SetSwitch(play, this->switchFlag);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0)
        this->deathTimer -= 1;
}

void EnBeast_ChangeAnimation(EnBeast* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

s32 EnBeast_OverrideLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnBeast* this = (EnBeast*)thisx;

    if ((this->alarmstate == 1) && (limbIndex == GBEASTSKEL_HEAD_LIMB)) {
        rot->x += this->headRotx;
        rot->y += this->headRoty;
    }

    return false;
}

void EnBeast_PostLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnBeast* this = (EnBeast*)thisx;

    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);

    if (limbIndex == GBEASTSKEL_HAND_R_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->HandR);
    if (limbIndex == GBEASTSKEL_HAND_L_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->HandL);
    if (limbIndex == GBEASTSKEL_HEAD_LIMB)
        Matrix_MultVec3f(&zeroVec, &this->Head);

    this->actor.focus.pos = this->Head;
    if ((((this->deathTimer > 1) && (this->deathTimer <= 3)) || ((this->deathTimer > 14) && (this->deathTimer <= 16)) || ((this->deathTimer > 28) && (this->deathTimer <= 32)))) {
        s32 i;
        Vec3f effPos;

        if (limbIndex == GBEASTSKEL_CHEST_LIMB)
            Matrix_MultVec3f(&zeroVec, &this->Chest);
        if (limbIndex == GBEASTSKEL_ARM_R_LIMB)
            Matrix_MultVec3f(&zeroVec, &this->ArmR);
        if (limbIndex == GBEASTSKEL_LEG_R_LIMB)
            Matrix_MultVec3f(&zeroVec, &this->LegR);
        if (limbIndex == GBEASTSKEL_LEG_L_LIMB)
            Matrix_MultVec3f(&zeroVec, &this->LegL);
        if (Rand_ZeroOne() > Rand_ZeroOne())
            EffectSsDeadDb_Spawn(play, &this->Head, &zeroVec, &zeroVec, 5, 10, 208, 24, 22, 125, 0, 22, 0, 1, 9, true);
        if (Rand_ZeroOne() > Rand_ZeroOne())
            EffectSsDeadDb_Spawn(play, &this->Chest, &zeroVec, &zeroVec, 5, 10, 208, 24, 22, 125, 0, 22, 0, 1, 9, true);
        if (Rand_ZeroOne() > Rand_ZeroOne())
            EffectSsDeadDb_Spawn(play, &this->LegR, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        if (Rand_ZeroOne() > Rand_ZeroOne())
            EffectSsDeadDb_Spawn(play, &this->ArmR, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        if (Rand_ZeroOne() > Rand_ZeroOne())
            EffectSsDeadDb_Spawn(play, &this->LegL, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
    }
}

void EnBeast_ForwardBackCheck(EnBeast* this, struct PlayState* play) {
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);

    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 39;
        EnBeast_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if ((this->actor.xzDistToPlayer < 70.0f)) {
            this->alarmstate = 1;
            this->timer = 15;
            this->canDodge = 0;
            EnBeast_SetupMoveB(this, play);
        } else if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.xzDistToPlayer >= 140.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            if ((RandNum <= 0.74) && (this->actor.xzDistToPlayer < 200.0f)) {
                this->timer = 46;
                EnBeast_SetupAttackA(this, play);
            } else {
                this->timer = 21;
                EnBeast_SetupMoveF(this, play);
            }
        } else if ((this->actor.xzDistToPlayer < 140.0f) && (this->actor.xzDistToPlayer >= 70.0f)) {
            Player* player = GET_PLAYER(play);
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            this->timer = 35;
            if ((RandNum <= 0.74) && (relYawTowardsPlayer < 0x1500) && (player->invincibilityTimer == 0))
                EnBeast_SetupAttackC(this, play);
            else if (relYawTowardsPlayer < 0x1000 && this->type != BEAST_TYPE_AMBUSH) {
                this->timer = 28;
                EnBeast_SetupAttackDa(this, play);
            }
            else EnBeast_SetupAttackB(this, play);
        } else if ((this->actor.xzDistToPlayer >= 300.0f) && (this->actor.xzDistToPlayer < 1200.0f)) {
            this->alarmstate = 1;
            this->timer = 21;
            EnBeast_SetupMoveF(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 39;
            EnBeast_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}

void EnBeast_SetupIdle(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_IDLE1);
    this->actionFunc = EnBeast_Idle;
}

void EnBeast_Idle(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);

        if (((relYawTowardsPlayer < 0x2388) || ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) && (this->actor.xzDistToPlayer < 900.0f) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnBeast_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        if (Rand_ZeroOne() < 0.5f) {
            this->timer = 39;
            EnBeast_SetupIdle(this, play);
        } else {
            this->timer = 61;
            EnBeast_SetupIdle2(this, play);
        }
    }
}

void EnBeast_SetupWaittojump(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_IDLE1);
    this->actionFunc = EnBeast_Waittojump;
}

void EnBeast_Waittojump(EnBeast* this, struct PlayState* play) {
    if ((this->inrange == 0) && (this->actor.xzDistToPlayer < 200))
        this->inrange = 1;

    this->canDodge = 0;
    SkelAnime_Update(&this->skelAnime);

    if (this->inrange == 3) {
        this->alarmstate = 1;
        EnBeast_SetupAttackA2(this, play);
    }
}

void EnBeast_SetupIdleP(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_IDLE2);
    this->actionFunc = EnBeast_IdleP;
}

void EnBeast_IdleP(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);

        if (((relYawTowardsPlayer < 0x2388) || ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) && (this->actor.xzDistToPlayer < 900.0f) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnBeast_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 21 * this->actor.params;
        EnBeast_SetupMoveFP(this, play);
    }
}

void EnBeast_SetupIdle2(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_IDLE2);
    this->actionFunc = EnBeast_Idle2;
}

void EnBeast_Idle2(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);

        if (((relYawTowardsPlayer < 0x2388) || ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) && (this->actor.xzDistToPlayer < 900.0f) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnBeast_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 39;
        EnBeast_SetupIdle(this, play);
    }
}

void EnBeast_SetupMoveF(EnBeast* this, struct PlayState* play) {
    this->actionFunc = EnBeast_MoveF;
    EnBeast_ChangeAnimation(this, WERE_ANIM_WALK);
}

void EnBeast_MoveF(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);

    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 10.0f;

        if (this->skelAnime.curFrame == 2.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_WOLFOS_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 200, 100, false);
        }

        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
            this->actor.world.pos = this->actor.prevPos;
    } else EnBeast_ForwardBackCheck(this, play);
}

void EnBeast_SetupMoveFP(EnBeast* this, struct PlayState* play) {
    EnBeast_ChangeAnimation(this, WERE_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnBeast_MoveFP;
}

void EnBeast_MoveFP(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);

    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer;

        this->actor.speed = 8.0f;
        this->timer -= 1;

        if (this->skelAnime.curFrame == 2.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_WOLFOS_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 200, 100, false);
        }

        relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);

        if (((relYawTowardsPlayer < 0x2388) || ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) && (this->actor.xzDistToPlayer < 900.0f) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnBeast_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 61;
        this->actor.speed = 0.0f;
        EnBeast_SetupIdleP(this, play);
    }
}

void EnBeast_SetupMoveB(EnBeast* this, struct PlayState* play) {
    this->actionFunc = EnBeast_MoveB;
    Animation_Change(&this->skelAnime, &gBeastSkelBackjumpAnim, 1.0f, 3.0f, 25.0f, ANIMMODE_ONCE, 1.0f);
}

void EnBeast_MoveB(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    this->actor.shape.rot.y = this->actor.world.rot.y;

    if (this->timer > 0) {
        if (this->skelAnime.curFrame == 15.0f) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, false);
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
        }

        if (this->skelAnime.curFrame < 5.0f) {
            if (this->skelAnime.curFrame == 4.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, false);
            }
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
            this->actor.speed = 0.0f;
        }
        else if (this->skelAnime.curFrame < 15.0f)
            this->actor.speed = -13.0f;
        else {
            if ((this->actor.xzDistToPlayer < 140.0f) && (this->actor.xzDistToPlayer >= 70.0f)) {
                this->alarmstate = 1;
                this->actor.speed = 0.0f;
                this->timer = 35;
                EnBeast_SetupAttackB(this, play);
            }
            this->actor.speed = 0.0f;
        }

        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y + 0x8000))
            this->actor.world.pos = this->actor.prevPos;
    } else {
        this->canDodge = 1;
        EnBeast_ForwardBackCheck(this, play);
    }
}

void EnBeast_SetupAttackA(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKA);
    this->actionFunc = EnBeast_AttackA;
}

void EnBeast_AttackA(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame < 21.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }

    if (this->timer > 0) {
        if (this->skelAnime.curFrame == 20.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, true);
        }

        if (this->skelAnime.curFrame == 24.0f) {
            this->canDodge = 0;
            EnBeast_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
        }

        if (this->skelAnime.curFrame == 40.0f) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, true);
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
            this->canDodge = 1;
        }

        if (this->skelAnime.curFrame < 21.0f)
            this->actor.speed = 0.0f;
        else if (this->skelAnime.curFrame < 41.0f)
            this->actor.speed = 12.0f;
        else this->actor.speed = 0.0f;

        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
            this->actor.world.pos = this->actor.prevPos;
    } else EnBeast_ForwardBackCheck(this, play);
}

void EnBeast_SetupAttackA2(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Animation_Change(&this->skelAnime, &gBeastSkelAttackaAnim, 1.0f, 20.0f, 46.0f, ANIMMODE_ONCE, -1.0f);
    this->actionFunc = EnBeast_AttackA2;
    this->timer = 26.0f;
}

void EnBeast_AttackA2(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame < 21.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }

    if (this->timer > 0) {
        if (this->skelAnime.curFrame == 24.0f) {
            this->canDodge = 0;
            EnBeast_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
        }

        if (this->skelAnime.curFrame == 40.0f) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, true);
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
            this->canDodge = 1;
        }

        if (this->skelAnime.curFrame < 21.0f)
            this->actor.speed = 0.0f;
        else if (this->skelAnime.curFrame < 41.0f)
            this->actor.speed = 12.0f;
        else this->actor.speed = 0.0f;

        this->timer -= 1;
    } else EnBeast_ForwardBackCheck(this, play);
}

void EnBeast_SetupAttackB(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKB);
    this->actionFunc = EnBeast_AttackB;
    this->canDodge = 0;
}

void EnBeast_AttackB(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if (this->skelAnime.curFrame == 15) {
        EnBeast_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }

    if (this->skelAnime.curFrame > 20)
        this->canDodge = 1;

    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);

        this->actor.speed = 0.0f;
        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
            this->actor.world.pos = this->actor.prevPos;
    } else EnBeast_ForwardBackCheck(this, play);
}

void EnBeast_SetupAttackC(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKC);
    this->actionFunc = EnBeast_AttackC;
    this->canDodge = 0;
}

void EnBeast_AttackC(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }

    if (this->skelAnime.curFrame == 17) {
        EnBeast_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
    }

    if (this->skelAnime.curFrame > 20)
        this->canDodge = 1;
    
    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);

        if (this->skelAnime.curFrame < 11.0f)
            this->actor.speed = 3.0f;
        else this->actor.speed = 0.0f;

        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
            this->actor.world.pos = this->actor.prevPos;
    } else EnBeast_ForwardBackCheck(this, play);
}

void EnBeast_SetupAttackDa(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKD);
    this->actionFunc = EnBeast_AttackDa;
    this->canDodge = 0;
}

void EnBeast_AttackDa(EnBeast* this, struct PlayState* play) {
    s16 relYawTowardsPlayer;

    SkelAnime_Update(&this->skelAnime);
    relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);

    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }

    if (this->skelAnime.curFrame == 17) {
        EnBeast_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
    }

    if (this->timer > 0) {
        Player* player = GET_PLAYER(play);

        if (this->skelAnime.curFrame < 16.0f) {
            this->actor.speed = 6.0f;
            if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y))
                this->actor.world.pos = this->actor.prevPos;
        } else this->actor.speed = 0.0f;
        if ((this->skelAnime.curFrame >= 20.0f) && (this->actor.xzDistToPlayer <= 80) && (relYawTowardsPlayer < 0x1000) && (fabsf(this->actor.world.pos.y - player->actor.world.pos.y) <= 80.0f)) {
            this->actor.speed = 0.0f;
            this->timer = 48;
            EnBeast_SetupAttackDb(this, play);
            player->invincibilityTimer = 0;
        }
        this->timer -= 1;
    } else {
        this->timer = 27;
        EnBeast_SetupAttackDc(this, play);
    }
}

void EnBeast_SetupAttackDb(EnBeast* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);

    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKDB);
    this->actionFunc = EnBeast_AttackDb;
    play->grabPlayer(play, player);
    player->actor.parent = &this->actor;
    this->actor.child = &player->actor;
}

void EnBeast_AttackDb(EnBeast* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos, result;

    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    result = vector_between(this->HandR, this->HandL);
    SkelAnime_Update(&this->skelAnime);

    if ((this->skelAnime.curFrame == 15) || (this->skelAnime.curFrame == 27)) {
        play->damagePlayer(play, -10);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }

    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

        Math_ApproachF(&player->actor.world.pos.x, result.x, 1.0f, 30.0f);
        Math_ApproachF(&player->actor.world.pos.z, result.z, 1.0f, 30.0f);

        if ((this->skelAnime.curFrame == 30) || (this->actionFunc == EnBeast_Death)) {
            player->actor.parent = NULL;
            this->actor.child = NULL;
            Actor_SetPlayerKnockbackSmallNoDamage(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    } else {
        EnBeast_ForwardBackCheck(this, play);
        this->canDodge = 1;
    }
}

void EnBeast_SetupAttackDc(EnBeast* this, struct PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnBeast_ChangeAnimation(this, WERE_ANIM_ATTACKDC);
    this->actionFunc = EnBeast_AttackDc;
}

void EnBeast_AttackDc(EnBeast* this, struct PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
    } else {
        EnBeast_ForwardBackCheck(this, play);
        this->canDodge = 1;
    }
}
void EnBeast_Scream(EnBeast* this, struct PlayState* play) {
    f32 Rand = Rand_ZeroOne();

    if (Rand < 0.33)
        Actor_PlaySfx(&this->actor, NA_SE_EV_COW_CRY);
    else if (Rand < 0.66)
        Actor_PlaySfx(&this->actor, NA_SE_EN_WOLFOS_CRY);
    else Actor_PlaySfx(&this->actor, NA_SE_EV_SMALL_DOG_BARK);
}