#include "z_en_go3.h"
#include "overlays/actors/ovl_En_Bom/z_en_bom.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "attributes.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "one_point_cutscene.h"
#include "quake.h"
#include "segmented_address.h"
#include "sequence.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "versions.h"
#include "z_lib.h"
#include "audio.h"
#include "face_reaction.h"
#include "play_state.h"
#include "player.h"
#include "save.h"
#include "regs.h"

#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/objects/object_oF1d_map/object_oF1d_map.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void EnGo3_Init(Actor* thisx, PlayState* play);
void EnGo3_Destroy(Actor* thisx, PlayState* play);
void EnGo3_Update(Actor* thisx, PlayState* play);
void EnGo3_Draw(Actor* thisx, PlayState* play);

void EnGo3_StopRolling(EnGo3* this, PlayState* play);
void EnGo3_CurledUp(EnGo3* this, PlayState* play);

void func_80A46B40_3(EnGo3* this, PlayState* play);
void EnGo3_ContinueRolling(EnGo3* this, PlayState* play);
void EnGo3_SlowRolling(EnGo3* this, PlayState* play);
void EnGo3_GroundRolling(EnGo3* this, PlayState* play);

void EnGo3_ReverseRolling(EnGo3* this, PlayState* play);
void EnGo3_SetupGetItem(EnGo3* this, PlayState* play);
void EnGo3_SetGetItem(EnGo3* this, PlayState* play);

static void* sDustTex[] = { gDust8Tex, gDust7Tex, gDust6Tex, gDust5Tex, gDust4Tex, gDust3Tex, gDust2Tex, gDust1Tex };

static Vec3f sPos = { 0.0f, 0.0f, 0.0f };
static Vec3f sVelocity = { 0.0f, 0.0f, 0.0f };
static Vec3f sAccel = { 0.0f, 0.3f, 0.0f };

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
        { 0x00000008, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_NONE,
        OCELEM_ON,
    },
    { 40, 65, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInfoInit = { 0, 0, 0, 0, MASS_IMMOVABLE };

ActorProfile En_Go3_Profile = {
    /**/ ACTOR_EN_GO3,
    /**/ ACTORCAT_NPC,
    /**/ FLAGS,
    /**/ OBJECT_OF1D_MAP,
    /**/ sizeof(EnGo3),
    /**/ EnGo3_Init,
    /**/ EnGo3_Destroy,
    /**/ EnGo3_Update,
    /**/ EnGo3_Draw,
};

static EnGo3DataStruct1 D_80A4816C[2] = {
    { 0, 0, 0, 30, 68 }, { 0, 0, 0, 30, 68 },
};

static EnGo3DataStruct2 D_80A481F8[2] = {
    { 28.0f, 0.01f, 7, 40.0f }, { 28.0f, 0.01f, 7, 40.0f },
};

static f32 sPlayerTrackingYOffsets[2][2][2] = {
    {
        { 0.0f, 20.0f },  { 0.0f, 20.0f },
    }, {
        { 0.0f, 0.0f }, { 0.0f, 0.0f },
    },
};

typedef enum EnGo3Animation {
    /*  0 */ EnGo3_ANIM_0,
    /*  1 */ EnGo3_ANIM_1,
    /*  2 */ EnGo3_ANIM_2,
    /*  3 */ EnGo3_ANIM_3,
    /*  4 */ EnGo3_ANIM_4,
    /*  5 */ EnGo3_ANIM_5,
    /*  6 */ EnGo3_ANIM_6,
    /*  7 */ EnGo3_ANIM_7,
    /*  8 */ EnGo3_ANIM_8,
    /*  9 */ EnGo3_ANIM_9,
    /* 10 */ EnGo3_ANIM_10,
    /* 11 */ EnGo3_ANIM_11,
    /* 12 */ EnGo3_ANIM_12
} EnGo3Animation;

static AnimationInfo sAnimationInfo[] = {
    { &gGoronAnim_004930, 0.0f, 0.0f, -1.0f, 0x00, 0.0f },  { &gGoronAnim_004930, 0.0f, 0.0f, -1.0f, 0x00, -8.0f },
    { &gGoronAnim_0029A8, 1.0f, 0.0f, -1.0f, 0x00, -8.0f }, { &gGoronAnim_010590, 1.0f, 0.0f, -1.0f, 0x00, -8.0f },
    { &gGoronAnim_003768, 1.0f, 0.0f, -1.0f, 0x00, -8.0f }, { &gGoronAnim_0038E4, 1.0f, 0.0f, -1.0f, 0x02, -8.0f },
    { &gGoronAnim_002D80, 1.0f, 0.0f, -1.0f, 0x02, -8.0f }, { &gGoronAnim_00161C, 1.0f, 0.0f, -1.0f, 0x00, -8.0f },
    { &gGoronAnim_001A00, 1.0f, 0.0f, -1.0f, 0x00, -8.0f }, { &gGoronAnim_0021D0, 1.0f, 0.0f, -1.0f, 0x00, -8.0f },
    { &gGoronAnim_004930, 0.0f, 0.0f, -1.0f, 0x01, -8.0f }, { &gGoronAnim_000750, 1.0f, 0.0f, -1.0f, 0x00, -8.0f },
    { &gGoronAnim_000D5C, 1.0f, 0.0f, -1.0f, 0x00, -8.0f },
};

static EnGo3DustEffectData sDustEffectData[2][4] = {
    {
        { 12, 0.2f, 0.2f, 1, 18.0f, 0.0f },
        { 12, 0.1f, 0.2f, 12, 26.0f, 0.0f },
        { 12, 0.1f, 0.3f, 4, 10.0f, 0.0f },
        { 12, 0.2f, 0.2f, 1, 18.0f, 0.0f },
    },
    {
        { 12, 0.5f, 0.4f, 3, 42.0f, 0.0f },
        { 12, 0.5f, 0.4f, 3, 42.0f, 0.0f },
        { 12, 0.5f, 0.4f, 3, 42.0f, 0.0f },
        { 12, 0.5f, 0.4f, 3, 42.0f, 0.0f },
    },
};

static Vec3f sZeroVec = { 0.0f, 0.0f, 0.0f };

void EnGo3_SpawnEffectDust(EnGo3* this, Vec3f* pos, Vec3f* velocity, Vec3f* accel, u8 initialTimer, f32 scale,
                           f32 scaleStep) {
    EnGoEffect* dustEffect = this->effects;
    s16 i;

    for (i=0; i<EN_GO3_EFFECT_COUNT; i++, dustEffect++) {
        if (dustEffect->type != 1) {
            dustEffect->scale = scale;
            dustEffect->scaleStep = scaleStep;
            dustEffect->initialTimer = dustEffect->timer = initialTimer;
            dustEffect->type = 1;
            dustEffect->pos = *pos;
            dustEffect->accel = *accel;
            dustEffect->velocity = *velocity;
            break;
        }
    }
}

void EnGo3_UpdateEffects(EnGo3* this) {
    EnGoEffect* dustEffect = this->effects;
    f32 randomNumber;
    s16 i;

    for (i=0; i<EN_GO3_EFFECT_COUNT; i++, dustEffect++) {
        if (dustEffect->type) {
            dustEffect->timer--;
            if (dustEffect->timer == 0) {
                dustEffect->type = 0;
            }
            dustEffect->accel.x = (Rand_ZeroOne() * 0.4f) - 0.2f;
            randomNumber = Rand_ZeroOne() * 0.4f;
            dustEffect->accel.z = randomNumber - 0.2f;
            dustEffect->pos.x += dustEffect->velocity.x;
            dustEffect->pos.y += dustEffect->velocity.y;
            dustEffect->pos.z += dustEffect->velocity.z;
            dustEffect->velocity.x += dustEffect->accel.x;
            dustEffect->velocity.y += dustEffect->accel.y;
            dustEffect->velocity.z += randomNumber - 0.2f;
            dustEffect->scale += dustEffect->scaleStep;
        }
    }
}

void EnGo3_DrawEffects(EnGo3* this, PlayState* play) {
    EnGoEffect* dustEffect = this->effects;
    s16 alpha;
    s16 materialFlag;
    s16 index;
    s16 i;

    OPEN_DISPS(play->state.gfxCtx, "../z_en_go3_eff.c", 111);

    materialFlag = false;
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);

    for (i=0; i<EN_GO3_EFFECT_COUNT; i++, dustEffect++) {
        if (dustEffect->type == 0)
            continue;

        if (!materialFlag) {
            POLY_XLU_DISP = Gfx_SetupDL(POLY_XLU_DISP, SETUPDL_0);
            gSPDisplayList(POLY_XLU_DISP++, gGoronDL_00FD40);
            gDPSetEnvColor(POLY_XLU_DISP++, 100, 60, 20, 0);
            materialFlag = true;
        }

        alpha = dustEffect->timer * (255.0f / dustEffect->initialTimer);
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 170, 130, 90, alpha);
        gDPPipeSync(POLY_XLU_DISP++);
        Matrix_Translate(dustEffect->pos.x, dustEffect->pos.y, dustEffect->pos.z, MTXMODE_NEW);
        Matrix_ReplaceRotation(&play->billboardMtxF);
        Matrix_Scale(dustEffect->scale, dustEffect->scale, 1.0f, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, "../z_en_go3_eff.c", 137);
        index = dustEffect->timer * (8.0f / dustEffect->initialTimer);
        gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sDustTex[index]));
        gSPDisplayList(POLY_XLU_DISP++, gGoronDL_00FD50);
    }

    CLOSE_DISPS(play->state.gfxCtx, "../z_en_go3_eff.c", 151);
}

s32 EnGo3_SpawnDust(EnGo3* this, u8 initialTimer, f32 scale, f32 scaleStep, s32 numDustEffects, f32 radius, f32 yAccel) {
    Vec3f pos = sPos;
    Vec3f velocity = sVelocity;
    Vec3f accel = sAccel;
    s32 i;
    s16 angle;

    pos = this->actor.world.pos; // overwrites sPos data
    pos.y = this->actor.floorHeight;
    angle = (Rand_ZeroOne() - 0.5f) * 0x10000;
    i = numDustEffects;
    while (i >= 0) {
        accel.y += Rand_ZeroOne() * yAccel;
        pos.x = (Math_SinS(angle) * radius) + this->actor.world.pos.x;
        pos.z = (Math_CosS(angle) * radius) + this->actor.world.pos.z;
        EnGo3_SpawnEffectDust(this, &pos, &velocity, &accel, initialTimer, scale, scaleStep);
        angle += (s16)(0x10000 / numDustEffects);
        i--;
    }
    return 0;
}

void EnGo3_GetItem(EnGo3* this, PlayState* play, s32 getItemId) {
    this->getItemId = getItemId;
    Actor_OfferGetItem(&this->actor, play, getItemId, this->actor.xzDistToPlayer + 1.0f, fabsf(this->actor.yDistToPlayer) + 1.0f);
}

s32 EnGo3_GetDialogState(EnGo3* this, PlayState* play) {
    s16 dialogState = Message_GetState(&play->msgCtx);

    if (this->dialogState == TEXT_STATE_AWAITING_NEXT || this->dialogState == TEXT_STATE_EVENT || this->dialogState == TEXT_STATE_CLOSING || this->dialogState == TEXT_STATE_DONE_HAS_NEXT)
        if (dialogState != this->dialogState)
            this->unk_20C++;

    this->dialogState = dialogState;
    return dialogState;
}

u16 EnGo3_GetTextIdGoronShrineGeneric(PlayState* play, EnGo3* this) {
    if (GET_EVENTCHKINF(EVENTCHKINF_CLEANSED_GORON_MINES))
        return 0x8430 + this->textType;
    return 0x8430 + this->textType;
}

u16 EnGo3_GetTextIdGoronVillageDoor(PlayState* play, EnGo3* this) {
    if (GET_INFTABLE(INFTABLE_GORON_SHRINE_DOOR_OPENED))
        return 0x8401;
    return 0x8400;
}

s16 EnGo3_UpdateTalkStateGoronVillageDoor(PlayState* play, EnGo3* this) {
    if (Message_GetState(&play->msgCtx) == TEXT_STATE_CLOSING) {
        if (this->actor.textId == 0x8400)
            SET_INFTABLE(INFTABLE_GORON_SHRINE_DOOR_OPENED);
        return NPC_TALK_STATE_IDLE;
    }
    else return NPC_TALK_STATE_TALKING;
}

u16 EnGo3_GetTextId(PlayState* play, Actor* thisx) {
    EnGo3* this = (EnGo3*)thisx;
    u16 textId = MaskReaction_GetTextId(play, MASK_REACTION_SET_GORON);

    if (textId != 0)
        return textId;
    else {
        switch (this->type) {
            case GORON_GENERIC:
                return EnGo3_GetTextIdGoronShrineGeneric(play, this);
            case GORON_VILLAGE_DOOR:
                return EnGo3_GetTextIdGoronVillageDoor(play, this);
        }
    }
    return textId;
}

s16 EnGo3_UpdateTalkState(PlayState* play, Actor* thisx) {
    EnGo3* this = (EnGo3*)thisx;
    switch (this->type) {
        case GORON_GENERIC:
            if (Message_GetState(&play->msgCtx) == TEXT_STATE_CLOSING)
                return NPC_TALK_STATE_IDLE;
            return NPC_TALK_STATE_TALKING;
        case GORON_VILLAGE_DOOR:
            return EnGo3_UpdateTalkStateGoronVillageDoor(play, this);
    }
    return false;
}

void func_80A44790_3(EnGo3* this, PlayState* play) {
    Npc_UpdateTalking(play, &this->actor, &this->interactInfo.talkState, this->interactRange, EnGo3_GetTextId, EnGo3_UpdateTalkState);
    /*else {
        if (Actor_TalkOfferAccepted(&this->actor, play))
            this->interactInfo.talkState = NPC_TALK_STATE_TALKING;
        else if (this->interactInfo.talkState != NPC_TALK_STATE_IDLE)
            this->interactInfo.talkState = EnGo3_UpdateTalkState(play, &this->actor);
        else if (Actor_OfferTalk(&this->actor, play, this->interactRange))
            this->actor.textId = EnGo3_GetTextId(play, &this->actor);
    }*/
}

void EnGo3_SetColliderDim(EnGo3* this) {
    this->collider.dim.radius = D_80A4816C[this->type].radius;
    this->collider.dim.height = D_80A4816C[this->type].height;
}

void EnGo3_SetShape(EnGo3* this) {
    this->actor.shape.shadowScale = D_80A481F8[this->type].shape_unk_10;
    Actor_SetScale(&this->actor, D_80A481F8[this->type].scale);
    this->actor.attentionRangeType = D_80A481F8[this->type].actor_unk_1F;
    this->interactRange = D_80A481F8[this->type].interactRange;
    this->interactRange += this->collider.dim.radius;
}

void EnGo3_CheckCollision(EnGo3* this, PlayState* play) {
    Vec3s pos;
    f32 xzDist;

    pos.x = this->actor.world.pos.x;
    pos.y = this->actor.world.pos.y;
    pos.z = this->actor.world.pos.z;
    xzDist = D_80A4816C[this->type].xzDist;
    pos.x += (s16)(xzDist * Math_SinS(this->actor.shape.rot.y));
    pos.z += (s16)(xzDist * Math_CosS(this->actor.shape.rot.y));
    pos.y += D_80A4816C[this->type].yDist;
    this->collider.dim.pos = pos;
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void EnGo3_SwapInitialFrameAnimFrameCount(EnGo3* this) {
    f32 initialFrame;

    initialFrame = this->skelAnime.startFrame;
    this->skelAnime.startFrame = this->skelAnime.endFrame;
    this->skelAnime.endFrame = initialFrame;
}

s32 EnGo3_IsWakingUp(EnGo3* this) {
    s16 yawDiff = (f32)this->actor.yawTowardsPlayer - (f32)this->actor.shape.rot.y;
    return (this->actor.xyzDistToPlayerSq <= SQ(200.0f) && fabsf(this->actor.yDistToPlayer) < 60.0f && ABS(yawDiff) < 0x2AA8);
}

void func_80A45288_3(EnGo3* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    this->interactInfo.trackPos = player->actor.world.pos;
    this->interactInfo.yOffset = sPlayerTrackingYOffsets[LINK_IS_CHILD ? 0 : 1][this->type][((void)0, gSaveContext.save.linkAge)];
    Npc_TrackPoint(&this->actor, &this->interactInfo, 4, this->trackingMode);
    
    if (this->actionFunc != EnGo3_SetGetItem && this->isAwake == true)
        func_80A44790_3(this, play);
}

void func_80A45360_3(EnGo3* this, f32* alpha) {
    f32 alphaTarget = (this->skelAnime.animation == &gGoronAnim_004930 && this->skelAnime.curFrame <= 32.0f) ? 0.0f : 255.0f;

    Math_ApproachF(alpha, alphaTarget, 0.4f, 100.0f);
    this->actor.shape.shadowAlpha = (u8)(u32)*alpha;
}

void func_80A454CC_3(EnGo3* this) {
    switch (this->type) {
        case GORON_VILLAGE_DOOR:
            Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, EnGo3_ANIM_9);
            break;
        default:
            this->skelAnime.playSpeed = 0.0f;
            break;
    }
}

void EnGo3_DefaultWakingUp(EnGo3* this) {
    if (EnGo3_IsWakingUp(this))
        this->trackingMode = NPC_TRACKING_HEAD_AND_TORSO;
    else this->trackingMode = NPC_TRACKING_NONE;

    if (this->interactInfo.talkState != NPC_TALK_STATE_IDLE)
        this->trackingMode = NPC_TRACKING_FULL_BODY;

    this->isAwake = true;
}

void EnGo3_WakingUp(EnGo3* this) {
    this->trackingMode = NPC_TRACKING_NONE;
    if (this->actor.xyzDistToPlayerSq <= SQ(200.0f) || this->interactInfo.talkState != NPC_TALK_STATE_IDLE)
        this->trackingMode = NPC_TRACKING_FULL_BODY;

    this->isAwake = true;
}

void EnGo3_SelectGoronWakingUp(EnGo3* this) {
    switch (this->type) {
        default:
            EnGo3_DefaultWakingUp(this);
            break;
    }
}

void EnGo3_EyeMouthTexState(EnGo3* this) {
    switch (this->eyeMouthTexState) {
        case 1:
            this->blinkTimer = 0;
            this->eyeTexIndex = 0;
            this->mouthTexIndex = 0;
            break;
        case 2:
            this->blinkTimer = 0;
            this->eyeTexIndex = 1;
            this->mouthTexIndex = 0;
            break;
        // case 3 only when biggoron is given eyedrops. Biggoron smiles. (only use of second mouth texture)
        case 3:
            this->blinkTimer = 0;
            this->eyeTexIndex = 0;
            this->mouthTexIndex = 1;
            break;
        default:
            if (DECR(this->blinkTimer) == 0) {
                this->eyeTexIndex++;
                if (this->eyeTexIndex >= 4) {
                    this->blinkTimer = Rand_S16Offset(30, 30);
                    this->eyeTexIndex = 1;
                }
            }
    }
}

void EnGo3_SitDownAnimation(EnGo3* this) {
    if ((this->skelAnime.playSpeed != 0.0f) && (this->skelAnime.animation == &gGoronAnim_004930)) {
        if (this->skelAnime.playSpeed > 0.0f && this->skelAnime.curFrame == 14.0f)
            Actor_PlaySfx(&this->actor, NA_SE_EN_GOLON_SIT_DOWN);
        if (this->skelAnime.playSpeed < 0.0f) {
            if (this->skelAnime.curFrame == 1.0f)
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_M_GND);
            if (this->skelAnime.curFrame == 40.0f)
                Actor_PlaySfx(&this->actor, NA_SE_EN_GOLON_SIT_DOWN);
        }
    }
}

void EnGo3_GetDustData(EnGo3* this, s32 index2) {
    EnGo3DustEffectData* dustEffectData = &sDustEffectData[0][index2];
    EnGo3_SpawnDust(this, dustEffectData->initialTimer, dustEffectData->scale, dustEffectData->scaleStep, dustEffectData->numDustEffects, dustEffectData->radius, dustEffectData->yAccel);
}


void EnGo3_WakeUp(EnGo3* this, PlayState* play) {
    if (this->skelAnime.playSpeed == 0.0f)
        Actor_PlaySfx(&this->actor, NA_SE_EN_GOLON_WAKE_UP);

    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, EnGo3_ANIM_1);
    this->skelAnime.playSpeed = 1.0f;

    this->actionFunc = func_80A46B40_3;
}

void EnGo3_GetItemAnimation(EnGo3* this, PlayState* play) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, EnGo3_ANIM_1);
    this->unk_211 = true;
    this->actionFunc = func_80A46B40_3;
    this->skelAnime.playSpeed = 0.0f;
    this->actor.speed = 0.0f;
    this->skelAnime.curFrame = this->skelAnime.endFrame;
}

void EnGo3_Init(Actor* thisx, PlayState* play) {
    EnGo3* this = (EnGo3*)thisx;

    this->type = this->actor.params & 0xF;
    this->textType = (this->actor.params >> 4) & 0xF;

    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 28.0f);
    SkelAnime_InitFlex(play, &this->skelAnime, &gGoronSkel, NULL, this->jointTable, this->morphTable, 18);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &sColChkInfoInit);

    this->actionFunc = EnGo3_CurledUp;

    EnGo3_SetColliderDim(this);
    EnGo3_SetShape(this);
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, EnGo3_ANIM_0);
    this->actor.gravity = -1.0f;
    this->alpha = this->actor.shape.shadowAlpha = 0;
    this->reverse = 0;
    this->isAwake = false;
    this->unk_211 = false;
    this->goronState = 0;
    this->trackingMode = NPC_TRACKING_NONE;
}

void EnGo3_Destroy(Actor* thisx, PlayState* play) { }

void EnGo3_RollingAnimation(EnGo3* this, PlayState* play) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, EnGo3_ANIM_1);
    this->skelAnime.playSpeed = -1.0f;
    EnGo3_SwapInitialFrameAnimFrameCount(this);
    this->trackingMode = NPC_TRACKING_NONE;
    this->unk_211 = false;
    this->isAwake = false;
    this->actionFunc = EnGo3_CurledUp;
}

void EnGo3_CurledUp(EnGo3* this, PlayState* play) {
    s16 height;
    s32 quakeIndex;

    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
        EnGo3_GetDustData(this, 1);
        this->skelAnime.playSpeed = 0.0f;
    }

    if ((s32)this->skelAnime.curFrame == 0)
        this->collider.dim.height = (D_80A4816C[this->type].height * 0.6f);
    else {
        height = D_80A4816C[this->type].height;
        this->collider.dim.height = (D_80A4816C[this->type].height * 0.4f * (this->skelAnime.curFrame / this->skelAnime.startFrame)) + (height * 0.6f);
    }
    
    if (EnGo3_IsWakingUp(this))
        EnGo3_WakeUp(this, play);
}

void func_80A46B40_3(EnGo3* this, PlayState* play) {
    if (this->unk_211 == true) {
        EnGo3_SelectGoronWakingUp(this);
    } else {
        if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
            func_80A454CC_3(this);
            this->unk_211 = true;
            this->collider.dim.height = D_80A4816C[this->type].height;
        } else {
            f32 height = D_80A4816C[this->type].height;
            this->collider.dim.height = (s16)((height * 0.4f * (this->skelAnime.curFrame / this->skelAnime.endFrame)) + (height * 0.6f));
        }
    }

    if (!EnGo3_IsWakingUp(this))
        EnGo3_RollingAnimation(this, play);
}

void EnGo3_SetupGetItem(EnGo3* this, PlayState* play) {
    if (Actor_HasParent(&this->actor, play)) {
        this->actor.parent = NULL;
        this->actionFunc = EnGo3_SetGetItem;
    } else Actor_OfferGetItem(&this->actor, play, this->getItemId, this->actor.xzDistToPlayer + 1.0f,fabsf(this->actor.yDistToPlayer) + 1.0f);
}

void EnGo3_SetGetItem(EnGo3* this, PlayState* play) {
    if ((Message_GetState(&play->msgCtx) == TEXT_STATE_DONE) && Message_ShouldAdvance(play)) {
        this->interactInfo.talkState = NPC_TALK_STATE_IDLE;
        switch (this->getItemId) {
            case GI_CLAIM_CHECK:
                Environment_ClearBgsDayCount();
                EnGo3_GetItemAnimation(this, play);
                return;
            case GI_TUNIC_GORON:
                SET_INFTABLE(INFTABLE_109);
                EnGo3_GetItemAnimation(this, play);
                return;
            case GI_SWORD_BIGGORON:
            case GI_SWORD_GILDED:
                gSaveContext.save.info.playerData.bgsFlag = true;
                break;
            case GI_BOMB_BAG_30:
            case GI_BOMB_BAG_40:
                EnGo3_RollingAnimation(this, play);
                return;
        }
        this->actionFunc = func_80A46B40_3;
    }
}

void EnGo3_Update(Actor* thisx, PlayState* play) {
    EnGo3* this = (EnGo3*)thisx;

    func_80A45360_3(this, &this->alpha);
    EnGo3_SitDownAnimation(this);
    SkelAnime_Update(&this->skelAnime);
    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.height * 0.5f, this->collider.dim.radius * 0.6f, 0.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    this->actionFunc(this, play);
    if (this->unk_211 == true)
        Actor_UpdateFidgetTables(play, this->fidgetTableY, this->fidgetTableZ, 18);
    func_80A45288_3(this, play);
    EnGo3_EyeMouthTexState(this);
    EnGo3_CheckCollision(this, play);
}

s32 EnGo3_DrawCurledUp(EnGo3* this, PlayState* play) {
    Vec3f D_80A48554 = { 0.0f, 0.0f, 0.0f };

    OPEN_DISPS(play->state.gfxCtx, "../z_en_go3.c", 2881);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_en_go3.c", 2884);
    gSPDisplayList(POLY_OPA_DISP++, gGoronDL_00BD80);
    CLOSE_DISPS(play->state.gfxCtx, "../z_en_go3.c", 2889);
    Matrix_MultVec3f(&D_80A48554, &this->actor.focus.pos);

    return 1;
}

s32 EnGo3_OverrideLimbDraw(PlayState* play, s32 limb, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnGo3* this = (EnGo3*)thisx;
    Vec3s limbRot;

    if (limb == 17) {
        Matrix_Translate(2800.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        limbRot = this->interactInfo.headRot;
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateZ(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
        Matrix_Translate(-2800.0f, 0.0f, 0.0f, MTXMODE_APPLY);
    }
    if (limb == 10) {
        limbRot = this->interactInfo.torsoRot;
        Matrix_RotateY(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
    }
    if ((limb == 10) || (limb == 11) || (limb == 14)) {
        rot->y += Math_SinS(this->fidgetTableY[limb]) * FIDGET_AMPLITUDE;
        rot->z += Math_CosS(this->fidgetTableZ[limb]) * FIDGET_AMPLITUDE;
    }
    return 0;
}

void EnGo3_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnGo3* this = (EnGo3*)thisx;
    Vec3f D_80A4856C = { 600.0f, 0.0f, 0.0f };

    if (limbIndex == 17)
        Matrix_MultVec3f(&D_80A4856C, &this->actor.focus.pos);
}

void EnGo3_Draw(Actor* thisx, PlayState* play) {
    EnGo3* this = (EnGo3*)thisx;
    void* eyeTextures[] = { gGoronCsEyeClosed2Tex, gGoronCsEyeOpenTex, gGoronCsEyeHalfTex, gGoronCsEyeClosedTex };
    void* mouthTextures[] = { gGoronCsMouthNeutralTex, gGoronCsMouthSmileTex };

    if (play->sceneId == SCENE_SPRING_LAKE && this->actor.xzDistToPlayer > 1000.0f)
        return;

    EnGo3_UpdateEffects(this);
    Matrix_Push();
    EnGo3_DrawEffects(this, play);
    Matrix_Pop();

    if (this->actionFunc == EnGo3_CurledUp && this->skelAnime.playSpeed == 0.0f && this->skelAnime.curFrame == 0.0f)
        EnGo3_DrawCurledUp(this, play);
    else {
        OPEN_DISPS(play->state.gfxCtx, "../z_en_go3.c", 3063);
        Gfx_SetupDL_25Opa(play->state.gfxCtx);

        gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[this->eyeTexIndex]));
        gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(mouthTextures[this->mouthTexIndex]));

        SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnGo3_OverrideLimbDraw, EnGo3_PostLimbDraw, this);
        CLOSE_DISPS(play->state.gfxCtx, "../z_en_go3.c", 3081);
    }
}
