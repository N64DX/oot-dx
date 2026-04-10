/*
 * File: z_en_bee.c
 * Overlay: ovl_En_Bee
 * Description: Giant Bee
 */

#include "z_en_bee.h"

#include "rand.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE)

void EnBee_Init(Actor* thisx, struct PlayState* play);
void EnBee_Destroy(Actor* thisx, struct PlayState* play);
void EnBee_Update(Actor* thisx, struct PlayState* play);
void EnBee_Draw(Actor* thisx, struct PlayState* play);

void EnBee_SetupFlyIdle(EnBee* this);
void EnBee_FlyIdle(EnBee* this, struct PlayState* play);
void EnBee_SetupAttack(EnBee* this);
void EnBee_Attack(EnBee* this, struct PlayState* play);

s32 sNumLoadedBees = 0;

ActorProfile En_Bee_Profile = {
    /**/ ACTOR_EN_BEE,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_BEE,
    /**/ sizeof(EnBee),
    /**/ EnBee_Init,
    /**/ EnBee_Destroy,
    /**/ EnBee_Update,
    /**/ EnBee_Draw,
};

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(1, 0xF),
    /* Deku stick    */ DMG_ENTRY(2, 0xF),
    /* Slingshot     */ DMG_ENTRY(1, 0xF),
    /* Explosive     */ DMG_ENTRY(2, 0xF),
    /* Boomerang     */ DMG_ENTRY(1, 0xF),
    /* Normal arrow  */ DMG_ENTRY(2, 0xF),
    /* Hammer swing  */ DMG_ENTRY(2, 0xF),
    /* Hookshot      */ DMG_ENTRY(1, 0xF),
    /* Kokiri sword  */ DMG_ENTRY(1, 0xF),
    /* Master sword  */ DMG_ENTRY(2, 0xF),
    /* Giant's Knife */ DMG_ENTRY(4, 0xF),
    /* Fire arrow    */ DMG_ENTRY(2, 0xF),
    /* Ice arrow     */ DMG_ENTRY(4, 0xF),
    /* Light arrow   */ DMG_ENTRY(2, 0xF),
    /* Unk arrow 1   */ DMG_ENTRY(2, 0xF),
    /* Unk arrow 2   */ DMG_ENTRY(2, 0xF),
    /* Unk arrow 3   */ DMG_ENTRY(2, 0xF),
    /* Fire magic    */ DMG_ENTRY(0, 0xF),
    /* Ice magic     */ DMG_ENTRY(3, 0xF),
    /* Light magic   */ DMG_ENTRY(0, 0xF),
    /* Shield        */ DMG_ENTRY(0, 0xF),
    /* Mirror Ray    */ DMG_ENTRY(0, 0xF),
    /* Kokiri spin   */ DMG_ENTRY(1, 0xF),
    /* Giant spin    */ DMG_ENTRY(4, 0xF),
    /* Master spin   */ DMG_ENTRY(2, 0xF),
    /* Kokiri jump   */ DMG_ENTRY(2, 0xF),
    /* Giant jump    */ DMG_ENTRY(8, 0xF),
    /* Master jump   */ DMG_ENTRY(4, 0xF),
    /* Unknown 1     */ DMG_ENTRY(0, 0xF),
    /* Unblockable   */ DMG_ENTRY(0, 0x0),
    /* Hammer jump   */ DMG_ENTRY(4, 0xF),
    /* Unknown 2     */ DMG_ENTRY(0, 0xF),
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xF7CFFFFF, 0x08, 0x08 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 6, 13, -4, { 0, 0, 0 } },
};

static u8 healthInits[] = {     1,     2,     3 };
static f32 scaleInits[] = { 0.01f, 0.02f, 0.03f }; 

void EnBee_Init(Actor* thisx, PlayState* play) {
    EnBee* this = (EnBee*)thisx;

    this->actor.colChkInfo.mass = 10;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 19.0f);
    SkelAnime_Init(play, &this->skelAnime, &gBeeSkel, &gBeeFlyingAnim, this->jointTable, this->morphTable, OBJECT_BEE_LIMB_MAX);
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(healthInits[ENBEE_GET_TYPE(thisx)], MONSTER_HP);
    this->actor.colChkInfo.damageTable = &sDamageTable;
    this->actor.attentionRangeType = ATTENTION_RANGE_3;
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    this->instanceId = sNumLoadedBees;
    sNumLoadedBees++;
    this->actor.shape.shadowScale = 12.0f;

    this->actor.naviEnemyId = NAVI_ENEMY_GIANT_BEE;
    EnBee_SetupFlyIdle(this);
}

void EnBee_Destroy(Actor* thisx, PlayState* play) {
    EnBee* this = (EnBee*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void EnBee_SetupFlyIdle(EnBee* this) {
    Vec3f tempPos;
    s16 yawOffset;

    Animation_Change(&this->skelAnime, &gBeeFlyingAnim, 1.0f, 0.0f, Animation_GetLastFrame(&gBeeFlyingAnim), ANIMMODE_LOOP, -10.0f);
    Math_Vec3f_Copy(&tempPos, &this->actor.home.pos);

    yawOffset = (this->instanceId * 0x700) + 0x2000;
    tempPos.x += Math_SinS(yawOffset) * 50.0f;
    tempPos.y = Rand_ZeroFloat(50.0f) + (this->actor.floorHeight + 30.0f);
    tempPos.z += Math_CosS(yawOffset) * 50.0f;

    Math_Vec3f_Copy(&this->targetPos[0], &tempPos);
    Math_Vec3f_Copy(&tempPos, &this->actor.home.pos);

    tempPos.x += Math_SinS(yawOffset - 0x4000) * 50.0f;
    tempPos.y = Rand_ZeroFloat(50.0f) + (this->actor.floorHeight + 30.0f);
    tempPos.z += Math_CosS(yawOffset - 0x4000) * 50.0f;

    Math_Vec3f_Copy(&this->targetPos[1], &tempPos);

    this->attackDelayTimer = Rand_S16Offset(20, 30);
    this->isHostile = false;
    this->actionFunc = EnBee_FlyIdle;
}

void EnBee_FlyIdle(EnBee* this, PlayState* play) {
    Vec3f nextPos;

    Math_Vec3f_Copy(&nextPos, &this->targetPos[this->posIndex]);
    nextPos.x += Math_SinS(this->targetYaw) * 30.0f;
    nextPos.z += Math_CosS(this->targetYaw) * 30.0f;

    if ((this->instanceId % 2) == 0)
        this->targetYaw += (s16)((s32)Rand_CenteredFloat(1000.0f) + 4000);
    else this->targetYaw -= (s16)((s32)Rand_CenteredFloat(1000.0f) + 4000);

    this->flightHoverOffset += 1000;
    this->actor.velocity.y = Math_SinS(this->flightHoverOffset);

    if (this->targetYaw > 0x10000) {
        this->targetYaw = 0;
        this->posIndex++;
        this->posIndex &= 1;
    }

    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world.pos, &nextPos), 1, 0x7D0, 0);
    Math_ApproachF(&this->actor.speed, 3.0f, 0.3f, 1.0f);

    if (this->attackDelayTimer == 0 && (this->actor.params & 1) != BEE_BEHAVIOR_IDLE)
        EnBee_SetupAttack(this);
}

void EnBee_SetupAttack(EnBee* this) {
    Animation_Change(&this->skelAnime, &gBeeFlyingAnim, 1.0f, 0.0f, Animation_GetLastFrame(&gBeeFlyingAnim), ANIMMODE_LOOP, -10.0f);
    this->isHostile = true;
    this->actionFunc = EnBee_Attack;
}

void EnBee_Attack(EnBee* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f nextPos;
    f32 rand;
    f32 yawOffset;
    s32 i;

    Math_Vec3f_Copy(&nextPos, &player->actor.world.pos);
    yawOffset = (this->instanceId * 0x700) + 0x2000;

    for (i=0; i<2; i++) {
        rand = Rand_CenteredFloat(20.0f);
        nextPos.x += Math_SinS((f32)this->actor.yawTowardsPlayer + this->targetYaw + yawOffset) * (rand + 30.0f);
        nextPos.y = (Math_SinS(this->flightHoverOffset) * 10.0f) + (player->actor.floorHeight + 40.0f);
        rand = Rand_CenteredFloat(20.0f);

        nextPos.z += Math_CosS((f32)this->actor.yawTowardsPlayer + this->targetYaw + yawOffset) * (rand + 30.0f);
        Math_Vec3f_Copy(&this->targetPos[i], &nextPos);
        yawOffset -= 0x4000;
    }

    Math_Vec3f_Copy(&nextPos, &this->targetPos[this->posIndex]);

    if ((this->instanceId % 2) == 0)
        this->targetYaw += (this->instanceId * 0x700) + (s32)Rand_CenteredFloat((this->instanceId * 0x700) * 0.5f);
    else this->targetYaw -= (this->instanceId * 0x700) + (s32)Rand_CenteredFloat((this->instanceId * 0x700) * 0.5f);

    this->flightHoverOffset += (s32)Rand_CenteredFloat(500.0f) + 1000;

    if (this->targetYaw > 0x10000) {
        this->targetYaw = 0;
        this->posIndex++;
        this->posIndex &= 1;
    }

    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world.pos, &nextPos), 1, 0x1388, 0);
    Math_ApproachF(&this->actor.world.pos.y, nextPos.y, 0.3f, 3.0f);
    Math_ApproachF(&this->actor.speed, 5.0f, 0.3f, 1.0f);
}

void EnBee_UpdateDamage(EnBee* this, PlayState* play) {
    if (this->sfxHitTimer == 0 && (this->collider.base.atFlags & AT_HIT)) {
        this->collider.base.atFlags &= ~AC_HIT;
        Audio_StopSfxByPosAndId(&this->actor.projectedPos, NA_SE_EN_BEE_FLY - SFX_FLAG);
        this->sfxHitTimer = 5;
    }

    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 10, NA_SE_EN_CUTBODY);
        if (Actor_ApplyDamage(&this->actor) == 0) {
            Enemy_StartFinishingBlow(play, &this->actor);
            this->actor.speed = 0.0f;
            SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 50, NA_SE_EN_EXTINCT);
            EffectSsDeadDb_Spawn(play, &this->actor.world.pos, &gZeroVec3f, &gZeroVec3f, 100, 0, 255, 255, 255, 255, 0, 0, 255, 0, 9, false);
            Actor_Kill(&this->actor);
        } else Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 8);
    }
}

void EnBee_Update(Actor* thisx, PlayState* play) {
    EnBee* this = (EnBee*)thisx;

    SkelAnime_Update(&this->skelAnime);

    if (this->actor.category == ACTORCAT_ENEMY) {
        if (this->attackDelayTimer != 0)
            this->attackDelayTimer--;
        if (this->sfxHitTimer != 0)
            this->sfxHitTimer--;
    }

    Actor_PlaySfx(&this->actor, NA_SE_EN_BEE_FLY - SFX_FLAG);
    EnBee_UpdateDamage(this, play);
    Math_Vec3s_Copy(&this->actor.shape.rot, &this->actor.world.rot);
    Actor_SetFocus(&this->actor, 0.0f);
    Actor_SetScale(&this->actor, scaleInits[ENBEE_GET_TYPE(thisx)]);

    this->actionFunc(this, play);

    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 10.0f, 40.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);

    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
}

void EnBee_Draw(Actor* thisx, PlayState* play) {
    EnBee* this = (EnBee*)thisx;

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    SkelAnime_DrawOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, NULL, NULL, &this->actor);
}
