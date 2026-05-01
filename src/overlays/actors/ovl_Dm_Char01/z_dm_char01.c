/*
 * File: z_dm_char01.c
 * Overlay: ovl_Dm_Char01
 * Description: Woodfall scene objects (temple, water, walls, etc)
 */

#include "z_dm_char01.h"

#include "libc64/qrand.h"
#include "z_lib.h"
#include "segmented_address.h"
#include "ichain.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h" 
#include "sfx.h"
#include "array_count.h"
#include "player.h"
#include "play_state.h"
#include "effect.h"
#include "save.h"

#include "assets/overlays/ovl_Dm_Char01/ovl_Dm_Char01.c"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED | ACTOR_FLAG_UPDATE_DURING_OCARINA)

void DmChar01_Init(Actor* thisx, struct PlayState* play);
void DmChar01_Destroy(Actor* thisx, struct PlayState* play);
void DmChar01_Update(Actor* thisx, struct PlayState* play);
void DmChar01_Draw(Actor* thisx, struct PlayState* play);

ActorProfile Dm_Char01_Profile = {
    /**/ ACTOR_DM_CHAR01,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_MTORIDE,
    /**/ sizeof(DmChar01),
    /**/ DmChar01_Init,
    /**/ DmChar01_Destroy,
    /**/ DmChar01_Update,
    /**/ DmChar01_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 3000, ICHAIN_STOP),
};

void DmChar01_Init(Actor* thisx, PlayState* play) {
    DmChar01* this = (DmChar01*)thisx;
    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Actor_SetScale(&this->dyna.actor, 1.0f);

    this->hasCollision = false;

    switch (thisx->params) {
        case 0:
            if (Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL)) {
                this->unk_34C = 2;
                break;
            }

            DynaPolyActor_Init(&this->dyna, 0);
            CollisionHeader_GetVirtual(&gWoodfallSceneryPoisonWaterDamageCol, &header);
            this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);

            this->hasCollision = true;
            this->unk_34C = 0;
            break;

        case 1:
            if (Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL))
                this->unk_34C = 1;
            break;

        case 3:
            if (!Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL))
                Actor_Kill(&this->dyna.actor);
            else {
                DynaPolyActor_Init(&this->dyna, 0);
                CollisionHeader_GetVirtual(&gWoodfallSceneryTempleRampAndPlatformCol, &header);
                this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
                this->hasCollision = true;
            }
            break;
    }
}

void DmChar01_Destroy(Actor* thisx, PlayState* play) {
    DmChar01* this = (DmChar01*)thisx;

    if (this->hasCollision)
        DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void DmChar01_Update(Actor* thisx, PlayState* play) {
    DmChar01* this = (DmChar01*)thisx;

    if (this->hasCollision && thisx->params == 0) {
        Player* player = GET_PLAYER(play);

        if (Player_GetEnvironmentalHazard(play) >= PLAYER_ENV_HAZARD_SWIMMING && !(Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL)) && player->actor.world.pos.y < this->dyna.actor.world.pos.y)
            player->swimmingInPoisonWater = true;

        if (player->actor.world.pos.y > 5.0f)
            DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        else DynaPoly_EnableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
    }
}

void DmChar01_Draw(Actor* thisx, PlayState* play) {
    DmChar01* this = (DmChar01*)thisx;

    switch (thisx->params) {
        case 0:
            switch (this->unk_34C) {
                case 0:
                    Gfx_DrawDListOpa(play, gWoodfallSceneryPoisonWaterDL);
                    break;

                case 1:
                    if (gSaveContext.sceneLayer == 1) {
                        Gfx_DrawDListOpa(play, gWoodfallSceneryFloorDL);
                        Gfx_DrawDListXlu(play, gWoodfallSceneryPurifiedWaterDL);
                        Matrix_Translate(0.0f, 10.0f, 0.0f, MTXMODE_APPLY);
                    }

                    OPEN_DISPS(play->state.gfxCtx, "../z_dm_char01.c", 409);
                    Gfx_SetupDL_25Opa(play->state.gfxCtx);
                    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2);
                    gDPPipeSync(POLY_OPA_DISP++);
                    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
                    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0x96, 255, 255, 255, 255);
                    gSPSegment(POLY_OPA_DISP++, 0x0B, SEGMENTED_TO_VIRTUAL(gWoodfallSceneryDynamicPoisonWaterVtx));
                    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_dm_char01.c", 419);
                    gSPDisplayList(POLY_OPA_DISP++, gWoodfallSceneryDynamicPoisonWaterDL);
                    CLOSE_DISPS(play->state.gfxCtx, "../z_dm_char01.c", 433);
                    break;

                case 2:
                    Gfx_DrawDListOpa(play, gWoodfallSceneryFloorDL);
                    Gfx_DrawDListXlu(play, gWoodfallSceneryPurifiedWaterDL);
                    break;
            }
            break;

        case 1:
            switch (this->unk_34C) {
                case 0:
                    Gfx_DrawDListOpa(play, gWoodfallSceneryPoisonWallsDL);
                    break;

                case 1:
                    Gfx_DrawDListOpa(play, gWoodfallSceneryPurifiedWallsDL);
                    break;
            }
            break;

        case 2:
            Gfx_DrawDListOpa(play, gWoodfallSceneryTempleDL);
            Gfx_DrawDListXlu(play, gWoodfallSceneryTempleEntrancesDL);
            break;

        case 3:
            if (thisx->world.pos.y > -120.0f)
                Gfx_DrawDListOpa(play, gWoodfallSceneryTempleRampAndPlatformDL);
            break;
    }
}
