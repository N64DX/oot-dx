/*
 * File: z_bg_ydan_maruta2.c
 * Overlay: ovl_Bg_Ydan_maruta2
 * Description: In the original game this is: Rotating spike log in Deku Tree
 * Changed to: Rising platforms (similar to ydan_hasi)
 */
#include "z_bg_ydan_maruta2.h"

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

#include "assets/objects/object_deku_platforms/object_deku_platforms.h"

#define FLAGS 0x00000030
#define SWITCH_FLAG(params) (params & 0xFF)

#define THIS ((BgYdanMaruta2*)thisx)

void BgYdanMaruta2_Init(Actor* thisx, PlayState* play);
void BgYdanMaruta2_Destroy(Actor* thisx, PlayState* play);
void BgYdanMaruta2_Update(Actor* thisx, PlayState* play);
void BgYdanMaruta2_Draw(Actor* thisx, PlayState* play);

void BgYdanMaruta2_Wait(BgYdanMaruta2* this, PlayState* play);
void BgYdanHasi_Rise(BgYdanMaruta2* this, PlayState* play);

ActorProfile Bg_Ydan_Maruta2_Profile = {
    ACTOR_BG_YDAN_MARUTA2,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEKU_PLATFORMS,
    sizeof(BgYdanMaruta2),
    (ActorFunc)BgYdanMaruta2_Init,
    (ActorFunc)BgYdanMaruta2_Destroy,
    (ActorFunc)BgYdanMaruta2_Update,
    (ActorFunc)BgYdanMaruta2_Draw,
};

void BgYdanMaruta2_Init(Actor* thisx, PlayState* play) {
    BgYdanMaruta2* this = THIS;
    CollisionHeader* colHeader = NULL;

    Actor_SetScale(thisx, 1.0f);
    CollisionHeader_GetVirtual(&gDekuPlatformsCol, &colHeader);
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    thisx->world.pos.y -= 180.0f;
    thisx->draw = NULL;
    this->actionFunc = BgYdanMaruta2_Wait;
    Actor_SetFocus(thisx, 40.0f);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, thisx, colHeader);
    this->timer = 0;
}

void BgYdanMaruta2_Wait(BgYdanMaruta2* this, PlayState* play) {
    if (Flags_GetSwitch(play, SWITCH_FLAG(this->dyna.actor.params))) {
        this->timer = 340;
        this->dyna.actor.draw = BgYdanMaruta2_Draw;
        this->actionFunc = BgYdanHasi_Rise;
        OnePointCutscene_Init(play, 3041, 30, &this->dyna.actor, CAM_ID_MAIN);
    }
}

void BgYdanHasi_Rise(BgYdanMaruta2* this, PlayState* play) {
    if (this->timer != 0)
        this->timer--;

    if (this->timer == 0) {
        if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y - 180.0f, 3.0f) != 0) {
            Flags_UnsetSwitch(play, SWITCH_FLAG(this->dyna.actor.params));
            this->dyna.actor.draw = NULL;
            this->actionFunc = BgYdanMaruta2_Wait;
        } else {
            Actor_PlaySfx_FlaggedCentered2(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
        }
    } else if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y, 3.0f) == 0) {
        Actor_PlaySfx_FlaggedCentered2(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE - SFX_FLAG);
    } else {
        Actor_PlaySfx_FlaggedTimer(&this->dyna.actor, this->timer);
    }
}

void BgYdanMaruta2_Destroy(Actor* thisx, PlayState* play) {
    BgYdanMaruta2* this = THIS;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Flags_UnsetSwitch(play, SWITCH_FLAG(this->dyna.actor.params));
}

void BgYdanMaruta2_Update(Actor* thisx, PlayState* play) {
    BgYdanMaruta2* this = THIS;

    if (this->actionFunc != NULL) {
        this->actionFunc(this, play);
    }
}

void BgYdanMaruta2_Draw(Actor* thisx, PlayState* play) {
    BgYdanMaruta2* this = THIS;

    Gfx_DrawDListOpa(play, gDekuPlatformsDL);
}
