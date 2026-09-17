/*
 * File: z_obj_wturn.c
 * Overlay: ovl_Obj_Wturn
 * Description: Stone Tower Temple Inverter
 */

#include "z_obj_wturn.h"

#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"
#include "ocarina.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_UPDATE_DURING_OCARINA)

void ObjWturn_Init(Actor* thisx, PlayState* play);
void ObjWturn_Update(Actor* thisx, PlayState* play);

void ObjWturn_Idle(ObjWturn* this, struct PlayState* play);
void ObjWturn_SetupAttention(ObjWturn* this, struct PlayState* play);
void ObjWturn_AwaitAttention(ObjWturn* this, struct PlayState* play);
void ObjWturn_InversionCs(ObjWturn* this, struct PlayState* play);
void ObjWturn_SetupFallingCs(ObjWturn* this, struct PlayState* play);
void ObjWturn_FallingCs(ObjWturn* this, struct PlayState* play);

ActorProfile Obj_Wturn_Profile = {
    /**/ ACTOR_OBJ_WTURN,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ObjWturn),
    /**/ ObjWturn_Init,
    /**/ Actor_Noop,
    /**/ ObjWturn_Update,
    /**/ NULL,
};

void ObjWturn_Init(Actor* thisx, PlayState* play) {
    ObjWturn* this = (ObjWturn*)thisx;

    this->actionFunc = ObjWturn_Idle;
}

void ObjWturn_Idle(ObjWturn* this, PlayState* play) {
    if (play->msgCtx.ocarinaMode == OCARINA_MODE_02 && gSaveContext.respawn[RESPAWN_MODE_RETURN].entranceIndex == ENTR_STONE_TOWER_1) {
        Flags_UnsetSwitch(play, OBJWTURN_GET_SWITCH_FLAG(&this->actor));
        Actor_Kill(&this->actor);
    } else if ((Flags_GetSwitch(play, OBJWTURN_GET_SWITCH_FLAG(&this->actor)) && play->sceneId == SCENE_STONE_TOWER) || (!Flags_GetSwitch(play, OBJWTURN_GET_SWITCH_FLAG(&this->actor)) && play->sceneId == SCENE_STONE_TOWER_INVERTED))
        ObjWturn_SetupAttention(this, play);
}

static Actor* ObjWturn_FindSwitch(ObjWturn* this, PlayState* play) {
    Actor* actor = play->actorCtx.actorLists[ACTORCAT_SWITCH].head;

    while (actor != NULL) {
        if (actor->id == ACTOR_OBJ_LIGHTSWITCH && PARAMS_GET_U(actor->params, 8, 6) == OBJWTURN_GET_SWITCH_FLAG(&this->actor))
            return actor;
        actor = actor->next;
    }
    return NULL;
}

static Camera* ObjWturn_FindSwitchAttentionCam(ObjWturn* this, PlayState* play) {
    Actor* target = ObjWturn_FindSwitch(this, play);
    s16 camId;

    if (target == NULL)
        return NULL;
    camId = play->cameraPtrs[CAM_ID_MAIN]->childCamId;
    while (camId != CAM_ID_MAIN) {
        Camera* cam = play->cameraPtrs[camId];
        if (cam == NULL)
            break;
        if (cam->csId == 5010 && cam->target == target)
            return cam;
        camId = cam->childCamId;
    }
    return NULL;
}

void ObjWturn_SetupAttention(ObjWturn* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f subCamEye, subCamAt;
    Camera* attCam;

    this->subCamId = Play_CreateSubCamera(play);
    if (this->subCamId != CAM_ID_NONE)
        Play_RequestCameraSetting(play, this->subCamId, CAM_SET_FREE0);
    subCamAt.x = player->actor.focus.pos.x;
    subCamAt.z = player->actor.focus.pos.z;
    subCamAt.y = player->actor.focus.pos.y;
    subCamEye.x = (Math_SinS(this->actor.shape.rot.y) * 150.0f) + subCamAt.x;
    subCamEye.z = (Math_CosS(this->actor.shape.rot.y) * 150.0f) + subCamAt.z;
    subCamEye.y = subCamAt.y + 4.0f;
    if (this->subCamId != CAM_ID_NONE)
        Play_SetCameraAtEye(play, this->subCamId, &subCamAt, &subCamEye);

    attCam = ObjWturn_FindSwitchAttentionCam(this, play);
    if (attCam != NULL && this->subCamId != CAM_ID_NONE) {
        attCam->parentCamId = this->subCamId;
        this->attentionTimer = 25;
    } else this->attentionTimer = 0;
    this->actionFunc = ObjWturn_AwaitAttention;
}

void ObjWturn_AwaitAttention(ObjWturn* this, struct PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f subCamEye, subCamAt;

    if (this->attentionTimer > 0) {
        this->attentionTimer--;
        return;
    }
    if (this->subCamId != CAM_ID_NONE) {
        Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
        Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
    }

    Play_EnableMotionBlur(140);
    Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_21);
    subCamAt.x = player->actor.focus.pos.x;
    subCamAt.z = player->actor.focus.pos.z;
    subCamAt.y = player->actor.focus.pos.y;
    subCamEye.x = (Math_SinS(this->actor.shape.rot.y) * 150.0f) + subCamAt.x;
    subCamEye.z = (Math_CosS(this->actor.shape.rot.y) * 150.0f) + subCamAt.z;
    subCamEye.y = subCamAt.y + 4.0f;
    if (this->subCamId != CAM_ID_NONE)
        Play_SetCameraAtEye(play, this->subCamId, &subCamAt, &subCamEye);
    this->actionFunc = ObjWturn_InversionCs;
}

void ObjWturn_InversionCs(ObjWturn* this, PlayState* play) {
    if (Math_ScaledStepToS(&this->actor.shape.rot.z, -0x8000, 0x200))
        ObjWturn_SetupFallingCs(this, play);
    Actor_PlaySfx_FlaggedCentered2(&this->actor, NA_SE_EV_EARTHQUAKE_TOWER - SFX_FLAG);
    Play_SetCameraRoll(play, this->subCamId, this->actor.shape.rot.z);
}

void ObjWturn_SetupFallingCs(ObjWturn* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    this->actor.world.pos.y += this->actor.yDistToPlayer;
    player->actor.shape.shadowAlpha = 0;
    Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_104);
    Player_PlaySfx(player, NA_SE_VO_LI_FLIP_KID);
    this->fallingFrame = 0;
    Play_DisableMotionBlur();
    this->actionFunc = ObjWturn_FallingCs;
}

void ObjWturn_FallingCs(ObjWturn* this, PlayState* play) {
    static Vec3f sSubCamUp = { 0.0f, -1.0f, 0.0f };
    Camera* subCam = Play_GetCamera(play, this->subCamId);
    Player* player = GET_PLAYER(play);

    this->fallingFrame++;
    player->actor.world.pos.y = this->actor.world.pos.y + this->fallingFrame * 4.0f;
    Play_SetCameraAtEyeUp(play, this->subCamId, &player->actor.focus.pos, &subCam->eye, &sSubCamUp);
    if (this->fallingFrame == 1) {
        play->transitionType = TRANS_TYPE_64;
        gSaveContext.nextTransitionType = TRANS_TYPE_FADE_WHITE;
        gSaveContext.nextCutsceneIndex = 0;
        if (play->sceneId == SCENE_STONE_TOWER)
            play->nextEntranceIndex = ENTR_STONE_TOWER_INVERTED_0;
        else play->nextEntranceIndex = ENTR_STONE_TOWER_1;
        play->transitionTrigger = TRANS_TRIGGER_START;
    }
}

void ObjWturn_Update(Actor* thisx, PlayState* play) {
    ObjWturn* this = (ObjWturn*)thisx;

    this->actionFunc(this, play);
}
