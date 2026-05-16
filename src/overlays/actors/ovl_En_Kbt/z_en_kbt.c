/*
 * File: z_en_kbt.c
 * Overlay: ovl_En_Kbt
 * Description: Zubora
 */

#include "z_en_kbt.h"

#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "segmented_address.h"
#include "play_state.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnKbt_Init(Actor* thisx, struct PlayState* play);
void EnKbt_Destroy(Actor* thisx, struct PlayState* play);
void EnKbt_Update(Actor* thisx, struct PlayState* play);
void EnKbt_Draw(Actor* thisx, struct PlayState* play);

ActorProfile En_Kbt_Profile = {
    /**/ ACTOR_EN_KBT,
    /**/ ACTORCAT_NPC,
    /**/ FLAGS,
    /**/ OBJECT_KBT,
    /**/ sizeof(EnKbt),
    /**/ EnKbt_Init,
    /**/ EnKbt_Destroy,
    /**/ EnKbt_Update,
    /**/ EnKbt_Draw,
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
    { 30, 40, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInfoInit = { 0, 50, 80, 0, MASS_IMMOVABLE };
static EnKbtDataStruct2 D_80A481F8[] = { 28.0f, 0.01f, 7, 40.0f };

typedef enum EnKbtAnimation {
    /*  0 */ ENKBT_ANIM_0,
    /*  1 */ ENKBT_ANIM_1,
    /*  2 */ ENKBT_ANIM_2,
    /*  3 */ ENKBT_ANIM_3,
    /*  4 */ ENKBT_ANIM_4,
    /*  5 */ ENKBT_ANIM_5,
    /*  6 */ ENKBT_ANIM_6,
    /*  7 */ ENKBT_ANIM_7,
    /*  8 */ ENKBT_ANIM_8,
    /*  9 */ ENKBT_ANIM_9,
    /* 10 */ ENKBT_ANIM_10,
    /* 11 */ ENKBT_ANIM_11,
    /* 12 */ ENKBT_ANIM_12,
    /* 13 */ ENKBT_ANIM_MAX
} EnKbtAnimation;

static AnimationInfo sAnimationInfo[ENKBT_ANIM_MAX] = {
    { &object_kbt_Anim_000670,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_0
    { &object_kbt_Anim_001674,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_1
    { &object_kbt_Anim_002084,  1.0f, 0, -1, ANIMMODE_ONCE,   0 }, // ENKBT_ANIM_2
    { &object_kbt_Anim_000FE8,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_3
    { &object_kbt_Anim_001940,  1.0f, 0, -1, ANIMMODE_ONCE,   0 }, // ENKBT_ANIM_4
    { &object_kbt_Anim_00E7BC,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_5
    { &object_kbt_Anim_00F0C8,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_6
    { &object_kbt_Anim_002710,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_7
    { &object_kbt_Anim_002DE0,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_8
    { &object_kbt_Anim_003414,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_9
    { &object_kbt_Anim_003D24,  1.0f, 0, -1, ANIMMODE_LOOP, -10 }, // ENKBT_ANIM_10
    { &object_kbt_Anim_001BF4,  1.0f, 0, -1, ANIMMODE_ONCE,   0 }, // ENKBT_ANIM_11
    { &object_kbt_Anim_002084, -1.0f, 0, -1, ANIMMODE_ONCE,   0 }, // ENKBT_ANIM_12
};

static Vec3f sFocusOffset = { 0.0f, 0.0f, 0.0f };

void EnKbt_UpdateCollision(EnKbt* this, PlayState* play) {
    this->collider.dim.pos.x = this->actor.world.pos.x;
    this->collider.dim.pos.y = this->actor.world.pos.y;
    this->collider.dim.pos.z = this->actor.world.pos.z;

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    Actor_UpdateBgCheckInfo(play, &this->actor, 0.0f, 30.0f, 30.0f, UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2 | UPDBGCHECKINFO_FLAG_4);
}

u16 EnKbt_GetTextId(PlayState* play, Actor* thisx) {
    if (play->sceneId == SCENE_GORON_MINES)
        return GET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_MINES) ? 0x8311 : 0x8310;
    else return GET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_SMITHY) ? 0x8313 : 0x8312;
}

s16 EnKbt_UpdateTalkState(PlayState* play, Actor* thisx) {
    EnKbt* this = (EnKbt*)thisx;
    
    switch (Message_GetState(&play->msgCtx)) {
        case TEXT_STATE_CLOSING:
            if (this->actor.textId == 0x8310)
                SET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_MINES);
            else if (this->actor.textId == 0x8312) {
                SET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_SMITHY);
                Actor_OfferGetItem(&this->actor, play, GI_PERFECT_BLOCK_UPGRADE, 1000.0f, 1000.0f);
            }
            return NPC_TALK_STATE_IDLE;

        default:
            return NPC_TALK_STATE_TALKING;
    }
}

void EnKbt_SetShape(EnKbt* this) {
    this->actor.shape.shadowScale = D_80A481F8->shape_unk_10;
    Actor_SetScale(&this->actor, D_80A481F8->scale);
    this->actor.attentionRangeType = D_80A481F8->actor_unk_1F;
    this->interactRange = D_80A481F8->interactRange + this->collider.dim.radius;
}

void EnKbt_Init(Actor* thisx, PlayState* play) {
    EnKbt* this = (EnKbt*)thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 20.0f);
    SkelAnime_InitFlex(play, &this->skelAnime, &object_kbt_Skel_00DEE8, &object_kbt_Anim_004274, this->jointTable, this->morphTable, OBJECT_KBT_LIMB_MAX);

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, NULL, &sColChkInfoInit);

    this->switchFlag = this->actor.params & 0xFF;
    Actor_SetScale(&this->actor, 0.01f);
    EnKbt_SetShape(this);

    if (this->switchFlag <= 0x3F) {
        if (GET_EVENTCHKINF(EVENTCHKINF_CLEANSED_GORON_MINES) && GET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_MINES))
            Actor_Kill(&this->actor);
        Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, ENKBT_ANIM_5);
        this->mouthTexIndex = 0;
        if (!Flags_GetSwitch(play, this->switchFlag))
            this->skelAnime.playSpeed = 0.0f;
    } else {
        if (!GET_EVENTCHKINF(EVENTCHKINF_CLEANSED_GORON_MINES) || !GET_INFTABLE(INFTABLE_TALKED_TO_ZUBORA_MINES))
            Actor_Kill(&this->actor);
        Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, ENKBT_ANIM_0);
        this->mouthTexIndex = 1;
    }
}

void EnKbt_Destroy(Actor* thisx, PlayState* play) { }

void EnKbt_Blink(EnKbt* this) {
    if (DECR(this->blinkTimer) == 0) {
        this->eyeTexIndex++;
        if (this->eyeTexIndex >= 3) {
            this->blinkTimer = Rand_S16Offset(30, 30);
            this->eyeTexIndex = 0;
        }
    }
}

void EnKbt_Update(Actor* thisx, PlayState* play) {
    EnKbt* this = (EnKbt*)thisx;
    Player* player = GET_PLAYER(play);

    EnKbt_UpdateCollision(this, play);
    Actor_MoveXZGravity(&this->actor);
    SkelAnime_Update(&this->skelAnime);
    
    if (this->switchFlag > 0x3F || Flags_GetSwitch(play, this->switchFlag)) {
        EnKbt_Blink(this);

        if (this->skelAnime.playSpeed == 0.0f)
            this->skelAnime.playSpeed = 1.0f;

        this->interactInfo.trackPos = player->actor.world.pos;
        this->interactInfo.yOffset = 0.0f;
        Npc_TrackPoint(&this->actor, &this->interactInfo, 4, this->trackingMode);

        Npc_UpdateTalking(play, &this->actor, &this->interactInfo.talkState, this->interactRange, EnKbt_GetTextId, EnKbt_UpdateTalkState);
    }
}

s32 EnKbt_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnKbt* this = (EnKbt*)thisx;
    Vec3s limbRot;

    if (this->switchFlag <= 0x3F && limbIndex == OBJECT_KBT_LIMB_0E)
        *dList = NULL;
    else if (limbIndex == OBJECT_KBT_LIMB_01) {
        Matrix_RotateY(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
    }

    return false;
}

void EnKbt_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnKbt* this = (EnKbt*)thisx;

    if (limbIndex == OBJECT_KBT_LIMB_09)
        Matrix_MultVec3f(&sFocusOffset, &this->actor.focus.pos);
}

void EnKbt_Draw(Actor* thisx, PlayState* play) {
    EnKbt* this = (EnKbt*)thisx;
    
    void* mouthTextures[] = { object_kbt_Tex_00A5B8, object_kbt_Tex_00ADB8 };
    void* eyeTextures[] = { object_kbt_Tex_00BDB8, object_kbt_Tex_00CDB8, object_kbt_Tex_00D5B8, object_kbt_Tex_00B5B8, object_kbt_Tex_00C5B8 };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[this->eyeTexIndex]));
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(mouthTextures[this->mouthTexIndex]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnKbt_OverrideLimbDraw, EnKbt_PostLimbDraw, &this->actor);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
