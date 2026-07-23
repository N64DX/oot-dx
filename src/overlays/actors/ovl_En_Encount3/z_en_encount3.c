/*
 * File: z_en_encount3.c
 * Overlay: ovl_En_Encount3
 * Description: Garo spawner
 */

#include "z_en_encount3.h"

#include "gfx_setupdl.h"
#include "sys_matrix.h" 
#include "sys_math.h" 
#include "z_lib.h"
#include "play_state.h"
#include "save.h"

#include "assets/objects/object_big_fwall/object_big_fwall.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED | ACTOR_FLAG_LOCK_ON_DISABLED)

void EnEncount3_Init(Actor* thisx, struct PlayState* play);
void EnEncount3_Destroy(Actor* thisx, struct PlayState* play);
void EnEncount3_Update(Actor* thisx, struct PlayState* play);
void EnEncount3_Draw(Actor* thisx, struct PlayState* play);

void EnEncount3_SetupCheckToActivate(EnEncount3* this);

void EnEncount3_CheckToActivate(EnEncount3* this, struct PlayState* play);
void EnEncount3_SetSwitch(EnEncount3* this, struct PlayState* play);
void func_809AD1EC(EnEncount3* this, struct PlayState* play);

ActorProfile En_Encount3_Profile = {
    /**/ ACTOR_EN_ENCOUNT3,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_BIG_FWALL,
    /**/ sizeof(EnEncount3),
    /**/ EnEncount3_Init,
    /**/ EnEncount3_Destroy,
    /**/ EnEncount3_Update,
    /**/ EnEncount3_Draw,
};

static u16 gTimer = 0;
static u8 gCount = 0;
u8 spawnedRingOfFire = false;

void EnEncount3_Init(Actor* thisx, PlayState* play) {
    EnEncount3* this = (EnEncount3*)thisx;

    this->switchFlag = ENCOUNT3_GET_SWITCH_FLAG(thisx);
    this->unk16C = ENCOUNT3_GET_ROTZ(thisx) * 10.0f;
    if (this->unk16C < 10.0f)
        this->unk16C = 10.0f;
    else if (this->unk16C > 1000.0f)
        this->unk16C = 1000.0f;
    if (this->switchFlag == ENCOUNT3_SWITCH_FLAG_NONE)
        this->switchFlag = -1;
    if (this->switchFlag > -1 && Flags_GetSwitch(play, this->switchFlag))
        Actor_Kill(&this->actor);
    this->actor.flags |= ACTOR_FLAG_LOCK_ON_DISABLED;
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    EnEncount3_SetupCheckToActivate(this);

    gTimer = 0;
    gCount++;
}

void EnEncount3_Destroy(Actor* thisx, PlayState* play) {
    EnEncount3* this = (EnEncount3*)thisx;

    gCount--;
    if (this->unk14E) {
        u8 remaining = (gCount < 15) ? (15 - gCount) : 1;
        gTimer += SECONDS(remaining * 4);
    }
}

void EnEncount3_SetupCheckToActivate(EnEncount3* this) {
    this->timer = SECONDS(10);
    this->actionFunc = EnEncount3_CheckToActivate;
}

void EnEncount3_CheckToActivate(EnEncount3* this, PlayState* play) {
    if (this->switchFlag > -1 && Flags_GetSwitch(play, this->switchFlag)) {
        Actor_Kill(&this->actor);
        return;
    }
    if (!(this->unk16C < this->actor.xzDistToPlayer) && !GET_EVENTCHKINF(EVENTCHKINF_CLEANSED_STONE_TOWER) && Player_GetMask(play) != PLAYER_MASK_SKULL && !spawnedRingOfFire) {
        if (this->timer > 0)
            this->timer--;
        else if (gTimer > 0)
            gTimer--;
        else {
            this->child = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_EN_JSO, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0, 0, 0, ENCOUNT3_GET_PARAM_F80(&this->actor));
            if (this->child != NULL) {
                this->unk14E = true;
                spawnedRingOfFire = true;
                this->actionFunc = EnEncount3_SetSwitch;
                this->unk148 = true;
            }
        }
    }
}

void EnEncount3_SetSwitch(EnEncount3* this, PlayState* play) {
    if (!this->unk14E) {
        this->unk178 = 0.0f;
        if (this->switchFlag > -1)
            Flags_SetSwitch(play, this->switchFlag);
        this->actionFunc = func_809AD1EC;
    }
}

void func_809AD1EC(EnEncount3* this, PlayState* play) {
    if (this->unk174 < 0.002f) {
        spawnedRingOfFire = false;
        Actor_Kill(&this->actor);
    }
}

void EnEncount3_Update(Actor* thisx, PlayState* play) {
    EnEncount3* this = (EnEncount3*)thisx;
    f32 new_var, sp3C, sp38;
    Player* player = GET_PLAYER(play);

    this->actionFunc(this, play);
    if (this->actionFunc == EnEncount3_SetSwitch) {
        new_var = this->unk16C * 0.52f;
        if (new_var < this->actor.xzDistToPlayer)
            this->unk178 = (this->unk16C * 0.03125f * 0.001f) + 0.1f;
        else this->unk178 = 0.06f;

        if (this->unk16C + 50.0f < this->actor.xzDistToPlayer) {
            if (this->actionFunc == EnEncount3_SetSwitch) {
                this->unk148 = false;
                this->unk178 = 0.0f;
                spawnedRingOfFire = false;
                if ((this->child != NULL && this->child->update != NULL) && this->child->colChkInfo.health > 0) {
                    Actor_Kill(this->child);
                    this->child = NULL;
                }
                EnEncount3_SetupCheckToActivate(this);
            }
        } else if (this->unk16C < this->actor.xzDistToPlayer) {
            s16 i;

            for (i=0; i<PLAYER_BODYPART_MAX; i++)
                player->bodyFlameTimers[i] = Rand_S16Offset(0, 200);

            player->bodyIsBurning = true;

            sp3C = this->actor.world.pos.x - player->actor.world.pos.x;
            sp38 = this->actor.world.pos.z - player->actor.world.pos.z;
            if (!Play_InCsMode(play))
                Actor_SetPlayerKnockbackLarge(play, &this->actor, 10.0f, Math_Atan2S(sp38, sp3C), 0.0f, 1);
        }
    }

    this->unk168 = this->unk16C;
    this->unk168 /= 7666.0f;
    if (this->actionFunc != EnEncount3_SetSwitch) {
        Math_ApproachZeroF(&this->unk170, 0.3f, 10.0f);
        Math_ApproachZeroF(&this->unk160, 0.3f, 5.0f);
    } else if (this->unk148) {
        Math_ApproachF(&this->unk170, 255.0f, 0.4f, 10.0f);
        Math_ApproachF(&this->unk160, 60.0f, 0.3f, 5.0f);
    }
    Math_ApproachF(&this->unk174, this->unk178, 0.3f, 0.03f);

    this->unk164 = this->unk160 / 60.0f;
    if (this->unk164 != 0.0f) {
        play->envCtx.adjFogNear     = (960   - play->envCtx.lightSettings.fogNear)     * this->unk164;
        play->envCtx.adjFogColor[0] = (40.0f - play->envCtx.lightSettings.fogColor[0]) * this->unk164;
        play->envCtx.adjFogColor[1] = (10.0f - play->envCtx.lightSettings.fogColor[1]) * this->unk164;
        play->envCtx.adjFogColor[2] = (0.0f  - play->envCtx.lightSettings.fogColor[2]) * this->unk164;
    }
}

void EnEncount3_Draw(Actor* thisx, PlayState* play) {
    EnEncount3* this = (EnEncount3*)thisx;

    if (this->unk170 > 0.0f) {
        OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        Matrix_Push();

        gDPPipeSync(POLY_XLU_DISP++);
        gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TwoTexScroll(play->state.gfxCtx, 0, (s32)play->gameplayFrames, 0, 0x20, 0x40, 1, (s32)play->gameplayFrames * -2, (s32)play->gameplayFrames * -8, 0x20, 0x20));

        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 200, 0, (s8)this->unk170);
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 0, 0, 128);

        Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y - 40.0f, this->actor.world.pos.z, MTXMODE_NEW);
        Matrix_Scale(this->unk168, this->unk174, this->unk168, MTXMODE_APPLY);

        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gRingOfFireDL);

        Matrix_Pop();
        CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    }
}
