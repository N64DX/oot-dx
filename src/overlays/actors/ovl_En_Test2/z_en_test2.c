/*
 * File: z_en_test2.c
 * Overlay: ovl_En_Test2
 * Description: Objects affected by the Lens of Truth
 */

#include "z_en_test2.h"

#include "gfx_setupdl.h"
#include "ichain.h"
#include "sys_matrix.h"
#include "play_state.h"

#include "assets/objects/object_haka_obj/object_haka_obj.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_REACT_TO_LENS)

void EnTest2_Init(Actor* thisx, struct PlayState* play);
void EnTest2_Update(Actor* thisx, struct PlayState* play);
void EnTest2_UpdateForLens(Actor* thisx, struct PlayState* play);
void EnTest2_Draw(Actor* thisx, struct PlayState* play);

typedef struct EnTest2ModelInfo {
    /* 0x0 */ Gfx* dList;
    /* 0x0 */ s16 objectId;
} EnTest2ModelInfo; // size = 0x8

ActorProfile En_Test2_Profile = {
    /**/ ACTOR_EN_TEST2,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnTest2),
    /**/ EnTest2_Init,
    /**/ Actor_Noop,
    /**/ EnTest2_Update,
    /**/ NULL,
};

static EnTest2ModelInfo sModelInfo[EN_TEST2_TYPE_MAX] = {
    { object_haka_obj_DL_000F70, OBJECT_HAKA_OBJ }, // EN_TEST2_TYPE_GRAVE_WALL
    { object_haka_obj_DL_001200, OBJECT_HAKA_OBJ }, // EN_TEST2_TYPE_GRAVE_WALL
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F(scale, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 8000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 800, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 2500, ICHAIN_STOP),
};

void EnTest2_Init(Actor* thisx, PlayState* play) {
    EnTest2* this = (EnTest2*)thisx;

    Actor_ProcessInitChain(&this->actor, sInitChain);
}

void EnTest2_Update(Actor* thisx, PlayState* play) {
    s32 objectSlot;
    EnTest2ModelInfo* modelInfo;
    EnTest2* this = (EnTest2*)thisx;

    objectSlot = Object_GetSlot(&play->objectCtx, sModelInfo[ENTEST2_GET_TYPE(&this->actor)].objectId);
    if (objectSlot < 0) {
        Actor_Kill(&this->actor);
        return;
    }

    if (Object_IsLoaded(&play->objectCtx, objectSlot)) {
        modelInfo = &sModelInfo[ENTEST2_GET_TYPE(&this->actor)];
        this->actor.objectSlot = objectSlot;
        this->actor.draw = EnTest2_Draw;

        if (play->roomCtx.curRoom.lensMode != LENS_MODE_SHOW_ACTORS)
            this->actor.update = EnTest2_UpdateForLens;
        else this->actor.update = Actor_Noop;
    }
}

void EnTest2_UpdateForLens(Actor* thisx, PlayState* play) {
    EnTest2* this = (EnTest2*)thisx;

    if (play->actorCtx.lensActive)
        this->actor.flags |= ACTOR_FLAG_REACT_TO_LENS;
    else this->actor.flags &= ~ACTOR_FLAG_REACT_TO_LENS;
}

void EnTest2_Draw(Actor* thisx, PlayState* play) {
    EnTest2* this = (EnTest2*)thisx;

    if (ACTOR_FLAGS_CHECK_ALL(&this->actor, ACTOR_FLAG_REACT_TO_LENS)) {
        OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);

        gSPDisplayList(POLY_XLU_DISP++, sModelInfo[ENTEST2_GET_TYPE(&this->actor)].dList);

        CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    } else Gfx_DrawDListOpa(play, sModelInfo[ENTEST2_GET_TYPE(&this->actor)].dList);
}
