/*
 * File: z_bg_ydan_hasi2.c
 * Overlay: ovl_Bg_Ydan_Hasi2
 * Description:
 */

#include "z_bg_ydan_hasi2.h"

#include "gfx.h"
#include "letterbox.h"
#include "quake.h"
#include "rand.h"
#include "array_count.h"
#include "sfx.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "player.h"
#include "save.h"

#include "assets/objects/object_bridge_piece/object_bridge_piece.h"

#define FLAGS 0x00000030

void BgYdanHasi2_Init(Actor* thisx, PlayState* play);
void BgYdanHasi2_Destroy(Actor* thisx, PlayState* play);
void BgYdanHasi2_Update(Actor* thisx, PlayState* play);
void BgYdanHasi2_Draw(Actor* thisx, PlayState* play);

void BgYdanHasi2_WaitForCs(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_StartCs(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_Shake(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_Fall(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_Land(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_Finish(BgYdanHasi2* this, PlayState* play);
void BgYdanHasi2_DoNothing(BgYdanHasi2* this, PlayState* play);

ActorProfile Bg_Ydan_Hasi2_Profile = {
    ACTOR_BG_YDAN_HASI2,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_BRIDGE_PIECE,
    sizeof(BgYdanHasi2),
    (ActorFunc)BgYdanHasi2_Init,
    (ActorFunc)BgYdanHasi2_Destroy,
    (ActorFunc)BgYdanHasi2_Update,
    (ActorFunc)BgYdanHasi2_Draw,
};

void BgYdanHasi2_Init(Actor* thisx, PlayState* play) {
    BgYdanHasi2* this = (BgYdanHasi2*)thisx;
    CollisionHeader* colHeader = NULL;

    DynaPolyActor_Init(&this->dyna, 1);
    CollisionHeader_GetVirtual(&gBridgePieceCollision_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    this->switchFlag = (thisx->params & 0x1F);

    if (Flags_GetSwitch(play, this->switchFlag)) {
        thisx->world.pos.x = 548.0f;
        thisx->world.pos.y = 200.0f;
        thisx->world.pos.z = 906.0f;

        this->actionFunc = BgYdanHasi2_DoNothing;
    } else this->actionFunc = BgYdanHasi2_WaitForCs;
}

void BgYdanHasi2_Destroy(Actor* thisx, PlayState* play) {
    BgYdanHasi2* this = (BgYdanHasi2*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgYdanHasi2_WaitForCs(BgYdanHasi2* this, PlayState* play) {
    if (this->dyna.interactFlags & 2) {
        this->actionFunc = BgYdanHasi2_StartCs;
        this->timer = 5;
    }
}

void BgYdanHasi2_StartCs(BgYdanHasi2* this, PlayState* play) {
    Vec3f pos = { 395.0f, 1550.0f, 390.0f };
    Vec3f focus = this->dyna.actor.world.pos;

    Player_SetCsActionWithHaltedActors(play, &this->dyna.actor, PLAYER_CSACTION_103);
    Play_SetCameraAtEye(play, CAM_ID_MAIN, &focus, &pos);
    Play_GetCamera(play, CAM_ID_MAIN)->setting = CAM_SET_FREE0;

    Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);
    Letterbox_SetSizeTarget(32);

    if (this->timer == 0) {
        this->timer = 25;
        this->homeRot = this->dyna.actor.shape.rot;
        this->actionFunc = BgYdanHasi2_Shake;
    }
}

void BgYdanHasi2_Shake(BgYdanHasi2* this, PlayState* play) {
    this->rotShake += 0x2710;
    this->dyna.actor.world.rot.x = (Math_SinS(this->rotShake) * 300.0f) + this->dyna.actor.home.rot.x;
    this->dyna.actor.shape.rot.x = this->dyna.actor.world.rot.x;

    this->dyna.actor.world.rot.z = (Math_CosS(this->rotShake) * 300.0f) + this->dyna.actor.home.rot.z;
    this->dyna.actor.shape.rot.z = this->dyna.actor.world.rot.z;

    this->yShake += 0x4650;
    this->dyna.actor.world.pos.y = Math_SinS(this->yShake) + this->dyna.actor.home.pos.y;

    this->xzShake += 0x4650;
    this->dyna.actor.world.pos.x = (Math_SinS(this->xzShake) * 3.0f) + this->dyna.actor.home.pos.x;
    this->dyna.actor.world.pos.z = (Math_CosS(this->xzShake) * 3.0f) + this->dyna.actor.home.pos.z;

    if ((this->timer & 3) == 3)
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.world.pos, 16, NA_SE_EV_BLOCK_SHAKE);

    if (this->timer == 0) {
        this->fallAmount = 0.0f;
        this->dyna.actor.shape.rot = this->homeRot;
        this->dyna.actor.world.rot = this->dyna.actor.shape.rot;
        this->actionFunc = BgYdanHasi2_Fall;
    }
}

void BgYdanHasi2_Fall(BgYdanHasi2* this, PlayState* play) {
    Math_SmoothStepToF(&this->fallAmount, 40.0f, 2.0f, 1.0f, 1.0f);
    this->dyna.actor.world.pos.y -= this->fallAmount;

    if (this->dyna.actor.world.pos.y <= 1150.0f) {
        Vec3f pos = { 147.0f, 240.0f, 823.0f };
        Vec3f focus = { 548.0f, 200.0f, 906.0f };
        Player* player = GET_PLAYER(play);

        Play_SetCameraAtEye(play, CAM_ID_MAIN, &focus, &pos);
        Play_GetCamera(play, CAM_ID_MAIN)->setting = CAM_SET_FREE0;

        this->dyna.actor.world.pos.x = 548.0f;
        this->dyna.actor.world.pos.y = 200.0f + 550.0f;
        this->dyna.actor.world.pos.z = 906.0f;

        player->actor.world.rot.y = player->actor.shape.rot.y = 0xA000;

        this->fallAmount = 35.0f;
        Player_SetCsActionWithHaltedActors(play, &this->dyna.actor, PLAYER_CSACTION_7);
        this->actionFunc = BgYdanHasi2_Land;
    }
}

static Vec3f dustPos[] = {
    { 570.0f, 200.0f, 780.0f },  { 628.0f, 200.0f, 839.0f }, { 669.0f, 200.0f, 879.0f },
    { 520.0f, 200.0f, 1026.0f }, { 474.0f, 200.0f, 980.0f }, { 421.0f, 200.0f, 926.0f },
};

void BgYdanHasi2_Land(BgYdanHasi2* this, PlayState* play) {
    this->dyna.actor.world.pos.y -= this->fallAmount;

    if (this->dyna.actor.world.pos.y <= 200.0f) {
        s32 i;
        s16 quakeIndex = Quake_Request(GET_ACTIVE_CAM(play), QUAKE_TYPE_3);

        Quake_SetSpeed(quakeIndex, 28000);
        Quake_SetPerturbations(quakeIndex, 16, 2, 120, 0);
        Quake_SetDuration(quakeIndex, 30);

        for (i = 0; i < ARRAY_COUNT(dustPos); i++) {
            static Vec3f vel = { 0.0f, -1.0f, 0.0f };
            static Vec3f accel = { 0.0f, -1.0f, 0.0f };
            static Color_RGBA8 primColor = { 99, 72, 44, 255 };
            static Color_RGBA8 envColor = { 100, 60, 20, 255 };
            Vec3f pos = dustPos[i];

            func_8002843C(play, &pos, &vel, &accel, &primColor, &envColor, 500, 50, (s32)Rand_ZeroFloat(20.0f) + 20);
        }

        this->dyna.actor.world.pos.y = 200.0f;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_STONE_BOUND);
        this->timer = 70;
        this->actionFunc = BgYdanHasi2_Finish;
    }
}

void BgYdanHasi2_Finish(BgYdanHasi2* this, PlayState* play) {
    if (this->timer == 40)
        Audio_PlaySfxGeneral(NA_SE_SY_CORRECT_CHIME, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);

    if (this->timer == 0) {
        Vec3f pos = { 645.0f, 1600.0f, 640.0f };
        Vec3f focus = GET_PLAYER(play)->actor.world.pos;
        Play_SetCameraAtEye(play, CAM_ID_MAIN, &focus, &pos);
        Player_SetCsActionWithHaltedActors(play, &this->dyna.actor, PLAYER_CSACTION_NONE);
        Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_ALL);
        Letterbox_SetSizeTarget(0);
        Flags_SetSwitch(play, this->switchFlag);
        Play_GetCamera(play, CAM_ID_MAIN)->setting = CAM_SET_DUNGEON0;
        this->actionFunc = BgYdanHasi2_DoNothing;
    }
}

void BgYdanHasi2_DoNothing(BgYdanHasi2* this, PlayState* play) { }

void BgYdanHasi2_Update(Actor* thisx, PlayState* play) {
    BgYdanHasi2* this = (BgYdanHasi2*)thisx;

    if (this->timer > 0)
        this->timer--;

    if (this->actionFunc != NULL)
        this->actionFunc(this, play);
}

void BgYdanHasi2_Draw(Actor* thisx, PlayState* play) {
    BgYdanHasi2* this = (BgYdanHasi2*)thisx;

    Gfx_DrawDListOpa(play, gBridgePiece);
}
