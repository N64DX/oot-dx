/*
 * File: z_bg_ladder.c
 * Overlay: ovl_Bg_Ladder
 * Description: Wooden Ladder
 */

#include "z_bg_ladder.h"

#include "libc64/math64.h"
#include "controller.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_math.h"
#include "sys_matrix.h"
#include "play_state.h"
#include "player.h"
#include "z_lib.h"
#include "one_point_cutscene.h"

#include "assets/objects/object_ladder/object_ladder.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgLadder_Init(Actor* thisx, PlayState* play);
void BgLadder_Destroy(Actor* thisx, PlayState* play);
void BgLadder_Update(Actor* thisx, PlayState* play);
void BgLadder_Draw(Actor* thisx, PlayState* play);
void BgLadder_Wait(BgLadder* this, PlayState* play);
void BgLadder_StartCutscene(BgLadder* this, PlayState* play);
void BgLadder_FadeIn(BgLadder* this, PlayState* play);
void BgLadder_DoNothing(BgLadder* this, PlayState* play);

ActorProfile Bg_Ladder_Profile = {
    /**/ ACTOR_BG_LADDER,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_LADDER,
    /**/ sizeof(BgLadder),
    /**/ BgLadder_Init,
    /**/ BgLadder_Destroy,
    /**/ BgLadder_Update,
    /**/ BgLadder_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

static Gfx* sLadderDLists[] = {
    gWoodenLadder12RungDL,
    gWoodenLadder16RungDL,
    gWoodenLadder20RungDL,
    gWoodenLadder24RungDL,
};

void BgLadder_Init(Actor* thisx, PlayState* play) {
    BgLadder* this = (BgLadder*)thisx;
    BgLadderSize size;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);

    this->switchFlag = BGLADDER_GET_SWITCH_FLAG(thisx);
    thisx->params = BGLADDER_GET_SIZE(thisx);
    DynaPolyActor_Init(&this->dyna, 0);
    size = thisx->params;

    if (size == LADDER_SIZE_12RUNG) {
        CollisionHeader_GetVirtual(&gWoodenLadder12RungCol, &colHeader);
    } else if (size == LADDER_SIZE_16RUNG) {
        CollisionHeader_GetVirtual(&gWoodenLadder16RungCol, &colHeader);
    } else if (size == LADDER_SIZE_20RUNG) {
        CollisionHeader_GetVirtual(&gWoodenLadder20RungCol, &colHeader);
    } else if (size == LADDER_SIZE_24RUNG) {
        CollisionHeader_GetVirtual(&gWoodenLadder24RungCol, &colHeader);
    } else {
        Actor_Kill(&this->dyna.actor);
        return;
    }
    
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    if (Flags_GetSwitch(play, this->switchFlag) || this->switchFlag == 0xFF) {
        // If the flag is set, then the ladder draws immediately
        this->alpha = 255;
        this->dyna.actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED; // always update = off
        this->action = BgLadder_DoNothing;
    } else {
        // Otherwise, the ladder doesn't draw; wait for the flag to be set
        this->alpha = 0;
        DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        this->dyna.actor.draw = NULL;
        this->action = BgLadder_Wait;
    }
}

void BgLadder_Destroy(Actor* thisx, PlayState* play) {
    BgLadder* this = (BgLadder*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgLadder_Wait(BgLadder* this, PlayState* play) {
    // Wait for the flag to be set, then trigger the cutscene
    if (Flags_GetSwitch(play, this->switchFlag))
        this->action = BgLadder_StartCutscene;
}

void BgLadder_StartCutscene(BgLadder* this, PlayState* play) {
    // Trigger the cutscene, then make the ladder fade in
    if (!Player_InCsMode(play)) {
        OnePointCutscene_Attention(play, &this->dyna.actor);
        this->dyna.actor.draw = BgLadder_Draw;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_IRON_DOOR_OPEN);
        this->action = BgLadder_FadeIn;
    }
}

void BgLadder_FadeIn(BgLadder* this, PlayState* play) {
    // Fade in the ladder, then stop the cutscene & go idle
    this->alpha += 5;
    if (this->alpha >= 255) {
        this->alpha = 255;
        DynaPoly_EnableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        this->dyna.actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED; // always update = off
        this->action = BgLadder_DoNothing;
    }
}

void BgLadder_DoNothing(BgLadder* this, PlayState* play) {
}

void BgLadder_Update(Actor* thisx, PlayState* play) {
    BgLadder* this = (BgLadder*)thisx;

    this->action(this, play);
}

void BgLadder_Draw(Actor* thisx, PlayState* play) {
    BgLadder* this = (BgLadder*)thisx;
    Gfx* gfx;

    OPEN_DISPS(play->state.gfxCtx, "../z_bg_ladder.c", 145);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, this->alpha);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_bg_ladder.c", 149);
    gSPDisplayList(POLY_OPA_DISP++, sLadderDLists[this->dyna.actor.params]);

    CLOSE_DISPS(play->state.gfxCtx, "../z_bg_ladder.c", 160);
}
