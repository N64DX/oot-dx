/*
 * File: z_bg_spdweb.c
 * Overlay: ovl_Bg_Spdweb
 * Description: Spiderweb
 */

#include "z_bg_spdweb.h"

#include "rand.h"
#include "ichain.h"
#include "one_point_cutscene.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "sys_math.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"
#include "array_count.h"

#include "assets/objects/object_spdweb/object_spdweb.h"

#define FLAGS 0

void BgSpdweb_Init(Actor* thisx, struct PlayState* play);
void BgSpdweb_Destroy(Actor* thisx, struct PlayState* play);
void BgSpdweb_Update(Actor* thisx, struct PlayState* play);
void BgSpdweb_Draw(Actor* thisx, struct PlayState* play);

void BgSpdweb_809CE068(BgSpdweb* this);
void BgSpdweb_809CE234(BgSpdweb* this, struct PlayState* play);
void BgSpdweb_809CE4C8(BgSpdweb* this, struct PlayState* play);
void BgSpdweb_809CE830(BgSpdweb* this, struct PlayState* play);
void BgSpdweb_809CEBC0(BgSpdweb* this, struct PlayState* play);
void BgSpdweb_809CEEAC(BgSpdweb* this, struct PlayState* play);

ActorProfile Bg_Spdweb_Profile = {
    /**/ ACTOR_BG_SPDWEB,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_SPDWEB,
    /**/ sizeof(BgSpdweb),
    /**/ BgSpdweb_Init,
    /**/ BgSpdweb_Destroy,
    /**/ BgSpdweb_Update,
    /**/ BgSpdweb_Draw,
};

static ColliderTrisElementInit sTrisElementsInit1[2] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000C00, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { 75.0f, -8.0f, 75.0f }, { 75.0f, -8.0f, -75.0f }, { -75.0f, -8.0f, -75.0f } } },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000C00, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { 75.0f, -8.0f, 75.0f }, { -75.0f, -8.0f, -75.0f }, { -75.0f, -8.0f, 75.0f } } },
    },
};

static ColliderTrisInit sTrisInit1 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_TRIS,
    },
    ARRAY_COUNT(sTrisElementsInit1),
    sTrisElementsInit1,
};

static ColliderTrisElementInit sTrisElementsInit2[4] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000800, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { 70.0f, 160.0f, 15.0f }, { -70.0f, 160.0f, 15.0f }, { -70.0f, 20.0f, 15.0f } } },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000800, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { 70.0f, 160.0f, 15.0f }, { -70.0f, 20.0f, 15.0f }, { 70.0f, 20.0f, 15.0f } } },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000800, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { -70.0f, 160.0f, -15.0f }, { 70.0f, 160.0f, -15.0f }, { 70.0f, 20.0f, -15.0f } } },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0xF7CFFFFF, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x00000800, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { { { -70.0f, 160.0f, -15.0f }, { 70.0f, 20.0f, -15.0f }, { -70.0f, 20.0f, -15.0f } } },
    },
};

static ColliderTrisInit sTrisInit2 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_TRIS,
    },
    ARRAY_COUNT(sTrisElementsInit2),
    sTrisElementsInit2,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 1500, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgSpdweb_Init(Actor* thisx, PlayState* play) {
    BgSpdweb* this = (BgSpdweb*)thisx;

    CollisionHeader* header = NULL;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    this->unk_161 = 0;
    this->switchFlag = BGSPDWEB_GET_SWITCH_FLAG(&this->dyna.actor);
    thisx->params &= 0xFF;
    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);

    if (this->dyna.actor.params == 0) {
        Collider_InitTris(play, &this->collider);
        Collider_SetTris(play, &this->collider, &this->dyna.actor, &sTrisInit1, this->colliderElements);
        BgSpdweb_809CE068(this);
        CollisionHeader_GetVirtual(&object_spdweb_Colheader_002678, &header);
        this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
        
        this->unk_2F8 = play->colCtx.dyna.bgActors[this->dyna.bgId].colHeader->vtxList;
        this->unk_164 = 0.0f;
        this->actionFunc = BgSpdweb_809CE4C8;
    } else {
        Collider_InitTris(play, &this->collider);
        Collider_SetTris(play, &this->collider, &this->dyna.actor, &sTrisInit2, this->colliderElements);
        BgSpdweb_809CE068(this);
        CollisionHeader_GetVirtual(&object_spdweb_Colheader_0011C0, &header);
        this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
        
        this->actionFunc = BgSpdweb_809CEBC0;
        Actor_SetFocus(&this->dyna.actor, 30.0f);
    }

    this->unk_162 = 0;

    if (Flags_GetSwitch(play, this->switchFlag))
        Actor_Kill(&this->dyna.actor);
}

void BgSpdweb_Destroy(Actor* thisx, PlayState* play) {
    BgSpdweb* this = (BgSpdweb*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Collider_DestroyTris(play, &this->collider);
}

void BgSpdweb_809CE068(BgSpdweb* this) {
    Vec3f sp64[3];
    u8 i, j;

    Matrix_SetTranslateRotateYXZ(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, &this->dyna.actor.shape.rot);

    for (i=0; i<this->collider.count; i++) {
        for (j=0; j<ARRAY_COUNT(sp64); j++)
            Matrix_MultVec3f(this->collider.elements[i].dim.vtx + j, &sp64[j]);
        Collider_SetTrisVertices(&this->collider, i, &sp64[0], &sp64[1], &sp64[2]);
    }
}

void BgSpdweb_809CE15C(BgSpdweb* this) {
    this->unk_2F8[0].y = this->unk_2F8[3].y = this->unk_2F8[10].y = this->unk_2F8[11].y = this->unk_2F8[12].y = this->unk_2F8[13].y = this->unk_2F8[14].y = this->unk_2F8[15].y = (this->dyna.actor.home.pos.y - this->dyna.actor.world.pos.y) * 10.0f;
}

void BgSpdweb_809CE1D0(BgSpdweb* this, PlayState* play) {
    OnePointCutscene_Attention(play, &this->dyna.actor);
    this->unk_162 = 30;
    Flags_SetSwitch(play, this->switchFlag);

    if (this->dyna.actor.params == 1)
        this->actionFunc = BgSpdweb_809CE234;
    else this->actionFunc = BgSpdweb_809CE830;
}

void BgSpdweb_809CE234(BgSpdweb* this, PlayState* play) {
    Vec3f spB4, spA8;
    f32 temp_f20, temp_f22, temp_f24;
    s16 phi_s2, temp_s0;
    u8 i;

    if (this->unk_162 != 0)
        this->unk_162--;

    if (this->unk_162 == 0) {
        Actor_Kill(&this->dyna.actor);
        return;
    }

    if ((this->unk_162 % 3) == 0) {
        phi_s2 = Rand_ZeroOne() * 10922.0f;
        spB4.y = 0.0f;
        spA8.y = this->dyna.actor.world.pos.y;

        for (i=0; i<6; i++) {
            temp_s0 = (s32)Rand_CenteredFloat(0x2800) + phi_s2;
            temp_f24 = Math_SinS(temp_s0);
            temp_f22 = Math_CosS(temp_s0);

            spA8.x = this->dyna.actor.world.pos.x + (120.0f * temp_f24);
            spA8.z = this->dyna.actor.world.pos.z + (120.0f * temp_f22);

            temp_f20 = Math_Vec3f_DistXZ(&this->dyna.actor.home.pos, &spA8) * (1.0f / 120.0f);
            if (temp_f20 < 0.7f) {
                temp_f20 = 1.0f - temp_f20;
                temp_f24 = Math_SinS(BINANG_ROT180(temp_s0));
                temp_f22 = Math_CosS(BINANG_ROT180(temp_s0));
            }

            spB4.x = 7.0f * temp_f24 * temp_f20;
            spB4.y = 0.0f;
            spB4.z = 7.0f * temp_f22 * temp_f20;
            EffectSsDeadDb_Spawn(play, &this->dyna.actor.home.pos, &spB4, &gZeroVec3f, 0x32, 8, 255, 255, 150, 170, 255, 0, 0, 1, 0xE, false);
            phi_s2 += 0x2AAA;
        }

        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.home.pos, 11, NA_SE_EN_EXTINCT);
    }
}

void BgSpdweb_809CE4C8(BgSpdweb* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f sp40;
    ColliderTrisElement* trisElem;
    f32 temp_f12;
    s16 sp3A;
    u8 i;

    sp40.x = this->dyna.actor.world.pos.x;
    sp40.y = this->dyna.actor.world.pos.y - 50.0f;
    sp40.z = this->dyna.actor.world.pos.z;
    sp3A = player->fallDistance;

    if (Player_IsBurningStickInRange(play, &sp40, 70.0f, 50.0f)) {
        this->dyna.actor.home.pos.x = MELEE_WEAPON_INFO_TIP(&player->meleeWeaponInfo[0])->x;
        this->dyna.actor.home.pos.z = MELEE_WEAPON_INFO_TIP(&player->meleeWeaponInfo[0])->z;
        BgSpdweb_809CE1D0(this, play);
        return;
    }

    if (this->collider.base.acFlags & AC_HIT) {
        for (i=0; i<2; i++) {
            trisElem = &this->collider.elements[i];
            if (trisElem->base.acElemFlags & ACELEM_HIT) {
                if (this->collider.elements[i].base.acHitElem->atDmgInfo.dmgFlags & 0x800) {
                    Math_Vec3s_ToVec3f(&this->dyna.actor.home.pos, &trisElem->base.acDmgInfo.hitPos);
                    BgSpdweb_809CE1D0(this, play);
                    return;
                }

                if (DynaPolyActor_IsPlayerOnTop(&this->dyna)) {
                    sp3A = 300;
                    break;
                }
            }
        }
    }

    if (DynaPolyActor_IsPlayerOnTop(&this->dyna)) {
        temp_f12 = 2.0f * sqrtf(CLAMP_MIN(sp3A, 0));
        if ((this->unk_164 < temp_f12) && (temp_f12 > 2.0f)) {
            this->unk_164 = temp_f12;
            this->unk_162 = 12;
            if (sp3A > 50) {
                player->stateFlags1 |= PLAYER_STATE1_5;
                this->unk_161 = 1;
            }
        } else if (player->actor.speed != 0.0f)
            this->unk_164 = CLAMP_MIN(this->unk_164, 2.0f);
    }

    if (this->unk_162 != 0)
        this->unk_162--;

    this->dyna.actor.world.pos.y = (Math_SinF(this->unk_162 * (M_PI / 6)) * this->unk_164) + this->dyna.actor.home.pos.y;
    Math_ApproachZeroF(&this->unk_164, 1.0f, 0.8f);

    if (this->unk_162 == 4) {
        if (this->unk_161 != 0 || (DynaPolyActor_IsPlayerOnTop(&this->dyna) && this->unk_164 > 2.0f)) {
            player->actor.velocity.y = this->unk_164 * 0.7f;
            player->fallStartHeight = (SQ(this->unk_164) * 0.15f) + this->dyna.actor.world.pos.y;
            this->unk_161 = 0;
            player->stateFlags1 &= ~PLAYER_STATE1_5;
        }
    } else if (this->unk_162 == 11) {
        if (this->unk_164 > 3.0f)
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_WEB_VIBRATION);
        else Audio_StopSfxById(NA_SE_EV_WEB_VIBRATION);
    }

    if (this->unk_162 == 0)
        this->unk_162 = 12;

    BgSpdweb_809CE15C(this);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void BgSpdweb_809CE830(BgSpdweb* this, PlayState* play) {
    Vec3f spDC, spD0, spC4;
    f32 cosF2, sinF2, cosQ, sinQ, cosF1, sinF1, temp_f28;
    s16 temp_s3, temp_s0;
    u8 i;

    if (this->unk_162 != 0)
        this->unk_162--;

    if (this->unk_162 == 0) {
        Actor_Kill(&this->dyna.actor);
        return;
    }

    if ((this->unk_162 % 3) == 0) {
        temp_s3 = Rand_ZeroOne() * 0x2AAA;
        cosQ = Math_CosS(this->dyna.actor.shape.rot.x);
        sinQ = Math_SinS(this->dyna.actor.shape.rot.x);
        cosF1 = Math_CosS(this->dyna.actor.shape.rot.y);
        sinF1 = Math_SinS(this->dyna.actor.shape.rot.y);

        spC4.x = this->dyna.actor.world.pos.x + 90.0f * sinQ * sinF1;
        spC4.y = this->dyna.actor.world.pos.y + 90.0f * cosQ;
        spC4.z = this->dyna.actor.world.pos.z + 90.0f * sinQ * cosF1;

        for (i=0; i<6; i++) {
            temp_s0 = (s32)Rand_CenteredFloat(0x2800) + temp_s3;
            sinF2 = Math_SinS(temp_s0);
            cosF2 = Math_CosS(temp_s0);

            spD0.x = spC4.x + 90.0f * ((cosF1 * sinF2) + (sinQ * sinF1 * cosF2));
            spD0.y = spC4.y + 90.0f * cosQ * cosF2;
            spD0.z = spC4.z + 90.0f * ((sinQ * cosF1 * cosF2) - (sinF1 * sinF2));

            temp_f28 = Math_Vec3f_DistXYZ(&this->dyna.actor.home.pos, &spD0) * (1.0f / 90.0f);
            if (temp_f28 < 0.65f) {
                temp_f28 = 1.0f - temp_f28;
                sinF2 = Math_SinS(BINANG_ROT180(temp_s0));
                cosF2 = Math_CosS(BINANG_ROT180(temp_s0));
            }

            spDC.x = 6.5f * temp_f28 * ((cosF1 * sinF2) + (sinQ * sinF1 * cosF2));
            spDC.y = 6.5f * temp_f28 * cosQ * cosF2;
            spDC.z = 6.5f * temp_f28 * ((sinQ * cosF1 * cosF2) - (sinF1 * sinF2));
            EffectSsDeadDb_Spawn(play, &this->dyna.actor.home.pos, &spDC, &gZeroVec3f, 0x3C, 8, 255, 255, 150, 170, 255, 0, 0, 1, 0xE, false);
            temp_s3 += 0x2AAA;
        }

        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.home.pos, 11, NA_SE_EN_EXTINCT);
    }
}

void BgSpdweb_809CEBC0(BgSpdweb* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    ColliderTrisElement* trisElem;
    Vec3f sp3C;
    f32 sp58, temp_f10, temp_f18, sp38, sp34, sp30, sp2C;
    u8 i;

    if (this->collider.base.acFlags & AC_HIT) {
        for (i=0; i<ARRAY_COUNT(this->colliderElements); i++) {
            trisElem = &this->collider.elements[i];
            if (trisElem->base.acElemFlags & ACELEM_HIT) {
                Math_Vec3s_ToVec3f(&this->dyna.actor.home.pos, &trisElem->base.acDmgInfo.hitPos);
                break;
            }
        }

        if (i == ARRAY_COUNT(this->colliderElements)) {
            this->dyna.actor.home.pos.x = ((90.0f * Math_SinS(this->dyna.actor.shape.rot.x)) * Math_SinS(this->dyna.actor.shape.rot.y)) + this->dyna.actor.world.pos.x;
            this->dyna.actor.home.pos.y = (90.0f * Math_CosS(this->dyna.actor.shape.rot.x)) + this->dyna.actor.world.pos.y;
            this->dyna.actor.home.pos.z = ((90.0f * Math_SinS(this->dyna.actor.shape.rot.x)) * Math_CosS(this->dyna.actor.shape.rot.y)) + this->dyna.actor.world.pos.z;
        }
        BgSpdweb_809CE1D0(this, play);
    } else if (player->heldItemAction == PLAYER_IA_DEKU_STICK && player->unk_860 != 0) {
        Math_Vec3f_Diff(MELEE_WEAPON_INFO_TIP(&player->meleeWeaponInfo[0]), &this->dyna.actor.world.pos, &sp3C);
        sp38 = Math_SinS(-this->dyna.actor.shape.rot.x);
        sp34 = Math_CosS(-this->dyna.actor.shape.rot.x);
        sp30 = Math_SinS(-this->dyna.actor.shape.rot.y);
        sp2C = Math_CosS(-this->dyna.actor.shape.rot.y);

        temp_f18 = ((sp3C.x * sp38 * sp30) + (sp3C.y * sp34)) - (sp3C.z * sp38 * sp2C);
        sp58 = (-sp3C.x * sp34 * sp30) + (sp3C.y * sp38) + (sp3C.z * sp34 * sp2C);
        temp_f10 = (sp3C.x * sp2C) + (sp3C.z * sp30);

        if (fabsf(temp_f10) < 70.0f && fabsf(sp58) < 10.0f && temp_f18 < 160.0f && temp_f18 > 20.0f) {
            Math_Vec3f_Copy(&this->dyna.actor.home.pos, MELEE_WEAPON_INFO_TIP(&player->meleeWeaponInfo[0]));
            BgSpdweb_809CE1D0(this, play);
        }
    }

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void BgSpdweb_Update(Actor* thisx, PlayState* play) {
    BgSpdweb* this = (BgSpdweb*)thisx;

    this->actionFunc(this, play);
}

void BgSpdweb_Draw(Actor* thisx, PlayState* play) {
    Gfx* gfx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    gfx = POLY_XLU_DISP;
    gSPDisplayList(&gfx[0], sSetupDL[SETUPDL_25]);

    if (thisx->params == 1) {
        MATRIX_FINALIZE_AND_LOAD(&gfx[1], play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(&gfx[2], object_spdweb_DL_000060);
    } else {
        Matrix_Translate(0.0f, (thisx->home.pos.y - thisx->world.pos.y) * 10.0f, 0.0f, MTXMODE_APPLY);
        Matrix_Scale(1.0f, ((thisx->home.pos.y - thisx->world.pos.y) + 10.0f) * 0.1f, 1.0f, MTXMODE_APPLY);
        MATRIX_FINALIZE_AND_LOAD(&gfx[1], play->state.gfxCtx, __FILE__, __LINE__);
        gSPDisplayList(&gfx[2], object_spdweb_DL_0012F0);
    }

    POLY_XLU_DISP = &gfx[3];
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
