/*
 * File: z_obj_hsstump.c
 * Overlay: ovl_Obj_HsStump
 * Description: Ikana Canyon - Hookshotable Tree
 */

#include "z_obj_hsstump.h"

#include "attributes.h"
#include "z_lib.h"
#include "ichain.h"
#include "gfx.h"
#include "sfx.h"
#include "play_state.h"
#include "effect.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

#define DEG_TO_BINANG_ALT3(degrees) ((degrees) * (0x8000 / 180.0f))

void ObjHsStump_Init(Actor* thisx, PlayState* play);
void ObjHsStump_Destroy(Actor* thisx, PlayState* play);
void ObjHsStump_Update(Actor* thisx, PlayState* play);
void ObjHsStump_Draw(Actor* thisx, PlayState* play);

void ObjHsStump_SetupIdle(ObjHsStump* this, PlayState* play);
void ObjHsStump_Idle(ObjHsStump* this, PlayState* play);
void ObjHsStump_SetupAppear(ObjHsStump* this, PlayState* play);
void ObjHsStump_Appear(ObjHsStump* this, PlayState* play);

ActorProfile Obj_HsStump_Profile = {
    /**/ ACTOR_OBJ_HSSTUMP,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_HSSTUMP,
    /**/ sizeof(ObjHsStump),
    /**/ ObjHsStump_Init,
    /**/ ObjHsStump_Destroy,
    /**/ ObjHsStump_Update,
    /**/ ObjHsStump_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 180, ICHAIN_STOP),
};

static Vec3f sIceSmokeAccel = { 0.0f, 0.0f, 0.0f };

void ObjHsStump_Init(Actor* thisx, PlayState* play) {
    ObjHsStump* this = (ObjHsStump*)thisx;
    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    this->isHidden = OBJHSSTUMP_GET_ISHIDDEN(thisx);
    this->switchFlag = OBJHSSTUMP_GET_SWITCH_FLAG(thisx);
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&object_hsstump_Colheader_0011B0, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);

    switch (this->isHidden) {
        case true:
            if (Flags_GetSwitch(play, this->switchFlag))
                this->isHidden = false;
            else {
                this->dyna.actor.draw = NULL;
                Actor_SetScale(&this->dyna.actor, 0.0f);
                DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
            }
            FALLTHROUGH;
        case false:
            ObjHsStump_SetupIdle(this, play);
            break;
        default:
            break;
    }
}

void ObjHsStump_SetupIdle(ObjHsStump* this, PlayState* play) {
    this->actionFunc = ObjHsStump_Idle;
}

void ObjHsStump_Idle(ObjHsStump* this, PlayState* play) {
    if ((this->isHidden == true) && Flags_GetSwitch(play, this->switchFlag))
        ObjHsStump_SetupAppear(this, play);
}

void ObjHsStump_SetupAppear(ObjHsStump* this, PlayState* play) {
    this->dyna.actor.draw = ObjHsStump_Draw;
    this->framesAppeared = 0;
    this->rotAngle = 0;
    this->rotFactor = 3640.0f;
    Audio_PlaySfxGeneral(NA_SE_SY_CORRECT_CHIME, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
    
    this->actionFunc = ObjHsStump_Appear;
}

void ObjHsStump_TranslateAndRotateY(Vec3f* translation, s16 rotAngle, Vec3f* src, Vec3f* dst) {
    f32 cos;
    f32 sin;

    cos = Math_CosS(rotAngle);
    sin = Math_SinS(rotAngle);
    dst->x = translation->x + (src->x * cos + src->z * sin);
    dst->y = translation->y + src->y;
    dst->z = translation->z + (src->z * cos - src->x * sin);
}

void ObjHsStump_Appear(ObjHsStump* this, PlayState* play) {
    if (this->framesAppeared >= 0) {
        Math_SmoothStepToF(&this->rotFactor, 0.0f, 1.0f, this->framesAppeared + 18.0f, 0.01f);
        this->dyna.actor.shape.rot.x = (Math_SinS(this->rotAngle) * this->rotFactor) + this->dyna.actor.home.rot.x;
        this->dyna.actor.shape.rot.z = (Math_SinS(this->rotAngle * 2) * this->rotFactor) + this->dyna.actor.home.rot.z;
        this->rotAngle += 0x2000;
    }
    if (this->framesAppeared <= 10) {
        if (this->framesAppeared == 0) {
            u8 i;
            u8 numDirections = 4;
            Vec3f iceSmokePosOffset;
            Vec3f iceSmokeVelOffset;
            s16 iceSmokeAngle;
            Vec3f iceSmokeVel;
            f32 baseAngle;
            Vec3f iceSmokePos;

            iceSmokePosOffset.x = 1.0f;
            iceSmokePosOffset.y = 0.5f;
            iceSmokePosOffset.z = 0.0f;

            iceSmokeVelOffset.x = 1.0f;
            iceSmokeVelOffset.y = 0.5f;
            iceSmokeVelOffset.z = 0.0f;

            baseAngle = (s32)DEG_TO_BINANG_ALT3(360.0f / numDirections);

            for (i=0; i<numDirections; i++) {
                iceSmokeAngle = i * baseAngle;
                ObjHsStump_TranslateAndRotateY(&this->dyna.actor.world.pos, iceSmokeAngle, &iceSmokePosOffset, &iceSmokePos);
                ObjHsStump_TranslateAndRotateY(&gZeroVec3f, iceSmokeAngle, &iceSmokeVelOffset, &iceSmokeVel);
                EffectSsIceSmoke_Spawn(play, &iceSmokePos, &iceSmokeVel, &sIceSmokeAccel, 100);
            }
        }
    }
    if (this->framesAppeared >= 10) {
        Math_SmoothStepToF(&this->dyna.actor.scale.x, 18.0f * 0.01f, 1.0f, 0.01f, 0.001f);
        Actor_SetScale(&this->dyna.actor, this->dyna.actor.scale.x);
    }
    if (this->dyna.actor.scale.x == (18.0f * 0.01f)) {
        this->isHidden = false;
        DynaPoly_EnableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        ObjHsStump_SetupIdle(this, play);
    }
    this->framesAppeared++;
}

void ObjHsStump_Destroy(Actor* thisx, PlayState* play) {
    ObjHsStump* this = (ObjHsStump*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void ObjHsStump_Update(Actor* thisx, PlayState* play) {
    ObjHsStump* this = (ObjHsStump*)thisx;

    this->actionFunc(this, play);
}

void ObjHsStump_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, object_hsstump_DL_0003B8);
}
