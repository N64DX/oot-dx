/*
 * File: z_bg_haka_tomb.c
 * Overlay: ovl_Bg_Haka_Tomb
 * Description: Flat's Tomb
 */

#include "z_bg_haka_tomb.h"

#include "gfx_setupdl.h"
#include "ichain.h"
#include "segmented_address.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "array_count.h"
#include "save.h"

#include "assets/objects/object_haka_obj/object_haka_obj.h"
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_scene.h"

#define FLAGS 0

void BgHakaTomb_Init(Actor* thisx, struct PlayState* play);
void BgHakaTomb_Destroy(Actor* thisx, struct PlayState* play);
void BgHakaTomb_Update(Actor* thisx, struct PlayState* play);
void BgHakaTomb_Draw(Actor* thisx, struct PlayState* play);

void BgHakaTomb_Activate(BgHakaTomb* this, struct PlayState* play);
void BgHakaTomb_NocturneUpgrade1(BgHakaTomb* this, struct PlayState* play);
void BgHakaTomb_NocturneUpgrade2(BgHakaTomb* this, struct PlayState* play);
void BgHakaTomb_DoNothing(BgHakaTomb* this, struct PlayState* play);

ActorProfile Bg_Haka_Tomb_Profile = {
    /**/ ACTOR_BG_HAKA_TOMB,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_HAKA_OBJ,
    /**/ sizeof(BgHakaTomb),
    /**/ BgHakaTomb_Init,
    /**/ BgHakaTomb_Destroy,
    /**/ BgHakaTomb_Update,
    /**/ BgHakaTomb_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

static Vec3f D_80BD68A4 = { 30.0f, 90.0f, 0.0f };

void BgHakaTomb_Init(Actor* thisx, PlayState* play) {
    BgHakaTomb* this = (BgHakaTomb*)thisx;
    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&object_haka_obj_Colheader_000EE8, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
    this->dyna.actor.textId = 0x8500;
    this->actionFunc = BgHakaTomb_Activate;
}

void BgHakaTomb_Destroy(Actor* thisx, PlayState* play) {
    BgHakaTomb* this = (BgHakaTomb*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgHakaTomb_Activate(BgHakaTomb* this, PlayState* play) {
    if (Flags_GetSwitch(play, this->dyna.actor.room)) {
        this->dyna.actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY;
        if (!gSaveContext.save.info.enhancedWarpSongs.nocturneOfShadow) {
            this->dyna.actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
            if (this->dyna.actor.isLockedOn)
                this->actionFunc = BgHakaTomb_NocturneUpgrade1;
        } else this->dyna.actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    }
}

void BgHakaTomb_NocturneUpgrade1(BgHakaTomb* this, PlayState* play) {
    s16 yawDiff, yawDiffNew;

    if (Actor_TalkOfferAccepted(&this->dyna.actor, play))
        this->actionFunc = BgHakaTomb_NocturneUpgrade2;
    else {
        yawDiff = this->dyna.actor.yawTowardsPlayer - this->dyna.actor.world.rot.y;
        if (!(this->dyna.actor.xzDistToPlayer > 120.0f)) {
            if (gSaveContext.save.info.enhancedWarpSongs.nocturneOfShadow)
                this->dyna.actor.textId = 0x8500;
            yawDiffNew = ABS(yawDiff);
            if (yawDiffNew < 0x4300)
                Actor_OfferTalk(&this->dyna.actor, play, 70.0f);
        }
    }
}

void BgHakaTomb_NocturneUpgrade2(BgHakaTomb* this, PlayState* play) {
    if (Message_GetState(&play->msgCtx) == TEXT_STATE_EVENT && Message_ShouldAdvance(play)) {
        Message_CloseTextbox(play);
        if (!gSaveContext.save.info.enhancedWarpSongs.nocturneOfShadow) {
            play->csCtx.script = SEGMENTED_TO_VIRTUAL(gBeneathTheGraveardEnhancedNocturneOfShadowTeachCs);
            gSaveContext.save.info.enhancedWarpSongs.nocturneOfShadow = true;
            gSaveContext.cutsceneTrigger = 1;
        }
        this->actionFunc = BgHakaTomb_NocturneUpgrade1;
    }
}

void BgHakaTomb_DoNothing(BgHakaTomb* this, PlayState* play) { }

void BgHakaTomb_Update(Actor* thisx, PlayState* play) {
    BgHakaTomb* this = (BgHakaTomb*)thisx;
    Vec3f vec;

    this->actionFunc(this, play);
    Matrix_RotateY(this->dyna.actor.world.rot.y, MTXMODE_NEW);
    Matrix_RotateX(this->dyna.actor.world.rot.x, MTXMODE_APPLY);
    Matrix_RotateZ(this->dyna.actor.world.rot.z, MTXMODE_APPLY);
    Matrix_MultVec3f(&D_80BD68A4, &vec);
    Math_Vec3f_Sum(&this->dyna.actor.world.pos, &vec, &this->dyna.actor.focus.pos);
}

void BgHakaTomb_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_haka_obj_DL_0007B0);
}
