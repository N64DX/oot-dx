/*
 * File: z_eff_ss_dinofos_fire.c
 * Overlay: ovl_Effect_Ss_Dinofos_Fire
 * Description: Dinofos Fire
 */

#include "z_eff_ss_dinofos_fire.h"

#include "libc64/math64.h"
#include "segmented_address.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_math.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "skin_matrix.h"

#include "assets/objects/object_dinofos/object_dinofos.h"

#define rScale regs[0]
#define rTexIdx regs[1]
#define rPrimColorR regs[2]
#define rPrimColorG regs[3]
#define rPrimColorB regs[4]
#define rPrimColorA regs[5]
#define rFadeDelay regs[6]
#define rScaleStep regs[9]
#define rObjectSlot regs[10]
#define rYAccelStep regs[11] // has no effect due to how it's implemented

u32 EffectSsDinoFire_Init(struct PlayState* play, u32 index, EffectSs* this, void* initParamsx);
void EffectSsDinoFire_Draw(struct PlayState* play, u32 index, EffectSs* this);
void EffectSsDinoFire_Update(struct PlayState* play, u32 index, EffectSs* this);

EffectSsProfile Effect_Ss_Dinofos_Fire_Profile = {
    EFFECT_SS_DINOFOS_FIRE,
    EffectSsDinoFire_Init,
};

u32 EffectSsDinoFire_Init(PlayState* play, u32 index, EffectSs* this, void* initParamsx) {
    EffectSsDFireInitParams* initParams = (EffectSsDFireInitParams*)initParamsx;
    s32 objectSlot = Object_GetSlot(&play->objectCtx, OBJECT_DINOFOS);

    if (objectSlot >= 0) {
        this->pos = initParams->pos;
        this->velocity = initParams->velocity;
        this->accel = initParams->accel;
        this->gfx = SEGMENTED_TO_VIRTUAL(gDinofosFireDL);
        this->life = initParams->life;
        this->rScale = initParams->scale;
        this->rScaleStep = initParams->scaleStep;
        this->rYAccelStep = 0;
        this->rObjectSlot = objectSlot;
        this->draw = EffectSsDinoFire_Draw;
        this->update = EffectSsDinoFire_Update;
        this->rTexIdx = ((s16)(play->state.frames % 4) ^ 3);
        this->rPrimColorR = 255;
        this->rPrimColorG = 255;
        this->rPrimColorB = 50;
        this->rPrimColorA = initParams->alpha;
        this->rFadeDelay = initParams->fadeDelay;

        return 1;
    }

    return 0;
}

static void* sTextures[] = { gDinofosFire0Tex, gDinofosFire1Tex, gDinofosFire2Tex, gDinofosFire3Tex };

void EffectSsDinoFire_Draw(PlayState* play, u32 index, EffectSs* this) {
    GraphicsContext* gfxCtx = play->state.gfxCtx;
    MtxF mfTrans;
    MtxF mfScale;
    MtxF mfResult;
    MtxF mfTrans11DA0;
    s32 pad;
    void* object;
    Mtx* mtx;
    f32 scale;

    object = play->objectCtx.slots[this->rObjectSlot].segment;

    OPEN_DISPS(gfxCtx, "../z_eff_ss_dinofos_fire.c", 83);

    if (Object_GetSlot(&play->objectCtx, OBJECT_DINOFOS) > -1) {
        gSegments[6] = OS_K0_TO_PHYSICAL(object);
        gSPSegment(POLY_XLU_DISP++, 0x06, object);
        scale = this->rScale / 100.0f;
        SkinMatrix_SetTranslate(&mfTrans, this->pos.x, this->pos.y, this->pos.z);
        SkinMatrix_SetScale(&mfScale, scale, scale, 1.0f);
        SkinMatrix_MtxFMtxFMult(&mfTrans, &play->billboardMtxF, &mfTrans11DA0);
        SkinMatrix_MtxFMtxFMult(&mfTrans11DA0, &mfScale, &mfResult);

        mtx = SkinMatrix_MtxFToNewMtx(gfxCtx, &mfResult);

        if (mtx != NULL) {
            gSPMatrix(POLY_XLU_DISP++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            Gfx_SetupDL_60NoCDXlu(gfxCtx);
            gDPSetEnvColor(POLY_XLU_DISP++, 255, 0, 0, 0);
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, this->rPrimColorR, this->rPrimColorG, this->rPrimColorB, this->rPrimColorA);
            gSegments[6] = OS_K0_TO_PHYSICAL(object);
            gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sTextures[this->rTexIdx]));
            gSPDisplayList(POLY_XLU_DISP++, this->gfx);
        }
    }

    CLOSE_DISPS(gfxCtx, "../z_eff_ss_dinofos_fire.c", 108);
}

void EffectSsDinoFire_Update(PlayState* play, u32 index, EffectSs* this) {
    this->rTexIdx++;
    this->rTexIdx &= 3;
    this->rScale += this->rScaleStep;

    if (this->rFadeDelay >= this->life) {
        this->rPrimColorA -= 5;
        if (this->rPrimColorA < 0)
            this->rPrimColorA = 0;
    } else {
        this->rPrimColorA += 15;
        if (this->rPrimColorA > 255)
            this->rPrimColorA = 255;
    }

    if (this->accel.y < 0.0f)
        this->accel.y += this->rYAccelStep * 0.01f;
    if (this->life <= 0)
        this->rYAccelStep += 0;
}
