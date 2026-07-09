/*
 * File: z_en_jso.c
 * Overlay: ovl_En_Jso
 * Description: Garo
 */

#include "z_en_jso.h"

#include "rand.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "audio.h"
#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"
#include "save.h"
#include "array_count.h"

#include "overlays/actors/ovl_En_Encount3/z_en_encount3.h"
#include "overlays/actors/ovl_En_Part/z_en_part.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnJso_Init(Actor* thisx, struct PlayState* play);
void EnJso_Destroy(Actor* thisx, struct PlayState* play);
void EnJso_Update(Actor* thisx, struct PlayState* play);
void EnJso_Draw(Actor* thisx, struct PlayState* play);

void EnJso_Reappear(EnJso* this, struct PlayState* play);
void EnJso_SetupCirclePlayer(EnJso* this, struct PlayState* play);
void EnJso_CirclePlayer(EnJso* this, struct PlayState* play);
void EnJso_Guard(EnJso* this, struct PlayState* play);
void EnJso_SetupSpinBeforeAttack(EnJso* this);
void EnJso_SpinBeforeAttack(EnJso* this, struct PlayState* play);
void EnJso_SetupDashAttack(EnJso* this);
void EnJso_DashAttack(EnJso* this, struct PlayState* play);
void EnJso_SetupSlash(EnJso* this, struct PlayState* play);
void EnJso_Slash(EnJso* this, struct PlayState* play);
void EnJso_SetupWaitAfterSlash(EnJso* this);
void EnJso_WaitAfterSlash(EnJso* this, struct PlayState* play);
void EnJso_SetupKnockedBack(EnJso* this);
void EnJso_KnockedBack(EnJso* this, struct PlayState* play);
void EnJso_SetupCower(EnJso* this);
void EnJso_Cower(EnJso* this, struct PlayState* play);
void EnJso_Stunned(EnJso* this, struct PlayState* play);
void EnJso_Damaged(EnJso* this, struct PlayState* play);
void EnJso_SetupJumpBack(EnJso* this);
void EnJso_JumpBack(EnJso* this, struct PlayState* play);
void EnJso_Dead(EnJso* this, struct PlayState* play);
void EnJso_SetupFallDownAndTalk(EnJso* this, struct PlayState* play);
void EnJso_BurstIntoFlames(EnJso* this, struct PlayState* play);

typedef enum EnJsoAction {
    /*  0 */ EN_JSO_ACTION_REAPPEAR,
    /*  1 */ EN_JSO_ACTION_CIRCLE_PLAYER,
    /*  2 */ EN_JSO_ACTION_GUARD,
    /*  3 */ EN_JSO_ACTION_SPIN_BEFORE_ATTACK,
    /*  4 */ EN_JSO_ACTION_DASH_ATTACK,
    /*  5 */ EN_JSO_ACTION_SLASH,
    /*  6 */ EN_JSO_ACTION_WAIT_AFTER_SLASH,
    /*  7 */ EN_JSO_ACTION_STUNNED,
    /*  8 */ EN_JSO_ACTION_KNOCKED_BACK,
    /*  9 */ EN_JSO_ACTION_COWER,
    /* 10 */ EN_JSO_ACTION_DAMAGED,
    /* 11 */ EN_JSO_ACTION_JUMP_BACK,
    /* 12 */ EN_JSO_ACTION_DEAD,
    /* 13 */ EN_JSO_ACTION_FALL_DOWN_AND_TALK
} EnJsoAction;

typedef enum EnJsoSwordState {
    /* 0 */ EN_JSO_SWORD_STATE_BOTH_DRAWN,
    /* 1 */ EN_JSO_SWORD_STATE_KNOCKED_OUT_OF_HANDS,
    /* 2 */ EN_JSO_SWORD_STATE_RIGHT_DRAWN,
    /* 3 */ EN_JSO_SWORD_STATE_LEFT_DRAWN,
    /* 5 */ EN_JSO_SWORD_STATE_NONE_DRAWN = 5
} EnJsoSwordState;

typedef enum EnJsoDamageEffect {
    /* 0x0 */ EN_JSO_DMGEFF_IMMUNE,        // Deals no damage and has no special effect
    /* 0x1 */ EN_JSO_DMGEFF_STUN,          // Deals no damage but stuns the Garo
    /* 0x2 */ EN_JSO_DMGEFF_FIRE,          // Damages and sets the Garo on fire
    /* 0x3 */ EN_JSO_DMGEFF_FREEZE,        // Damages and surrounds the Garo with ice
    /* 0x4 */ EN_JSO_DMGEFF_LIGHT_ORB,     // Damages and surrounds the Garo with light orbs
    /* 0x5 */ EN_JSO_DMGEFF_ELECTRIC_STUN, // Deals no damage but stuns the Garo and surrounds them with electric sparks
    /* 0xF */ EN_JSO_DMGEFF_NONE = 0xF     // Damages the Garo and has no special effect
} EnJsoDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, EN_JSO_DMGEFF_STUN),
    /* Deku stick    */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Slingshot     */ DMG_ENTRY(1, EN_JSO_DMGEFF_NONE),
    /* Explosive     */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Boomerang     */ DMG_ENTRY(1, EN_JSO_DMGEFF_NONE),
    /* Normal arrow  */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Hammer swing  */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Hookshot      */ DMG_ENTRY(1, EN_JSO_DMGEFF_NONE),
    /* Kokiri sword  */ DMG_ENTRY(1, EN_JSO_DMGEFF_NONE),
    /* Master sword  */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Giant's Knife */ DMG_ENTRY(4, EN_JSO_DMGEFF_NONE),
    /* Fire arrow    */ DMG_ENTRY(2, EN_JSO_DMGEFF_FIRE),
    /* Ice arrow     */ DMG_ENTRY(4, EN_JSO_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, EN_JSO_DMGEFF_LIGHT_ORB),
    /* Unk arrow 1   */ DMG_ENTRY(4, EN_JSO_DMGEFF_NONE),
    /* Unk arrow 2   */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Unk arrow 3   */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Fire magic    */ DMG_ENTRY(4, EN_JSO_DMGEFF_FIRE),
    /* Ice magic     */ DMG_ENTRY(3, EN_JSO_DMGEFF_NONE),
    /* Light magic   */ DMG_ENTRY(0, EN_JSO_DMGEFF_NONE),
    /* Shield        */ DMG_ENTRY(0, EN_JSO_DMGEFF_IMMUNE),
    /* Mirror Ray    */ DMG_ENTRY(0, EN_JSO_DMGEFF_NONE),
    /* Kokiri spin   */ DMG_ENTRY(1, EN_JSO_DMGEFF_NONE),
    /* Giant spin    */ DMG_ENTRY(4, EN_JSO_DMGEFF_NONE),
    /* Master spin   */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Kokiri jump   */ DMG_ENTRY(2, EN_JSO_DMGEFF_NONE),
    /* Giant jump    */ DMG_ENTRY(8, EN_JSO_DMGEFF_NONE),
    /* Master jump   */ DMG_ENTRY(4, EN_JSO_DMGEFF_NONE),
    /* Unknown 1     */ DMG_ENTRY(0, EN_JSO_DMGEFF_NONE),
    /* Unblockable   */ DMG_ENTRY(0, EN_JSO_DMGEFF_IMMUNE),
    /* Hammer jump   */ DMG_ENTRY(4, EN_JSO_DMGEFF_NONE),
    /* Unknown 2     */ DMG_ENTRY(0, EN_JSO_DMGEFF_NONE),
};

ActorProfile En_Jso_Profile = {
    /**/ ACTOR_EN_JSO,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_JSO,
    /**/ sizeof(EnJso),
    /**/ EnJso_Init,
    /**/ EnJso_Destroy,
    /**/ EnJso_Update,
    /**/ EnJso_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xF7CFFFFF, 0x08, 0x18 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 22, 55, 0, { 0, 0, 0 } },
};

static ColliderQuadInit sQuadInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_QUAD,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xF7CFFFFF, 0x04, 0x30 },
        { 0x00000000, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL | ATELEM_UNK7,
        ACELEM_NONE,
        OCELEM_NONE,
    },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

typedef enum EnJsoAnimation {
    /*  0 */ EN_JSO_ANIM_APPEAR,
    /*  1 */ EN_JSO_ANIM_IDLE,
    /*  2 */ EN_JSO_ANIM_BOUNCE,
    /*  3 */ EN_JSO_ANIM_GUARD,
    /*  4 */ EN_JSO_ANIM_DASH_ATTACK,
    /*  5 */ EN_JSO_ANIM_SLASH_START,
    /*  6 */ EN_JSO_ANIM_SLASH_LOOP,
    /*  7 */ EN_JSO_ANIM_KNOCKED_BACK,
    /*  8 */ EN_JSO_ANIM_COWER,
    /*  9 */ EN_JSO_ANIM_DAMAGED,
    /* 10 */ EN_JSO_ANIM_JUMP_BACK,
    /* 11 */ EN_JSO_ANIM_FALL_DOWN,
    /* 12 */ EN_JSO_ANIM_MAX
} EnJsoAnimation;

static AnimationHeader* sAnimations[EN_JSO_ANIM_MAX] = {
    &gGaroAppearAnim,      // EN_JSO_ANIM_APPEAR
    &gGaroIdleAnim,        // EN_JSO_ANIM_IDLE
    &gGaroBounceAnim,      // EN_JSO_ANIM_BOUNCE
    &gGaroGuardAnim,       // EN_JSO_ANIM_GUARD
    &gGaroDashAttackAnim,  // EN_JSO_ANIM_DASH_ATTACK
    &gGaroSlashStartAnim,  // EN_JSO_ANIM_SLASH_START
    &gGaroSlashLoopAnim,   // EN_JSO_ANIM_SLASH_LOOP
    &gGaroKnockedBackAnim, // EN_JSO_ANIM_KNOCKED_BACK
    &gGaroCowerAnim,       // EN_JSO_ANIM_COWER
    &gGaroDamagedAnim,     // EN_JSO_ANIM_DAMAGED
    &gGaroJumpBackAnim,    // EN_JSO_ANIM_JUMP_BACK
    &gGaroFallDownAnim,    // EN_JSO_ANIM_FALL_DOWN
};

static u8 sAnimationModes[EN_JSO_ANIM_MAX] = {
    ANIMMODE_ONCE, // EN_JSO_ANIM_APPEAR
    ANIMMODE_LOOP, // EN_JSO_ANIM_IDLE
    ANIMMODE_LOOP, // EN_JSO_ANIM_BOUNCE
    ANIMMODE_ONCE, // EN_JSO_ANIM_GUARD
    ANIMMODE_ONCE, // EN_JSO_ANIM_DASH_ATTACK
    ANIMMODE_ONCE, // EN_JSO_ANIM_SLASH_START
    ANIMMODE_LOOP, // EN_JSO_ANIM_SLASH_LOOP
    ANIMMODE_ONCE, // EN_JSO_ANIM_KNOCKED_BACK
    ANIMMODE_LOOP, // EN_JSO_ANIM_COWER
    ANIMMODE_LOOP, // EN_JSO_ANIM_DAMAGED
    ANIMMODE_ONCE, // EN_JSO_ANIM_JUMP_BACK
    ANIMMODE_ONCE, // EN_JSO_ANIM_FALL_DOWN
};

void EnJso_Init(Actor* thisx, PlayState* play) {
    EnJso* this = (EnJso*)thisx;
    EffectBlureInit1 rightSwordBlureInit;
    EffectBlureInit1 leftSwordBlureInit;

    this->actor.naviEnemyId = NAVI_ENEMY_GARO;
    this->actor.attentionRangeType = ATTENTION_RANGE_5;
    this->actor.colChkInfo.mass = 80;
    this->actor.colChkInfo.health = 10;
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(this->actor.colChkInfo.health, MONSTER_HP);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 0.0f);
    this->actor.colChkInfo.damageTable = &sDamageTable;
    this->actor.shape.shadowScale = 0.0f;
    SkelAnime_InitFlex(play, &this->skelAnime, &gGaroSkel, &gGaroAppearAnim, this->jointTable, this->morphTable, GARO_LIMB_MAX);
    this->actor.focus.pos = this->actor.world.pos;
    this->actor.shape.yOffset = 970.0f;

    Collider_InitCylinder(play, &this->bodyCollider);
    Collider_SetCylinder(play, &this->bodyCollider, &this->actor, &sCylinderInit);
    Collider_InitQuad(play, &this->rightSwordCollider);
    Collider_SetQuad(play, &this->rightSwordCollider, &this->actor, &sQuadInit);
    Collider_InitQuad(play, &this->leftSwordCollider);
    Collider_SetQuad(play, &this->leftSwordCollider, &this->actor, &sQuadInit);

    rightSwordBlureInit.p1StartColor[0] = leftSwordBlureInit.p1StartColor[0]  = rightSwordBlureInit.p1StartColor[1] = leftSwordBlureInit.p1StartColor[1] = rightSwordBlureInit.p1StartColor[2] = leftSwordBlureInit.p1StartColor[2] = rightSwordBlureInit.p1StartColor[3] = leftSwordBlureInit.p1StartColor[3] = \
    rightSwordBlureInit.p2StartColor[0] = leftSwordBlureInit.p2StartColor[0]  = rightSwordBlureInit.p2StartColor[1] = leftSwordBlureInit.p2StartColor[1] = rightSwordBlureInit.p2StartColor[2] = leftSwordBlureInit.p2StartColor[2] = rightSwordBlureInit.p1EndColor[0]   = leftSwordBlureInit.p1EndColor[0]   = \
    rightSwordBlureInit.p1EndColor[1]   = leftSwordBlureInit.p1EndColor[1]    = rightSwordBlureInit.p1EndColor[2]   = leftSwordBlureInit.p1EndColor[2]   = rightSwordBlureInit.p2EndColor[0]   = leftSwordBlureInit.p2EndColor[0]   = rightSwordBlureInit.p2EndColor[1]   = leftSwordBlureInit.p2EndColor[1]   = \
    rightSwordBlureInit.p2EndColor[2]   = leftSwordBlureInit.p2EndColor[2]    = 255;
    leftSwordBlureInit.p2StartColor[3]  = rightSwordBlureInit.p2StartColor[3] = 64;
    rightSwordBlureInit.p1EndColor[3]   = leftSwordBlureInit.p1EndColor[3]    = rightSwordBlureInit.p2EndColor[3]   = leftSwordBlureInit.p2EndColor[3]   = 0;
    rightSwordBlureInit.elemDuration    = leftSwordBlureInit.elemDuration     = 8;
    rightSwordBlureInit.unkFlag         = leftSwordBlureInit.unkFlag          = 0;
    rightSwordBlureInit.calcMode        = leftSwordBlureInit.calcMode         = 2;

    Effect_Add(play, &this->rightSwordBlureIndex, EFFECT_BLURE1, 0, 0, &rightSwordBlureInit);
    Effect_Add(play, &this->leftSwordBlureIndex,  EFFECT_BLURE1, 0, 0, &leftSwordBlureInit);

    Message_StartTextbox(play, 0x94D0, NULL);
    this->actor.gravity = -3.0f;
    this->scale = 0.035f;
    EnJso_SetupJumpBack(this);
}

void EnJso_Destroy(Actor* thisx, PlayState* play) {
    EnJso* this = (EnJso*)thisx;
    EnEncount3* parent;

    Collider_DestroyCylinder(play, &this->bodyCollider);
    Collider_DestroyQuad(play, &this->rightSwordCollider);
    Collider_DestroyQuad(play, &this->leftSwordCollider);

    if ((this->actor.parent != NULL) && (this->actor.parent->update != NULL)) {
        parent = (EnEncount3*)this->actor.parent;
        if (parent->actor.update != NULL) {
            parent->child = NULL;
            if (parent->unk14E > 0)
                parent->unk14E--;
        }
    }

    Effect_Delete(play, this->rightSwordBlureIndex);
    Effect_Delete(play, this->leftSwordBlureIndex);
}

void EnJso_ChangeAnim(EnJso* this, s32 animIndex) {
    f32 morphFrames = -4.0f;

    this->animEndFrame = Animation_GetLastFrame(sAnimations[animIndex]);
    if (animIndex == EN_JSO_ANIM_GUARD || animIndex == EN_JSO_ANIM_DAMAGED)
        morphFrames = 0.0f;

    Animation_Change(&this->skelAnime, sAnimations[animIndex], 1.0f, 0.0f, this->animEndFrame, sAnimationModes[animIndex], morphFrames);
}

void EnJso_SetupReappear(EnJso* this, PlayState* play) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_APPEAR);
    this->actor.speed = 0.0f;
    this->actor.velocity.y = 0.0f;

    this->isPlayerLockedOn = false;
    this->isAttacking = false;

    if (this->swordState != EN_JSO_SWORD_STATE_BOTH_DRAWN)
        this->swordState = EN_JSO_SWORD_STATE_BOTH_DRAWN;

    this->actor.shape.rot.x = this->actor.world.rot.x = 0;
    this->actor.shape.rot.y = this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
    this->actor.floorHeight = this->actor.home.pos.y;
    Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, this->actor.shape.shadowScale, 1, 8.0f, 500, 10, true);
    this->actor.flags |= ACTOR_FLAG_LOCK_ON_DISABLED;
    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_ENTRY);
    this->afterimageCount = 0;
    this->action = EN_JSO_ACTION_REAPPEAR;
    this->actor.gravity = 0.0f;
    this->actionFunc = EnJso_Reappear;
}

/**
 * This function makes the Garo jump out of the ground from its home position. It's intended to be used if the Garo gets too far away from the player (for example, if the Garo's dash attack makes it fall off a ledge); this will ensure the Garo is back inside the ring of fire, so the player can interact with them again.
 */
void EnJso_Reappear(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    if (this->actor.colChkInfo.health <= 0) {
        Player* player = GET_PLAYER(play);
        player->actor.freezeTimer = 3;
    }

    Math_ApproachF(&this->actor.shape.shadowScale, 16.0f, 0.4f, 4.0f);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xBB8, 0x14);

    if ((play->gameplayFrames % 8) == 0)
        Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, this->actor.shape.shadowScale, 1, 8.0f, 500, 10, true);

    if (curFrame >= this->animEndFrame) {
        this->actor.gravity = -3.0f;
        if (this->actor.colChkInfo.health > 0) {
            this->actor.flags &= ~ACTOR_FLAG_LOCK_ON_DISABLED;
            EnJso_SetupCirclePlayer(this, play);
        } else EnJso_SetupFallDownAndTalk(this, play);
    }
}

void EnJso_SetupCirclePlayer(EnJso* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    EnJso_ChangeAnim(this, EN_JSO_ANIM_BOUNCE);
    this->circlingAngularVelocity = 0x258;
    this->action = EN_JSO_ACTION_CIRCLE_PLAYER;
    this->circlingAngle = player->actor.shape.rot.y;
    this->actionFunc = EnJso_CirclePlayer;
}

/**
 * Makes the Garo bounce in a circle around the player, sometimes randomly switching the direction it's traveling, until
 * the attack timer reaches 0. Once it does, then the Garo will prepare to attack.
 */
void EnJso_CirclePlayer(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;
    Player* player = GET_PLAYER(play);
    Vec3f targetPos;

    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_MOVING - SFX_FLAG);

    if (this->action != EN_JSO_ACTION_REAPPEAR && fabsf(player->actor.world.pos.y - this->actor.world.pos.y) > 60.0f) {
        EnJso_SetupReappear(this, play);
        return;
    }

    if (curFrame < this->animEndFrame)
        SkelAnime_Update(&this->skelAnime);
    else if (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND)
        SkelAnime_Update(&this->skelAnime);

    if (Animation_OnFrame(&this->skelAnime, 6.0f)) {
        this->actor.velocity.y = 10.0f;
        //if ((play->gameplayFrames % 2) == 0)
        //    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_CRYING);
    }

    if (Animation_OnFrame(&this->skelAnime, 12.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_SKIP);
        this->actor.speed = 0.0f;
        if (Rand_ZeroFloat(1.0f) < 0.5f)
            this->circlingAngularVelocity = -this->circlingAngularVelocity;
    }

    if (this->attackTimer == 0 && !this->isAttacking && this->isPlayerLockedOn) {
        this->isAttacking = true;
        this->action = EN_JSO_ACTION_SPIN_BEFORE_ATTACK;
        this->actor.speed = 0.0f;
        EnJso_SetupSpinBeforeAttack(this);
        return;
    }

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, 0x14);
    Math_ApproachF(&this->actor.speed, 5.0f, 0.3f, 2.0f);
    this->circlingAngle += this->circlingAngularVelocity;
    targetPos.x = (Math_SinS(this->circlingAngle) * 200.0f) + player->actor.world.pos.x;
    targetPos.y = this->actor.world.pos.y;
    targetPos.z = (Math_CosS(this->circlingAngle) * 200.0f) + player->actor.world.pos.z;
    Math_SmoothStepToS(&this->actor.world.rot.y, Math_Vec3f_Yaw(&this->actor.world.pos, &targetPos), 0xA, 0xFA0, 0x14);
}

void EnJso_SetupGuard(EnJso* this) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_GUARD);
    this->action = EN_JSO_ACTION_GUARD;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    Actor_PlaySfx(&this->actor, NA_SE_IT_SHIELD_BOUND);
    this->bodyCollider.base.acFlags |= AC_HARD;
    this->actionFunc = EnJso_Guard;
}

/**
 * Plays the guard animation to completion, then goes back to circling the player.
 */
void EnJso_Guard(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    if (curFrame >= this->animEndFrame) {
        this->isAttacking = false;
        EnJso_SetupCirclePlayer(this, play);
    }
}

void EnJso_SetupSpinBeforeAttack(EnJso* this) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_DASH_ATTACK);
    this->actor.world.rot.y = -this->actor.yawTowardsPlayer;
    this->actor.speed = 10.0f;
    this->actor.velocity.y = 20.0f;
    this->actionFunc = EnJso_SpinBeforeAttack;
}

/**
 * Leaps into the air while spinning forward. Once the Garo touches the ground, it will begin a dash attack.
 */
void EnJso_SpinBeforeAttack(EnJso* this, PlayState* play) {
    this->actor.world.rot.x += 0x1770;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xFA0, 0x14);

    if (this->actor.velocity.y > 0.0f)
        return;

    if (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) {
        this->actor.world.rot.x = 0;
        this->actor.velocity.y = 0.0f;
        this->actor.speed = 0.0f;
        this->actor.world.rot.y = this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        EnJso_SetupDashAttack(this);
    }
}

void EnJso_SetupDashAttack(EnJso* this) {
    this->action = EN_JSO_ACTION_DASH_ATTACK;
    this->attackMovementTimer = 40;
    this->bodyCollider.base.colMaterial = COL_MATERIAL_HIT2;
    this->bodyCollider.base.acFlags &= ~AC_HARD;
    this->actor.speed = 15.0f;
    this->actor.velocity.y = 13.0f;
    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_ENTRY);
    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_DASH_2);
    this->actionFunc = EnJso_DashAttack;
}

/**
 * Dashes toward the player with its swords out. If the player shields the attack, the Garo will be knocked back and drop its swords. The Garo will stop dashing and perform a slash if it's close enough to the player, if the difference
 * between its y-rotation and the yaw towards the player is large enough (usually indicating that it has dashed past the player), or if 40 frames have passed, whichever comes first.
 */
void EnJso_DashAttack(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;
    s16 yawDiff, absYawDiff;
    Vec3f knockbackVelocity;

    if ((this->rightSwordCollider.base.atFlags & AT_BOUNCED) || (this->leftSwordCollider.base.atFlags & AT_BOUNCED)) {
        this->rightSwordCollider.base.atFlags &= ~(AT_HIT | AT_BOUNCED);
        this->leftSwordCollider.base.atFlags &= ~(AT_HIT | AT_BOUNCED);
        if (this->swordState == EN_JSO_SWORD_STATE_BOTH_DRAWN) {
            Matrix_RotateY(this->actor.yawTowardsPlayer, MTXMODE_NEW);
            knockbackVelocity.x = 0.0f;
            knockbackVelocity.y = 0.0f;
            knockbackVelocity.z = -10.0f;
            Matrix_MultVec3f(&knockbackVelocity, &this->knockbackVelocity);
            this->swordState = EN_JSO_SWORD_STATE_KNOCKED_OUT_OF_HANDS;
            this->attackMovementTimer = 0;
            this->disableBlure = true;
            AudioSfx_SetChannelIO(&this->actor.projectedPos, NA_SE_EN_ANSATSUSYA_DASH_2, 0);
            EnJso_SetupKnockedBack(this);
            return;
        }
    }

    if (this->actor.velocity.y < 0.0f && (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND))
        this->actor.velocity.y = 13.0f;

    if (curFrame < this->animEndFrame)
        return;

    yawDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    absYawDiff = ABS_ALT(yawDiff);

    if (this->attackMovementTimer == 0 || this->actor.xzDistToPlayer < 100.0f || absYawDiff > 0x4300) {
        AudioSfx_SetChannelIO(&this->actor.projectedPos, NA_SE_EN_ANSATSUSYA_DASH_2, 0);
        Math_ApproachZeroF(&this->actor.speed, 0.3f, 3.0f);
        EnJso_SetupSlash(this, play);
    }
}

void EnJso_SetupSlash(EnJso* this, PlayState* play) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_SLASH_START);
    this->action = EN_JSO_ACTION_SLASH;
    Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, this->actor.shape.shadowScale, 1, 8.0f, 500, 10, true);
    Math_ApproachZeroF(&this->actor.speed, 0.3f, 3.0f);
    this->slashHitSomething = false;
    Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
    this->actionFunc = EnJso_Slash;
}

/**
 * Slash in place with both swords. If the player shields the attack, the Garo will be knocked back and drop its swords. Once the slash animation ends, this function will transition the Garo to a waiting state.
 */
void EnJso_Slash(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    Math_ApproachZeroF(&this->actor.speed, 0.5f, 5.0f);

    if ((play->gameplayFrames % 8) == 0)
        Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, this->actor.shape.shadowScale, 1, 8.0f, 500, 10, true);

    if ((this->rightSwordCollider.base.atFlags & AT_HIT) || (this->leftSwordCollider.base.atFlags & AT_HIT)) {
        this->slashHitSomething = true;
        this->rightSwordCollider.base.atFlags &= ~AT_HIT;
        this->leftSwordCollider.base.atFlags &= ~AT_HIT;
    }

    if ((this->rightSwordCollider.base.atFlags & AT_BOUNCED) || (this->leftSwordCollider.base.atFlags & AT_BOUNCED)) {
        this->rightSwordCollider.base.atFlags &= ~(AT_HIT | AT_BOUNCED);
        this->leftSwordCollider.base.atFlags &= ~(AT_HIT | AT_BOUNCED);

        if (this->swordState == EN_JSO_SWORD_STATE_BOTH_DRAWN) {
            Vec3f knockbackVelocity;

            Matrix_RotateY(this->actor.yawTowardsPlayer, MTXMODE_NEW);
            knockbackVelocity.x = 0.0f;
            knockbackVelocity.y = 0.0f;
            knockbackVelocity.z = -10.0f;
            Matrix_MultVec3f(&knockbackVelocity, &this->knockbackVelocity);
            this->swordState = EN_JSO_SWORD_STATE_KNOCKED_OUT_OF_HANDS;
            this->disableBlure = true;
            EnJso_SetupKnockedBack(this);
            return;
        }
    }

    if (curFrame >= this->animEndFrame) {
        this->actor.speed = 0.0f;
        this->disableBlure = true;
        EnJso_SetupWaitAfterSlash(this);
    }
}

void EnJso_SetupWaitAfterSlash(EnJso* this) {
    if (this->slashHitSomething) {
        EnJso_ChangeAnim(this, EN_JSO_ANIM_SLASH_LOOP);
        this->timer = 20;
    } else {
        EnJso_ChangeAnim(this, EN_JSO_ANIM_SLASH_LOOP);
        this->timer = 40;
    }

    this->action = EN_JSO_ACTION_WAIT_AFTER_SLASH;
    this->actionFunc = EnJso_WaitAfterSlash;
}

/**
 * Waits either 20 or 40 frames, depending on whether or not the Garo hit the player with its slash attack. Once this waiting period ends, the Garo starts circling the player again.
 */
void EnJso_WaitAfterSlash(EnJso* this, PlayState* play) {
    if (this->timer == 0) {
        this->attackTimer = Rand_S16Offset(30, 30);
        this->bodyCollider.base.colMaterial = COL_MATERIAL_NONE;
        this->bodyCollider.base.acFlags |= AC_HARD;
        this->slashHitSomething = false;
        this->isAttacking = false;
        EnJso_SetupCirclePlayer(this, play);
    }
}

void EnJso_SetupKnockedBack(EnJso* this) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_KNOCKED_BACK);
    this->bodyCollider.base.acFlags &= ~AC_HARD;
    this->timer = 30;
    this->action = EN_JSO_ACTION_KNOCKED_BACK;
    this->actor.speed = 0.0f;
    this->actionFunc = EnJso_KnockedBack;
}

/**
 * Plays the knocked back animation to completion, then transitions to cowering on the ground.
 */
void EnJso_KnockedBack(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    if (curFrame >= this->animEndFrame)
        EnJso_SetupCower(this);
}

void EnJso_SetupCower(EnJso* this) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_COWER);
    this->action = EN_JSO_ACTION_COWER;
    this->timer = 30;
    this->actionFunc = EnJso_Cower;
}

/**
 * Cower on the ground for 30 frames, then jump back.
 */
void EnJso_Cower(EnJso* this, PlayState* play) {
    if (this->timer == 0)
        EnJso_SetupJumpBack(this);
}

/**
 * Unlike most enemies, this will make the Garo play its damaged animation rather than stopping all animations.
 */
void EnJso_SetupStunned(EnJso* this) {
    Vec3f knockbackVelocity;

    AudioSfx_SetChannelIO(&this->actor.projectedPos, NA_SE_EN_ANSATSUSYA_DASH_2, 0);
    EnJso_ChangeAnim(this, EN_JSO_ANIM_DAMAGED);

    if (((this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX) ||
         (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX)) &&
        (this->drawDmgEffAlpha == 0)) {
        this->drawDmgEffAlpha = 0;
        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
    }

    this->actor.speed = 0.0f;
    this->timer = 40;
    Matrix_RotateY(this->actor.yawTowardsPlayer, MTXMODE_NEW);
    Matrix_MultVecZ(-10.0f, &knockbackVelocity);
    Math_Vec3f_Copy(&this->knockbackVelocity, &knockbackVelocity);
    this->action = EN_JSO_ACTION_STUNNED;
    this->bodyCollider.base.acFlags &= ~AC_HARD;
    this->actionFunc = EnJso_Stunned;
}

/**
 * Makes the Garo play its damaged animation and stop moving until 40 frames have passed, then it jumps back.
 */
void EnJso_Stunned(EnJso* this, PlayState* play) {
    if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX && this->drawDmgEffAlpha != 0 && this->drawDmgEffAlpha < 60)
        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX;

    if (this->timer == 0 && this->drawDmgEffAlpha == 0) {
        if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX || this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
            Actor_SpawnIceEffects(play, &this->actor, this->bodyPartsPos, EN_JSO_BODYPART_MAX, 2, 0.3f, 0.2f);
            this->drawDmgEffAlpha = 0;
            this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
        }

        EnJso_SetupJumpBack(this);
    }
}

void EnJso_SetupDamaged(EnJso* this, PlayState* play) {
    Vec3f knockbackVelocity;

    AudioSfx_SetChannelIO(&this->actor.projectedPos, NA_SE_EN_ANSATSUSYA_DASH_2, 0);
    EnJso_ChangeAnim(this, EN_JSO_ANIM_DAMAGED);
    this->slashHitSomething = false;
    this->actor.velocity.y = 10.0f;
    this->actor.speed = 0.0f;
    Matrix_RotateY(this->actor.yawTowardsPlayer, MTXMODE_NEW);
    Matrix_MultVecZ(-20.0f, &knockbackVelocity);
    Math_Vec3f_Copy(&this->knockbackVelocity, &knockbackVelocity);

    if ((this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX || this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) && this->drawDmgEffAlpha != 0) {
        Actor_SpawnIceEffects(play, &this->actor, this->bodyPartsPos, EN_JSO_BODYPART_MAX, 2, 0.3f, 0.2f);
        this->drawDmgEffAlpha = 0;
        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
    }

    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 8);
    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_DAMAGE);
    this->action = EN_JSO_ACTION_DAMAGED;
    this->actionFunc = EnJso_Damaged;
}

/**
 * Plays the damaged animation until the Garo is touching the ground and no longer has its red color filter, at which point it will jump back.
 */
void EnJso_Damaged(EnJso* this, PlayState* play) {
    if (this->actor.velocity.y > 0.0f)
        return;
    if (this->actor.colorFilterTimer == 0 && (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND))
        EnJso_SetupJumpBack(this);
}

void EnJso_SetupJumpBack(EnJso* this) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_JUMP_BACK);
    this->action = EN_JSO_ACTION_JUMP_BACK;
    this->timer = 30;
    this->actor.speed = 7.0f;
    this->actor.velocity.y = 20.0f;

    if (this->swordState != EN_JSO_SWORD_STATE_BOTH_DRAWN) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_SWORD);
        this->swordState = EN_JSO_SWORD_STATE_BOTH_DRAWN;
    }

    this->actor.world.rot.y += 0x8000;
    this->actionFunc = EnJso_JumpBack;
}

/**
 * Jump backwards away from the player. After the Garo touches the ground, the jump back animation completes, and 30 frames have passed, the Garo will transition to circling the player.
 */
void EnJso_JumpBack(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0xBB8, 0x14);

    if (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND)
        this->actor.speed = 0.0f;

    if (this->timer == 0 || (curFrame >= this->animEndFrame && (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND))) {
        this->actor.world.rot.x = 0;
        this->actor.velocity.y = 0.0f;
        this->actor.speed = 0.0f;
        this->timer = 0;
        this->isAttacking = false;
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->attackTimer = Rand_S16Offset(10, 10);
        EnJso_SetupCirclePlayer(this, play);
    }
}

void EnJso_SetupDead(EnJso* this, PlayState* play) {
    AudioSfx_SetChannelIO(&this->actor.projectedPos, NA_SE_EN_ANSATSUSYA_DASH_2, 0);
    EnJso_ChangeAnim(this, EN_JSO_ANIM_DAMAGED);

    if ((this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX || this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) && this->drawDmgEffAlpha == 0)
        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;

    Message_StartTextbox(play, 0x94D1, NULL);

    this->actor.flags &= ~(ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE);
    this->actor.flags |= ACTOR_FLAG_LOCK_ON_DISABLED;
    this->actor.speed = 0.0f;
    this->disableBlure = true;
    this->timer = 30;
    Enemy_StartFinishingBlow(play, &this->actor);
    Actor_PlaySfx(&this->actor, NA_SE_EN_ANSATSUSYA_DEAD);
    this->action = EN_JSO_ACTION_DEAD;
    this->actionFunc = EnJso_Dead;
}

/**
 * Plays the damaged animation for 30 frames, then the Garo falls down and starts talking to the player.
 */
void EnJso_Dead(EnJso* this, PlayState* play) {
    f32 curFrame = this->skelAnime.curFrame;

    if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX || this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
        if (this->drawDmgEffAlpha != 0) {
            Actor_SpawnIceEffects(play, &this->actor, this->bodyPartsPos, EN_JSO_BODYPART_MAX, 2, 0.3f, 0.2f);
            this->drawDmgEffAlpha = 0;
            this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
        } else return;
    }

    if (curFrame >= this->animEndFrame && this->timer == 0)
        EnJso_SetupFallDownAndTalk(this, play);
}

void EnJso_SetupFallDownAndTalk(EnJso* this, PlayState* play) {
    EnJso_ChangeAnim(this, EN_JSO_ANIM_FALL_DOWN);
    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actor.flags |= (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY);
    Actor_ChangeCategory(play, &play->actorCtx, &this->actor, ACTORCAT_NPC);
    this->actor.flags &= ~ACTOR_FLAG_LOCK_ON_DISABLED;
    this->action = EN_JSO_ACTION_FALL_DOWN_AND_TALK;
    this->actionFunc = EnJso_BurstIntoFlames;
}

/**
 * Once the player closes the Garo's final textbox, this function will spawn nine green flames to obscure the Garo and kill the actor.
 */
void EnJso_BurstIntoFlames(EnJso* this, PlayState* play) {
    Vec3f firePos;
    Vec3f fireVelocityAndAccel[] = {
        {  1.0f, 0.0f,  0.5f }, {  1.0f, 0.0f, -0.5f }, { -1.0f, 0.0f, 0.5f },
        { -1.0f, 0.0f, -0.5f }, {  0.5f, 0.0f,  1.0f }, { -0.5f, 0.0f, 1.0f },
        {  0.5f, 0.0f, -1.0f }, { -0.5f, 0.0f, -1.0f }, {  0.0f, 0.0f, 0.0f },
    };
    f32 scale, scaleStep;
    u8 i;

    for (i=0; i<ARRAY_COUNT(fireVelocityAndAccel); i++) {
        Math_Vec3f_Copy(&firePos, &this->actor.world.pos);
        firePos.x += Rand_CenteredFloat(30.0f);
        firePos.y = this->actor.floorHeight;
        firePos.z += Rand_CenteredFloat(30.0f);
        scale = (Rand_ZeroFloat(1.0f) * 100.0f) + 100.0f;
        scaleStep = 20.0f;
        EffectSsDeadDb_Spawn(play, &firePos, &fireVelocityAndAccel[i], &fireVelocityAndAccel[i], scale, scaleStep, 255, 255, 255, 255, 0, 255, 0, 1, 9, true);
    }

    SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 10, NA_SE_EN_EXTINCT - SFX_FLAG);

    this->isAttacking = false;
    this->isPlayerLockedOn = false;

    Actor_Kill(&this->actor);
}

void EnJso_UpdateDamage(EnJso* this, PlayState* play) {
    s32 attackDealsDamage = false;

    if (this->bodyCollider.base.acFlags & AC_HIT) {
        this->bodyCollider.base.acFlags &= ~AC_HIT;
        if (this->actor.colChkInfo.damageReaction == EN_JSO_DMGEFF_STUN || this->actor.colChkInfo.damageReaction == EN_JSO_DMGEFF_ELECTRIC_STUN) {
            if ((this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_SFX && this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) || this->drawDmgEffAlpha == 0) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
                Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_BLUE, 255, COLORFILTER_BUFFLAG_OPA, 40);
                if (this->actor.colChkInfo.damageReaction == EN_JSO_DMGEFF_ELECTRIC_STUN) {
                    this->drawDmgEffAlpha = 40;
                    this->drawDmgEffType = ACTOR_DRAW_DMGEFF_ELECTRIC_SPARKS_SMALL;
                }

                EnJso_SetupStunned(this);
            }
        } else {
            switch (this->action) {
                case EN_JSO_ACTION_CIRCLE_PLAYER:
                case EN_JSO_ACTION_GUARD:
                    this->actor.speed = 0.0f;
                    EnJso_SetupGuard(this);
                    attackDealsDamage = false;
                    break;

                case EN_JSO_ACTION_DASH_ATTACK:
                case EN_JSO_ACTION_SLASH:
                case EN_JSO_ACTION_WAIT_AFTER_SLASH:
                case EN_JSO_ACTION_STUNNED:
                case EN_JSO_ACTION_COWER:
                    switch (this->actor.colChkInfo.damageReaction) {
                        case EN_JSO_DMGEFF_NONE:
                            attackDealsDamage = true;
                            break;

                        case EN_JSO_DMGEFF_FIRE:
                            this->drawDmgEffAlpha = 40;
                            this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
                            attackDealsDamage = true;
                            break;

                        case EN_JSO_DMGEFF_LIGHT_ORB:
                            if ((this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_SFX && this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) || this->drawDmgEffAlpha == 0) {
                                this->drawDmgEffAlpha = 20;
                                this->drawDmgEffType = ACTOR_DRAW_DMGEFF_LIGHT_ORBS;
                                attackDealsDamage = true;
                            }
                            break;

                        case EN_JSO_DMGEFF_FREEZE:
                            if ((this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_SFX && this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) || this->drawDmgEffAlpha == 0) {
                                attackDealsDamage = false;
                                Actor_ApplyDamage(&this->actor);
                                this->drawDmgEffAlpha = 80;
                                this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FROZEN_SFX;
                                this->drawDmgEffScale = 0.0f;
                                this->drawDmgEffFrozenSteamScale = 1.5f;
                            }

                            if (this->actor.colChkInfo.health <= 0) {
                                EnJso_SetupDead(this, play);
                                attackDealsDamage = false;
                            } else {
                                EnJso_SetupStunned(this);
                                attackDealsDamage = false;
                            }
                            break;

                        default:
                            break;
                    }
                    break;

                default:
                    break;
            }

            if (attackDealsDamage) {
                Actor_ApplyDamage(&this->actor);
                this->bodyCollider.base.colMaterial = COL_MATERIAL_NONE;
                this->bodyCollider.base.acFlags |= AC_HARD;
                if (this->actor.colChkInfo.health > 0)
                    EnJso_SetupDamaged(this, play);
                else EnJso_SetupDead(this, play);
            }
        }
    }
}

void EnJso_Update(Actor* thisx, PlayState* play) {
    EnJso* this = (EnJso*)thisx;
    u8 i;

    if (this->action != EN_JSO_ACTION_CIRCLE_PLAYER)
        SkelAnime_Update(&this->skelAnime);

    EnJso_UpdateDamage(this, play);
    if (this->actor.isLockedOn)
        this->isPlayerLockedOn = true;
    else if (this->isPlayerLockedOn)
        this->isPlayerLockedOn = false;

    this->actionFunc(this, play);
    DECR(this->attackMovementTimer);
    DECR(this->attackTimer);
    DECR(this->timer);
    DECR(this->drawDmgEffAlpha);

    if (this->action != EN_JSO_ACTION_FALL_DOWN_AND_TALK)
        Actor_SetFocus(&this->actor, 50.0f);
    else Actor_SetFocus(&this->actor, 30.0f);

    Actor_SetScale(&this->actor, this->scale);
    Actor_MoveXZGravity(&this->actor);
    this->actor.world.pos.x += this->knockbackVelocity.x;
    this->actor.world.pos.z += this->knockbackVelocity.z;

    if (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) {
        Math_ApproachZeroF(&this->knockbackVelocity.x, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->knockbackVelocity.z, 1.0f, 2.0f);
    }

    if (this->action != EN_JSO_ACTION_REAPPEAR)
        Actor_UpdateBgCheckInfo(play, &this->actor, 35.0f, 40.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);

    if (this->action == EN_JSO_ACTION_SPIN_BEFORE_ATTACK || this->action == EN_JSO_ACTION_DASH_ATTACK) {
        this->afterimageIndex++;
        if (this->afterimageIndex >= EN_JSO_AFTERIMAGE_COUNT)
            this->afterimageIndex = 0;

        if (this->afterimageCount < EN_JSO_AFTERIMAGE_COUNT - 1)
            this->afterimageCount++;

        this->afterimagePos[this->afterimageIndex] = this->actor.world.pos;
        this->afterimagePos[this->afterimageIndex].y += 40.0f;
        this->afterimageRot[this->afterimageIndex] = this->actor.world.rot;

        for (i=0; i<EN_JSO_AFTERIMAGE_COUNT; i++)
            this->afterimageJointTable[this->afterimageIndex][i] = this->jointTable[i];
    } else this->afterimageCount = 0;

    if (this->action != EN_JSO_ACTION_CIRCLE_PLAYER && this->action != EN_JSO_ACTION_SPIN_BEFORE_ATTACK && this->action != EN_JSO_ACTION_DAMAGED && this->action != EN_JSO_ACTION_JUMP_BACK)
        this->actor.shape.rot.y = this->actor.world.rot.y;

    this->actor.shape.rot.x = this->actor.world.rot.x;
    Collider_UpdateCylinder(&this->actor, &this->bodyCollider);

    if (this->action != EN_JSO_ACTION_REAPPEAR && this->action != EN_JSO_ACTION_DAMAGED && this->action != EN_JSO_ACTION_SPIN_BEFORE_ATTACK && this->action != EN_JSO_ACTION_DEAD && this->action != EN_JSO_ACTION_FALL_DOWN_AND_TALK) {
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->bodyCollider.base);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->bodyCollider.base);

        if (this->action == EN_JSO_ACTION_SLASH && !this->slashHitSomething && this->swordState == EN_JSO_SWORD_STATE_BOTH_DRAWN) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->rightSwordCollider.base);
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->leftSwordCollider.base);
        }
    }
}

s32 EnJso_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnJso* this = (EnJso*)thisx;

    if (limbIndex == GARO_LIMB_RIGHT_ARM) {
        rot->x += this->rightArmRot.x;
        rot->y += this->rightArmRot.y;
        rot->z += this->rightArmRot.z;
    }

    if (limbIndex == GARO_LIMB_ROBE_RIGHT) {
        rot->x += this->robeRightRot.x;
        rot->y += this->robeRightRot.y;
        rot->z += this->robeRightRot.z;
    }

    if (limbIndex == GARO_LIMB_LEFT_SWORD || limbIndex == GARO_LIMB_RIGHT_SWORD) {
        if (this->swordState == EN_JSO_SWORD_STATE_NONE_DRAWN)
            *dList = NULL;
        else if (limbIndex == GARO_LIMB_LEFT_SWORD) {
            if (this->swordState == EN_JSO_SWORD_STATE_RIGHT_DRAWN)
                *dList = NULL;
        } else if (limbIndex == GARO_LIMB_RIGHT_SWORD && this->swordState == EN_JSO_SWORD_STATE_LEFT_DRAWN)
            *dList = NULL;
    }

    return false;
}

void EnJso_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    static Vec3f sSwordTipOffset      = { 1600.0f, 0.0f, 0.0f };
    static Vec3f sSwordBaseOffset     = {    0.0f, 0.0f, 0.0f };
    static Vec3f sSwordTipQuadOffset  = { 1700.0f, 0.0f, 0.0f };
    static Vec3f sSwordBaseQuadOffset = {    0.0f, 0.0f, 0.0f };
    EnJso* this = (EnJso*)thisx;
    Vec3f swordTipPos, swordBasePos;

    Matrix_Push();

    if (limbIndex == GARO_LIMB_LEFT_SWORD) {
        if (this->swordState == EN_JSO_SWORD_STATE_KNOCKED_OUT_OF_HANDS)
            Actor_SpawnBodyParts(&this->actor, play, 15, dList);

        Matrix_Translate(0.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        Math_Vec3f_Copy(&this->leftSwordCollider.dim.quad[3], &this->leftSwordCollider.dim.quad[1]);
        Math_Vec3f_Copy(&this->leftSwordCollider.dim.quad[2], &this->leftSwordCollider.dim.quad[0]);
        Matrix_MultVec3f(&sSwordTipQuadOffset, &this->leftSwordCollider.dim.quad[1]);
        Matrix_MultVec3f(&sSwordBaseQuadOffset, &this->leftSwordCollider.dim.quad[0]);
        Collider_SetQuadVertices(&this->leftSwordCollider, &this->leftSwordCollider.dim.quad[0], &this->leftSwordCollider.dim.quad[1], &this->leftSwordCollider.dim.quad[2],&this->leftSwordCollider.dim.quad[3]);
        Matrix_MultVec3f(&sSwordTipOffset, &swordTipPos);
        Matrix_MultVec3f(&sSwordBaseOffset, &swordBasePos);

        if ((this->action == EN_JSO_ACTION_SLASH || this->action == EN_JSO_ACTION_DASH_ATTACK) && !this->disableBlure)
            EffectBlure_AddVertex(Effect_GetByIndex(this->leftSwordBlureIndex), &swordTipPos, &swordBasePos);
        else if (this->disableBlure == true)
            EffectBlure_AddSpace(Effect_GetByIndex(this->leftSwordBlureIndex));
    }

    if (limbIndex == GARO_LIMB_RIGHT_SWORD) {
        if (this->swordState == EN_JSO_SWORD_STATE_KNOCKED_OUT_OF_HANDS) {
            Actor_SpawnBodyParts(&this->actor, play, 15, dList);
            this->swordState = EN_JSO_SWORD_STATE_NONE_DRAWN;
        }

        Matrix_Translate(0.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        Math_Vec3f_Copy(&this->rightSwordCollider.dim.quad[3], &this->rightSwordCollider.dim.quad[1]);
        Math_Vec3f_Copy(&this->rightSwordCollider.dim.quad[2], &this->rightSwordCollider.dim.quad[0]);
        Matrix_MultVec3f(&sSwordTipQuadOffset, &this->rightSwordCollider.dim.quad[1]);
        Matrix_MultVec3f(&sSwordBaseQuadOffset, &this->rightSwordCollider.dim.quad[0]);
        Collider_SetQuadVertices(&this->rightSwordCollider, &this->rightSwordCollider.dim.quad[0], &this->rightSwordCollider.dim.quad[1], &this->rightSwordCollider.dim.quad[2], &this->rightSwordCollider.dim.quad[3]);
        Matrix_MultVec3f(&sSwordTipOffset, &swordTipPos);
        Matrix_MultVec3f(&sSwordBaseOffset, &swordBasePos);

        if ((this->action == EN_JSO_ACTION_SLASH || this->action == EN_JSO_ACTION_DASH_ATTACK) && !this->disableBlure)
            EffectBlure_AddVertex(Effect_GetByIndex(this->rightSwordBlureIndex), &swordTipPos, &swordBasePos);
        else if (this->disableBlure == true) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->rightSwordBlureIndex));
            this->disableBlure = false;
        }
    }

    if (limbIndex == GARO_LIMB_LEFT_SWORD  || limbIndex == GARO_LIMB_RIGHT_SWORD || limbIndex == GARO_LIMB_ROBE_TOP   || limbIndex == GARO_LIMB_ROBE_BACK || limbIndex == GARO_LIMB_ROBE_LEFT || limbIndex == GARO_LIMB_ROBE_RIGHT || limbIndex == GARO_LIMB_ROBE_FRONT || limbIndex == GARO_LIMB_HEAD ||
        limbIndex == GARO_LIMB_RIGHT_THIGH || limbIndex == GARO_LIMB_RIGHT_FOOT  || limbIndex == GARO_LIMB_LEFT_THIGH || limbIndex == GARO_LIMB_LEFT_FOOT) {
        Matrix_MultZero(&this->bodyPartsPos[this->bodyPartIndex]);
        this->bodyPartIndex++;
        if (this->bodyPartIndex >= EN_JSO_BODYPART_MAX)
            this->bodyPartIndex = 0;
    }

    Matrix_Pop();
}

Gfx* EnJso_SetAfterimageRenderMode(GraphicsContext* gfxCtx) {
    Gfx* gfxHead = GRAPH_ALLOC(gfxCtx, 2 * sizeof(Gfx));
    Gfx* gfx = gfxHead;

    gDPSetRenderMode(gfx++, AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL | G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA));
    gSPEndDisplayList(gfx++);

    return gfxHead;
}

void EnJso_Draw(Actor* thisx, PlayState* play) {
    static s16 sAfterimageAlpha[EN_JSO_AFTERIMAGE_COUNT] = { 128, 0, 0, 0, 0, 128, 0, 0, 0, 0, 128, 0, 0, 0, 0, 128, 0, 0, 0, 0 };
    EnJso* this = (EnJso*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x0C, D_80115FF0);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnJso_OverrideLimbDraw, EnJso_PostLimbDraw, &this->actor);

    if (this->afterimageCount > 0) {
        s8 i;
        s8 index = this->afterimageIndex;

        for (i=0; i<this->afterimageCount; i++) {
            if (sAfterimageAlpha[i] == 0)
                continue;

            Matrix_Translate(this->afterimagePos[index].x, this->afterimagePos[index].y, this->afterimagePos[index].z, MTXMODE_NEW);
            Matrix_Scale(this->scale, this->scale, this->scale, MTXMODE_APPLY);
            Matrix_RotateY(this->afterimageRot[index].y, MTXMODE_APPLY);
            Matrix_RotateX(this->afterimageRot[index].x, MTXMODE_APPLY);
            Matrix_RotateZ(this->afterimageRot[index].z, MTXMODE_APPLY);

            gDPPipeSync(POLY_XLU_DISP++);
            gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 0, sAfterimageAlpha[i]);
            gSPSegment(POLY_XLU_DISP++, 0x0C, EnJso_SetAfterimageRenderMode(play->state.gfxCtx));
            POLY_XLU_DISP = SkelAnime_DrawFlex(play, this->skelAnime.skeleton, this->afterimageJointTable[index], this->skelAnime.dListCount, NULL, NULL, &this->actor, POLY_XLU_DISP);

            index--;
            if (index < 0)
                index = EN_JSO_AFTERIMAGE_COUNT - 1;
        }
    }

    if (this->drawDmgEffAlpha != 0) {
        f32 drawDmgEffAlpha = this->drawDmgEffAlpha * 0.05f;

        if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_SFX || this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
            this->drawDmgEffScale += 0.3f;
            if (this->drawDmgEffScale > 0.5f)
                this->drawDmgEffScale = 0.5f;

            Math_ApproachF(&this->drawDmgEffFrozenSteamScale, this->drawDmgEffScale, 0.1f, 0.04f);
        } else {
            this->drawDmgEffScale = 0.8f;
            this->drawDmgEffFrozenSteamScale = 0.8f;
        }

        Actor_DrawDamageEffects(play, &this->actor, this->bodyPartsPos, EN_JSO_BODYPART_MAX, this->drawDmgEffScale, this->drawDmgEffFrozenSteamScale, drawDmgEffAlpha, this->drawDmgEffType);
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
