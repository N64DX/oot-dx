#include "z_en_m_thunder.h"

#include "gfx.h"
#include "gfx_setupdl.h"
#include "rumble.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "audio.h"
#include "light.h"
#include "play_state.h"
#include "player.h"
#include "save.h"

#include "assets/objects/gameplay_keep/spin_attack.h"
#include "assets/objects/gameplay_keep/gameplay_keep_0x13700.h"

#define FLAGS 0

typedef enum EnMThunderSwordType {
    /* 0 */ M_THUNDER_SWORD_MASTER,
    /* 1 */ M_THUNDER_SWORD_KOKIRI,
    /* 2 */ M_THUNDER_SWORD_GIANT
} EnMThunderSwordType;

typedef enum EnMThunderAttackStrength {
    /* 0 */ M_THUNDER_ATTACK_STRONG,
    /* 1 */ M_THUNDER_ATTACK_WEAK
} EnMThunderAttackStrength;

void EnMThunder_Init(Actor* thisx, PlayState* play2);
void EnMThunder_Destroy(Actor* thisx, PlayState* play);
void EnMThunder_Update(Actor* thisx, PlayState* play);
void EnMThunder_Draw(Actor* thisx, PlayState* play2);

void EnMThunder_AdjustEnvLights(PlayState* play, f32 intensity);
void EnMThunder_ChargingSpinAttack(EnMThunder* this, PlayState* play);
void EnMThunder_SwordBeam_Attack(EnMThunder* this, PlayState* play);
void EnMThunder_SpinAttacking(EnMThunder* this, PlayState* play);

ActorProfile En_M_Thunder_Profile = {
    /**/ ACTOR_EN_M_THUNDER,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnMThunder),
    /**/ EnMThunder_Init,
    /**/ EnMThunder_Destroy,
    /**/ EnMThunder_Update,
    /**/ EnMThunder_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_PLAYER,
        AC_NONE,
        OC1_NONE,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00000001, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_ON | ATELEM_SFX_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 200, 200, 0, { 0, 0, 0 } },
};

static u32 sSpinAttackDmgFlags[] = { DMG_SPIN_MASTER, DMG_SPIN_KOKIRI, DMG_SPIN_GIANT, DMG_SPIN_GIANT };
static u32 sJumpAttackDmgFlags[] = { DMG_JUMP_MASTER, DMG_JUMP_KOKIRI, DMG_JUMP_GIANT, DMG_JUMP_GIANT };

typedef enum {
    /* 0 */ ENMTHUNDER_SUBTYPE_SPIN_GREAT,
    /* 1 */ ENMTHUNDER_SUBTYPE_SPIN_REGULAR,
    /* 2 */ ENMTHUNDER_SUBTYPE_SWORDBEAM_GREAT,
    /* 3 */ ENMTHUNDER_SUBTYPE_SWORDBEAM_REGULAR,
    /* 4 */ ENMTHUNDER_SUBTYPE_MAX
} EnMThunderSubType;

void EnMThunder_SetupAction(EnMThunder* this, EnMThunderActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnMThunder_Init(Actor* thisx, PlayState* play2) {
    PlayState* play = play2;
    EnMThunder* this = (EnMThunder*)thisx;
    Player* player = GET_PLAYER(play);

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    this->swordType = PARAMS_GET_S(this->actor.params, 0, 8) - 1;
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, this->actor.world.pos.y,
                              this->actor.world.pos.z, 255, 255, 255, 0);
    this->lightNode = LightContext_InsertLight(play, &play->lightCtx, &this->lightInfo);
    this->collider.dim.radius = 0;
    this->collider.dim.height = 40;
    this->collider.dim.yShift = -20;
    this->followPlayerTimer = 8;
    this->spinTrailTexScroll = 0.0f;
    this->actor.world.pos = player->bodyPartsPos[PLAYER_BODYPART_WAIST];
    this->spinAttackTimer = 0.0f;
    this->dimmingIntensity = 0.0f;
    this->actor.shape.rot.y = player->actor.shape.rot.y + 0x8000;
    this->actor.room = -1;
    Actor_SetScale(&this->actor, 0.1f);
    this->isUsingMagic = false;

    if (player->stateFlags2 & PLAYER_STATE2_17) {
        if (!gSaveContext.save.info.playerData.isMagicAcquired || (gSaveContext.magicState != MAGIC_STATE_IDLE) ||
            (PARAMS_GET_S(this->actor.params, 8, 8) &&
             !(Magic_RequestChange(play, PARAMS_GET_S(this->actor.params, 8, 8), MAGIC_CONSUME_NOW)))) {
            SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_ROLLING_CUT);
            SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_SWORD_SWING_HARD);
            Actor_Kill(&this->actor);
            return;
        }

        player->stateFlags2 &= ~PLAYER_STATE2_17;
        this->isUsingMagic = true;
        this->collider.elem.atDmgInfo.dmgFlags = sSpinAttackDmgFlags[this->swordType];
        this->attackStrength = M_THUNDER_ATTACK_WEAK;
        switch (this->swordType) {
            case 1: // Kokiri Sword
                this->targetScale = 2;
                break;
            case 0: // Razor Sword / Master Sword
                this->targetScale = IS_CHILD_QUEST_AS_CHILD ? (!HAS_MASTER_SWORD ? 2 : 3) : 4;
                break;
            case 2: // Gilded Sword / Giant's Knife
                this->targetScale = IS_CHILD_QUEST_AS_CHILD ? 3 : 4;
                break;
            case 3: // Great Fairy's Sword
                this->targetScale = 4;
                break;
        }

        if (HAS_HEROS_SWORD && CUR_EQUIP_VALUE(EQUIP_TYPE_SWORD) == EQUIP_VALUE_SWORD_KOKIRI && player->itemAction == PLAYER_IA_SWORD_KOKIRI) {
            this->attackStrength += 2;
            this->actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
            EnMThunder_SetupAction(this, EnMThunder_SwordBeam_Attack);
            this->followPlayerTimer = M_THUNDER_ATTACK_WEAK;
            this->targetScale = 12;
        } else {
            if (Player_HasEnergyUnlocked() && gSaveContext.save.info.obtainedSkills.enhancedSpin && gSaveContext.save.info.energy > 30) {
                gSaveContext.save.info.energy -= 30;
                this->collider.elem.atDmgInfo.dmgFlags = sJumpAttackDmgFlags[this->swordType];
                this->attackStrength = M_THUNDER_ATTACK_STRONG;
                this->targetScale *= 2;
            }
            EnMThunder_SetupAction(this, EnMThunder_SpinAttacking);
            this->followPlayerTimer = 8;
        }

        SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_ROLLING_CUT_LV1);
        this->spinAttackTimer = 1.0f;
    } else {
        EnMThunder_SetupAction(this, EnMThunder_ChargingSpinAttack);
    }
    this->actor.child = NULL;
}

void EnMThunder_Destroy(Actor* thisx, PlayState* play) {
    EnMThunder* this = (EnMThunder*)thisx;

    if (this->isUsingMagic) {
        Magic_Reset(play);
    }

    Collider_DestroyCylinder(play, &this->collider);
    EnMThunder_AdjustEnvLights(play, 0.0f);
    LightContext_RemoveLight(play, &play->lightCtx, this->lightNode);
}

void EnMThunder_AdjustEnvLights(PlayState* play, f32 intensity) {
    Environment_AdjustLights(play, intensity, 850.0f, 0.2f, 0.0f);
}

void EnMThunder_EmptySpinAttack(EnMThunder* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (player->stateFlags2 & PLAYER_STATE2_17) {
        if (player->meleeWeaponAnimation >= PLAYER_MWA_SPIN_ATTACK_1H) {
            SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_ROLLING_CUT);
            SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_SWORD_SWING_HARD);
        }

        Actor_Kill(&this->actor);
        return;
    }

    if (!(player->stateFlags1 & PLAYER_STATE1_CHARGING_SPIN_ATTACK)) {
        Actor_Kill(&this->actor);
    }
}

void EnMThunder_ChargingSpinAttack(EnMThunder* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Actor* child = this->actor.child;

    this->spinChargePercent = player->unk_858;
    this->actor.world.pos = player->bodyPartsPos[PLAYER_BODYPART_WAIST];
    this->actor.shape.rot.y = player->actor.shape.rot.y + 0x8000;

    if (!this->isUsingMagic) {
        if (player->unk_858 >= 0.1f) {
            if ((gSaveContext.magicState != MAGIC_STATE_IDLE) ||
                (PARAMS_GET_S(this->actor.params, 8, 8) &&
                 !(Magic_RequestChange(play, PARAMS_GET_S(this->actor.params, 8, 8), MAGIC_CONSUME_WAIT_PREVIEW)))) {
                EnMThunder_EmptySpinAttack(this, play);
                EnMThunder_SetupAction(this, EnMThunder_EmptySpinAttack);
                this->chargeAlpha = 0;
                this->dimmingIntensity = 0.0;
                this->spinAttackTimer = 0.0f;
                return;
            }

            this->isUsingMagic = true;
        }
    }

    if (player->unk_858 >= 0.1f) {
        Rumble_Request(0.0f, (s32)(player->unk_858 * 150.0f), 2, (s32)(player->unk_858 * 150.0f));
    }

    if (player->stateFlags2 & PLAYER_STATE2_17) {
        if ((child != NULL) && (child->update != NULL)) {
            child->parent = NULL;
        }

        if (player->unk_858 <= 0.15f) {
            if ((player->unk_858 >= 0.1f) && (player->meleeWeaponAnimation >= PLAYER_MWA_SPIN_ATTACK_1H)) {
                SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_ROLLING_CUT);
                SFX_PLAY_AT_POS(&player->actor.projectedPos, NA_SE_IT_SWORD_SWING_HARD);
            }
            Actor_Kill(&this->actor);
            return;
        } else {
            player->stateFlags2 &= ~PLAYER_STATE2_17;
            if (PARAMS_GET_S(this->actor.params, 8, 8)) {
                gSaveContext.magicState = MAGIC_STATE_CONSUME_SETUP;
            }

            switch (this->swordType) {
                case 1: // Kokiri Sword
                    this->targetScale = 2;
                    break;
                case 0: // Razor Sword / Master Sword
                    this->targetScale = IS_CHILD_QUEST_AS_CHILD ? (!HAS_MASTER_SWORD ? 2 : 3) : 4;
                    break;
                case 2: // Gilded Sword / Giant's Knife
                    this->targetScale = IS_CHILD_QUEST_AS_CHILD ? 3 : 4;
                    break;
                case 3: // Great Fairy's Sword
                    this->targetScale = 4;
                    break;
            }

            if (player->unk_858 < 0.85f) {
                this->collider.elem.atDmgInfo.dmgFlags = sSpinAttackDmgFlags[this->swordType];
                this->attackStrength = M_THUNDER_ATTACK_WEAK;
            } else {
                this->collider.elem.atDmgInfo.dmgFlags = sJumpAttackDmgFlags[this->swordType];
                this->attackStrength = M_THUNDER_ATTACK_STRONG;
                this->targetScale *= 2;
            }

            if (HAS_HEROS_SWORD && CUR_EQUIP_VALUE(EQUIP_TYPE_SWORD) == EQUIP_VALUE_SWORD_KOKIRI) {
                this->attackStrength += 2;
                this->actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
                EnMThunder_SetupAction(this, EnMThunder_SwordBeam_Attack);
                this->followPlayerTimer = 1;
                this->targetScale = 12;
            } else {
                EnMThunder_SetupAction(this, EnMThunder_SpinAttacking);
                this->followPlayerTimer = 8;
            }

            {
                static u16 sSfxIds[] = {
                    NA_SE_IT_ROLLING_CUT_LV2,
                    NA_SE_IT_ROLLING_CUT_LV1,
                    NA_SE_IT_ROLLING_CUT_LV2,
                    NA_SE_IT_ROLLING_CUT_LV1,
                };

                SFX_PLAY_AT_POS(&player->actor.projectedPos, sSfxIds[this->attackStrength]);
            }

            this->spinAttackTimer = 1.0f;
            return;
        }
    }

    if (!(player->stateFlags1 & PLAYER_STATE1_CHARGING_SPIN_ATTACK)) {
        if (this->actor.child != NULL) {
            this->actor.child->parent = NULL;
        }
        Actor_Kill(&this->actor);
        return;
    }

    if (player->unk_858 > 0.15f) {
        this->chargeAlpha = 255;
        if (this->actor.child == NULL) {
            Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, ACTOR_EFF_DUST, this->actor.world.pos.x,
                               this->actor.world.pos.y, this->actor.world.pos.z, 0, this->actor.shape.rot.y, 0,
                               this->swordType + 2);
        }
        this->dimmingIntensity += ((((player->unk_858 - 0.15f) * 1.5f) - this->dimmingIntensity) * 0.5f);

    } else if (player->unk_858 > .1f) {
        this->chargeAlpha = (s32)((player->unk_858 - .1f) * 255.0f * 20.0f);
        this->spinAttackTimer = (player->unk_858 - .1f) * 10.0f;
    } else {
        this->chargeAlpha = 0;
    }

    if (player->unk_858 > 0.85f) {
        Audio_PlaySwordChargeSfx(&player->actor.projectedPos, 2);
    } else if (player->unk_858 > 0.15f) {
        Audio_PlaySwordChargeSfx(&player->actor.projectedPos, 1);
    } else if (player->unk_858 > 0.1f) {
        Audio_PlaySwordChargeSfx(&player->actor.projectedPos, 0);
    }

    if (Play_InCsMode(play)) {
        Actor_Kill(&this->actor);
    }
}

void EnMThunder_UpdateSpinAttack(EnMThunder* this, PlayState* play) {
    if (this->followPlayerTimer < 2) {
        if (this->chargeAlpha < 40) {
            this->chargeAlpha = 0;
        } else {
            this->chargeAlpha -= 40;
        }
    }

    this->spinTrailTexScroll += 2.0f * this->spinAttackAlpha;

    if (this->dimmingIntensity < this->spinAttackTimer) {
        this->dimmingIntensity += ((this->spinAttackTimer - this->dimmingIntensity) * 0.1f);
    } else {
        this->dimmingIntensity = this->spinAttackTimer;
    }
}

void EnMThunder_SpinAttacking(EnMThunder* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (Math_StepToF(&this->spinAttackTimer, 0.0f, 1 / 16.0f)) {
        Actor_Kill(&this->actor);
    } else {
        Math_SmoothStepToF(&this->actor.scale.x, (s32)this->targetScale, 0.6f, 0.8f, 0.0f);
        Actor_SetScale(&this->actor, this->actor.scale.x);
        this->collider.dim.radius = (this->actor.scale.x * 25.0f);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
    }

    if (this->followPlayerTimer > 0) {
        this->actor.world.pos.x = player->bodyPartsPos[PLAYER_BODYPART_WAIST].x;
        this->actor.world.pos.z = player->bodyPartsPos[PLAYER_BODYPART_WAIST].z;
        this->followPlayerTimer--;
    }

    if (this->spinAttackTimer > 0.6f) {
        this->spinAttackAlpha = 1.0f;
    } else {
        this->spinAttackAlpha = this->spinAttackTimer * (5.0f / 3.0f);
    }

    EnMThunder_UpdateSpinAttack(this, play);

    if (Play_InCsMode(play)) {
        Actor_Kill(&this->actor);
    }
}

void EnMThunder_SwordBeam_Attack(EnMThunder* this, PlayState* play) {
    f32 sp2C;

    if (this->spinAttackTimer > (9.0f / 10.0f))
        this->spinAttackAlpha = 1.0f;
    else this->spinAttackAlpha = this->spinAttackTimer * (10.0f / 9.0f);

    if (Math_StepToF(&this->spinAttackTimer, 0.0f, 0.05f))
        Actor_Kill(&this->actor);
    else {
        sp2C = -80.0f * Math_CosS(this->actor.world.rot.x);

        this->actor.world.pos.x += sp2C * Math_SinS(this->actor.shape.rot.y);
        this->actor.world.pos.z += sp2C * Math_CosS(this->actor.shape.rot.y);
        this->actor.world.pos.y += -80.0f * Math_SinS(this->actor.world.rot.x);

        Math_SmoothStepToF(&this->actor.scale.x, this->targetScale, 0.6f, 2.0f, 0.0f);
        Actor_SetScale(&this->actor, this->actor.scale.x);

        this->collider.dim.radius = this->actor.scale.x * 5.0f;

        this->collider.dim.pos.x = this->actor.world.pos.x;
        this->collider.dim.pos.y = this->actor.world.pos.y;
        this->collider.dim.pos.z = this->actor.world.pos.z;

        this->collider.dim.pos.x = (Math_SinS(this->actor.shape.rot.y) * -5.0f * this->actor.scale.x) + this->actor.world.pos.x;
        this->collider.dim.pos.y = this->actor.world.pos.y;
        this->collider.dim.pos.z = (Math_CosS(this->actor.shape.rot.y) * -5.0f * this->actor.scale.z) + this->actor.world.pos.z;

        CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);
    }

    if (this->followPlayerTimer > 0)
        this->followPlayerTimer--;

    EnMThunder_UpdateSpinAttack(this, play);
    
    if (Play_InCsMode(play))
        Actor_Kill(&this->actor);
}

void EnMThunder_Update(Actor* thisx, PlayState* play) {
    EnMThunder* this = (EnMThunder*)thisx;
    f32 blueRadius;
    s32 redGreen;

    this->actionFunc(this, play);
    EnMThunder_AdjustEnvLights(play, this->dimmingIntensity);
    blueRadius = this->spinAttackTimer;
    redGreen = (u32)(blueRadius * 255.0f) & 0xFF;
    Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.world.pos.x, this->actor.world.pos.y,
                              this->actor.world.pos.z, redGreen, redGreen, (u32)(blueRadius * 100.0f),
                              (s32)(blueRadius * 800.0f));
}

void EnMThunder_Draw(Actor* thisx, PlayState* play2) {
    static f32 sSpinChargeScale[] = { 0.1f, 0.15f, 0.2f, 0.25f, 0.3f, 0.25f, 0.2f, 0.15f };
    PlayState* play = play2;
    EnMThunder* this = (EnMThunder*)thisx;
    Player* player = GET_PLAYER(play);
    f32 spinChargeScale;
    s32 chargeTexScroll;

    OPEN_DISPS(play->state.gfxCtx, "../z_en_m_thunder.c", 844);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    Matrix_Scale(0.02f, 0.02f, 0.02f, MTXMODE_APPLY);
    MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, "../z_en_m_thunder.c", 853);

    switch (this->attackStrength) {
        case M_THUNDER_ATTACK_STRONG:
        case M_THUNDER_ATTACK_WEAK:
            gSPSegment(POLY_XLU_DISP++, 0x08,
                       Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE,
                                        0xFF - ((u8)(s32)(this->spinTrailTexScroll * 30) & 0xFF), 0, 64, 32, 1,
                                        0xFF - ((u8)(s32)(this->spinTrailTexScroll * 20) & 0xFF), 0, 8, 8));
            break;
        case ENMTHUNDER_SUBTYPE_SWORDBEAM_GREAT:
        case ENMTHUNDER_SUBTYPE_SWORDBEAM_REGULAR:
            gSPSegment(POLY_XLU_DISP++, 0x08,
                       Gfx_TwoTexScroll(play->state.gfxCtx, 0, 0, 0, 16, 64, 1, 0,
                                        0x1FF - ((u16)(s32)(this->spinTrailTexScroll * 10.0f) & 0x1FF), 32, 128));
    }

    switch (this->attackStrength) {
        case M_THUNDER_ATTACK_STRONG:
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 255, 255, 170, (u8)(this->spinAttackAlpha * 255));
            gSPDisplayList(POLY_XLU_DISP++, gSpinAttack3DL);
            gSPDisplayList(POLY_XLU_DISP++, gSpinAttack4DL);
            break;
        case M_THUNDER_ATTACK_WEAK:
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 170, 255, 255, (u8)(this->spinAttackAlpha * 255));
            gSPDisplayList(POLY_XLU_DISP++, gSpinAttack1DL);
            gSPDisplayList(POLY_XLU_DISP++, gSpinAttack2DL);
            break;
        case ENMTHUNDER_SUBTYPE_SWORDBEAM_REGULAR:
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 170, 255, 255, (u16)(this->spinAttackAlpha * 255.0f));
            gDPSetEnvColor(POLY_XLU_DISP++, 0, 100, 255, 128);
            gSPDisplayList(POLY_XLU_DISP++, gUnusedBeamBladeDL);
            break;

        case ENMTHUNDER_SUBTYPE_SWORDBEAM_GREAT:
            gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 0, 255, 255, (u16)(this->spinAttackAlpha * 255.0f));
            gDPSetEnvColor(POLY_XLU_DISP++, 200, 200, 200, 128);
            gSPDisplayList(POLY_XLU_DISP++, gUnusedBeamBladeDL);
            break;
    }

    Matrix_Mult(&player->mf_9E0, MTXMODE_NEW);

    switch (this->swordType) {
        case M_THUNDER_SWORD_KOKIRI:
            Matrix_Translate(0.0f, 220.0f, 0.0f, MTXMODE_APPLY);
            Matrix_Scale(-0.7f, -0.6f, -0.4f, MTXMODE_APPLY);
            Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            break;
        case 0:
            if (LINK_IS_ADULT || (IS_CHILD_QUEST_AS_CHILD && HAS_MASTER_SWORD)) { // Master Sword
                Matrix_Translate(0.0f, 300.0f, -100.0f, MTXMODE_APPLY);
                Matrix_Scale(-1.2f, -1.0f, -0.7f, MTXMODE_APPLY);
                Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            } else { // Razor Sword
                Matrix_Translate(0.0f, 220.0f, 0.0f, MTXMODE_APPLY);
                Matrix_Scale(-0.7f, -0.6f, -0.4f, MTXMODE_APPLY);
                Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            }
            break;
        case 2:
            if (LINK_IS_ADULT) { // Giant's Knife
                Matrix_Translate(200.0f, 350.0f, 0.0f, MTXMODE_APPLY);
                Matrix_Scale(-1.8f, -1.4f, -0.7f, MTXMODE_APPLY);
                Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            } else { // Silver / Gilded Sword
                Matrix_Translate(0.0f, 300.0f, -100.0f, MTXMODE_APPLY);
                Matrix_Scale(-1.2f, -1.0f, -0.7f, MTXMODE_APPLY);
                Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            }
            break;
        case 3:
            Matrix_Translate(200.0f, 350.0f, 0.0f, MTXMODE_APPLY);
            Matrix_Scale(-1.8f, -1.4f, -0.7f, MTXMODE_APPLY);
            Matrix_RotateX(16384.0f, MTXMODE_APPLY);
            break;
    }

    if (this->spinChargePercent >= 0.85f) {
        spinChargeScale = (sSpinChargeScale[(play->gameplayFrames & 7)] * 6.0f) + 1.0f;
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 255, 255, 170, this->chargeAlpha);
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 100, 0, 128);
        chargeTexScroll = 40;
    } else {
        spinChargeScale = (sSpinChargeScale[play->gameplayFrames & 7] * 2.0f) + 1.0f;
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 170, 255, 255, this->chargeAlpha);
        gDPSetEnvColor(POLY_XLU_DISP++, 0, 100, 255, 128);
        chargeTexScroll = 20;
    }
    Matrix_Scale(1.0f, spinChargeScale, spinChargeScale, MTXMODE_APPLY);
    MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, "../z_en_m_thunder.c", 960);

    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, (play->gameplayFrames * 5) & 0xFF, 0, 32, 32, 1,
                                (play->gameplayFrames * 20) & 0xFF, (play->gameplayFrames * chargeTexScroll) & 0xFF, 8,
                                8));

    gSPDisplayList(POLY_XLU_DISP++, gSpinAttackChargingDL);

    CLOSE_DISPS(play->state.gfxCtx, "../z_en_m_thunder.c", 1031);
}
