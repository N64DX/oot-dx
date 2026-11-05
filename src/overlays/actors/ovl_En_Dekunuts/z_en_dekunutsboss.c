/*
 * File: z_en_dekunuts.c
 * Overlay: ovl_En_Dekunuts
 * Description: Mad Scrub
 */

#include "z_en_dekunutsboss.h"

#include "ichain.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "player.h"

#include "assets/objects/object_dekunuts/object_dekunuts.h"
#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE)

#define DEKUNUTS_FLOWER 10

void EnDekunutsBoss_Init(Actor* thisx, PlayState* play);
void EnDekunutsBoss_Destroy(Actor* thisx, PlayState* play);
void EnDekunutsBoss_Update(Actor* thisx, PlayState* play);
void EnDekunutsBoss_Draw(Actor* thisx, PlayState* play);

void EnDekunutsBoss_SetupWait(EnDekunutsBoss* this);
void EnDekunutsBoss_Wait(EnDekunutsBoss* this, PlayState* play);
void EnDekunutsBoss_LookAround(EnDekunutsBoss* this, PlayState* play);
void EnDekunutsBoss_Stand(EnDekunutsBoss* this, PlayState* play);
void EnDekunutsBoss_ThrowNut(EnDekunutsBoss* this, PlayState* play);
void EnDekunutsBoss_Burrow(EnDekunutsBoss* this, PlayState* play);

ActorProfile En_DekunutsBoss_Profile = {
    /**/ ACTOR_EN_DEKUNUTSBOSS,
    /**/ ACTORCAT_BOSS,
    /**/ FLAGS,
    /**/ OBJECT_DEKUNUTS,
    /**/ sizeof(EnDekunutsBoss),
    /**/ EnDekunutsBoss_Init,
    /**/ EnDekunutsBoss_Destroy,
    /**/ EnDekunutsBoss_Update,
    /**/ EnDekunutsBoss_Draw,
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
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 18, 32, 0, { 0, 0, 0 } },
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
    /* Ice arrow     */ DMG_ENTRY(2, 0x0),
    /* Light arrow   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(2, 0x0),
    /* Fire magic    */ DMG_ENTRY(4, 0x2),
    /* Ice magic     */ DMG_ENTRY(0, 0x0),
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

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 20, ICHAIN_CONTINUE),
    ICHAIN_S8(naviEnemyId, NAVI_ENEMY_MAD_SCRUB, ICHAIN_CONTINUE),
    ICHAIN_F32(gravity, -1, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 2600, ICHAIN_STOP),
};

void EnDekunutsBoss_Init(Actor* thisx, PlayState* play) {
    EnDekunutsBoss* this = (EnDekunutsBoss*)thisx;

    this->actor.flags |= ACTOR_FLAG_DRAW_CULLING_DISABLED;
    if (Flags_GetClear(play, 0)) {
        Actor_Kill(&this->actor);
        Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_DOOR_WARP1, 0.0f, 0.0f, 0.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
        Actor_Spawn(&play->actorCtx, play, ACTOR_ITEM_B_HEART, 100.0f, 0.0f, 0.0f, 0, 0, 0, 0);
        return;
    }

    Actor_ProcessInitChain(&this->actor, sInitChain);
    if (thisx->params == DEKUNUTS_FLOWER)
        thisx->flags &= ~(ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE);
    else {
        ActorShape_Init(&thisx->shape, 0.0f, ActorShadow_DrawCircle, 35.0f);
        SkelAnime_Init(play, &this->skelAnime, &gDekuNutsSkel, &gDekuNutsStandAnim, this->jointTable, this->morphTable, 25);
        Collider_InitCylinder(play, &this->collider);
        Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
        CollisionCheck_SetInfo(&thisx->colChkInfo, &sDamageTable, &sColChkInfoInit);
        thisx->params &= 0xFF;
        EnDekunutsBoss_SetupWait(this);
        Actor_SpawnAsChild(&play->actorCtx, thisx, play, ACTOR_EN_DEKUNUTS, thisx->world.pos.x, thisx->world.pos.y, thisx->world.pos.z, 0, thisx->world.rot.y, 0, DEKUNUTS_FLOWER);
    }
}

void EnDekunutsBoss_Destroy(Actor* thisx, PlayState* play) {
    EnDekunutsBoss* this = (EnDekunutsBoss*)thisx;

    if (this->actor.params != DEKUNUTS_FLOWER)
        Collider_DestroyCylinder(play, &this->collider);
}

void EnDekunutsBoss_SetupWait(EnDekunutsBoss* this) {
    Animation_PlayOnceSetSpeed(&this->skelAnime, &gDekuNutsUpAnim, 0.0f);
    this->animFlagAndTimer = Rand_S16Offset(100, 50);
    this->collider.dim.height = 5;
    Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.home.pos);
    this->collider.base.acFlags &= ~AC_ON;
    this->actionFunc = EnDekunutsBoss_Wait;
}

void EnDekunutsBoss_SetupLookAround(EnDekunutsBoss* this) {
    Animation_PlayLoop(&this->skelAnime, &gDekuNutsLookAroundAnim);
    this->animFlagAndTimer = 2;
    this->actionFunc = EnDekunutsBoss_LookAround;
}

void EnDekunutsBoss_SetupThrowNut(EnDekunutsBoss* this) {
    Animation_PlayOnce(&this->skelAnime, &gDekuNutsSpitAnim);
    this->animFlagAndTimer = 3;
    this->actionFunc = EnDekunutsBoss_ThrowNut;
}

void EnDekunutsBoss_SetupStand(EnDekunutsBoss* this) {
    Animation_MorphToLoop(&this->skelAnime, &gDekuNutsStandAnim, -3.0f);
    if (this->actionFunc == EnDekunutsBoss_ThrowNut) {
        this->animFlagAndTimer = 2 | 0x1000; // sets timer and flag
    } else {
        this->animFlagAndTimer = 1;
    }
    this->actionFunc = EnDekunutsBoss_Stand;
}

void EnDekunutsBoss_SetupBurrow(EnDekunutsBoss* this) {
    Animation_MorphToPlayOnce(&this->skelAnime, &gDekuNutsBurrowAnim, -5.0f);
    Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DOWN);
    this->actionFunc = EnDekunutsBoss_Burrow;
}

void EnDekunutsBoss_Wait(EnDekunutsBoss* this, PlayState* play) {
    s32 hasSlowPlaybackSpeed = false;

    if (this->skelAnime.playSpeed < 0.5f)
        hasSlowPlaybackSpeed = true;
    if (hasSlowPlaybackSpeed && this->animFlagAndTimer != 0)
        this->animFlagAndTimer--;
    if (Animation_OnFrame(&this->skelAnime, 9.0f))
        this->collider.base.acFlags |= AC_ON;
    else if (Animation_OnFrame(&this->skelAnime, 8.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_UP);

    this->collider.dim.height = ((CLAMP(this->skelAnime.curFrame, 9.0f, 12.0f) - 9.0f) * 9.0f) + 5.0f;
    if (!hasSlowPlaybackSpeed && this->actor.xzDistToPlayer < 120.0f)
        EnDekunutsBoss_SetupBurrow(this);
    else if (SkelAnime_Update(&this->skelAnime)) {
        if (this->actor.xzDistToPlayer < 120.0f)
            EnDekunutsBoss_SetupBurrow(this);
        else if (this->animFlagAndTimer == 0 && this->actor.xzDistToPlayer > 320.0f)
            EnDekunutsBoss_SetupLookAround(this);
        else EnDekunutsBoss_SetupStand(this);
    }
    if (hasSlowPlaybackSpeed && (this->actor.xzDistToPlayer > 160.0f && fabsf(this->actor.yDistToPlayer) < 120.0f) && (this->animFlagAndTimer == 0 || this->actor.xzDistToPlayer < 480.0f))
        this->skelAnime.playSpeed = 1.0f;
}

void EnDekunutsBoss_LookAround(EnDekunutsBoss* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (Animation_OnFrame(&this->skelAnime, 0.0f) && this->animFlagAndTimer != 0)
        this->animFlagAndTimer--;
    if (this->actor.xzDistToPlayer < 120.0f || this->animFlagAndTimer == 0)
        EnDekunutsBoss_SetupBurrow(this);
}

void EnDekunutsBoss_Stand(EnDekunutsBoss* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (Animation_OnFrame(&this->skelAnime, 0.0f) && this->animFlagAndTimer != 0)
        this->animFlagAndTimer--;
    if (!(this->animFlagAndTimer & 0x1000))
        Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
    if (this->animFlagAndTimer == 0x1000) {
        if (this->actor.xzDistToPlayer > 480.0f || this->actor.xzDistToPlayer < 120.0f)
            EnDekunutsBoss_SetupBurrow(this);
        else EnDekunutsBoss_SetupThrowNut(this);
    } else if (this->animFlagAndTimer == 0)
        EnDekunutsBoss_SetupThrowNut(this);
}

void EnDekunutsBoss_ThrowNut(EnDekunutsBoss* this, PlayState* play) {
    Vec3f spawnPos;

    Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xE38);
    if (SkelAnime_Update(&this->skelAnime))
        EnDekunutsBoss_SetupStand(this);
    else if (Animation_OnFrame(&this->skelAnime, 6.0f)) {
        spawnPos.x = this->actor.world.pos.x + (Math_SinS(this->actor.shape.rot.y) * 23.0f);
        spawnPos.y = this->actor.world.pos.y + 12.0f;
        spawnPos.z = this->actor.world.pos.z + (Math_CosS(this->actor.shape.rot.y) * 23.0f);
        if (Actor_Spawn(&play->actorCtx, play, ACTOR_EN_NUTSBALL, spawnPos.x, spawnPos.y, spawnPos.z, this->actor.shape.rot.x, this->actor.shape.rot.y, this->actor.shape.rot.z, 0) != NULL)
            Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_THROW);
    } else if (this->animFlagAndTimer > 1 && Animation_OnFrame(&this->skelAnime, 12.0f)) {
        Animation_MorphToPlayOnce(&this->skelAnime, &gDekuNutsSpitAnim, -3.0f);
        if (this->animFlagAndTimer != 0)
            this->animFlagAndTimer--;
    }
}

void EnDekunutsBoss_Burrow(EnDekunutsBoss* this, PlayState* play) {
    if (SkelAnime_Update(&this->skelAnime))
        EnDekunutsBoss_SetupWait(this);
    else this->collider.dim.height = ((3.0f - CLAMP(this->skelAnime.curFrame, 1.0f, 3.0f)) * 12.0f) + 5.0f;
    if (Animation_OnFrame(&this->skelAnime, 4.0f))
        this->collider.base.acFlags &= ~AC_ON;
    Math_ApproachF(&this->actor.world.pos.x, this->actor.home.pos.x, 0.5f, 3.0f);
    Math_ApproachF(&this->actor.world.pos.z, this->actor.home.pos.z, 0.5f, 3.0f);
}

void EnDekunutsBoss_ColliderCheck(EnDekunutsBoss* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        Animation_MorphToPlayOnce(&this->skelAnime, &gDekuNutsUnburrowAnim, -3.0f);
        this->collider.dim.height = 37;
        Actor_PlaySfx(&this->actor, NA_SE_EN_NUTS_DAMAGE);
        this->collider.base.acFlags &= ~AC_ON;
        Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_EN_BUFFDEKU,  this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z,  0, this->actor.shape.rot.y, 0, this->actor.params);
        Actor_Kill(&this->actor);
    }
}

void EnDekunutsBoss_Update(Actor* thisx, PlayState* play) {
    EnDekunutsBoss* this = (EnDekunutsBoss*)thisx;

    if (this->actor.params != DEKUNUTS_FLOWER) {
        EnDekunutsBoss_ColliderCheck(this, play);
        this->actionFunc(this, play);
        Actor_MoveXZGravity(&this->actor);
        Actor_UpdateBgCheckInfo(play, &this->actor, 20.0f, this->collider.dim.radius, this->collider.dim.height, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if (this->collider.base.acFlags & AC_ON)
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
        if (this->actionFunc == EnDekunutsBoss_Wait)
            Actor_SetFocus(&this->actor, this->skelAnime.curFrame);
        else if (this->actionFunc == EnDekunutsBoss_Burrow)
            Actor_SetFocus(&this->actor, 20.0f - ((this->skelAnime.curFrame * 20.0f) / Animation_GetLastFrame(&gDekuNutsBurrowAnim)));
        else Actor_SetFocus(&this->actor, 20.0f);
    }
}

s32 EnDekunutsBoss_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnDekunutsBoss* this = (EnDekunutsBoss*)thisx;
    f32 x, y, z, curFrame;

    if (limbIndex == 7 && this->actionFunc == EnDekunutsBoss_ThrowNut) {
        curFrame = this->skelAnime.curFrame;
        if (curFrame <= 6.0f) {
            x = 1.0f - (curFrame * 0.0833f);
            z = 1.0f + (curFrame * 0.1167f);
            y = 1.0f + (curFrame * 0.1167f);
        } else if (curFrame <= 7.0f) {
            curFrame -= 6.0f;
            x = 0.5f + curFrame;
            z = 1.7f - (curFrame * 0.7f);
            y = 1.7f - (curFrame * 0.7f);
        } else if (curFrame <= 10.0f) {
            x = 1.5f - ((curFrame - 7.0f) * 0.1667f);
            z = 1.0f;
            y = 1.0f;
        } else return false;
        Matrix_Scale(x, y, z, MTXMODE_APPLY);
    }
    return false;
}

void EnDekunutsBoss_Draw(Actor* thisx, PlayState* play) {
    EnDekunutsBoss* this = (EnDekunutsBoss*)thisx;

    if (this->actor.params == DEKUNUTS_FLOWER)
        Gfx_DrawDListOpa(play, gDekuNutsFlowerDL);
    else SkelAnime_DrawOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, EnDekunutsBoss_OverrideLimbDraw, NULL, this);
}
