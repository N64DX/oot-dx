/*
 * File: z_bg_f40_block.c
 * Overlay: ovl_Bg_F40_Block
 * Description: Stone Tower Block
 */

#include "z_bg_f40_block.h"

#include "ichain.h"
#include "sfx.h"
#include "z_lib.h"
#include "segmented_address.h"
#include "play_state.h"

#include "assets/objects/object_f40_obj/object_f40_obj.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgF40Block_Init(Actor* thisx, struct PlayState* play);
void BgF40Block_Destroy(Actor* thisx, struct PlayState* play);
void BgF40Block_Update(Actor* thisx, struct PlayState* play);
void BgF40Block_Draw(Actor* thisx, struct PlayState* play);

void BgF40Block_80BC41AC(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC4228(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC4344(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC4380(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC43CC(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC4448(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC44F4(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC4530(BgF40Block* this, struct PlayState* play);
void BgF40Block_80BC457C(BgF40Block* this, struct PlayState* play);

ActorProfile Bg_F40_Block_Profile = {
    /**/ ACTOR_BG_F40_BLOCK,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_F40_OBJ,
    /**/ sizeof(BgF40Block),
    /**/ BgF40Block_Init,
    /**/ BgF40Block_Destroy,
    /**/ BgF40Block_Update,
    /**/ BgF40Block_Draw,
};

static Vec3f D_80BC4620[] = {
    {  1.0f, 0.0f, 0.0f }, { 0.0f,  1.0f, 0.0f }, { 0.0f, 0.0f,  1.0f },
    { -1.0f, 0.0f, 0.0f }, { 0.0f, -1.0f, 0.0f }, { 0.0f, 0.0f, -1.0f },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 400, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

bool BgF40Block_80BC3980(BgF40Block* this, PlayState* play) {
    Vec3s* points;

    this->unk_160 = 0;
    this->unk_164 = 0;

    if (BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor) != BGF40BLOCK_PATH_INDEX_NONE) {
        this->path = &play->pathList[BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor)];
        if (this->path != NULL) {
            points = SEGMENTED_TO_VIRTUAL(this->path->points);

            this->dyna.actor.world.pos.x = points->x;
            this->dyna.actor.world.pos.y = points->y;
            this->dyna.actor.world.pos.z = points->z;
        }
    } else this->path = NULL;

    return false;
}

bool BgF40Block_80BC3A2C(BgF40Block* this, PlayState* play) {
    Vec3s* points;

    this->unk_160 = this->path->count - 1;
    this->unk_164 = this->path->count - 1;

    if (BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor) != BGF40BLOCK_PATH_INDEX_NONE) {
        this->path = &play->pathList[BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor)];
        if (this->path != NULL) {
            points = SEGMENTED_TO_VIRTUAL(this->path->points);
            points += this->unk_164;

            this->dyna.actor.world.pos.x = points->x;
            this->dyna.actor.world.pos.y = points->y;
            this->dyna.actor.world.pos.z = points->z;
        }
    } else this->path = NULL;

    return false;
}

bool BgF40Block_80BC3B00(BgF40Block* this) {
    Path* path;
    Vec3s* points;
    Vec3f sp28, sp24;

    if (this->path == NULL)
        return true;
    if (this->unk_160 == this->unk_164)
        return true;

    path = this->path;
    points = SEGMENTED_TO_VIRTUAL(path->points);
    points += this->unk_164;

    sp28.x = points->x;
    sp28.y = points->y;
    sp28.z = points->z;

    if (this->unk_168 == 6) {
        sp24.x = sp28.x - this->dyna.actor.world.pos.x;
        sp24.y = sp28.y - this->dyna.actor.world.pos.y;
        sp24.z = sp28.z - this->dyna.actor.world.pos.z;

        if (sp24.x > 10.0f)
            this->unk_168 = 0;
        if (sp24.y > 10.0f)
            this->unk_168 = 1;
        if (sp24.z > 10.0f)
            this->unk_168 = 2;
        if (sp24.x < -10.0f)
            this->unk_168 = 3;
        if (sp24.y < -10.0f)
            this->unk_168 = 4;
        if (sp24.z < -10.0f)
            this->unk_168 = 5;
    }

    if (Math_Vec3f_StepTo(&this->dyna.actor.world.pos, &sp28, this->dyna.actor.speed) <= 0.0f) {
        this->unk_168 = 6;
        this->unk_160 = this->unk_164;
        return true;
    }
    return false;
}

bool BgF40Block_80BC3CA4(BgF40Block* this, PlayState* play) {
    return play->csCtx.state == CS_STATE_IDLE;
}

bool BgF40Block_80BC3D08(BgF40Block* this, PlayState* play, s32 arg2) {
    CollisionPoly* sp54;
    Vec3f sp48, sp3C, sp30;

    if (this->unk_168 == 6)
        return false;

    if (arg2) {
        sp48.x = (D_80BC4620[this->unk_168].x * ((800.0f * this->dyna.actor.scale.x) - (this->dyna.actor.speed * 0.5f))) + this->dyna.actor.world.pos.x;
        sp48.y = (D_80BC4620[this->unk_168].y * ((800.0f * this->dyna.actor.scale.y) - (this->dyna.actor.speed * 0.5f))) + this->dyna.actor.world.pos.y;
        sp48.z = (D_80BC4620[this->unk_168].z * ((800.0f * this->dyna.actor.scale.z) - (this->dyna.actor.speed * 0.5f))) + this->dyna.actor.world.pos.z;
        sp3C.x = (D_80BC4620[this->unk_168].x * this->dyna.actor.speed) + sp48.x;
        sp3C.y = (D_80BC4620[this->unk_168].y * this->dyna.actor.speed) + sp48.y;
        sp3C.z = (D_80BC4620[this->unk_168].z * this->dyna.actor.speed) + sp48.z;
    } else {
        sp3C.x = (D_80BC4620[this->unk_168].x * 800.0f * this->dyna.actor.scale.x) + this->dyna.actor.world.pos.x;
        sp3C.y = (D_80BC4620[this->unk_168].y * 800.0f * this->dyna.actor.scale.y) + this->dyna.actor.world.pos.y;
        sp3C.z = (D_80BC4620[this->unk_168].z * 800.0f * this->dyna.actor.scale.z) + this->dyna.actor.world.pos.z;
        sp48.x = sp3C.x - (D_80BC4620[this->unk_168].x * this->dyna.actor.speed * 1.5f);
        sp48.y = sp3C.y - (D_80BC4620[this->unk_168].y * this->dyna.actor.speed * 1.5f);
        sp48.z = sp3C.z - (D_80BC4620[this->unk_168].z * this->dyna.actor.speed * 1.5f);
    }

    if (BgCheck_AnyLineTest1(&play->colCtx, &sp48, &sp3C, &sp30, &sp54, true)) {
        if (!arg2) {
            this->dyna.actor.world.pos.x -= sp3C.x - sp30.x;
            this->dyna.actor.world.pos.y -= sp3C.y - sp30.y;
            this->dyna.actor.world.pos.z -= sp3C.z - sp30.z;
        }
        return true;
    }

    return false;
}

void func_80BC4038(BgF40Block* this) {
    s32 temp = this->unk_160;

    this->unk_160 = this->unk_164;
    this->unk_164 = temp;
    this->unk_168 = 6;
}

void BgF40Block_Init(Actor* thisx, PlayState* play) {
    BgF40Block* this = (BgF40Block*)thisx;

    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&gStoneTowerBlockCol, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);

    if (BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor) != BGF40BLOCK_PATH_INDEX_NONE)
        this->path = &play->pathList[BGF40BLOCK_GET_PATH_INDEX(&this->dyna.actor)];
    else this->path = NULL;

    if (this->path != NULL) {
        if (Flags_GetSwitch(play, BGF40BLOCK_GET_SWITCH_FLAG(&this->dyna.actor))) {
            this->actionFunc = BgF40Block_80BC4530;
            this->dyna.actor.speed = 40.0f;
            BgF40Block_80BC3A2C(this, play);
        } else {
            this->actionFunc = BgF40Block_80BC4380;
            this->dyna.actor.speed = 20.0f;
            BgF40Block_80BC3980(this, play);
        }
    } else this->actionFunc = BgF40Block_80BC457C;
    this->unk_168 = 6;
}

void BgF40Block_Destroy(Actor* thisx, PlayState* play) {
    BgF40Block* this = (BgF40Block*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgF40Block_80BC41AC(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3D08(this, play, true)) {
        if (!Flags_GetSwitch(play, BGF40BLOCK_GET_SWITCH_FLAG(&this->dyna.actor))) {
            func_80BC4038(this);
            this->actionFunc = BgF40Block_80BC44F4;
        }
    } else this->actionFunc = BgF40Block_80BC4344;
}

void BgF40Block_80BC4228(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3B00(this)) {
        this->dyna.actor.speed = 20.0f;
        if (this->unk_160 < (this->path->count - 1))
            this->unk_164 = this->unk_160 + 1;
        else {
            this->actionFunc = BgF40Block_80BC4530;
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_STOP_C);
        }
    }

    if (BgF40Block_80BC3D08(this, play, false)) {
        this->actionFunc = BgF40Block_80BC41AC;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_STOP_F);
        return;
    }

    switch (this->unk_168) {
        case 0:
        case 3:
            Actor_PlaySfx_Flagged(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_MOVE_X - SFX_FLAG);
            break;

        case 1:
        case 4:
            Actor_PlaySfx_Flagged(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_MOVE_Y - SFX_FLAG);
            break;

        case 2:
        case 5:
            Actor_PlaySfx_Flagged(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_MOVE_Z - SFX_FLAG);
            break;
    }
}

void BgF40Block_80BC4344(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3CA4(this, play))
        this->actionFunc = BgF40Block_80BC4228;
}

void BgF40Block_80BC4380(BgF40Block* this, PlayState* play) {
    if (Flags_GetSwitch(play, BGF40BLOCK_GET_SWITCH_FLAG(&this->dyna.actor)))
        this->actionFunc = BgF40Block_80BC4344;
}

void BgF40Block_80BC43CC(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3D08(this, play, true)) {
        if (Flags_GetSwitch(play, BGF40BLOCK_GET_SWITCH_FLAG(&this->dyna.actor))) {
            func_80BC4038(this);
            this->actionFunc = BgF40Block_80BC4344;
        }
    } else this->actionFunc = BgF40Block_80BC44F4;
}

void BgF40Block_80BC4448(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3B00(this)) {
        this->dyna.actor.speed = 40.0f;
        if (this->unk_160 > 0)
            this->unk_164 = this->unk_160 - 1;
        else {
            this->actionFunc = BgF40Block_80BC4380;
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_STOP_C);
        }
    }

    if (BgF40Block_80BC3D08(this, play, false)) {
        this->actionFunc = BgF40Block_80BC43CC;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_IKANA_BLOCK_STOP_F);
    }
}

void BgF40Block_80BC44F4(BgF40Block* this, PlayState* play) {
    if (BgF40Block_80BC3CA4(this, play))
        this->actionFunc = BgF40Block_80BC4448;
}

void BgF40Block_80BC4530(BgF40Block* this, PlayState* play) {
    if (!Flags_GetSwitch(play, BGF40BLOCK_GET_SWITCH_FLAG(&this->dyna.actor)))
        this->actionFunc = BgF40Block_80BC44F4;
}

void BgF40Block_80BC457C(BgF40Block* this, PlayState* play) { }

void BgF40Block_Update(Actor* thisx, PlayState* play) {
    BgF40Block* this = (BgF40Block*)thisx;

    this->actionFunc(this, play);

    Math_Vec3f_Copy(&this->dyna.actor.focus.pos, &this->dyna.actor.world.pos);
}

void BgF40Block_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, gStoneTowerBlockDL);
}
