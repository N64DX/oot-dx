/*
 * File: z_bg_dodoago2.c
 * Overlay: ovl_Bg_Dodoago
 * Description: Dodongo Head Statue in Dodongo's Cavern (Spaceworld '97)
 */

#include "z_bg_dodoago2.h"

#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "one_point_cutscene.h"
#include "rand.h"
#include "rumble.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"

#include "overlays/actors/ovl_En_Bom/z_en_bom.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"

#define FLAGS (ACTOR_FLAG_LOCK_ON_DISABLED | ACTOR_FLAG_ATTENTION_ENABLED)

void BgDodoago2_Init(Actor* thisx, struct PlayState* play);
void BgDodoago2_Destroy(Actor* thisx, struct PlayState* play);
void BgDodoago2_Update(Actor* thisx, struct PlayState* play);
void BgDodoago2_Draw(Actor* thisx, struct PlayState* play);

void func_80871CF4(BgDodoago2* this, struct PlayState* play);
void func_80871FB8(BgDodoago2* this, struct PlayState* play);
void func_8087227C(BgDodoago2* this, struct PlayState* play);
void func_80872288(BgDodoago2* this, struct PlayState* play);

ActorProfile Bg_Dodoago2_Profile = {
    /**/ ACTOR_BG_DODOAGO2,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_BWALL2,
    /**/ sizeof(BgDodoago2),
    /**/ BgDodoago2_Init,
    /**/ BgDodoago2_Destroy,
    /**/ BgDodoago2_Update,
    /**/ BgDodoago2_Draw,
};

static ColliderCylinderInit sColCylinderInit0 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_ALL,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 200, 30, 80, { 0, 0, 0 } },
};

static ColliderCylinderInit sColCylinderInit1 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_NO_PUSH | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_NONE,
        OCELEM_ON,
    },
    { 100, 60, 280, { 0, 0, 0 } },
};

static bool sHasParent = false;

void BgDodoago2_SetupAction(BgDodoago2* this, BgDodoago2ActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void BgDodoago2_SpawnSparkles(Vec3f* vec, PlayState* play) {
    Vec3f pos;
    Color_RGBA8 primColor = { 100, 100, 100, 0 };
    Color_RGBA8 envColor = { 40, 40, 40, 0 };
    static Vec3f velocity = { 0.0f, -1.5f, 0.0f };
    static Vec3f acceleration = { 0.0f, -0.2f, 0.0f };
    u8 i;

    for (i=4; i > 0; i--) {
        pos.x = Rand_CenteredFloat(20.0f) + vec->x;
        pos.y = Rand_CenteredFloat(10.0f) + vec->y;
        pos.z = Rand_CenteredFloat(20.0f) + vec->z;
        EffectSsKiraKira_SpawnSmall(play, &pos, &velocity, &acceleration, &primColor, &envColor);
    }
}

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 5000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 1000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 800, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 500, ICHAIN_CONTINUE),
    ICHAIN_U8(attentionRangeType, 5, ICHAIN_STOP),
};

static u8 D_808727C0[1];
static s32 D_80872824;

void BgDodoago2_Init(Actor* thisx, PlayState* play) {
    BgDodoago2* this = (BgDodoago2*)thisx;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    CollisionHeader_GetVirtual(&gDodongoJawCol_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    ActorShape_Init(&this->dyna.actor.shape, 0.0f, NULL, 0.0f);

    this->jawSwitch = this->dyna.actor.params & 0x1F;
    this->doorSwitch = (this->dyna.actor.params >> 8) & 0x1F;

    if (Flags_GetSwitch(play, this->jawSwitch)) {
        thisx->flags ^= ACTOR_FLAG_ATTENTION_ENABLED;
        BgDodoago2_SetupAction(this, func_8087227C);
        this->dyna.actor.shape.rot.x = 0x1333;
        play->roomCtx.drawParams[BGDODOAGO2_EYE_LEFT] = play->roomCtx.drawParams[BGDODOAGO2_EYE_RIGHT] = 255;
        Flags_SetSwitch(play, this->doorSwitch);
        this->flag = true;
        return;
    } else {
        thisx->focus.pos.z = this->dyna.actor.world.pos.z + 475;
        thisx->focus.pos.y = this->dyna.actor.world.pos.y - 25;
    }

    Collider_InitCylinder(play, &this->colliders[0]);
    Collider_InitCylinder(play, &this->colliders[1]);
    Collider_InitCylinder(play, &this->colliders[2]);
    Collider_SetCylinder(play, &this->colliders[0], &this->dyna.actor, &sColCylinderInit0);
    Collider_SetCylinder(play, &this->colliders[1], &this->dyna.actor, &sColCylinderInit1);
    Collider_SetCylinder(play, &this->colliders[2], &this->dyna.actor, &sColCylinderInit1);
    BgDodoago2_SetupAction(this, func_80871CF4);
    D_808727C0[0] = 0;
}

void BgDodoago2_Destroy(Actor* thisx, PlayState* play) {
    BgDodoago2* this = (BgDodoago2*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Collider_DestroyCylinder(play, &this->colliders[0]);
    Collider_DestroyCylinder(play, &this->colliders[1]);
    Collider_DestroyCylinder(play, &this->colliders[2]);
}

void func_80871CF4(BgDodoago2* this, PlayState* play) {
    Actor* explosive = Actor_GetCollidedExplosive(play, &this->colliders[0].base);

    if (explosive != NULL) {
        this->state = (Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &explosive->world.pos) >= this->dyna.actor.shape.rot.y) ? 1 : 0;

        Actor_ChangeCategory(play, &play->actorCtx, &this->dyna.actor, ACTORCAT_BG);
        this->dyna.actor.flags ^= ACTOR_FLAG_ATTENTION_ENABLED;
        Flags_SetSwitch(play, this->jawSwitch);
        this->state = 0;
        Audio_PlaySfxGeneral(NA_SE_SY_CORRECT_CHIME, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        BgDodoago2_SetupAction(this, func_80871FB8);
        OnePointCutscene_Init(play, 3380, 160, &this->dyna.actor, CAM_ID_MAIN);

        if (!sHasParent) {
            this->dyna.actor.parent = explosive;
            sHasParent = true;
            D_80872824 = 0x32;
        }
    } else {
        Collider_UpdateCylinder(&this->dyna.actor, &this->colliders[0]);
        Collider_UpdateCylinder(&this->dyna.actor, &this->colliders[1]);
        Collider_UpdateCylinder(&this->dyna.actor, &this->colliders[2]);

        this->colliders[0].dim.pos.z += 200;
        this->colliders[0].dim.pos.y -= 32;

        this->colliders[1].dim.pos.z += 215;
        this->colliders[1].dim.pos.x += 90;
        this->colliders[1].dim.pos.y -= 32;

        this->colliders[2].dim.pos.z += 215;
        this->colliders[2].dim.pos.x -= 90;
        this->colliders[2].dim.pos.y -= 32;

        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliders[0].base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->colliders[1].base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->colliders[2].base);
    }
}

void func_80871FB8(BgDodoago2* this, PlayState* play) {
    Vec3f currentPos;
    Vec3f D_808725CC[] = {
        { 0.0f, -200.0f, 430.0f },   { 20.0f, -200.0f, 420.0f }, { -20.0f, -200.0f, 420.0f },
        { 40.0, -200.0f, 380.0f },   { -40.0, -200.0f, 380.0f }, { 50.0, -200.0f, 350.0f },
        { -50.0f, -200.0f, 350.0f }, { 60.0f, -200.0f, 320.0f }, { -60.0f, -200.0f, 320.0f },
        { 70.0f, -200.0f, 290.0f },  { -70.0, -200.0f, 290.0f },
    };
    u8 i;

    if (play->roomCtx.drawParams[BGDODOAGO2_EYE_LEFT] < 255)
        play->roomCtx.drawParams[BGDODOAGO2_EYE_LEFT] += 5;
    if (play->roomCtx.drawParams[BGDODOAGO2_EYE_RIGHT] < 255)
        play->roomCtx.drawParams[BGDODOAGO2_EYE_RIGHT] += 5;

    if (play->roomCtx.drawParams[BGDODOAGO2_EYE_LEFT] != 255 || play->roomCtx.drawParams[BGDODOAGO2_EYE_RIGHT] != 255) {
        D_80872824--;
        return;
    }

    if (D_80872824 == 0x6C) {
        for (i=10; i>0; i--) {
            currentPos.x = D_808725CC[i].x + this->dyna.actor.world.pos.x;
            currentPos.y = D_808725CC[i].y + this->dyna.actor.world.pos.y;
            currentPos.z = D_808725CC[i].z + this->dyna.actor.world.pos.z;
            func_80033480(play, &currentPos, 2.0f, 3, 0xC8, 0x4B, 1);
        }
    }

    currentPos.x = this->dyna.actor.world.pos.x + 200.0f;
    currentPos.y = this->dyna.actor.world.pos.y - 20.0f;
    currentPos.z = this->dyna.actor.world.pos.z + 100.0f;

    BgDodoago2_SpawnSparkles(&currentPos, play);

    currentPos.x = this->dyna.actor.world.pos.x - 200.0f;
    currentPos.y = this->dyna.actor.world.pos.y - 20.0f;
    currentPos.z = this->dyna.actor.world.pos.z + 100.0f;

    BgDodoago2_SpawnSparkles(&currentPos, play);
    Math_StepToS(&this->state, 0x64, 3);
    Rumble_Request(500.0f, 0x78, 0x14, 0xA);

    if (Math_SmoothStepToS(&this->dyna.actor.shape.rot.x, 0x1333, 0x6E - this->state, 0x3E8, 0x32) == 0) {
        BgDodoago2_SetupAction(this, func_8087227C);
        Audio_PlaySfxGeneral(NA_SE_EV_STONE_BOUND, &this->dyna.actor.projectedPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
        this->timer = 40;
    } else Audio_PlaySfxGeneral(NA_SE_EV_STONE_STATUE_OPEN - SFX_FLAG, &this->dyna.actor.projectedPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void func_8087227C(BgDodoago2* this, PlayState* play) {
    if (!this->flag && DECR(this->timer) == 0)
        Flags_SetSwitch(play, this->doorSwitch); // hardcoded hack to unlock the beta DC boss door
}

void func_80872288(BgDodoago2* this, PlayState* play) {
    play->roomCtx.drawParams[this->state] += 5;

     if (play->roomCtx.drawParams[this->state] == 255)
        BgDodoago2_SetupAction(this, func_80871CF4);
}

void BgDodoago2_Update(Actor* thisx, PlayState* play) {
    BgDodoago2* this = (BgDodoago2*)thisx;
    EnBom* bomb;

    if (this->dyna.actor.parent == NULL) {
        if ((s32)(this->colliders[1].base.ocFlags1 & OC1_HIT) || (this->colliders[2].base.ocFlags1 & OC1_HIT)) {

            if ((s32)(this->colliders[1].base.ocFlags1 & OC1_HIT))
                bomb = (EnBom*)this->colliders[1].base.oc;
            else bomb = (EnBom*)this->colliders[2].base.oc;
            this->colliders[1].base.ocFlags1 &= ~OC1_HIT;
            this->colliders[2].base.ocFlags1 &= ~OC1_HIT;
            if (bomb->actor.category == ACTORCAT_EXPLOSIVE && bomb->actor.id == ACTOR_EN_BOM && bomb->actor.params == 0) {
                this->dyna.actor.parent = &bomb->actor;
                bomb->timer = 50;
                bomb->actor.speed = 0.0f;
                D_80872824 = 0;
            }
        }
    } else {
        D_80872824++;
        Flags_GetSwitch(play, this->jawSwitch);
        if (D_808727C0[0] == 0 && D_80872824 >= 0x8D) {
            if (Flags_GetSwitch(play, this->jawSwitch))
                D_808727C0[0]++;
            else this->dyna.actor.parent = NULL;
        }
    }
    this->actionFunc(this, play);
}

void BgDodoago2_Draw(Actor* thisx, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPMatrix(POLY_OPA_DISP++, MATRIX_FINALIZE(play->state.gfxCtx, __FILLE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_OPA_DISP++, gDodongoJaw);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
