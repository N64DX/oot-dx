#include "z_en_peehat.h"
#include "../ovl_En_Bom/z_en_bom.h"

#define FLAGS 0x01000015

#define THIS ((EnPeehat*)thisx)

void EnPeehat_Init(Actor* thisx, GlobalContext* globalCtx);
void EnPeehat_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnPeehat_Update(Actor* thisx, GlobalContext* globalCtx);
void EnPeehat_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80ACFB34(EnPeehat* this);
void func_80ACFD20(EnPeehat* this);
void func_80AD0720(EnPeehat* this);
void func_80ACFBCC(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD0070(EnPeehat* this); 
void func_80ACFDAC(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD02E4(EnPeehat* this); 
void func_80ACFEF8(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD0D3C(EnPeehat* this); 
void func_80AD0118(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD0F38(EnPeehat* this); 
void func_80AD038C(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD05A8(EnPeehat* this, GlobalContext* globalCtx); 
void func_80AD1220(EnPeehat* this);
void func_80AD0B3C(EnPeehat* this);
void func_80AD076C(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD1440(EnPeehat* this);
void func_80AD0B84(EnPeehat* this, GlobalContext* globalCtx); 
void func_80AD0D84(EnPeehat* this, GlobalContext* globalCtx); 
void func_80AD0FC8(EnPeehat* this, GlobalContext* globalCtx); 
void func_80AD1258(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD14A0(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD1700(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD17E8(EnPeehat* this, GlobalContext* globalCtx);
void func_80AD1AA8(EnPeehat* this); 
void func_80AD1B00(EnPeehat* this, GlobalContext* globalCtx);

extern SkeletonHeader D_06001C80;  
extern AnimationHeader D_060009C4; 
extern AnimationHeader D_06000844; 
extern AnimationHeader D_060005C4; 
extern AnimationHeader D_06000350; 

const ActorInit En_Peehat_InitVars = {
    ACTOR_EN_PEEHAT,
    ACTORTYPE_ENEMY,
    FLAGS,
    OBJECT_PEEHAT,
    sizeof(EnPeehat),
    (ActorFunc)EnPeehat_Init,
    (ActorFunc)EnPeehat_Destroy,
    (ActorFunc)EnPeehat_Update,
    (ActorFunc)EnPeehat_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    { COLTYPE_WOODEN_SHIELD, 0x00, 0x09, 0x09, 0x10, COLSHAPE_CYLINDER },
    { 0x00, { 0x00000000, 0x00, 0x00 }, { 0xFFCFFFFF, 0x00, 0x00 }, 0x00, 0x05, 0x01 },
    { 50, 160, -70, { 0, 0, 0 } },
};

static ColliderJntSphItemInit sJntSphItemsInit[1] = {
    {
        { 0x00, { 0x00000000, 0x00, 0x00 }, { 0xFFCFFFFF, 0x00, 0x00 }, 0x00, 0x01, 0x01 },
        { 0, { { 0, 0, 0 }, 20 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    { COLTYPE_UNK6, 0x00, 0x09, 0x09, 0x10, COLSHAPE_JNTSPH },
    1, sJntSphItemsInit,
};

static ColliderQuadInit sQuadInit =
{
    { COLTYPE_METAL_SHIELD, 0x11, 0x0D, 0x00, 0x00, COLSHAPE_QUAD },
    { 0x00, { 0xFFCFFFFF, 0x00, 0x10 }, { 0xFFCFFFFF, 0x00, 0x00 }, 0x01, 0x01, 0x00 },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

DamageTable D_80AD27F0 = {
    0xF0, 0x02, 0x01, 0x02, 0xE0, 0x02, 0x02, 0xD2, 0x01, 0x02, 0x04, 0xC4, 0x02, 0x02, 0x02, 0x02, 0x02, 0xC3, 0x60, 0x60, 0x00, 0x00, 0x01, 0x04, 0x02, 0x02, 0x08, 0x04, 0x00, 0x00, 0x04, 0x00, };

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(unk_4C, 700, ICHAIN_STOP),
};

void func_80ACF4A0(EnPeehat* this, EnPeehatActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnPeehat_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnPeehat* this = THIS;

    Actor_ProcessInitChain(thisx, sInitChain);
    Actor_SetScale(thisx, 0.036000002f);
    SkelAnime_Init(globalCtx, &this->unk14C, &D_06001C80, &D_060009C4, this->limbDrawTable, this->transitionDrawTable, 24);
    ActorShape_Init(&thisx->shape, 100.0f, (void*)&ActorShadow_DrawFunc_Circle, 27.0f);
    thisx->posRot2.pos = thisx->posRot.pos;
    this->unk2D4 = 0;
    thisx->posRot.rot.y = 0;
    thisx->colChkInfo.mass = 0xFE;
    thisx->colChkInfo.health = 6;
    thisx->colChkInfo.damageTable = &D_80AD27F0;
    thisx->groundY = thisx->posRot.pos.y;
    Collider_InitCylinder(globalCtx, &this->colCylinder);
    Collider_SetCylinder(globalCtx, &this->colCylinder, thisx, &sCylinderInit);
    Collider_InitQuad(globalCtx, &this->colQuad);
    Collider_SetQuad(globalCtx, &this->colQuad, thisx, &sQuadInit);
    Collider_InitJntSph(globalCtx, &this->colJntSph);
    Collider_SetJntSph(globalCtx, &this->colJntSph, thisx, &sJntSphInit, this->colJntSphItemList);

    thisx->naviEnemyId = 0x48;
    this->unk2DC = 740.0f;
    this->unk2D8 = 1200.0f;
    thisx->uncullZoneForward = 4000.0f;
    thisx->uncullZoneScale = 800.0f;
    thisx->uncullZoneDownward = 1800.0f;
    switch (thisx->params)
    {
    case -1:
        func_80ACFB34(this);
        break;
    case 0:
        thisx->uncullZoneForward = 4200.0f;
        this->unk2DC = 2800.0f;
        this->unk2D8 = 1400.0f;
        func_80ACFD20(this);
        thisx->flags &= -2;
        break;
    case 1:
        thisx->scale.z = 0.006f;
        thisx->scale.x = 0.006f;
        thisx->scale.y = 0.003f;
        this->colCylinder.dim.radius = 25;
        this->colCylinder.dim.height = 15;
        this->colCylinder.dim.yShift = -5;
        this->colCylinder.body.bumper.flags = 0x1F824;
        this->colQuad.base.atFlags = 0x11;
        this->colQuad.base.acFlags = 0x09;
        thisx->naviEnemyId = 0x49;
        func_80AD0720(this);
    }
}

void EnPeehat_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnPeehat* this = THIS;
    EnPeehat* parent;

    Collider_DestroyCylinder(globalCtx, &this->colCylinder);
    Collider_DestroyJntSph(globalCtx, &this->colJntSph);

    //If larva, decrement total larva spawned
    if (thisx->params > 0) {
        parent = (EnPeehat*)thisx->parent;
        if (parent != NULL && parent->actor.update != NULL) {
            parent->unk2FA--;
        }
    }
}

void func_80ACF788(GlobalContext* globalCtx, EnPeehat* this, Vec3f* arg2, f32 arg3, s32 arg4, f32 arg5, f32 arg6) {
    static Vec3f D_80AD2814 = { 0, 8, 0 };
    static Vec3f D_80AD2820 = { 0, -1.5f, 0 };

    Vec3f sp5C;
    Vec3f sp50;
    Vec3f sp44;
    f32 sp40;
    s32 pad[2];

    sp50 = D_80AD2814;
    sp44 = D_80AD2820;

    sp40 = (Math_Rand_ZeroOne() - 0.5f) * 6.28f;
    sp5C.y = this->actor.groundY; //unk80
    sp5C.x = (func_800CA720(sp40) * arg3) + arg2->x;
    sp5C.z = (func_800CA774(sp40) * arg3) + arg2->z;
    sp44.x = (Math_Rand_ZeroOne() - 0.5f) * arg5;
    sp44.z = (Math_Rand_ZeroOne() - 0.5f) * arg5;
    sp50.y += ((Math_Rand_ZeroOne() - 0.5f) * 4.0f);
    func_80029724(globalCtx, &sp5C, &sp50, &sp44, arg4, (s32)(((Math_Rand_ZeroOne() * 5.0f) + 12.0f) * arg6), -1, 10, NULL);
}

void func_80ACF920(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f sp9C;
    Actor* temp_v0;
    s32 i;

    this->colCylinder.base.acFlags &= ~2;
    if ((globalCtx->gameplayFrames & 0xF) == 0) {
        sp9C = this->actor.posRot.pos;
        sp9C.y += 70.0f;
        Item_DropCollectibleRandom(globalCtx, &this->actor, &sp9C, 0x40);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &sp9C, 0x40);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &sp9C, 0x40);
        this->unk2D4 = 0xF0;
    }
    else {
        this->colCylinder.base.acFlags &= ~2;
        for (i = 3 - this->unk2FA; i > 0; i--) {
            temp_v0 = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_PEEHAT,
                Math_Rand_CenteredFloat(25.0f) + this->actor.posRot.pos.x, Math_Rand_CenteredFloat(25.0f) + (this->actor.posRot.pos.y + 50.0f), Math_Rand_CenteredFloat(25.0f) + this->actor.posRot.pos.z,
                0, 0, 0, 1);
            if (temp_v0 != NULL) {
                temp_v0->velocity.y = 6.0f;
                temp_v0->shape.rot.y = temp_v0->posRot.rot.y = (s16)Math_Rand_CenteredFloat(65535.0f);
                this->unk2FA++;
            }
        }
        this->unk2D4 = 8;
    }
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_DAMAGE);
}

void func_80ACFB34(EnPeehat* this) {
    SkelAnime_ChangeAnim(&this->unk14C, &D_060009C4, 0.0f, 3.0f, (f32)SkelAnime_GetFrameCount(&D_060009C4.genericHeader), 2, 0.0f);
    this->unk2F8 = 0x258;
    this->unk2D4 = 0;
    this->unk2FA = 0;
    this->unk2B0 = 3;
    this->colCylinder.base.acFlags &= ~2;
    func_80ACF4A0(this, func_80ACFBCC);
}

void func_80ACFBCC(EnPeehat* this, GlobalContext* globalCtx) {

    if (gSaveContext.nightFlag == 0) {
        this->actor.flags |= 1;
        if (this->unk2F6 == 0) {
            if (this->actor.xzDistFromLink < this->unk2DC) {
                func_80AD0070(this);
            }
        }
        else {
            Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, -1000.0f, 1.0f, 10.0f, 0.0f);
            this->unk2F6--;
        }
    }
    else {
        this->actor.flags &= ~1;
        Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, -1000.0f, 1.0f, 50.0f, 0.0f);
        if (this->unk2D4 != 0) {
            this->unk2D4--;
            if ((this->unk2D4 & 4) != 0) {
                Math_SmoothScaleMaxMinF(&this->unk2EC, 0.205f, 1.0f, 0.235f, 0.0f);
            }
            else {
                Math_SmoothScaleMaxMinF(&this->unk2EC, 0.0f, 1.0f, 0.005f, 0.0f);
            }

        } else if (this->colCylinder.base.acFlags & 2) {
            func_80ACF920(this, globalCtx);
        }
    }
}

void func_80ACFD20(EnPeehat* this) {
    SkelAnime_ChangeAnim(&this->unk14C, &D_060009C4, 0.0f, 3.0f, (f32)SkelAnime_GetFrameCount(&D_060009C4.genericHeader), 2, 0.0f);
    this->unk2F8 = 0x190;
    this->unk2D4 = 0;
    this->unk2FA = 0;
    this->unk2B0 = 4;
    func_80ACF4A0(this, func_80ACFDAC);
}

void func_80ACFDAC(EnPeehat* this, GlobalContext* globalCtx) {
    if (gSaveContext.nightFlag == 0) {
        if (this->actor.xzDistFromLink < this->unk2DC) {
            func_80AD02E4(this);
        }
    }
    else {
        Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, -1000.0f, 1.0f, 50.0f, 0.0f);
        if (this->unk2D4 != 0) {
            this->unk2D4--;
            if (this->unk2D4 & 4) {
                Math_SmoothScaleMaxMinF(&this->unk2EC, 0.205f, 1.0f, 0.235f, 0.0f);
            }
            else {
                Math_SmoothScaleMaxMinF(&this->unk2EC, 0.0f, 1.0f, 0.005f, 0.0f);
            }
        }
        else if (this->colCylinder.base.acFlags & 2) {
            func_80ACF920(this, globalCtx);
        }
    }
}

void func_80ACFEB0(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->unk14C, &D_060005C4);
    this->unk2B0 = 5;
    func_80ACF4A0(this, func_80ACFEF8);
}

void func_80ACFEF8(EnPeehat* this, GlobalContext* globalCtx) {
    Actor* larva;

    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_FLY - SFX_FLAG);
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    if ((gSaveContext.nightFlag != 0) || this->unk2DC < this->actor.xzDistFromLink) {
        func_80AD0D3C(this);
    }
    else {
        if (this->actor.xzDistFromLink < this->unk2D8) {
            if (this->unk2FA < 3 && (globalCtx->gameplayFrames & 7) == 0) {
                larva = Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_PEEHAT,
                    Math_Rand_CenteredFloat(25.0f) + this->actor.posRot.pos.x,
                    Math_Rand_CenteredFloat(5.0f) + this->actor.posRot.pos.y,
                    Math_Rand_CenteredFloat(25.0f) + this->actor.posRot.pos.z,
                    0, 0, 0, 1);
                if (larva != NULL) {
                    larva->shape.rot.y = larva->posRot.rot.y = (s16)Math_Rand_CenteredFloat(65535.0f);
                    this->unk2FA++;
                }
            }
        }
    }
    this->unk2F2 += this->unk2F0;
}

void func_80AD0070(EnPeehat* this) {
    f32 frame;

    frame = SkelAnime_GetFrameCount(&D_060009C4.genericHeader);
    if (this->unk2B0 != 0xD) {
        SkelAnime_ChangeAnim(&this->unk14C, &D_060009C4, 0.0f, 3.0f, frame, 2, 0.0f);
    }
    this->unk2B0 = 8;
    this->unk2FC = (s16)frame;
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_UP);
    func_80ACF4A0(this, func_80AD0118);
}

void func_80AD0118(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;

    Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, 0.0f, 1.0f, 50.0f, 0.0f);
    if (Math_SmoothScaleMaxMinS(&this->unk2F0, 0xFA0, 1, 0x320, 0) == 0) {
        if (this->unk2FC != 0) {
            this->unk2FC--;
            if (0.0f == this->unk14C.animPlaybackSpeed) {
                if (this->unk2FC == 0) {
                    this->unk2FC = 40;
                    this->unk14C.animPlaybackSpeed = 1.0f;
                }
            }
        }
        if ((SkelAnime_FrameUpdateMatrix(&this->unk14C) != 0) || (this->unk2FC == 0)) {
            func_80AD0F38(this);
        }
        else {
            this->actor.posRot.pos.y += 6.5f;
        }
        if (this->actor.posRot.pos.y - this->actor.groundY < 80.0f) {
            pos = this->actor.posRot.pos;
            pos.y = this->actor.groundY;
            func_80033480(globalCtx, &pos, 90.0f, 1, 0x96, 100, 1);
        }
    }
    func_80ACF788(globalCtx, this, &this->actor.posRot.pos, 75.0f, 2, 1.05f, 2.0f);
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.075f, 1.0f, 0.005f, 0.0f);
    this->unk2F2 += this->unk2F0;
}

void func_80AD02E4(EnPeehat* this) {
    f32 timer;

    timer = SkelAnime_GetFrameCount(&D_060009C4.genericHeader);
    if (this->unk2B0 != 0xD) {
        SkelAnime_ChangeAnim(&this->unk14C, &D_060009C4, 0.0f, 3.0f, timer, 2, 0.0f);
    }
    this->unk2B0 = 9;
    this->unk2FC = (s16)timer;
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_UP);
    func_80ACF4A0(this, func_80AD038C);
}

void func_80AD038C(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;

    Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, 0.0f, 1.0f, 50.0f, 0.0f);
    if (Math_SmoothScaleMaxMinS(&this->unk2F0, 0xFA0, 1, 0x320, 0) == 0) {
        if (this->unk2FC != 0) {
            this->unk2FC--;
            if (0.0f == this->unk14C.animPlaybackSpeed) {
                if (this->unk2FC == 0) {
                    this->unk2FC = 40;
                    this->unk14C.animPlaybackSpeed = 1.0f;
                }
            }
        }
        if ((SkelAnime_FrameUpdateMatrix(&this->unk14C) != 0) || (this->unk2FC == 0)) {
            this->unk2FA = 0;
            func_80ACFEB0(this);
        }
        else {
            this->actor.posRot.pos.y += 18.0f;
        }
        if (this->actor.posRot.pos.y - this->actor.groundY < 80.0f) {
            pos = this->actor.posRot.pos;
            pos.y = this->actor.groundY;
            func_80033480(globalCtx, &pos, 90.0f, 1, 0x96, 100, 1);
        }
    }
    func_80ACF788(globalCtx, this, &this->actor.posRot.pos, 75.0f, 2, 1.05f, 2.0f);
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.075f, 1.0f, 0.005f, 0.0f);
    this->unk2F2 += this->unk2F0;
}

void func_80AD0558(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->unk14C, &D_060005C4);
    this->unk2B0 = 0xE;
    this->unk2E0 = 0.0f;
    func_80ACF4A0(this, func_80AD05A8);
}

void func_80AD05A8(EnPeehat* this, GlobalContext* globalCtx) {
    Player* player;

    player = PLAYER;
    Math_SmoothScaleMaxMinF(&this->actor.speedXZ, 3.0f, 1.0f, 0.25f, 0.0f);
    Math_SmoothScaleMaxMinF(&this->actor.posRot.pos.y, this->actor.groundY + 80.0f, 1.0f, 3.0f, 0.0f);
    if (this->unk2F8 <= 0) {
        func_80AD0B3C(this);
        this->unk2F6 = 40;
    }
    else {
        this->unk2F8--;
    }
    if ((gSaveContext.nightFlag == 0) && (Math_Vec3f_DistXZ(&this->actor.initPosRot.pos, &player->actor.posRot.pos) < this->unk2D8)) {
        Math_SmoothScaleMaxMinS(&this->actor.posRot.rot.y, this->actor.yawTowardsLink, 1, 1000, 0);
        if (this->unk2FA != 0) {
            this->actor.shape.rot.y += 0x1C2;
        }
        else {
            this->actor.shape.rot.y -= 0x1C2;
        }
    }
    else {
        func_80AD1220(this);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    Math_SmoothScaleMaxMinS(&this->unk2F0, 4000, 1, 500, 0);
    this->unk2F2 += this->unk2F0;
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.075f, 1.0f, 0.005f, 0.0f);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_FLY - SFX_FLAG);
}

void func_80AD0720(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->unk14C, &D_060005C4);
    this->unk2B0 = 14;
    this->unk2D4 = 0;
    func_80ACF4A0(this, func_80AD076C);
}

void func_80AD076C(EnPeehat* this, GlobalContext* globalCtx) {
    static Vec3f D_80AD282C = { 0, 0, 0 };
    s32 i;
    Player* player;
    Vec3f sp7C;
    f32 speedXZ;
    Vec3f sp6C;

    speedXZ = 5.3f;
    if (this->actor.xzDistFromLink <= 5.3f) {
        speedXZ = this->actor.xzDistFromLink + 0.0005f;
    }
    if (this->actor.parent != NULL) {
        if (this->actor.parent->update == NULL) {
            this->actor.parent = NULL;
        }
    }
    this->actor.speedXZ = speedXZ;
    if (70.0f <= (this->actor.posRot.pos.y - this->actor.groundY)) {
        Math_SmoothScaleMaxMinF(&this->actor.velocity.y, -1.3f, 1.0f, 0.5f, 0.0f);
    }
    else {
        Math_SmoothScaleMaxMinF(&this->actor.velocity.y, -0.135f, 1.0f, 0.05f, 0.0f);
    }
    if (this->unk2D4 == 0) {
        Math_SmoothScaleMaxMinS(&this->actor.posRot.rot.y, this->actor.yawTowardsLink, 1, 830, 0);
    }
    else {
        this->unk2D4--;
    }
    this->actor.shape.rot.y = (s16)(this->actor.shape.rot.y + 0x15E);
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    Math_SmoothScaleMaxMinS(&this->unk2F0, 4000, 1, 500, 0);
    this->unk2F2 += this->unk2F0;
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.075f, 1.0f, 0.005f, 0.0f);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_SM_FLY - SFX_FLAG);
    if ((this->colQuad.base.atFlags & 4) != 0) {
        this->actor.colChkInfo.health = 0;
        this->colQuad.base.acFlags = this->colQuad.base.acFlags & ~0x80;
        func_80AD1440(this);
        return;
    }
    if ((this->colQuad.base.atFlags & 2) || (this->colCylinder.base.acFlags & 2) || (this->actor.bgCheckFlags & 1)) {
        player = PLAYER;
        this->colQuad.base.atFlags &= ~2;
        if ((this->colCylinder.base.acFlags & 2) == 0 && &player->actor == this->colQuad.base.at) {
            if (0.5f < Math_Rand_ZeroOne()) {
                this->actor.posRot.rot.y += 0x2000;
            }
            else {
                this->actor.posRot.rot.y -= 0x2000;
            }
            this->unk2D4 = 0x28;
        }
        else if (this->colCylinder.base.acFlags & 2 || this->actor.bgCheckFlags & 1) {
            sp7C = D_80AD282C;
            for (i = 4; i >= 0; i--)
            {
                sp6C.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
                sp6C.y = Math_Rand_CenteredFloat(10.0f) + this->actor.posRot.pos.y;
                sp6C.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;
                func_8002A6B8(globalCtx, &sp6C, &sp7C, &sp7C, 0x28, 7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 1, 9, 1);
            }
        }
        if (&player->actor != this->colQuad.base.at || this->colCylinder.base.acFlags & 2) {
            if ((this->actor.bgCheckFlags & 1) == 0) {
                EffectSsDeadSound_SpawnStationary(globalCtx, &this->actor.projectedPos, NA_SE_EN_PIHAT_SM_DEAD, 1, 1, 40);
            }
            Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.posRot.pos, 0x20);
            Actor_Kill(&this->actor);
        }
    }
}

void func_80AD0B3C(EnPeehat* this) {
    this->unk2B0 = 10;
    SkelAnime_ChangeAnimDefaultStop(&this->unk14C, &D_06000350);
    func_80ACF4A0(this, func_80AD0B84);
}

void func_80AD0B84(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;

    Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, -1000.0f, 1.0f, 50.0f, 0.0f);
    Math_SmoothScaleMaxMinF(&this->actor.speedXZ, 0.0f, 1.0f, 1.0f, 0.0f);
    Math_SmoothScaleMaxMinS(&this->actor.shape.rot.x, 0, 1, 50, 0);
    if (SkelAnime_FrameUpdateMatrix(&this->unk14C) != 0) {
        func_80ACFB34(this);
        this->actor.posRot.pos.y = this->actor.groundY;
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_LAND);
    }
    else {
        if (this->actor.groundY < this->actor.posRot.pos.y) {
            Math_SmoothScaleMaxMinF(&this->actor.posRot.pos.y, this->actor.groundY, 0.3f, 3.5f, 0.25f);
            if (this->actor.posRot.pos.y - this->actor.groundY < 60.0f) {
                pos = this->actor.posRot.pos;
                pos.y = this->actor.groundY;
                func_80033480(globalCtx, &pos, 80.0f, 1, 0x96, 0x64, 1);
                func_80ACF788(globalCtx, this, &pos, 75.0f, 2, 1.05f, 2.0f);
            }
        }
    }
    Math_SmoothScaleMaxMinS(&this->unk2F0, 0, 1, 100, 0);
    this->unk2F2 += this->unk2F0;
}

void func_80AD0D3C(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultStop(&this->unk14C, &D_06000350);
    this->unk2B0 = 10;
    func_80ACF4A0(this, func_80AD0D84);
}

void func_80AD0D84(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;

    Math_SmoothScaleMaxMinF(&this->actor.shape.unk_08, -1000.0f, 1.0f, 50.0f, 0.0f);
    Math_SmoothScaleMaxMinF(&this->actor.speedXZ, 0.0f, 1.0f, 1.0f, 0.0f);
    Math_SmoothScaleMaxMinS(&this->actor.shape.rot.x, 0, 1, 50, 0);
    if (SkelAnime_FrameUpdateMatrix(&this->unk14C) != 0) {
        func_80ACFD20(this);
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_LAND);
        this->actor.posRot.pos.y = this->actor.groundY;
    }
    else {
        if (this->actor.groundY < this->actor.posRot.pos.y) {
            Math_SmoothScaleMaxMinF(&this->actor.posRot.pos.y, this->actor.groundY, 0.3f, 13.5f, 0.25f);
            if ((this->actor.posRot.pos.y - this->actor.groundY) < 60.0f) {
                pos = this->actor.posRot.pos;
                pos.y = this->actor.groundY;
                func_80033480(globalCtx, &pos, 80.0f, 1, 0x96, 0x64, 1);
                func_80ACF788(globalCtx, this, &pos, 75.0f, 2, 1.05f, 2.0f);
            }
        }
    }
    Math_SmoothScaleMaxMinS(&this->unk2F0, 0, 1, 100, 0);
    this->unk2F2 += this->unk2F0;
}

void func_80AD0F38(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->unk14C, &D_060005C4);
    this->actor.speedXZ = Math_Rand_ZeroOne() * 0.5f + 2.5f;
    this->unk2D4 = Math_Rand_ZeroOne() * 10.0f + 10.0f;
    this->unk2B0 = 0xF;
    func_80ACF4A0(this, func_80AD0FC8);
}

void func_80AD0FC8(EnPeehat* this, GlobalContext* globalCtx) {
    f32 temp_f2;
    Player* sp28; 
    f32 phi_f0;

    sp28 = PLAYER;
    if (75.0f < this->actor.posRot.pos.y - this->actor.groundY) {
        this->actor.posRot.pos.y -= 1.0f;
    }
    this->actor.posRot.pos.y += func_800CA774(this->unk2E0) * 1.4f;
    temp_f2 = func_800CA774(this->unk2E0) * 0.18f;
    if (0.0f <= temp_f2) {
        phi_f0 = temp_f2;
    }
    else {
        phi_f0 = -temp_f2;
    }
    this->unk2E0 += phi_f0 + 0.07f;
    this->unk2D4--;
    if (this->unk2D4 <= 0) {
        this->actor.speedXZ = Math_Rand_ZeroOne() * 0.5f + 2.5f;
        this->unk2D4 = Math_Rand_ZeroOne() * 10.0f + 10.0f;
        this->unk2F4 = (s16)((Math_Rand_ZeroOne() - 0.5f) * 1000.0f);
    }
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    this->actor.posRot.rot.y += this->unk2F4;
    if (this->unk2F8 <= 0) {
        func_80AD0B3C(this);
        this->unk2F6 = 40;
    }
    else {
        this->unk2F8--;
    }
    this->actor.shape.rot.y += 0x15E;
    if ((gSaveContext.nightFlag == 0) && Math_Vec3f_DistXZ(&this->actor.initPosRot.pos, &sp28->actor.posRot.pos) < this->unk2D8) {
        this->actor.posRot.rot.y = this->actor.yawTowardsLink;
        func_80AD0558(this);
        this->unk2FA = globalCtx->gameplayFrames & 1;
    }
    else {
        func_80AD1220(this);
    }
    Math_SmoothScaleMaxMinS(&this->unk2F0, 4000, 1, 500, 0);
    this->unk2F2 += this->unk2F0;
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.075f, 1.0f, 0.005f, 0.0f);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_FLY - SFX_FLAG);
}

void func_80AD1220(EnPeehat* this) {
    this->unk2B0 = 12;
    this->actor.speedXZ = 2.5f;
    func_80ACF4A0(this, func_80AD1258);
}

void func_80AD1258(EnPeehat* this, GlobalContext* globalCtx) {

    f32 phi_f0;
    s16 yRot;
    Player* player;

    player = PLAYER;
    if (75.0f < this->actor.posRot.pos.y - this->actor.groundY) {
        this->actor.posRot.pos.y -= 1.0f;
    }
    else {
        this->actor.posRot.pos.y += 1.0f;
    }
    this->actor.posRot.pos.y += func_800CA774(this->unk2E0) * 1.4f;
    phi_f0 = func_800CA774(this->unk2E0) * 0.18f;
    this->unk2E0 += ((0.0f <= phi_f0) ? phi_f0 : -phi_f0) + 0.07f;
    yRot = Math_Vec3f_Yaw(&this->actor.posRot.pos, &this->actor.initPosRot.pos);
    Math_SmoothScaleMaxMinS(&this->actor.posRot.rot.y, yRot, 1, 600, 0);
    Math_SmoothScaleMaxMinS(&this->actor.shape.rot.x, 4500, 1, 600, 0);
    this->actor.shape.rot.y += 0x15E;
    this->unk2F2 += this->unk2F0;
    if (Math_Vec3f_DistXZ(&this->actor.posRot.pos, &this->actor.initPosRot.pos) < 2.0f) {
        func_80AD0B3C(this);
        this->unk2F6 = 0x3C;
    }
    if (gSaveContext.nightFlag == 0 && Math_Vec3f_DistXZ(&this->actor.initPosRot.pos, &player->actor.posRot.pos) < this->unk2D8) {
        this->unk2F8 = 0x190;
        func_80AD0558(this);
        this->unk2FA = (globalCtx->gameplayFrames & 1);
    }
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_FLY - SFX_FLAG);
}

void func_80AD1440(EnPeehat* this) {
    SkelAnime_ChangeAnimTransitionStop(&this->unk14C, &D_06000844, -4.0f);
    this->unk2B0 = 7;
    this->actor.speedXZ = -9.0f;
    this->actor.posRot.rot.y = this->actor.yawTowardsLink;
    func_80ACF4A0(this, func_80AD14A0);
}

void func_80AD14A0(EnPeehat* this, GlobalContext* globalCtx) {
    static Vec3f D_80AD2838 = { 0, 0, 0 };
    Vec3f sp84;
    s32 i;
    Vec3f sp74;

    this->unk2F2 += this->unk2F0;
    SkelAnime_FrameUpdateMatrix(&this->unk14C);
    this->actor.speedXZ += 0.5f;
    if (0.0f == this->actor.speedXZ) {
        if (this->actor.params > 0) {
            sp84 = D_80AD2838;
            for (i = 4; i >= 0; i--) {
                sp74.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
                sp74.y = Math_Rand_CenteredFloat(10.0f) + this->actor.posRot.pos.y;
                sp74.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;
                func_8002A6B8(globalCtx, &sp74, &sp84, &sp84, 0x28, 7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 1, 9, 1);
            }
            Actor_Kill(&this->actor);
        }
        else {
            func_80AD0558(this);
            if (this->actor.params < 0) {
                if (this->unk2FA != 0) {
                    this->unk2FA = 0;
                }
                else {
                    this->unk2FA = 1;
                }
            }
        }
    }
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_FLY - SFX_FLAG);
}

void func_80AD167C(EnPeehat* this) {
    this->unk2B0 = 13;
    if (this->actor.groundY < this->actor.posRot.pos.y) {
        this->actor.speedXZ = -9.0f;
    }
    this->unk2F0 = 0;
    this->actor.posRot.rot.y = this->actor.yawTowardsLink;
    func_8003426C(&this->actor, 0, 0xC8, 0, 0x50);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_GOMA_JR_FREEZE);
    func_80ACF4A0(this, func_80AD1700);
}

void func_80AD1700(EnPeehat* this, GlobalContext* globalCtx) {
    Math_SmoothScaleMaxMinF(&this->actor.speedXZ, 0.0f, 1.0f, 1.0f, 0.0f);
    Math_SmoothScaleMaxMinF(&this->actor.posRot.pos.y, this->actor.groundY, 1.0f, 8.0f, 0.0f);
    if (this->actor.dmgEffectTimer == 0) {
        func_80AD0070(this);
    }
}

void func_80AD177C(EnPeehat* this) {
    this->unk2F0 = 0;
    this->unk2B4 = 1;
    this->actor.speedXZ = 0.0f;
    func_8003426C(&this->actor, 0x4000, 0xFF, 0, 8);
    this->unk2B0 = 0;
    this->unk2EC = 0.0f;
    this->actor.posRot.rot.y = this->actor.yawTowardsLink;
    func_80ACF4A0(this, func_80AD17E8);
}

void func_80AD17E8(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;

    if (this->unk2B4 != 0) {
        this->unk2D4--;
        if (this->unk2D4 <= 0 || this->actor.colChkInfo.health == 0) {

            SkelAnime_ChangeAnimTransitionStop(&this->unk14C, &D_06000844, -4.0f);
            this->unk2F0 = 4000;
            this->unk2D4 = 14;
            this->actor.speedXZ = 0;
            this->actor.velocity.y = 6;
            this->unk2B4 = 0;
            this->actor.shape.rot.z = this->actor.shape.rot.x = 0;
        } else if (this->actor.dmgEffectTimer & 4) {
            Math_SmoothScaleMaxMinF(&this->unk2EC, 0.205f, 1.0f, 0.235f, 0);
        }
        else {
            Math_SmoothScaleMaxMinF(&this->unk2EC, 0, 1.0f, 0.005f, 0);
        }
    }
    else {
        SkelAnime_FrameUpdateMatrix(&this->unk14C);
        this->unk2F2 += this->unk2F0;
        Math_SmoothScaleMaxMinS(&this->unk2F0, 4000, 1, 250, 0);
        if (this->actor.colChkInfo.health == 0) {
            this->actor.scale.x -= 0.0015f;
            Actor_SetScale(&this->actor, this->actor.scale.x);
        }
        if (Math_SmoothScaleMaxMinF(&this->actor.posRot.pos.y, this->actor.groundY + 88.5f, 1.0f, 3.0f, 0.0f) == 0.0f
            && this->actor.posRot.pos.y - this->actor.groundY < 59.0f) {
            pos = this->actor.posRot.pos;
            pos.y = this->actor.groundY;
            func_80033480(globalCtx, &pos, 80.0f, 1, 0x96, 0x64, 1);
            func_80ACF788(globalCtx, this, &pos, 75.0f, 2, 1.05f, 2.0f);
        }
        if (this->actor.speedXZ < 0) {
            this->actor.speedXZ += 0.25f;
        }
        this->unk2D4--;
        if (this->unk2D4 <= 0) {
            if (this->actor.colChkInfo.health == 0) {
                func_80AD1AA8(this);

            }
            else if (this->actor.params < 0) {
                func_80AD0F38(this);
                this->unk2F6 = 60;
            }
            else {
                func_80ACFEB0(this);
            }
        }
    }
}

void func_80AD1AA8(EnPeehat* this) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->unk14C, &D_060005C4);
    this->unk2B0 = 1;
    this->unk2FC = 5;
    this->unk2E0 = 0.0f;
    func_80ACF4A0(this, &func_80AD1B00);
}

void func_80AD1B00(EnPeehat* this, GlobalContext* globalCtx) {
    EnBom* bomb;
    s32 pad[2];

    if (this->unk2FC == 5) {
        bomb = (EnBom*)Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_BOM,
            this->actor.posRot.pos.x, this->actor.posRot.pos.y, this->actor.posRot.pos.z, 0, 0, 0x602, 0);
        if (bomb != NULL) {
            bomb->timer = 0;
        }
    }
    this->unk2FC--;
    if (this->unk2FC == 0) {
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.posRot.pos, 0x40);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.posRot.pos, 0x40);
        Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.posRot.pos, 0x40);
        Actor_Kill(&this->actor);
    }
}

void func_80AD1BD8(EnPeehat* this, GlobalContext* globalCtx) {
    Vec3f pos;
    s32 i;

    if ((this->colCylinder.base.acFlags & 0x80) || (this->colQuad.base.acFlags & 0x80)) {
        this->colQuad.base.acFlags &= ~0x80;
        this->colCylinder.base.acFlags &= ~0x80;
        this->colJntSph.base.acFlags &= ~2;

    } else if ((this->colJntSph.base.acFlags & 2) != 0) {
        this->colJntSph.base.acFlags &= ~2;
        func_8003573C(&this->actor, &this->colJntSph, 1);
        if (this->actor.colChkInfo.damageEffect == 0xF) {
            return;
        }
        if (this->actor.colChkInfo.damageEffect == 6) {
            return;
        }
        if (this->actor.colChkInfo.damageEffect == 0xD) {
            this->actor.colChkInfo.health = 0;
        }
        else if (this->actor.colChkInfo.damageEffect == 0xE) {
            if (this->unk2B0 != 0xD) {
                func_80AD167C(this);
            }
            return;
        }
        else {
            Actor_ApplyDamage(&this->actor);
            func_8003426C(&this->actor, 0x4000, 0xFF, 0, 8);
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_PIHAT_DAMAGE);
        }

        if (this->actor.colChkInfo.damageEffect == 0xC) {
            for (i = 4; i >= 0; i--) {
                pos.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
                pos.y = (Math_Rand_ZeroOne() * 25.0f) + this->actor.posRot.pos.y;
                pos.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;
                func_8002A4D4(globalCtx, &this->actor, &pos, 0x46, 0, 0, -1);
            }
            func_8003426C(&this->actor, 0x4000, 0xC8, 0, 0x64);
        }
        if (this->actor.colChkInfo.health == 0) {
            func_80AD177C(this);
        }
    }
}

void EnPeehat_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnPeehat* this = THIS;
    s32 i;
    Player* player;
    Vec3f sp70;
    CollisionPoly* poly;
    s32 bgId;
    Vec3f* temp2BC;

    player = PLAYER;
    if (thisx->params <= 0) {
        func_80AD1BD8(this, globalCtx);
    }
    if (thisx->colChkInfo.damageEffect != 6) {
        if ((0.0f != thisx->speedXZ) || (0.0f != thisx->velocity.y)) {
            Actor_MoveForward(thisx);
            func_8002E4B4(globalCtx, thisx, 25.0f, 30.0f, 30.0f, 5);
        }

        this->actionFunc(this, globalCtx);
        if ((globalCtx->gameplayFrames & 0x7F) == 0) {
            this->unk2E8 = (Math_Rand_ZeroOne() * 0.25f) + 0.5f;
        }
        this->unk2E4 += this->unk2E8;
    }
    if (thisx->params < 0) {
        thisx->posRot2.pos.x = (f32)this->colJntSph.list[0].dim.worldSphere.center.x;
        thisx->posRot2.pos.y = (f32)this->colJntSph.list[0].dim.worldSphere.center.y;
        thisx->posRot2.pos.z = (f32)this->colJntSph.list[0].dim.worldSphere.center.z;
        if (this->unk2B0 == 0xE) {
            Math_SmoothScaleMaxMinS(&thisx->shape.rot.x, 6000, 1, 300, 0);
        }
        else {
            Math_SmoothScaleMaxMinS(&thisx->shape.rot.x, 0, 1, 300, 0);
        }
    }
    else {
        thisx->posRot2.pos = thisx->posRot.pos;
    }
    Collider_CylinderUpdate(thisx, &this->colCylinder);
    if (thisx->colChkInfo.health > 0) {
        if (thisx->params <= 0) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->colCylinder.base);
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->colJntSph.base);
            if (thisx->dmgEffectTimer == 0 || (thisx->dmgEffectParams & 0x4000) == 0) {
                if (this->unk2B0 != 1) {
                    CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->colJntSph.base);
                }
            }
        }
        if (thisx->params != 0) {
            if (this->colQuad.base.atFlags & 2) {
                this->colQuad.base.atFlags &= ~2;
                if (&player->actor == this->colQuad.base.at) {
                    func_80AD1440(this);
                }
            }
        }
    }
    if (this->unk2B0 == 0xF || this->unk2B0 == 0xE || this->unk2B0 == 5 || this->unk2B0 == 0xC || this->unk2B0 == 1) {
        if (thisx->params != 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->colQuad.base);
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->colQuad.base);
        }
        if (thisx->params < 0 && (thisx->flags & 0x40)) {
            for (i = 1; i >= 0; i--) {
                temp2BC = &this->unk2BC[i];
                poly = NULL;
                if (func_8003DE84(&globalCtx->colCtx, &thisx->posRot.pos, temp2BC, &sp70, &poly, true, true, false, true, &bgId) == true) {
                    func_80033480(globalCtx, &sp70, 0.0f, 1, 0x12C, 0x96, 1);
                    func_80ACF788(globalCtx, this, &sp70, 0.0f, 3, 1.05f, 1.5f);
                }
            }
        }
        else if (thisx->params != 0) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->colCylinder.base);
        }
    }
    else {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->colCylinder.base);
    }
    Math_SmoothScaleMaxMinF(&this->unk2EC, 0.0f, 1.0f, 0.001f, 0.0f);
}

//override limb draw
s32 func_80AD2224(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* thisx) {
    EnPeehat* this = THIS;

    if (limbIndex == 4) {
        rot->x = -this->unk2F2;
    }
    if (limbIndex == 3 ||
        (limbIndex == 23 && (this->unk2B0 == 0 || 3 == this->unk2B0 || 4 == this->unk2B0))) {
        OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1946);
        Matrix_Push();
        Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
        Matrix_RotateX(this->unk2E4 * 0.115f, MTXMODE_APPLY);
        Matrix_RotateY(this->unk2E4 * 0.13f, MTXMODE_APPLY);
        Matrix_RotateZ(this->unk2E4 * 0.1f, MTXMODE_APPLY);
        Matrix_Scale(1.0f - this->unk2EC, this->unk2EC + 1.0f, 1.0f - this->unk2EC, MTXMODE_APPLY);
        Matrix_RotateZ(-(this->unk2E4 * 0.1f), MTXMODE_APPLY);
        Matrix_RotateY(-(this->unk2E4 * 0.13f), MTXMODE_APPLY);
        Matrix_RotateX(-(this->unk2E4 * 0.115f), MTXMODE_APPLY);
        gSPMatrix(oGfxCtx->polyOpa.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1959), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyOpa.p++, *dList);
        Matrix_Pull();
        CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1963);
        return true;
    }
    return false;
}

//post limb draw
void func_80AD2438(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    static Vec3f D_80AD2844 = { 0, 0, 5500 };
    static Vec3f D_80AD2850 = { 0, 0, -5500 };

    EnPeehat* this = THIS;
    f32 damageYRot;

    if (limbIndex == 4) {
        Matrix_MultVec3f(&D_80AD2844, &this->unk2BC[0]);
        Matrix_MultVec3f(&D_80AD2850, &this->unk2BC[1]);
        return;
    }
    if (limbIndex == 3 && thisx->params <= 0) {
        damageYRot = 0.0f;
        OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1981);
        Matrix_Push();
        Matrix_Translate(-1000.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        func_800628A4(0, &this->colJntSph);
        Matrix_Translate(500.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        if (this->actor.dmgEffectTimer != 0) {
            if (this->actor.dmgEffectParams & 0x4000) {
                damageYRot = Math_Sins(this->actor.dmgEffectTimer * 0x4E20) * 0.35f;
            }
        }
        Matrix_RotateY(3.2f + damageYRot, MTXMODE_APPLY);
        Matrix_Scale(0.3f, 0.2f, 0.2f, MTXMODE_APPLY);
        gSPMatrix(oGfxCtx->polyOpa.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1990), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyOpa.p++, *dList);
        Matrix_Pull();
        CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_peehat.c", 1994);
    }
}

void EnPeehat_Draw(Actor* thisx, GlobalContext* globalCtx) {
    static Vec3f D_80AD285C = { 0, 0, -4500 };
    static Vec3f D_80AD2868 = { -4500, 0, 0 };
    static Vec3f D_80AD2874 = { 4500, 0, 0 };
    static Vec3f D_80AD2880 = { 0, 0, 4500 };
    EnPeehat* this = THIS;

    func_80093D18(globalCtx->state.gfxCtx);
    SkelAnime_Draw(globalCtx, this->unk14C.skeleton, this->unk14C.limbDrawTbl, &func_80AD2224, &func_80AD2438, thisx);
    if (0.0f != thisx->speedXZ || 0.0f != thisx->velocity.y) {
        Matrix_MultVec3f(&D_80AD285C, &this->colQuad.dim.quad[1]); 
        Matrix_MultVec3f(&D_80AD2868, &this->colQuad.dim.quad[0]); 
        Matrix_MultVec3f(&D_80AD2874, &this->colQuad.dim.quad[3]); 
        Matrix_MultVec3f(&D_80AD2880, &this->colQuad.dim.quad[2]);
        func_80062734(&this->colQuad, &this->colQuad.dim.quad[0], &this->colQuad.dim.quad[1], &this->colQuad.dim.quad[2], &this->colQuad.dim.quad[3]);
    }
}
