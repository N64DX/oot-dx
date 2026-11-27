/*
 * File: z_bg_hakugin_switch.c
 * Overlay: ovl_Bg_Hakugin_Switch
 * Description: Goron Link Switch
 */

#include "z_bg_hakugin_switch.h"

#include "ichain.h"
#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"
#include "save.h"
#include "rumble.h"
#include "array_count.h"
#include "one_point_cutscene.h"

#include "z_bg_hakugin_switch_cutscene_data.c"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgHakuginSwitch_Init(Actor* thisx, struct PlayState* play);
void BgHakuginSwitch_Destroy(Actor* thisx, struct PlayState* play);
void BgHakuginSwitch_Update(Actor* thisx, struct PlayState* play);
void BgHakuginSwitch_Draw(Actor* thisx, struct PlayState* play);

void BgHakuginSwitch_80B15A68(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15B1C(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15B74(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15E0C(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15E78(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15F3C(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B15F88(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B1606C(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B160DC(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B161A0(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B16244(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B162AC(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B163C4(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B16400(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B16494(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B16520(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B165A0(BgHakuginSwitch* this, struct PlayState* play);
void BgHakuginSwitch_80B165E0(BgHakuginSwitch* this, struct PlayState* play);

u32 D_80B16AF0;

ActorProfile Bg_Hakugin_Switch_Profile = {
    /**/ ACTOR_BG_HAKUGIN_SWITCH,
    /**/ ACTORCAT_SWITCH,
    /**/ FLAGS,
    /**/ OBJECT_GORONSWITCH,
    /**/ sizeof(BgHakuginSwitch),
    /**/ BgHakuginSwitch_Init,
    /**/ BgHakuginSwitch_Destroy,
    /**/ BgHakuginSwitch_Update,
    /**/ BgHakuginSwitch_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x40000040, 0x00, 0x00 },
        ATELEM_NONE | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 60, 10, 180, { 0, 0, 0 } },
};

typedef struct BgHakuginSwitchStruct {
    /* 0x00 */ f32 unk_0;
    /* 0x04 */ f32 unk_4;
    /* 0x08 */ f32 unk_8;
    /* 0x0C */ f32 unk_C;
    /* 0x10 */ Gfx* unk_10;
    /* 0x14 */ u8 unk_14;
} BgHakuginSwitchStruct; // size = 0x18

BgHakuginSwitchStruct D_80B1688C[] = {
    { -156.0f, -178.0f, 6.0f, 10.0f, object_goronswitch_DL_000268, 0xB4 },
    {  -60.0f, -178.0f, 6.0f, 10.0f, object_goronswitch_DL_000268, 0x32 },
    {  -60.0f, -178.0f, 6.0f, 10.0f, object_goronswitch_DL_000268, 0x31 },
    { -120.0f, -178.0f, 6.0f, 10.0f, object_goronswitch_DL_0007D8, 0x3A },
    { -156.0f, -178.0f, 6.0f, 10.0f, object_goronswitch_DL_0007D8, 0xB4 },
};

static InitChainEntry sInitChain1[] = {
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 150, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 130, ICHAIN_STOP),
};

static InitChainEntry sInitChain2[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 260, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 360, ICHAIN_STOP),
};

void func_80B15790(BgHakuginSwitch* this, u16 sfxId) {
    if (this->unk_1B2 <= 0)
        Actor_PlaySfx(&this->dyna.actor, sfxId);
}

void func_80B157C4(BgHakuginSwitch* this, u16 arg1) {
    if (this->unk_1B2 <= 0)
        Actor_PlaySfx_Flagged(&this->dyna.actor, arg1);
}

void BgHakuginSwitch_Init(Actor* thisx, PlayState* play) {
    BgHakuginSwitch* this = (BgHakuginSwitch*)thisx;

    CollisionHeader* header = NULL;
    s32 sp34 = BGHAKUGINSWITCH_GET_7(&this->dyna.actor);
    u8 sp30, sp28;

    if (Flags_GetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor)))
        sp30 = true;
    else sp30 = false;

    DynaPolyActor_Init(&this->dyna, DYNA_TRANSFORM_POS);
    CollisionHeader_GetVirtual(&object_goronswitch_Colheader_0005C8, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &sCylinderInit);

    this->csId = this->dyna.actor.home.rot.z;
    this->dyna.actor.home.rot.z = this->dyna.actor.world.rot.z = this->dyna.actor.shape.rot.z = 0;
    if (this->csId > ARRAY_COUNT(cutscenes))
        this->csId = 0;

    this->unk_1B2 = 15;
    if (!BGHAKUGINSWITCH_GET_10(&this->dyna.actor)) {
        Actor_ProcessInitChain(&this->dyna.actor, sInitChain1);

        this->dyna.actor.scale.x = 0.07f;
        this->dyna.actor.scale.y = 0.016f;
        this->dyna.actor.scale.z = 0.07f;
        this->collider.dim.radius = 46;
        this->collider.dim.yShift = 0x1D;

        this->unk_1A8 = object_goronswitch_DL_000268;

        if (sp30)
            BgHakuginSwitch_80B16494(this, play);
        else BgHakuginSwitch_80B16244(this, play);
    } else {
        if (D_80B1688C[sp34].unk_14 & 4)
            sp28 = true;
        else sp28 = false;

        Actor_ProcessInitChain(&this->dyna.actor, sInitChain2);
        this->unk_1A8 = D_80B1688C[sp34].unk_10;

        if (sp30 == sp28)
            BgHakuginSwitch_80B15F3C(this, play);
        else BgHakuginSwitch_80B15B1C(this, play);
    }

    this->unk_1C8 = 1.0f / this->dyna.actor.scale.y;
}

void BgHakuginSwitch_Destroy(Actor* thisx, PlayState* play) {
    BgHakuginSwitch* this = (BgHakuginSwitch*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Collider_DestroyCylinder(play, &this->collider);
}

void func_80B15A4C(BgHakuginSwitch* this, BgHakuginSwitchUnkFunc func) {
    this->unk_1B4 = func;
    this->actionFunc = BgHakuginSwitch_80B15A68;
}

void BgHakuginSwitch_StartCs(BgHakuginSwitch* this, PlayState* play) {
    if (this->csId > 0 && cutscenes[this->csId - 1] != NULL) {
        Cutscene_SetScript(play, cutscenes[this->csId - 1]);
        gSaveContext.cutsceneTrigger = 1;
        Player_SetCsActionWithHaltedActors(play, NULL, PLAYER_CSACTION_49);
    } else OnePointCutscene_Attention(play, &this->dyna.actor);
}

void BgHakuginSwitch_80B15A68(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* s = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];
    u8 sp18 = !(s->unk_14 & 0x40);

    if (!sp18) {
        this->unk_1B4(this, play);
    } else if (!Player_InCsMode(play)) {
        BgHakuginSwitch_StartCs(this, play);
        this->unk_1BF = 40;
        this->unk_1B4(this, play);
    }
}

void BgHakuginSwitch_80B15B1C(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* s = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    this->dyna.actor.world.pos.y = s->unk_0 + this->dyna.actor.home.pos.y;
    this->unk_1C0 = 1;
    this->unk_1B0 = 480;
    this->actionFunc = BgHakuginSwitch_80B15B74;
}

void BgHakuginSwitch_80B15B74(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* sp38 = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];
    s32 sp34 = (this->collider.base.acFlags & AC_HIT) != 0;
    u8 sp2C, sp28, sp24, sp20;

    if (Flags_GetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor)))
        sp2C = 1;
    else sp2C = 0;

    if (sp38->unk_14 & 4)
        sp28 = 1;
    else sp28 = 0;

    sp24 = false;
    sp20 = -1;

    if (sp34) {
        this->collider.base.acFlags &= ~AC_HIT;
        if (DynaPolyActor_IsPlayerOnTop(&this->dyna)) {
            sp24 = true;
            sp20 = sp28;
        }
    }

    if (this->unk_1B0 > 0) {
        this->unk_1B0--;
        if (sp38->unk_14 & 8) {
            Actor_PlaySfx_FlaggedTimer(&this->dyna.actor, this->unk_1B0);
            if (this->unk_1B0 == 0) {
                sp24 = true;
                sp20 = sp28;
            }
        }
    }

    if (sp2C == sp28) {
        if ((sp38->unk_14 & 0xFF) & 0x10) {
            if (D_80B16AF0 < play->gameplayFrames)
                sp24 = true;
        } else sp24 = true;
    }

    if (sp24) {
        if (sp20 == 1)
            Flags_SetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor));
        else if (sp20 == 0)
            Flags_UnsetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor));

        D_80B16AF0 = play->gameplayFrames;

        if (sp38->unk_14 & 0x10)
            func_80B15A4C(this, BgHakuginSwitch_80B15E0C);
        else BgHakuginSwitch_80B15E0C(this, play);
    } else if (!(sp38->unk_14 & 1)) {
        Collider_UpdateCylinder(&this->dyna.actor, &this->collider);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    }
}

void BgHakuginSwitch_80B15E0C(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* s = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    if (s->unk_14 & 0x80)
        func_80B15790(this, NA_SE_EV_STONE_SWITCH_ON);
    this->unk_1C0 = 0;
    this->actionFunc = BgHakuginSwitch_80B15E78;
}

void BgHakuginSwitch_80B15E78(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* sp20 = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    if (Math_StepToF(&this->dyna.actor.world.pos.y, sp20->unk_4 + this->dyna.actor.home.pos.y, sp20->unk_C)) {
        if (DynaPolyActor_IsPlayerOnTop(&this->dyna))
            Rumble_Request(this->dyna.actor.xyzDistToPlayerSq, 120, 20, 10);
        BgHakuginSwitch_80B15F3C(this, play);
    } else if (!(sp20->unk_14 & 0x80))
        func_80B157C4(this, NA_SE_EV_STONE_STATUE_OPEN - SFX_FLAG);
}

void BgHakuginSwitch_80B15F3C(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* s = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    this->dyna.actor.world.pos.y = s->unk_4 + this->dyna.actor.home.pos.y;
    this->unk_1C0 = 0;
    this->actionFunc = BgHakuginSwitch_80B15F88;
}

void BgHakuginSwitch_80B15F88(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* sp18 = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    u8 phi_a0, phi_v1;

    if (Flags_GetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor)))
        phi_a0 = true;
    else phi_a0 = false;

    if (sp18->unk_14 & 4)
        phi_v1 = true;
    else phi_v1 = false;

    if (phi_a0 != phi_v1) {
        if ((sp18->unk_14 & 0xFF) & 0x20) {
            if (D_80B16AF0 < play->gameplayFrames)
                func_80B15A4C(this, BgHakuginSwitch_80B1606C);
        } else
            BgHakuginSwitch_80B1606C(this, play);
    }
}

void BgHakuginSwitch_80B1606C(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* s = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    if (s->unk_14 & 0x80)
        func_80B15790(this, NA_SE_EV_STONE_SWITCH_OFF);
    this->unk_1C0 = 1;
    this->actionFunc = BgHakuginSwitch_80B160DC;
}

void BgHakuginSwitch_80B160DC(BgHakuginSwitch* this, PlayState* play) {
    BgHakuginSwitchStruct* sp18 = &D_80B1688C[BGHAKUGINSWITCH_GET_7(&this->dyna.actor)];

    if (Math_StepToF(&this->dyna.actor.world.pos.y, sp18->unk_0 + this->dyna.actor.home.pos.y, sp18->unk_8))
        BgHakuginSwitch_80B15B1C(this, play);
    else if (!(sp18->unk_14 & 0x80))
        func_80B157C4(this, NA_SE_EV_PILLAR_UP_FAST - SFX_FLAG);
}

void func_80B16180(BgHakuginSwitch* this, BgHakuginSwitchUnkFunc func, s32 arg2) {
    this->unk_1B4 = func;
    this->unk_1BE = arg2;
    this->actionFunc = BgHakuginSwitch_80B161A0;
}

void BgHakuginSwitch_80B161A0(BgHakuginSwitch* this, PlayState* play) {
    if (!Player_InCsMode(play)) {
        if (this->unk_1BE != 0) {
            Flags_SetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor));
            BgHakuginSwitch_StartCs(this, play);
        } else {
            Flags_UnsetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor));
        }
        this->unk_1BF = 50;
        this->unk_1B4(this, play);
    }
}

void BgHakuginSwitch_80B16244(BgHakuginSwitch* this, PlayState* play) {
    this->unk_1C0 = 1;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    if (BGHAKUGINSWITCH_GET_7(&this->dyna.actor) == BGHAKUGINSWITCH_GET_7_1 && this->dyna.actor.category != ACTORCAT_SWITCH)
        Actor_ChangeCategory(play, &play->actorCtx, &this->dyna.actor, ACTORCAT_SWITCH);
    this->actionFunc = BgHakuginSwitch_80B162AC;
}

void BgHakuginSwitch_80B162AC(BgHakuginSwitch* this, PlayState* play) {
    s32 sp34 = (this->collider.base.acFlags & AC_HIT) != 0;
    s32 sp30 = BGHAKUGINSWITCH_GET_7(&this->dyna.actor);
    u8 sp28 = false, sp24 = false;

    if (sp34) {
        this->collider.base.acFlags &= ~AC_HIT;
        if (DynaPolyActor_IsPlayerOnTop(&this->dyna)) {
            sp24 = true;
            sp28 = true;
        }
    }

    if (sp30 == 1 && Flags_GetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor)))
        sp24 = true;

    if (sp24) {
        if (sp28)
            func_80B16180(this, BgHakuginSwitch_80B163C4, 1);
        else BgHakuginSwitch_80B163C4(this, play);
    } else {
        Collider_UpdateCylinder(&this->dyna.actor, &this->collider);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    }
}

void BgHakuginSwitch_80B163C4(BgHakuginSwitch* this, PlayState* play) {
    func_80B15790(this, NA_SE_EV_STONE_SWITCH_ON);
    this->unk_1C0 = 0;
    this->actionFunc = BgHakuginSwitch_80B16400;
}

void BgHakuginSwitch_80B16400(BgHakuginSwitch* this, PlayState* play) {
    if (Math_StepToF(&this->dyna.actor.world.pos.y, (this->dyna.actor.home.pos.y + 2.0f) - (1800.0f * this->dyna.actor.scale.y), 10.0f)) {
        if (DynaPolyActor_IsPlayerOnTop(&this->dyna))
            Rumble_Request(this->dyna.actor.xyzDistToPlayerSq, 120, 20, 10);
        BgHakuginSwitch_80B16494(this, play);
    }
}

void BgHakuginSwitch_80B16494(BgHakuginSwitch* this, PlayState* play) {
    this->unk_1C0 = 0;
    this->dyna.actor.world.pos.y = (this->dyna.actor.home.pos.y - (1800.0f * this->dyna.actor.scale.y)) + 2.0f;
    if (BGHAKUGINSWITCH_GET_7(&this->dyna.actor) == BGHAKUGINSWITCH_GET_7_1 && this->dyna.actor.category != ACTORCAT_PROP)
        Actor_ChangeCategory(play, &play->actorCtx, &this->dyna.actor, ACTORCAT_PROP);
    this->actionFunc = BgHakuginSwitch_80B16520;
}

void BgHakuginSwitch_80B16520(BgHakuginSwitch* this, PlayState* play) {
    if (!Flags_GetSwitch(play, BGHAKUGINSWITCH_GET_SWITCH_FLAG(&this->dyna.actor))) {
        if (BGHAKUGINSWITCH_GET_7(&this->dyna.actor) == BGHAKUGINSWITCH_GET_7_1)
            func_80B16180(this, BgHakuginSwitch_80B165A0, 0);
        else BgHakuginSwitch_80B165A0(this, play);
    }
}

void BgHakuginSwitch_80B165A0(BgHakuginSwitch* this, PlayState* play) {
    func_80B15790(this, NA_SE_EV_STONE_SWITCH_OFF);
    this->unk_1C0 = 1;
    this->actionFunc = BgHakuginSwitch_80B165E0;
}

void BgHakuginSwitch_80B165E0(BgHakuginSwitch* this, PlayState* play) {
    if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y, 6.0f))
        BgHakuginSwitch_80B16244(this, play);
}

void BgHakuginSwitch_Update(Actor* thisx, PlayState* play) {
    BgHakuginSwitch* this = (BgHakuginSwitch*)thisx;

    f32 sp24, phi_f0;

    if (this->unk_1B2 > 0)
        this->unk_1B2--;
    if (this->unk_1BF > 0 && this->actionFunc != BgHakuginSwitch_80B15A68 && this->actionFunc != BgHakuginSwitch_80B161A0)
        this->unk_1BF--;

    this->actionFunc(this, play);

    sp24 = this->dyna.actor.shape.yOffset * this->dyna.actor.scale.y;

    if (this->unk_1C0 != 0) {
        if (DynaPolyActor_IsSwitchPressed(&this->dyna)) {
            if (DynaPolyActor_IsSwitchPressed(&this->dyna))
                phi_f0 = (sp24 - -10.0f) * -0.21f;
            else phi_f0 = (sp24 - -3.0f) * -0.08f;
            this->unk_1C4 += phi_f0;
            this->unk_1C4 *= 0.75f;
            this->dyna.actor.shape.yOffset += this->unk_1C4 * this->unk_1C8;
        } else {
            this->unk_1C4 += sp24 * -0.11f;
            this->unk_1C4 *= 0.75f;
            this->dyna.actor.shape.yOffset += this->unk_1C4 * this->unk_1C8;
            this->dyna.actor.shape.yOffset = CLAMP_MAX(this->dyna.actor.shape.yOffset, 0.0f);
        }
    } else {
        Math_StepToF(&this->dyna.actor.shape.yOffset, 0.0f, 2.0f * this->unk_1C8);
        this->unk_1C4 = 0.0f;
    }
}

void BgHakuginSwitch_Draw(Actor* thisx, PlayState* play) {
    BgHakuginSwitch* this = (BgHakuginSwitch*)thisx;

    Gfx_DrawDListOpa(play, this->unk_1A8);
}
