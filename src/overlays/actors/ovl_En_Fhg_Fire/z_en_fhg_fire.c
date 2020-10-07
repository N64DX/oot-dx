/*
 * File: z_en_fhg_fire.c
 * Overlay: ovl_En_Fhg_Fire
 * Description: Phantom Ganon's Lighting Attack
 */

#include "z_en_fhg_fire.h"

#include "overlays/actors/ovl_Boss_Ganondrof/z_boss_ganondrof.h"
#include "overlays/actors/ovl_En_fHG/z_en_fhg.h"
#include "overlays/effects/ovl_Effect_Ss_Fhg_Flash/z_eff_ss_fhg_flash.h"

#define FLAGS 0x00000030

#define THIS ((EnFhgFire*)thisx)

void EnFhgFire_Init(Actor* thisx, GlobalContext* globalCtx);
void EnFhgFire_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnFhgFire_Update(Actor* thisx, GlobalContext* globalCtx);
void EnFhgFire_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnFhgFire_LightningStrike(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_LightningTrail(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_LightningShock(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_LightningBurst(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_SpearSpark(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_EnergyBall(EnFhgFire* this, GlobalContext* globalCtx);
void EnFhgFire_PhantomWarp(EnFhgFire* this, GlobalContext* globalCtx);

extern Gfx D_0600FAA0[];
extern Gfx D_0600FCF8[];
extern Gfx D_060105E0[];
extern Gfx D_06012160[];

const ActorInit En_Fhg_Fire_InitVars = {
    0,
    ACTORTYPE_BOSS,
    FLAGS,
    OBJECT_FHG,
    sizeof(EnFhgFire),
    (ActorFunc)EnFhgFire_Init,
    (ActorFunc)EnFhgFire_Destroy,
    (ActorFunc)EnFhgFire_Update,
    (ActorFunc)EnFhgFire_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    { COLTYPE_UNK10, 0x11, 0x09, 0x39, 0x10, COLSHAPE_CYLINDER },
    { 0x06, { 0x00100700, 0x03, 0x20 }, { 0x0D900700, 0x00, 0x00 }, 0x01, 0x01, 0x01 },
    { 20, 30, 10, { 0, 0, 0 } },
};

void EnFhgFire_SetUpdate(EnFhgFire* this, EnFhgFireUpdateFunc updateFunc) {
    this->updateFunc = updateFunc;
}

void EnFhgFire_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnFhgFire* this = THIS;
    Player* player = PLAYER;
    f32 tempf1;
    f32 tempf2;
    f32 tempf3;
    f32 tempf4;

    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    if ((this->actor.params == FHG_LIGHTNING_SHOCK) || (this->actor.params == FHG_LIGHTNING_BURST)
        || (this->actor.params == FHG_ENERGY_BALL)) {
        Collider_InitCylinder(globalCtx, &this->collider);
        Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    }
    this->unk_160 = 200.0f;
    Actor_SetScale(&this->actor, 0.0f);

    if (this->actor.params == FHG_LIGHTNING_STRIKE) {
        EnFhgFire_SetUpdate(this, EnFhgFire_LightningStrike);
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_THUNDER);
    } else if (this->actor.params >= FHG_LIGHTNING_TRAIL) {
        EnFhgFire_SetUpdate(this, EnFhgFire_LightningTrail);
        this->actor.shape.rot = this->actor.posRot.rot;
    }
    if (this->actor.params == FHG_LIGHTNING_SHOCK) {
        this->actor.draw = NULL;
        EnFhgFire_SetUpdate(this, EnFhgFire_LightningShock);
        this->actor.speedXZ = 30.0f;
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_SPARK);
    } else if (this->actor.params == FHG_LIGHTNING_BURST) {
        EnFhgFire_SetUpdate(this, EnFhgFire_LightningBurst);
        this->unk_160 = 255.0f;
        this->timer1 = 32;
        this->timer2 = 50;
        this->unk_1FE = 10;

        this->unk_18C = this->actor.posRot.rot.x / 100.0f;
        this->collider.dim.radius = this->actor.posRot.rot.x * 0.13f;
        this->collider.dim.height = this->actor.posRot.rot.x * 0.13f;
        this->collider.dim.yShift = 0;
    } else if (this->actor.params == FHG_SPEAR_LIGHT) {
        // "light spear"
        osSyncPrintf("yari hikari ct 1\n");
        EnFhgFire_SetUpdate(this, EnFhgFire_SpearSpark);
        osSyncPrintf("yari hikari ct 2\n");
        this->timer1 = this->actor.posRot.rot.x;
        this->fireMode = this->actor.posRot.rot.y;
    } else if ((this->actor.params == FHG_WARP_EMERGE) || (this->actor.params == FHG_WARP_RETREAT)
                || (this->actor.params == FHG_WARP_DEATH)) {
        Actor_SetScale(&this->actor, 7.0f);
        EnFhgFire_SetUpdate(this, EnFhgFire_PhantomWarp);
        if (this->actor.params == FHG_WARP_DEATH) {
            this->timer1 = 440;
            this->actor.scale.z = 1.0f;
        } else {
            this->timer1 = 76;
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_S);
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_S2);
        }
    } else if (this->actor.params == FHG_ENERGY_BALL) {
        this->actor.speedXZ = (this->actor.posRot.rot.x == 0) ? 8.0f : 3.0f;
        EnFhgFire_SetUpdate(this, EnFhgFire_EnergyBall);

        this->timer1 = 70;
        this->timer2 = 2;

        tempf1 = player->actor.posRot.pos.x - this->actor.posRot.pos.x;
        tempf2 = player->actor.posRot.pos.y + 30.0f - this->actor.posRot.pos.y;
        tempf3 = player->actor.posRot.pos.z - this->actor.posRot.pos.z;
        this->actor.posRot.rot.y = Math_atan2f(tempf1, tempf3) * (0x8000 / M_PI);
        tempf4 = sqrtf(SQ(tempf1) + SQ(tempf3));
        this->actor.posRot.rot.x = Math_atan2f(tempf2, tempf4) * (0x8000 / M_PI);
        this->collider.dim.radius = 40;
        this->collider.dim.height = 50;
        this->collider.dim.yShift = -25;
        this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
        Lights_PointNoGlowSetInfo(&this->lightInfo, this->actor.posRot.pos.x, this->actor.posRot.pos.y,
                                  this->actor.posRot.pos.z, 255, 255, 255, 255);
    }
}

void EnFhgFire_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnFhgFire* this = THIS;

    if ((this->actor.params == FHG_LIGHTNING_SHOCK) || (this->actor.params == FHG_LIGHTNING_BURST) || (this->actor.params == FHG_ENERGY_BALL)) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }

    if (this->actor.params == FHG_ENERGY_BALL) {
        LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
    }
}

void EnFhgFire_LightningStrike(EnFhgFire* this, GlobalContext* globalCtx) {
    s16 i;
    Camera* camera = Gameplay_GetCamera(globalCtx, 0);

    switch (this->fireMode) {
        case 0:
            this->fireMode = 10;
            this->timer1 = 7;
            break;
        case 10:
            this->actor.shape.rot.y = func_8005A948(camera) + 0x8000 * ((*this).unk_156 & 0xFF);
            Math_SmoothScaleMaxF(&this->scale, 1.0f, 1.0f, 0.2f);

            if (this->timer1 == 0) {
                this->fireMode = 11;
                this->actor.shape.rot.z += 0x8000;
                this->timer1 = 37;
                this->actor.posRot.pos.y -= 200.0f;

                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE,
                                   this->actor.posRot.pos.x, this->actor.posRot.pos.y, this->actor.posRot.pos.z, 500, 0,
                                   0, FHG_LIGHTNING_BURST);
                {
                    Vec3f sp7C;
                    Vec3f sp70 = { 0.0f, -1.0f, 0.0f };

                    for (i = 0; i < 35; i++) {
                        sp7C.x = Math_Rand_CenteredFloat(30.f);
                        sp7C.y = Math_Rand_ZeroFloat(5.0f) + 3.0f;
                        sp7C.z = Math_Rand_CenteredFloat(30.f);
                        sp70.y = -0.2f;
                        EffectSsFhgFlash_SpawnLightBall(globalCtx, &this->actor.posRot.pos, &sp7C, &sp70,
                                                        (s16)(Math_Rand_ZeroOne() * 100.0f) + 240,
                                                        FHGFLASH_LIGHTBALL_GREEN);
                    }
                }
                func_80033E88(&this->actor, globalCtx, 4, 10);
            }

            break;
        case 11:
            this->actor.shape.rot.y = func_8005A948(camera) + ((*this).unk_156 & 0xFF) * 0x8000;

            Math_SmoothScaleMaxF(&this->scale, 0.0f, 1.0f, 0.2f);
            if (this->timer1 == 30) {
                s16 randY = (Math_Rand_ZeroOne() < 0.5f) ? 0x1000 : 0;

                for (i = 0; i < 8; i++) {
                    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE,
                                       this->actor.posRot.pos.x, this->actor.posRot.pos.y, this->actor.posRot.pos.z, 0,
                                       (i * 0x2000) + randY, 0x4000, FHG_LIGHTNING_TRAIL + i);
                }

                for (i = 0; i < 8; i++) {
                    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE,
                                       this->actor.posRot.pos.x, this->actor.posRot.pos.y, this->actor.posRot.pos.z, 0,
                                       (i * 0x2000) + randY, 0, FHG_LIGHTNING_SHOCK);
                }
            }

            if (this->timer1 == 0) {
                Actor_Kill(&this->actor);
            }
    }

    Actor_SetScale(&this->actor, this->scale);
}

void EnFhgFire_LightningTrail(EnFhgFire* this, GlobalContext* globalCtx) {
    osSyncPrintf("FF MOVE 1\n");
    this->actor.shape.rot.x += (s16)(Math_Rand_ZeroOne() * 4000.0f) + 0x4000;

    switch (this->fireMode) {
        case 0:
            this->fireMode = 1;
            this->timer1 = (s16)(Math_Rand_ZeroOne() * 7.0f) + 7;
        case 1:
            Math_SmoothScaleMaxF(&this->scale, 1.7f, 1.0f, 0.34f);

            if (this->timer1 == 0) {
                this->fireMode = 2;
                this->timer1 = 10;
                this->actor.posRot.pos.z += Math_Sins(this->actor.shape.rot.y) * -200.0f * this->scale;
                this->actor.posRot.pos.x += Math_Coss(this->actor.shape.rot.y) * 200.0f * this->scale;
                this->actor.shape.rot.y += 0x8000;
            }
            break;
        case 2:
            Math_SmoothDownscaleMaxF(&this->scale, 1.0f, 0.34f);
            if (this->timer1 == 0) {
                Actor_Kill(&this->actor);
            }
            break;
    }

    Actor_SetScale(&this->actor, this->scale);
    if (this->actor.scale.x > 1.0f) {
        this->actor.scale.x = 1.0f;
    }

    osSyncPrintf("FF MOVE 2\n");
}

void EnFhgFire_LightningShock(EnFhgFire* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    Vec3f pos;

    if (this->collider.base.atFlags & 2) {
        this->collider.base.atFlags &= ~2;
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_HIT_THUNDER);
    }

    if (Math_Rand_ZeroOne() < 0.5f) {
        pos = this->actor.posRot.pos;
        pos.y -= 20.0f;
        EffectSsFhgFlash_SpawnShock(globalCtx, &this->actor, &pos, 200, FHGFLASH_SHOCK_NO_ACTOR);
    }

    Actor_MoveForward(&this->actor);
    Collider_CylinderUpdate(&this->actor, &this->collider);
    if (player->invincibilityTimer == 0) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }

    func_8002E4B4(globalCtx, &this->actor, 50.0f, 50.0f, 100.0f, 1);
    if (this->actor.bgCheckFlags & 8) {
        Actor_Kill(&this->actor);
    }
}

void EnFhgFire_LightningBurst(EnFhgFire* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;
    s32 pad;

    globalCtx->envCtx.unk_E1 = 0x01;
    this->actor.shape.rot.y += 0x1000;

    if (this->timer2 == 49) {
        globalCtx->envCtx.unk_BF = 1;
        globalCtx->envCtx.unk_D6 = 0xFF;
    }
    if (this->timer2 == 31) {
        globalCtx->envCtx.unk_BF = 0x00;
        globalCtx->envCtx.unk_D6 = 0x14;
    }
    if (this->timer2 >= 48) {
        globalCtx->envCtx.unk_E2[2] = 0xFF;
        globalCtx->envCtx.unk_E2[1] = 0xFF;
        globalCtx->envCtx.unk_E2[0] = 0xFF;

        if (((this->timer1 & 0xFF) % 2) != 0) {
            globalCtx->envCtx.unk_E2[3] = 0x46;
        } else {
            globalCtx->envCtx.unk_E2[3] = 0x00;
        }
    } else {
        globalCtx->envCtx.unk_E2[3] = 0x00;
    }

    if (this->timer1 <= 20) {
        Math_SmoothDownscaleMaxF(&this->unk_160, 1.0f, 45.0f);
        Math_SmoothDownscaleMaxF(&this->scale, 1.0f, 0.5f);
    } else {
        Math_SmoothScaleMaxF(&this->scale, this->unk_18C, 0.5f, 3.0f);
    }

    Actor_SetScale(&this->actor, this->scale);
    if (this->unk_18C > 3.0f) {
        Collider_CylinderUpdate(&this->actor, &this->collider);
        if (player->invincibilityTimer == 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }
    }

    if (this->timer1 == 0) {
        Actor_Kill(&this->actor);
        globalCtx->envCtx.unk_E1 = 0;
    }
    if (this->unk_1FE != 0) {
        this->unk_1FE--;
        this->unk_1FC = 1;
        Math_SmoothScaleMaxF(&this->unk_200, 40.0f, 0.3f, 10.0f);
    } else {
        Math_SmoothDownscaleMaxF(&this->unk_200, 1.0f, 5.0f);
        if (this->unk_200 == 0.0f) {
            this->unk_1FC = 0;
        }
    }

    // Related to scene draw config 30, only used in BossGanon_Update and
    // loaded in z_kankyo
    D_8015FCF0 = this->unk_1FC;
    D_8015FCF8 = this->actor.posRot.pos;
    D_8015FD06 = this->unk_200;
    D_8015FD08 = 10.0f;
    D_8015FD0C = 0;
}

void EnFhgFire_SpearSpark(EnFhgFire* this, GlobalContext* globalCtx) {
    BossGanondrof* bossPG;
    s16 i;

    osSyncPrintf("yari hikari 1\n");
    bossPG = (BossGanondrof*)this->actor.parent;
    if ((this->unk_156 % 2) != 0) {
        Actor_SetScale(&this->actor, 6.0f);
    } else {
        Actor_SetScale(&this->actor, 5.25f);
    }

    this->actor.posRot.pos = bossPG->spearPos;
    this->actor.shape.rot.z += (s16)(Math_Rand_ZeroOne() * 0x4E20) + 0x4000;

    osSyncPrintf("yari hikari 2\n");
    if (this->fireMode == 0) {
        Vec3f ballPos;
        Vec3f ballVel = { 0.0f, 0.0f, 0.0f };
        Vec3f ballAccel = { 0.0f, 0.0f, 0.0f };

        osSyncPrintf("FLASH !!\n");

        for (i = 0; i < 2; i++) {
            ballPos.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
            ballPos.y = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.y;
            ballPos.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;
            ballAccel.y = -0.08f;

            EffectSsFhgFlash_SpawnLightBall(globalCtx, &ballPos, &ballVel, &ballAccel,
                                            (s16)(Math_Rand_ZeroOne() * 80.0f) + 150, FHGFLASH_LIGHTBALL_GREEN);
        }
    }

    if (this->timer1 == 0) {
        Actor_Kill(&this->actor);
    }
}

void EnFhgFire_EnergyBall(EnFhgFire* this, GlobalContext* globalCtx) {
    f32 dxL;
    f32 dyL;
    f32 dzL;
    f32 sp100;
    f32 dxPG;
    f32 dyPG;
    f32 dzPG;
    u8 spF3 = 0;
    u8 spF2;
    Player* player;
    s32 spE8;
    BossGanondrof* bossPG;

    player = PLAYER;
    if (this->unk_15C != 0) {
        this->unk_15C--;
        if (this->unk_15C == 0) {
            Actor_Kill(&this->actor);
            return;
        }
    } else {
        bossPG = (BossGanondrof*)this->actor.parent;
        dxPG = bossPG->unk_20C.x - this->actor.posRot.pos.x;
        dyPG = bossPG->unk_20C.y - this->actor.posRot.pos.y;
        dzPG = bossPG->unk_20C.z - this->actor.posRot.pos.z;
        dxL = player->actor.posRot.pos.x - this->actor.posRot.pos.x;
        dyL = player->actor.posRot.pos.y + 40.0f - this->actor.posRot.pos.y;
        dzL = player->actor.posRot.pos.z - this->actor.posRot.pos.z;
        func_8002D908(&this->actor);
        func_8002D7EC(&this->actor);
        if (this->unk_156 & 1) {
            Actor_SetScale(&this->actor, 6.0f);
        } else {
            Actor_SetScale(&this->actor, 5.25f);
        }
        this->actor.shape.rot.z += (s16)(Math_Rand_ZeroOne() * 0x4E20) + 0x4000;
        {
            u8 lightBallColor1 = FHGFLASH_LIGHTBALL_GREEN;
            s16 spE0;
            Vec3f spD4;
            Vec3f spC8 = { 0.0f, 0.0f, 0.0f };
            Vec3f spBC = { 0.0f, 0.0f, 0.0f };

            if (this->fireMode > 0) {
                lightBallColor1 = FHGFLASH_LIGHTBALL_LIGHTBLUE;
            }
            for (spE0 = 0; spE0 < 3; spE0++) {
                spD4.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
                spD4.y = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.y;
                spD4.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;
                spBC.y = -0.08f;
                EffectSsFhgFlash_SpawnLightBall(globalCtx, &spD4, &spC8, &spBC,
                                                (s16)(Math_Rand_ZeroOne() * 80.0f) + 150, lightBallColor1);
            }
        }
        switch (this->fireMode) {
            case 0:
                spF2 =
                    ((player->stateFlags1 & 2) &&
                     (ABS((s16)(player->actor.shape.rot.y - (s16)(bossPG->actor.yawTowardsLink + 0x8000))) < 0x2000) &&
                     (sqrtf(SQ(dxL) + SQ(dyL) + SQ(dzL)) <= 25.0f))
                        ? 1
                        : 0;
                if ((this->collider.base.acFlags & 2) || spF2) {
                    ColliderBody* hurtbox = this->collider.body.acHitItem;
                    s16 spB6;
                    Vec3f spA8;
                    Vec3f sp9C = { 0.0f, -0.5f, 0.0f };
                    s16 sp9A;
                    s16 sp98;

                    for (spB6 = 0; spB6 < 30; spB6++) {
                        spA8.x = Math_Rand_CenteredFloat(20.0f);
                        spA8.y = Math_Rand_CenteredFloat(20.0f);
                        spA8.z = Math_Rand_CenteredFloat(20.0f);
                        EffectSsFhgFlash_SpawnLightBall(globalCtx, &this->actor.posRot.pos, &spA8, &sp9C,
                                                        (s16)(Math_Rand_ZeroOne() * 25.0f) + 50,
                                                        FHGFLASH_LIGHTBALL_GREEN);
                    }
                    spE8 = spF2;
                    if (!spE8 && (hurtbox->toucher.flags & 0x00100000)) {
                        spF3 = 2;
                        Audio_PlaySoundGeneral(0x180C, &player->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                        func_800AA000(this->actor.xyzDistFromLinkSq, 0xFF, 0x14, 0x96);
                    } else {
                        if (bossPG->actionState == 1) {
                            sp9A = Math_Rand_CenteredFloat(0x2000);
                            sp98 = Math_Rand_CenteredFloat(0x2000);
                            this->actor.speedXZ = 15.0f;
                        } else {
                            sp9A = 0;
                            sp98 = 0;
                            this->unk_15A++;
                            if ((this->unk_15A > 3) && (Math_Rand_ZeroOne() < 0.5f)) {
                                this->unk_15A = 0x64;
                            }

                            if (!spE8 && (player->swordAnimation >= 24)) {
                                this->actor.speedXZ = 20.0f;
                                this->unk_15A = 4;
                            } else {
                                this->actor.speedXZ += 1.0f;
                            }
                        }
                        this->actor.posRot.rot.y = (s16)(Math_atan2f(dxPG, dzPG) * (0x8000/M_PI)) + sp98;
                        this->actor.posRot.rot.x =
                            (s16)(Math_atan2f(dyPG, sqrtf((dxPG * dxPG) + (dzPG * dzPG))) * (0x8000/M_PI)) + sp9A;
                        this->fireMode = 1;
                        this->timer2 = 2;
                        Audio_PlaySoundGeneral(0x182A, &player->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                        func_800AA000(this->actor.xyzDistFromLinkSq, 0xB4, 0x14, 0x64);
                    }
                } else if (sqrtf(SQ(dxL) + SQ(dyL) + SQ(dzL)) <= 25.0f) {
                    spF3 = 1;
                    Audio_PlayActorSound2(&this->actor, 0x38A8);
                    if ((bossPG->actionState >= 2) && (this->unk_15A >= 2)) {
                        Audio_PlayActorSound2(&this->actor, 0x38B0);
                    }
                    func_8002F698(globalCtx, &this->actor, 3.0f, this->actor.posRot.rot.y, 0.0f, 3, 0x10);
                }
                break;
            case 1:
                if ((bossPG->actionState == 3) && (this->unk_15A < 100)) {
                    this->actor.posRot.rot.y = Math_atan2f(dxPG, dzPG) * (0x8000/M_PI);
                    if ((sqrtf(SQ(dxPG) + SQ(dzPG)) < (150.0f + (this->actor.speedXZ * 8.0f)))) {
                        this->fireMode = 2;
                        bossPG->returnSuccess = 1;
                        this->timer1 = 8;
                    }
                } else {
                    if (this->unk_15A >= 100) {
                        if ((sqrtf(SQ(dxPG) + SQ(dyPG) + SQ(dzPG)) < 100.0f)) {
                            bossPG->returnSuccess = 1;
                        }
                        this->actor.posRot.rot.y = Math_atan2f(dxPG, dzPG) * (0x8000/M_PI);
                        this->actor.posRot.rot.x = Math_atan2f(dyPG, sqrtf(SQ(dxPG) + SQ(dzPG))) * (0x8000/M_PI);
                    }
                    if ((fabsf(dxPG) < 30.0f) && (fabsf(dzPG) < 30.0f) && (fabsf(dyPG) < 45.0f)) {
                        spF3 = 2;
                        bossPG->volleyCount = this->unk_15A + 1;
                        Audio_PlaySoundGeneral(0x38A8, &bossPG->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                        Audio_PlaySoundGeneral(0x38AE, &bossPG->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                                               &D_801333E8);
                    }
                }
                break;
            case 2:
                if (this->timer1 == 0) {
                    s16 sp96;
                    Vec3f sp88;
                    Vec3f sp7C = { 0.0f, -0.5f, 0.0f };

                    for (sp96 = 0; sp96 < 30; sp96++) {
                        sp88.x = Math_Rand_CenteredFloat(20.0f);
                        sp88.y = Math_Rand_CenteredFloat(20.0f);
                        sp88.z = Math_Rand_CenteredFloat(20.0f);
                        EffectSsFhgFlash_SpawnLightBall(globalCtx, &this->actor.posRot.pos, &sp88, &sp7C,
                                                        (s16)(Math_Rand_ZeroOne() * 40.0f) + 80,
                                                        FHGFLASH_LIGHTBALL_GREEN);
                    }
                    this->actor.posRot.rot.y = Math_atan2f(dxL, dzL) * (0x8000/M_PI);
                    sp100 = sqrtf(SQ(dxL) + SQ(dzL));
                    this->actor.posRot.rot.x = Math_atan2f(dyL, sp100) * (0x8000/M_PI);
                    this->fireMode = 0;
                    Audio_PlayActorSound2(&this->actor, 0x182A);
                    this->actor.speedXZ += 2.0f;
                }
                break;
        }

        osSyncPrintf("F_FIRE_MODE %d\n", this->fireMode);
        osSyncPrintf("fly_mode    %d\n", bossPG->actionState);
        if (this->timer2 == 0) {
            func_8002E4B4(globalCtx, &this->actor, 50.0f, 50.0f, 100.0f, 7);
            if ((this->actor.bgCheckFlags & 0x19) || spF3) {
                u8 lightBallColor2 = FHGFLASH_LIGHTBALL_GREEN;
                s16 sp78;
                Vec3f sp6C;
                Vec3f sp60 = { 0.0f, -1.0f, 0.0f };

                if (this->fireMode > 0) {
                    lightBallColor2 = FHGFLASH_LIGHTBALL_LIGHTBLUE;
                }
                for (sp78 = 0; sp78 < 30; sp78++) {
                    sp6C.x = Math_Rand_CenteredFloat(20.0f);
                    sp6C.y = Math_Rand_CenteredFloat(20.0f);
                    sp6C.z = Math_Rand_CenteredFloat(20.0f);
                    sp60.y = -0.1f;
                    EffectSsFhgFlash_SpawnLightBall(globalCtx, &this->actor.posRot.pos, &sp6C, &sp60,
                                                    (s16)(Math_Rand_ZeroOne() * 50.0f) + 100, lightBallColor2);
                }
                if (spF3 == 1) {
                    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE, this->actor.posRot.pos.x,
                                       player->actor.posRot.pos.y + 20.0f, this->actor.posRot.pos.z, 0xC8, 0, 0, FHG_LIGHTNING_BURST);
                }
                bossPG->actionState = 1;
                this->unk_15C = 30;
                this->actor.draw = NULL;
                if (spF3 == 0) {
                    Audio_PlayActorSound2(&this->actor, 0x38AD);
                }
                return;
            } else {
                Collider_CylinderUpdate(&this->actor, &this->collider);
                osSyncPrintf("BEFORE setAC   %d\n", this->collider.base.shape);
                CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
                osSyncPrintf("AFTER  setAC\n");
            }
        }
        Lights_PointNoGlowSetInfo(&this->lightInfo, (s16)this->actor.posRot.pos.x, (s16)this->actor.posRot.pos.y,
                                  (s16)this->actor.posRot.pos.z, 255, 255, 255, 200);
        if (this->actor.speedXZ > 20.0f) {
            this->actor.speedXZ = 20.0f;
        }
        Audio_PlayActorSound2(&this->actor, 0x30A7);
        // Why ah ah ah ah
        osSyncPrintf("なぜだああああああああ      %d\n", this->unk_156);
    }
}

void EnFhgFire_PhantomWarp(EnFhgFire* this, GlobalContext* globalCtx) {
    EnfHG* horse = (EnfHG*)this->actor.parent;
    f32 phi_f0;

    this->unk_174 += 25.0f * this->unk_184;
    this->unk_178 -= 40.0f * this->unk_184;
    this->unk_17C += 5.0f * this->unk_184;
    this->unk_180 -= 30.0f * this->unk_184;

    if (this->actor.params == FHG_WARP_DEATH) {
        if (this->timer1 > 70) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_L - SFX_FLAG);
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_L2 - SFX_FLAG);
        }

        if (this->timer1 == 70) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_S);
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_FANTOM_WARP_S2);
        }
    }

    if (this->timer1 > 50) {
        phi_f0 = 1.0f;
        if (this->actor.params > FHG_WARP_EMERGE) {
            phi_f0 = -1.0f;
        }
        Math_SmoothScaleMaxF(&this->unk_184, phi_f0, 1.0f, 0.04f);
        Math_SmoothScaleMaxF(&this->unk_188, 255.0f, 1.0f, 10.2f);
    } else if (this->timer1 <= 25) {
        Math_SmoothDownscaleMaxF(&this->unk_184, 1.0f, 0.04f);
        Math_SmoothDownscaleMaxF(&this->unk_188, 1.0f, 10.2f);
    }

    osSyncPrintf("EFC 1\n");
    if ((this->timer1 == 0) || ((this->actor.params == FHG_WARP_EMERGE) && horse->fhgFireKillWarp)) {
        Actor_Kill(&this->actor);
    }
    osSyncPrintf("EFC 2\n");
}

void EnFhgFire_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnFhgFire* this = THIS;

    this->unk_156++;

    DECR(this->timer1);
    DECR(this->timer2);

    this->updateFunc(this, globalCtx);
}

static s32 D_80A1181C[] = {
    0x04051DB0, 0x040521B0, 0x040525B0, 0x040529B0, 0x04052DB0, 0x040531B0, 0x040535B0, 0x040539B0,
};

void EnFhgFire_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnFhgFire* this = THIS;
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1723);

    if (this->actor.params == FHG_LIGHTNING_BURST) {
        func_80093D84(globalCtx->state.gfxCtx);
        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0, 255, 255, 255, (s8)this->unk_160);
        gDPSetEnvColor(oGfxCtx->polyXlu.p++, 165, 255, 75, 0);
        gDPPipeSync(oGfxCtx->polyXlu.p++);
        gSPMatrix(oGfxCtx->polyXlu.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1745),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyXlu.p++, SEGMENTED_TO_VIRTUAL(D_0600FCF8));
    } else if ((this->actor.params == FHG_SPEAR_LIGHT) || (this->actor.params == FHG_ENERGY_BALL)) {
        osSyncPrintf("yari hikari draw 1\n");
        func_800D1FD4(&globalCtx->mf_11DA0);
        func_80093D84(globalCtx->state.gfxCtx);
        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0, 255, 255, 255, (s8)this->unk_160);

        if (this->fireMode > 0) {
            gDPSetEnvColor(oGfxCtx->polyXlu.p++, 0, 255, 255, 0);
        } else {
            gDPSetEnvColor(oGfxCtx->polyXlu.p++, 165, 255, 75, 0);
        }
        gDPPipeSync(oGfxCtx->polyXlu.p++);
        Matrix_RotateZ((this->actor.shape.rot.z / (f32)0x8000) * 3.1416f, 1);
        gSPMatrix(oGfxCtx->polyXlu.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1801),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyXlu.p++, D_06012160);
    } else if ((this->actor.params == FHG_WARP_EMERGE) || (this->actor.params == FHG_WARP_RETREAT)
                || (this->actor.params == FHG_WARP_DEATH)) {
        func_80093D84(globalCtx->state.gfxCtx);
        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0, 0, 0, 0, (u8)this->unk_188);
        gDPSetEnvColor(oGfxCtx->polyXlu.p++, 90, 50, 95, (s8)(this->unk_188 * 0.5f));
        gDPPipeSync(oGfxCtx->polyXlu.p++);
        gSPMatrix(oGfxCtx->polyXlu.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1833),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPSegment(oGfxCtx->polyXlu.p++, 0x08,
                   Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (s16)this->unk_174, (s16)this->unk_178, 0x40, 0x40, 1,
                                    (s16)this->unk_17C, (s16)this->unk_180, 0x40, 0x40));
        gSPDisplayList(oGfxCtx->polyXlu.p++, D_0600FAA0);
    } else {
        osSyncPrintf("FF DRAW 1\n");
        Matrix_Translate(0.0f, -100.0f, 0.0f, 1);
        func_80093D84(globalCtx->state.gfxCtx);
        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0, 255, 255, 255, (s8)this->unk_160);
        gDPSetEnvColor(oGfxCtx->polyXlu.p++, 0, 255, 30, 0);
        gDPPipeSync(oGfxCtx->polyXlu.p++);
        gSPMatrix(oGfxCtx->polyXlu.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1892),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyXlu.p++, D_060105E0);
        osSyncPrintf("FF DRAW 2\n");
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_fhg_fire.c", 1900);
}
