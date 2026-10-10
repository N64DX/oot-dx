/*
 * File: z_bg_lbfshot.c
 * Overlay: ovl_Bg_Lbfshot
 * Description: Rainbow Hookshot Pillar
 */

#include "z_bg_lbfshot.h"

#include "ichain.h"
#include "play_state.h"

#include "assets/objects/object_lbfshot/object_lbfshot.h"

#define FLAGS 0

void BgLbfshot_Init(Actor* thisx, struct PlayState* play);
void BgLbfshot_Destroy(Actor* thisx, struct PlayState* play);
void BgLbfshot_Draw(Actor* thisx, struct PlayState* play);

ActorProfile Bg_Lbfshot_Profile = {
    /**/ ACTOR_BG_LBFSHOT,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_LBFSHOT,
    /**/ sizeof(BgLbfshot),
    /**/ BgLbfshot_Init,
    /**/ BgLbfshot_Destroy,
    /**/ Actor_Noop,
    /**/ BgLbfshot_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgLbfshot_Init(Actor* thisx, PlayState* play) {
    BgLbfshot* this = (BgLbfshot*)thisx;

    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    this->dyna.actor.cullingVolumeDistance = 4000.0f;
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&object_lbfshot_Colheader_0014D8, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
}
void BgLbfshot_Destroy(Actor* thisx, PlayState* play) {
    BgLbfshot* this = (BgLbfshot*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}
void BgLbfshot_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_lbfshot_DL_000228);
}
