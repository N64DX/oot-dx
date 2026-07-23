/*
 * File: z_bg_haka_curtain.c
 * Overlay: ovl_Bg_Haka_Curtain
 * Description: Curtain That Lifts to Reveal Flat's Tomb
 */

#include "z_bg_haka_curtain.h"

#include "gfx_setupdl.h"
#include "sfx.h"
#include "ichain.h"
#include "z_lib.h"
#include "play_state.h"
#include "regs.h"

#include "assets/objects/object_haka_obj/object_haka_obj.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgHakaCurtain_Init(Actor* thisx, struct PlayState* play);
void BgHakaCurtain_Destroy(Actor* thisx, struct PlayState* play);
void BgHakaCurtain_Update(Actor* thisx, struct PlayState* play);
void BgHakaCurtain_Draw(Actor* thisx, struct PlayState* play);

void BgHakaCurtain_80B6DCAC(BgHakaCurtain* this, struct PlayState* play);
void BgHakaCurtain_Empty(BgHakaCurtain* this, struct PlayState* play);
void BgHakaCurtain_80B6DD9C(BgHakaCurtain* this, struct PlayState* play);
void BgHakaCurtain_80B6DE80(BgHakaCurtain* this);

ActorProfile Bg_Haka_Curtain_Profile = {
    /**/ ACTOR_BG_HAKA_CURTAIN,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_HAKA_OBJ,
    /**/ sizeof(BgHakaCurtain),
    /**/ BgHakaCurtain_Init,
    /**/ BgHakaCurtain_Destroy,
    /**/ BgHakaCurtain_Update,
    /**/ BgHakaCurtain_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 700, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 600, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgHakaCurtain_Init(Actor* thisx, PlayState* play) {
    BgHakaCurtain* this = (BgHakaCurtain*)thisx;
    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&object_haka_obj_Colheader_001588, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
    this->timer = SECONDS(5);
    if (Flags_GetSwitch(play, this->dyna.actor.room)) {
        BgHakaCurtain_80B6DE80(this);
        return;
    }
    this->actionFunc = BgHakaCurtain_80B6DCAC;
}

void BgHakaCurtain_Destroy(Actor* thisx, PlayState* play) {
    BgHakaCurtain* this = (BgHakaCurtain*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgHakaCurtain_80B6DCAC(BgHakaCurtain* this, PlayState* play) {
    if (Flags_GetSwitch(play, this->dyna.actor.room))
        this->actionFunc = BgHakaCurtain_Empty;
}

void BgHakaCurtain_Empty(BgHakaCurtain* this, PlayState* play) { }

void BgHakaCurtain_80B6DD80(BgHakaCurtain* this) {
    this->actionFunc = BgHakaCurtain_80B6DD9C;
    this->dyna.actor.velocity.y = 0.0f;
}

void BgHakaCurtain_80B6DD9C(BgHakaCurtain* this, PlayState* play) {
    if (this->dyna.actor.world.pos.y < this->dyna.actor.home.pos.y + 150.0f - 30.0f)
        Math_StepToF(&this->dyna.actor.velocity.y, 4.8f, 0.36f);
    else Math_StepToF(&this->dyna.actor.velocity.y, 2.4f, 0.15f);
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if (this->dyna.actor.home.pos.y + 150.0f < this->dyna.actor.world.pos.y) {
        BgHakaCurtain_80B6DE80(this);
        return;
    }
    Actor_PlaySfx_Flagged(&this->dyna.actor, NA_SE_EV_CURTAIN_DOWN - SFX_FLAG);
}

void BgHakaCurtain_80B6DE80(BgHakaCurtain* this) {
    this->actionFunc = BgHakaCurtain_Empty;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 150.0f;
}

void BgHakaCurtain_Update(Actor* thisx, PlayState* play) {
    BgHakaCurtain* this = (BgHakaCurtain*)thisx;

    if (DECR(this->timer) == 0)
        BgHakaCurtain_80B6DD80(this);
    this->actionFunc(this, play);
}

void BgHakaCurtain_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_haka_obj_DL_001410);
}
