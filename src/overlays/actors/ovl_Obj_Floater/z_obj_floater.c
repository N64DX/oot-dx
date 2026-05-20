/*
 * File: z_obj_floater.c
 * Overlay: ovl_Obj_Floater
 * Description: Floating lift in Dodongo's Cavern (Spaceworld '97)
 */
#include "z_obj_floater.h"

#include "array_count.h"
#include "ichain.h"
#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"

#define FLAGS 0

void ObjFloater_Init(Actor* thisx, struct PlayState* play);
void ObjFloater_Destroy(Actor* thisx, struct PlayState* play);
void ObjFloater_Update(Actor* thisx, struct PlayState* play);
void ObjFloater_Draw(Actor* thisx, struct PlayState* play);

void ObjFloater_WaitDown(ObjFloater* this, struct PlayState* play);
void ObjFloater_Rise(ObjFloater* this, struct PlayState* play);
void ObjFloater_WaitUp(ObjFloater* this, struct PlayState* play);

ActorProfile Obj_Floater_Profile = {
    /**/ ACTOR_OBJ_FLOATER,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_CRASHBOX,
    /**/ sizeof(ObjFloater),
    /**/ ObjFloater_Init,
    /**/ ObjFloater_Destroy,
    /**/ ObjFloater_Update,
    /**/ ObjFloater_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 1000, ICHAIN_STOP),
};

void ObjFloater_Init(Actor* thisx, PlayState* play) {
    ObjFloater* this = (ObjFloater*)thisx;
    CollisionHeader* colHeader = NULL;

    DynaPolyActor_Init(&this->dyna, 1 | 2);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    CollisionHeader_GetVirtual(&gDLiftCol, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    Actor_SetScale(&this->dyna.actor, 0.1f);
    if (FLOATER_TYPE(this->dyna.actor.params) == OBJ_FLOATER_BIG)
        this->dyna.actor.scale.y = 0.2f;
    this->dyna.actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actionFunc = ObjFloater_WaitDown;
}

void ObjFloater_Fall(ObjFloater* this, PlayState* play) {
    if (this->timer == 0) {
        if (this->dyna.actor.world.pos.y > this->dyna.actor.home.pos.y) {
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
            this->dyna.actor.velocity.y = -3.0f;
        } else if (this->dyna.actor.world.pos.y <= this->dyna.actor.home.pos.y) {
            this->dyna.actor.velocity.y = 0.0f;
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_STOP);
            this->actionFunc = ObjFloater_WaitDown;
        }
    }
}

void ObjFloater_WaitUp(ObjFloater* this, PlayState* play) {
    if (!(this->dyna.interactFlags & DYNA_INTERACT_PLAYER_ON_TOP)) {
        this->timer = 12;
        this->actionFunc = ObjFloater_Fall;
    }
}

void ObjFloater_Rise(ObjFloater* this, PlayState* play) {
    f32 top = this->dyna.actor.home.pos.y + (f32)(this->dyna.actor.params >> 8 & 0xFF);

    if (!(this->dyna.interactFlags & DYNA_INTERACT_PLAYER_ON_TOP)) {
        this->actionFunc = ObjFloater_Fall;
        this->dyna.actor.velocity.y = 0.0f;
        this->timer = 3;
    }

    if (this->timer == 0) {
        if (this->dyna.actor.world.pos.y < top) {
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
            this->dyna.actor.velocity.y = 3.0f;
        } else if (this->dyna.actor.world.pos.y >= top) {
            this->dyna.actor.velocity.y = 0.0f;
            this->actionFunc = ObjFloater_WaitUp;
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_STOP);
        }
    }
}

void ObjFloater_WaitDown(ObjFloater* this, PlayState* play) {
    if ((this->dyna.interactFlags & DYNA_INTERACT_PLAYER_ON_TOP)) {
        this->actionFunc = ObjFloater_Rise;
        this->timer = 12;
    }
}

void ObjFloater_Destroy(Actor* thisx, PlayState* play) { }

void ObjFloater_Update(Actor* thisx, PlayState* play) {
    ObjFloater* this = (ObjFloater*)thisx;

    if (this->timer > 0)
        this->timer--;

    if (this->actionFunc != NULL)
        this->actionFunc(this, play);

    Actor_MoveXZGravity(&this->dyna.actor);
}

void ObjFloater_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, FLOATER_TYPE(thisx->params) == OBJ_FLOATER_BIG ? gDLiftBigDL : gDLiftDL);
}
