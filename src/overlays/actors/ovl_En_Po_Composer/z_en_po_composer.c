/*
 * File: z_en_po_composer.c
 * Overlay: ovl_En_Po_Composer
 * Description: Poe Composers Flat and Sharp
 */

#include "z_en_po_composer.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "regs.h"
#include "audio.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "light.h"
#include "play_state.h"
#include "player.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void EnPoComposer_Init(Actor* thisx, struct PlayState* play);
void EnPoComposer_Destroy(Actor* thisx, struct PlayState* play);
void EnPoComposer_Update(Actor* thisx, struct PlayState* play);
void EnPoComposer_Draw(Actor* thisx, struct PlayState* play);

void EnPoComposer_SetupInitialAction(EnPoComposer* this);
void EnPoComposer_Appear(EnPoComposer* this, struct PlayState* play);
void EnPoComposer_SetupCamera(EnPoComposer* this, struct PlayState* play);
void EnPoComposer_TeardownCamera(EnPoComposer* this, struct PlayState* play);
void EnPoComposer_SetupDisappear(EnPoComposer* this);
void EnPoComposer_Talk(EnPoComposer* this, struct PlayState* play);

ActorProfile En_Po_Composer_Profile = {
    /**/ ACTOR_EN_PO_COMPOSER,
    /**/ ACTORCAT_NPC,
    /**/ FLAGS,
    /**/ OBJECT_PO_COMPOSER,
    /**/ sizeof(EnPoComposer),
    /**/ EnPoComposer_Init,
    /**/ EnPoComposer_Destroy,
    /**/ EnPoComposer_Update,
    /**/ EnPoComposer_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_HIT3,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 20, 40, 20, { 0, 0, 0 } },
};

static ColliderJntSphElementInit sJntSphElementsInit[] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xFFCFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x08 },
            { 0x00000000, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_ON | ATELEM_SFX_NORMAL,
            ACELEM_NONE,
            OCELEM_ON,
        },
        { 18, { { 0, 1400, 0 }, 10 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_HIT3,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphElementsInit),
    sJntSphElementsInit,
};

static CollisionCheckInfoInit sColChkInfoInit = { 4, 25, 50, 40 };

// Unused. Interesting that they had planned for a fight at some point, maybe flat?
static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, 0x0),
    /* Deku stick    */ DMG_ENTRY(2, 0x0),
    /* Slingshot     */ DMG_ENTRY(1, 0x0),
    /* Explosive     */ DMG_ENTRY(2, 0x0),
    /* Boomerang     */ DMG_ENTRY(1, 0x1),
    /* Normal arrow  */ DMG_ENTRY(2, 0x0),
    /* Hammer swing  */ DMG_ENTRY(2, 0x0),
    /* Hookshot      */ DMG_ENTRY(2, 0x1),
    /* Kokiri sword  */ DMG_ENTRY(1, 0x0),
    /* Master sword  */ DMG_ENTRY(2, 0x0),
    /* Giant's Knife */ DMG_ENTRY(4, 0x0),
    /* Fire arrow    */ DMG_ENTRY(2, 0x0),
    /* Ice arrow     */ DMG_ENTRY(2, 0x0),
    /* Light arrow   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(4, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(2, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(2, 0x0),
    /* Fire magic    */ DMG_ENTRY(0, 0x0),
    /* Ice magic     */ DMG_ENTRY(0, 0x0),
    /* Light magic   */ DMG_ENTRY(0, 0x0),
    /* Shield        */ DMG_ENTRY(0, 0x0),
    /* Mirror Ray    */ DMG_ENTRY(0, 0x0),
    /* Kokiri spin   */ DMG_ENTRY(1, 0x0),
    /* Giant spin    */ DMG_ENTRY(4, 0x0),
    /* Master spin   */ DMG_ENTRY(2, 0x0),
    /* Kokiri jump   */ DMG_ENTRY(2, 0x0),
    /* Giant jump    */ DMG_ENTRY(8, 0x0),
    /* Master jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 1     */ DMG_ENTRY(0, 0x0),
    /* Unblockable   */ DMG_ENTRY(0, 0x0),
    /* Hammer jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 2     */ DMG_ENTRY(0, 0x0),
};

static EnPoComposerInfo sPoComposerInfo = {
    { 255, 255, 170 },
    { 0, 150, 0 },
    9,
    1,
    244,
    &gPoeComposerDisappearAnim,
    &gPoeComposerFloatAnim,
    &gPoeComposerDamagedAnim,
    &gPoeComposerFleeAnim,
    gPoeComposerLanternDL,
    gPoeComposerBurnDL,
    gPoeComposerSoulDL,
};

static Color_RGBA8 D_80AE1B4C = { 75, 20, 25, 255 };
static Color_RGBA8 D_80AE1B50 = { 80, 110, 90, 255 };
static Color_RGBA8 D_80AE1B54 = { 90, 85, 50, 255 };
static Color_RGBA8 D_80AE1B58 = { 100, 90, 100, 255 };

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(lockOnArrowOffset, 3200, ICHAIN_STOP),
};

void EnPoComposer_Init(Actor* thisx, PlayState* play) {
    EnPoComposer* this = (EnPoComposer*)thisx;

    if (Flags_GetSwitch(play, EN_PO_COMPOSER_GET_SWITCH_FLAG(this->actor.params)))
        Actor_Kill(&this->actor);

    Actor_ProcessInitChain(&this->actor, sInitChain);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 30.0f);
    Collider_InitJntSph(play, &this->colliderJntSph);
    Collider_SetJntSph(play, &this->colliderJntSph, &this->actor, &sJntSphInit, this->colliderJntSphElements);
    this->colliderJntSph.elements[0].dim.worldSphere.radius = 0;
    this->colliderJntSph.elements[0].dim.worldSphere.center.x = this->actor.world.pos.x;
    this->colliderJntSph.elements[0].dim.worldSphere.center.y = this->actor.world.pos.y;
    this->colliderJntSph.elements[0].dim.worldSphere.center.z = this->actor.world.pos.z;
    Collider_InitCylinder(play, &this->colliderCylinder);
    Collider_SetCylinder(play, &this->colliderCylinder, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &sDamageTable, &sColChkInfoInit);
    this->actor.colChkInfo.health = 1;
    this->unk_194 = 0;
    this->unk_195 = 32;
    this->unk_198 = -1;
    this->subCamId = CAM_ID_NONE;
    this->lightNode = LightContext_InsertLight(play, &play->lightCtx, &this->lightInfo);
    Lights_PointGlowSetInfo(&this->lightInfo, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, 255, 255, 255, 0);

    SkelAnime_InitFlex(play, &this->skelAnime, &gPoeComposerSkel, &gPoeComposerFloatAnim, this->jointTable, this->morphTable, 12);
    this->colliderJntSph.elements[0].dim.limb = 9;
    this->colliderJntSph.elements[0].dim.modelSphere.center.y *= -1;
    this->actor.shape.rot.y = this->actor.world.rot.y = -0x4000;
    this->colliderCylinder.dim.radius = 20;
    this->colliderCylinder.dim.height = 55;
    this->colliderCylinder.dim.yShift = 15;

    this->envColor.r = 240;
    this->envColor.g = 200;
    this->envColor.b = 160;
    this->envColor.a = 200;
}

void EnPoComposer_Destroy(Actor* thisx, PlayState* play) {
    EnPoComposer* this = (EnPoComposer*)thisx;

    EnPoComposer_TeardownCamera(this, play);
    LightContext_RemoveLight(play, &play->lightCtx, this->lightNode);
    Collider_DestroyJntSph(play, &this->colliderJntSph);
    Collider_DestroyCylinder(play, &this->colliderCylinder);
}

void EnPoComposer_SetupCamera(EnPoComposer* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f subCamAt;
    Vec3f subCamEye;
    f32 xzDist;

    this->subCamId = Play_CreateSubCamera(play);
    Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
    Play_ChangeCameraStatus(play, this->subCamId, CAM_STAT_ACTIVE);

    player->actor.world.pos.x = 1860.0f;
    player->actor.world.pos.y = 0.0f;
    player->actor.world.pos.z = 327.0f;
    player->actor.speed = 0.0f;
    player->actor.world.rot.y = player->actor.shape.rot.y = Actor_WorldYawTowardPoint(&player->actor, &this->actor.world.pos);

    subCamAt.x = this->actor.world.pos.x;
    subCamAt.y = this->actor.world.pos.y;
    subCamAt.z = this->actor.world.pos.z;

    xzDist = Actor_WorldDistXZToPoint(&this->actor, &player->actor.world.pos);
    if (xzDist > 1.0f) {
        subCamEye.x = subCamAt.x + (player->actor.world.pos.x - subCamAt.x) * (150.0f / xzDist);
        subCamEye.y = subCamAt.y - 20.0f;
        subCamEye.z = subCamAt.z + (player->actor.world.pos.z - subCamAt.z) * (150.0f / xzDist);
    } else {
        subCamEye.x = subCamAt.x;
        subCamEye.y = subCamAt.y - 20.0f;
        subCamEye.z = subCamAt.z - 150.0f;
    }

    Play_SetCameraAtEye(play, this->subCamId, &subCamAt, &subCamEye);
    Play_SetCameraFov(play, this->subCamId, play->mainCamera.fov);

    gSaveContext.prevHudVisibilityMode = gSaveContext.hudVisibilityMode;
    Interface_ChangeHudVisibilityMode(HUD_VISIBILITY_NOTHING_ALT);

    Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_1);
}

void EnPoComposer_TeardownCamera(EnPoComposer* this, PlayState* play) {
    if (this->subCamId != CAM_ID_NONE) {
        Play_ClearCamera(play, this->subCamId);
        this->subCamId = CAM_ID_NONE;
        Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_ACTIVE);
    }

    Player_SetCsActionWithHaltedActors(play, NULL, PLAYER_CSACTION_7);
}

void EnPoComposer_Update(Actor* thisx, PlayState* play) {
    EnPoComposer* this = (EnPoComposer*)thisx;

    if (this->actionFunc != NULL)
        this->actionFunc(this, play);
    else if (Flags_GetSwitch(play, EN_PO_COMPOSER_GET_SWITCH_FLAG(this->actor.params)) && Object_IsLoaded(&play->objectCtx, this->actor.objectSlot)) {
        if (this->unk_198 == -1) {
            this->unk_198 = SECONDS(8);
            func_800F5B58();
            EnPoComposer_SetupCamera(this, play);
        } else if (DECR(this->unk_198) == 0)
            EnPoComposer_SetupInitialAction(this);
    }
}

void EnPoComposer_SetupInitialAction(EnPoComposer* this) {
    this->lightColor.a = 0;
    Animation_PlayOnceSetSpeed(&this->skelAnime, &gPoeComposerAppearAnim, 1.0f);
    Actor_PlaySfx(&this->actor, NA_SE_EN_PO_LAUGH);
    Actor_PlaySfx(&this->actor, NA_SE_EN_PO_APPEAR);
    this->actor.flags |= ACTOR_FLAG_TALK_OFFER_AUTO_ACCEPTED;
    this->actionFunc = EnPoComposer_Appear;
}

void EnPoComposer_Appear(EnPoComposer* this, PlayState* play) {
    if (SkelAnime_Update(&this->skelAnime)) {
        this->lightColor.a = 255;
        this->actor.textId = 0x8504;
        Message_StartTextbox(play, this->actor.textId, &this->actor);
        Animation_PlayLoop(&this->skelAnime, &gPoeComposerFloatAnim);
        this->actionFunc = EnPoComposer_Talk;
    } else this->lightColor.a = CLAMP_MAX((s32)(this->skelAnime.curFrame * 25.5f), 255);
}

void EnPoComposer_Disappear(EnPoComposer* this, PlayState* play) {
    if (this->unk_194 != 0)
        this->unk_194--;
    SkelAnime_Update(&this->skelAnime);
    this->actor.shape.rot.y += 0x1000;
    this->lightColor.a = this->unk_194 * 7.96875f;
    if (this->unk_194 == 0) {
        EnPoComposer_TeardownCamera(this, play);
        gSaveContext.hudVisibilityMode = HUD_VISIBILITY_NO_CHANGE;
        Interface_ChangeHudVisibilityMode(gSaveContext.prevHudVisibilityMode);
        Actor_Kill(&this->actor);
    }
}

void EnPoComposer_SetupDisappear(EnPoComposer* this) {
    this->unk_194 = 32;
    this->actor.speed = 0.0f;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Animation_PlayOnce(&this->skelAnime, &gPoeComposerDisappearAnim);
    Actor_PlaySfx(&this->actor, NA_SE_EN_PO_DISAPPEAR);
    Actor_PlaySfx(&this->actor, NA_SE_EN_PO_LAUGH);
    this->actionFunc = EnPoComposer_Disappear;
}

void EnPoComposer_Talk(EnPoComposer* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (Actor_TextboxIsClosing(&this->actor, play)) {
        EnPoComposer_SetupDisappear(this);
    }
}

void EnPoComposer_UpdateColoring(EnPoComposer* this) {
    s16 temp_var;

    this->lightColor.r = CLAMP_MAX((s16)(this->lightColor.r + 5), 255);
    this->lightColor.g = CLAMP_MAX((s16)(this->lightColor.g + 5), 255);
    if (this->lightColor.b >= 211) {
        temp_var = this->lightColor.b - 5;
        this->lightColor.b = CLAMP_MIN(temp_var, 210);
    } else {
        temp_var = this->lightColor.b + 5;
        this->lightColor.b = CLAMP_MAX(temp_var, 210);
    }
}

s32 EnPoComposer_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx, Gfx** gfxP) {
    EnPoComposer* this = (EnPoComposer*)thisx;

    if (this->lightColor.a == 0 || limbIndex == sPoComposerInfo.unk_6)
        *dList = NULL;
    else if (EN_PO_COMPOSER_GET_TYPE(this->actor.params) == EN_PO_COMPOSER_FLAT && limbIndex == 0xA) // Replace Sharp's head with Flat's
        *dList = gPoeComposerFlatHeadDL;
    return false;
}

void EnPoComposer_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx, Gfx** gfxP) {
    EnPoComposer* this = (EnPoComposer*)thisx;

    Collider_UpdateSpheres(limbIndex, &this->colliderJntSph);
    if (limbIndex == sPoComposerInfo.unk_6) {
        Matrix_Get(&this->unk_368);
        Lights_PointGlowSetInfo(&this->lightInfo, this->colliderJntSph.elements[0].dim.worldSphere.center.x, this->colliderJntSph.elements[0].dim.worldSphere.center.y, this->colliderJntSph.elements[0].dim.worldSphere.center.z, this->envColor.r, this->envColor.g, this->envColor.b, this->envColor.a * (200.0f / 255));
    }
}

void EnPoComposer_Draw(Actor* thisx, PlayState* play) {
    EnPoComposer* this = (EnPoComposer*)thisx;
    Color_RGBA8* sp90;
    Color_RGBA8* phi_t0;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    EnPoComposer_UpdateColoring(this);
    if (EN_PO_COMPOSER_GET_TYPE(this->actor.params) == EN_PO_COMPOSER_SHARP) {
        sp90 = &D_80AE1B4C;
        phi_t0 = &D_80AE1B54;
    } else {
        sp90 = &D_80AE1B50;
        phi_t0 = &D_80AE1B58;
    }
    if (this->lightColor.a == 255 || this->lightColor.a == 0) {
        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        gSPSegment(POLY_OPA_DISP++, 0x08, Gfx_EnvColor(play->state.gfxCtx, this->lightColor.r, this->lightColor.g, this->lightColor.b, this->lightColor.a));
        gSPSegment(POLY_OPA_DISP++, 0x0A, Gfx_EnvColor(play->state.gfxCtx, sp90->r, sp90->g, sp90->b, this->lightColor.a));
        gSPSegment(POLY_OPA_DISP++, 0x0B, Gfx_EnvColor(play->state.gfxCtx, phi_t0->r, phi_t0->g, phi_t0->b, this->lightColor.a));
        gSPSegment(POLY_OPA_DISP++, 0x0C, D_80116280 + 2);
        POLY_OPA_DISP = SkelAnime_DrawFlex(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnPoComposer_OverrideLimbDraw, EnPoComposer_PostLimbDraw, &this->actor, POLY_OPA_DISP);
    } else {
        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_EnvColor(play->state.gfxCtx, this->lightColor.r, this->lightColor.g, this->lightColor.b, this->lightColor.a));
        gSPSegment(POLY_XLU_DISP++, 0x0A, Gfx_EnvColor(play->state.gfxCtx, sp90->r, sp90->g, sp90->b, this->lightColor.a));
        gSPSegment(POLY_XLU_DISP++, 0x0B, Gfx_EnvColor(play->state.gfxCtx, phi_t0->r, phi_t0->g, phi_t0->b, this->lightColor.a));
        gSPSegment(POLY_XLU_DISP++, 0x0C, D_80116280);
        POLY_XLU_DISP = SkelAnime_DrawFlex(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, EnPoComposer_OverrideLimbDraw, EnPoComposer_PostLimbDraw, &this->actor, POLY_XLU_DISP);
    }
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, this->envColor.r, this->envColor.g, this->envColor.b, 255);
    if (this->lightColor.a != 0) {
        Matrix_Put(&this->unk_368);
        MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_OPA_DISP++, sPoComposerInfo.lanternDisplayList);
        gSPDisplayList(POLY_OPA_DISP++, gPoeComposerLanternBottomDL);
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetEnvColor(POLY_OPA_DISP++, sp90->r, sp90->g, sp90->b, 255);
        gSPDisplayList(POLY_OPA_DISP++, gPoeComposerLanternTopDL);
    }
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
