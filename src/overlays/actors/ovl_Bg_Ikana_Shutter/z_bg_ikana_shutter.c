/*
 * File: z_bg_ikana_shutter.c
 * Overlay: ovl_Bg_Ikana_Shutter
 * Description: Metal shutter in switch room of Stone Tower Temple
 */

#include "z_bg_ikana_shutter.h"

#include "z_lib.h"
#include "ichain.h"
#include "play_state.h"
#include "quake.h"
#include "save.h"
#include "one_point_cutscene.h"
#include "array_count.h"

#include "z_bg_ikana_shutter_cutscene_data.c"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgIkanaShutter_Init(Actor* thisx, struct PlayState* play);
void BgIkanaShutter_Destroy(Actor* thisx, struct PlayState* play);
void BgIkanaShutter_Update(Actor* thisx, struct PlayState* play);
void BgIkanaShutter_Draw(Actor* thisx, struct PlayState* play);

void BgIkanaShutter_80BD5844(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD5910(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD59C4(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD5A18(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD5B04(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD5B60(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_80BD5BD8(BgIkanaShutter* this, struct PlayState* play);
void BgIkanaShutter_DoNothing(BgIkanaShutter* this, struct PlayState* play);

ActorProfile Bg_Ikana_Shutter_Profile = {
    /**/ ACTOR_BG_IKANA_SHUTTER,
    /**/ ACTORCAT_SWITCH,
    /**/ FLAGS,
    /**/ OBJECT_IKANA_OBJ,
    /**/ sizeof(BgIkanaShutter),
    /**/ BgIkanaShutter_Init,
    /**/ BgIkanaShutter_Destroy,
    /**/ BgIkanaShutter_Update,
    /**/ BgIkanaShutter_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 500, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

bool BgIkanaShutter_AllSwitchesPressed(BgIkanaShutter* this, PlayState* play) {
    return Flags_GetSwitch(play, BGIKANASHUTTER_GET_SWITCH_FLAG(&this->dyna.actor)) && Flags_GetSwitch(play, BGIKANASHUTTER_GET_SWITCH_FLAG(&this->dyna.actor) + 1) && Flags_GetSwitch(play, BGIKANASHUTTER_GET_SWITCH_FLAG(&this->dyna.actor) + 2) && Flags_GetSwitch(play, BGIKANASHUTTER_GET_SWITCH_FLAG(&this->dyna.actor) + 3);
}

void BgIkanaShutter_StartCutscene(BgIkanaShutter* this, PlayState* play) {
    if (this->csId > 0 && this->csId <= ARRAY_COUNT(cutscenes) && cutscenes[this->csId - 1] != NULL) {
        Cutscene_SetScript(play, cutscenes[this->csId - 1]);
        gSaveContext.cutsceneTrigger = 1;
    } else OnePointCutscene_Attention(play, &this->dyna.actor);
}

void BgIkanaShutter_Init(Actor* thisx, PlayState* play) {
    BgIkanaShutter* this = (BgIkanaShutter*)thisx;

    CollisionHeader* header = NULL;

    this->csId = this->dyna.actor.home.rot.z;
    this->dyna.actor.home.rot.z = this->dyna.actor.world.rot.z = this->dyna.actor.shape.rot.z = 0;
    if (this->csId > ARRAY_COUNT(cutscenes)) {
        this->csId = 0;
    }

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    CollisionHeader_GetVirtual(&object_ikana_obj_Colheader_000F28, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);

    if (!BGIKANASHUTTER_GET_100(&this->dyna.actor)) {
        if (BgIkanaShutter_AllSwitchesPressed(this, play)) {
            this->actionFunc = BgIkanaShutter_80BD59C4;
            this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 220.0f;
            return;
        }
        this->actionFunc = BgIkanaShutter_80BD5844;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    } else if (Flags_GetClear(play, this->dyna.actor.room)) {
        this->actionFunc = BgIkanaShutter_DoNothing;
    } else {
        this->actionFunc = BgIkanaShutter_80BD5B04;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    }
}

void BgIkanaShutter_Destroy(Actor* thisx, PlayState* play) {
    BgIkanaShutter* this = (BgIkanaShutter*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgIkanaShutter_80BD5844(BgIkanaShutter* this, PlayState* play) {
    if (BgIkanaShutter_AllSwitchesPressed(this, play)) {
        if (Player_InCsMode(play))
            return;
        BgIkanaShutter_StartCutscene(this, play);
        this->dyna.actor.velocity.y = 0.6f;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
        this->actionFunc = BgIkanaShutter_80BD5910;
    }
}

void BgIkanaShutter_80BD5910(BgIkanaShutter* this, PlayState* play) {
    Math_StepToF(&this->dyna.actor.velocity.y, 4.0f, 0.5f);
    if (Math_SmoothStepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + 220.0f, 0.5f,
                           this->dyna.actor.velocity.y, 1.0f) < 0.5f) {
        this->actionFunc = BgIkanaShutter_80BD59C4;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 220.0f;
    }
}

void BgIkanaShutter_80BD59C4(BgIkanaShutter* this, PlayState* play) {
    if (!BgIkanaShutter_AllSwitchesPressed(this, play)) {
        this->actionFunc = BgIkanaShutter_80BD5A18;
        this->dyna.actor.velocity.y = -23.0f;
    }
}

void BgIkanaShutter_80BD5A18(BgIkanaShutter* this, PlayState* play) {
    s16 quakeIndex;

    this->dyna.actor.velocity.y += -5.0f;
    this->dyna.actor.velocity.y *= 0.978f;
    this->dyna.actor.world.pos.y += this->dyna.actor.velocity.y;
    if (this->dyna.actor.world.pos.y <= this->dyna.actor.home.pos.y) {
        quakeIndex = Quake_Request(GET_ACTIVE_CAM(play), QUAKE_TYPE_3);
        Quake_SetSpeed(quakeIndex, 21536);
        Quake_SetPerturbations(quakeIndex, 4, 0, 0, 0);
        Quake_SetDuration(quakeIndex, 12);

        this->actionFunc = BgIkanaShutter_80BD5844;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    }
}

void BgIkanaShutter_80BD5B04(BgIkanaShutter* this, PlayState* play) {
    if (Flags_GetTempClear(play, this->dyna.actor.room)) {
        this->actionFunc = BgIkanaShutter_80BD5B60;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    }
}

void BgIkanaShutter_80BD5B60(BgIkanaShutter* this, PlayState* play) {
    if (!Player_InCsMode(play)) {
        BgIkanaShutter_StartCutscene(this, play);
        Flags_SetClear(play, this->dyna.actor.room);
        this->actionFunc = BgIkanaShutter_80BD5BD8;
    }
}

void BgIkanaShutter_80BD5BD8(BgIkanaShutter* this, PlayState* play) {
    Math_StepToF(&this->dyna.actor.velocity.y, 4.0f, 0.5f);
    if (Math_SmoothStepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + -220.0f, 0.5f, this->dyna.actor.velocity.y, 1.0f) < 0.5f) {
        this->actionFunc = BgIkanaShutter_DoNothing;
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + -220.0f;
    }
}

void BgIkanaShutter_DoNothing(BgIkanaShutter* this, PlayState* play) {
}

void BgIkanaShutter_Update(Actor* thisx, PlayState* play) {
    BgIkanaShutter* this = (BgIkanaShutter*)thisx;

    this->actionFunc(this, play);
}

void BgIkanaShutter_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_ikana_obj_DL_000CE8);
}
