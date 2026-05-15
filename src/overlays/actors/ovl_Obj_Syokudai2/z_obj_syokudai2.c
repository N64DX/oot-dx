/*
 * File: z_obj_syokuda2i.c
 * Overlay: ovl_Obj_Syokudai2
 * Description: Torch (for unlitting)
 */

#include "z_obj_syokudai2.h"
#include "overlays/actors/ovl_En_Arrow/z_en_arrow.h"

#include "libc64/qrand.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "one_point_cutscene.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"

#include "assets/objects/gameplay_keep/eff_fire.h"
#include "assets/objects/object_syokudai/object_syokudai.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_HOOKSHOT_PULLS_PLAYER)

void ObjSyokudai2_Init(Actor* thisx, PlayState* play);
void ObjSyokudai2_Destroy(Actor* thisx, PlayState* play);
void ObjSyokudai2_Update(Actor* thisx, PlayState* play);
void ObjSyokudai2_Draw(Actor* thisx, PlayState* play);

ActorProfile Obj_Syokudai2_Profile = {
    /**/ ACTOR_OBJ_SYOKUDAI2,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_SYOKUDAI,
    /**/ sizeof(ObjSyokudai2),
    /**/ ObjSyokudai2_Init,
    /**/ ObjSyokudai2_Destroy,
    /**/ ObjSyokudai2_Update,
    /**/ ObjSyokudai2_Draw,
};

static ColliderCylinderInit sCylInitStand = {
    {
        COL_MATERIAL_METAL,
        AT_NONE,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00100000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xEE01FFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON | ACELEM_HOOKABLE,
        OCELEM_ON,
    },
    { 12, 45, 0, { 0, 0, 0 } },
};

static ColliderCylinderInit sCylInitFlame = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0x00021820, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 15, 45, 45, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 800, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 800, ICHAIN_STOP),
};

static s8 sLitTorchCount;

void ObjSyokudai2_Init(Actor* thisx, PlayState* play) {
    static u8 sColMaterialsStand[] = { COL_MATERIAL_METAL, COL_MATERIAL_WOOD, COL_MATERIAL_WOOD };
    ObjSyokudai2* this = (ObjSyokudai2*)thisx;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);

    Collider_InitCylinder(play, &this->standCollider);
    Collider_SetCylinder(play, &this->standCollider, &this->actor, &sCylInitStand);
    this->standCollider.base.colMaterial = sColMaterialsStand[PARAMS_GET_NOMASK(this->actor.params, 12)];
    Collider_InitCylinder(play, &this->flameCollider);
    Collider_SetCylinder(play, &this->flameCollider, &this->actor, &sCylInitFlame);

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->switchFlag            = (this->actor.params >> 8) & 0xFF;
    this->torchCount            =  this->actor.params       & 0xFF;

    Lights_PointGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, this->actor.world.pos.y + 70.0f, this->actor.world.pos.z, 255, 255, 180, -1);
    this->lightNode = LightContext_InsertLight(play, &play->lightCtx, &this->lightInfo);

    this->isLit = !Flags_GetSwitch(play, this->switchFlag) || this->switchFlag == 0xFF;
    this->flameTexScroll = (s32)(Rand_ZeroOne() * 20.0f);
    sLitTorchCount = this->torchCount;
    Actor_SetFocus(&this->actor, 60.0f);
}

void ObjSyokudai2_Destroy(Actor* thisx, PlayState* play) {
    ObjSyokudai2* this = (ObjSyokudai2*)thisx;

    Collider_DestroyCylinder(play, &this->standCollider);
    Collider_DestroyCylinder(play, &this->flameCollider);
    LightContext_RemoveLight(play, &play->lightCtx, this->lightNode);
}

void ObjSyokudai2_Update(Actor* thisx, PlayState* play) {
    ObjSyokudai2* this = (ObjSyokudai2*)thisx;
    u8 brightness = 0;
    Player* player = GET_PLAYER(play);
    EnArrow* arrow;
    s32 interactionType = 0;
    u32 dmgFlags;
    Vec3f tipToFlame;

    if (this->flameCollider.base.acFlags & AC_HIT) {
        dmgFlags = this->flameCollider.elem.acHitElem->atDmgInfo.dmgFlags;
        if (dmgFlags & DMG_ARROW_ICE)
            interactionType = 2;
        else if (dmgFlags & (DMG_FIRE | DMG_ARROW_NORMAL))
            interactionType = 1;
    } else if (player->heldItemAction == PLAYER_IA_DEKU_STICK) {
        Math_Vec3f_Diff(MELEE_WEAPON_INFO_TIP(&player->meleeWeaponInfo[0]), &this->actor.world.pos, &tipToFlame);
        tipToFlame.y -= 67.0f;
        if ((SQ(tipToFlame.x) + SQ(tipToFlame.y) + SQ(tipToFlame.z)) < SQ(20.0f))
            interactionType = -1;
    }

    if (interactionType == 2) {
        if (this->isLit) {
            if (dmgFlags & DMG_ARROW_ICE) {
                arrow = (EnArrow*)this->flameCollider.base.ac;
                if (arrow->actor.update != NULL && arrow->actor.id == ACTOR_EN_ARROW) {
                    arrow->actor.params = 0;
                    arrow->collider.elem.atDmgInfo.dmgFlags = DMG_ARROW_ICE;
                }

                if (this->torchCount == 0) {
                    Flags_SetSwitch(play, this->switchFlag);
                    OnePointCutscene_Attention(play, &this->actor);
                } else {
                    sLitTorchCount--;
                    if (sLitTorchCount <= 0) {
                        Flags_SetSwitch(play, this->switchFlag);
                        OnePointCutscene_Attention(play, &this->actor);
                    }
                }
                this->isLit = false;
                SFX_PLAY_AT_POS(&this->actor.projectedPos, NA_SE_EV_ICE_FREEZE2);
            }
        }
    } else if (interactionType != 0) {
        if (this->isLit) {
            if (interactionType < 0) {
                if (player->unk_860 == 0) {
                    player->unk_860 = 210;
                    SFX_PLAY_AT_POS(&this->actor.projectedPos, NA_SE_EV_FLAME_IGNITION);
                } else if (player->unk_860 < 200)
                    player->unk_860 = 200;
            } else if (dmgFlags & DMG_ARROW_NORMAL) {
                arrow = (EnArrow*)this->flameCollider.base.ac;
                if (arrow->actor.update != NULL && arrow->actor.id == ACTOR_EN_ARROW) {
                    arrow->actor.params = 0;
                    arrow->collider.elem.atDmgInfo.dmgFlags = DMG_ARROW_FIRE;
                }
            }
        } else if (((interactionType > 0 && (dmgFlags & DMG_FIRE)) || (interactionType < 0 && (player->unk_860 != 0)))) {
            if (interactionType < 0 && player->unk_860 < 200)
                player->unk_860 = 200;

            sLitTorchCount++;
            if (sLitTorchCount >= this->torchCount) {
                Flags_SetSwitch(play, this->switchFlag);
                OnePointCutscene_Attention(play, &this->actor);
            }
            this->isLit = true;
            SFX_PLAY_AT_POS(&this->actor.projectedPos, NA_SE_EV_FLAME_IGNITION);
        }
    } 

    Collider_UpdateCylinder(&this->actor, &this->standCollider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->standCollider.base);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->standCollider.base);

    Collider_UpdateCylinder(&this->actor, &this->flameCollider);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->flameCollider.base);

    if (this->isLit) {
        brightness = (u8)(Rand_ZeroOne() * 127.0f) + 128;
        Actor_PlaySfx_Flagged(&this->actor, NA_SE_EV_TORCH - SFX_FLAG);
    }
    Lights_PointSetColorAndRadius(&this->lightInfo, brightness, brightness, 0, this->isLit ? 200 : 0);
    this->flameTexScroll++;
}

void ObjSyokudai2_Draw(Actor* thisx, PlayState* play) {
    ObjSyokudai2* this = (ObjSyokudai2*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
    gSPDisplayList(POLY_OPA_DISP++, gTimedTorchDL);

    if (this->isLit) {
        f32 flameScale = 0.0027f;

        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, 0, 0, 0x20, 0x40, 1, 0, (this->flameTexScroll * -20) & 0x1FF, 0x20, 0x80));
        gDPSetPrimColor(POLY_XLU_DISP++, 0x80, 0x80, 255, 255, 0, 255);
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 0, 0, 0);
        Matrix_Translate(0.0f, 52.0f, 0.0f, MTXMODE_APPLY);
        Matrix_RotateY( BINANG_TO_RAD((s16)(Camera_GetCamDirYaw(GET_ACTIVE_CAM(play)) - this->actor.shape.rot.y + 0x8000)), MTXMODE_APPLY);
        Matrix_Scale(flameScale, flameScale, flameScale, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(POLY_XLU_DISP++, gEffFire1DL);
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
