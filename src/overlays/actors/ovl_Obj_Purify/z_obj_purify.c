/*
 * File: z_obj_purify.c
 * Overlay: ovl_Obj_Purify
 * Description: Poisoned/Purified Water Elements
 */

#include "z_obj_purify.h"

#include "z_lib.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h" 
#include "array_count.h"
#include "player.h"
#include "play_state.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void ObjPurify_Init(Actor* thisx, struct PlayState* play);
void ObjPurify_Destroy(Actor* thisx, struct PlayState* play);
void ObjPurify_Update(Actor* thisx, struct PlayState* play);

void func_80A84EC0(ObjPurify* this, struct PlayState* play);
void func_80A851C8(Actor* thisx, struct PlayState* play);
void func_80A85074(ObjPurify* this, struct PlayState* play);
void func_80A850B0(ObjPurify* this);
void func_80A850E8(ObjPurify* this, struct PlayState* play);
void func_80A85304(Actor* thisx, struct PlayState* play);
void func_80A84FB4(ObjPurify* this, struct PlayState* play);
void func_80A85010(ObjPurify* this, struct PlayState* play);
void ObjPurify_DoNothing(ObjPurify* this, struct PlayState* play);
void func_80A85048(ObjPurify* this);
void func_80A84FA0(ObjPurify* this);
void func_80A8515C(ObjPurify* this);
void func_80A84FEC(ObjPurify* this);
void func_80A84EAC(ObjPurify* this);

typedef struct ObjPurifyInfo {
    /* 0x00 */ s16 objectId;
    /* 0x04 */ f32 scale;
    /* 0x08 */ Gfx* opaDLists[2];
    /* 0x10 */ Gfx* xluDLists[2];
    /* 0x20 */ CollisionHeader* colHeader;
    /* 0x24 */ s32 isDekuCity;
} ObjPurifyInfo; // size = 0x28

ActorProfile Obj_Purify_Profile = {
    /**/ ACTOR_OBJ_PURIFY,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ObjPurify),
    /**/ ObjPurify_Init,
    /**/ ObjPurify_Destroy,
    /**/ ObjPurify_Update,
    /**/ NULL,
};

ObjPurifyInfo sObjPurifyInfo[] = {
    {
        OBJECT_NUMA_OBJ,
        0.1f,
        { NULL, NULL },
        { object_numa_obj_DL_0128E0, object_numa_obj_DL_012D90 },
        &object_numa_obj_Colheader_012818,
        false,
    },
    {
        OBJECT_NUMA_OBJ,
        0.1f,
        { NULL, NULL },
        { object_numa_obj_DL_012A60, object_numa_obj_DL_012F10 },
        &object_numa_obj_Colheader_012818,
        false,
    },
    {
        OBJECT_NUMA_OBJ,
        0.1f,
        { NULL, NULL },
        { object_numa_obj_DL_012BF0, object_numa_obj_DL_0130A0 },
        &object_numa_obj_Colheader_012818,
        false,
    },
    {
        OBJECT_DEKUCITY_OBJ,
        1.0f,
        { object_dekucity_obj_DL_001ED8, object_dekucity_obj_DL_003998 },
        { object_dekucity_obj_DL_001D80, NULL },
        NULL,
        true,
    },
};

void ObjPurify_SetSysMatrix(f32 yPos) {
    Matrix_GetCurrent()->yw = yPos;
}

s32 ObjPurify_IsPurified(ObjPurify* this) {
    ObjPurifyInfo* info = &sObjPurifyInfo[OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor)];

    if (info->isDekuCity) {
        if (Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL))
            return true;
    } else {
        if (Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL_TEMPLE))
            return true;
    }
    return false;
}

void ObjPurify_Init(Actor* thisx, PlayState* play) {
    ObjPurify* this = (ObjPurify*)thisx;
    ObjPurifyInfo* info = &sObjPurifyInfo[OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor)];
    s32 sp20 = OBJPURIFY_GET_UNK_FLAG(thisx);

    Actor_SetScale(&this->dyna.actor, info->scale);
    if (sp20 == 1)
        DynaPolyActor_Init(&this->dyna, 0);
    this->objectSlot = Object_GetSlot(&play->objectCtx, info->objectId);
    if (this->objectSlot < 0)
        Actor_Kill(&this->dyna.actor);
    else if (sp20 == 0)
        func_80A84EAC(this);
    else if (ObjPurify_IsPurified(this))
        Actor_Kill(&this->dyna.actor);
    else func_80A84EAC(this);
}

void ObjPurify_Destroy(Actor* thisx, PlayState* play) {
    ObjPurify* this = (ObjPurify*)thisx;
    if (OBJPURIFY_GET_UNK_FLAG(&this->dyna.actor) == 1)
        DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void func_80A84EAC(ObjPurify* this) {
    this->actionFunc = func_80A84EC0;
}

void func_80A84EC0(ObjPurify* this, PlayState* play) {
    s32 sp28;
    s32 index;

    if (Object_IsLoaded(&play->objectCtx, this->objectSlot)) {
        sp28 = OBJPURIFY_GET_UNK_FLAG(&this->dyna.actor);
        index = OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor);
        this->dyna.actor.objectSlot = this->objectSlot;
        Actor_SetObjectDependency(play, &this->dyna.actor);
        if (sp28 == 1) {
            CollisionHeader* header = NULL;
            CollisionHeader_GetVirtual(sObjPurifyInfo[index].colHeader, &header);
            this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
            func_80A84FA0(this);
        } else if (ObjPurify_IsPurified(this))
            func_80A8515C(this);
        else func_80A84FEC(this);
    }
}

void func_80A84FA0(ObjPurify* this) {
    this->actionFunc = func_80A84FB4;
}

void func_80A84FB4(ObjPurify* this, PlayState* play) {
    if (ObjPurify_IsPurified(this))
        Actor_Kill(&this->dyna.actor);
}

void func_80A84FEC(ObjPurify* this) {
    this->dyna.actor.draw = func_80A851C8;
    this->gfxIndex = 0;
    this->actionFunc = func_80A85010;
}

void func_80A85010(ObjPurify* this, PlayState* play) {
    if (ObjPurify_IsPurified(this))
        func_80A85048(this);
}

void func_80A85048(ObjPurify* this) {
    this->dyna.actor.draw = func_80A851C8;
    this->gfxIndex = 0;
    this->actionFunc = func_80A85074;
    this->timer = 30;
}

void func_80A85074(ObjPurify* this, PlayState* play) {
    this->timer--;
    if (this->timer <= 0)
        func_80A850B0(this);
}

void func_80A850B0(ObjPurify* this) {
    f32 yPos = this->dyna.actor.home.pos.y;
    this->dyna.actor.draw = func_80A85304;
    this->unk168[1] = yPos - 90.0f;
    this->actionFunc = func_80A850E8;
    this->unk168[0] = yPos;
}

void func_80A850E8(ObjPurify* this, PlayState* play) {
    Math_StepToF(&this->unk168[0], this->dyna.actor.home.pos.y - 90.0f, 0.9f);
    if (Math_StepToF(&this->unk168[1], this->dyna.actor.home.pos.y, 0.9f))
        func_80A8515C(this);
}

void func_80A8515C(ObjPurify* this) {
    this->dyna.actor.flags &= ~ACTOR_FLAG_UPDATE_CULLING_DISABLED;
    this->dyna.actor.draw = func_80A851C8;
    this->gfxIndex = 1;
    this->actionFunc = ObjPurify_DoNothing;
}

void ObjPurify_DoNothing(ObjPurify* this, PlayState* play) { }

void ObjPurify_Update(Actor* thisx, PlayState* play) {
    ObjPurify* this = (ObjPurify*)thisx;
    Player* player = GET_PLAYER(play);
    ObjPurifyInfo* info = &sObjPurifyInfo[OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor)];

    this->actionFunc(this, play);

    if (!info->isDekuCity && OBJPURIFY_GET_UNK_FLAG(&this->dyna.actor) == 0 && player->actor.world.pos.y < this->dyna.actor.world.pos.y && Player_GetEnvironmentalHazard(play) >= PLAYER_ENV_HAZARD_SWIMMING && !(Flags_GetEventChkInf(EVENTCHKINF_PURIFIED_WOODFALL_TEMPLE)))
        player->swimmingInPoisonWater = true;
}

void func_80A851C8(Actor* thisx, PlayState* play) {
    ObjPurify* this = (ObjPurify*)thisx;
    ObjPurifyInfo* info = &sObjPurifyInfo[OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor)];
    Gfx* opaDList = info->opaDLists[this->gfxIndex];
    Gfx* xluDList = info->xluDLists[this->gfxIndex];

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    if (opaDList != NULL) {
        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_OPA_DISP++, opaDList);
    }
    if (xluDList != NULL) {
        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, xluDList);
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void func_80A85304(Actor* thisx, PlayState* play) {
    ObjPurify* this = (ObjPurify*)thisx;
    ObjPurifyInfo* info = &sObjPurifyInfo[OBJPURIFY_GET_INFO_INDEX(&this->dyna.actor)];
    s32 sp6C[2];
    s32 i;
    s32 index;

    if (this->unk168[1] < this->unk168[0]) {
        sp6C[0] = 1;
        sp6C[1] = 0;
    } else {
        sp6C[0] = 0;
        sp6C[1] = 1;
    }

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    for (i=0; i<ARRAY_COUNT(sp6C); i++) {
        index = sp6C[i];
        ObjPurify_SetSysMatrix(this->unk168[index]);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, info->xluDLists[index]);
    };

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
