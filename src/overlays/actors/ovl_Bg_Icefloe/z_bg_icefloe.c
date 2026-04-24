/*
 * File: z_bg_icefloe.c
 * Overlay: ovl_Bg_Icefloe
 * Description: Ice Platform Created by Ice Arrow
 */

#include "z_bg_icefloe.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_math.h"
#include "array_count.h"
#include "ichain.h"
#include "sfx.h"
#include "skin_matrix.h"
#include "z_lib.h"
#include "effect.h"
#include "rand.h"
#include "play_state.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgIcefloe_Init(Actor* thisx, struct PlayState* play);
void BgIcefloe_Destroy(Actor* thisx, struct PlayState* play);
void BgIcefloe_Update(Actor* thisx, struct PlayState* play);
void BgIcefloe_Draw(Actor* thisx, struct PlayState* play);

void func_80AC4A80(BgIcefloe* this, struct PlayState* play);
void BgIcefloe_Grow(BgIcefloe* this, struct PlayState* play);
void func_80AC4C18(BgIcefloe* this);
void func_80AC4D2C(BgIcefloe* this, struct PlayState* play);
void func_80AC4C34(BgIcefloe* this, struct PlayState* play);
void func_80AC4CF0(BgIcefloe* this);

ActorProfile Bg_Icefloe_Profile = {
    /**/ ACTOR_BG_ICEFLOE,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_ICEFLOE,
    /**/ sizeof(BgIcefloe),
    /**/ BgIcefloe_Init,
    /**/ BgIcefloe_Destroy,
    /**/ BgIcefloe_Update,
    /**/ BgIcefloe_Draw,
};
static BgIcefloe* sSpawnedInstances[] = { NULL, NULL, NULL };

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 0, ICHAIN_STOP),
};

static s32 numberSpawned;

void BgIcefloe_Init(Actor* thisx, PlayState* play) {
    BgIcefloe* this = (BgIcefloe*)thisx;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    CollisionHeader_GetVirtual(&gIcefloePlatformCol, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    
    if (numberSpawned >= ARRAY_COUNT(sSpawnedInstances)) {
        s32 i;

        if (sSpawnedInstances[0] != NULL && sSpawnedInstances[0]->dyna.actor.update != NULL && sSpawnedInstances[0]->actionFunc != func_80AC4D2C)
            func_80AC4CF0(sSpawnedInstances[0]);
        for (i=0; i<ARRAY_COUNT(sSpawnedInstances)-1; i++)
            sSpawnedInstances[i] = sSpawnedInstances[i + 1];
        sSpawnedInstances[ARRAY_COUNT(sSpawnedInstances) - 1] = this;
    }
    else sSpawnedInstances[numberSpawned] = this;
    numberSpawned++;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 10.0f;
    func_80AC4A80(this, play);
}

void BgIcefloe_Destroy(Actor* thisx, PlayState* play) {
    BgIcefloe* this = (BgIcefloe*)thisx;
    s32 i;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    numberSpawned--;

    for (i=0; i<3; i++) {
        if (sSpawnedInstances[i] == this) {
            sSpawnedInstances[i] = NULL;
            break;
        }
    }
}

void func_80AC4A80(BgIcefloe* this, PlayState* play) {
    this->timer = 20;
    SkinMatrix_Vec3fMtxFMultXYZW(&play->viewProjectionMtxF, &this->dyna.actor.world.pos, &this->dyna.actor.projectedPos, &this->dyna.actor.projectedW);
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ICE_FREEZE2);
    this->actionFunc = BgIcefloe_Grow;
}

static Vec3f sIceBlockAccel = { 0.0f, -0.5f, 0.0f };

void BgIcefloe_Grow(BgIcefloe* this, PlayState* play) {
    this->dyna.actor.scale.x += (0.65f * 0.01f);
    this->dyna.actor.scale.z += (0.65f * 0.01f);
    this->dyna.actor.scale.y += (0.65f * 0.01f);
    this->timer--;
    if (this->timer == 0)
        func_80AC4C18(this);
}

void func_80AC4C18(BgIcefloe* this) {
    this->timer = this->dyna.actor.params;
    this->actionFunc = func_80AC4C34;
}

void func_80AC4C34(BgIcefloe* this, PlayState* play) {
    WaterBox* waterBox;

    this->timer--;
    if ((this->timer == 0) || !WaterBox_GetSurfaceImpl(play, &play->colCtx, this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.z, &this->dyna.actor.home.pos.y, &waterBox)) 
        func_80AC4CF0(this);
    else this->dyna.actor.world.pos.y = (Math_SinF(this->timer * (M_PI / 30)) * 3.0f) + (this->dyna.actor.home.pos.y + 10.0f);
}

void func_80AC4CF0(BgIcefloe* this) {
    this->timer = 50;
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ICE_MELT);
    this->actionFunc = func_80AC4D2C;
}

void func_80AC4D2C(BgIcefloe* this, PlayState* play) {
    this->timer--;
    if ((this->timer >= 38) && !(this->timer % 2)) {
        Vec3f velocity;
        Vec3f position;

        velocity.y = (this->timer - 38) * (1 / 12.0f);
        velocity.x = Rand_CenteredFloat(1.5f) * velocity.y;
        velocity.z = Rand_CenteredFloat(1.5f) * velocity.y;
        velocity.y += 0.8f;
        position.x = this->dyna.actor.world.pos.x + (2.0f * velocity.x);
        position.z = this->dyna.actor.world.pos.z + (2.0f * velocity.z);
        position.y = this->dyna.actor.world.pos.y + 3.0f;
        EffectSsIceSmoke_Spawn(play, &position, &velocity, &gZeroVec3f, 200);
    }
    if (this->timer < 25) {
        this->dyna.actor.scale.x -= 0.0052f;
        this->dyna.actor.scale.z -= 0.0052f;
    }
    this->dyna.actor.scale.y -= 0.0026f;
    if (this->dyna.actor.scale.y <= 0.0f)
        Actor_Kill(&this->dyna.actor);
}

void BgIcefloe_Update(Actor* thisx, PlayState* play) {
    BgIcefloe* this = (BgIcefloe*)thisx;

    if (!Play_InCsMode(play))
        this->actionFunc(this, play);
}

void BgIcefloe_Draw(Actor* thisx, PlayState* play) {
    BgIcefloe* this = (BgIcefloe*)thisx;

    Gfx_DrawDListOpa(play, gIcefloeIcePlatformDL);
}
