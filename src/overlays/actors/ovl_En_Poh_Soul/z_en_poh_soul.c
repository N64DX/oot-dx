/*
 * File: z_en_poh_soul.c
 * Overlay: ovl_En_Poh_Soul
 * Description: Lost Soul
 */

#include "z_en_poh_soul.h"

#include "array_count.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "light.h"
#include "message.h"
#include "play_state.h"
#include "sys_matrix.h"
#include "z_lib.h"

#include "assets/objects/object_poh/object_poh.h"
#include "assets/objects/object_po_composer/object_po_composer.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY)

void EnPohSoul_Init(Actor* thisx, PlayState* play);
void EnPohSoul_Destroy(Actor* thisx, PlayState* play);
void EnPohSoul_Update(Actor* thisx, PlayState* play);
void EnPohSoul_DrawSoul(Actor* thisx, PlayState* play);

void EnPohSoul_UpdateMain(Actor* thisx, PlayState* play);
void EnPohSoul_Idle(EnPohSoul* this, PlayState* play);
void EnPohSoul_Talk(EnPohSoul* this, PlayState* play);

ActorProfile En_Poh_Soul_Profile = {
    /**/ ACTOR_EN_POH_SOUL,
    /**/ ACTORCAT_NPC,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnPohSoul),
    /**/ EnPohSoul_Init,
    /**/ EnPohSoul_Destroy,
    /**/ EnPohSoul_Update,
    /**/ NULL,
};

static EnPohSoulNpcInfo sSoulInfo[] = {
    { { 255, 170, 255 }, { 100, 0, 150 }, -8, OBJECT_POH, gPoeSoulDL }, // Purple Poe soul (OBJECT_POH)
    { { 255, 255, 170 }, { 0, 150, 0 }, -12, OBJECT_PO_COMPOSER, gPoeComposerSoulDL }, // Green composer soul (OBJECT_PO_COMPOSER)
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(lockOnArrowOffset, 3200, ICHAIN_STOP),
};

void EnPohSoul_Init(Actor* thisx, PlayState* play) {
    EnPohSoul* this = (EnPohSoul*)thisx;

    EnPohSoulNpcInfo* info;
    u8 colorIdx;

    Actor_ProcessInitChain(&this->actor, sInitChain);

    colorIdx = EN_POH_SOUL_COLOR(this->actor.params);
    if (colorIdx >= ARRAY_COUNT(sSoulInfo))
        colorIdx = ARRAY_COUNT(sSoulInfo) - 1;
    this->infoIdx = colorIdx;
    info = &sSoulInfo[this->infoIdx];

    this->textId = 0x8520 + EN_POH_SOUL_TEXT_OFFSET(this->actor.params);
    this->actor.textId = this->textId;

    this->bobPhase = 0;
    this->scrollTimer = 0;

    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    Actor_SetFocus(&this->actor, -20.0f);

    this->lightNode = LightContext_InsertLight(play, &play->lightCtx, &this->lightInfo);
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, info->lightColor.r, info->lightColor.g, info->lightColor.b, 200);

    this->requiredObjectSlot = Object_GetSlot(&play->objectCtx, info->objectId);
    if (this->requiredObjectSlot < 0) {
        Actor_Kill(&this->actor);
        return;
    }

    this->actionFunc = EnPohSoul_Idle;
}

void EnPohSoul_Destroy(Actor* thisx, PlayState* play) {
    EnPohSoul* this = (EnPohSoul*)thisx;

    LightContext_RemoveLight(play, &play->lightCtx, this->lightNode);
}

void EnPohSoul_Idle(EnPohSoul* this, PlayState* play) {
    if (Actor_TalkOfferAccepted(&this->actor, play)) {
        Message_StartTextbox(play, this->textId, &this->actor);
        this->actionFunc = EnPohSoul_Talk;
    } else Actor_OfferTalk(&this->actor, play, 120.0f);
}

void EnPohSoul_Talk(EnPohSoul* this, PlayState* play) {
    if (Actor_TextboxIsClosing(&this->actor, play))
        this->actionFunc = EnPohSoul_Idle;
}

void EnPohSoul_Update(Actor* thisx, PlayState* play) {
    EnPohSoul* this = (EnPohSoul*)thisx;

    if (Object_IsLoaded(&play->objectCtx, this->requiredObjectSlot)) {
        this->actor.objectSlot = this->requiredObjectSlot;
        Actor_SetObjectDependency(play, &this->actor);
        this->actor.update = EnPohSoul_UpdateMain;
        this->actor.draw = EnPohSoul_DrawSoul;
    }
}

void EnPohSoul_UpdateMain(Actor* thisx, PlayState* play) {
    EnPohSoul* this = (EnPohSoul*)thisx;

    EnPohSoulNpcInfo* info = &sSoulInfo[this->infoIdx];

    this->bobPhase++;
    this->actor.world.pos.y = this->actor.home.pos.y + 50.0f + Math_SinS(this->bobPhase * 0x800) * 5.0f;
    this->scrollTimer++;
    this->actor.shape.rot.y = this->actor.home.rot.y;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, info->lightColor.r, info->lightColor.g, info->lightColor.b, 200);
    Actor_SetFocus(&this->actor, -20.0f);

    this->actionFunc(this, play);
}

void EnPohSoul_DrawSoul(Actor* thisx, PlayState* play) {
    EnPohSoul* this = (EnPohSoul*)thisx;

    EnPohSoulNpcInfo* info = &sSoulInfo[this->infoIdx];

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, 0, 0, 0x20, 0x40, 1, 0, (this->scrollTimer * info->scrollSpeed) % 512U, 0x20, 0x80));
    gDPSetPrimColor(POLY_XLU_DISP++, 0x80, 0x80, info->primColor.r, info->primColor.g, info->primColor.b, 255);
    gDPSetEnvColor(POLY_XLU_DISP++, info->lightColor.r, info->lightColor.g, info->lightColor.b, 255);
    Matrix_RotateY((s16)(Camera_GetCamDirYaw(GET_ACTIVE_CAM(play)) + 0x8000) * 9.58738e-05f,  MTXMODE_APPLY);
    MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
    gSPDisplayList(POLY_XLU_DISP++, info->soulDisplayList);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
