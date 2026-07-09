/*
 * File: z_obj_dhouse.c
 * Overlay: ovl_Obj_Dhouse
 * Description: Stone bridge that Keeta sleeps under
 */

#include "z_obj_dhouse.h"

#include "ichain.h"
#include "play_state.h"

#include "assets/objects/object_dhouse/object_dhouse.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void ObjDhouse_Init(Actor* thisx, struct PlayState* play);
void ObjDhouse_Destroy(Actor* thisx, struct PlayState* play);
void ObjDhouse_Update(Actor* thisx, struct PlayState* play);
void ObjDhouse_Draw(Actor* thisx, struct PlayState* play);

ActorProfile Obj_Dhouse_Profile = {
    /**/ ACTOR_OBJ_DHOUSE,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_DHOUSE,
    /**/ sizeof(ObjDhouse),
    /**/ ObjDhouse_Init,
    /**/ ObjDhouse_Destroy,
    /**/ ObjDhouse_Update,
    /**/ ObjDhouse_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 8000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 1000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 800, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void ObjDhouse_Init(Actor* thisx, PlayState* play) {
    ObjDhouse* this = (ObjDhouse*)thisx;
    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    CollisionHeader_GetVirtual(&object_dhouse_Colheader_008040, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
}

void ObjDhouse_Destroy(Actor* thisx, PlayState* play) {
    ObjDhouse* this = (ObjDhouse*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void ObjDhouse_Update(Actor* thisx, PlayState* play) {
    ObjDhouse* this = (ObjDhouse*)thisx;
}

void ObjDhouse_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_dhouse_DL_005A78);
}
