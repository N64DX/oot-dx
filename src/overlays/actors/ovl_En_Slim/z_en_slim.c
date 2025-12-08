/*
 * File: z_en_slim.c
 * Overlay: ovl_En_Slim
 * Description: Zol
 */

#include "z_en_slim.h"
#include "overlays/actors/ovl_En_Encount1/z_en_encount1.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"

#include "libc64/qrand.h"
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

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnSlim_Init(Actor* thisx, struct PlayState* play);
void EnSlim_Destroy(Actor* thisx, struct PlayState* play);
void EnSlim_Update(Actor* thisx, struct PlayState* play);
void EnSlim_Draw(Actor* thisx, struct PlayState* play);

void EnSlim_SetupIdle(EnSlim* this);
void EnSlim_SetupTurnTowardPlayer(EnSlim* this);
void EnSlim_SetupMoveTowardPlayer(EnSlim* this);
void EnSlim_SetupDeathCry(EnSlim* this);

void EnSlim_Idle(EnSlim* this, struct PlayState* play);
void EnSlim_TurnTowardPlayer(EnSlim* this, struct PlayState* play);
void EnSlim_Recoil(EnSlim* this, struct PlayState* play);
void EnSlim_Stunned(EnSlim* this, struct PlayState* play);
void EnSlim_DeathCry(EnSlim* this, struct PlayState* play);
void EnSlim_FallApart(EnSlim* this, struct PlayState* play);

ActorProfile En_Slim_Profile = {
    ACTOR_EN_SLIM,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_SLIME,
    sizeof(EnSlim),
    EnSlim_Init,
    EnSlim_Destroy,
    EnSlim_Update,
    EnSlim_Draw,
};

static ColliderJntSphElementInit sJntSphElementsInit[1] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, 0x00, 0x08 },
            { 0xFFCFFFFF, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_ON | ACELEM_HOOKABLE,
            OCELEM_ON,
        },
        { 0, { { 0, 1500, 0 }, 20 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_HIT5,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    1,
    sJntSphElementsInit,
};

static DamageTable sDamageTable[] = {
    /* Deku nut      */ DMG_ENTRY(1, 0x1),
    /* Deku stick    */ DMG_ENTRY(1, 0x0),
    /* Slingshot     */ DMG_ENTRY(1, 0x0),
    /* Explosive     */ DMG_ENTRY(1, 0x0),
    /* Boomerang     */ DMG_ENTRY(1, 0x1),
    /* Normal arrow  */ DMG_ENTRY(1, 0x0),
    /* Hammer swing  */ DMG_ENTRY(1, 0x0),
    /* Hookshot      */ DMG_ENTRY(1, 0x1),
    /* Kokiri sword  */ DMG_ENTRY(1, 0x0),
    /* Master sword  */ DMG_ENTRY(1, 0x0),
    /* Giant's Knife */ DMG_ENTRY(1, 0x0),
    /* Fire arrow    */ DMG_ENTRY(1, 0x0),
    /* Ice arrow     */ DMG_ENTRY(1, 0xF),
    /* Light arrow   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(1, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(1, 0x0),
    /* Fire magic    */ DMG_ENTRY(1, 0xE),
    /* Ice magic     */ DMG_ENTRY(1, 0xF),
    /* Light magic   */ DMG_ENTRY(1, 0xE),
    /* Shield        */ DMG_ENTRY(1, 0x0),
    /* Mirror Ray    */ DMG_ENTRY(1, 0x0),
    /* Kokiri spin   */ DMG_ENTRY(1, 0x0),
    /* Giant spin    */ DMG_ENTRY(1, 0x0),
    /* Master spin   */ DMG_ENTRY(1, 0x0),
    /* Kokiri jump   */ DMG_ENTRY(1, 0x0),
    /* Giant jump    */ DMG_ENTRY(1, 0x0),
    /* Master jump   */ DMG_ENTRY(1, 0x0),
    /* Unknown 1     */ DMG_ENTRY(1, 0x0),
    /* Unblockable   */ DMG_ENTRY(1, 0x0),
    /* Hammer jump   */ DMG_ENTRY(1, 0x0),
    /* Unknown 2     */ DMG_ENTRY(1, 0x0),
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, 0x5E, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(minVelocityY, 65496, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, 64536, ICHAIN_STOP),
};

static Vec3f sFootOffset = { 2800.0f, -200.0f, 0.0f }; // Some kind of offset for the position of each tekslim foot

static Vec3f sIceChunks[12] = { // Relative positions to spawn ice chunks when tekslim is frozen
    { 20.0f, 20.0f, 0.0f },   { 10.0f, 40.0f, 10.0f },   { -10.0f, 40.0f, 10.0f }, { -20.0f, 20.0f, 0.0f },
    { 10.0f, 40.0f, -10.0f }, { -10.0f, 40.0f, -10.0f }, { 0.0f, 20.0f, -20.0f },  { 10.0f, 0.0f, 10.0f },
    { 10.0f, 0.0f, -10.0f },  { 0.0f, 20.0f, 20.0f },    { -10.0f, 0.0f, 10.0f },  { -10.0f, 0.0f, -10.0f },
};

void EnSlim_SetupAction(EnSlim* this, EnSlimActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnSlim_Init(Actor* thisx, struct PlayState* play) {
    EnSlim* this = (EnSlim*)thisx;

    Actor_ProcessInitChain(thisx, sInitChain);
    thisx->attentionRangeType = 3;
    Actor_SetScale(&this->actor, 0.0075f * 2.0f);
    ActorShape_Init(&thisx->shape, -200.0f, ActorShadow_DrawCircle, 35.0f);
    this->flipState = TEKSLIM_INITIAL;
    thisx->colChkInfo.damageTable = sDamageTable;
    this->actionVar1 = 0; // value immediately overwritten in SetupIdle
    this->bodyBreak.val = 0;
    thisx->focus.pos = thisx->world.pos;
    thisx->focus.pos.y += 20.0f;
    thisx->colChkInfo.health = Actor_EnemyHealthMultiply(2, MONSTER_HP);
    thisx->colChkInfo.mass = MASS_HEAVY;
    Collider_InitJntSph(play, &this->collider);
    Collider_SetJntSph(play, &this->collider, thisx, &sJntSphInit, &this->colliderItem);
    this->unk_2DC = 0x1D;
    if (this->actor.params == TEKSLIM_BLUE) {
        this->unk_2DC |= 0x40; // Don't use the actor engine's ripple spawning code
        thisx->colChkInfo.health = Actor_EnemyHealthMultiply(4, MONSTER_HP);
    }
    EnSlim_SetupIdle(this);
    this->deformationCounter = 0;
}

void EnSlim_Destroy(Actor* thisx, struct PlayState* play) {
    EnSlim* this = (EnSlim*)thisx;

    Collider_DestroyJntSph(play, &this->collider);
}

void EnSlim_SetupIdle(EnSlim* this) {
    this->action = TEKSLIM_IDLE;
    this->actionVar1 = Rand_S16Offset(15, 30);
    this->actor.speed = 0.0f;
    EnSlim_SetupAction(this, EnSlim_Idle);
}

void EnSlim_Idle(EnSlim* this, struct PlayState* play) {
    Math_SmoothStepToF(&this->actor.speed, 0.0f, 1.0f, 0.5f, 0.0f);
    if (this->actor.params == TEKSLIM_BLUE) {
        if (this->actor.bgCheckFlags & BGCHECKFLAG_WATER) { // Float on water surface
            this->actor.gravity = 0.0f;
            Math_SmoothStepToF(&this->actor.velocity.y, 0.0f, 1.0f, 2.0f, 0.0f);
            Math_SmoothStepToF(&this->actor.world.pos.y, this->actor.world.pos.y + this->actor.depthInWater, 1.0f, 2.0f, 0.0f);
        } else this->actor.gravity = -1.0f;
    }
    if ((this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_GROUND_TOUCH)) && (this->actor.velocity.y <= 0.0f))
        this->actor.velocity.y = 0.0f;
    if (this->actionVar1 > 0)
        this->actionVar1--;
    else if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.yDistToPlayer <= 80.0f))
        EnSlim_SetupTurnTowardPlayer(this);
}

static f32 slimeDeformation[118][4] = {
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.051000, 0.956300, 1.047800, 0.000000 },
    { 1.172500, 0.852200, 1.161900, 0.000000 },    { 1.317500, 0.727800, 1.298100, 0.000000 },
    { 1.439000, 0.623700, 1.412200, 0.000000 },    { 1.490000, 0.580000, 1.460000, 0.000000 },
    { 1.422300, 0.658300, 1.394800, 69.070000 },   { 1.253900, 0.853200, 1.232600, 254.169983 },
    { 1.037400, 1.104900, 1.024100, 522.149963 },  { 0.825100, 1.353800, 0.819500, 839.859985 },
    { 0.669300, 1.540000, 0.669300, 1174.140015 }, { 0.580900, 1.655700, 0.583800, 1491.849976 },
    { 0.529500, 1.734800, 0.533700, 1759.830078 }, { 0.505600, 1.780100, 0.510100, 1944.930054 },
    { 0.499700, 1.794600, 0.504200, 2014.000000 }, { 0.502400, 1.781600, 0.507100, 1699.309937 },
    { 0.521200, 1.738700, 0.525600, 1007.000000 }, { 0.571600, 1.660000, 0.574600, 314.690002 },
    { 0.669300, 1.540000, 0.669300, 0.000000 },    { 0.844700, 1.349200, 0.838800, 0.000000 },
    { 1.082300, 1.097700, 1.068400, 0.000000 },    { 1.329200, 0.838600, 1.306800, 0.000000 },
    { 1.532400, 0.625100, 1.503100, 0.000000 },    { 1.639000, 0.510400, 1.606000, 0.000000 },
    { 1.505500, 0.657500, 1.461800, 0.000000 },    { 1.201600, 0.980600, 1.153000, 0.000000 },
    { 0.994600, 1.159500, 0.982700, 0.000000 },    { 1.022600, 1.090600, 1.039400, 0.000000 },
    { 1.147400, 0.962600, 1.144800, 0.000000 },    { 1.221800, 0.893700, 1.201600, 0.000000 },
    { 1.182700, 0.939700, 1.162400, 0.000000 },    { 1.116400, 0.985600, 1.098500, 0.000000 },
    { 1.046800, 0.951600, 1.038700, 0.000000 },    { 1.000300, 0.999600, 1.000300, 0.000000 },
    { 1.009500, 0.992900, 1.009500, 0.000000 },    { 1.029300, 0.978200, 1.029300, 0.000000 },
    { 1.040200, 0.970000, 1.040200, 0.000000 },    { 1.017300, 0.988600, 1.018100, 0.000000 },
    { 0.985400, 1.013900, 0.987100, 0.000000 },    { 1.000000, 1.000000, 1.000000, 0.000000 },
    { 1.086900, 0.925100, 1.081400, 0.000000 },    { 1.213000, 0.817000, 1.199700, 0.000000 },
    { 1.344500, 0.704400, 1.323300, 0.000000 },    { 1.448000, 0.615900, 1.420600, 0.000000 },
    { 1.490000, 0.580000, 1.460000, 0.000000 },    { 1.422300, 0.658300, 1.394800, 69.070000 },
    { 1.253900, 0.853200, 1.232600, 254.169983 },  { 1.037400, 1.104900, 1.024100, 522.149963 },
    { 0.825100, 1.353800, 0.819500, 839.859985 },  { 0.669300, 1.540000, 0.669300, 1174.140015 },
    { 0.580900, 1.655700, 0.583800, 1491.849976 }, { 0.529500, 1.734800, 0.533700, 1759.830078 },
    { 0.505600, 1.780100, 0.510100, 1944.930054 }, { 0.499700, 1.794600, 0.504200, 2014.000000 },
    { 0.502400, 1.781600, 0.507100, 1699.309937 }, { 0.521200, 1.738700, 0.525600, 1007.000000 },
    { 0.571600, 1.660000, 0.574600, 314.690002 },  { 0.669300, 1.540000, 0.669300, 0.000000 },
    { 0.844700, 1.349200, 0.838800, 0.000000 },    { 1.082300, 1.097700, 1.068400, 0.000000 },
    { 1.329200, 0.838600, 1.306800, 0.000000 },    { 1.532400, 0.625100, 1.503100, 0.000000 },
    { 1.639000, 0.510400, 1.606000, 0.000000 },    { 1.505500, 0.657500, 1.461800, 0.000000 },
    { 1.201600, 0.980600, 1.153000, 0.000000 },    { 0.994600, 1.159500, 0.982700, 0.000000 },
    { 1.022600, 1.090600, 1.039400, 0.000000 },    { 1.147400, 0.962600, 1.144800, 0.000000 },
    { 1.221800, 0.893700, 1.201600, 0.000000 },    { 1.182700, 0.939700, 1.162400, 0.000000 },
    { 1.116400, 0.985600, 1.098500, 0.000000 },    { 1.044600, 0.938500, 1.036900, 0.000000 },
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.010400, 0.992200, 1.010400, 0.000000 },
    { 1.029800, 0.977800, 1.029800, 0.000000 },    { 1.040200, 0.970000, 1.040200, 0.000000 },
    { 1.017300, 0.988600, 1.018100, 0.000000 },    { 0.985400, 1.013900, 0.987100, 0.000000 },
    { 1.000000, 1.000000, 1.000000, 0.000000 },    { 1.086900, 0.925100, 1.081400, 0.000000 },
    { 1.213000, 0.817000, 1.199700, 0.000000 },    { 1.344500, 0.704400, 1.323300, 0.000000 },
    { 1.448000, 0.615900, 1.420600, 0.000000 },    { 1.490000, 0.580000, 1.460000, 0.000000 },
    { 1.422300, 0.658300, 1.394800, 69.070000 },   { 1.253900, 0.853200, 1.232600, 254.169983 },
    { 1.037400, 1.104900, 1.024100, 522.149963 },  { 0.825100, 1.353800, 0.819500, 839.859985 },
    { 0.669300, 1.540000, 0.669300, 1174.140015 }, { 0.580900, 1.655700, 0.583800, 1491.849976 },
    { 0.529500, 1.734800, 0.533700, 1759.830078 }, { 0.505600, 1.780100, 0.510100, 1944.930054 },
    { 0.499700, 1.794600, 0.504200, 2014.000000 }, { 0.502400, 1.781600, 0.507100, 1699.309937 },
    { 0.521200, 1.738700, 0.525600, 1007.000000 }, { 0.571600, 1.660000, 0.574600, 314.690002 },
    { 0.669300, 1.540000, 0.669300, 0.000000 },    { 0.844700, 1.349200, 0.838800, 0.000000 },
    { 1.082300, 1.097700, 1.068400, 0.000000 },    { 1.329200, 0.838600, 1.306800, 0.000000 },
    { 1.532400, 0.625100, 1.503100, 0.000000 },    { 1.639000, 0.510400, 1.606000, 0.000000 },
    { 1.505500, 0.657500, 1.461800, 0.000000 },    { 1.201600, 0.980600, 1.153000, 0.000000 },
    { 0.994600, 1.159500, 0.982700, 0.000000 },    { 1.022600, 1.090600, 1.039400, 0.000000 },
    { 1.147400, 0.962600, 1.144800, 0.000000 },    { 1.221800, 0.893700, 1.201600, 0.000000 },
    { 1.182700, 0.939700, 1.162400, 0.000000 },    { 1.116400, 0.985600, 1.098500, 0.000000 },
    { 1.044600, 0.938500, 1.036900, 0.000000 },    { 1.000000, 1.000000, 1.000000, 0.000000 },
    { 1.010400, 0.992200, 1.010400, 0.000000 },    { 1.029800, 0.977800, 1.029700, 0.000000 },
    { 1.040200, 0.970000, 1.040200, 0.000000 },    { 1.029900, 0.977800, 1.029800, 0.000000 },
    { 1.010700, 0.992200, 1.010600, 0.000000 },    { 1.000300, 1.000000, 1.000300, 0.000000 },
};

void EnSlim_CustomJumpAtPlayer(EnSlim* this, struct PlayState* play) {
    s16 angleToPlayer;
    s16 turnVelocity;

    if (slimeDeformation[this->deformationCounter][3] > 0.0f) {
        if (slimeDeformation[this->deformationCounter - 1][3] == 0.0f)
            Actor_PlaySfx(&this->actor, NA_SE_EN_AWA_BOUND);
        this->actor.speed = 4.0f;
    } else this->actor.speed = 0.0f;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 4000, 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;

    this->deformationCounter++;
    if (this->deformationCounter == 118) {
        this->deformationCounter = 0;
        EnSlim_SetupIdle(this);
    }
    if (this->actor.colChkInfo.health == 1 && slimeDeformation[this->deformationCounter][1] < 0.55f)
        EnSlim_SetupDeathCry(this);
}

void EnSlim_SetupAttack(EnSlim* this) {
    this->action = TEKSLIM_ATTACK;
    EnSlim_SetupAction(this, EnSlim_CustomJumpAtPlayer);
    return;
}

void EnSlim_SetupTurnTowardPlayer(EnSlim* this) {
    this->action = TEKSLIM_TURN_TOWARD_PLAYER;
    if ((this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_GROUND_TOUCH)) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))) {
        if (this->actor.velocity.y <= 0.0f) {
            this->actor.gravity = 0.0f;
            this->actor.velocity.y = 0.0f;
            this->actor.speed = 0.0f;
        }
    }
    EnSlim_SetupAction(this, EnSlim_TurnTowardPlayer);
}

void EnSlim_TurnTowardPlayer(EnSlim* this, struct PlayState* play) {
    s16 angleToPlayer;
    s16 turnVelocity;

    if (((this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_GROUND_TOUCH)) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))) &&
        (this->actor.velocity.y <= 0.0f)) {
        this->actor.gravity = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.speed = 0.0f;
    }
    
    if ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER)) // Calculate turn velocity and animation speed based on angle to player
        this->actor.world.pos.y += this->actor.depthInWater;
    angleToPlayer = Actor_WorldYawTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.world.rot.y;
    if (angleToPlayer > 0) {
        turnVelocity = (angleToPlayer / 42.0f) + 10.0f;
        this->actor.world.rot.y += (turnVelocity * 2);
    } else {
        turnVelocity = (angleToPlayer / 42.0f) - 10.0f;
        this->actor.world.rot.y += (turnVelocity * 2);
    }

    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f)) // Idle if player is far enough away from the tekslim, move or attack if almost facing player
        EnSlim_SetupIdle(this);
    else if (Actor_IsFacingPlayer(&this->actor, 3640)) {
        if ((this->actor.xzDistToPlayer <= 180.0f) && (this->actor.yDistToPlayer <= 80.0f))
            EnSlim_SetupAttack(this);
        else EnSlim_SetupMoveTowardPlayer(this);
    }
}

void EnSlim_SetupMoveTowardPlayer(EnSlim* this) {
    this->action = TEKSLIM_MOVE_TOWARD_PLAYER;
    EnSlim_SetupAction(this, EnSlim_CustomJumpAtPlayer);
    return;
}

void EnSlim_SetupRecoil(EnSlim* this) {
    this->action = TEKSLIM_RECOIL;
    this->actor.speed = -6.0f;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.gravity = -1.0f;
    EnSlim_SetupAction(this, EnSlim_Recoil);
}

/**
 * After tekslim hits or gets hit, recoils backwards and slides a bit upon landing
 */
void EnSlim_Recoil(EnSlim* this, struct PlayState* play) {
    s16 angleToPlayer;

    
    Math_SmoothStepToF(&this->actor.speed, 0.0f, 1.0f, 0.5f, 0.0f);
    if (((this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND_TOUCH | BGCHECKFLAG_GROUND)) || (this->actor.params == TEKSLIM_BLUE && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))) && (this->actor.velocity.y <= 0.0f)) { // Snap to ground or water surface upon landing
        if ((this->actor.params != TEKSLIM_BLUE) || !(this->actor.bgCheckFlags & BGCHECKFLAG_WATER)) {
            if (this->actor.floorHeight > BGCHECK_Y_MIN)
                this->actor.world.pos.y = this->actor.floorHeight;
        } else {
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            this->actor.world.pos.y += this->actor.depthInWater;
        }
    }

    if (this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND_TOUCH | BGCHECKFLAG_WATER_TOUCH)) { // play sound and generate ripples
        if (!(this->actor.bgCheckFlags & BGCHECKFLAG_WATER_TOUCH)) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->frontLeftFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->frontRightFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->backRightFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->backLeftFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_M_GND);
        } else {
            this->actor.bgCheckFlags &= ~(BGCHECKFLAG_WATER_TOUCH);
            Actor_PlaySfx(&this->actor, NA_SE_EN_TEKU_LAND_WATER2);
        }
    }

    angleToPlayer = (this->actor.yawTowardsPlayer - this->actor.shape.rot.y);
    if ((this->actor.speed == 0.0f) && ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER)))) { // If player is far away, idle. Otherwise attack or move
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->collider.base.atFlags &= ~AT_HIT;
        if ((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f) && (ABS(this->actor.shape.rot.x) < 4000) && (ABS(this->actor.shape.rot.z) < 4000) && ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))))
            EnSlim_SetupIdle(this);
        else if ((this->actor.xzDistToPlayer < 180.0f) && (this->actor.yDistToPlayer <= 80.0f) && (ABS(angleToPlayer) <= 6000))
            EnSlim_SetupAttack(this);
        else EnSlim_SetupMoveTowardPlayer(this);
    }
    //    SkelAnime_Update(&this->skelAnime);
}

void EnSlim_SetupStunned(EnSlim* this) {
    this->action = TEKSLIM_STUNNED;
    this->actor.speed = -6.0f;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    if (this->damageEffect == 0xF)
        this->spawnIceTimer = 48;
    Actor_PlaySfx(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
    EnSlim_SetupAction(this, EnSlim_Stunned);
}

/**
 * stunned or frozen
 */
void EnSlim_Stunned(EnSlim* this, struct PlayState* play) {
    s16 angleToPlayer;

    Math_SmoothStepToF(&this->actor.speed, 0.0f, 1.0f, 0.5f, 0.0f);
    if (((this->actor.bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_GROUND_TOUCH)) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))) && (this->actor.velocity.y <= 0.0f)) { // Snap to ground or water
        if (((this->actor.params != TEKSLIM_BLUE) || !(this->actor.bgCheckFlags & BGCHECKFLAG_WATER))) {
            if (this->actor.floorHeight > BGCHECK_Y_MIN)
                this->actor.world.pos.y = this->actor.floorHeight;
        } else {
            this->actor.velocity.y = 0.0f;
            this->actor.gravity = 0.0f;
            this->actor.world.pos.y += this->actor.depthInWater;
        }
    }
    if (this->actor.bgCheckFlags & (BGCHECKFLAG_WATER_TOUCH | BGCHECKFLAG_GROUND_TOUCH)) { // Play sounds and spawn dirt effects upon landing
        if (!(this->actor.bgCheckFlags & BGCHECKFLAG_WATER_TOUCH)) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->frontLeftFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->frontRightFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->backRightFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->backLeftFootPos, 1.0f, 2, 80, 15, 1, false);
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_M_GND);
        } else {
            this->actor.bgCheckFlags &= ~(BGCHECKFLAG_WATER_TOUCH);
            Actor_PlaySfx(&this->actor, NA_SE_EN_TEKU_LAND_WATER2);
        }
    }

    angleToPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    if (((this->actor.colorFilterTimer == 0) && (this->actor.speed == 0.0f)) && ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER)))) { // Decide on next action based on health, flip state and player distance
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (this->actor.colChkInfo.health == 0) {
            EnSlim_SetupDeathCry(this);
        } else if (((this->actor.xzDistToPlayer > 300.0f) && (this->actor.yDistToPlayer > 80.0f) && (ABS(this->actor.shape.rot.x) < 4000) && (ABS(this->actor.shape.rot.z) < 4000)) && ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND) || ((this->actor.params == TEKSLIM_BLUE) && (this->actor.bgCheckFlags & BGCHECKFLAG_WATER))))
            EnSlim_SetupIdle(this);
        else if ((this->actor.xzDistToPlayer < 180.0f) && (this->actor.yDistToPlayer <= 80.0f) && (ABS(angleToPlayer) <= 6000))
            EnSlim_SetupAttack(this);
        else EnSlim_SetupMoveTowardPlayer(this);
    }
}

void EnSlim_SetupDeathCry(EnSlim* this) {
    this->action = TEKSLIM_DEATH_CRY;
    this->actor.colorFilterTimer = 0;
    this->actor.speed = 0.0f;
    EnSlim_SetupAction(this, EnSlim_DeathCry);
}

/**
 * First frame of death. Scream in pain and allocate memory for EnPart data
 */
void EnSlim_DeathCry(EnSlim* this, struct PlayState* play) {
    EffectSsDeadSound_SpawnStationary(play, &this->actor.projectedPos, NA_SE_EN_AWA_BREAK, true, DEADSOUND_REPEAT_MODE_OFF, 40);
    this->action = TEKSLIM_FALL_APART;
    EnSlim_SetupAction(this, EnSlim_FallApart);
    BodyBreak_Alloc(&this->bodyBreak, 0x18, play);
}

/**
 * Spawn EnPart and drop items
 */
void EnSlim_FallApart(EnSlim* this, struct PlayState* play) {
    if (1 || BodyBreak_SpawnParts(&this->actor, &this->bodyBreak, play, (this->actor.params + 0xB))) {
        if (this->actor.params == TEKSLIM_BLUE)
            Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0xE0);
        else Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x40);
        Actor_Kill(&this->actor);
    }
}

void EnSlim_CheckDamage(Actor* thisx, struct PlayState* play) {
    EnSlim* this = (EnSlim*)thisx;

    if ((this->collider.base.acFlags & AC_HIT) && (this->action >= TEKSLIM_IDLE)) {
        this->collider.base.acFlags &= ~AC_HIT;
        if (thisx->colChkInfo.damageReaction != 0xE) { // Immune to fire magic
            this->damageEffect = thisx->colChkInfo.damageReaction;
            Actor_SetDropFlag(thisx, &this->collider.elements[0].base, 0);
            // Stun if Tekslim hit by nut, boomerang, hookshot, ice arrow or ice magic
            if ((thisx->colChkInfo.damageReaction == 1) || (thisx->colChkInfo.damageReaction == 0xF)) {
                if (this->action != TEKSLIM_STUNNED) {
                    Actor_SetColorFilter(thisx, 0, 0x78, 0, 0x50);
                    Actor_ApplyDamage(thisx);
                    EnSlim_SetupStunned(this);
                }
            } else { // Otherwise apply damage and handle death where necessary
                if ((thisx->colorFilterTimer == 0) || ((thisx->colorFilterParams & 0x4000) == 0)) {
                    Actor_SetColorFilter(thisx, 0x4000, 0xFF, 0, 8);
                    Actor_ApplyDamage(thisx);
                    osSyncPrintf("damage detected, setting scale\n");
                    Actor_SetScale(&this->actor, 0.0075f);
                }
                if (thisx->colChkInfo.health == 0)
                    EnSlim_SetupDeathCry(this);
                else {
                    Actor* childSlime;
                    Actor_PlaySfx(thisx, NA_SE_EN_AWA_BREAK);
                    EnSlim_SetupRecoil(this);
                    childSlime = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_EN_SLIM, thisx->world.pos.x, thisx->world.pos.y, thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, thisx->params);

                    if (childSlime != NULL) {
                        childSlime->colChkInfo.health = Actor_EnemyHealthMultiply(thisx->colChkInfo.health, MONSTER_HP);
                        Actor_SetScale(childSlime, 0.0075f);
                    }
                }
            }
        }
    }
}

void EnSlim_Update(Actor* thisx, struct PlayState* play) {
    EnSlim* this = (EnSlim*)thisx;
    char pad[0x4];
    CollisionPoly* floorPoly;
    WaterBox* waterBox;
    f32 waterSurfaceY;
    f32 multiplier = 1.0f;

    if (MONSTER_HP == 1)
        multiplier = 1.5f;
    else if (MONSTER_HP == 2)
        multiplier = 2.0;
    else if (MONSTER_HP == 3)
        multiplier = 2.5f;
    else if (MONSTER_HP == 4)
        multiplier = 3.0f;
    else if (MONSTER_HP == 5)
        multiplier = 4.0f;
    else if (MONSTER_HP == 6)
        multiplier = 5.0f;
    else if (MONSTER_HP == 7)
        multiplier = 0.5f;

    this->colliderItem.dim.scale = (this->actor.colChkInfo.health / multiplier);

    EnSlim_CheckDamage(thisx, play);
    if (thisx->colChkInfo.damageReaction != 0xE) { // Stay still if hit by immunity damage type this frame
        this->actionFunc(this, play);
        Actor_MoveXZGravity(thisx);
        Actor_UpdateBgCheckInfo(play, thisx, 25.0f, 40.0f, 20.0f, this->unk_2DC);
        if ((this->actor.params == TEKSLIM_BLUE) && (thisx->bgCheckFlags & BGCHECKFLAG_WATER)) { // If on water, snap feet to surface and spawn ripples
            floorPoly = thisx->floorPoly;
            if ((((play->gameplayFrames % 8) == 0) || (thisx->velocity.y < 0.0f)) && (WaterBox_GetSurfaceImpl(play, &play->colCtx, this->backRightFootPos.x, this->backRightFootPos.z, &waterSurfaceY, &waterBox)) &&
                (this->backRightFootPos.y <= waterSurfaceY)) {
                this->backRightFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(play, &this->backRightFootPos, 0, 220, 0);
            }
            if (((((play->gameplayFrames + 2) % 8) == 0) || (thisx->velocity.y < 0.0f)) && (WaterBox_GetSurfaceImpl(play, &play->colCtx, this->backLeftFootPos.x, this->backLeftFootPos.z, &waterSurfaceY, &waterBox)) && (this->backLeftFootPos.y <= waterSurfaceY)) {
                this->backLeftFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(play, &this->backLeftFootPos, 0, 220, 0);
            }
            if (((((play->gameplayFrames + 4) % 8) == 0) || (thisx->velocity.y < 0.0f)) && (WaterBox_GetSurfaceImpl(play, &play->colCtx, this->frontLeftFootPos.x, this->frontLeftFootPos.z, &waterSurfaceY, &waterBox)) && (this->frontLeftFootPos.y <= waterSurfaceY)) {
                this->frontLeftFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(play, &this->frontLeftFootPos, 0, 220, 0);
            }
            if (((((play->gameplayFrames + 1) % 8) == 0) || (thisx->velocity.y < 0.0f)) && (WaterBox_GetSurfaceImpl(play, &play->colCtx, this->frontRightFootPos.x,this->frontRightFootPos.z, &waterSurfaceY, &waterBox)) && (this->frontRightFootPos.y <= waterSurfaceY)) {
                this->frontRightFootPos.y = waterSurfaceY;
                EffectSsGRipple_Spawn(play, &this->frontRightFootPos, 0, 220, 0);
            }
            thisx->floorPoly = floorPoly;
        }

        if (thisx->bgCheckFlags & (BGCHECKFLAG_GROUND | BGCHECKFLAG_GROUND_TOUCH)) { // If on ground and currently flipped over, set tekslim to be fully upside-down
            func_800359B8(thisx, thisx->shape.rot.y, &thisx->shape.rot);
        } else { // Otherwise ensure the tekslim is rotating back upright
            Math_SmoothStepToS(&thisx->shape.rot.x, 0, 1, 1000, 0);
            if (this->flipState <= TEKSLIM_UNFLIPPED) {
                Math_SmoothStepToS(&thisx->shape.rot.z, 0, 1, 1000, 0);
                if (thisx->shape.yOffset > 0)
                    thisx->shape.yOffset -= 400.0f;
            }
        }
    }

    thisx->world.pos.y = thisx->floorHeight + slimeDeformation[this->deformationCounter][3] / 100.0f;

    thisx->focus.pos = thisx->world.pos;
    thisx->focus.pos.y += 20.0f;

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
}

/**
 * Get the locations where the tekslim feet are rendered
 */
void EnSlim_PostLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** limbDList, Vec3s* rot, void* thisx) {
    EnSlim* this = (EnSlim*)thisx;
    switch (limbIndex) {
        case 8:
            Matrix_MultVec3f(&sFootOffset, &this->backRightFootPos);
            break;
        case 13:
            Matrix_MultVec3f(&sFootOffset, &this->frontRightFootPos);
            break;
        case 18:
            Matrix_MultVec3f(&sFootOffset, &this->backLeftFootPos);
            break;
        case 23:
            Matrix_MultVec3f(&sFootOffset, &this->frontLeftFootPos);
            break;
    }
    BodyBreak_SetInfo(&this->bodyBreak, limbIndex, 0, 24, 24, limbDList, BODYBREAK_OBJECT_SLOT_DEFAULT);
}

void EnSlim_Draw(Actor* thisx, struct PlayState* play) {
    EnSlim* this = (EnSlim*)thisx;
    Mtx* mtx;
    GraphicsContext* gfxCtx = play->state.gfxCtx;

    OPEN_DISPS(play->state.gfxCtx, "../z_slime.c", 910);

    func_80093C80(play);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);

    mtx = GRAPH_ALLOC(gfxCtx, sizeof(Mtx));
    Matrix_Push();
    Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, MTXMODE_NEW);
    Matrix_RotateY(thisx->shape.rot.y * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateX(thisx->shape.rot.x * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_RotateZ(thisx->shape.rot.z * (M_PI / 32768), MTXMODE_APPLY);
    Matrix_Scale(thisx->scale.x * slimeDeformation[this->deformationCounter][0], thisx->scale.y * slimeDeformation[this->deformationCounter][1], thisx->scale.z * slimeDeformation[this->deformationCounter][2], MTXMODE_APPLY);
    mtx = MATRIX_FINALIZE(play->state.gfxCtx, "../z_en_slim.c", 623);
    gDPSetEnvColor(POLY_XLU_DISP++, 0, 100, 255, 255);
    gSPMatrix(POLY_XLU_DISP++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    func_8002ED80(&this->actor, play, 1); // setup XLU hilite in segment 0x07
    gSPDisplayList(POLY_XLU_DISP++, slimeDList);
    Matrix_Pop();

    CLOSE_DISPS(play->state.gfxCtx, "../z_slime.c", 910);

    Collider_UpdateSpheres(0, &this->collider); // why is this in the draw function??
}
