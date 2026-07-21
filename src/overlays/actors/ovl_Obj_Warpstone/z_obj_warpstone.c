/*
 * File: z_obj_warpstone.c
 * Overlay: ovl_Obj_Warpstone
 * Description: Owl Statue
 */

#include "z_obj_warpstone.h"

#include "z_lib.h"
#include "ichain.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h" 
#include "play_state.h"
#include "save.h"

#include "assets/objects/object_sek/object_sek.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY)

void ObjWarpstone_Init(Actor* thisx, struct PlayState* play);
void ObjWarpstone_Destroy(Actor* thisx, struct PlayState* play);
void ObjWarpstone_Update(Actor* thisx, struct PlayState* play);
void ObjWarpstone_Draw(Actor* thisx, struct PlayState* play);
void ObjWarpstone_SetupAction(ObjWarpstone* this, ObjWarpstoneActionFunc actionFunc);
void ObjWarpstone_ClosedIdle(ObjWarpstone* this, struct PlayState* play);
void ObjWarpstone_BeginOpeningCutscene(ObjWarpstone* this, struct PlayState* play);
void ObjWarpstone_PlayOpeningCutscene(ObjWarpstone* this, struct PlayState* play);
void ObjWarpstone_OpenedIdle(ObjWarpstone* this, struct PlayState* play);

ActorProfile Obj_Warpstone_Profile = {
    /**/ ACTOR_OBJ_WARPSTONE,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_SEK,
    /**/ sizeof(ObjWarpstone),
    /**/ ObjWarpstone_Init,
    /**/ ObjWarpstone_Destroy,
    /**/ ObjWarpstone_Update,
    /**/ ObjWarpstone_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_METAL,
        AT_NONE,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00100000, 0x00, 0x00 },
        { 0x4FC1FFFE, 0x00, 0x00 },
        ATELEM_NONE | ATELEM_SFX_NORMAL,
        ACELEM_ON | ACELEM_HOOKABLE,
        OCELEM_ON,
    },
    { 20, 60, 0, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_U8(attentionRangeType, ATTENTION_RANGE_1, ICHAIN_STOP),
};

static Gfx* sOwlStatueDLs[] = { gOwlStatueClosedDL, gOwlStatueOpenedDL };

void ObjWarpstone_SetupAction(ObjWarpstone* this, ObjWarpstoneActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void ObjWarpstone_Init(Actor* thisx, PlayState* play) {
    ObjWarpstone* this = (ObjWarpstone*)thisx;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &sCylinderInit);
    Actor_SetFocus(&this->dyna.actor, 40.0f);

    if (!(gSaveContext.save.info.enhancedWarpSongs.warpsongs & (1 << thisx->params)))
        ObjWarpstone_SetupAction(this, ObjWarpstone_ClosedIdle);
    else {
        ObjWarpstone_SetupAction(this, ObjWarpstone_OpenedIdle);
        this->modelIndex = SEK_MODEL_OPENED;
    }
}

void ObjWarpstone_Destroy(Actor* thisx, PlayState* play) {
    ObjWarpstone* this = (ObjWarpstone*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void ObjWarpstone_ClosedIdle(ObjWarpstone* this, PlayState* play) {
    ObjWarpstone_SetupAction(this, ObjWarpstone_BeginOpeningCutscene);
}

void ObjWarpstone_BeginOpeningCutscene(ObjWarpstone* this, PlayState* play) {
    if (gSaveContext.save.info.enhancedWarpSongs.warpsongs & (1 << this->dyna.actor.params)) {
        ObjWarpstone_SetupAction(this, ObjWarpstone_PlayOpeningCutscene);
        //Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_OWL_WARP_SWITCH_ON);
    }
}

void ObjWarpstone_PlayOpeningCutscene(ObjWarpstone* this, PlayState* play) {
    if (this->openingCSTimer++ >= OBJ_WARPSTONE_TIMER_ACTIVATE_THRESHOLD)
        ObjWarpstone_SetupAction(this, ObjWarpstone_OpenedIdle);
    else if (this->openingCSTimer < OBJ_WARPSTONE_TIMER_OPEN_THRESHOLD) {
        Math_StepToF(&this->dyna.actor.velocity.x, 0.01f, 0.001f);
        Math_StepToS(&this->dyna.actor.home.rot.x, 0xFF, 0x12);
    } else {
        Math_StepToF(&this->dyna.actor.velocity.x, 20.0f, 0.01f);
        if (this->dyna.actor.velocity.x > 0.2f) {
            this->modelIndex = SEK_MODEL_OPENED;
            Math_StepToS(&this->dyna.actor.home.rot.x, 0, 0x14);
        }
    }
}

void ObjWarpstone_OpenedIdle(ObjWarpstone* this, PlayState* play) { }

void ObjWarpstone_Update(Actor* thisx, PlayState* play) {
    ObjWarpstone* this = (ObjWarpstone*)thisx;

    this->actionFunc(this, play);

    Collider_ResetCylinderAC(play, &this->collider.base);
    Collider_UpdateCylinder(&this->dyna.actor, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void ObjWarpstone_Draw(Actor* thisx, PlayState* play) {
    ObjWarpstone* this = (ObjWarpstone*)thisx;

    Gfx_DrawDListOpa(play, sOwlStatueDLs[this->modelIndex]);
    if (this->dyna.actor.home.rot.x != 0) {
        OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        Matrix_Translate(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y + 34.0f, this->dyna.actor.world.pos.z, MTXMODE_NEW);
        Matrix_Mult(&play->billboardMtxF, MTXMODE_APPLY);
        Matrix_Translate(0.0f, 0.0f, 30.0f, MTXMODE_APPLY);
        Matrix_Scale(this->dyna.actor.velocity.x, this->dyna.actor.velocity.x, this->dyna.actor.velocity.x, MTXMODE_APPLY);
        Matrix_Push();
        gDPPipeSync(POLY_XLU_DISP++);
        gDPSetPrimColor(POLY_XLU_DISP++, 128, 128, 255, 255, 200, this->dyna.actor.home.rot.x);
        gDPSetEnvColor(POLY_XLU_DISP++, 100, 200, 0, 255);
        Matrix_RotateZF(BINANG_TO_RAD_ALT2((play->gameplayFrames * 1500) & 0xFFFF), MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gEffFlash1DL);
        Matrix_Pop();
        Matrix_RotateZF(BINANG_TO_RAD_ALT2(~((play->gameplayFrames * 1200) & 0xFFFF)), MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gEffFlash1DL);

        CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    }
}
