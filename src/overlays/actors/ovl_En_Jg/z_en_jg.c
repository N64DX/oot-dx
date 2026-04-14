/*
 * File: z_en_jg.c
 * Overlay: ovl_En_Jg
 * Description: Goron Elder
 */

#include "z_en_jg.h"

#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

#define FLAG_SHRINE_GORON_ARMS_RAISED (1 << 0)
#define FLAG_LOOKING_AT_PLAYER (1 << 2)

void EnJg_Init(Actor* thisx, struct PlayState* play);
void EnJg_Destroy(Actor* thisx, struct PlayState* play);
void EnJg_Update(Actor* thisx, struct PlayState* play);
void EnJg_Draw(Actor* thisx, struct PlayState* play);

ActorProfile En_Jg_Profile = {
    /**/ ACTOR_EN_JG,
    /**/ ACTORCAT_NPC,
    /**/ FLAGS,
    /**/ OBJECT_JG,
    /**/ sizeof(EnJg),
    /**/ EnJg_Init,
    /**/ EnJg_Destroy,
    /**/ EnJg_Update,
    /**/ EnJg_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xF7CFFFFF, 0x00, 0x00 },
        ATELEM_NONE | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 60, 80, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInfoInit = { 0, 50, 80, 0, MASS_IMMOVABLE };
static EnJgDataStruct2 D_80A481F8[] = { 28.0f, 0.01f, 7, 40.0f };

typedef enum EnJgAnimation {
    /*  0 */ EN_JG_ANIM_IDLE,
    /*  1 */ EN_JG_ANIM_WALK,
    /*  2 */ EN_JG_ANIM_WAVING,
    /*  3 */ EN_JG_ANIM_SHAKING_HEAD,
    /*  4 */ EN_JG_ANIM_SURPRISE_START,
    /*  5 */ EN_JG_ANIM_SURPRISE_LOOP,
    /*  6 */ EN_JG_ANIM_ANGRY,
    /*  7 */ EN_JG_ANIM_FROZEN_START,
    /*  8 */ EN_JG_ANIM_FROZEN_LOOP,
    /*  9 */ EN_JG_ANIM_WALK_2,
    /* 10 */ EN_JG_ANIM_TAKING_OUT_DRUM,
    /* 11 */ EN_JG_ANIM_DRUM_IDLE,
    /* 12 */ EN_JG_ANIM_PLAYING_DRUM,
    /* 13 */ EN_JG_ANIM_THINKING,
    /* 14 */ EN_JG_ANIM_REMEMBERING,
    /* 15 */ EN_JG_ANIM_STRONG_REMEMBERING,
    /* 16 */ EN_JG_ANIM_DEPRESSED,
    /* 17 */ EN_JG_ANIM_CUTSCENE_IDLE,
    /* 18 */ EN_JG_ANIM_CRADLE,
    /* 19 */ EN_JG_ANIM_MAX
} EnJgAnimation;

static AnimationInfo sAnimationInfo[EN_JG_ANIM_MAX] = {
    { &gGoronElderIdleAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },            // EN_JG_ANIM_IDLE
    { &gGoronElderWalkAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },            // EN_JG_ANIM_WALK
    { &gGoronElderWavingAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },          // EN_JG_ANIM_WAVING
    { &gGoronElderHeadShakeAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },       // EN_JG_ANIM_SHAKING_HEAD
    { &gGoronElderSurpriseStartAnim, 1.0f, 0, -1, ANIMMODE_ONCE, -10 },   // EN_JG_ANIM_SURPRISE_START
    { &gGoronElderSurpriseLoopAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },    // EN_JG_ANIM_SURPRISE_LOOP
    { &gGoronElderAngryAnim, 1.0f, 0, -1, ANIMMODE_LOOP, -10 },           // EN_JG_ANIM_ANGRY
    { &gGoronElderSurpriseStartAnim, 2.0f, 0, -1, ANIMMODE_ONCE, 0 },     // EN_JG_ANIM_FROZEN_START
    { &gGoronElderSurpriseStartAnim, -2.0f, 0, -1, ANIMMODE_ONCE, 0 },    // EN_JG_ANIM_FROZEN_LOOP
    { &gGoronElderWalkAnim, -1.0f, 0, -1, ANIMMODE_LOOP, -10 },           // EN_JG_ANIM_WALK_2
    { &gGoronElderTakeOutDrumAnim, 1.0f, 0, -1, ANIMMODE_ONCE, 0 },       // EN_JG_ANIM_TAKING_OUT_DRUM
    { &gGoronElderDrumIdleAnim, 1.0f, 0, -1, ANIMMODE_LOOP, 0 },          // EN_JG_ANIM_DRUM_IDLE
    { &gGoronElderPlayingDrumAnim, 1.0f, 1, 44, ANIMMODE_ONCE, 0 },       // EN_JG_ANIM_PLAYING_DRUM
    { &gGoronElderThinkingAnim, 1.0f, 0, -1, ANIMMODE_LOOP, 0 },          // EN_JG_ANIM_THINKING
    { &gGoronElderRememberingAnim, 1.0f, 0, -1, ANIMMODE_ONCE, 0 },       // EN_JG_ANIM_REMEMBERING
    { &gGoronElderStrongRememberingAnim, 1.0f, 0, -1, ANIMMODE_ONCE, 0 }, // EN_JG_ANIM_STRONG_REMEMBERING
    { &gGoronElderDepressedAnim, 1.0f, 0, -1, ANIMMODE_LOOP, 0 },         // EN_JG_ANIM_DEPRESSED
    { &gGoronElderIdleAnim, 1.0f, 0, -1, ANIMMODE_LOOP, 0 },              // EN_JG_ANIM_CUTSCENE_IDLE
    { &gGoronElderCradleAnim, 1.0f, 0, -1, ANIMMODE_LOOP, 0 },            // EN_JG_ANIM_CRADLE
};

static Vec3f sFocusOffset = { 0.0f, 0.0f, 0.0f };
static Vec3f sBreathPosOffset = { 1000.0f, -500.0f, 0.0f };
static Vec3f sBreathVelOffset = { 0.0f, 0.0f, 0.75f };
static Vec3f sBreathAccelOffset = { 0.0f, 0.0f, -0.070000000298f };

void EnJg_UpdateCollision(EnJg* this, PlayState* play) {
    this->collider.dim.pos.x = this->actor.world.pos.x;
    this->collider.dim.pos.y = this->actor.world.pos.y;
    this->collider.dim.pos.z = this->actor.world.pos.z;

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    Actor_UpdateBgCheckInfo(play, &this->actor, 0.0f, 30.0f, 30.0f, UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_4);
}

u16 EnJg_GetTextId(PlayState* play, Actor* thisx) {
    return 0x8405;
}

s16 EnJg_UpdateTalkState(PlayState* play, Actor* thisx) {
    EnJg* this = (EnJg*)thisx;
    if (Message_GetState(&play->msgCtx) == TEXT_STATE_CLOSING)
        return NPC_TALK_STATE_IDLE;
    return NPC_TALK_STATE_TALKING;
}

void EnJg_SetShape(EnJg* this) {
    this->actor.shape.shadowScale = D_80A481F8->shape_unk_10;
    Actor_SetScale(&this->actor, D_80A481F8->scale);
    this->actor.attentionRangeType = D_80A481F8->actor_unk_1F;
    this->interactRange = D_80A481F8->interactRange + this->collider.dim.radius;
}

void EnJg_Init(Actor* thisx, PlayState* play) {
    EnJg* this = (EnJg*)thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 20.0f);
    SkelAnime_InitFlex(play, &this->skelAnime, &gGoronElderSkel, &gGoronElderIdleAnim, this->jointTable, this->morphTable, GORON_ELDER_LIMB_MAX);

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);

    Actor_SetScale(&this->actor, 0.01f);
    EnJg_SetShape(this);

    this->animIndex = EN_JG_ANIM_IDLE;
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, this->animIndex);
}

void EnJg_Destroy(Actor* thisx, PlayState* play) {
    EnJg* this = (EnJg*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void EnJg_Update(Actor* thisx, PlayState* play) {
    EnJg* this = (EnJg*)thisx;
    Player* player = GET_PLAYER(play);

    EnJg_UpdateCollision(this, play);
    Actor_MoveXZGravity(&this->actor);
    SkelAnime_Update(&this->skelAnime);

    this->interactInfo.trackPos = player->actor.world.pos;
    this->interactInfo.yOffset = 0.0f;
    Npc_TrackPoint(&this->actor, &this->interactInfo, 4, this->trackingMode);
    Npc_UpdateTalking(play, &this->actor, &this->interactInfo.talkState, this->interactRange, EnJg_GetTextId, EnJg_UpdateTalkState);
}

s32 EnJg_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnJg* this = (EnJg*)thisx;
    Vec3s limbRot;

    if (limbIndex == GORON_ELDER_LIMB_ROOT) {
        limbRot = this->interactInfo.torsoRot;
        Matrix_RotateY(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
    }

    return false;
}

void EnJg_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnJg* this = (EnJg*)thisx;

    if (limbIndex == GORON_ELDER_LIMB_HEAD)
        Matrix_MultVec3f(&sFocusOffset, &this->actor.focus.pos);

    if (limbIndex == GORON_ELDER_LIMB_LOWER_LIP) {
        Matrix_MultVec3f(&sBreathPosOffset, &this->breathPos);
        Matrix_RotateY(this->actor.shape.rot.y, MTXMODE_NEW);
        Matrix_MultVec3f(&sBreathVelOffset, &this->breathVelocity);
        Matrix_MultVec3f(&sBreathAccelOffset, &this->breathAccel);
    }
}

void EnJg_Draw(Actor* thisx, PlayState* play) {
    EnJg* this = (EnJg*)thisx;

    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnJg_OverrideLimbDraw, EnJg_PostLimbDraw, &this->actor);
}
