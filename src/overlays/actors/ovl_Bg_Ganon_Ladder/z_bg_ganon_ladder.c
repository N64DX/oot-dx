/*
 * File: z_bg_ganon_ladder.c
 * Overlay: ovl_Bg_Ganon_Ladder
 * Description: Ganon's Lair Ladder
 */

#include "z_bg_ganon_ladder.h"
#include "assets/objects/object_ganon_ladder/object_ganon_ladder.h"
#include "overlays/actors/ovl_Boss_Ganon/z_boss_ganon.h"

#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "play_state.h"

#define FLAGS ACTOR_FLAG_ATTENTION_ENABLED

void BgGanonLadder_Init(Actor* thisx, PlayState* play);
void BgGanonLadder_Destroy(Actor* thisx, PlayState* play);
void BgGanonLadder_Update(Actor* thisx, PlayState* play);
void BgGanonLadder_Draw(Actor* thisx, PlayState* play);

void BgGanonLadder_DoNothing(BgGanonLadder* this, PlayState* play);

void BgGanonLadder_SetupFall(BgGanonLadder* this, PlayState* play);
void BgGanonLadder_Fall(BgGanonLadder* this, PlayState* play);

void BgGanonLadder_Wait(BgGanonLadder* this, PlayState* play);

ActorProfile Bg_Ganon_Ladder_Profile = {
    /**/ ACTOR_BG_GANON_LADDER,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GANON_LADDER,
    /**/ sizeof(BgGanonLadder),
    /**/ BgGanonLadder_Init,
    /**/ BgGanonLadder_Destroy,
    /**/ BgGanonLadder_Update,
    /**/ BgGanonLadder_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeScale, 32767, ICHAIN_STOP),
};

void BgGanonLadder_SetupAction(BgGanonLadder* this, BgGanonLadderActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void BgGanonLadder_Init(Actor* thisx, PlayState* play) {
    BgGanonLadder* this = (BgGanonLadder*)thisx;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);

    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&ganon_boss_room_0DL_005E50_mesh_001_collisionHeader, &colHeader);

    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    Actor_SetScale(&this->dyna.actor, 0.1f);

    BgGanonLadder_SetupAction(this, BgGanonLadder_Wait);
}

void BgGanonLadder_Destroy(Actor* thisx, PlayState* play) {
    BgGanonLadder* this = (BgGanonLadder*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgGanonLadder_DoNothing(BgGanonLadder* this, PlayState* play) {}

static u32 sFallTimer = 0;
static u8 sFallState = 0;

void BgGanonLadder_SetupFall(BgGanonLadder* this, PlayState* play) {
    Actor_RequestQuakeAndRumble(&this->dyna.actor, play, 10, 40);
    this->actionFunc = BgGanonLadder_Fall;
    sFallTimer = 0;
    sFallState = 0;
}

f32 BgGanonLadder_FrameLerp(f32 offset, f32 frames) {
    f32 lerp = ((f32)sFallTimer - offset) * (1.0f / frames);
    return CLAMP(lerp, 0.0f, 1.0f);
}

f32 BgGanonLadder_EaseOutQuad(f32 x) {
    f32 temp = (1.0f - x);
    return 1.0f - temp * temp;
}

f32 BgGanonLadder_EaseInQuad(f32 x) {
    return x * x;
}

void BgGanonLadder_SlamEffect(BgGanonLadder* this, PlayState* play) {
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_STONEDOOR_STOP);
}

void BgGanonLadder_Fall(BgGanonLadder* this, PlayState* play) {
    f32 lerp;
    sFallTimer++;

    switch (sFallState) {
        case 0:
            lerp = BgGanonLadder_FrameLerp(0.0f, 20.0f);
            this->dyna.actor.world.pos.y = F32_LERP(0.0f, -740.0f, lerp);
            if (sFallTimer >= 20) {
                BgGanonLadder_SlamEffect(this, play);
                sFallState = 1;
            }
            break;
        case 1:
            lerp = BgGanonLadder_EaseOutQuad(BgGanonLadder_FrameLerp(20.0f, 10.0f));
            this->dyna.actor.world.pos.y = F32_LERP(-740.0f, -690.0f, lerp);
            if (sFallTimer >= 30) {
                sFallState = 2;
            }
            break;
        case 2:
            lerp = BgGanonLadder_EaseInQuad(BgGanonLadder_FrameLerp(30.0f, 5.0f));
            this->dyna.actor.world.pos.y = F32_LERP(-690.0f, -740.0f, lerp);
            if (sFallTimer >= 35) {
                BgGanonLadder_SlamEffect(this, play);
                sFallState = 3;
            }
            break;
        case 3:
            lerp = BgGanonLadder_EaseOutQuad(BgGanonLadder_FrameLerp(35.0f, 3.0f));
            this->dyna.actor.world.pos.y = F32_LERP(-740.0f, -720.0f, lerp);
            if (sFallTimer >= 38)
                sFallState = 4;
            break;
        case 4:
            lerp = BgGanonLadder_EaseInQuad(BgGanonLadder_FrameLerp(38.0f, 2.0f));
            this->dyna.actor.world.pos.y = F32_LERP(-720.0f, -740.0f, lerp);
            if (sFallTimer >= 40) {
                BgGanonLadder_SlamEffect(this, play);
                sFallState = 5;
            }
            break;
        case 5:
            this->actionFunc = BgGanonLadder_DoNothing;
            break;
    }
}

void BgGanonLadder_Update(Actor* thisx, PlayState* play) {
    BgGanonLadder* this = (BgGanonLadder*)thisx;

    this->actionFunc(this, play);
}

static BossGanon* sGanondorf;

void BgGanonLadder_Wait(BgGanonLadder* this, PlayState* play) {
    if (sGanondorf == NULL) {
        Actor* actor = play->actorCtx.actorLists[ACTORCAT_BOSS].head;

        while(actor != NULL) {
            osSyncPrintf("actor id: %i, ACTOR_BOSS_GANON: %i\n", actor->id, ACTOR_BOSS_GANON);

            if (actor->id == ACTOR_BOSS_GANON) {
                sGanondorf = (BossGanon*)actor;
                break;
            }

            actor = actor->next;
        }
    }

    if (sGanondorf == NULL)
        return;

    if (sGanondorf->ladderFall)
        BgGanonLadder_SetupFall(this, play);
}

void BgGanonLadder_Draw(Actor* thisx, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, "../z_bg_ganon_ladder.c", 177);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, "../z_bg_ganon_ladder.c", 181);
    gSPDisplayList(POLY_OPA_DISP++, ganon_boss_room_0DL_005E50_mesh_001);
    CLOSE_DISPS(play->state.gfxCtx, "../z_bg_ganon_ladder.c", 181);
}