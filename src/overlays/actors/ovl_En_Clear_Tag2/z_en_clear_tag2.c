/*
 * File: z_en_clear_tag2.c
 * Overlay: ovl_En_Clear_Tag2
 * Description: Various effects: explosions and pops, splashes, light rays
 */

#include "z_en_clear_tag2.h"

#include "rand.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "sys_math.h"
#include "segmented_address.h"
#include "z_lib.h"
#include "play_state.h"
#include "audio.h"
#include "attributes.h"
#include "array_count.h"
#include "regs.h"

#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

typedef enum {
    /* 0x00 */ CLEAR_TAG2_EFFECT_AVAILABLE,
    /* 0x01 */ CLEAR_TAG2_EFFECT_DEBRIS,
    /* 0x02 */ CLEAR_TAG2_EFFECT_FIRE, // never set to, remnant of OoT
    /* 0x03 */ CLEAR_TAG2_EFFECT_SMOKE,
    /* 0x04 */ CLEAR_TAG2_EFFECT_FLASH,
    /* 0x05 */ CLEAR_TAG2_EFFECT_LIGHT_RAYS,
    /* 0x06 */ CLEAR_TAG2_EFFECT_SHOCKWAVE,
    /* 0x07 */ CLEAR_TAG2_EFFECT_SPLASH,
    /* 0x08 */ CLEAR_TAG2_EFFECT_ISOLATED_SMOKE
} ClearTagEffectType;

void EnClearTag2_Init(Actor* thisx, struct PlayState* play);
void EnClearTag2_Destroy(Actor* thisx, struct PlayState* play);
void EnClearTag2_Update(Actor* thisx, struct PlayState* play);
void EnClearTag2_Draw(Actor* thisx, struct PlayState* play);

void EnClearTag2_UpdateEffects(EnClearTag2* this, struct PlayState* play);
void EnClearTag2_DrawEffects(Actor* thisx, struct PlayState* play);

ActorProfile En_Clear_Tag2_Profile = {
    /**/ ACTOR_EN_CLEAR_TAG2,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnClearTag2),
    /**/ EnClearTag2_Init,
    /**/ EnClearTag2_Destroy,
    /**/ EnClearTag2_Update,
    /**/ EnClearTag2_Draw,
};

static Vec3f sZeroVector             = {     0.0f,   0.0f,   0.0f };
static Vec3f sLightRayEnvColor[]     = { { 255.0f, 255.0f,   0.0f }, { 255.0f, 100.0f, 100.0f }, { 100.0f, 255.0f, 100.0f }, { 100.0f, 100.0f, 255.0f } };
static Vec3f sLightRayPrimColor[]    = { { 255.0f, 255.0f, 255.0f }, { 255.0f, 255.0f, 255.0f }, { 255.0f, 255.0f, 255.0f }, { 255.0f, 255.0f, 255.0f } };
static f32 sFlashMaxScale[]          = {    6.0f,   12.0f,    9.0f                  };
static f32 sSmokeScale[]             = {    3.0f,    6.0f                           };
static f32 sShockwaveMaxScale[]      = {   15.0f,   30.0f,   20.0f                  };
static f32 sDebrisScale[]            = {   0.03f,   0.06f,   0.04f                  };
static f32 sLightRayScale[]          = { 1000.0f, 2000.0f, 1500.0f, 800.0f, 1300.0f };
static f32 sLightRayMaxScaleTarget[] = {   15.0f,   30.0f,   20.0f,  10.0f,   20.0f };
static f32 sLightRayMaxScale[]       = {   25.0f,   100.0f,  48.0f,  20.0f,   32.0f };
static void* sWaterSplashTextures[]  = { gEffWaterSplash1Tex, gEffWaterSplash2Tex, gEffWaterSplash3Tex, gEffWaterSplash4Tex, gEffWaterSplash5Tex, gEffWaterSplash6Tex, gEffWaterSplash7Tex, gEffWaterSplash8Tex, NULL, NULL, NULL };

#include "assets/overlays/ovl_En_Clear_Tag2/ovl_En_Clear_Tag2.c"

/**
 * Creates a debris effect. Debris effects are spawned by an explosion.
 */
void EnClearTag2_CreateDebrisEffect(EnClearTag2* this, Vec3f* pos, Vec3f* velocity, Vec3f* accel, f32 scale, f32 rotationZ) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect)-1; i++, effect++) { // Look for an available effect to allocate a Debris effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->type         = CLEAR_TAG2_EFFECT_DEBRIS;
            effect->pos          = *pos;
            effect->velocity     = *velocity;
            effect->accel        = *accel;
            effect->scale        = scale;
            effect->rotationY    = Rand_ZeroFloat(M_PI * 2); // Set the debris effects to spawn in a circle.
            effect->rotationX    = Rand_ZeroFloat(M_PI * 2);
            effect->effectsTimer = effect->bounces = 0;
            effect->rotationZ    = rotationZ;
            effect->actionTimer  = Rand_ZeroFloat(10.0f);
            break;
        }
    }
}

/**
 * Creates a smoke effect. Smoke effects are spawned by an explosion.
 */
void EnClearTag2_CreateSmokeEffect(EnClearTag2* this, Vec3f* pos, f32 scale) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) { // Look for an available effect to allocate a smoke effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->actionTimer = Rand_ZeroFloat(100.0f);
            effect->type        = CLEAR_TAG2_EFFECT_SMOKE;
            effect->pos         = *pos;
            effect->velocity    = sZeroVector;
            effect->accel       = sZeroVector;
            effect->scale       = scale;
            effect->maxScale    = 2.0f * scale;
            effect->smokeScaleX = 1.0f;
            effect->smokeScaleY = 1.0f;
            effect->primColor.a = 255.0f;
            effect->envColor.r  = 255.0f;
            effect->envColor.b  = 255.0f;
            effect->primColor.r = 200.0f;
            effect->primColor.g = 20.0f;
            effect->primColor.b = 0.0f;
            effect->envColor.g  = 215.0f;
            break;
        }
    }
}

/**
 * Creates an isolated smoke effect without an explosion. Smoke effects are spawned directly.
 */
void EnClearTag2_CreateIsolatedSmokeEffect(EnClearTag2* this, Vec3f* pos, f32 scale) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) { // Look for an available effect to allocate a smoke effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->actionTimer = Rand_ZeroFloat(100.0f);
            effect->type        = CLEAR_TAG2_EFFECT_ISOLATED_SMOKE;
            effect->pos         = *pos;
            effect->velocity    = sZeroVector;
            effect->accel       = sZeroVector;
            effect->scale       = scale;
            effect->maxScale    = 2.0f * scale;
            effect->smokeScaleX = 1.0f;
            effect->smokeScaleY = 1.0f;

            if (scale <= 1.1f) {
                effect->scale = ((KREG(23) * 0.1f) + 1.0f) * scale;
                effect->primColor.a = KREG(16) + 150.0f;
                effect->primColor.r = KREG(17);
                effect->primColor.g = KREG(18);
                effect->primColor.b = KREG(19);
                effect->envColor.r  = KREG(20);
                effect->envColor.g  = KREG(21);
                effect->envColor.b  = KREG(22);
            } else {
                effect->envColor.r  = effect->envColor.g = effect->envColor.b = 0.0f;
                effect->primColor.r = effect->primColor.g = effect->primColor.b = 0.0f;
                effect->primColor.a = 255.0f;
            }
            break;
        }
    }
}

/**
 * Creates a flash effect. Flash effects are spawned by an explosion or a pop. Flash effects have two components: 1) a billboard flash, and 2) a light effect on the ground.
 */
void EnClearTag2_CreateFlashEffect(EnClearTag2* this, Vec3f* pos, f32 scale, f32 floorHeight) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect)-1; i++, effect++) { // Look for an available effect to allocate a flash effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->type        = CLEAR_TAG2_EFFECT_FLASH;
            effect->pos         = *pos;
            effect->velocity    = sZeroVector;
            effect->accel       = sZeroVector;
            effect->scale       = 0.0f;
            effect->maxScale    = scale * 3.0f;
            effect->rotationZ   = floorHeight; // rotationZ is unused for CLEAR_TAG2_EFFECT_FLASH
            effect->primColor.a = 255.0f;
            break;
        }
    }
}

/**
 * Creates a light ray effect. Light ray effects are spawned by an explosion or pop.
 */
void EnClearTag2_CreateLightRayEffect(EnClearTag2* this, Vec3f* pos, Vec3f* velocity, Vec3f* accel, f32 scale, f32 maxScaleTarget, s16 alphaDecrementSpeed) {
    EnClearTag2Effect* effect = this->effect;

    s32 requiredScopeTemp;
    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect) - 1; i++, effect++) { // Look for an available effect to allocate a light ray effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->type                        = CLEAR_TAG2_EFFECT_LIGHT_RAYS;
            effect->pos                         = *pos;
            effect->velocity                    = *velocity;
            effect->accel                       = *accel;
            effect->scale                       = scale / 1000.0f;
            effect->maxScale                    = 1.0f;
            effect->maxScaleTarget              = maxScaleTarget;
            effect->lightRayAlpha               = Rand_ZeroFloat(100.0f) + 200.0f;
            effect->lightRayAlphaDecrementSpeed = alphaDecrementSpeed;
            effect->actionTimer                 = Rand_ZeroFloat(10.0f);
            effect->rotationY                   = Math_Atan2F(effect->velocity.z, effect->velocity.x);
            effect->rotationX                   = -Math_Atan2F(sqrtf(SQXZ(effect->velocity)), effect->velocity.y);
            effect->envColor.r                  = 255.0f;
            effect->envColor.g                  = 255.0f;
            effect->envColor.b                  = 0.0f;
            effect->primColor.r                 = 255.0f;
            effect->primColor.g                 = 255.0f;
            effect->primColor.b                 = 255.0f;
            break;
        }
    }
}

/**
 * Creates an isolated light ray effect without an explosion or pop. Light ray effects are spawned directly.
 */
void EnClearTag2_CreateIsolatedLightRayEffect(EnClearTag2* this, Vec3f* pos, Vec3f* velocity, Vec3f* accel, f32 scale, f32 maxScaleTarget, s16 colorIndex, s16 alphaDecrementSpeed) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect)-1; i++, effect++) { // Look for an available effect to allocate a light ray effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->type                        = CLEAR_TAG2_EFFECT_LIGHT_RAYS;
            effect->pos                         = *pos;
            effect->velocity                    = *velocity;
            effect->accel                       = *accel;
            effect->scale                       = scale / 1000.0f;
            effect->maxScale                    = 1.0f;
            effect->maxScaleTarget              = maxScaleTarget;
            effect->lightRayAlpha               = Rand_ZeroFloat(100.0f) + 200.0f;
            effect->lightRayAlphaDecrementSpeed = alphaDecrementSpeed;
            effect->actionTimer                 = Rand_ZeroFloat(10.0f);
            effect->rotationY                   = Math_Atan2F(effect->velocity.z, effect->velocity.x);
            effect->rotationX                   = -Math_Atan2F(sqrtf(SQXZ(effect->velocity)), effect->velocity.y);
            effect->envColor.r                  = sLightRayEnvColor[colorIndex].x;
            effect->envColor.g                  = sLightRayEnvColor[colorIndex].y;
            effect->envColor.b                  = sLightRayEnvColor[colorIndex].z;
            effect->primColor.r                 = sLightRayPrimColor[colorIndex].x;
            effect->primColor.g                 = sLightRayPrimColor[colorIndex].y;
            effect->primColor.b                 = sLightRayPrimColor[colorIndex].z;
            break;
        }
    }
}

/**
 * Creates a shockwave effect This effect uses concentric ring floor shadows that travel radially outward along the floor poly
 */
void EnClearTag2_CreateShockwaveEffect(EnClearTag2* this, Vec3f* pos, f32 maxScale, s16 actionTimer) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect)-1; i++, effect++) { // Look for an available effect to allocate a shockwave effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->type        = CLEAR_TAG2_EFFECT_SHOCKWAVE;
            effect->pos         = *pos;
            effect->velocity    = sZeroVector;
            effect->accel       = sZeroVector;
            effect->maxScale    = maxScale;
            effect->scale       = 0.0f;
            effect->actionTimer = actionTimer;
            effect->primColor.a = 200.0f;
            break;
        }
    }
}

/**
 * Creates a splash effect This effect is used when EnClearTag2 is spawned above a waterbox
 */
void EnClearTag2_CreateSplashEffect(EnClearTag2* this, Vec3f* pos, s16 effectsTimer) {
    EnClearTag2Effect* effect = this->effect;

    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect)-1; i++, effect++) { // Look for an available effect to allocate a splash effect to.
        if (effect->type == CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->actionTimer  = Rand_ZeroFloat(100.0f); // Immediately overwritten and generates a lot of wasted asm (f32 to u8)
            effect->type         = CLEAR_TAG2_EFFECT_SPLASH;
            effect->pos          = *pos;
            effect->velocity     = sZeroVector;
            effect->accel        = sZeroVector;
            effect->scale        = 0.0f;
            effect->maxScale     = 0.0f;
            effect->actionTimer  = 0;
            effect->effectsTimer = effectsTimer;
            effect->rotationX    = 0.78f;
            break;
        }
    }
}

/**
 * EnClearTag2 destructor. No Operation takes place.
 */
void EnClearTag2_Destroy(Actor* thisx, PlayState* play) { }

/**
 * EnClearTag2 constructor. This initializes effects, and sets up ClearTag instance data.
 */
void EnClearTag2_Init(Actor* thisx, PlayState* play) {
    EnClearTag2* this = (EnClearTag2*)thisx;

    Vec3f pos, velocity, accel;
    f32 lightRayMaxScale;
    u8 i;

    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    if (thisx->params >= 0) {
        this->activeTimer = 70;
        Math_Vec3f_Copy(&pos, &this->actor.world.pos);

        if (thisx->params == CLEAR_TAG2_SMOKE) { // Initialize isolated smoke effect
            EnClearTag2_CreateIsolatedSmokeEffect(this, &pos, this->actor.world.rot.z);
            return;
        }

        if (thisx->params != CLEAR_TAG2_SPLASH) {
            if (thisx->params == CLEAR_TAG2_SMALL_LIGHT_RAYS || thisx->params == CLEAR_TAG2_LARGE_LIGHT_RAYS) { // Initialize isolated light ray effect
                for (i = 0; i < 54; i++) {
                    lightRayMaxScale = sLightRayMaxScale[thisx->params] + Rand_ZeroFloat(sLightRayMaxScale[thisx->params]);
                    Matrix_RotateYF(Rand_ZeroFloat(M_PI * 2), MTXMODE_NEW);
                    Matrix_RotateXFApply(Rand_ZeroFloat(M_PI * 2));
                    Matrix_MultVecZ(lightRayMaxScale, &velocity);
                    accel.x = velocity.x * -0.03f;
                    accel.y = velocity.y * -0.03f;
                    accel.z = velocity.z * -0.03f;
                    EnClearTag2_CreateIsolatedLightRayEffect(this, &pos, &velocity, &accel, sLightRayScale[thisx->params] + Rand_ZeroFloat(sLightRayScale[thisx->params] * 0.5f), sLightRayMaxScaleTarget[thisx->params], this->actor.world.rot.z, Rand_ZeroFloat(10.0f) + 20.0f);
                }
                return;
            }

            if ((this->actor.world.rot.x != 0) || (this->actor.world.rot.y != 0) || (this->actor.world.rot.z != 0)) {
                this->flashEnvColor.r = this->actor.world.rot.x;
                this->flashEnvColor.g = this->actor.world.rot.y;
                this->flashEnvColor.b = this->actor.world.rot.z;
            } else {
                this->flashEnvColor.r = 255;
                this->flashEnvColor.g = 0;
            }

            Actor_UpdateBgCheckInfo(play, &this->actor, 50.0f, 30.0f, 100.0f, UPDBGCHECKINFO_FLAG_2);
            pos = this->actor.world.pos;
            EnClearTag2_CreateFlashEffect(this, &pos, sFlashMaxScale[thisx->params], this->actor.floorHeight); // Initialize flash effect

            if (!(this->actor.bgCheckFlags & BGCHECKFLAG_WATER)) { // Is not underwater
                if (thisx->params < 10) {
                    pos.y = this->actor.world.pos.y - 40.0f;

                    if (thisx->params != CLEAR_TAG2_POP) // Initialize smoke effect
                        EnClearTag2_CreateSmokeEffect(this, &pos, sSmokeScale[thisx->params]);

                    pos.y = this->actor.floorHeight + 3.0f;
                    EnClearTag2_CreateShockwaveEffect(this, &pos, sShockwaveMaxScale[thisx->params], 0);
                    EnClearTag2_CreateShockwaveEffect(this, &pos, sShockwaveMaxScale[thisx->params], 3);
                    if (thisx->params == CLEAR_TAG2_LARGE_EXPLOSION) // Initialize shockwave effect
                        EnClearTag2_CreateShockwaveEffect(this, &pos, sShockwaveMaxScale[thisx->params], 6);
                }

                if (thisx->params != CLEAR_TAG2_POP) { // Initialize debris effect
                    pos.y = this->actor.world.pos.y;
                    for (i = 0; i < 18; i++) {
                        velocity.x = sinf(i * (33.0f / 40.0f)) * i * .5f;
                        velocity.z = cosf(i * (33.0f / 40.0f)) * i * .5f;
                        velocity.y = Rand_ZeroFloat(8.0f) + 7.0f;
                        velocity.x += Rand_CenteredFloat(0.5f);
                        velocity.z += Rand_CenteredFloat(0.5f);
                        accel.x = 0.0f;
                        accel.y = -1.0f;
                        accel.z = 0.0f;
                        EnClearTag2_CreateDebrisEffect(this, &pos, &velocity, &accel, sDebrisScale[thisx->params] + Rand_ZeroFloat(sDebrisScale[thisx->params]), this->actor.floorHeight);
                    }
                }
            }

            pos = this->actor.world.pos;
            for (i=0; i<44; i++) { // Initialize light ray effect
                lightRayMaxScale = sLightRayMaxScale[thisx->params] + Rand_ZeroFloat(sLightRayMaxScale[thisx->params]); 
                Matrix_RotateYF(Rand_ZeroFloat(2 * M_PI), MTXMODE_NEW);
                Matrix_RotateXFApply(Rand_ZeroFloat(2 * M_PI));
                Matrix_MultVecZ(lightRayMaxScale, &velocity);
                accel.x = velocity.x * -0.03f;
                accel.y = velocity.y * -0.03f;
                accel.z = velocity.z * -0.03f;
                EnClearTag2_CreateLightRayEffect(this, &pos, &velocity, &accel, sLightRayScale[thisx->params] + Rand_ZeroFloat(sLightRayScale[thisx->params] * 0.5f), sLightRayMaxScaleTarget[thisx->params], Rand_ZeroFloat(10.0f) + 20.0f);
            }
        }

        EnClearTag2_CreateSplashEffect(this, &pos, 0); // Initialize splash effect
        EnClearTag2_CreateSplashEffect(this, &pos, 2);
    }
}

void EnClearTag2_UpdateCamera(EnClearTag2* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Camera* mainCam;

    switch (this->cameraState) {
        case 0:
            if ((player->actor.world.pos.z > 0.0f && player->actor.world.pos.z > 290.0f && fabsf(player->actor.world.pos.x) < 60.0f) || (player->actor.world.pos.z < 0.0f && player->actor.world.pos.z < -950.0f && fabsf(player->actor.world.pos.x) < 103.0f)) {
                if (player->actor.world.pos.z > 0.0f)
                    player->actor.world.pos.z = 290.0f;
                else player->actor.world.pos.z = -950.0f;
                player->actor.speed = 0.0f;
                if (this->activeTimer == 0)
                    this->cameraState = 1;
            }
            break;

        case 1:
            Cutscene_StartManual(play, &play->csCtx);
            this->subCamId = Play_CreateSubCamera(play);
            Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
            Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);
            Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_4);
            mainCam = Play_GetCamera(play, CAM_ID_MAIN);
            this->subCamEye.x = mainCam->eye.x;
            this->subCamEye.y = mainCam->eye.y;
            this->subCamEye.z = mainCam->eye.z;
            this->subCamAt.x = mainCam->at.x;
            this->subCamAt.y = mainCam->at.y;
            this->subCamAt.z = mainCam->at.z;
            Message_StartTextbox(play, 0xF, NULL);
            this->cameraState = 2;
            func_800F4524(&gSfxDefaultPos, NA_SE_VO_SK_LAUGH, 0x20);
            FALLTHROUGH;
        case 2:
            if (player->actor.world.pos.z > 0.0f)
                player->actor.world.pos.z = 290.0f;
            else player->actor.world.pos.z = -950.0f;

            player->actor.speed = 0.0f;
            if (Message_GetState(&play->msgCtx) == TEXT_STATE_NONE) {
                mainCam = Play_GetCamera(play, CAM_ID_MAIN);
                mainCam->eye = this->subCamEye;
                mainCam->eyeNext = this->subCamEye;
                mainCam->at = this->subCamAt;
                Play_ReturnToMainCam(play, this->subCamId, 0);
                Cutscene_StopManual(play, &play->csCtx);
                Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_7);
                this->cameraState = 0;
                this->subCamId = SUB_CAM_ID_DONE;
                this->activeTimer = 20;
            }
            break;
    }

    if (this->subCamId != SUB_CAM_ID_DONE)
        Play_SetCameraAtEye(play, this->subCamId, &this->subCamAt, &this->subCamEye);
}

/**
 * EnClear_Tag update function. Decides whether to update or to mark for death
 */
void EnClearTag2_Update(Actor* thisx, PlayState* play) {
    EnClearTag2* this = (EnClearTag2*)thisx;

    if (this->activeTimer != 0)
        this->activeTimer--;

    if (this->actor.params < 0)
        EnClearTag2_UpdateCamera(this, play);
    else if (this->activeTimer != 0)
        EnClearTag2_UpdateEffects(this, play);
    else Actor_Kill(&this->actor);
}

/**
 * EnClearTag2 draw function. Setups DrawEffects
 */
void EnClearTag2_Draw(Actor* thisx, PlayState* play) {
    EnClearTag2_DrawEffects(thisx, play);
}

/**
 * Updates all effects. Performs effect physics. Moves and bounces debris effects. Fades most effects out of view. When effects are completely faded away they are removed.
 */
void EnClearTag2_UpdateEffects(EnClearTag2* this, PlayState* play) {
    EnClearTag2Effect* effect = this->effect;

    Vec3f sphereCenter;
    f32 originalYPosition;
    s16 i;

    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if (effect->type != CLEAR_TAG2_EFFECT_AVAILABLE) {
            effect->actionTimer++;
            effect->pos.x += effect->velocity.x; // Perform effect physics.
            originalYPosition = effect->pos.y;
            effect->pos.y += effect->velocity.y;
            effect->pos.z += effect->velocity.z;
            effect->velocity.x += effect->accel.x;
            effect->velocity.y += effect->accel.y;
            effect->velocity.z += effect->accel.z;

            if (effect->type == CLEAR_TAG2_EFFECT_DEBRIS) {
                if (effect->velocity.y < -5.0f) // Clamp the velocity to -5.0
                    effect->velocity.y = -5.0f;

                if (effect->velocity.y < 0.0f) { // While the effect is falling check if it has hit the ground.
                    sphereCenter = effect->pos;
                    sphereCenter.y += 5.0f;

                    if (BgCheck_SphVsFirstPoly(&play->colCtx, &sphereCenter, 11.0f)) { // Check if the debris has hit the ground.
                        effect->pos.y = originalYPosition;

                        if (effect->bounces <= 0) { // Bounce the debris effect.
                            effect->bounces++;
                            effect->velocity.y *= -0.5f;
                            effect->effectsTimer = Rand_ZeroFloat(20.0f) + 25.0f;
                        } else effect->velocity.x = effect->velocity.z = effect->accel.y = effect->velocity.y = 0.0f;  // The Debris effect is done bouncing. Set its velocity and acceleration to 0.
                    }
                }

                if (effect->accel.y != 0.0f) { // Rotate the debris effect.
                    effect->rotationY += 0.5f;
                    effect->rotationX += 0.35f;
                }

                if (effect->effectsTimer == 1)
                    effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
            } else if (effect->type == CLEAR_TAG2_EFFECT_FIRE) {
                Math_ApproachZeroF(&effect->primColor.a, 1.0f, 15.0f); // Fade the fire effect.
                if (effect->primColor.a <= 0.0f)
                    effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
            } else if (effect->type == CLEAR_TAG2_EFFECT_SHOCKWAVE) {
                if (effect->actionTimer > 3) {
                    Math_ApproachF(&effect->scale, effect->maxScale, 0.2f, effect->maxScale * 0.6666666f);
                    Math_ApproachZeroF(&effect->primColor.a, 1.0f, 15.0f);
                    if (effect->primColor.a <= 0.0f)
                        effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
                }
            } else if (effect->type == CLEAR_TAG2_EFFECT_SMOKE) {
                Math_ApproachZeroF(&effect->primColor.r, 1.0f, 20.0f); // Fade the smoke effects.
                Math_ApproachZeroF(&effect->primColor.g, 1.0f, 2.0f);
                Math_ApproachZeroF(&effect->envColor.r, 1.0f, 25.5f);
                Math_ApproachZeroF(&effect->envColor.g, 1.0f, 21.5f);
                Math_ApproachZeroF(&effect->envColor.b, 1.0f, 25.5f);
                Math_ApproachF(&effect->scale, effect->maxScale, 0.05f, 0.1f); // Smooth scale the smoke effects.

                if (effect->primColor.r == 0.0f) {
                    Math_ApproachF(&effect->smokeScaleX, 3.0f, 0.1f, 0.01f);
                    Math_ApproachF(&effect->smokeScaleY, 3.0f, 0.1f, 0.02f);
                    Math_ApproachZeroF(&effect->primColor.a, 1.0f, 5.f); // Fade the smoke effects.
                    if (effect->primColor.a <= 0.0f) // If the smoke effect has fully faded, unload it.
                        effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
                }
            } else if (effect->type == CLEAR_TAG2_EFFECT_ISOLATED_SMOKE) {
                Math_ApproachF(&effect->scale, effect->maxScale, 0.05f, 0.1f); // Smooth scale the isolated smoke effects.
                if (effect->actionTimer > 10) {
                    Math_ApproachF(&effect->smokeScaleX, 3.0f, 0.1f, 0.01f);
                    Math_ApproachF(&effect->smokeScaleY, 3.0f, 0.1f, 0.02f);
                    Math_ApproachZeroF(&effect->primColor.a, 1.0f, 5.f); // Fade the smoke effects.
                    if (effect->primColor.a <= 0.0f)
                        effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
                }
            } else if (effect->type == CLEAR_TAG2_EFFECT_FLASH) {
                Math_ApproachF(&effect->scale, effect->maxScale, 0.5f, 6.0f); // Smooth scale the flash effects.
                Math_ApproachZeroF(&effect->primColor.a, 1.0f, 15.0f); // Fade the flash effects.
                if (effect->primColor.a <= 0.0f)
                    effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
            } else if (effect->type == CLEAR_TAG2_EFFECT_LIGHT_RAYS) {
                effect->rotationZ += Rand_ZeroFloat(M_PI / 2) + (M_PI / 2); // Rotate the light ray effect.
                effect->lightRayAlpha -= effect->lightRayAlphaDecrementSpeed; // Fade the light ray effects.
                if (effect->lightRayAlpha <= 0) {
                    effect->lightRayAlpha = 0;
                    effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
                }
                effect->primColor.a = effect->lightRayAlpha;
                if (effect->primColor.a > 255.0f)
                    effect->primColor.a = 255.0f;
                Math_ApproachF(&effect->maxScale, effect->maxScaleTarget, 1.0f, (effect->maxScaleTarget / 15.0f) * 4.0f); // Smooth scale the light ray effects.
            } else if (effect->type == CLEAR_TAG2_EFFECT_SPLASH) {
                if (effect->effectsTimer == 0) {
                    effect->scale = 7.0f;
                    Math_ApproachF(&effect->maxScale, 500.0f, 1.0f, 50.0f); // Smooth scale the splash effects.
                    Math_ApproachF(&effect->rotationX, 1.5f, 1.0f, 0.12f);
                    if (effect->actionTimer > 7)
                        effect->type = CLEAR_TAG2_EFFECT_AVAILABLE;
                } else effect->actionTimer = 0;
            }

            if (effect->effectsTimer != 0)
                effect->effectsTimer--;
        }
    }
}

/**
 * Draws all effects. Each effect type is drawn before the next. The function will apply a material that applies to all effects of that type while drawing the first effect of that type.
 */
void EnClearTag2_DrawEffects(Actor* thisx, PlayState* play) {
    EnClearTag2* this = (EnClearTag2*)thisx;

    GraphicsContext* gfxCtx = play->state.gfxCtx;
    WaterBox* waterBox;
    EnClearTag2Effect* effect = this->effect;
    EnClearTag2Effect* firstEffect = this->effect;
    MtxF mtxF;
    Vec3f vec;
    f32 ySurface;
    s16 i, j;
    u8 isMaterialApplied = false;

    OPEN_DISPS(gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);

    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) { // Draw all Debris effects.
        if (effect->type == CLEAR_TAG2_EFFECT_DEBRIS) {
            if (!isMaterialApplied) { // Apply the debris effect material if it has not already been applied.
                isMaterialApplied++;
                gSPDisplayList(POLY_OPA_DISP++, gClearTag2DebrisEffectMaterialDL);
            }
            Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW); // Draw the debris effect.
            Matrix_Scale(effect->scale, effect->scale, effect->scale, MTXMODE_APPLY);
            Matrix_RotateYF(effect->rotationY, MTXMODE_APPLY);
            Matrix_RotateXFApply(effect->rotationX);
            MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, gfxCtx, __FILE__, __LINE__);
            gSPDisplayList(POLY_OPA_DISP++, gClearTag2DebrisEffectDL);
        }
    }

    effect = firstEffect; // Draw all Shockwave effects.
    if (this->actor.floorPoly != NULL) {
        for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
            if (effect->type == CLEAR_TAG2_EFFECT_SHOCKWAVE) { // Draw the shockwave effect.
                gDPPipeSync(POLY_XLU_DISP++);
                gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 255, (s8)effect->primColor.a);
                gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 255, (s8)effect->primColor.a);
                func_80038A28(this->actor.floorPoly, effect->pos.x, effect->pos.y, effect->pos.z, &mtxF);
                Matrix_Put(&mtxF);
                Matrix_Scale(effect->scale, 1.0f, effect->scale, MTXMODE_APPLY);
                MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
                gSPDisplayList(POLY_XLU_DISP++, gEffShockwaveDL);
            }
        }
    }

    effect = firstEffect; // Draw all ground flash effects.
    isMaterialApplied = false;
    if (this->actor.floorPoly != NULL) {
        for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
            if (effect->type == CLEAR_TAG2_EFFECT_FLASH) {
                if (!isMaterialApplied) { // Apply the flash ground effect material if it has not already been applied.
                    gDPPipeSync(POLY_XLU_DISP++);
                    gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 200, 0);
                    isMaterialApplied++;
                }
                gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 200, (s8)(effect->primColor.a * 0.7f)); // Draw the ground flash effect.
                func_80038A28(this->actor.floorPoly, effect->pos.x, this->actor.floorHeight, effect->pos.z, &mtxF);
                Matrix_Put(&mtxF);
                Matrix_Scale(effect->scale * 3.0f, 1.0f, effect->scale * 3.0f, MTXMODE_APPLY);
                MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
                gSPDisplayList(POLY_XLU_DISP++, gClearTag2FlashEffectGroundDL);
            }
        }
    }

    effect = firstEffect; // Draw all smoke effects.
    isMaterialApplied = false;
    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if ((effect->type == CLEAR_TAG2_EFFECT_SMOKE) || (effect->type == CLEAR_TAG2_EFFECT_ISOLATED_SMOKE)) {
            if (!isMaterialApplied) { // Apply the smoke effect material if it has not already been applied.
                gSPDisplayList(POLY_XLU_DISP++, gClearTag2FireEffectMaterialDL);
                isMaterialApplied++;
            }
            gDPPipeSync(POLY_XLU_DISP++);// Draw the smoke effect.
            gDPSetEnvColor(POLY_XLU_DISP++, (s8)effect->envColor.r, (s8)effect->envColor.g, (s8)effect->envColor.b, 128);
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, (s8)effect->primColor.r, (s8)effect->primColor.g, (s8)effect->primColor.b, (s8)effect->primColor.a);
            gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TwoTexScroll(play->state.gfxCtx, 0, 0, -effect->actionTimer * 5, 32, 64, 1, 0, 0, 32, 32));
            Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW);
            Matrix_ReplaceRotation(&play->billboardMtxF);
            Matrix_Scale(effect->smokeScaleX * effect->scale, effect->smokeScaleY * effect->scale, 1.0f, MTXMODE_APPLY);
            Matrix_Translate(0.0f, 20.0f, 0.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
            gSPDisplayList(POLY_XLU_DISP++, gClearTag2FireEffectDL);
        }
    }

    effect = firstEffect; // Draw all fire effects.
    isMaterialApplied = false;
    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if (effect->type == CLEAR_TAG2_EFFECT_FIRE) {
            if (!isMaterialApplied) { // Apply the fire effect material if it has not already been applied.
                gSPDisplayList(POLY_XLU_DISP++, gClearTag2FireEffectMaterialDL);
                gDPSetEnvColor(POLY_XLU_DISP++, 255, 215, 255, 128);
                isMaterialApplied++;
            }
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 200, 20, 0, (s8)effect->primColor.a); // Draw the fire effect.
            gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TwoTexScroll(play->state.gfxCtx, 0, 0, -effect->actionTimer * 15, 32, 64, 1, 0, 0, 32, 32));
            Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW);
            Matrix_ReplaceRotation(&play->billboardMtxF);
            Matrix_Scale(effect->scale, effect->scale, 1.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
            gSPDisplayList(POLY_XLU_DISP++, gClearTag2FireEffectDL);
        }
    }

    effect = firstEffect; // Draw all flash billboard effects.
    isMaterialApplied = false;
    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if (effect->type == CLEAR_TAG2_EFFECT_FLASH) {
            if (!isMaterialApplied) { // Apply the flash billboard effect material if it has not already been applied.
                gDPPipeSync(POLY_XLU_DISP++);
                gDPSetEnvColor(POLY_XLU_DISP++, this->flashEnvColor.r, this->flashEnvColor.g, this->flashEnvColor.b, 0);
                isMaterialApplied++;
            }
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 200, (s8)effect->primColor.a); // Draw the flash billboard effect.
            Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW);
            Matrix_ReplaceRotation(&play->billboardMtxF);
            Matrix_Scale(2.0f * effect->scale, 2.0f * effect->scale, 1.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
            gSPDisplayList(POLY_XLU_DISP++, gClearTag2FlashEffectDL);
        }
    }

    effect = firstEffect; // Draw all light ray effects.
    isMaterialApplied = false;
    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if (effect->type == CLEAR_TAG2_EFFECT_LIGHT_RAYS) {
            if (!isMaterialApplied) { // Apply the light ray effect material if it has not already been applied.
                gDPPipeSync(POLY_XLU_DISP++);
                gDPSetEnvColor(POLY_XLU_DISP++, (u8)effect->envColor.r, (u8)effect->envColor.g, (u8)effect->envColor.b, 0);
                gSPDisplayList(POLY_XLU_DISP++, gClearTag2LightRayEffectMaterialDL);
                isMaterialApplied++;
            }
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, (u8)effect->primColor.r, (u8)effect->primColor.g, (u8)effect->primColor.b, (u8)effect->primColor.a); // Draw the light ray effect.
            Matrix_Translate(effect->pos.x, effect->pos.y, effect->pos.z, MTXMODE_NEW);
            Matrix_RotateYF(effect->rotationY, MTXMODE_APPLY);
            Matrix_RotateXFApply(effect->rotationX);
            Matrix_RotateZF(effect->rotationZ, MTXMODE_APPLY);
            Matrix_Scale(effect->scale * 0.5f, effect->scale * 0.5f, effect->maxScale * effect->scale, MTXMODE_APPLY);
            Matrix_RotateXFApply(M_PI / 2);
            MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
            gSPDisplayList(POLY_XLU_DISP++, gClearTag2LightRayEffectDL);
        }
    }

    effect = firstEffect; // Draw all splash effects.
    for (i=0; i<ARRAY_COUNT(this->effect); i++, effect++) {
        if (effect->type == CLEAR_TAG2_EFFECT_SPLASH) {
            gDPPipeSync(POLY_XLU_DISP++);
            gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 255, 200);
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, 255, 255, 255, 200);
            gSPSegment(POLY_XLU_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(sWaterSplashTextures[effect->actionTimer]));
            Gfx_SetupDL_61Xlu(gfxCtx);
            gSPClearGeometryMode(POLY_XLU_DISP++, G_CULL_BACK);
            isMaterialApplied++;
            for (j=0; j<16; j++) { // Apply material 16 times along a circle to give the appearance of a splash
                Matrix_RotateYF(2.0f * (j * M_PI) * (1.0f / 16.0f), MTXMODE_NEW);
                Matrix_MultVecZ(effect->maxScale, &vec);
                ySurface = effect->pos.y; // Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input returns true if point is within the xz boundaries of an active water box, else false `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
                if (WaterBox_GetSurface1(play, &play->colCtx, effect->pos.x + vec.x, effect->pos.z + vec.z, &ySurface, &waterBox)) {
                    if ((effect->pos.y - ySurface) < 200.0f) {
                        Matrix_Translate(effect->pos.x + vec.x, ySurface, effect->pos.z + vec.z, MTXMODE_NEW); // Draw the splash effect.
                        Matrix_RotateYF(2.0f * (j * M_PI) * (1.0f / 16.0f), MTXMODE_APPLY);
                        Matrix_RotateXFApply(effect->rotationX);
                        Matrix_Scale(effect->scale, effect->scale, effect->scale, MTXMODE_APPLY);
                        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, gfxCtx, __FILE__, __LINE__);
                        gSPDisplayList(POLY_XLU_DISP++, gEffWaterSplashDL);
                    }
                }
            }
        }
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
