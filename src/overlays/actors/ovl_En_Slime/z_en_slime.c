/*
 * File: z_en_slime.c
 * Overlay: ovl_En_Slime
 * Description: Chuchu
 */

#include "z_en_slime.h"

#include "libc64/qrand.h"
#include "rand.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "segmented_address.h"
#include "sys_matrix.h"
#include "sys_math.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"
#include "z_en_item00.h"
#include "save.h"

#include "assets/objects/gameplay_keep/item_drop_dl.h"
#include "assets/objects/gameplay_keep/drop_recovery_heart_tex.h"
#include "assets/objects/gameplay_keep/gameplay_keep_0x3C870.h"
#include "assets/objects/gameplay_keep/gameplay_keep_0x3F140.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_HOOKSHOT_PULLS_ACTOR)

#define ICE_BLOCK_TIMER_MAX 254
#define ICE_BLOCK_UNUSED (ICE_BLOCK_TIMER_MAX + 1)

typedef enum EnSlimeEyeTexture {
    /* 0 */ EN_SLIME_EYETEX_OPEN,
    /* 1 */ EN_SLIME_EYETEX_HALF,
    /* 2 */ EN_SLIME_EYETEX_CLOSED,
    /* 3 */ EN_SLIME_EYETEX_HALF2,
    /* 4 */ EN_SLIME_EYETEX_MAX
} EnSlimeEyeTexture;

typedef enum EnSlimedamageReaction {
    /* 0x0 */ EN_SLIME_DMGEFF_NORMAL,
    /* 0x1 */ EN_SLIME_DMGEFF_STUN,
    /* 0x3 */ EN_SLIME_DMGEFF_FREEZE = 0x3,
    /* 0x4 */ EN_SLIME_DMGEFF_LIGHT,
    /* 0x5 */ EN_SLIME_DMGEFF_ELECTRIC,
    /* 0xE */ EN_SLIME_DMGEFF_HOOKSHOT = 0xE,
    /* 0xF */ EN_SLIME_DMGEFF_BLUNT
} EnSlimedamageReaction;

void EnSlime_Init(Actor* thisx, struct PlayState* play);
void EnSlime_Destroy(Actor* thisx, struct PlayState* play);
void EnSlime_Update(Actor* thisx, struct PlayState* play);
void EnSlime_Draw(Actor* thisx, struct PlayState* play);

void EnSlime_SetupInitializeIdle(EnSlime* this);
void EnSlime_InitializeIdle(EnSlime* this, struct PlayState* play);
void EnSlime_SetupIdle(EnSlime* this);
void EnSlime_Idle(EnSlime* this, struct PlayState* play);
void EnSlime_SetupMoveInDirection(EnSlime* this);
void EnSlime_MoveInDirection(EnSlime* this, struct PlayState* play);
void EnSlime_SetupMoveToHome(EnSlime* this);
void EnSlime_MoveToHome(EnSlime* this, struct PlayState* play);
void EnSlime_SetupTurnToPlayer(EnSlime* this);
void EnSlime_TurnToPlayer(EnSlime* this, struct PlayState* play);
void EnSlime_SetupJump(EnSlime* this);
void EnSlime_Jump(EnSlime* this, struct PlayState* play);
void EnSlime_SetupLand(EnSlime* this);
void EnSlime_Land(EnSlime* this, struct PlayState* play);
void EnSlime_ReactToBluntHit(EnSlime* this, struct PlayState* play);
void EnSlime_Damaged(EnSlime* this, struct PlayState* play);
void EnSlime_SetupDead(EnSlime* this);
void EnSlime_Dead(EnSlime* this, struct PlayState* play);
void EnSlime_SpawnIceBlock(EnSlime* this, struct PlayState* play);
void EnSlime_SetupIceBlock(EnSlime* this);
void EnSlime_IceBlock(EnSlime* this, struct PlayState* play);
void EnSlime_Stun(EnSlime* this, struct PlayState* play);
void EnSlime_SetupIceBlockThaw(EnSlime* this);
void EnSlime_IceBlockThaw(EnSlime* this, struct PlayState* play);
void EnSlime_SetupWaitForRevive(EnSlime* this);
void EnSlime_WaitForRevive(EnSlime* this, struct PlayState* play);
void EnSlime_SetupRevive(EnSlime* this);
void EnSlime_Revive(EnSlime* this, struct PlayState* play);

ActorProfile En_Slime_Profile = {
    /**/ ACTOR_EN_SLIME,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_SLIME,
    /**/ sizeof(EnSlime),
    /**/ EnSlime_Init,
    /**/ EnSlime_Destroy,
    /**/ EnSlime_Update,
    /**/ EnSlime_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xF7CFFFFF, 0x00, 0x04 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_HARD,
        ACELEM_ON | ACELEM_HOOKABLE,
        OCELEM_ON,
    },
    { 22, 35, 0, { 0, 0, 0 } },
};

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, EN_SLIME_DMGEFF_STUN),
    /* Deku stick    */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, EN_SLIME_DMGEFF_BLUNT),
    /* Explosive     */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, EN_SLIME_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(0, EN_SLIME_DMGEFF_BLUNT),
    /* Hookshot      */ DMG_ENTRY(0, EN_SLIME_DMGEFF_HOOKSHOT),
    /* Kokiri sword  */ DMG_ENTRY(1, EN_SLIME_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(4, EN_SLIME_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(4, EN_SLIME_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Ice magic     */ DMG_ENTRY(3, EN_SLIME_DMGEFF_NORMAL),
    /* Light magic   */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Shield        */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, EN_SLIME_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(4, EN_SLIME_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(2, EN_SLIME_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(8, EN_SLIME_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(4, EN_SLIME_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(0, EN_SLIME_DMGEFF_BLUNT),
    /* Unknown 2     */ DMG_ENTRY(0, EN_SLIME_DMGEFF_NORMAL),
};

static CollisionCheckInfoInit sColChkInfoInit = { 1, 22, 35, 60 };

static void* sEyeTextures[] = {
    gChuchuEyeOpenTex,
    gChuchuEyeHalfTex,
    gChuchuEyeClosedTex,
    gChuchuEyeHalfTex,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(gravity, -2, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 6000, ICHAIN_STOP),
};

static u8 sTexturesDesegmented = false;

static Color_RGBA8 sBubblePrimColor = { 255, 255, 255, 255 };
static Color_RGBA8 sBubbleEnvColor = { 150, 150, 150, 0 };
static Vec3f sBubbleAccel = { 0.0f, -0.8f, 0.0f };

void EnSlime_Init(Actor* thisx, PlayState* play) {
    EnSlime* this = (EnSlime*)thisx;

    u8 reviveTimeSeconds, i;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &sDamageTable, &sColChkInfoInit);
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(this->actor.colChkInfo.health, MONSTER_HP);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 38.0f);

    this->iceBlockTimer = ICE_BLOCK_UNUSED;
    this->eyeTexIndex = EN_SLIME_EYETEX_OPEN;
    this->wobbleRot.y = 0.0f;

    if (this->actor.shape.rot.x <= 0) // Sets maximum distance chuchu will move from its home before turning around.
        this->distLimit = 30000.0f;
    else this->distLimit = this->actor.shape.rot.x * 40.0f;

    this->actor.shape.rot.x = 0;
    reviveTimeSeconds = EN_SLIME_GET_REVIVE_TIME(&this->actor);
    this->actor.shape.rot.z = 0;
    this->actor.params &= 0xFF;
    if (reviveTimeSeconds == 0xFF)
        reviveTimeSeconds = 0;

    this->reviveTime = (reviveTimeSeconds * 20) + 200; // Upper byte of actorParams at init is # of seconds past 10s to revive.

    if (!sTexturesDesegmented) { // Update addresses of texture assets (if another instance hasn't already)
        for (i=0; i<EN_SLIME_EYETEX_MAX; i++)
            sEyeTextures[i] = SEGMENTED_TO_VIRTUAL(sEyeTextures[i]);
        sTexturesDesegmented = true;
    }

    if (EN_SLIME_GET_TYPE(&this->actor) == EN_SLIME_TYPE_YELLOW) { // Set hint IDs and drop item icon depending on chuchu color
        this->itemDropTex = SEGMENTED_TO_VIRTUAL(gDropArrows1Tex);
        this->actor.naviEnemyId = NAVI_ENEMY_YELLOW_CHUCHU;
    } else if (EN_SLIME_GET_TYPE(&this->actor) == EN_SLIME_TYPE_GREEN) {
        this->itemDropTex = SEGMENTED_TO_VIRTUAL(gDropMagicSmallTex);
        this->actor.naviEnemyId = NAVI_ENEMY_GREEN_CHUCHU;
    } else if (EN_SLIME_GET_TYPE(&this->actor) == EN_SLIME_TYPE_RED) {
        this->itemDropTex = SEGMENTED_TO_VIRTUAL(gDropRecoveryHeartTex);
        this->actor.naviEnemyId = NAVI_ENEMY_RED_CHUCHU;
    } else this->actor.naviEnemyId = NAVI_ENEMY_BLUE_CHUCHU;

    EnSlime_SetupInitializeIdle(this); // Sets actor scale and initial action func
}

void EnSlime_Destroy(Actor* thisx, PlayState* play) {
    EnSlime* this = (EnSlime*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

/**
 * Upon immobilization via ice arrow (for chuchu types outside of blue), initialize ice visual effects before chuchu enters immobile state.
 */
void EnSlime_Freeze(EnSlime* this) {
    this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX;
    this->drawDmgEffScale = 0.4f;
    this->collider.base.colMaterial = COL_MATERIAL_HIT3;
    this->drawDmgEffFrozenSteamScale = 0.6f;
    this->drawDmgEffAlpha = 1.0f;
    this->timer = 80;
    this->actor.flags &= ~ACTOR_FLAG_HOOKSHOT_PULLS_PLAYER;
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_XLU, 80);
}

/**
 * If stunned ice effect is active (ie. non-blue chuchu was frozen by ice arrow),
 * initialize thaw and spawn thawing effect.
 */
void EnSlime_Thaw(EnSlime* this, PlayState* play) {
    if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
        this->drawDmgEffType = 0; // So it's not triggered again until Freeze has been called again.
        this->collider.base.colMaterial = COL_MATERIAL_NONE;
        this->drawDmgEffAlpha = 0.0f;
        Actor_SpawnIceEffects(play, &this->actor, this->bodyPartsPos, EN_SLIME_BODYPART_MAX, 2, 0.2f, 0.2f);
        this->actor.flags |= ACTOR_FLAG_HOOKSHOT_PULLS_ACTOR;
    }
}

/**
 * If blink animation is in progress, advance to next frame. If eyes are open, randomly (5% chance) initialize new blink cycle.
 */
void EnSlime_Blink(EnSlime* this) {
    if (this->eyeTexIndex != EN_SLIME_EYETEX_OPEN) {
        this->eyeTexIndex++;
        if (this->eyeTexIndex == EN_SLIME_EYETEX_MAX)
            this->eyeTexIndex = EN_SLIME_EYETEX_OPEN;
    } else if (Rand_ZeroOne() < 0.05f)
        this->eyeTexIndex = EN_SLIME_EYETEX_HALF;
}

/**
 * Set the actor's initial scale and action function.
 */
void EnSlime_SetupInitializeIdle(EnSlime* this) {
    this->actor.scale.x = 0.008f;
    this->actor.scale.z = 0.008f;
    this->actor.scale.y = 0.011f;
    this->actionFunc = EnSlime_InitializeIdle;
}

/**
 * Once actor touches the ground, it starts its idle behavior. This function is only called right after the actor is first initialized. It is not set as the action function again.
 */
void EnSlime_InitializeIdle(EnSlime* this, PlayState* play) {
    if (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) {
        this->actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        EnSlime_SetupIdle(this);
    }
}

/**
 * Set or restore idle action state. Sets timer to 25 and cycles to SitIdle action.
 */
void EnSlime_SetupIdle(EnSlime* this) {
    this->timer = 25;
    this->actor.speed = 0.0f;
    this->actionFunc = EnSlime_Idle;
}

/**
 * Sit idle for one frame, updating rotation and scale to give the actor an amorphous, oozing effect. Chuchu will engage player if player is visible and close enough to it.
 */
void EnSlime_Idle(EnSlime* this, PlayState* play) {
    f32 timerFactor, scale;

    this->timer--;
    timerFactor = sqrtf(this->timer) * 0.2f;
    EnSlime_Blink(this);

    scale = ((Math_SinF(this->timer * (2 * M_PI / 5)) * (0.13f * timerFactor)) + 1.0f) * 0.01f;
    this->actor.scale.x = scale;
    this->actor.scale.z = scale;
    if (this->timer < 24)
        this->actor.scale.y = ((Math_CosF(this->timer * (2 * M_PI / 5)) * (0.05f * timerFactor)) + 1.0f) * 0.01f;

    this->actor.shape.rot.x = Rand_CenteredFloat(0x200) * timerFactor;
    this->actor.shape.rot.z = Rand_CenteredFloat(0x200) * timerFactor;

    
    if (Player_GetMask(play) != PLAYER_MASK_SKULL && this->actor.xzDistToPlayer < 280.0f && Actor_IsFacingPlayer(&this->actor, 0x5000)) // If player is not wearing the stone mask, is within 280 units of the chuchu, and the chuchu is facing the player, initialize chase/attack cycle.
        EnSlime_SetupTurnToPlayer(this);
    else if (this->timer == 0) // Start moving (remaining idle)
        EnSlime_SetupMoveInDirection(this);
}

/**
 * Reset the action timer (to 120), then select a new direction for chuchu to move.
 */
void EnSlime_SetupMoveInDirection(EnSlime* this) {
    this->timer = 120;

    // If actor is more than 120 units from its home, set the new direction to be towards its home. Otherwise, the new direction to move is pretty much random.
    if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) > 120.0f)
        this->idleRotY = Actor_WorldYawTowardPoint(&this->actor, &this->actor.home.pos);
    else if (Rand_ZeroOne() < 0.7f)
        this->idleRotY = (s32)Rand_CenteredFloat(0x4000) + this->actor.shape.rot.y;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actionFunc = EnSlime_MoveInDirection;
}

/**
 * While moving idle, update rotation, speed, scale in a sinusoidal fashion to give oozing effect. If actor has hit a wall or is too far from home, turn around. Chuchu will engage player during idle movement if player is visible and close enough to it.
 */
void EnSlime_MoveInDirection(EnSlime* this, PlayState* play) {
    f32 sinFactor;

    EnSlime_Blink(this);
    this->timer--;
    Math_ApproachS(&this->actor.shape.rot.y, this->idleRotY, 4, 0x100);
    
    if (this->actor.bgCheckFlags & BGCHECKFLAG_WALL) // If actor is touching a wall, set target rotation to match wall where it is touching. If actor is more than 120 units from its home, turn around to face home.
        this->idleRotY = this->actor.wallYaw;
    else if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) > 120.0f)
        this->idleRotY = Actor_WorldYawTowardPoint(&this->actor, &this->actor.home.pos);

    sinFactor = fabsf(Math_SinF(this->timer * (M_PI / 24))); // Update actor scale, xz speed, and rotation to provide amorphous effect
    Math_StepToF(&this->actor.scale.z, ((0.15f * sinFactor) + 1.0f) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.x, (1.0f - (0.2f * sinFactor)) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.y, (1.0f - (0.1f * sinFactor)) * 0.01f, 0.0002f);

    this->actor.speed = (0.8f * sinFactor) + 0.2f;
    this->actor.shape.rot.x = 0x800 * sinFactor;
    this->actor.world.rot.y = this->actor.shape.rot.y;

    if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) > this->distLimit) // If actor is too far from home, start return home cycle
        EnSlime_SetupMoveToHome(this);
    else if (Player_GetMask(play) != PLAYER_MASK_SKULL && this->actor.xzDistToPlayer < 280.0f && Actor_IsFacingPlayer(&this->actor, 0x5000)) // If player is close enough to chuchu while not wearing the stone mask, and the chuchu is facing player,  initialize attack cycle
        EnSlime_SetupTurnToPlayer(this);
    else if (this->timer == 0) // If move timer runs out, restart idle cycle (sit in place for 25 frames)
        EnSlime_SetupIdle(this);
}

/**
 * Reset the action timer (to 24), then set the target y angle to face home.
 */
void EnSlime_SetupMoveToHome(EnSlime* this) {
    this->timer = 24;
    this->idleRotY = Actor_WorldYawTowardPoint(&this->actor, &this->actor.home.pos);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actionFunc = EnSlime_MoveToHome;
}

/**
 * While moving towards home point, update rotation, speed, scale in a sinusoidal fashion to give oozing effect. If actor has hit a wall, turn around. Once it is close enough to home point, return to idle cycle. Chuchu will not engage player while the return home cycle is active.
 */
void EnSlime_MoveToHome(EnSlime* this, PlayState* play) {
    f32 timerFactor;

    EnSlime_Blink(this);
    this->timer--;
    Math_ApproachS(&this->actor.shape.rot.y, this->idleRotY, 4, 0x400);
    if (this->actor.bgCheckFlags & BGCHECKFLAG_WALL) // If hit wall, turn around.
        this->idleRotY = this->actor.wallYaw;
    else this->idleRotY = Actor_WorldYawTowardPoint(&this->actor, &this->actor.home.pos);

    timerFactor = fabsf(Math_SinF(this->timer * (M_PI / 24)));
    Math_StepToF(&this->actor.scale.z, ((0.15f * timerFactor) + 1.0f) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.x, (1.0f - (0.2f * timerFactor)) * 0.01f, 0.0002f);
    Math_StepToF(&this->actor.scale.y, (1.0f - (0.1f * timerFactor)) * 0.01f, 0.0002f);

    this->actor.speed = (0.8f * timerFactor) + 0.2f;
    this->actor.shape.rot.x = 0x800 * timerFactor;
    this->actor.world.rot.y = this->actor.shape.rot.y;

    
    if (this->timer == 0) // Reset timer for use calculating wobble/ooze amount for frame
        this->timer = 24;

    
    if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) < this->distLimit * 0.8f) // Only return to idle once actor is close enough to home point.
        EnSlime_SetupIdle(this);
}

void EnSlime_SetupTurnToPlayer(EnSlime* this) {
    this->actor.shape.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->timer = 8;
    this->actionFunc = EnSlime_TurnToPlayer;
    this->actor.speed = 0.0f;
}

/**
 * Update actor angle and ooze effect as chuchu initially turns to face player.
 */
void EnSlime_TurnToPlayer(EnSlime* this, PlayState* play) {
    f32 factorY;
    f32 scaleXZ;

    this->timer--;
    EnSlime_Blink(this);
    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0x1000);
    if (this->timer >= 0) {
        factorY = 8 - this->timer;
        scaleXZ = ((factorY * 0.04f) + 1.0f) * 0.01f;
        this->actor.scale.x = scaleXZ;
        this->actor.scale.y = (1.0f - (factorY * 0.05f)) * 0.01f;
        this->actor.scale.z = scaleXZ;
    }
    if (this->timer < -2)
        EnSlime_SetupJump(this);
}

/**
 * If fewer than 120 units from the player, start a larger attack lunge. Otherwise, hop forward.
 */
void EnSlime_SetupJump(EnSlime* this) {
    if (this->actor.xzDistToPlayer > 120.0f) {
        this->actor.velocity.y = 11.0f;
        this->actor.speed = 5.0f;
        this->actor.gravity = -2.0f;
    } else {
        this->actor.velocity.y = 18.0f;
        this->actor.speed = 7.0f;
        this->actor.gravity = -3.5f;
    }
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->timer = 12;
    this->eyeTexIndex = EN_SLIME_EYETEX_OPEN;
    Math_StepToF(&this->actor.scale.x, 0.008f, 0.0025f);
    Math_StepToF(&this->actor.scale.y, 0.011f, 0.0025f);
    this->actor.scale.z = this->actor.scale.x;
    Actor_PlaySfx(&this->actor, NA_SE_EN_SLIME_JUMP);
    this->actionFunc = EnSlime_Jump;
}

/**
 * Check for collision and whether actor has stopped falling. Update actor scale for slime effect. If collision, knockback actor. If actor has stopped moving in Y direction, initialize landing action.
 */
void EnSlime_Jump(EnSlime* this, PlayState* play) {
    this->timer--;
    if (this->collider.base.atFlags & AT_HIT) {
        if (this->actor.speed > 0.0f) {
            this->actor.speed *= -1.2f;
            this->collider.base.atFlags &= ~AT_HIT;
        }
    }
    Math_StepToF(&this->actor.scale.x, 0.008f, 0.0025f);
    Math_StepToF(&this->actor.scale.y, 0.011f, 0.0025f);
    this->actor.scale.z = this->actor.scale.x;
    if (this->actor.velocity.y < 0.0f && (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND))
        EnSlime_SetupLand(this);
}

void EnSlime_SetupLand(EnSlime* this) {
    this->timer = 15;
    this->actor.scale.x = 0.0132f;
    this->actor.scale.y = 0.0074399994f;
    this->actor.scale.z = 0.0132f;
    this->actor.speed = 0.0f;
    this->actionFunc = EnSlime_Land;
}

/**
 * Update scale/rot for ooze jiggle effect (XZ), update Y scale to make it appear as though chuchu is compressing.
 * If > 12 frames have passed since jump start, check again if player is in range and restart engage/jump cycle if so. If too far from home, initialize return home cycle (takes priority over player engage check). Otherwise if timer is up, return to idle.
 */
void EnSlime_Land(EnSlime* this, PlayState* play) {
    f32 scaleY, rotXZ, scaleXZ;

    EnSlime_Blink(this);
    this->timer--;
    scaleY = ((this->timer / 5) + 1) * 1.6f;
    rotXZ = sqrtf(this->timer) * 0.2f;
    scaleXZ = ((Math_CosF(this->timer * (2 * M_PI / 5)) * (0.05f * scaleY)) + 1.0f) * 0.01f;
    this->actor.scale.x = scaleXZ;
    this->actor.scale.z = scaleXZ;
    if (this->timer < 15)
        this->actor.scale.y = (1.0f - (Math_SinF(this->timer * (2 * M_PI / 5)) * (0.04f * scaleY))) * 0.01f;
    this->actor.shape.rot.x = Rand_CenteredFloat(0x200) * rotXZ;
    this->actor.shape.rot.z = Rand_CenteredFloat(0x200) * rotXZ;

    if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) > this->distLimit)
        EnSlime_SetupMoveToHome(this);
    else if (Player_GetMask(play) != PLAYER_MASK_SKULL && this->actor.xzDistToPlayer < 280.0f && this->timer < 12)
        EnSlime_SetupTurnToPlayer(this);
    else if (this->timer == 0)
        EnSlime_SetupIdle(this);
}

/**
 * Initialize reaction to receiving a blunt hit (such as with Goron Punch etc.) Chuchu does not take damage, but appears slide backwards.
 */
void EnSlime_SetupReactToBluntHit(EnSlime* this) {
    this->actor.speed = 10.0f;
    if (this->actor.velocity.y > 0.0f)
        this->actor.velocity.y = 0.0f;
    this->collider.base.acFlags &= ~AC_ON;
    this->timer = 30;
    Actor_PlaySfx(&this->actor, NA_SE_EN_SLIME_DEFENCE);
    if (this->collider.base.ac != NULL)
        this->actor.world.rot.y = Actor_WorldYawTowardActor(&this->actor, this->collider.base.ac) + 0x8000;
    else this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x8000;
    this->actionFunc = EnSlime_ReactToBluntHit;
}

/**
 * Update reaction to receiving a blunt hit (such as with Goron Punch etc.) Update XZ speed and jiggle effect AC_ON flag is off until 15 frames of reaction remain. When timer is up, chuchu will choose whether to engage player, return home, or return to idle. If chuchu is too far from home, returning home will take precedence.
 */
void EnSlime_ReactToBluntHit(EnSlime* this, PlayState* play) {
    f32 timerFactor, scale;

    EnSlime_Blink(this);
    this->timer--;
    Math_StepToF(&this->actor.speed, 0.0f, 1.0f);
    timerFactor = sqrtf(this->timer);
    if (this->timer < 30) {
        scale = ((Math_CosF(this->timer * (2 * M_PI / 5)) * (0.08f * timerFactor)) + 1.0f) * 0.01f;
        this->actor.scale.x = scale;
        this->actor.scale.z = scale;
    }
    if (this->timer == 15)
        this->collider.base.acFlags |= AC_ON;
    this->actor.scale.y = ((Math_SinF((f32)this->timer * (2 * M_PI / 5)) * (0.07f * timerFactor)) + 1.0f) * 0.01f;
    this->actor.shape.rot.x = Rand_CenteredFloat(0x200) * timerFactor;
    this->actor.shape.rot.z = Rand_CenteredFloat(0x200) * timerFactor;

    if (this->timer == 0) {
        if (Actor_WorldDistXZToPoint(&this->actor, &this->actor.home.pos) > this->distLimit)
            EnSlime_SetupMoveToHome(this);
        else if (this->actor.xzDistToPlayer < 280.0f && Player_GetMask(play) != PLAYER_MASK_SKULL)
            EnSlime_SetupTurnToPlayer(this);
        else EnSlime_SetupIdle(this);
    }
}

/**
 * Spawn bubbles & splash, start actor rebuff wobble, push actor, and play sfx.
 */
void EnSlime_SetupDamaged(EnSlime* this, PlayState* play, s32 arg2) {
    Vec3f effectVelocity, effectPos;
    f32 ySin, yCos;
    u8 i;

    this->collider.base.acFlags &= ~AC_ON;
    if (this->actor.velocity.y > 0.0f)
        this->actor.velocity.y = 0.0f;
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_XLU, 20);
    this->timer = 20;
    this->actor.speed = 10.0f;
    if (arg2 == true) // This function changes actor's world Y rotation?
        Actor_TurnRotationHitWithArrow(&this->actor, &this->collider); 

    this->eyeTexIndex = EN_SLIME_EYETEX_OPEN;
    Actor_SetScale(&this->actor, 0.01f);
    this->wobbleRot.x = Rand_ZeroOne() * (M_PI * 2);
    this->wobbleRot.z = Rand_ZeroOne() * (M_PI * 2);
    ySin = Math_SinS(this->actor.world.rot.y) * 10.0f;
    yCos = Math_CosS(this->actor.world.rot.y) * 10.0f;
    effectPos.x = this->actor.world.pos.x + ySin;
    effectPos.y = this->actor.world.pos.y + 20.0f;
    effectPos.z = this->actor.world.pos.z + yCos;
    EffectSsGSplash_Spawn(play, &effectPos, NULL, NULL, 1, 550);

    for (i=0; i<10; i++) {
        effectPos.x = Rand_CenteredFloat(40.0f) + this->actor.world.pos.x + ySin;
        effectPos.y = Rand_CenteredFloat(10.0f) + this->actor.world.pos.y + 40.0f;
        effectPos.z = Rand_CenteredFloat(40.0f) + this->actor.world.pos.z + yCos;
        effectVelocity.x = ((Rand_ZeroOne() * 3.5f) + 1.0f) * -Math_SinS(this->actor.world.rot.y);
        effectVelocity.z = ((Rand_ZeroOne() * 3.5f) + 1.0f) * -Math_CosS(this->actor.world.rot.y);
        effectVelocity.y = (Rand_ZeroOne() * 6.0f) + 2.0f;
        EffectSsDtBubble_SpawnCustomColor(play, &effectPos, &effectVelocity, &sBubbleAccel, &sBubblePrimColor, &sBubbleEnvColor, Rand_S16Offset(40, 20), 20, 0);
    }

    Actor_PlaySfx(&this->actor, this->actor.colChkInfo.health == 0 ? NA_SE_EN_SLIME_DEAD : NA_SE_EN_SLIME_DAMAGE);
    this->actionFunc = EnSlime_Damaged;
}

/**
 * Update reaction to taking damage. Updates the rebuff wobble. Once timer drops to 0, actor initializes death cycle, re-engages player, or returns to idle.
 */
void EnSlime_Damaged(EnSlime* this, PlayState* play) {
    this->timer--;
    Math_StepToF(&this->actor.speed, 0.0f, 1.0f);
    if ((this->timer % 5) == 0) {
        this->wobbleRot.x = Rand_ZeroOne() * (M_PI * 2);
        this->wobbleRot.z = Rand_ZeroOne() * (M_PI * 2);
    }
    if (this->timer == 0) {
        if (this->actor.colChkInfo.health != 0) {
            this->collider.base.acFlags |= AC_ON;
            if (this->actor.xzDistToPlayer < 280.0f && Player_GetMask(play) != PLAYER_MASK_SKULL)
                EnSlime_SetupTurnToPlayer(this);
            else EnSlime_SetupIdle(this);
        } else {
            SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 40, NA_SE_EN_SLIME_BREAK);
            EnSlime_SetupDead(this);
        }
    }
}

/**
 * Disable AC_ON flag, make actor stop moving, and shrink the actor.
 */
void EnSlime_SetupDead(EnSlime* this) {
    this->collider.base.acFlags &= ~AC_ON;
    if (this->actor.velocity.y > 0.0f)
        this->actor.velocity.y = 0.0f;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.speed = 0.0f;
    this->actionFunc = EnSlime_Dead;
}

/**
 * Spawn random effects (bubbles, splash) for death sequence. If chuchu is red, green, or yellow, spawn item drop. Shrink actor scale to 0. Call SetupWaitForRevive function for cleanup.
 */
void EnSlime_Dead(EnSlime* this, PlayState* play) {
    Vec3f velocity, effectPos;
    f32 randFloat;
    s8 randSign;
    u8 i;

    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.002f)) {
        effectPos.x = this->actor.world.pos.x;
        effectPos.y = this->actor.world.pos.y + 20.0f;
        effectPos.z = this->actor.world.pos.z;
        EffectSsGSplash_Spawn(play, &effectPos, NULL, NULL, 1, 800);

        for (i=0; i<15; i++) {
            randFloat = Rand_ZeroOne();
            randSign = Rand_ZeroOne() < 0.5f ? -1 : 1;
            velocity.x = randSign * ((randFloat * 2.5f) + 2.0f);
            randFloat = Rand_ZeroOne();
            randSign = Rand_ZeroOne() < 0.5f ? -1 : 1;
            velocity.z = randSign * ((randFloat * 2.5f) + 2.0f);
            velocity.y = (Rand_ZeroOne() * 6.0f) + 2.0f;
            EffectSsDtBubble_SpawnCustomColor(play, &effectPos, &velocity, &sBubbleAccel, &sBubblePrimColor, &sBubbleEnvColor, Rand_S16Offset(40, 20), 20, 0);
        }

        if (this->actor.params == EN_SLIME_TYPE_YELLOW)
            Item_DropCollectible(play, &this->actor.world.pos, ITEM00_ARROWS_SMALL);
        else if (this->actor.params == EN_SLIME_TYPE_GREEN)
            Item_DropCollectible(play, &this->actor.world.pos, ITEM00_MAGIC_SMALL);
        else if (this->actor.params == EN_SLIME_TYPE_RED)
            Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RECOVERY_HEART);
        EnSlime_SetupWaitForRevive(this);
    }
    this->actor.scale.y = this->actor.scale.x;
    this->actor.scale.z = this->actor.scale.x;
}

/**
 * Calculate a new "current" position value that is a multiple of 60 away from the "home" position. This is for use by blue chuchus frozen into an ice block so that their position is a multiple of the ice block size.
 */
f32 EnSlime_SnapIceBlockPosition(f32 currentPosition, f32 homePosition) {
    s32 dist = currentPosition - homePosition;

    if (dist > 0)
        dist += 30;
    else
        dist -= 30;

    return ((dist / 60) * 60.0f) + homePosition;
}

/**
 * Prepare actor for ice block to spawn around it. The actor will stop moving, have AC_ON cleared, and target position will be snapped to a multiple of the size of an ice block.
 */
void EnSlime_SetupSpawnIceBlock(EnSlime* this) {
    this->collider.base.acFlags &= ~AC_ON;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->drawDmgEffAlpha = 0.0f;
    this->actor.speed = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = 0.0f;
    this->iceBlockSnapPos.x = EnSlime_SnapIceBlockPosition(this->actor.world.pos.x, this->actor.home.pos.x);
    this->iceBlockSnapPos.z = EnSlime_SnapIceBlockPosition(this->actor.world.pos.z, this->actor.home.pos.z);
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_GRAY, COLORFILTER_INTENSITY_FLAG | 255, COLORFILTER_BUFFLAG_XLU, 10);
    this->eyeTexIndex = EN_SLIME_EYETEX_OPEN;
    this->iceBlockTimer = ICE_BLOCK_TIMER_MAX;
    this->actionFunc = EnSlime_SpawnIceBlock;
}

/**
 * Attempt to move the chuchu to snapped position and spawn an ice block actor as a child of the chuchu actor. If ice block spawn fails, chuchu returns to idle.
 */
void EnSlime_SpawnIceBlock(EnSlime* this, PlayState* play) {
    s32 stepCheck;

    stepCheck = Math_StepToF(&this->actor.world.pos.x, this->iceBlockSnapPos.x, 10.0f);
    stepCheck &= Math_StepToF(&this->actor.world.pos.z, this->iceBlockSnapPos.z, 10.0f);

    this->actor.colorFilterTimer = 10;
    if (stepCheck) {
        this->actor.child = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_OBJ_ICEBLOCK, this->actor.world.pos.x, this->actor.world.pos.y + 30.0f, this->actor.world.pos.z, 0, 0, 0, 0);
        if (this->actor.child != NULL)
            EnSlime_SetupIceBlock(this);
        else {
            this->actor.colorFilterTimer = 0;
            this->collider.base.acFlags |= AC_ON;
            this->iceBlockTimer = ICE_BLOCK_UNUSED;
            this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
            this->actor.gravity = -2.0f;
            EnSlime_SetupIdle(this);
        }
    }
}

void EnSlime_SetupIceBlock(EnSlime* this) {
    this->actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
    this->actionFunc = EnSlime_IceBlock;
}

/**
 * Decrement the ice block timer, or if it has hit zero, check to see if the ice block child actor link has been broken or if the block has shrunk sufficiently. If timer is up and ice block is sufficiently "gone", init thaw.
 */
void EnSlime_IceBlock(EnSlime* this, PlayState* play) {
    if (this->iceBlockTimer == 0) {
        if (this->actor.child == NULL || this->actor.child->update == NULL || this->actor.child->scale.y < 0.1f)
            EnSlime_SetupIceBlockThaw(this);
    } else {
        this->actor.colorFilterTimer = 10;
        this->iceBlockTimer = CLAMP_MIN(this->iceBlockTimer - 5, 0);
    }
}

void EnSlime_SetupStun(EnSlime* this) {
    this->actor.speed = 0.0f;
    Actor_TurnRotationHitWithArrow(&this->actor, &this->collider);
    if (this->actor.velocity.y > 0.0f)
        this->actor.velocity.y = 0.0f;
    this->actionFunc = EnSlime_Stun;
}

/**
 * Check the actor's timer to see whether stun has worn off. If so, either react to damage and initialize death, or start idly wobbling in a new direction.
 */
void EnSlime_Stun(EnSlime* this, PlayState* play) {
    this->timer--;
    if (this->timer == 0) {
        EnSlime_Thaw(this, play);
        if (this->actor.colChkInfo.health == 0)
            EnSlime_SetupDamaged(this, play, false);
        else {
            this->actor.world.rot.y = this->actor.shape.rot.y;
            EnSlime_SetupMoveInDirection(this);
        }
    }
}

void EnSlime_SetupIceBlockThaw(EnSlime* this) {
    this->actor.colorFilterTimer = 0;
    this->actor.gravity = -2.0f;
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_GRAY, COLORFILTER_INTENSITY_FLAG | 255, COLORFILTER_BUFFLAG_XLU, 10);
    this->actionFunc = EnSlime_IceBlockThaw;
}

/**
 * Update the actor's ice block timer to match state of ice block. When it reaches the "unset" value (255), return actor to idle.
 */
void EnSlime_IceBlockThaw(EnSlime* this, PlayState* play) {
    s32 iceBlockTimerAdj;

    this->actor.colorFilterTimer = 10;
    if ((this->actor.child != NULL) && (this->actor.child->update != NULL)) {
        iceBlockTimerAdj = (0.1f - this->actor.child->scale.y) * 10.0f * 255.0f;
        this->iceBlockTimer = CLAMP(iceBlockTimerAdj, 0, ICE_BLOCK_UNUSED);
    } else {
        this->actor.child = NULL;
        iceBlockTimerAdj = this->iceBlockTimer + 10;
        this->iceBlockTimer = CLAMP_MAX(iceBlockTimerAdj, ICE_BLOCK_UNUSED);
    }

    if (this->iceBlockTimer == ICE_BLOCK_UNUSED) {
        this->collider.base.acFlags |= AC_ON;
        this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
        this->actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        EnSlime_SetupIdle(this);
    }
}

/**
 * Set speed to zero, and make undrawable. Initialize revive timer.
 */
void EnSlime_SetupWaitForRevive(EnSlime* this) {
    this->actor.draw = NULL;
    this->actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
    this->drawDmgEffAlpha = 0.0f;
    this->actor.gravity = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.speed = 0.0f;
    this->collider.base.ocFlags1 &= ~OC1_ON;
    this->timer = this->reviveTime;
    this->actionFunc = EnSlime_WaitForRevive;
}

/**
 * Decrement the revival timer, or if it is zero, initialize revive.
 */
void EnSlime_WaitForRevive(EnSlime* this, PlayState* play) {
    if (this->timer == 0)
        EnSlime_SetupRevive(this);
    else this->timer--;
}

/**
 * Re-enable drawing, reset the actor's health and home, and setup and initialize revive action.
 */
void EnSlime_SetupRevive(EnSlime* this) {
    this->actor.draw = EnSlime_Draw;
    this->actor.colChkInfo.health = sColChkInfoInit.health;
    this->iceBlockTimer = ICE_BLOCK_UNUSED;
    Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
    this->timer = 0;
    this->actor.colorFilterTimer = 0;
    this->actor.home.rot.y = this->actor.yawTowardsPlayer;
    Actor_PlaySfx(&this->actor, NA_SE_EN_SLIME_SURFACE);
    this->actor.gravity = -2.0f;
    this->actionFunc = EnSlime_Revive;
}

/**
 * Update bubbling back up effect. After 21 frames, OC1_ON is set.
 * After 28 frames, AC_ON is set and actor returns to idle movement.
 */
void EnSlime_Revive(EnSlime* this, PlayState* play) {
    f32 rescaleFactor1;
    f32 rescaleFactor2;

    this->timer++;
    if (this->timer == 28) {
        this->actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
        this->collider.base.acFlags |= AC_ON;
        this->actor.shape.rot.y = this->actor.home.rot.y;
        EnSlime_SetupMoveInDirection(this);
    } else {
        if (this->timer < 12) {
            rescaleFactor1 = this->timer * (0.01f / 12.0f); // This is about 1/1200, but (1.0f/1200.0f) does not match
            this->reviveScale.x = rescaleFactor1;
            this->reviveScale.z = rescaleFactor1;
            this->reviveScale.y = 2.0f * rescaleFactor1;
            this->reviveRotY = this->timer * (0x4000 / 10.0f);
        } else if (this->timer < 20) {
            rescaleFactor1 = (this->timer - 12) * (0.01f / 16.0f);
            rescaleFactor2 = 0.01f + rescaleFactor1;
            this->reviveScale.x = rescaleFactor2;
            this->reviveScale.z = rescaleFactor2;
            this->reviveScale.y = 2.0f * (0.01f - rescaleFactor1);
            this->reviveRotY = this->timer * (0x4000 / 10.0f);
        } else if (this->timer < 24) {
            rescaleFactor1 = (this->timer - 20) * (0.01f / 3.0f); // This is about 1/300
            rescaleFactor2 = 0.015f - rescaleFactor1;
            this->reviveScale.x = rescaleFactor2;
            this->reviveScale.z = rescaleFactor2;
            this->reviveScale.y = (2.0f * rescaleFactor1) + 0.01f;
            Actor_SetScale(&this->actor, 1.5f * rescaleFactor1);
            this->reviveRotY = ((23 - this->timer) * 7281.778f) + 10922.667f;
            this->actor.shape.rot.y = (28 - this->timer) * (f32)0x1000;
        } else {
            Actor_SetScale(&this->actor, (((28 - this->timer) * 0.1f) + 1.0f) * 0.01f);
            Math_Vec3f_Copy(&this->reviveScale, &gZeroVec3f);
            this->actor.shape.rot.y = (28 - this->timer) * (f32)0x1000;
        }

        if (this->timer == 21)
            this->collider.base.ocFlags1 |= OC1_ON;

        this->reviveRotY += this->actor.home.rot.y;
        this->actor.shape.rot.y += this->actor.home.rot.y;
    }
}

/**
 * Check actor AC hit since last update. If hit, initialize appropriate action cycle.
 */
void EnSlime_UpdateDamage(EnSlime* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;

        if ((this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) ||
            !(this->collider.elem.acHitElem->atDmgInfo.dmgFlags & 0xDB0B3)) {

            EnSlime_Thaw(this, play);
            if (this->actor.params == EN_SLIME_TYPE_BLUE && this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_FREEZE) // Blue chuchus take no damage from ice arrows.
                this->actor.colChkInfo.damage = 0;

            if (Actor_ApplyDamage(&this->actor) == 0) {
                Actor_SetDropFlag(&this->actor, &this->collider.elem, false);
                Enemy_StartFinishingBlow(play, &this->actor);
                this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
            }

            if (this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_BLUNT)
                EnSlime_SetupReactToBluntHit(this);
            else if (this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_STUN) {
                this->timer = 40;
                Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_BLUE, 255, COLORFILTER_BUFFLAG_XLU, 40);
                Actor_PlaySfx(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
                EnSlime_SetupStun(this);
            } else if (this->actor.colChkInfo.damageReaction != EN_SLIME_DMGEFF_HOOKSHOT) {
                if (this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_FREEZE) {
                    if (this->actor.params == EN_SLIME_TYPE_BLUE)
                        EnSlime_SetupSpawnIceBlock(this);
                    else {
                        EnSlime_Freeze(this);
                        if (this->actor.colChkInfo.health == 0) {
                            this->timer = 3;
                            this->collider.base.acFlags &= ~AC_ON;
                        }
                        EnSlime_SetupStun(this);
                    }
                } else {
                    if (this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_LIGHT) {
                        this->drawDmgEffAlpha = 4.0f;
                        this->drawDmgEffScale = 0.4f;
                        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_LIGHT_ORBS;
                    } else if (this->actor.colChkInfo.damageReaction == EN_SLIME_DMGEFF_ELECTRIC) {
                        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_ELECTRIC_SPARKS_LARGE;
                        this->drawDmgEffAlpha = 4.0f;
                        this->drawDmgEffScale = 0.4f;
                    }
                    EnSlime_SetupDamaged(this, play, true);
                }
            }
        }
    }
}

void EnSlime_Update(Actor* thisx, PlayState* play) {
    EnSlime* this = (EnSlime*)thisx;

    EnSlime_UpdateDamage(this, play);
    this->actionFunc(this, play);

    thisx->shape.shadowAlpha = this->iceBlockTimer; // Note: Does not match if you use this->actor instead of thisx
    if (this->iceBlockTimer == ICE_BLOCK_UNUSED) {
        if (thisx->scale.y > 0.0001f)
            thisx->lockOnArrowOffset = 60.0f / thisx->scale.y;

        if (this->collider.base.ocFlags1 & OC1_ON) {
            Actor_MoveXZGravity(thisx);
            Actor_UpdateBgCheckInfo(play, thisx, 20.0f, 35.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);
        }

        Collider_UpdateCylinder(thisx, &this->collider);
        this->collider.dim.radius = sCylinderInit.dim.radius * (100.0f * thisx->scale.z);
        this->collider.dim.height = sCylinderInit.dim.height * (100.0f * thisx->scale.y);

        if (this->actionFunc == EnSlime_Jump)
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);

        if (this->collider.base.acFlags & AC_ON)
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        this->collider.base.ocFlags1 |= OC1_TYPE_PLAYER;

        if (this->collider.base.ocFlags1 & OC1_ON)
            CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);

        Actor_SetFocus(thisx, 15.0f);
        if (this->drawDmgEffAlpha > 0.0f) {
            if (this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
                Math_StepToF(&this->drawDmgEffAlpha, 0.0f, 0.05f);
                this->drawDmgEffScale = (this->drawDmgEffAlpha + 1.0f) * 0.2f;
                this->drawDmgEffScale = CLAMP_MAX(this->drawDmgEffScale, 0.4f);
            } else if (!Math_StepToF(&this->drawDmgEffFrozenSteamScale, 0.4f, 0.01f))
                Actor_PlaySfx_Flagged(thisx, NA_SE_EV_ICE_FREEZE - SFX_FLAG);
        }
    }
}

static Color_RGBA8 sPrimColors[EN_SLIME_TYPE_MAX] = {
    { 255, 255, 255, 255 }, // EN_SLIME_TYPE_BLUE
    { 255, 255,   0, 255 }, // EN_SLIME_TYPE_GREEN
    { 255, 255, 200, 255 }, // EN_SLIME_TYPE_YELLOW
    { 225, 200, 255, 255 }, // EN_SLIME_TYPE_RED
};

static Color_RGBA8 sEnvColors[EN_SLIME_TYPE_MAX] = {
    { 140, 255, 195, 255 }, // EN_SLIME_TYPE_BLUE
    {  50, 255,   0, 255 }, // EN_SLIME_TYPE_GREEN
    { 255, 180,   0, 255 }, // EN_SLIME_TYPE_YELLOW
    { 255,  50, 155, 255 }, // EN_SLIME_TYPE_RED
};

static Vec3f sBodyPartPosOffsets[EN_SLIME_BODYPART_MAX] = {
    {  2000.0f, 2000.0f,     0.0f }, // EN_SLIME_BODYPART_0
    { -1500.0f, 2500.0f,  -500.0f }, // EN_SLIME_BODYPART_1
    {  -500.0f, 1000.0f,  2500.0f }, // EN_SLIME_BODYPART_2
    {     0.0f, 4000.0f,     0.0f }, // EN_SLIME_BODYPART_3
    {     0.0f, 2000.0f, -2000.0f }, // EN_SLIME_BODYPART_4
};

void EnSlime_Draw(Actor* thisx, PlayState* play) {
    EnSlime* this = (EnSlime*)thisx;

    Vec3f wobbleScale;
    Color_RGBA8* primColor;
    Color_RGBA8* envColor;
    u8 i;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    func_8002ED80(&this->actor, play, 0);
    if (this->iceBlockTimer != ICE_BLOCK_UNUSED) {
        gSPSegment(POLY_XLU_DISP++, 0x0A, D_80115FF0);
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 170, 255, 255, 255, 255);
        gDPSetEnvColor(POLY_XLU_DISP++, 150, 255, 255, this->iceBlockTimer);
    } else {
        primColor = &sPrimColors[this->actor.params];
        envColor = &sEnvColors[this->actor.params];
        gSPSegment(POLY_XLU_DISP++, 0x0A, Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, 0, 0, 64, 64, 1, 0, -(play->state.frames * 1) % 128, 32, 32));
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 100, primColor->r, primColor->g, primColor->b, primColor->a);
        gDPSetEnvColor(POLY_XLU_DISP++, envColor->r, envColor->g, envColor->b, 255);
    }

    if (this->actionFunc == EnSlime_Damaged) {
        wobbleScale.x = 1.0f - (Math_SinF((f32)this->timer * (M_PI / 2)) * 0.3f);
        wobbleScale.y = (Math_SinF((f32)this->timer * (M_PI / 2)) * 0.3f) + 1.0f;
        wobbleScale.z = 1.0f - (Math_CosF((f32)this->timer * (M_PI / 2)) * 0.3f);
        Matrix_RotateXFApply(this->wobbleRot.x);
        Matrix_RotateZF(this->wobbleRot.z, MTXMODE_APPLY);
        Matrix_Scale(wobbleScale.x, wobbleScale.y, wobbleScale.z, MTXMODE_APPLY);
        Matrix_RotateZF(-this->wobbleRot.z, MTXMODE_APPLY);
        Matrix_RotateXFApply(-this->wobbleRot.x);
    }

    MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
    gSPDisplayList(POLY_XLU_DISP++, gChuchuBodyDL);

    if (this->iceBlockTimer == ICE_BLOCK_UNUSED) { // Ice block is not active
        Scene_SetRenderModeXlu(play, 0, 1);
        gSPSegment(POLY_OPA_DISP++, 0x09, sEyeTextures[this->eyeTexIndex]);
        gDPSetEnvColor(POLY_OPA_DISP++, 0, 30, 70, 255);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_OPA_DISP++, gChuchuEyesDL);

    } else {
        Scene_SetRenderModeXlu(play, 1, 2);
        gSPSegment(POLY_XLU_DISP++, 0x09, sEyeTextures[this->eyeTexIndex]);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gChuchuEyesDL);
    }

    for (i=0; i<EN_SLIME_BODYPART_MAX; i++)
        Matrix_MultVec3f(&sBodyPartPosOffsets[i], &this->bodyPartsPos[i]);

    if (this->actionFunc == EnSlime_Revive) {
        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_RotateY(BINANG_TO_RAD(this->reviveRotY), MTXMODE_APPLY);
        Matrix_Scale(this->reviveScale.x, this->reviveScale.y, this->reviveScale.z, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gChuchuPuddleDL);
    }

    if ((this->actor.params != EN_SLIME_TYPE_BLUE) && this->actor.scale.x > 0.0f) {
        POLY_OPA_DISP = Play_SetFog(play, POLY_OPA_DISP);
        POLY_OPA_DISP = Gfx_SetupDL(POLY_OPA_DISP, SETUPDL_66);
        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y + (2000.0f * this->actor.scale.y), this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_Scale(0.03f, 0.03f, 0.03f, MTXMODE_APPLY);
        gSPSegment(POLY_OPA_DISP++, 0x08, this->itemDropTex);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_OPA_DISP++, gItemDropDL);
    }

    Actor_DrawDamageEffects(play, &this->actor, this->bodyPartsPos, EN_SLIME_BODYPART_MAX, this->drawDmgEffScale, this->drawDmgEffFrozenSteamScale, this->drawDmgEffAlpha, this->drawDmgEffType);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
