/*
 * File: z_en_goomba.c
 * Overlay: Ovl_En_Goomba
 * Description: Goomba (inspired by Super Mario 64)
  * Authors: Syeo (Model), Spire (Code) & CDI-Fails (Code)
 */

#include "z_en_goomba.h"

#include "segmented_address.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_en_item00.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "audio.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnGoomba_Init(Actor* thisx, struct PlayState* play);
void EnGoomba_Destroy(Actor* thisx, struct PlayState* play);
void EnGoomba_Update(Actor* thisx, struct PlayState* play);
void EnGoomba_Draw(Actor* thisx, struct PlayState* play);

void EnGoomba_Idle(EnGoomba* this, struct PlayState* play);
void EnGoomba_Notice(EnGoomba* this, struct PlayState* play);
void EnGoomba_StartRunFromNotice(EnGoomba* this, struct PlayState* play);
void EnGoomba_Run(EnGoomba* this, struct PlayState* play);
void EnGoomba_EndRun(EnGoomba* this, struct PlayState* play);
void EnGoomba_Attack(EnGoomba* this, struct PlayState* play);
void EnGoomba_Damaged(EnGoomba* this, struct PlayState* play);
void EnGoomba_Stunned(EnGoomba* this, struct PlayState* play);
void EnGoomba_Die(EnGoomba* this, struct PlayState* play);

ActorProfile En_Goomba_Profile = {
    ACTOR_EN_GOOMBA,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GOOMBA,
    sizeof(EnGoomba),
    EnGoomba_Init,
    EnGoomba_Destroy,
    EnGoomba_Update,
    EnGoomba_Draw,
};

typedef enum EnGoombaDamageEffect {
    ENGOOMBA_DMGEFF_NONE,
    ENGOOMBA_DMGEFF_STUN,
    ENGOOMBA_DMGEFF_DEFAULT,
    ENGOOMBA_DMGEFF_BURN,
    ENGOOMBA_DMGEFF_ICE,
    ENGOOMBA_DMGEFF_HAM
} EnGoombaDamageEffect;

static Vec3f sEnGoombaSfxPos = { 0.0f, 0.0f, 0.0f };

static void* sMouthTextures[] = { gGoombaSkel_mouth2_ci8, gGoombaSkel_mouth2a_ci8 };
static void* sEyeTextures[]   = { gGoombaSkel_eye3_ci8, gGoombaSkel_eye3a_ci8, gGoombaSkel_eye3b_ci8 };

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_STUN),
    /* Deku stick    */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Slingshot     */ DMG_ENTRY(1, ENGOOMBA_DMGEFF_DEFAULT),
    /* Explosive     */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Boomerang     */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Hammer swing  */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_HAM),
    /* Hookshot      */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, ENGOOMBA_DMGEFF_DEFAULT),
    /* Master sword  */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Giant's Knife */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_DEFAULT),
    /* Fire arrow    */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_BURN),
    /* Ice arrow     */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_ICE),
    /* Light arrow   */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Unk arrow 1   */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_DEFAULT),
    /* Unk arrow 2   */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Unk arrow 3   */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Fire magic    */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_BURN),
    /* Ice magic     */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_ICE),
    /* Light magic   */ DMG_ENTRY(3, ENGOOMBA_DMGEFF_NONE),
    /* Shield        */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_NONE),
    /* Mirror Ray    */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_NONE),
    /* Kokiri spin   */ DMG_ENTRY(1, ENGOOMBA_DMGEFF_DEFAULT),
    /* Giant spin    */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_DEFAULT),
    /* Master spin   */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Kokiri jump   */ DMG_ENTRY(2, ENGOOMBA_DMGEFF_DEFAULT),
    /* Giant jump    */ DMG_ENTRY(8, ENGOOMBA_DMGEFF_DEFAULT),
    /* Master jump   */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_DEFAULT),
    /* Unknown 1     */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_NONE),
    /* Unblockable   */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_NONE),
    /* Hammer jump   */ DMG_ENTRY(4, ENGOOMBA_DMGEFF_HAM),
    /* Unknown 2     */ DMG_ENTRY(0, ENGOOMBA_DMGEFF_NONE),
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_HIT5,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xFFCFFFFF, 0x08, 0x0C },
        { 0xFFCFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 30, 30, 0, { 0, 0, 0 } },
};

// Relative positions to spawn ice chunks when tektite is frozen
static Vec3f sIceChunks[12] = {
    { 20.0f, 20.0f, 0.0f },   { 10.0f, 40.0f, 10.0f },   { -10.0f, 40.0f, 10.0f }, { -20.0f, 20.0f, 0.0f },
    { 10.0f, 40.0f, -10.0f }, { -10.0f, 40.0f, -10.0f }, { 0.0f, 20.0f, -20.0f },  { 10.0f, 0.0f, 10.0f },
    { 10.0f, 0.0f, -10.0f },  { 0.0f, 20.0f, 20.0f },    { -10.0f, 0.0f, 10.0f },  { -10.0f, 0.0f, -10.0f },
};

static Vec3f sFlames[12] = {
    { 20.0f, 20.0f, 0.0f },   { 10.0f, 40.0f, 10.0f },   { -10.0f, 40.0f, 10.0f }, { -20.0f, 20.0f, 0.0f },
    { 10.0f, 40.0f, -10.0f }, { -10.0f, 40.0f, -10.0f }, { 0.0f, 20.0f, -20.0f },  { 10.0f, 0.0f, 10.0f },
    { 10.0f, 0.0f, -10.0f },  { 0.0f, 20.0f, 20.0f },    { -10.0f, 0.0f, 10.0f },  { -10.0f, 0.0f, -10.0f },
};

void EnGoomba_Init(Actor* thisx, PlayState* play) {
    EnGoomba* this = (EnGoomba*)thisx;

    Actor_SetScale(&this->actor, 0.20f);

    this->actor.colChkInfo.mass = MASS_HEAVY;
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(6, ELITE_HP);;
    this->actor.gravity = -1.0f;

    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 2.5f);

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    SkelAnime_InitFlex(play, &this->skelAnime, &gGoombaSkel, &gGoombaSkelIdleAnim, this->jointTable, this->morphTable, GGOOMBASKEL_NUM_LIMBS);

    this->actor.colChkInfo.damageTable = &sDamageTable;

    this->actionFunc = EnGoomba_Idle;
}

void EnGoomba_Destroy(Actor* thisx, PlayState* play) {
    EnGoomba* this = (EnGoomba*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void EnGoomba_RotateTowardPoint(EnGoomba* this, Vec3f* point, s16 step) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_WorldYawTowardPoint(&this->actor, point), 3, step, 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
}

void EnGoomba_SetupIdle(EnGoomba* this, PlayState* play) {
    this->actor.speed = 0.0f;
    this->actor.velocity.y = 0.0f;
    Animation_MorphToLoop(&this->skelAnime, &gGoombaSkelIdleAnim, -3.0f);
    this->actionFunc = EnGoomba_Idle;
}

void EnGoomba_SetupNotice(EnGoomba* this, PlayState* play) {
    Animation_PlayOnce(&this->skelAnime, &gGoombaSkelNoticeAnim);
    Actor_PlaySfx(&this->actor, NA_SE_EN_AWA_BOUND);
    this->actionFunc = EnGoomba_Notice;
}

void EnGoomba_SetupStartRunFromNotice(EnGoomba* this, PlayState* play) {
    Animation_PlayOnce(&this->skelAnime, &gGoombaSkelWalkingAnim);
    this->actionFunc = EnGoomba_StartRunFromNotice;
}

void EnGoomba_SetupRun(EnGoomba* this, PlayState* play) {
    s16 angle;

    if (this->fleeTimer != 0) {
        angle = this->actor.yawTowardsPlayer + DEG_TO_BINANG(180.0f) + Rand_S16Offset(DEG_TO_BINANG(-45.0f), DEG_TO_BINANG(90.0f));
        this->fleePos.x = (Math_CosS(angle) * ENGOOMBA_FLEE_RADIUS) + this->actor.home.pos.x;
        this->fleePos.z = (Math_SinS(angle) * ENGOOMBA_FLEE_RADIUS) + this->actor.home.pos.z;
    }

    Animation_MorphToLoop(&this->skelAnime, &gGoombaSkelWalkingAnim, -4.0f);
    this->actionFunc = EnGoomba_Run;
}

void EnGoomba_SetupEndRun(EnGoomba* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &gGoombaSkelWalkingAnim, -4.0f);
    this->actor.speed = 0.0f;
    this->actionFunc = EnGoomba_EndRun;
}

void EnGoomba_SetupJumpAttack(EnGoomba* this, PlayState* play) {
    static f32 freqScale = 1.5f;
    
    this->actor.speed = 8.0f;
    this->actor.velocity.y = 2.0f;
    this->actor.world.rot.y = this->actor.shape.rot.y = this->actor.yawTowardsPlayer;

    Animation_MorphToPlayOnce(&this->skelAnime, &gGoombaSkelJump_attackAnim, -3.0f);
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);  
    func_800F436C(&sEnGoombaSfxPos, NA_SE_EN_DEADHAND_BITE, freqScale);
    this->actionFunc = EnGoomba_Attack;
}

void EnGoomba_SetupDamaged(EnGoomba* this, PlayState* play) {
    this->actor.speed = 4.0f;
    this->actor.velocity.y = 2.0f;
    this->actor.world.rot.y = this->actor.shape.rot.y = this->actor.yawTowardsPlayer;

    Animation_MorphToPlayOnce(&this->skelAnime, &gGoombaSkelAttackAnim, -3.0f);
    this->actionFunc = EnGoomba_Damaged;
}

void EnGoomba_SetupStunned(EnGoomba* this, PlayState* play) {
    this->actor.speed = 0.0f;

    Animation_Change(&this->skelAnime, &gGoombaSkelIdleAnim, 0.0f, 3.0f, 0.0f, ANIMMODE_ONCE, 0.0f);
    this->actionFunc = EnGoomba_Stunned;
}

void EnGoomba_SetupFlatten(EnGoomba* this, PlayState* play) {
    this->actor.speed = 0.0f;
    this->actor.scale.y = 0.02f;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actor.world.rot.y = this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
    Animation_MorphToPlayOnce(&this->skelAnime, &gGoombaSkelDyingAnim, -3.0f);
    this->actionFunc = EnGoomba_Die;
}

void EnGoomba_SetupDie(EnGoomba* this, PlayState* play) {
    this->actor.speed = 0.0f;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actor.world.rot.y = this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
    Animation_MorphToPlayOnce(&this->skelAnime, &gGoombaSkelDyingAnim, -3.0f);
    this->actionFunc = EnGoomba_Die;
}

void EnGoomba_Idle(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);

    if (this->actor.xzDistToPlayer < ENGOOMBA_NOTICE_RADIUS)
        EnGoomba_SetupNotice(this, play);
}

void EnGoomba_Notice(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    u8 animDone = SkelAnime_Update(&this->skelAnime);

    EnGoomba_RotateTowardPoint(this, &player->actor.world.pos, DEG_TO_BINANG(15.0f));

    if (Actor_IsFacingPlayer(&this->actor, DEG_TO_BINANG(20.0f)))
        if (animDone) {
            if (this->actor.xzDistToPlayer < ENGOOMBA_ATTACK_RADIUS)
                EnGoomba_SetupJumpAttack(this, play);
            else EnGoomba_SetupStartRunFromNotice(this, play);
        }
}

void EnGoomba_StartRunFromNotice(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    Math_SmoothStepToF(&this->actor.speed, 3.0f, 0.1f, 1.0f, 0.0f);

    if (SkelAnime_Update(&this->skelAnime))
        EnGoomba_SetupRun(this, play);
}

void EnGoomba_Run(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    u8 playerOutsideHomeRadius = Actor_WorldDistXYZToPoint(&player->actor, &this->actor.home.pos) > ENGOOMBA_HOME_RADIUS;
    u8 EnGoombaOutsideHomeRadius = Actor_WorldDistXYZToPoint(&this->actor, &this->actor.home.pos) > ENGOOMBA_HOME_RADIUS;
    u8 EnGoombaAtHome = Actor_WorldDistXYZToPoint(&this->actor, &this->actor.home.pos) <= 100.0f;
    u8 playerOutsideNoticeRadius = this->actor.xzDistToPlayer > ENGOOMBA_NOTICE_RADIUS;
    u8 readyToAttack = Actor_IsFacingAndNearPlayer(&this->actor, ENGOOMBA_ATTACK_RADIUS, DEG_TO_BINANG(35.0f)) || Actor_IsFacingAndNearPlayer(&this->actor, ENGOOMBA_ATTACK_RADIUS * 0.5f, DEG_TO_BINANG(75.0f));

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToF(&this->actor.speed, 2.0f, 0.1f, 1.0f, 0.0f);

    EnGoomba_RotateTowardPoint(this, &this->targetPos, DEG_TO_BINANG(10.0f));

    if (EnGoombaAtHome && playerOutsideNoticeRadius) {
        EnGoomba_SetupEndRun(this, play);
        return;
    }

    if (EnGoombaOutsideHomeRadius || playerOutsideHomeRadius) {
        this->targetPos = this->actor.home.pos;
        return;
    }

    if (DECR(this->fleeTimer) == 0 || Actor_WorldDistXZToPoint(&this->actor, &this->fleePos) < 100.0f) {
        this->fleeTimer = 0;
        this->targetPos = player->actor.world.pos;
    } else this->targetPos = this->fleePos;

    if (readyToAttack && this->fleeTimer == 0)
        EnGoomba_SetupJumpAttack(this, play);
}

void EnGoomba_EndRun(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (SkelAnime_Update(&this->skelAnime))
        EnGoomba_SetupIdle(this, play);
}

void EnGoomba_Attack(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    Math_SmoothStepToF(&this->actor.speed, 0.0f, 0.1f, 1.0f, 0.0f);

    if (SkelAnime_Update(&this->skelAnime)) {
        this->fleeTimer = 2 * 20;
        EnGoomba_SetupRun(this, play);
    }
}

void EnGoomba_Damaged(EnGoomba* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    Math_SmoothStepToF(&this->actor.speed, 0.0f, 3.0f, 0.5f, 0.0f);

    if (SkelAnime_Update(&this->skelAnime)) {
        this->fleeTimer = 6 * 20;
        EnGoomba_SetupRun(this, play);
    }
}

void EnGoomba_Stunned(EnGoomba* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->spawnIceTimer == 0 && this->actor.colorFilterTimer == 0)
        Actor_PlaySfx(&this->actor, NA_SE_EV_ICE_BROKEN);

    if (this->actor.colorFilterTimer == 0) {
        if (this->actor.colChkInfo.health == 0)
            EnGoomba_SetupDie(this, play);
        else EnGoomba_SetupRun(this, play);
    }
}

void EnGoomba_Die(EnGoomba* this, PlayState* play) {
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    Vec3f effectVel = { 0.0f, 4.0f, 0.0f };
    Vec3f effectPos = this->actor.world.pos;

    if (SkelAnime_Update(&this->skelAnime) || this->drowned) {
        Actor_SetScale(&this->actor, this->actor.scale.x * 0.8f);

        if (this->actor.scale.x <= 0.001f) {
            effectPos.y += 10.0f;
            EffectSsDeadDb_Spawn(play, &effectPos, &effectVel, &zeroVec, 90, 0, 255, 255, 255, 255, 0, 0, 255, 1, 9, true);
            Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RECOVERY_HEART);
            Actor_Kill(&this->actor);
        }
    }
}

void EnGoomba_CheckDrowned(EnGoomba* this, PlayState* play) {
    if (!this->drowned && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER) && (this->actor.depthInWater > 5.0f)) {
        Actor_SetDropFlag(&this->actor, &this->collider.elem, true);
        Actor_PlaySfx(&this->actor, NA_SE_EN_EIER_ATTACK);
        Enemy_StartFinishingBlow(play, &this->actor);
        this->drowned = true;
        this->actor.gravity = -0.1f;
        this->actionFunc = EnGoomba_SetupDie;
        return;
    }
}

void EnGoomba_CheckDamage(EnGoomba* this, PlayState* play) {
    static f32 freqScale;

    EnGoomba_CheckDrowned(this, play);

    if (!this->drowned && this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        Actor_SetDropFlag(&this->actor, &this->collider.elem, true);

        if ((this->actionFunc != EnGoomba_Die) && (this->actionFunc != EnGoomba_Damaged)) {
            switch (this->actor.colChkInfo.damageReaction) {
                case ENGOOMBA_DMGEFF_STUN:
                    if (this->actor.colChkInfo.health > 1) {
                        Actor_PlaySfx(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
                        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_BLUE, 255, COLORFILTER_BUFFLAG_OPA, 80);
                        this->actionFunc = EnGoomba_SetupStunned;
                        break;
                    }
                    break;
                case ENGOOMBA_DMGEFF_BURN:
                    if (this->actor.colChkInfo.health > 1) {
                        Actor_PlaySfx(&this->actor, NA_SE_EV_FLAME_OF_FIRE);
                        freqScale = 2.0f;
                        func_800F436C(&sEnGoombaSfxPos, NA_SE_EN_DEADHAND_DAMAGE, freqScale);
                        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 80);
                        this->fireTimer = 40;
                        this->actionFunc = EnGoomba_SetupDie;
                        break;
                    }
                    break;
                case ENGOOMBA_DMGEFF_HAM:
                    if (this->actor.colChkInfo.health > 1) {
                        freqScale = 0.8f;
                        func_800F436C(&sEnGoombaSfxPos, NA_SE_EN_BIRI_JUMP, freqScale);
                        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_DAMAGE);
                        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 80);
                        this->actionFunc = EnGoomba_SetupFlatten;
                        break;
                    }
                    break;
                case ENGOOMBA_DMGEFF_ICE:
                    if (this->actor.colChkInfo.health > 1) {
                        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_BLUE, 255, COLORFILTER_BUFFLAG_OPA, 80);
                        this->spawnIceTimer = 48;
                        this->actionFunc = EnGoomba_SetupStunned;
                        break;
                    }
                    break;
                case ENGOOMBA_DMGEFF_DEFAULT:
                    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 200, COLORFILTER_BUFFLAG_OPA, 20);
                    Actor_ApplyDamage(&this->actor);
                    if (this->actor.colChkInfo.health == 0) {
                        freqScale = 2.0f;
                        func_800F436C(&sEnGoombaSfxPos, NA_SE_EN_DEADHAND_DEAD, freqScale);
                        Enemy_StartFinishingBlow(play, &this->actor);
                        this->actionFunc = EnGoomba_SetupDie;
                    } else {
                        Actor_PlaySfx(&this->actor, NA_SE_EN_STALKID_DAMAGE);
                        this->actionFunc = EnGoomba_SetupDamaged;
                    }
                    break;

                default:
                    break;
            }
        }
    }
}

void EnGoomba_Blink(EnGoomba* this) {
    if (DECR(this->blinkTimer) == 0) {
        this->eyeTexture++;
        if (this->eyeTexture >= 3) {
            this->blinkTimer = Rand_S16Offset(30, 30);
            this->eyeTexture = 0;
        }
    }
}

void EnGoomba_Chomp(EnGoomba* this) {
    if (this->actionFunc == EnGoomba_Run)
        this->mouthTexture = 1;
    else if (this->actionFunc == EnGoomba_StartRunFromNotice)
        this->mouthTexture = 1;
    else this->mouthTexture = 0;
}


void EnGoomba_Update(Actor* thisx, PlayState* play) {
    EnGoomba* this = (EnGoomba*)thisx;

    EnGoomba_Blink(this);
    EnGoomba_Chomp(this);
    EnGoomba_CheckDamage(this, play);
    this->actionFunc(this, play);

    Collider_UpdateCylinder(&this->actor, &this->collider);

    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 35.0f, 60.0f, 60.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);

    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    if (this->actionFunc != EnGoomba_Damaged && this->actionFunc != EnGoomba_Die)
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    if (this->actionFunc == EnGoomba_Damaged)
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
    if (this->actionFunc == EnGoomba_Attack)
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
}

void EnGoomba_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx, Gfx** gfx) {
    EnGoomba* this = (EnGoomba*)thisx;

    if (limbIndex == GGOOMBASKEL_HEAD_LIMB) {
        Vec3f src = { 0.0f, 10.0f, 0.0f };
        Vec3f dest;

        Matrix_MultVec3f(&src, &dest);
        this->actor.focus.pos.x = dest.x;
        this->actor.focus.pos.y = dest.y;
        this->actor.focus.pos.z = dest.z;
    }
}

void EnGoomba_Draw(Actor* thisx, PlayState* play) {
    EnGoomba* this = (EnGoomba*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sEyeTextures[this->eyeTexture]));
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(sMouthTextures[this->mouthTexture]));
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    
    if (this->spawnIceTimer != 0) { // Spawn chunks of ice all over the EnGoombaa's body
        thisx->colorFilterTimer++;
        this->spawnIceTimer--;
        if ((this->spawnIceTimer & 3) == 0) {
            Vec3f iceChunk;
            s32 idx = this->spawnIceTimer >> 2;

            iceChunk.x = thisx->world.pos.x + sIceChunks[idx].x;
            iceChunk.y = thisx->world.pos.y + sIceChunks[idx].y;
            iceChunk.z = thisx->world.pos.z + sIceChunks[idx].z;
            EffectSsEnIce_SpawnFlyingVec3f(play, &this->actor, &iceChunk, 150, 150, 150, 250, 235, 245, 255, 1.0f);
        }
    }


    if (this->fireTimer != 0) {
        thisx->colorFilterTimer++;
        this->fireTimer--;
        if ((this->fireTimer & 3) == 0) {
            Vec3f firePos = this->actor.world.pos;
            Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
            Vec3f effectVel = { 0.0f, 4.0f, 0.0f };

            s32 idx = this->fireTimer >> 2;
                  
            firePos.x = thisx->world.pos.x + sFlames[idx].x;
            firePos.y = thisx->world.pos.y + sFlames[idx].y;
            firePos.z = thisx->world.pos.z + sFlames[idx].z;
            
            EffectSsDeadDb_Spawn(play, &firePos, &effectVel, &zeroVec, 90, 0, 200, 135, 50, 255, 200, 80, 50, 1, 9, true);
        }
    }

    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL, (void*)(EnGoomba_PostLimbDraw), &this->actor);
}
