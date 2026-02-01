/*
 * File: z_en_stalm.c
 * Overlay: Ovl_En_Stalm
 * Description: Stalmaster
 * Authors: GrandLovania
 */

#include "z_en_stalm.h"
#include "overlays/actors/ovl_En_Clear_Tag/z_en_clear_tag.h"
#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

#include "array_count.h"
#include "gfx_setupdl.h"
#include "rand.h"
#include "sfx.h"
#include "seqcmd.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "audio.h"
#include "z_en_item00.h"
#include "player.h"
#include "save.h"

void EnStalmaster_Init(Actor* thisx, struct PlayState* play);
void EnStalmaster_Destroy(Actor* thisx, struct PlayState* play);
void EnStalmaster_Update(Actor* thisx, struct PlayState* play);
void EnStalmaster_Draw(Actor* thisx, struct PlayState* play);

void EnStalmaster_DrawLimbs(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_DrawEffects(EnStalmaster* this, struct PlayState* play);

void EnStalmaster_BlowupPlate(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_BlowupHelmet(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_BlowupDeath(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_BlowupArms(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_GatherArms(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Gather(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_UpdateTorsoRot(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_UpdateCollisions(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_UpdateColliderDamage(EnStalmaster* this, struct PlayState* play, ColliderJntSph collider);
void EnStalmaster_UpdateParts(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_UpdateEffects(EnStalmaster* this, struct PlayState* play);

void EnStalmaster_SetupLimbs(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupIntroduction(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Introduction(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupWalk(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Walk(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupAttack(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Attack(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupGuard(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Guard(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupCounter(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Counter(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupSecondPhase(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SecondPhase(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupDeath(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_Death(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_SetupBlowArms(EnStalmaster* this, struct PlayState* play);
void EnStalmaster_BlowArms(EnStalmaster* this, struct PlayState* play);

#define FLAGS (ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

ActorProfile En_Stalm_Profile = {
    /**/ ACTOR_EN_STALM,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_STALM,
    /**/ sizeof(EnStalmaster),
    /**/ EnStalmaster_Init,
    /**/ EnStalmaster_Destroy,
    /**/ EnStalmaster_Update,
    /**/ EnStalmaster_Draw,
};

static ColliderJntSphElementInit sColliderJntSphElementInitSwordUpLeft[2] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDLU, { { 10.0f, 0.0f, 55.0f }, 100 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20  },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDLU, { { 25.0f, 0.0f, 130.0f }, 100 }, 100 },
    },
};

static ColliderJntSphInit sColliderJntSphInitSwordUpLeft = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE, OC1_ON | OC1_TYPE_PLAYER,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    2,
    sColliderJntSphElementInitSwordUpLeft,
};

static ColliderJntSphElementInit sColliderJntSphElementInitSwordUpRight[2] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDRU, { { -10.0f, 0.0f, 20.0f }, 100 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDRU, { { -25.0f, 0.0f, 95.0f }, 100 }, 100 },
    },
};

static ColliderJntSphInit sColliderJntSphInitSwordUpRight = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_ON | OC1_TYPE_PLAYER,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    2,
    sColliderJntSphElementInitSwordUpRight,
};

static ColliderJntSphElementInit sColliderJntSphElementInitSwordDownLeft[2] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDLD, { { 10.0f, 0.0f, 55.0f }, 100 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20  },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDLD, { { 25.0f, 0.0f, 130.0f }, 100 }, 100 },
    },
};

static ColliderJntSphInit sColliderJntSphInitSwordDownLeft = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_ON | OC1_TYPE_PLAYER,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    2,
    sColliderJntSphElementInitSwordDownLeft,
};

static ColliderJntSphElementInit sColliderJntSphElementInitSwordDownRight[2] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDRD, { { -10.0f, 0.0f, 20.0f }, 100 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_HARD,
            ACELEM_ON,
            OCELEM_ON,
        },
        { STALMASTER_LIMB_HANDRD, { { -25.0f, 0.0f, 95.0f }, 100 }, 100 },
    },
};

static ColliderJntSphInit sColliderJntSphInitSwordDownRight = {
    {
        COL_MATERIAL_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_ON | OC1_TYPE_PLAYER,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    2,
    sColliderJntSphElementInitSwordDownRight,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON | ACELEM_HOOKABLE,
        OCELEM_ON,
    },
    { 30, 90, 0, { 0, 0, 0 } },
};

static DamageTable sStalmasterDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Deku stick    */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Slingshot     */ DMG_ENTRY(1, STALMASTER_DMGEFF_PARRY),
    /* Explosive     */ DMG_ENTRY(3, STALMASTER_DMGEFF_EXPLOSIVE),
    /* Boomerang     */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Normal arrow  */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Hammer swing  */ DMG_ENTRY(2, STALMASTER_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Kokiri sword  */ DMG_ENTRY(1, STALMASTER_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(2, STALMASTER_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(4, STALMASTER_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Ice arrow     */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Light arrow   */ DMG_ENTRY(0, STALMASTER_DMGEFF_PARRY),
    /* Unk arrow 1   */ DMG_ENTRY(2, STALMASTER_DMGEFF_NONE),
    /* Unk arrow 2   */ DMG_ENTRY(2, STALMASTER_DMGEFF_NONE),
    /* Unk arrow 3   */ DMG_ENTRY(2, STALMASTER_DMGEFF_NONE),
    /* Fire magic    */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Ice magic     */ DMG_ENTRY(3, STALMASTER_DMGEFF_NONE),
    /* Light magic   */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Shield        */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Mirror Ray    */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Kokiri spin   */ DMG_ENTRY(1, STALMASTER_DMGEFF_SPIN),
    /* Giant spin    */ DMG_ENTRY(4, STALMASTER_DMGEFF_SPIN),
    /* Master spin   */ DMG_ENTRY(2, STALMASTER_DMGEFF_SPIN),
    /* Kokiri jump   */ DMG_ENTRY(2, STALMASTER_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(8, STALMASTER_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(4, STALMASTER_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Unblockable   */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
    /* Hammer jump   */ DMG_ENTRY(4, STALMASTER_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, STALMASTER_DMGEFF_NONE),
};

u32 i = 0;
s16 o = 0;
u32 st1 = 0;
u32 j = 0;
s16 s = 0;
static Vec3f gZeroVec = { 0.0f, 0.0f, 0.0f };
static Vec3f sZeroVec = { 0.0f, 0.0f, 0.0f };
static Vec3f aZeroVec = { 2.0f, 7.0f, 5.0f };
static Vec3f bZeroVec = { 0.0f, 0.0f, 5.0f };

static const u8 limbIds[] = { STALMASTER_LIMB_ARMRU01, STALMASTER_LIMB_ARMRU02, STALMASTER_LIMB_ARMLU01, STALMASTER_LIMB_ARMLU02, STALMASTER_LIMB_ARMRD01, STALMASTER_LIMB_ARMRD02, STALMASTER_LIMB_ARMLD01, STALMASTER_LIMB_ARMLD02, STALMASTER_LIMB_PADLD,
                              STALMASTER_LIMB_PADLU, STALMASTER_LIMB_PADRD, STALMASTER_LIMB_PADRU, STALMASTER_LIMB_LOC_SWORDA, STALMASTER_LIMB_LOC_SWORDB, STALMASTER_LIMB_LOC_SWORDC, STALMASTER_LIMB_LOC_SWORDD };

void EnStalmaster_Init(Actor* thisx, struct PlayState* play) {
    EnStalmaster* this = (EnStalmaster*)thisx;

    EffectBlureInit1 blureInit;

    Actor_SetScale(&this->actor, 0.055f);
    this->actor.attentionRangeType = 5;
    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actor.colChkInfo.damageTable = &sStalmasterDamageTable;
    this->actor.colChkInfo.health = Actor_EnemyHealthMultiply(55, ELITE_HP);

    SkelAnime_InitFlex(play, &this->skelAnime, &Stalfos4_ao, &Stalfos4_ao2counterAnim, this->jointTable, this->morphTable, STALMASTER_LIMB_MAX );

    this->flags.miniboss   = (this->actor.params)      & 1;
    this->flags.switchFlag = (this->actor.params >> 8) & 0xFF;

    this->actionFunc = EnStalmaster_SetupIntroduction;
    for (i=1; i<ARRAY_COUNT(this->sStalmasterParts); i++)
        this->sStalmasterParts[i].invisible = true;
    Actor_ChangeCategory(play, &play->actorCtx, &this->actor, ACTORCAT_BOSS);

    this->actor.gravity = -2.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 10.0f);

    blureInit.p1StartColor[0] = blureInit.p1StartColor[1] = blureInit.p1StartColor[2] = blureInit.p1StartColor[3] = blureInit.p2StartColor[0] = blureInit.p2StartColor[1] = blureInit.p2StartColor[2] = blureInit.p1EndColor[0] =
        blureInit.p1EndColor[1] = blureInit.p1EndColor[2] = blureInit.p2EndColor[0] = blureInit.p2EndColor[1] = blureInit.p2EndColor[2] = 100;

    blureInit.p1EndColor[3] = blureInit.p2EndColor[3] = 0;
    blureInit.p2StartColor[3] = 64;
    blureInit.elemDuration = 8;
    blureInit.unkFlag = false;
    blureInit.calcMode = 2;

    Effect_Add(play, &this->effectIndex1, EFFECT_BLURE1, 0, 0, &blureInit);
    Effect_Add(play, &this->effectIndex2, EFFECT_BLURE1, 0, 0, &blureInit);
    Effect_Add(play, &this->effectIndex3, EFFECT_BLURE1, 0, 0, &blureInit);
    Effect_Add(play, &this->effectIndex4, EFFECT_BLURE1, 0, 0, &blureInit);

    Collider_InitJntSph(play, &this->colliderSwordUpLeft);
	Collider_SetJntSph(play, &this->colliderSwordUpLeft, &this->actor, &sColliderJntSphInitSwordUpLeft, this->collidersSwordUpLeft);
	Collider_InitJntSph(play, &this->colliderSwordUpRight);
	Collider_SetJntSph(play, &this->colliderSwordUpRight, &this->actor, &sColliderJntSphInitSwordUpRight, this->collidersSwordUpRight);
    Collider_InitJntSph(play, &this->colliderSwordDownRight);
	Collider_SetJntSph(play, &this->colliderSwordDownRight, &this->actor, &sColliderJntSphInitSwordDownRight, this->collidersSwordDownRight);
    Collider_InitJntSph(play, &this->colliderSwordDownLeft);
	Collider_SetJntSph(play, &this->colliderSwordDownLeft, &this->actor, &sColliderJntSphInitSwordDownLeft, this->collidersSwordDownLeft);
    Collider_InitCylinder(play, &this->bodyCollider);
    Collider_SetCylinder(play, &this->bodyCollider, &this->actor, &sCylinderInit);

    EnStalmaster_SetupLimbs(this,play);

    if (this->flags.switchFlag <= 0x3F && Flags_GetSwitch(play, this->flags.switchFlag)) {
        if (play->sceneId == SCENE_BESITU)
            Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_DOOR_WARP1, 0.0f, 0.0f, 0.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
        Actor_Kill(thisx);
    }
}

void EnStalmaster_UpdateParts(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterParts;

    for (i=1; i<ARRAY_COUNT(this->sStalmasterParts); i++) {
        if (!effect[i].csHandled) {
            if (effect[i].gravity && !effect[i].onGround) {
                effect[i].pos.x += effect[i].velocity.x;
                effect[i].pos.y += effect[i].velocity.y;
                effect[i].pos.z += effect[i].velocity.z;
                effect[i].velocity.y += -4.0f;
                if (effect[i].pos.y < this->actor.floorHeight+5) {
                    if (effect[i].bounceCounter >= 2)
                        effect[i].onGround = true;
                    effect[i].velocity.y *= -0.35;
                    effect[i].velocity.x *= 0.8;
                    effect[i].velocity.z *= 0.8;
                    effect[i].pos.y = this->actor.floorHeight+5;
                    effect[i].bounceCounter++;
                }
                effect[i].rot.x += effect[i].velocity.y*35;
                effect[i].rot.y += effect[i].velocity.x*180;
                effect[i].rot.z += effect[i].velocity.z*180;
            } else {
                if (i == STALMASTER_LIMB_LOC_SWORDA || i == STALMASTER_LIMB_LOC_SWORDB || i == STALMASTER_LIMB_LOC_SWORDC || i == STALMASTER_LIMB_LOC_SWORDD)
                    effect[i].rot.x = 0;
                if (i == STALMASTER_LIMB_BACKBONE02)
                    effect[i].rot.x = DEG_TO_BINANG(90);
                effect[i].rot.z = 0;
            }
        }
    }
}

void EnStalmaster_UpdateEffects(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterEffects;

    for (i=1; i<ARRAY_COUNT(this->sStalmasterEffects); i++) {
        if (effect[i].gravity && !effect[i].onGround) {
            effect[i].pos.x += effect[i].velocity.x;
            effect[i].pos.y += effect[i].velocity.y;
            effect[i].pos.z += effect[i].velocity.z;
            effect[i].velocity.y += -4.0f;
            if (effect[i].pos.y < this->actor.floorHeight+5) {
                if (effect[i].bounceCounter >= 2)
                    effect[i].onGround = true;
                effect[i].velocity.y *= -0.35;
                effect[i].velocity.x *= 0.8;
                effect[i].velocity.z *= 0.8;
                effect[i].pos.y = this->actor.floorHeight+5;
                effect[i].bounceCounter++;
            }
            effect[i].rot.x += effect[i].velocity.y*35;
            effect[i].rot.y += effect[i].velocity.x*180;
            effect[i].rot.z += effect[i].velocity.z*180;
        } else effect[i].rot.z = 0;
    }

}

void EnStalmaster_BlowupPlate(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterEffects;

    for (st1=1; st1<STALMASTER_MAX_EFFECT; st1++) {
        if (effect[st1].type == STALMASTER_EFFECT_NONE) {
            effect[st1].pos.x = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonPos.x;
            effect[st1].pos.y = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonPos.y;
            effect[st1].pos.z = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonPos.z;
            effect[st1].rot.x = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonRot.x;
            effect[st1].rot.y = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonRot.y;
            effect[st1].rot.z = this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].skeletonRot.z;
            effect[st1].gravity = true;
            effect[st1].velocity.x = Rand_CenteredFloat(15.0f);
            effect[st1].velocity.y = Rand_ZeroFloat(15.0f) + 7.0f;
            effect[st1].velocity.z = Rand_CenteredFloat(15.0f);
            effect[st1].type = STALMASTER_EFFECT_PLATE;
            this->flags.plateOff = true;
            break;
        }
    }
}

void EnStalmaster_BlowupHelmet(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterEffects;

    for (st1=1; st1<STALMASTER_MAX_EFFECT; st1++) {
        if (effect[st1].type == STALMASTER_EFFECT_NONE) {
            effect[st1].pos.x = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonPos.x;
            effect[st1].pos.y = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonPos.y;
            effect[st1].pos.z = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonPos.z;
            effect[st1].rot.x = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.x;
            effect[st1].rot.y = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.y;
            effect[st1].rot.z = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.z;
            effect[st1].gravity = true;
            effect[st1].velocity.x = Rand_CenteredFloat(15.0f);
            effect[st1].velocity.y = Rand_ZeroFloat(15.0f) + 7.0f;
            effect[st1].velocity.z = Rand_CenteredFloat(15.0f);
            effect[st1].type = STALMASTER_EFFECT_HELMET;
            this->flags.helmetOff = true;
            break;
        }
    }

    for (j=0; j<TAIL_NUMBER; j++) {
        for (st1 = 1; st1 < STALMASTER_MAX_EFFECT; st1++)  {
            if (effect[st1].type == STALMASTER_EFFECT_NONE) {
                effect[st1].rot.x = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.x;
                effect[st1].rot.y = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.y;
                effect[st1].rot.z = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot.z;
                effect[st1].gravity = true;
                effect[st1].velocity.x = Rand_CenteredFloat(15.0f);
                effect[st1].velocity.y = Rand_ZeroFloat(10.0f) + 7.0f;
                effect[st1].velocity.z = Rand_CenteredFloat(15.0f);
                if (j == TAIL_NUMBER-1)
                    effect[i].type = STALMASTER_EFFECT_TIP;
                else effect[i].type = STALMASTER_EFFECT_TAIL;
                break;
            }
        }
    }
}

void EnStalmaster_BlowupDeath(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterParts;

    static const u8 limbIds[] = { STALMASTER_LIMB_HEAD, STALMASTER_LIMB_ARMRU01, STALMASTER_LIMB_ARMRU02, STALMASTER_LIMB_ARMLU01, STALMASTER_LIMB_ARMLU02, STALMASTER_LIMB_ARMRD01, STALMASTER_LIMB_ARMRD02, STALMASTER_LIMB_ARMLD01, STALMASTER_LIMB_ARMLD02, STALMASTER_LIMB_PADLD, STALMASTER_LIMB_PADLU,
                                   STALMASTER_LIMB_PADRD, STALMASTER_LIMB_PADRU, STALMASTER_LIMB_NECK, STALMASTER_LIMB_BACKBONE01, STALMASTER_LIMB_BACKBONE02, STALMASTER_LIMB_LOC_SWORDA, STALMASTER_LIMB_LOC_SWORDB, STALMASTER_LIMB_LOC_SWORDC, STALMASTER_LIMB_LOC_SWORDD };

    for (st1=0; st1<ARRAY_COUNT(limbIds); ++st1) {
        for (j=0; j<ARRAY_COUNT(this->sStalmasterParts); ++j) {
            if (j == limbIds[i] && effect[j].invisible) {
                effect[j].invisible = false;
                effect[j].csHandled = false;
                effect[j].onGround = false;
                effect[j].gravity = true;
                if (i != STALMASTER_LIMB_HEAD) {
                    effect[j].velocity.x = Rand_CenteredFloat(15.0f);
                    effect[j].velocity.z = Rand_CenteredFloat(15.0f);
                    effect[j].velocity.y = Rand_ZeroFloat(15.0f) + 7.0f;
                } else {
                    effect[j].velocity.x = Rand_CenteredFloat(1.0f);
                    effect[j].velocity.z = Rand_CenteredFloat(1.0f);
                    effect[j].velocity.y = Rand_ZeroFloat(4.0f) + 7.0f;
                }
                effect[j].pos = effect[j].skeletonPos;
                effect[j].rot = effect[j].skeletonRot;
            }
        }
    }
}

void EnStalmaster_BlowupArms(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterParts;

    for (st1=0; st1<ARRAY_COUNT(limbIds); ++st1) {
        for (j=0; j<ARRAY_COUNT(this->sStalmasterParts); ++j) {
            if (!(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDC) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDD) 
                && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADRD) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADLD)) {
                if (j == limbIds[st1] && effect[j].invisible) {
                    effect[j].invisible = false;
                    effect[j].csHandled = false;
                    effect[j].onGround = false;
                    effect[j].gravity = true;
                    effect[j].velocity.x = Rand_CenteredFloat(14.0f);
                    effect[j].velocity.z = Rand_CenteredFloat(14.0f);
                    effect[j].velocity.y = Rand_ZeroFloat(6.0f) + 34.0f;
                    effect[j].pos = effect[j].skeletonPos;
                    effect[j].rot = effect[j].skeletonRot;
                }
            }
        }
    }
}

void EnStalmaster_GatherArms(EnStalmaster* this, struct PlayState* play) {
    StalmasterParts* effect = this->sStalmasterParts;

    f32 value1 = 2.0f;
    f32 value2 = 24.0f;
    f32 value3 = 0.4f;
    f32 dist_x, dist_y, dist_z;

    for (st1=0; st1<ARRAY_COUNT(limbIds); ++st1) {
        for (j=0; j<ARRAY_COUNT(this->sStalmasterParts); ++j) {
            if (!(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDC) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDD) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADRD) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADLD)) {
                if (j == limbIds[st1]) {
                    dist_x = effect[j].skeletonPos.x - effect[j].pos.x;
                    dist_y = effect[j].skeletonPos.y - effect[j].pos.y;
                    dist_z = effect[j].skeletonPos.z - effect[j].pos.z;
                    dist_y *= 1.75f;

                    if (sqrtf(SQ(dist_x) + SQ(dist_y) + SQ(dist_z)) < 30.0f) { // Make the real limb appear if close enough
                        effect[j].invisible = true;
                        effect[j].onGround = false;
                    }
                    
                    Math_SmoothStepToF(&effect[j].pos.x, effect[j].skeletonPos.x, value1, value2, value3);
                    Math_SmoothStepToF(&effect[j].pos.y, effect[j].skeletonPos.y, value1, value2, value3);
                    Math_SmoothStepToF(&effect[j].pos.z, effect[j].skeletonPos.z, value1, value2, value3);
                    Math_SmoothStepToS(&effect[j].rot.x, effect[j].skeletonRot.x, 0xA*1.5, 0x1F40*1.5, 0x14*1.5);
                    Math_SmoothStepToS(&effect[j].rot.y, effect[j].skeletonRot.y, 0xA*1.5, 0x1F40*1.5, 0x14*1.5);
                    Math_SmoothStepToS(&effect[j].rot.z, effect[j].skeletonRot.z, 0xA*1.5, 0x1F40*1.5, 0x14*1.5);
                }
            }
        }
    }
}

// Those are the ones who only need to get visibles
const u8 limbIndices[] = { STALMASTER_LIMB_BACKBONE02, STALMASTER_LIMB_ARMRU01, STALMASTER_LIMB_ARMRU02, STALMASTER_LIMB_PADLD, STALMASTER_LIMB_PADLU, STALMASTER_LIMB_PADRD, STALMASTER_LIMB_PADRU, STALMASTER_LIMB_ARMRD01, STALMASTER_LIMB_ARMRD02,
                           STALMASTER_LIMB_ARMLD01, STALMASTER_LIMB_ARMLD02, STALMASTER_LIMB_ARMLU01, STALMASTER_LIMB_ARMLU02, STALMASTER_LIMB_LOC_SWORDA, STALMASTER_LIMB_LOC_SWORDB, STALMASTER_LIMB_LOC_SWORDC2, STALMASTER_LIMB_LOC_SWORDD2 };

bool isInLimbIndices(u8 index) {
    for (j=0; j<ARRAY_COUNT(limbIndices); j++)
        if (limbIndices[j] == index)
            return true;
    return false;
}

void EnStalmaster_SetupLimbs(EnStalmaster* this, struct PlayState* play) {
    for (i=1; i<ARRAY_COUNT(this->sStalmasterParts); i++) {
        this->sStalmasterParts[i].pos.y = this->actor.floorHeight;
        this->sStalmasterParts[i].pos.x = this->actor.world.pos.x + Rand_CenteredFloat(BONE_SPREAD);
        this->sStalmasterParts[i].pos.z = this->actor.world.pos.z + Rand_CenteredFloat(BONE_SPREAD);
        if (i == STALMASTER_LIMB_HEAD) {
            this->sStalmasterParts[i].invisible = false;
            this->sStalmasterParts[i].pos.x = (Math_SinS(this->actor.world.rot.y) * 67.0f) + this->actor.world.pos.x;;
            this->sStalmasterParts[i].pos.y = this->actor.world.pos.y;
            this->sStalmasterParts[i].pos.z = (Math_CosS(this->actor.world.rot.y) * 67.0f) + this->actor.world.pos.z;
        } else if (isInLimbIndices(i)) {
            this->sStalmasterParts[i].invisible = false;
            if (i == STALMASTER_LIMB_BACKBONE02) // Do that so its flat on the ground
                this->sStalmasterParts[i].rot.x = -DEG_TO_BINANG(90);
            this->sStalmasterParts[i].rot.y = Rand_CenteredFloat(0x8000);
        } else this->sStalmasterParts[i].invisible = true;
        this->sStalmasterParts[i].csHandled = true;
    }
}

void EnStalmaster_Gather(EnStalmaster* this, struct PlayState* play) {
    f32 value1 = 1.0f;
    f32 value2 = 12.0f;
    f32 value3 = 0.2f;
    f32 dist_x, dist_y, dist_z;

    for (i=1; i<ARRAY_COUNT(this->sStalmasterParts); i++) {
        if (this->sStalmasterParts[i].invisible)
            continue;

        dist_x = this->sStalmasterParts[i].skeletonPos.x - this->sStalmasterParts[i].pos.x;
        dist_y = this->sStalmasterParts[i].skeletonPos.y - this->sStalmasterParts[i].pos.y;
        dist_z = this->sStalmasterParts[i].skeletonPos.z - this->sStalmasterParts[i].pos.z;
        dist_y *= 1.75f;

        if (sqrtf(SQ(dist_x) + SQ(dist_y) + SQ(dist_z)) < 1.0f) // Make the real limb appear if close enough
            this->sStalmasterParts[i].invisible = true;

        if (i == STALMASTER_LIMB_LOC_SWORDA || i == STALMASTER_LIMB_LOC_SWORDB) { // The swords are faster
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.x, this->sStalmasterParts[i].skeletonPos.x, 1.0f, 20.0f, 0.0f);
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.y, this->sStalmasterParts[i].skeletonPos.y, 1.0f, 20.0f, 0.0f);
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.z, this->sStalmasterParts[i].skeletonPos.z, 1.0f, 20.0f, 0.0f);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.x, this->sStalmasterParts[i].skeletonRot.x, 0xA, 0x3E80, 0x14);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.y, this->sStalmasterParts[i].skeletonRot.y, 0xA, 0x3E80, 0x14);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.z, this->sStalmasterParts[i].skeletonRot.z, 0xA, 0x3E80, 0x14);
        } else {
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.x, this->sStalmasterParts[i].skeletonPos.x, value1, value2, value3);
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.y, this->sStalmasterParts[i].skeletonPos.y, value1, value2, value3);
            Math_SmoothStepToF(&this->sStalmasterParts[i].pos.z, this->sStalmasterParts[i].skeletonPos.z, value1, value2, value3);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.x, this->sStalmasterParts[i].skeletonRot.x, 0xA, 0x1F40, 0x14);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.y, this->sStalmasterParts[i].skeletonRot.y, 0xA, 0x1F40, 0x14);
            Math_SmoothStepToS(&this->sStalmasterParts[i].rot.z, this->sStalmasterParts[i].skeletonRot.z, 0xA, 0x1F40, 0x14);
        }
    }

}

void EnStalmaster_SetupIntroduction(EnStalmaster* this, struct PlayState* play) {
    this->skelAnime.playSpeed = 0.0f;
    if (this->actor.xzDistToPlayer < (this->flags.miniboss ? 200.0f : 400.0f)) {
        this->actionFunc = EnStalmaster_Introduction;
        this->csState = STALMASTER_CUTSCENE_INTRO_WAIT;
    }
}

void EnStalmaster_Introduction(EnStalmaster* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    this->skelAnime.playSpeed = 0.75f;

    switch (this->csState) {
        case STALMASTER_CUTSCENE_INTRO_WAIT:
            for (i=1; i<ARRAY_COUNT(this->sStalmasterParts); i++) // Make sure all parts are on the floors.
                this->sStalmasterParts[i].pos.y = this->actor.floorHeight;
            this->sStalmasterParts[STALMASTER_LIMB_HEAD].rot = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot;

            Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao2counterAnim, 0.0f);
            this->csState = STALMASTER_CUTSCENE_INTRO_OPENING;

            if (this->flags.miniboss) {
                this->subCamEye.x = (Math_SinS(this->actor.world.rot.y - DEG_TO_BINANG(20)) * 200.0f) + this->actor.world.pos.x;
                this->subCamEye.y = this->actor.world.pos.y + 25;
                this->subCamEye.z = (Math_CosS(this->actor.world.rot.y - DEG_TO_BINANG(20)) * 200.0f) + this->actor.world.pos.z;
                this->subCamAt.x = this->actor.world.pos.x;
                this->subCamAt.y = this->actor.world.pos.y + 55;
                this->subCamAt.z = this->actor.world.pos.z;
                this->subCamId = Play_CreateSubCamera(play);
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
                Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
                this->subCamFov = 85;
                Actor_ChangeCategory(play, &play->actorCtx, &this->actor, ACTORCAT_BOSS);
            }
            break;
        case STALMASTER_CUTSCENE_INTRO_OPENING:
            if (this->flags.miniboss) {
                player->actor.world.pos.x = (Math_SinS(this->actor.world.rot.y) * 155.0f) + this->actor.world.pos.x;;
                player->actor.world.pos.y = this->actor.world.pos.y;
                player->actor.world.pos.z = (Math_CosS(this->actor.world.rot.y) * 155.0f) + this->actor.world.pos.z;
                player->actor.world.rot.y = player->actor.shape.rot.y = Actor_WorldYawTowardActor(&player->actor, &this->actor);
            }
        
            if (this->skelAnime.curFrame >= 5 && this->skelAnime.curFrame < 26)
                this->sStalmasterParts[STALMASTER_LIMB_HEAD].rot = this->sStalmasterParts[STALMASTER_LIMB_HEAD].skeletonRot;

            EnStalmaster_Gather(this,play);

            if (this->skelAnime.curFrame == 0)
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_REPLACE);
            else if (this->skelAnime.curFrame == 13)
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SCREECH);

            if (this->skelAnime.curFrame == 26) {
                if (this->flags.miniboss) {
                    func_800F5ACC(NA_BGM_MINI_BOSS2);
                    Play_SetCameraFov(play, CAM_ID_MAIN, 60.0f);
                    Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
                    Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_WAIT);
                    this->subCamId = SUB_CAM_ID_DONE;
                }
                Actor_ChangeCategory(play, &play->actorCtx, &this->actor, ACTORCAT_ENEMY);
                this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
                EnStalmaster_SetupWalk(this,play);
            }
            break;
    }

    if (this->subCamId != SUB_CAM_ID_DONE){
        Play_SetCameraAtEye(play, this->subCamId, &this->subCamAt, &this->subCamEye);
        Play_SetCameraFov(play, this->subCamId, this->subCamFov);
    }
}

void EnStalmaster_SetupWalk(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_Walk;

    if (this->flags.inSecondPhase)
        Animation_MorphToLoop(&this->skelAnime, &Stalfos4_ao4walkAnim, -4.0f);
    else Animation_MorphToLoop(&this->skelAnime, &Stalfos4_ao2walkAnim, -4.0f);
    this->aggressionTimer = 0;
    this->bodyCollider.base.acFlags |= AC_NONE;
}

void EnStalmaster_Walk(EnStalmaster* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f movement, playerPos, additionalVelocity, direction;
    f32 speed, distance;
    s16 targetYaw;

    if (Animation_OnFrame(&this->skelAnime, 0.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_STEP);
    else if (!this->flags.inSecondPhase && Animation_OnFrame(&this->skelAnime, 16.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_STEP);
    else if (this->flags.inSecondPhase && Animation_OnFrame(&this->skelAnime, 15.0f))
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_STEP);

    targetYaw = Math_Vec3f_Yaw(&this->actor.world.pos, &player->actor.world.pos) - 0x4100;
    Math_SmoothStepToS(&this->actor.shape.rot.y, targetYaw, 4, 0x1000, 0x100);

    playerPos = player->actor.world.pos;
    
    direction.x = playerPos.x - this->actor.world.pos.x;
    direction.y = playerPos.y - this->actor.world.pos.y;
    direction.z = playerPos.z - this->actor.world.pos.z;

    distance = sqrtf(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);

    if (distance > 0.0f) {
        direction.x /= distance;
        direction.y /= distance;
        direction.z /= distance;

        speed = 3.4f; // Adjust this value for speed

        if (this->skelAnime.playSpeed < 0.0f) {
            direction.x = -direction.x;
            direction.y = -direction.y;
            direction.z = -direction.z;
        }

        movement.x = direction.x * speed;
        movement.y = direction.y * speed;
        movement.z = direction.z * speed;
        this->actor.world.pos.x += movement.x;
        this->actor.world.pos.y += movement.y;
        this->actor.world.pos.z += movement.z;
    }

    if (this->actor.xzDistToPlayer > 240.0f) {
        this->skelAnime.playSpeed = 1.5f;
        this->commonTimer = 0;
    } else {
        if (this->actor.xzDistToPlayer < 120.0f) {
            if (this->commonTimer == 0 || this->actor.xzDistToPlayer < 100.0f) {
                this->commonTimer = 31;
                this->skelAnime.playSpeed = -1.0f;
            }
        }

        if (this->commonTimer == 0 || this->actor.xzDistToPlayer > 200.0f) {
            this->commonTimer = 30;
            this->skelAnime.playSpeed = 1.0f;
        }
    }

    if (this->skelAnime.playSpeed == 1.0f && this->actor.xzDistToPlayer < 165.0f) {
        this->aggressionTimer++;
        if (this->aggressionTimer >= 13)
            EnStalmaster_SetupAttack(this, play);
    } else this->aggressionTimer = 0;

    this->actor.speed = 1.75f * this->skelAnime.playSpeed;
}

void EnStalmaster_SetupAttack(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_Attack;

    this->bodyCollider.base.acFlags &= ~AC_HARD;
    
    if (!this->flags.inSecondPhase) {
        if (Rand_ZeroOne() < 0.5f)
            Animation_MorphToLoop(&this->skelAnime, &Stalfos4_aoAttackaAnim, -4.0f);
        else
            Animation_MorphToLoop(&this->skelAnime, &Stalfos4_aoAttackbAnim, -4.0f);
    } else {
        switch ((u32)(Rand_ZeroOne() * 3.0f)) {
			case 0:
                Animation_MorphToLoop(&this->skelAnime, &Stalfos4_aoAttackcAnim, -4.0f);
				break;
            case 1:
                Animation_MorphToLoop(&this->skelAnime, &Stalfos4_aoAttackdAnim, -4.0f);
				break;
            case 2:
                Animation_MorphToLoop(&this->skelAnime, &Stalfos4_ao4posecAnim, -4.0f);
				break;
		}
    }
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_TELEGRAPH);
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_GATHER);
}

void EnStalmaster_Attack(EnStalmaster* this, struct PlayState* play) {
    s16 targetYaw = Math_Vec3f_Yaw(&this->actor.world.pos, &GET_PLAYER(play)->actor.world.pos) - 0x4100;

    Math_SmoothStepToS(&this->actor.shape.rot.y, targetYaw, 4, 0x1000, 0x100);
    if (this->skelAnime.animation == &Stalfos4_aoAttackaAnim) {
        if (Animation_OnFrame(&this->skelAnime, 44.0f))
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
        else if (Animation_OnFrame(&this->skelAnime, 57.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->actor.speed = 14.0f;
        } else if (Animation_OnFrame(&this->skelAnime, 42.0f))
            this->flags.swordAActive = true;
        else if (Animation_OnFrame(&this->skelAnime, 50.0f))
            this->flags.swordAActive = false;
        else if (Animation_OnFrame(&this->skelAnime, 54.0f))
            this->flags.swordBActive = true;
        else if (Animation_OnFrame(&this->skelAnime, 63.0f))
            this->flags.swordBActive = false;
    } else if (this->skelAnime.animation == &Stalfos4_aoAttackbAnim) {
        if (Animation_OnFrame(&this->skelAnime, 14.0f)) {
            Sfx_PlaySfxAtPos(&this->actor.world.pos, NA_SE_EN_STAL_SWING);
            Sfx_PlaySfxAtPos(&this->actor.world.pos, NA_SE_EN_STAL_TELEGRAPH);
            Sfx_PlaySfxAtPos(&this->actor.world.pos, NA_SE_EN_STAL_GATHER);
            Sfx_PlaySfxAtPos(&this->actor.world.pos, NA_SE_EN_STAL_SWING);
            Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
            Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
            this->flags.swordAActive = true;
        } else if (Animation_OnFrame(&this->skelAnime, 20.0f))
            this->flags.swordAActive = false;
    } else if (this->skelAnime.animation == &Stalfos4_aoAttackcAnim) {
        if (Animation_OnFrame(&this->skelAnime, 42.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordBActive = true;
            this->actor.speed = 15.5f;
        }
        else if (Animation_OnFrame(&this->skelAnime, 45.0f))
            this->flags.swordBActive = false;
        else if (Animation_OnFrame(&this->skelAnime, 56.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordAActive = true;
            this->actor.speed = 15.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 60.0f))
            this->flags.swordAActive = false;
        else if (Animation_OnFrame(&this->skelAnime, 70.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordDActive = true;
            this->actor.speed = 15.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 73.0f))
            this->flags.swordDActive = false;
        else if (Animation_OnFrame(&this->skelAnime, 95.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordCActive = true;
            this->actor.speed = 16.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 98.0f))
            this->flags.swordCActive = false;
    } else if (this->skelAnime.animation == &Stalfos4_aoAttackdAnim) {
        if (Animation_OnFrame(&this->skelAnime, 14.0f)) {
            Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
            Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordAActive = true;
            this->flags.swordBActive = true;
            this->actor.speed = 16.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 17.0f)) {
            this->flags.swordAActive = false;
            this->flags.swordBActive = false;
        } else if (Animation_OnFrame(&this->skelAnime, 32.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordCActive = true;
            this->flags.swordDActive = true;
            this->actor.speed = 16.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 35.0f)) {
            this->flags.swordCActive = false;
            this->flags.swordDActive = false;
        }
    } else if (this->skelAnime.animation == &Stalfos4_ao4posecAnim) {
        if (Animation_OnFrame(&this->skelAnime, 51.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
            this->flags.swordAActive = true;
            this->flags.swordBActive = true;
            this->flags.swordCActive = true;
            this->flags.swordDActive = true;
            this->actor.speed = 18.5f;
        } else if (Animation_OnFrame(&this->skelAnime, 55.0f)) {
            this->flags.swordAActive = false;
            this->flags.swordBActive = false;
            this->flags.swordCActive = false;
            this->flags.swordDActive = false;
        }
    }

    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(this->skelAnime.animation)))
		EnStalmaster_SetupWalk(this,play);

    Math_ApproachF(&this->actor.speed, 0.0f, 0.7f, 2.5f);
}

void EnStalmaster_SetupGuard(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_Guard;

    if (this->flags.inSecondPhase)
        Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao4guardAnim, -4.0f);
    else
        Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao2guardAnim, -4.0f);

    this->actor.speed = -15.0f;

    func_8003424C(play, &this->sStalmasterParts[STALMASTER_LIMB_HANDLU].skeletonPos);
    Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
    Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
    this->flags.swordAActive = this->flags.swordBActive = this->flags.swordCActive = this->flags.swordDActive = false;
}

void EnStalmaster_Guard(EnStalmaster* this, struct PlayState* play) {
    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(this->skelAnime.animation)))
		EnStalmaster_SetupWalk(this,play);

    Math_ApproachF(&this->actor.speed, 0.0f, 0.7f, 2.5f);
}

void EnStalmaster_SetupBlowArms(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_BlowArms;

    this->bodyCollider.base.acFlags &= ~AC_HARD;

    if (this->flags.inSecondPhase)
        Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao4guardAnim, 0.0f);
    else Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao2guardAnim, 0.0f);

    this->actor.speed = 0.0f;

    EnStalmaster_BlowupArms(this, play);

    Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
    Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
    this->flags.swordAActive = this->flags.swordBActive = this->flags.swordCActive = this->flags.swordDActive = false;
}

void EnStalmaster_BlowArms(EnStalmaster* this, struct PlayState* play) {
    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(this->skelAnime.animation)))
		EnStalmaster_SetupWalk(this,play);
    if (this->skelAnime.curFrame >= 45)
        EnStalmaster_GatherArms(this,play);
}

void EnStalmaster_SetupCounter(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_Counter;

    this->bodyCollider.base.acFlags &= ~AC_HARD;

    if (this->flags.inSecondPhase)
        Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao4counterAnim, -4.0f);
    else Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao2counterAnim, -4.0f);

    this->actor.speed = 0.0f;
    func_8003424C(play, &this->sStalmasterParts[STALMASTER_LIMB_HANDLU].skeletonPos);
    this->flags.swordAActive = this->flags.swordBActive = this->flags.swordCActive = this->flags.swordDActive = false;

    Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
    Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_TELEGRAPH);
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_GATHER);
    // This may look weird but its to stop the old attack sfx to "replace" them
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_TELEGRAPH);
    Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_GATHER);
}

void EnStalmaster_Counter(EnStalmaster* this, struct PlayState* play) {
    if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(this->skelAnime.animation)))
		EnStalmaster_SetupWalk(this,play);

    if (Animation_OnFrame(&this->skelAnime, 14.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SWING);
        Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
        Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
        this->flags.swordAActive = true;
        this->flags.swordBActive = true;
        this->actor.speed = 13.5f;
        if (this->flags.inSecondPhase) {
            this->flags.swordCActive = true;
            this->flags.swordDActive = true;
            this->actor.speed = 16.5f;
        }
    } else if (Animation_OnFrame(&this->skelAnime, 20.0f)) {
        this->flags.swordAActive = false;
        this->flags.swordBActive = false;
        this->flags.swordCActive = false;
        this->flags.swordDActive = false;
    }
    Math_ApproachF(&this->actor.speed, 0.0f, 0.7f, 2.5f);
}

void EnStalmaster_SetupSecondPhase(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_SecondPhase;
    this->csState = STALMASTER_CUTSCENE_THREAT_WAIT;
    Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
    Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
    this->flags.inSecondPhase = true;
    this->actor.speed = 0.0f;
    this->flags.swordAActive = this->flags.swordBActive = this->flags.swordCActive = this->flags.swordDActive = false;
}

void EnStalmaster_SecondPhase(EnStalmaster* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    Camera* mainCam;
    s16 playerYaw;

    EnStalmaster_GatherArms(this, play);

    switch (this->csState) {
        case STALMASTER_CUTSCENE_THREAT_WAIT:
            Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_aoSwordposeAnim, 0.0f);
            this->csState = STALMASTER_CUTSCENE_THREAT_DO;
            
            if (this->flags.miniboss) {
                // Set up sub-camera for the cutscene
                this->subCamEye.x = (Math_SinS(this->actor.world.rot.y - DEG_TO_BINANG(-105)) * 200.0f) + this->actor.world.pos.x;
                this->subCamEye.y = this->actor.world.pos.y + 25;
                this->subCamEye.z = (Math_CosS(this->actor.world.rot.y - DEG_TO_BINANG(-105)) * 200.0f) + this->actor.world.pos.z;
                this->subCamAt.x = this->actor.world.pos.x;
                this->subCamAt.y = this->actor.world.pos.y + 55;
                this->subCamAt.z = this->actor.world.pos.z;
                
                this->subCamId = Play_CreateSubCamera(play);                    // Create and activate the sub-camera  
                Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);      // Set main camera to wait
                Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE); // Activate sub-camera
                Player_SetCsAction(play, &player->actor, PLAYER_CSACTION_5);
                this->subCamFov = 70;
            }
            break;
        case STALMASTER_CUTSCENE_THREAT_DO:
            if (this->flags.miniboss) {
                player->actor.world.pos.x = (Math_SinS(this->actor.world.rot.y) * 300.0f) + this->actor.world.pos.x;
                player->actor.world.pos.y = this->actor.world.pos.y;
                player->actor.world.pos.z = (Math_CosS(this->actor.world.rot.y) * 300.0f) + this->actor.world.pos.z;
                player->actor.world.rot.y = player->actor.shape.rot.y = Actor_WorldYawTowardActor(&player->actor, &this->actor);
            }
            if (this->skelAnime.curFrame >= 43)
                this->subCamFov += 0.25f;
            else this->subCamFov -= 0.15f;

            if (Animation_OnFrame(&this->skelAnime, 27.0f))
                this->flags.hasTakenWeaponry = true;
            else if (Animation_OnFrame(&this->skelAnime, 28.0f))
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_PICK);
            else if (Animation_OnFrame(&this->skelAnime, 43.0f))
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_BUILDUP);

            if (Animation_OnFrame(&this->skelAnime, 62.0f)) {
                if (this->flags.miniboss) {
                    mainCam = Play_GetCamera(play, CAM_ID_MAIN);

                    player->actor.world.rot.y = player->actor.shape.rot.y = Actor_WorldYawTowardActor(&player->actor, &this->actor);
                    playerYaw = player->actor.shape.rot.y;

                    mainCam->eye.x = player->actor.world.pos.x - (Math_SinS(playerYaw) * 150.0f);
                    mainCam->eye.y = player->actor.world.pos.y + 60.0f;
                    mainCam->eye.z = player->actor.world.pos.z - (Math_CosS(playerYaw) * 150.0f);
                    mainCam->at.x = player->actor.world.pos.x + (Math_SinS(playerYaw) * 100.0f);
                    mainCam->at.y = player->actor.world.pos.y + 40.0f;
                    mainCam->at.z = player->actor.world.pos.z + (Math_CosS(playerYaw) * 100.0f);

                    Play_SetCameraFov(play, CAM_ID_MAIN, 60.0f);
                    Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
                    Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_WAIT);
                    this->subCamId = SUB_CAM_ID_DONE;
                    Player_SetCsAction(play, &player->actor, PLAYER_CSACTION_7);
                }

                EnStalmaster_SetupWalk(this, play);
            }
            break;
    }

    if (this->subCamId != SUB_CAM_ID_DONE) {
        Play_SetCameraAtEye(play, this->subCamId, &this->subCamAt, &this->subCamEye);
        Play_SetCameraFov(play, this->subCamId, this->subCamFov);
        Player_SetCsAction(play, &player->actor, PLAYER_CSACTION_5);
    }
}

void EnStalmaster_SetupDeath(EnStalmaster* this, struct PlayState* play) {
    this->actionFunc = EnStalmaster_Death;
    this->csState = STALMASTER_CUTSCENE_DIE_WAIT;

    Audio_StopSfxById(NA_SE_EN_STAL_TELEGRAPH);
    Audio_StopSfxById(NA_SE_EN_STAL_GATHER);
    this->actor.speed = 0.0f;

    Enemy_StartFinishingBlow(play, &this->actor);
    this->animationTimer = 24;
    this->flags.swordAActive = this->flags.swordBActive = this->flags.swordCActive = this->flags.swordDActive = false;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
}

void EnStalmaster_Death(EnStalmaster* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    s16 fireCount, bodyPartIndex;
    Vec3f fireAccel, firePos, firePos2, pos;
    f32 deathShrinkSpeed = 1.0f;
    s32 x;
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    Vec3f effectVel = { 0.0f, 4.0f, 0.0f };
    Vec3f sp7C = { 0.0f, 0.5f, 0.0f };
    StalmasterParts* effect = this->sStalmasterParts;

    Animation_MorphToPlayOnce(&this->skelAnime, &Stalfos4_ao4counterAnim, -4.0f);
    this->burntimer = 10;

    if (this->burntimer == 10)
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_DIE);

    for (st1=0; st1<ARRAY_COUNT(limbIds); ++st1) {
        for (j=0; j<ARRAY_COUNT(this->sStalmasterParts); ++j) {
            if (!(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDC) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_LOC_SWORDD) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADRD) && !(!this->flags.inSecondPhase && st1 == STALMASTER_LIMB_PADLD)) {
                if (j == limbIds[st1] && effect[j].invisible) {
                    effect[j].invisible = false;
                    effect[j].csHandled = false;
                    effect[j].onGround = false;
                    effect[j].gravity = true;
                    effect[j].velocity.x = Rand_CenteredFloat(14.0f);
                    effect[j].velocity.z = Rand_CenteredFloat(14.0f);
                    effect[j].velocity.y = Rand_ZeroFloat(6.0f) + 34.0f;
                    effect[j].pos = effect[j].skeletonPos;
                    effect[j].rot = effect[j].skeletonRot;
                }
            }
        }
    }

    if (!this->flags.burnEffectStarted) {
        this->burntimer = 20;
        this->flags.burnEffectStarted = true;
        this->flags.startfade = true;
    }

    Actor_SetScale(&this->actor, this->actor.scale.x * 0.8f);
    this->animationTimer--;

    for (x=12-(this->animationTimer >> 1); x>=0; x--) {
        pos.x = this->actor.world.pos.x + Rand_CenteredFloat(120.0f);
        pos.z = this->actor.world.pos.z + Rand_CenteredFloat(120.0f);
        pos.y = this->actor.world.pos.y + 20.0f + Rand_CenteredFloat(50.0f);
        EffectSsDeadDb_Spawn(play, &pos, &sp7C, &sp7C, 100, 0, 186, 0, 0, 255, 100, 100, 100, 1, 9, true);
    }
    
    if (this->animationTimer == 0) {
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0xB0);
        if (this->flags.switchFlag <= 0x3F) {
            if (play->sceneId == SCENE_BESITU)
                Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_DOOR_WARP1, 0.0f, 0.0f, 0.0f, 0, 0, 0, WARP_DUNGEON_CHILD);
            Flags_SetSwitch(play, this->flags.switchFlag);
        }
        Actor_Kill(&this->actor);
        if (this->flags.miniboss)
            func_800F5B58();
    }
}

void EnStalmaster_UpdateColliderDamage(EnStalmaster* this, struct PlayState* play, ColliderJntSph collider) {
    Player* player = GET_PLAYER(play);

    if (collider.base.atFlags & AT_HIT) {
        collider.base.atFlags &= ~AT_HIT;
        player->pushedSpeed = 9.0f;
    }
}

// Handles the sword collisions and the main body ones
void EnStalmaster_UpdateCollisions(EnStalmaster* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (this->actionFunc == EnStalmaster_Death)
        return;

    // If hit, handle damage effects
    if (this->colliderSwordUpRight.base.acFlags & AC_BOUNCED) {
        this->colliderSwordUpRight.base.acFlags &= ~AC_BOUNCED;
        this->bodyCollider.base.acFlags &= ~AC_HIT;
    } else if (this->colliderSwordDownLeft.base.acFlags & AC_BOUNCED) {
        this->colliderSwordDownLeft.base.acFlags &= ~AC_BOUNCED;
        this->bodyCollider.base.acFlags &= ~AC_HIT;
    } else if (this->colliderSwordDownRight.base.acFlags & AC_BOUNCED) {
        this->colliderSwordDownRight.base.acFlags &= ~AC_BOUNCED;
        this->bodyCollider.base.acFlags &= ~AC_HIT;
    } else if (this->bodyCollider.base.acFlags & AC_HIT) {
        this->bodyCollider.base.acFlags &= ~AC_HIT; // Clear the hit flag

        switch (this->actor.colChkInfo.damageReaction) {
            case STALMASTER_DMGEFF_EXPLOSIVE:
                if (this->actionFunc != EnStalmaster_BlowArms)
                    EnStalmaster_SetupBlowArms(this, play);
                break;
            case STALMASTER_DMGEFF_PARRY:
                EnStalmaster_SetupGuard(this, play);
                break;
            case STALMASTER_DMGEFF_SPIN:
            case STALMASTER_DMGEFF_NORMAL:
                if (this->actor.colChkInfo.damageReaction == STALMASTER_DMGEFF_SPIN && this->actionFunc == EnStalmaster_Counter)
                    EnStalmaster_SetupGuard(this, play);
                else {
                    if (this->actionFunc == EnStalmaster_Walk || this->actionFunc == EnStalmaster_Guard)
                        EnStalmaster_SetupCounter(this, play);
                    else {
                        this->dmgFogEffectTimer = 5;

                        if (!this->flags.helmetOff && this->actor.colChkInfo.health <= Actor_EnemyHealthMultiply(15, ELITE_HP))
                            EnStalmaster_BlowupHelmet(this, play);
                        if (!this->flags.plateOff && this->actor.colChkInfo.health <= Actor_EnemyHealthMultiply(30, ELITE_HP))
                            EnStalmaster_BlowupPlate(this, play);

                        // Rotate torso based on player's weapon animation
                        switch (player->meleeWeaponAnimation) {
                            case PLAYER_MWA_FORWARD_SLASH_1H:
                                this->torsoRotX = DEG_TO_BINANG(60);
                                break;
                            case PLAYER_MWA_FORWARD_SLASH_2H:
                            case PLAYER_MWA_JUMPSLASH_START:
                            case PLAYER_MWA_FLIPSLASH_START:
                            case PLAYER_MWA_JUMPSLASH_FINISH:
                            case PLAYER_MWA_FLIPSLASH_FINISH:
                                this->torsoRotX = DEG_TO_BINANG(80);
                                break;
                            case PLAYER_MWA_SPIN_ATTACK_1H:
                            case PLAYER_MWA_SPIN_ATTACK_2H:
                            case PLAYER_MWA_BIG_SPIN_1H:
                            case PLAYER_MWA_BIG_SPIN_2H:
                                this->torsoRotX = -DEG_TO_BINANG(50);
                                this->torsoRotZ = -DEG_TO_BINANG(50);
                                break;
                            case PLAYER_MWA_LEFT_SLASH_1H:
                            case PLAYER_MWA_LEFT_COMBO_1H:
                            case PLAYER_MWA_LEFT_SLASH_2H:
                            case PLAYER_MWA_LEFT_COMBO_2H:
                                this->torsoRotZ = -DEG_TO_BINANG(50);
                                break;
                            case PLAYER_MWA_RIGHT_SLASH_1H:
                            case PLAYER_MWA_RIGHT_COMBO_1H:
                            case PLAYER_MWA_RIGHT_SLASH_2H:
                            case PLAYER_MWA_RIGHT_COMBO_2H:
                                this->torsoRotZ = DEG_TO_BINANG(50);
                                break;
                            default:
                                this->torsoRotX = -DEG_TO_BINANG(50);
                                break;
                        }

                        Actor_ApplyDamage(&this->actor);
                        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 8);
                        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_DMGED);
                    }
                }
                break;
        }
    }

    Collider_UpdateCylinder(&this->actor, &this->bodyCollider);

    if (!this->dmgFogEffectTimer)
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->bodyCollider.base);

    CollisionCheck_SetOC(play, &play->colChkCtx, &this->bodyCollider.base);

    if (this->actionFunc != EnStalmaster_BlowArms) {
        if (this->flags.swordAActive) {
            EnStalmaster_UpdateColliderDamage(this, play, this->colliderSwordUpLeft);
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSwordUpLeft.base);
        }

        if (this->flags.swordBActive) {
            EnStalmaster_UpdateColliderDamage(this, play, this->colliderSwordUpRight);
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSwordUpRight.base);
        }

        if (this->flags.inSecondPhase) {
            if (this->flags.swordCActive) {
                EnStalmaster_UpdateColliderDamage(this, play, this->colliderSwordDownRight);
                CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSwordDownRight.base);
            }

            if (this->flags.swordDActive) {
                EnStalmaster_UpdateColliderDamage(this, play, this->colliderSwordDownLeft);
                CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSwordDownLeft.base);
            }

            CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSwordDownLeft.base);
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSwordDownRight.base);
        }

        // These are always active
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSwordUpLeft.base);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSwordUpRight.base);
    }
}


void EnStalmaster_UpdateTorsoRot(EnStalmaster* this, struct PlayState* play) {  
    Math_ApproachZeroF(&this->torsoRotX, 1.5f, 900.0f);
    Math_ApproachZeroF(&this->torsoRotZ, 1.5f, 900.0f);
}

void EnStalmaster_Update(Actor* thisx, struct PlayState* play) {
    EnStalmaster* this = (EnStalmaster*)thisx;

    Player* player = GET_PLAYER(play);
    static Vec3f sShadowScale = { 0.85f, 0.85f, 0.85f };

    this->actionFunc(this, play);
    func_80033C30(&this->actor.world.pos, &sShadowScale, 255, play);
    SkelAnime_Update(&this->skelAnime);
    
    EnStalmaster_UpdateCollisions(this, play);
    EnStalmaster_UpdateTorsoRot(this, play);
    EnStalmaster_UpdateEffects(this, play);
    EnStalmaster_UpdateParts(this, play);

    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 50.0f, 100.0f, 100.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    DECR(this->dmgFogEffectTimer);
    DECR(this->commonTimer);

    this->actor.world.rot.y = this->actor.shape.rot.y; // Update world rotation

    if (!this->flags.inSecondPhase) {
        if (this->actor.colChkInfo.health <= Actor_EnemyHealthMultiply(35, ELITE_HP))
            EnStalmaster_SetupSecondPhase(this, play);
    } else if (this->actor.colChkInfo.health <= 0 && this->actionFunc != EnStalmaster_Death)
        EnStalmaster_SetupDeath(this, play);

    if (this->flags.startfade) {
        if (this->alpha > 0) {
            this->alpha -= 10;
            if (this->alpha <= 0) {
                this->alpha = 0;
                Actor_Kill(&this->actor);
            }
        }
    }
}

void EnStalmaster_Destroy(Actor* thisx, struct PlayState* play) {
    EnStalmaster* this = (EnStalmaster*)thisx;

    Collider_DestroyJntSph(play, &this->colliderSwordUpLeft);
    Collider_DestroyJntSph(play, &this->colliderSwordUpRight);
    Collider_DestroyJntSph(play, &this->colliderSwordDownRight);
    Collider_DestroyJntSph(play, &this->colliderSwordDownLeft);
    Collider_DestroyCylinder(play, &this->bodyCollider);

    SkelAnime_Free(&this->skelAnime, play);
}

s32 EnStalmaster_OverrideLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dl, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnStalmaster* this = (void*)thisx;
    
    if (limbIndex == STALMASTER_LIMB_HEAD) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_HEAD].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_CHIN) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_HEAD].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_BACKBONE02) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_BACKBONE02].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_HANDRD || limbIndex == STALMASTER_LIMB_FINGERRD01 || limbIndex == STALMASTER_LIMB_FINGERRD02) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_ARMRD02].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_HANDRU || limbIndex == STALMASTER_LIMB_FINGERRU01 || limbIndex == STALMASTER_LIMB_FINGERRU02) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_ARMRU02].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_HANDLD || limbIndex == STALMASTER_LIMB_FINGERLD01 || limbIndex == STALMASTER_LIMB_FINGERLD02) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_ARMLD02].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_HANDLU || limbIndex == STALMASTER_LIMB_FINGERLU01 || limbIndex == STALMASTER_LIMB_FINGERLU02) {
        if (!this->sStalmasterParts[STALMASTER_LIMB_ARMLU02].invisible)
            *dl = NULL;
    } else if (limbIndex == STALMASTER_LIMB_BACKBONE01) {
        rot->x += this->torsoRotX;
        rot->z += this->torsoRotZ;
    }

    if (!this->sStalmasterParts[limbIndex].invisible)
        *dl = NULL;
    return 0;
}

void EnStalmaster_PostLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dl, Vec3s* rot, void* thisx) {
    MtxF mf;
    EnStalmaster* this = (void*)thisx;

    // Blures pos:
    Vec3f blureA, blureB;
	static Vec3f vecSwordULOffset = { 10.0f, 0.0f, -20.0f };
	static Vec3f vecSwordULEffectOffset = { 25.0f, 0.0f, 125.0f };
	static Vec3f vecSwordUROffset = { -10.0f, 0.0f, -20.0f };
	static Vec3f vecSwordUREffectOffset = { -25.0f, 0.0f, 125.0f };
    static Vec3f vecSwordDROffset = { -10.0f, 0.0f, -20.0f };
	static Vec3f vecSwordDREffectOffset = { -25.0f, 0.0f, 130.0f };
    static Vec3f vecSwordDLOffset = { 10.0f, 0.0f, -20.0f };
	static Vec3f vecSwordDLEffectOffset = { 25.0f, 0.0f, 125.0f };

    static Vec3f tailOffsets[] = { { 0.0f, 40.0f, 0.0f }, { -8.0f, 60.0f, 8.0f }, { -24.0f, 80.0f, 25.0f }, { -40.0f, 100.0f, 34.0f } };
    static Vec3f headHandOffset = { 5.0f, -19.0f, 0.0f };

    // Rotation variables for each sword (A, B, C, D)
    static f32 swordARotationX = 75.0f, swordARotationY = 225.0f, swordARotationZ = 85.0f;
    static f32 swordBRotationX = 85.0f, swordBRotationY = 200.0f, swordBRotationZ = 85.0f;
    static f32 swordCRotationX = 17.9f, swordCRotationY = 12.5f, swordCRotationZ = -322.1f;
    static f32 swordDRotationX = 20.0f, swordDRotationY = 10.0f, swordDRotationZ = 318.8f;
    static f32 swordC2RotationX = 90.0f, swordC2RotationY = 225.0f, swordC2RotationZ = 75.0f;
    static f32 swordD2RotationX = 90.0f, swordD2RotationY = 225.0f, swordD2RotationZ = -75.0f;
    static f32 helmRotationX = -100.0f, helmRotationY = 3850.0f, helmRotationZ = 150.0f;
    static f32 helmTranslateX = 0.0f, helmTranslateY = 0.0f, helmTranslateZ = 0.0f;

    StalmasterParts* limbInfo = &this->sStalmasterParts[limbIndex];

    OPEN_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1405);

    if (limbIndex == STALMASTER_LIMB_HEAD) {
        if (limbInfo->invisible) {
            Matrix_Push();
            Matrix_Translate(helmTranslateX, helmTranslateY, helmTranslateZ, MTXMODE_APPLY);
            Matrix_RotateX(helmRotationX, MTXMODE_APPLY);
            Matrix_RotateY(helmRotationY, MTXMODE_APPLY);
            Matrix_RotateZ(helmRotationZ, MTXMODE_APPLY);
            gSPClearGeometryMode(POLY_OPA_DISP++, G_ZBUFFER);
            for (i=0; i<4; i++)
                Matrix_MultVec3f(&tailOffsets[i], &this->tailPos[i]);
            
            Matrix_MultVec3f(&gZeroVec, &this->actor.focus.pos);
            if (!this->flags.helmetOff) {
                MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1420);
                gSPDisplayList(POLY_OPA_DISP++, HelmetDL);
            }
            Matrix_Pop();
            gSPSetGeometryMode(POLY_OPA_DISP++, G_ZBUFFER);
        } else this->actor.focus.pos = limbInfo->pos;
    } else if (limbIndex == STALMASTER_LIMB_LOC_SWORDA) {
        if (limbInfo->invisible) {
            // Apply manual rotation to Sword A
            Matrix_RotateX(swordARotationX * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateY(swordARotationY * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateZ(swordARotationZ * (M_PI / 180.0f), MTXMODE_APPLY);
            
            // Draw Sword A
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1434);
            gSPDisplayList(POLY_OPA_DISP++, SwordADL);
        }
    } else if (limbIndex == STALMASTER_LIMB_LOC_SWORDB) {
        if (limbInfo->invisible) {
            // Apply manual rotation to Sword B
            Matrix_RotateX(swordBRotationX * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateY(swordBRotationY * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateZ(swordBRotationZ * (M_PI / 180.0f), MTXMODE_APPLY);

            // Draw Sword B
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1445);
            gSPDisplayList(POLY_OPA_DISP++, SwordB);
        }
    } else if (limbIndex == STALMASTER_LIMB_LOC_SWORDC) {
        if (limbInfo->invisible && this->flags.hasTakenWeaponry) {
            // Apply manual rotation to Sword C
            Matrix_RotateX(swordCRotationX, MTXMODE_APPLY);
            Matrix_RotateY(swordCRotationY, MTXMODE_APPLY);
            Matrix_RotateZ(swordCRotationZ, MTXMODE_APPLY);

            // Draw Sword C
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1456);
            gSPDisplayList(POLY_OPA_DISP++, SwordC);
        }
    } else if (limbIndex == STALMASTER_LIMB_LOC_SWORDD) {
        if (limbInfo->invisible && this->flags.hasTakenWeaponry) {
            // Apply manual rotation to Sword D
            Matrix_RotateX(swordDRotationX, MTXMODE_APPLY);
            Matrix_RotateY(swordDRotationY, MTXMODE_APPLY);
            Matrix_RotateZ(swordDRotationZ, MTXMODE_APPLY);

            // Draw Sword D
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1467);
            gSPDisplayList(POLY_OPA_DISP++, SwordD);
        }
    }     else if (limbIndex == STALMASTER_LIMB_LOC_SWORDC2) {
        if (limbInfo->invisible && !this->flags.hasTakenWeaponry) {
            Matrix_RotateX(swordC2RotationX * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateY(swordC2RotationY * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateZ(swordC2RotationZ * (M_PI / 180.0f), MTXMODE_APPLY);
            
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1476);
            gSPDisplayList(POLY_OPA_DISP++, SwordC);
        }
    } else if (limbIndex == STALMASTER_LIMB_LOC_SWORDD2) {
        if (limbInfo->invisible && !this->flags.hasTakenWeaponry) {
            Matrix_RotateX(swordD2RotationX * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateY(swordD2RotationY * (M_PI / 180.0f), MTXMODE_APPLY);
            Matrix_RotateZ(swordD2RotationZ * (M_PI / 180.0f), MTXMODE_APPLY);
            
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1485);
            gSPDisplayList(POLY_OPA_DISP++, SwordD);
        }
    }


    CLOSE_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1491);
    Matrix_Get(&mf);

    VEC_SET(limbInfo->skeletonPos, mf.xw, mf.yw, mf.zw);
    Matrix_MtxFToZYXRotS(&mf, &limbInfo->skeletonRot, 1);

    if (limbIndex == STALMASTER_LIMB_HANDRU) {
		Matrix_MultVec3f(&vecSwordUROffset, &blureA);
		Matrix_MultVec3f(&vecSwordUREffectOffset, &blureB);
        
		if (this->flags.swordBActive)
			EffectBlure_AddVertex(Effect_GetByIndex(this->effectIndex3), &blureB, &blureA);
		else
			EffectBlure_AddSpace(Effect_GetByIndex(this->effectIndex3));

        Collider_UpdateSpheres(limbIndex, &this->colliderSwordUpRight);
	} else if (limbIndex == STALMASTER_LIMB_HANDLU) {
		Matrix_MultVec3f(&vecSwordULOffset, &blureA);
		Matrix_MultVec3f(&vecSwordULEffectOffset, &blureB);
		if (this->flags.swordAActive)
			EffectBlure_AddVertex(Effect_GetByIndex(this->effectIndex1), &blureB, &blureA);
		else
			EffectBlure_AddSpace(Effect_GetByIndex(this->effectIndex1));

        Collider_UpdateSpheres(limbIndex, &this->colliderSwordUpLeft);
	} else if (limbIndex == STALMASTER_LIMB_HANDRD) {
		Matrix_MultVec3f(&vecSwordDROffset, &blureA);
		Matrix_MultVec3f(&vecSwordDREffectOffset, &blureB);
		if (this->flags.swordCActive)
			EffectBlure_AddVertex(Effect_GetByIndex(this->effectIndex2), &blureB, &blureA);
		else
			EffectBlure_AddSpace(Effect_GetByIndex(this->effectIndex2));

        Collider_UpdateSpheres(limbIndex, &this->colliderSwordDownRight);
	} else if (limbIndex == STALMASTER_LIMB_HANDLD) {
		Matrix_MultVec3f(&vecSwordDLOffset, &blureA);
		Matrix_MultVec3f(&vecSwordDLEffectOffset, &blureB);
		if (this->flags.swordDActive)
			EffectBlure_AddVertex(Effect_GetByIndex(this->effectIndex4), &blureB, &blureA);
		else
			EffectBlure_AddSpace(Effect_GetByIndex(this->effectIndex4));

        Collider_UpdateSpheres(limbIndex, &this->colliderSwordDownLeft);
	}
}

void EnStalmaster_Draw(Actor* thisx, struct PlayState* play) {
    EnStalmaster* this = (EnStalmaster*)thisx;

    OPEN_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1540);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    if ((this->dmgFogEffectTimer % 2) != 0) {
        POLY_OPA_DISP = Gfx_SetFog(POLY_OPA_DISP, 255, 0, 0, 255, 900, 1099);
    }

	SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnStalmaster_OverrideLimbDraw, EnStalmaster_PostLimbDraw, this);

    POLY_OPA_DISP = Play_SetFog(play, POLY_OPA_DISP);

    EnStalmaster_DrawEffects(this,play);
    EnStalmaster_DrawLimbs(this,play);
    
    CLOSE_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1555);
}

void EnStalmaster_DrawEffects(EnStalmaster* this, struct PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1559);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    Matrix_Push();

    for (i = 0; i < ARRAY_COUNT(this->sStalmasterEffects); i++) {
        StalmasterParts* effect = &this->sStalmasterEffects[i];

        if (effect->type == STALMASTER_EFFECT_NONE)
            continue;

        Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW);
        Matrix_RotateZ(BINANG_TO_RAD(effect->rot.z), MTXMODE_APPLY);
        Matrix_RotateY(BINANG_TO_RAD(effect->rot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD(effect->rot.x), MTXMODE_APPLY);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1575);

        switch (effect->type) {
            case STALMASTER_EFFECT_HELMET:
                gSPDisplayList(POLY_OPA_DISP++, HelmetDL);
                break;
            case STALMASTER_EFFECT_TAIL:
                gSPDisplayList(POLY_OPA_DISP++, Tail);
                break;
            case STALMASTER_EFFECT_TIP:
                gSPDisplayList(POLY_OPA_DISP++, Tip);
                break;
            case STALMASTER_EFFECT_PLATE:
                gSPDisplayList(POLY_OPA_DISP++, ChestplateDL);
                break;
        }
    }

    Matrix_Pop();
    CLOSE_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1593);
}


void EnStalmaster_DrawLimbs(EnStalmaster* this, struct PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1598);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    Matrix_Push();

    for (i = 0; i < ARRAY_COUNT(this->sStalmasterParts); i++) {
        StalmasterParts* part = &this->sStalmasterParts[i];

        if (part->invisible)
            continue;

        Matrix_Translate(part->pos.x, part->pos.y, part->pos.z, MTXMODE_NEW);
        Matrix_RotateZ(BINANG_TO_RAD(part->rot.z), MTXMODE_APPLY);
        Matrix_RotateY(BINANG_TO_RAD(part->rot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD(part->rot.x), MTXMODE_APPLY);
        Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_stalm.c", 1613);

        switch (i) {
            case STALMASTER_LIMB_HEAD:
                gSPDisplayList(POLY_OPA_DISP++, Head);
                if (!this->flags.helmetOff)
                    gSPDisplayList(POLY_OPA_DISP++, HelmetDL);
                break;
            case STALMASTER_LIMB_BACKBONE02:
                gSPDisplayList(POLY_OPA_DISP++, Backbone);
                if (!this->flags.plateOff)
                    gSPDisplayList(POLY_OPA_DISP++, ChestplateDL);
                break;
            case STALMASTER_LIMB_ARMRD01:
            case STALMASTER_LIMB_ARMRU01:
                gSPDisplayList(POLY_OPA_DISP++, Arm_R);
                break;
            case STALMASTER_LIMB_ARMRD02:
            case STALMASTER_LIMB_ARMRU02:
                gSPDisplayList(POLY_OPA_DISP++, Forearm_R);
                break;
            case STALMASTER_LIMB_PADRD:
            case STALMASTER_LIMB_PADRU:
                gSPDisplayList(POLY_OPA_DISP++, Pad_R);
                break;
            case STALMASTER_LIMB_ARMLD01:
            case STALMASTER_LIMB_ARMLU01:
                gSPDisplayList(POLY_OPA_DISP++, Arm_L);
                break;
            case STALMASTER_LIMB_ARMLD02:
            case STALMASTER_LIMB_ARMLU02:
                gSPDisplayList(POLY_OPA_DISP++, Forearm_L);
                break;
            case STALMASTER_LIMB_PADLD:
            case STALMASTER_LIMB_PADLU:
                gSPDisplayList(POLY_OPA_DISP++, Pad_L);
                break;
            case STALMASTER_LIMB_LOC_SWORDA:
                gSPDisplayList(POLY_OPA_DISP++, SwordADL);
                break;
            case STALMASTER_LIMB_LOC_SWORDB:
                gSPDisplayList(POLY_OPA_DISP++, SwordB);
                break;
            case STALMASTER_LIMB_LOC_SWORDC:
                if (this->flags.inSecondPhase)
                    gSPDisplayList(POLY_OPA_DISP++, SwordC);
                break;
            case STALMASTER_LIMB_LOC_SWORDC2:
                gSPDisplayList(POLY_OPA_DISP++, SwordC);
                break;
            case STALMASTER_LIMB_LOC_SWORDD:
                if (this->flags.inSecondPhase)
                    gSPDisplayList(POLY_OPA_DISP++, SwordD);
                break;
            case STALMASTER_LIMB_LOC_SWORDD2:
                gSPDisplayList(POLY_OPA_DISP++, SwordD);
                break;
        }
    }

    Matrix_Pop();
    CLOSE_DISPS(play->state.gfxCtx, "../z_en_stalm.c", 1674);
}