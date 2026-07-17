/*
 * File: z_en_okuta2.c
 * Overlay: ovl_En_Okuta2
 * Description: Octorok and its projectiles
 *
 * In addition to the standard red Octorok that appears in the final game, this actor is also responsible for an unused blue Octorok variant. This blue Octorok is invulnerable to every attack (it simply spins whenever the player hits it
 * with something), cannot be frozen with Ice Arrows, and can follow the player underwater if the player dives below the surface. Note that this blue Octorok is separate from the one that is used in the Town Shooting Gallery; that Octorok
 * is handled by EnSyatekiOkuta. This actor also handles the projectiles that the Octoroks shoot.
 */

#include "z_en_okuta2.h"

#include "libc64/qrand.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_math.h"
#include "sys_matrix.h"
#include "z_en_item00.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "player.h"
#include "save.h"
#include "array_count.h"

#include "assets/objects/object_okuta/object_okuta.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE)

void EnOkuta2_Init(Actor* thisx, struct PlayState* play);
void EnOkuta2_Destroy(Actor* thisx, struct PlayState* play);
void EnOkuta2_Update(Actor* thisx, struct PlayState* play);
void EnOkuta2_Draw(Actor* thisx, struct PlayState* play);

void EnOkuta2_SetupWaitToAppear(EnOkuta2* this);
void EnOkuta2_WaitToAppear(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_SetupAppear(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Appear(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_SetupHide(EnOkuta2* this);
void EnOkuta2_Hide(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_SetupFloat(EnOkuta2* this);
void EnOkuta2_Float(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_SetupShoot(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Shoot(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Damaged(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_SetupDie(EnOkuta2* this);
void EnOkuta2_Die(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_FrozenInIceBlock(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Frozen(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Spin(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Projectile_Fly(EnOkuta2* this, struct PlayState* play);
void EnOkuta2_Projectile_Update(Actor* thisx, struct PlayState* play);

#include "assets/overlays/ovl_En_Okuta/ovl_En_Okuta.c"

ActorProfile En_Okuta2_Profile = {
    /**/ ACTOR_EN_OKUTA2,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_OKUTA,
    /**/ sizeof(EnOkuta2),
    /**/ EnOkuta2_Init,
    /**/ EnOkuta2_Destroy,
    /**/ EnOkuta2_Update,
    /**/ EnOkuta2_Draw,
};

static ColliderCylinderInit sProjectileCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK4,
        { 0xF7CFFFFF, 0x00, 0x04 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_HARD,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 13, 20, 0, { 0, 0, 0 } },
};

static ColliderCylinderInit sOctorokCylinderInit = {
    {
        COL_MATERIAL_HIT0,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK1,
        { 0xF7CFFFFF, 0x00, 0x04 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_HARD,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 20, 40, -30, { 0, 0, 0 } },
};

static CollisionCheckInfoInit sColChkInfoInit = { 4, 15, 60, 100 };

typedef enum EnOkuta2DamageEffect {
    /* 0x0 */ EN_OKUTA2_DMGEFF_NONE,
    /* 0x3 */ EN_OKUTA2_DMGEFF_FREEZE = 0x3,
    /* 0x4 */ EN_OKUTA2_DMGEFF_LIGHT_ORB
} EnOkuta2DamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Deku stick    */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Slingshot     */ DMG_ENTRY(1, EN_OKUTA2_DMGEFF_NONE),
    /* Explosive     */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Boomerang     */ DMG_ENTRY(1, EN_OKUTA2_DMGEFF_NONE),
    /* Normal arrow  */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Hammer swing  */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Hookshot      */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Kokiri sword  */ DMG_ENTRY(1, EN_OKUTA2_DMGEFF_NONE),
    /* Master sword  */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Giant's Knife */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_NONE),
    /* Fire arrow    */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Ice arrow     */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_LIGHT_ORB),
    /* Unk arrow 1   */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_NONE),
    /* Unk arrow 2   */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Unk arrow 3   */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Fire magic    */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Ice magic     */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Light magic   */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Shield        */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Mirror Ray    */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Kokiri spin   */ DMG_ENTRY(1, EN_OKUTA2_DMGEFF_NONE),
    /* Giant spin    */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_NONE),
    /* Master spin   */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Kokiri jump   */ DMG_ENTRY(2, EN_OKUTA2_DMGEFF_NONE),
    /* Giant jump    */ DMG_ENTRY(8, EN_OKUTA2_DMGEFF_NONE),
    /* Master jump   */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_NONE),
    /* Unknown 1     */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Unblockable   */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
    /* Hammer jump   */ DMG_ENTRY(4, EN_OKUTA2_DMGEFF_NONE),
    /* Unknown 2     */ DMG_ENTRY(0, EN_OKUTA2_DMGEFF_NONE),
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, NAVI_ENEMY_OCTOROK, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 6500, ICHAIN_STOP),
};

void EnOkuta2_Init(Actor* thisx, PlayState* play) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    WaterBox* waterBox;
    f32 waterSurface;
    s32 bgId;

    Actor_ProcessInitChain(thisx, sInitChain);
    this->numConsecutiveProjectiles = EN_OKUTA2_GET_NUM_CONSECUTIVE_PROJECTILES(thisx);
    thisx->params &= 0xFF;

    if (EN_OKUTA2_GET_TYPE(thisx) == EN_OKUTA2_TYPE_RED_OCTOROK || EN_OKUTA2_GET_TYPE(thisx) == EN_OKUTA2_TYPE_BLUE_OCTOROK) {
        SkelAnime_Init(play, &this->skelAnime, &gOctorokSkel, &gOctorokAppearAnim, this->jointTable, this->morphTable, OCTOROK_LIMB_MAX);
        Collider_InitCylinder(play, &this->collider);
        Collider_SetCylinder(play, &this->collider, thisx, &sOctorokCylinderInit);
        CollisionCheck_SetInfo(&thisx->colChkInfo, &sDamageTable, &sColChkInfoInit);
        this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(this->actor.colChkInfo.health, MONSTER_HP);

        if (this->numConsecutiveProjectiles == 0xFF || this->numConsecutiveProjectiles == 0)
            this->numConsecutiveProjectiles = 1;

        thisx->floorHeight = BgCheck_EntityRaycastDown4(&play->colCtx, &thisx->floorPoly, &bgId, thisx, &thisx->world.pos);

        if (!WaterBox_GetSurface1(play, &play->colCtx, thisx->world.pos.x, thisx->world.pos.z, &waterSurface, &waterBox) || waterSurface <= thisx->floorHeight)
            Actor_Kill(thisx);
        else thisx->home.pos.y = waterSurface;

        if (EN_OKUTA2_GET_TYPE(thisx) == EN_OKUTA2_TYPE_BLUE_OCTOROK) {
            this->collider.base.colMaterial = COL_MATERIAL_HARD;
            this->collider.base.acFlags |= AC_HARD;
        }

        thisx->attentionRangeType = ATTENTION_RANGE_5;
        EnOkuta2_SetupWaitToAppear(this);
    } else {
        ActorShape_Init(&thisx->shape, 1100.0f, ActorShadow_DrawCircle, 18.0f);
        thisx->flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
        thisx->flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        Collider_InitCylinder(play, &this->collider);
        Collider_SetCylinder(play, &this->collider, thisx, &sProjectileCylinderInit);
        Actor_ChangeCategory(play, &play->actorCtx, thisx, ACTORCAT_PROP);
        this->timer = 22;
        thisx->shape.rot.y = 0;
        thisx->world.rot.x = -thisx->shape.rot.x;
        thisx->shape.rot.x = 0;
        this->actionFunc = EnOkuta2_Projectile_Fly;
        thisx->update = EnOkuta2_Projectile_Update;
        thisx->speed = 10.0f;
    }
}

void EnOkuta2_Destroy(Actor* thisx, PlayState* play) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    Collider_DestroyCylinder(play, &this->collider);
}

/**
 * Covers the Octorok's body parts with ice and turns the Octorok red. Note that this is different from being frozen inside a block of ice; see `EnOkuta2_FrozenInIceBlock` for how that is handled.
 */
void EnOkuta2_Freeze(EnOkuta2* this) {
    this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX;
    this->drawDmgEffScale = 0.6f;
    this->drawDmgEffFrozenSteamScale = 9.0f * 0.1f;
    this->drawDmgEffAlpha = 1.0f;
    this->timer = 80;
    this->collider.base.colMaterial = COL_MATERIAL_HIT3;
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 80);
}

/**
 * Spawns ice shards on all of the Octorok's body parts that fly off in random directions. Note that this only occurs when the Octorok is frozen *without* encasing it in a block of ice.
 */
void EnOkuta2_Thaw(EnOkuta2* this, PlayState* play) {
    if (this->drawDmgEffType == ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
        this->drawDmgEffType = ACTOR_DRAW_DMGEFF_FIRE;
        this->drawDmgEffAlpha = 0.0f;
        Actor_SpawnIceEffects(play, &this->actor, this->bodyPartsPos, EN_OKUTA2_BODYPART_MAX, 2, 0.3f, 0.2f);
        this->collider.base.colMaterial = COL_MATERIAL_HIT0;
    }
}

void EnOkuta2_SpawnBubbles(EnOkuta2* this, PlayState* play) {
    s32 i;

    for (i=0; i < 10; i++)
        EffectSsBubble_Spawn(play, &this->actor.world.pos, -10.0f, 10.0f, 30.0f, 0.25f);
}

/**
 * Spawns the puff of smoke that appears at the Octorok's snout.
 */
void EnOkuta2_SpawnSmoke(Vec3f* pos, Vec3f* velocity, s16 scaleStep, PlayState* play) {
    static Color_RGBA8 sSmokePrimColor = { 255, 255, 255, 255 };
    static Color_RGBA8 sSmokeEnvColor  = { 150, 150, 150, 255 };

    func_8002829C(play, pos, velocity, &gZeroVec3f, &sSmokePrimColor, &sSmokeEnvColor, 400, scaleStep);
}

/**
 * Spawns the splash that appears when the Octorok appears from underwater, hides underwater, shoots a rock, or dies.
 */
void EnOkuta2_SpawnSplash(EnOkuta2* this, PlayState* play) {
    EffectSsGSplash_Spawn(play, &this->actor.home.pos, NULL, NULL, 0, 1300);
}

void EnOkuta2_SpawnRipple(EnOkuta2* this, PlayState* play) {
    f32 diffY = this->actor.world.pos.y - this->actor.home.pos.y;
    Vec3f pos;

    if ((play->gameplayFrames % 7) == 0 && diffY < 50.0f && diffY >= -20.0f) {
        pos.x = this->actor.world.pos.x;
        pos.y = this->actor.home.pos.y;
        pos.z = this->actor.world.pos.z;
        EffectSsGRipple_Spawn(play, &pos, 250, 650, 0);
    }
}

/**
 * Returns the height at which the unused blue Octorok variant should float at within the water. This allows for the Octorok to follow the player underwater, but it does not take collision into account.
 */
f32 EnOkuta2_GetFloatHeight(EnOkuta2* this) {
    f32 height = this->actor.world.pos.y + this->actor.yDistToPlayer + 60.0f;

    if (this->actor.home.pos.y < height) // EnOkuta2_Init sets the Octorok's home y-position to be the water's surface, so this ensures that the Octorok will always be either at the water's surface or below it.
        return this->actor.home.pos.y;

    return height;
}

void EnOkuta2_SpawnProjectile(EnOkuta2* this, PlayState* play) {
    Vec3f pos, velocity;
    f32 sin = Math_SinS(this->actor.shape.rot.y);
    f32 cos = Math_CosS(this->actor.shape.rot.y);

    pos.x = this->actor.world.pos.x + 25.0f * sin;
    pos.y = this->actor.world.pos.y - 6.0f;
    pos.z = this->actor.world.pos.z + 25.0f * cos;

    if (Actor_Spawn(&play->actorCtx, play, ACTOR_EN_OKUTA2, pos.x, pos.y, pos.z, this->actor.shape.rot.x, this->actor.shape.rot.y, this->actor.shape.rot.z, EN_OKUTA2_GET_TYPE(&this->actor) + EN_OKUTA2_TYPE_PROJECTILE_BASE) != NULL) {
        pos.x = this->actor.world.pos.x + (40.0f * sin);
        pos.z = this->actor.world.pos.z + (40.0f * cos);
        pos.y = this->actor.world.pos.y;

        velocity.x = 1.5f * sin;
        velocity.y = 0.0f;
        velocity.z = 1.5f * cos;

        EnOkuta2_SpawnSmoke(&pos, &velocity, 20, play);
    }

    Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_THROW);
}

void EnOkuta2_SetupWaitToAppear(EnOkuta2* this) {
    this->actor.draw = NULL;
    this->actor.world.pos.y = this->actor.home.pos.y;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actionFunc = EnOkuta2_WaitToAppear;
}

/**
 * Waits until the player gets close, but not *too* close, then makes the Octorok appear at the water's surface.
 */
void EnOkuta2_WaitToAppear(EnOkuta2* this, PlayState* play) {
    this->actor.world.pos.y = this->actor.home.pos.y;

    if (this->actor.xzDistToPlayer < 480.0f && this->actor.xzDistToPlayer > 200.0f) {
        if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK)
            EnOkuta2_SetupAppear(this, play);
        //else if (ABS_ALT((s16)(this->actor.yawTowardsPlayer - this->actor.world.rot.y)) < 0x4000 && play->bButtonAmmoPlusOne == 0)
        //    EnOkuta2_SetupAppear(this, play);
    }
}

void EnOkuta2_SetupAppear(EnOkuta2* this, PlayState* play) {
    this->actor.draw = EnOkuta2_Draw;
    this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
    this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
    Animation_PlayOnce(&this->skelAnime, &gOctorokAppearAnim);
    EnOkuta2_SpawnBubbles(this, play);
    this->actionFunc = EnOkuta2_Appear;
}

/**
 * Plays the appear animation to completion while scaling the Octorok to its full size, then transitions to the idle floating state. If the Octorok is a red Octorok, and the player is too close to the Octorok when its appear animation is complete, then the Octorok will instead hide underwater.
 */
void EnOkuta2_Appear(EnOkuta2* this, PlayState* play) {
    if (SkelAnime_Update(&this->skelAnime)) {
        if (this->actor.xzDistToPlayer < 160.0f && EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK)
            EnOkuta2_SetupHide(this);
        else EnOkuta2_SetupFloat(this);
    } else {
        f32 curFrame = this->skelAnime.curFrame;

        if (curFrame <= 4.0f)
            Actor_SetScale(&this->actor, curFrame * 0.25f * 0.01f);
        else if (Animation_OnFrame(&this->skelAnime, 5.0f))
            Actor_SetScale(&this->actor, 0.01f);
    }

    if (Animation_OnFrame(&this->skelAnime, 2.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_JUMP);
    if (Animation_OnFrame(&this->skelAnime, 12.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_LAND);
    if ((Animation_OnFrame(&this->skelAnime, 3.0f)) || (Animation_OnFrame(&this->skelAnime, 15.0f)))
        EnOkuta2_SpawnSplash(this, play);
}

void EnOkuta2_SetupHide(EnOkuta2* this) {
    Animation_PlayOnce(&this->skelAnime, &gOctorokHideAnim);
    this->actionFunc = EnOkuta2_Hide;
}

/**
 * Retreats underwater while scaling the Octorok down, then makes the Octorok wait to appear again.
 */
void EnOkuta2_Hide(EnOkuta2* this, PlayState* play) {
    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 30.0f);

    if (SkelAnime_Update(&this->skelAnime)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_SINK);
        EnOkuta2_SpawnBubbles(this, play);
        EnOkuta2_SetupWaitToAppear(this);
    } else {
        f32 curFrame = this->skelAnime.curFrame;

        if (curFrame >= 4.0f)
            Actor_SetScale(&this->actor, (6.0f - curFrame) * 0.5f * 0.01f);
    }

    if (Animation_OnFrame(&this->skelAnime, 2.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_DAIOCTA_SINK);
    if (Animation_OnFrame(&this->skelAnime, 4.0f))
        EnOkuta2_SpawnSplash(this, play);
}

void EnOkuta2_SetupFloat(EnOkuta2* this) {
    Animation_PlayLoop(&this->skelAnime, &gOctorokFloatAnim);

    if (this->actionFunc == EnOkuta2_Shoot) // EnOkuta2_Float uses timer to track how many times the float animation loops before shooting at the player.
        this->timer = 8;
    else this->timer = 0;

    this->actionFunc = EnOkuta2_Float;
}

/**
 * Floats in place while slowly turning to face the player. If the player is too far from the Octorok, it will hide underwater (the red Octoroks will also do this if the player is too close). Otherwise, it will start shooting projectiles at the player after a short time, so long as the Octorok is roughly facing the player.
 */
void EnOkuta2_Float(EnOkuta2* this, PlayState* play) {
    if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK)
        this->actor.world.pos.y = this->actor.home.pos.y;
    else this->actor.world.pos.y = EnOkuta2_GetFloatHeight(this);

    SkelAnime_Update(&this->skelAnime);

    if (Animation_OnFrame(&this->skelAnime, 0.0f))
        DECR(this->timer);

    if (Animation_OnFrame(&this->skelAnime, 0.5f))
        //Actor_PlaySfx(&this->actor, NA_SE_EN_COMMON_WATER_SLW);
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_SINK);

    if (this->actor.xzDistToPlayer > 560.0f || (this->actor.xzDistToPlayer < 160.0f && EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK))
        EnOkuta2_SetupHide(this);
    else {
        s16 yawDiff = Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0xE38, 0x38E);

        if (ABS_ALT(yawDiff) < 0x38E && ((EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK && this->timer == 0 && this->actor.yDistToPlayer < 120.0f) || (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_BLUE_OCTOROK && (this->timer == 0 || this->actor.xzDistToPlayer < 150.0f)))) {
            EnOkuta2_SetupShoot(this, play);
        }
    }
}

void EnOkuta2_SetupShoot(EnOkuta2* this, PlayState* play) {
    Animation_PlayOnce(&this->skelAnime, &gOctorokShootAnim);

    if (this->actionFunc != EnOkuta2_Shoot) {
        if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK) // EnOkuta2_Shoot uses timer to track how many projectiles are remaining in the current "volley". The Octorok will shoot at the player repeatedly, decrementing the `timer` variable after each shot, until it reaches 0.
            this->timer = this->numConsecutiveProjectiles;
        else this->timer = (560.0f - this->actor.xzDistToPlayer) * 0.005f + 1.0f;
    }

    if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK) {
        this->jumpHeight = this->actor.yDistToPlayer + 20.0f;
        this->jumpHeight = CLAMP_MIN(this->jumpHeight, 10.0f);

        if (this->jumpHeight > 50.0f) {
            EnOkuta2_SpawnSplash(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_JUMP);
        }
    }

    this->actionFunc = EnOkuta2_Shoot;
}

/**
 * Repeatedly fires projectiles at the player based on the value of the `numConsecutiveProjectiles` variable (for the
 * red Octorok) or based on the distance between the Octorok and the player (for the blue Octorok). Once it's done
 * shooting projectiles, the Octorok will go back to floating. If it's a red Octorok, then it will stop shooting and
 * hide underwater if the player gets too close.
 */
void EnOkuta2_Shoot(EnOkuta2* this, PlayState* play) {
    f32 curFrame;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 0x71C);

    if (SkelAnime_Update(&this->skelAnime)) {
        DECR(this->timer);

        if (this->timer == 0) {
            if (EN_OKUTA2_GET_TYPE(&this->actor) != EN_OKUTA2_TYPE_BLUE_OCTOROK || this->actor.xzDistToPlayer > 150.0f)
                EnOkuta2_SetupFloat(this);
            else EnOkuta2_SetupShoot(this, play);
        } else EnOkuta2_SetupShoot(this, play);
    } else {
        if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK) {
            curFrame = this->skelAnime.curFrame;

            if (curFrame < 13.0f)
                this->actor.world.pos.y = Math_SinF(0.2617889f * curFrame) * this->jumpHeight + this->actor.home.pos.y;
            if ((this->jumpHeight > 50.0f) && Animation_OnFrame(&this->skelAnime, 13.0f)) {
                EnOkuta2_SpawnSplash(this, play);
                Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_LAND);
            }
        } else {
            this->actor.world.pos.y = EnOkuta2_GetFloatHeight(this);

            if ((curFrame = this->skelAnime.curFrame) < 13.0f) {
                Player* player = GET_PLAYER(play);
                Vec3f targetPos;
                s16 pitch;

                targetPos.x = player->actor.world.pos.x;
                targetPos.y = player->actor.world.pos.y + 20.0f;
                targetPos.z = player->actor.world.pos.z;

                pitch = Actor_WorldPitchTowardPoint(&this->actor, &targetPos);
                pitch = CLAMP(pitch, -0x2AAA, 0);

                this->actor.shape.rot.x = Math_SinF(0.2617889f * curFrame) * pitch;
            }
        }

        if (Animation_OnFrame(&this->skelAnime, 6.0f))
            EnOkuta2_SpawnProjectile(this, play);
    }

    if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK && this->actor.xzDistToPlayer < 160.0f)
        EnOkuta2_SetupHide(this);
}

void EnOkuta2_SetupDamaged(EnOkuta2* this) {
    Animation_MorphToPlayOnce(&this->skelAnime, &gOctorokHitAnim, -5.0f);
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 11);
    this->collider.base.acFlags &= ~AC_ON;
    Actor_SetScale(&this->actor, 0.01f);
    Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_DEAD1);
    this->actionFunc = EnOkuta2_Damaged;
}

void EnOkuta2_Damaged(EnOkuta2* this, PlayState* play) {
    if (SkelAnime_Update(&this->skelAnime)) {
        if (this->actor.colChkInfo.health == 0)
            EnOkuta2_SetupDie(this);
        else {
            this->collider.base.acFlags |= AC_ON;
            EnOkuta2_SetupFloat(this);
        }
    }

    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);
}

void EnOkuta2_SetupDie(EnOkuta2* this) {
    Animation_MorphToPlayOnce(&this->skelAnime, &gOctorokDieAnim, -3.0f);
    this->timer = 0;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actionFunc = EnOkuta2_Die;
}

void EnOkuta2_Die(EnOkuta2* this, PlayState* play) {
    static Vec3f sBubbleAccel = { 0.0f, -0.5f, 0.0f };
    static Color_RGBA8 sBubblePrimColor = { 255, 255, 255, 255 };
    static Color_RGBA8 sBubbleEnvColor  = { 150, 150, 150,   0 };
    Vec3f velocity, pos;
    s32 i;

    if (SkelAnime_Update(&this->skelAnime))
        this->timer++;

    Math_ApproachF(&this->actor.world.pos.y, this->actor.home.pos.y, 0.5f, 5.0f);

    if (this->timer == 5) {
        pos.x = this->actor.world.pos.x;
        pos.y = this->actor.world.pos.y + 40.0f;
        pos.z = this->actor.world.pos.z;

        velocity.x = 0.0f;
        velocity.y = -0.5f;
        velocity.z = 0.0f;

        EnOkuta2_SpawnSmoke(&pos, &velocity, -20, play);
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_DEAD2);
    }

    if (Animation_OnFrame(&this->skelAnime, 15.0f)) {
        EnOkuta2_SpawnSplash(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_EN_OCTAROCK_LAND);
    }

    if (this->timer < 3) {
        Actor_SetScale(&this->actor, ((this->timer * 0.25f) + 1.0f) * 0.01f);
        return;
    }

    if (this->timer < 6) {
        Actor_SetScale(&this->actor, (1.5f - ((this->timer - 2) * 0.2333f)) * 0.01f);
        return;
    }

    if (this->timer < 11) {
        Actor_SetScale(&this->actor, (((this->timer - 5) * 0.04f) + 0.8f) * 0.01f);
        return;
    }

    if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.0005f)) {
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 30, NA_SE_EN_OCTAROCK_SINK);
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0xA0);

        for (i = 0; i < 20; i++) {
            velocity.x = (Rand_ZeroOne() - 0.5f) * 7.0f;
            velocity.y = Rand_ZeroOne() * 7.0f;
            velocity.z = (Rand_ZeroOne() - 0.5f) * 7.0f;
            EffectSsDtBubble_SpawnCustomColor(play, &this->actor.world.pos, &velocity, &sBubbleAccel, &sBubblePrimColor, &sBubbleEnvColor, Rand_S16Offset(100, 50), 25, false);
        }

        Actor_Kill(&this->actor);
    }

    this->actor.scale.z = this->actor.scale.x;
    this->actor.scale.y = this->actor.scale.x;
}

void EnOkuta2_SetupFrozen(EnOkuta2* this, PlayState* play) {
    s32 objSlot;
    s32 isLoaded;

    this->timer = 10;
    Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_GRAY, COLORFILTER_INTENSITY_FLAG | 255, COLORFILTER_BUFFLAG_OPA, 10);

    objSlot = Object_GetSlot(&play->objectCtx, OBJECT_ICE_BLOCK);
    isLoaded = Object_IsLoaded(&play->objectCtx, objSlot);
    osSyncPrintf("EnOkuta2_SetupFrozen: objSlot=%d isLoaded=%d jointTable=%08x scale=%f headScale=%f\n", objSlot, isLoaded, (u32)this->skelAnime.jointTable, this->actor.scale.y, this->headScale.y);

    this->actor.child = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_OBJ_ICEBLOCK, this->actor.world.pos.x, this->actor.world.pos.y + this->skelAnime.jointTable->y * this->actor.scale.y + 25.0f * this->headScale.y, this->actor.world.pos.z, 0, this->actor.home.rot.y, 0, 3);

    osSyncPrintf("EnOkuta2_SetupFrozen: spawn result child=%08x\n", (u32)this->actor.child);

    if (this->actor.child != NULL) {
        this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
        this->actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        //this->actor.child->csId = this->actor.csId;
        this->actionFunc = EnOkuta2_FrozenInIceBlock;
    } else {
        EnOkuta2_Freeze(this);

        if (Actor_ApplyDamage(&this->actor) == 0) {
            Enemy_StartFinishingBlow(play, &this->actor);
            this->collider.base.acFlags &= ~AC_ON;
            this->timer = 3;
        }

        this->actionFunc = EnOkuta2_Frozen;
    }
}

/**
 * Stops all movement and animation for the Octorok and waits until the ice block actor is killed. Afterwards, the Octorok will sink back to the water's surface and then start floating again.
 */
void EnOkuta2_FrozenInIceBlock(EnOkuta2* this, PlayState* play) {
    this->actor.colorFilterTimer = 10;

    if (this->actor.child == NULL || this->actor.child->update == NULL) {
        this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;

        if (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, 10.0f)) {
            this->actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED;
            EnOkuta2_SetupFloat(this);
        }
    }
}

/**
 * Stops all movement and animation for the Octorok and waits 80 frames (or 3 frames if the attack that froze the Octorok also killed it). Afterwards, ice pieces will fly off the Octorok, and it will play its damaged animation.
 * Note that this function is *not* responsible for handling the Octorok being encased in an ice block; that's handled by EnOkuta2_FrozenInIceBlock. This behavior is incredibly difficult to trigger in-game and is unlikely to be seen by most players; see EnOkuta2_SetupFrozen for more information.
 */
void EnOkuta2_Frozen(EnOkuta2* this, PlayState* play) {
    DECR(this->timer);

    if (this->timer == 0) {
        EnOkuta2_Thaw(this, play);
        EnOkuta2_SetupDamaged(this);
    }
}

void EnOkuta2_SetupSpin(EnOkuta2* this) {
    Animation_Change(&this->skelAnime, &gOctorokHitAnim, 1.0f, 0.0f, Animation_GetLastFrame(&gOctorokHitAnim) - 3.0f, ANIMMODE_ONCE, -3.0f);
    this->timer = 20;
    this->actionFunc = EnOkuta2_Spin;
}

/**
 * Spins in place for 20 frames while playing its hit animation, then makes the Octorok go back to floating. This function is only ever used by the unused blue Octorok variant; this is what the blue Octorok does instead of taking damage from the player's attacks.
 */
void EnOkuta2_Spin(EnOkuta2* this, PlayState* play) {
    this->timer--;
    Math_ScaledStepToS(&this->actor.shape.rot.x, 0, 0x400);

    if (SkelAnime_Update(&this->skelAnime))
        Animation_Change(&this->skelAnime, &gOctorokHitAnim, 1.0f, 0.0f, Animation_GetLastFrame(&gOctorokHitAnim) - 3.0f, ANIMMODE_ONCE, -3.0f);

    if (this->timer < 10)
        this->actor.shape.rot.y += (s16)(0x2000 * Math_SinF(this->timer * (M_PI / 20.0f)));
    else this->actor.shape.rot.y += 0x2000;

    if (this->timer == 0)
        EnOkuta2_SetupFloat(this);
}

/**
 * Handles all the behavior of the Octorok's projectile, including spinning the projectile around constantly and reflecting the projectile when it bounces off the player's shield .
 */
void EnOkuta2_Projectile_Fly(EnOkuta2* this, PlayState* play) {
    Vec3f fragmentPos;
    Player* player = GET_PLAYER(play);
    Vec3s shieldRot;

    this->timer--;

    if (this->timer < 0) {
        this->actor.velocity.y -= 0.5f;
        this->actor.world.rot.x =
            Math_Atan2S(sqrtf(SQ(this->actor.velocity.x) + SQ(this->actor.velocity.z)), this->actor.velocity.y);
    }

    this->actor.home.rot.z += 0x1554;

    if ((this->actor.bgCheckFlags & BGCHECKFLAG_WALL) || (this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) || (this->actor.bgCheckFlags & BGCHECKFLAG_CEILING) || (this->collider.base.atFlags & AT_HIT) || (this->collider.base.acFlags & AC_HIT) || (this->collider.base.ocFlags1 & OC1_HIT) || this->actor.floorHeight == BGCHECK_Y_MIN) {
        if (player->currentShield == PLAYER_SHIELD_DEKU || player->currentShield == PLAYER_SHIELD_HEROS || (player->currentShield == PLAYER_SHIELD_HYLIAN && LINK_IS_ADULT)) {
            if ((this->collider.base.atFlags & AT_HIT) && (this->collider.base.atFlags & AT_TYPE_ENEMY)) {
                if (this->collider.base.atFlags & AT_BOUNCED) {
                    this->collider.base.atFlags &= ~(AT_HIT | AT_BOUNCED | AT_TYPE_ENEMY);
                    this->collider.base.atFlags |= AT_TYPE_PLAYER;
                    this->collider.elem.atDmgInfo.dmgFlags = DMG_DEKU_STICK;
                    this->collider.elem.atDmgInfo.dmgFlags = DMG_DEKU_STICK;
                    this->collider.elem.atDmgInfo.damage = 2;
                    Matrix_MtxFToYXZRotS(&player->shieldMf, &shieldRot, false);
                    this->actor.world.rot.y = shieldRot.y + 0x8000;
                    this->timer = 22;
                    return;
                }
            }
        }

        fragmentPos.x = this->actor.world.pos.x;
        fragmentPos.y = this->actor.world.pos.y + 11.0f;
        fragmentPos.z = this->actor.world.pos.z;
        EffectSsHahen_SpawnBurst(play, &fragmentPos, 6.0f, 0, 1, 2, 15, OBJECT_OKUTA, 10, gOctorokProjectileDL);
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 20, NA_SE_EN_OCTAROCK_ROCK);

        if ((this->collider.base.atFlags & AT_HIT) && (this->collider.base.atFlags & AT_TYPE_ENEMY) && !(this->collider.base.atFlags & AT_BOUNCED) && EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_BLUE_PROJECTILE)
            Actor_SetPlayerKnockbackLargeNoDamage(play, &this->actor, 8.0f, this->actor.world.rot.y, 6.0f);

        Actor_Kill(&this->actor);
        return;
    }

    if (this->timer == -300) {
        Actor_Kill(&this->actor);
    }
}

/**
 * Adjusts the scale of the Octorok's head based on their current action and their current animation frame.
 */
void EnOkuta2_UpdateHeadScale(EnOkuta2* this) {
    f32 curFrame = this->skelAnime.curFrame;

    if (this->actionFunc == EnOkuta2_Appear) {
        if (curFrame < 8.0f)
            this->headScale.x = this->headScale.y = this->headScale.z = 1.0f;
        else if (curFrame < 10.0f) {
            this->headScale.x = this->headScale.z = 1.0f;
            this->headScale.y = ((curFrame - 7.0f) * 0.4f) + 1.0f;
        } else if (curFrame < 14.0f) {
            this->headScale.x = this->headScale.z = ((curFrame - 9.0f) * 0.075f) + 1.0f;
            this->headScale.y = 1.8f - ((curFrame - 9.0f) * 0.25f);
        } else {
            this->headScale.x = this->headScale.z = 1.3f - ((curFrame - 13.0f) * 0.05f);
            this->headScale.y = ((curFrame - 13.0f) * 0.0333f) + 0.8f;
        }
    } else if (this->actionFunc == EnOkuta2_Hide) {
        if (curFrame < 3.0f)
            this->headScale.y = 1.0f;
        else {
            if (curFrame < 4.0f)
                this->headScale.y = (curFrame - 2.0f) + 1.0f;
            else this->headScale.y = 2.0f - ((curFrame - 3.0f) * 0.333f);
        }
        this->headScale.x = this->headScale.z = 1.0f;
    } else if (this->actionFunc == EnOkuta2_Shoot) {
        if (curFrame < 5.0f)
            this->headScale.x = this->headScale.y = this->headScale.z = (curFrame * 0.125f) + 1.0f;
        else if (curFrame < 7.0f)
            this->headScale.x = this->headScale.y = this->headScale.z = 1.5f - ((curFrame - 4.0f) * 0.35f);
        else if (curFrame < 17.0f) {
            this->headScale.x = this->headScale.z = ((curFrame - 6.0f) * 0.05f) + 0.8f;
            this->headScale.y = 0.8f;
        } else {
            this->headScale.x = this->headScale.z = 1.3f - ((curFrame - 16.0f) * 0.1f);
            this->headScale.y = ((curFrame - 16.0f) * 0.0666f) + 0.8f;
        }
    } else if (this->actionFunc == EnOkuta2_Float) {
        this->headScale.x = this->headScale.z = 1.0f;
        this->headScale.y = Math_SinF((M_PI / 16) * curFrame) * 0.2f + 1.0f;
    } else this->headScale.x = this->headScale.y = this->headScale.z = 1.0f;
}

void EnOkuta2_UpdateDamage(EnOkuta2* this, PlayState* play) {
    if (!(this->collider.base.acFlags & AC_HIT))
        return;

    this->collider.base.acFlags &= ~AC_HIT;

    if (this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX || !(this->collider.elem.acHitElem->atDmgInfo.dmgFlags & 0xDB0B3)) {
        Actor_SetDropFlag(&this->actor, &this->collider.elem, true);
        EnOkuta2_Thaw(this, play);

        if (this->actor.colChkInfo.damageReaction == EN_OKUTA2_DMGEFF_FREEZE) {
            EnOkuta2_SetupFrozen(this, play);
            return;
        }

        if (this->actor.colChkInfo.damageReaction == EN_OKUTA2_DMGEFF_LIGHT_ORB) {
            this->drawDmgEffAlpha = 4.0f;
            this->drawDmgEffScale = 0.6f;
            this->drawDmgEffType = ACTOR_DRAW_DMGEFF_LIGHT_ORBS;
        }

        if (Actor_ApplyDamage(&this->actor) == 0)
            Enemy_StartFinishingBlow(play, &this->actor);

        EnOkuta2_SetupDamaged(this);
    }
}

void EnOkuta2_Update(Actor* thisx, PlayState* play) {
    EnOkuta2* this = (EnOkuta2*)thisx;

    if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK)
        EnOkuta2_UpdateDamage(this, play);
    else if ((this->collider.base.atFlags & AT_HIT) || (this->collider.base.acFlags & AC_HIT)) {
        if (this->collider.base.atFlags & AT_HIT)
            Actor_SetPlayerKnockbackLargeNoDamage(play, &this->actor, 8.0f, this->actor.world.rot.y, 6.0f);
        EnOkuta2_SetupSpin(this);
    }

    this->actionFunc(this, play);

    if (this->actionFunc != EnOkuta2_FrozenInIceBlock) {
        EnOkuta2_UpdateHeadScale(this);
        this->collider.dim.height = (sOctorokCylinderInit.dim.height * this->headScale.y - this->collider.dim.yShift) * this->actor.scale.y * 100.0f;
        Collider_UpdateCylinder(&this->actor, &this->collider);

        if (this->actionFunc == EnOkuta2_Appear || this->actionFunc == EnOkuta2_Hide) {
            this->collider.dim.pos.y = this->actor.world.pos.y + this->skelAnime.jointTable->y * this->actor.scale.y;
            this->collider.dim.radius = sOctorokCylinderInit.dim.radius * this->actor.scale.x * 100.0f;
        }

        if (this->actor.draw != NULL) {
            if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_BLUE_OCTOROK)
                CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
            if (this->collider.base.acFlags & AC_ON)
                CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);

            CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
            EnOkuta2_SpawnRipple(this, play);
        }

        Actor_SetFocus(&this->actor, 15.0f);

        if (this->drawDmgEffAlpha > 0.0f) {
            if (this->drawDmgEffType != ACTOR_DRAW_DMGEFF_FROZEN_NO_SFX) {
                Math_StepToF(&this->drawDmgEffAlpha, 0.0f, 0.05f);
                this->drawDmgEffScale = (this->drawDmgEffAlpha + 1.0f) * 0.3f;
                this->drawDmgEffScale = CLAMP_MAX(this->drawDmgEffScale, 0.6f);
                return;
            }

            if (!Math_StepToF(&this->drawDmgEffFrozenSteamScale, 0.6f, 15.0f * 0.001f))
                Actor_PlaySfx_Flagged(&this->actor, NA_SE_EV_ICE_FREEZE - SFX_FLAG);
        }
    }
}

void EnOkuta2_Projectile_Update(Actor* thisx, PlayState* play) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    Player* player = GET_PLAYER(play);
    Vec3f prevPos;
    s32 canRestorePrevPos = false;

    if (!(player->stateFlags1 & (PLAYER_STATE1_SWINGING_BOTTLE | PLAYER_STATE1_TALKING | PLAYER_STATE1_DEAD | PLAYER_STATE1_9 | PLAYER_STATE1_28 | PLAYER_STATE1_29))) {
        this->actionFunc(this, play);
        Actor_MoveXYZ(&this->actor);
        Math_Vec3f_Copy(&prevPos, &this->actor.world.pos);
        Actor_UpdateBgCheckInfo(play, &this->actor, 10.0f, 15.0f, 30.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2);

        if ((this->actor.bgCheckFlags & BGCHECKFLAG_WALL) && SurfaceType_IsIgnoredByProjectiles(&play->colCtx, this->actor.wallPoly, this->actor.wallBgId)) {
            canRestorePrevPos = true;
            this->actor.bgCheckFlags &= ~BGCHECKFLAG_WALL;
        }

        if ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) && SurfaceType_IsIgnoredByProjectiles(&play->colCtx, this->actor.floorPoly, this->actor.floorBgId)) {
            canRestorePrevPos = true;
            this->actor.bgCheckFlags &= ~BGCHECKFLAG_GROUND;
        }

        if (canRestorePrevPos && !(this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_WALL)))
            Math_Vec3f_Copy(&this->actor.world.pos, &prevPos);

        Collider_UpdateCylinder(&this->actor, &this->collider);
        this->actor.flags |= ACTOR_FLAG_SFX_FOR_PLAYER_BODY_HIT;
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
}

/**
 * Gets the scaling factor for animating the snout limb. If the limb is not being transformed, no scale value is returned. Returns true if the snout scale should be updated, false otherwise. The snout scale is returned via the scale parameter.
 */
s32 EnOkuta2_GetSnoutScale(EnOkuta2* this, f32 curFrame, Vec3f* scale) {
    if (this->actionFunc == EnOkuta2_Float) {
        scale->z = scale->y = 1.0f;
        scale->x = Math_SinF((M_PI / 16) * curFrame) * 0.4f + 1.0f;
    } else if (this->actionFunc == EnOkuta2_Shoot) {
        if (curFrame < 5.0f) {
            scale->z = 1.0f;
            scale->x = scale->y = (curFrame * 0.25f) + 1.0f;
        } else if (curFrame < 7.0f) {
            scale->z = (curFrame - 4.0f) * 0.5f + 1.0f;
            scale->x = scale->y = 2.0f - (curFrame - 4.0f) * 0.5f;
        } else {
            scale->z = 2.0f - ((curFrame - 6.0f) * 0.0769f);
            scale->x = scale->y = 1.0f;
        }
    } else if (this->actionFunc == EnOkuta2_Die) {
        if (curFrame >= 35.0f || curFrame < 25.0f)
            return false;

        if (curFrame < 27.0f) {
            scale->z = 1.0f;
            scale->x = scale->y = (curFrame - 24.0f) * 0.5f + 1.0f;
        } else if (curFrame < 30.0f) {
            scale->z = (curFrame - 26.0f) * 0.333f + 1.0f;
            scale->x = scale->y = 2.0f - (curFrame - 26.0f) * 0.333f;
        } else {
            scale->z = 2.0f - ((curFrame - 29.0f) * 0.2f);
            scale->x = scale->y = 1.0f;
        }
    } else return false;

    return true;
}

s32 EnOkuta2_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    s32 shouldScaleLimb = false;
    Vec3f scale;
    f32 curFrame = this->skelAnime.curFrame;

    if (this->actionFunc == EnOkuta2_Die)
        curFrame += this->timer;

    if (limbIndex == OCTOROK_LIMB_HEAD) {
        if (this->headScale.x != 1.0f || this->headScale.y != 1.0f || this->headScale.z != 1.0f) {
            Math_Vec3f_Copy(&scale, &this->headScale);
            shouldScaleLimb = true;
        }
    } else if (limbIndex == OCTOROK_LIMB_SNOUT)
        shouldScaleLimb = EnOkuta2_GetSnoutScale(this, curFrame, &scale);

    if (shouldScaleLimb)
        Matrix_Scale(scale.x, scale.y, scale.z, MTXMODE_APPLY);

    return false;
}

static s8 sLimbToBodyParts[OCTOROK_LIMB_MAX] = {
    BODYPART_NONE,                         // OCTOROK_LIMB_NONE
    EN_OKUTA2_BODYPART_BODY,                // OCTOROK_LIMB_BODY
    BODYPART_NONE,                         // OCTOROK_LIMB_FRONT_LEFT_ARM_BASE
    BODYPART_NONE,                         // OCTOROK_LIMB_FRONT_LEFT_ARM_MIDDLE
    EN_OKUTA2_BODYPART_FRONT_LEFT_ARM_END,  // OCTOROK_LIMB_FRONT_LEFT_ARM_END
    BODYPART_NONE,                         // OCTOROK_LIMB_FRONT_RIGHT_ARM_BASE
    BODYPART_NONE,                         // OCTOROK_LIMB_FRONT_RIGHT_ARM_MIDDLE
    EN_OKUTA2_BODYPART_FRONT_RIGHT_ARM_END, // OCTOROK_LIMB_FRONT_RIGHT_ARM_END
    BODYPART_NONE,                         // OCTOROK_LIMB_BACK_LEFT_ARM_BASE
    BODYPART_NONE,                         // OCTOROK_LIMB_BACK_LEFT_ARM_MIDDLE
    EN_OKUTA2_BODYPART_BACK_LEFT_ARM_END,   // OCTOROK_LIMB_BACK_LEFT_ARM_END
    BODYPART_NONE,                         // OCTOROK_LIMB_BACK_RIGHT_ARM_BASE
    BODYPART_NONE,                         // OCTOROK_LIMB_BACK_RIGHT_ARM_MIDDLE
    EN_OKUTA2_BODYPART_BACK_RIGHT_ARM_END,  // OCTOROK_LIMB_BACK_RIGHT_ARM_END
    EN_OKUTA2_BODYPART_HEAD,                // OCTOROK_LIMB_HEAD
    EN_OKUTA2_BODYPART_SNOUT,               // OCTOROK_LIMB_SNOUT
};

/**
 * The last three elements of `bodyPartsPos` are not tied to any particular limb and are instead used to control the
 * placement of effects. The positions of these effects are offset by a certain amount from the Octorok's head limb.
 */
static Vec3f sEffectsBodyPartOffsets[3] = {
    {  1500.0f, 1000.0f,     0.0f },
    { -1500.0f, 1000.0f,     0.0f },
    {     0.0f, 1500.0f, -2000.0f },
};

void EnOkuta2_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    s32 bodyPartIndex = sLimbToBodyParts[limbIndex];
    s32 i;

    if (bodyPartIndex != BODYPART_NONE) {
        if (bodyPartIndex == EN_OKUTA2_BODYPART_SNOUT)
            Matrix_MultVecX(1500.0f, &this->bodyPartsPos[bodyPartIndex]);
        else if (bodyPartIndex == EN_OKUTA2_BODYPART_HEAD) {
            Matrix_MultVecY(2800.0f, &this->bodyPartsPos[bodyPartIndex]);
            bodyPartIndex++;

            for (i=0; i<ARRAY_COUNT(sEffectsBodyPartOffsets); i++)
                Matrix_MultVec3f(&sEffectsBodyPartOffsets[i], &this->bodyPartsPos[bodyPartIndex + i]);
        } else Matrix_MultZero(&this->bodyPartsPos[bodyPartIndex]);
    }
}

void EnOkuta2_Draw(Actor* thisx, PlayState* play) {
    EnOkuta2* this = (EnOkuta2*)thisx;
    Gfx* gfx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    gfx = POLY_OPA_DISP;

    gSPDisplayList(&gfx[0], sSetupDL[SETUPDL_25]);

    if (EN_OKUTA2_GET_TYPE(&this->actor) < EN_OKUTA2_TYPE_PROJECTILE_BASE) {
        if (EN_OKUTA2_GET_TYPE(&this->actor) == EN_OKUTA2_TYPE_RED_OCTOROK) {
            gSPSegment(&gfx[1], 0x08, D_80115FF0);
        } else {
            gSPSegment(&gfx[1], 0x08, gOctorokBlueMaterialDL);
        }

        POLY_OPA_DISP = &gfx[2];
        SkelAnime_DrawOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, EnOkuta2_OverrideLimbDraw, EnOkuta2_PostLimbDraw, &this->actor);
    } else {
        Matrix_Mult(&play->billboardMtxF, MTXMODE_APPLY);
        Matrix_RotateZ(this->actor.home.rot.z, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(&gfx[1], play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(&gfx[2], gOctorokProjectileDL);
        POLY_OPA_DISP = &gfx[3];
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Actor_DrawDamageEffects(play, &this->actor, this->bodyPartsPos, EN_OKUTA2_BODYPART_MAX, this->drawDmgEffScale * this->actor.scale.y * 100.0f, this->drawDmgEffFrozenSteamScale, this->drawDmgEffAlpha, this->drawDmgEffType);
}
