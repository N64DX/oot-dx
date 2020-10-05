/*
 * File: z_en_fhg.c
 * Overlay: ovl_En_fHG
 * Description: Phantom Ganon's Horse
 */

#include "z_en_fhg.h"
#include "overlays/actors/ovl_Boss_Ganondrof/z_boss_ganondrof.h"
#include "overlays/actors/ovl_En_Fhg_Fire/z_en_fhg_fire.h"

#define FLAGS 0x00000010

#define THIS ((EnfHG*)thisx)
#define BOSSPG ((BossGanondrof*)this->actor.parent)

void EnfHG_Init(Actor* thisx, GlobalContext* globalCtx);
void EnfHG_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnfHG_Update(Actor* thisx, GlobalContext* globalCtx);
void EnfHG_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnfHG_SetupIntro(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_Intro(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_SetupApproach(EnfHG* this, GlobalContext* globalCtx, s16 paintingIndex);
void EnfHG_Approach(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_Attack(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_Damage(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_Retreat(EnfHG* this, GlobalContext* globalCtx);
void EnfHG_Done(EnfHG* this, GlobalContext* globalCtx);

void EnfHG_Noop(Actor* thisx, GlobalContext* globalCtx, PSkinAwb* skin);

extern SkeletonHeader D_0600B098;
extern AnimationHeader D_0600B4C8;
extern AnimationHeader D_0600B9D0;
extern AnimationHeader D_0600C65C;
extern AnimationHeader D_0600CB1C;
extern AnimationHeader D_0600DDB8;
extern AnimationHeader D_0600E8A0;

extern UNK_TYPE D_060059A0;

const ActorInit En_fHG_InitVars = {
    ACTOR_EN_FHG,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_FHG,
    sizeof(EnfHG),
    (ActorFunc)EnfHG_Init,
    (ActorFunc)EnfHG_Destroy,
    (ActorFunc)EnfHG_Update,
    (ActorFunc)EnfHG_Draw,
};

static EnfHGPainting sPaintings[6] = { { { 0.0f, 60.0f, -315.0f }, 0x0000 },   { { -260.0f, 60.0f, -145.0f }, 0x2AAA },
                                { { -260.0f, 60.0f, 165.0f }, 0x5554 }, { { 0.0f, 60.0f, 315.0f }, 0x7FFE },
                                { { 260.0f, 60.0f, 155.0f }, 0xAAA8 },  { { 260.0f, 60.0f, -155.0f }, 0xD552 } };

static InitChainEntry sInitChain[2] = {
    ICHAIN_S8(naviEnemyId, 26, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 1200, ICHAIN_STOP),
};

void EnfHG_Init(Actor* thisx, GlobalContext* globalCtx2) {
    GlobalContext* globalCtx = globalCtx2;
    EnfHG* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    Flags_SetSwitch(globalCtx, 0x14);
    Actor_SetScale(&this->actor, 0.011499999f);
    this->actor.gravity = -3.5f;
    ActorShape_Init(&this->actor.shape, -2600.0f, NULL, 20.0f);
    this->actor.speedXZ = 0.0f;
    this->actor.posRot2.pos = this->actor.posRot.pos;
    this->actor.posRot2.pos.y += 70.0f;
    func_800A663C(globalCtx, &this->skin, &D_0600B098, &D_0600B4C8);

    if (this->actor.params >= 0xA) {
        EnfHG_SetupApproach(this, globalCtx, this->actor.params - 0xA);
    } else {
        EnfHG_SetupIntro(this, globalCtx);
    }
}

void EnfHG_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnfHG* this = THIS;

    osSyncPrintf("F DT1\n");
    func_800A6888(globalCtx, &this->skin);
    osSyncPrintf("F DT2\n");
}

void EnfHG_SetupIntro(EnfHG* this, GlobalContext* globalCtx) {
    SkelAnime_ChangeAnimDefaultRepeat(&this->skin.skelAnime, &D_0600E8A0);
    this->actionFunc = EnfHG_Intro;
    VEC_SET(this->actor.posRot.pos, 14.0f, -300.0f, -3315.0f);
}

void EnfHG_Intro(EnfHG* this, GlobalContext* globalCtx) {
    static Vec3f audioVec = { 0.0f, 0.0f, 50.0f };
    s32 pad64;
    Player* player = PLAYER;
    BossGanondrof* bossPG = BOSSPG;
    s32 pad58;
    s32 pad54;
    Camera* camera;

    if (this->cutsceneState != 9) {
        SkelAnime_FrameUpdateMatrix(&this->skin.skelAnime);
    }
    switch (this->cutsceneState) {
        case 0:
            if ((fabsf(player->actor.posRot.pos.x - 14.0f) < 150.0f) &&
                (fabsf(player->actor.posRot.pos.z - -3315.0f) < 150.0f)) {
                this->cutsceneState = 15;
            }
            break;
        case 15:
            if ((fabsf(player->actor.posRot.pos.x - 14.0f) < 100.0f) &&
                (fabsf(player->actor.posRot.pos.z - -3000.0f) < 100.0f)) {
                this->cutsceneState = 1;
                if (gSaveContext.eventChkInf[7] & 4) {
                    this->timers[0] = 57;
                }
            }
            break;
        case 1:
            if (gSaveContext.eventChkInf[7] & 4) {
                if (this->timers[0] == 55) {
                    Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_DOOR_SHUTTER, 14.0f,
                                       -130.0f, -3007.0f, 0, 0, 0, 0x100);
                }
                if (this->timers[0] == 51) {
                    Audio_PlayActorSound2(this->actor.child, NA_SE_EV_SPEAR_FENCE);
                    Audio_SetBGM(0x1B);
                }
                if (this->timers[0] == 0) {
                    EnfHG_SetupApproach(this, globalCtx, Math_Rand_ZeroOne() * 5.99f);
                    this->bossPGintroState = 255;
                }
                break;
            }
            func_80064520(globalCtx, &globalCtx->csCtx);
            func_8002DF54(globalCtx, &this->actor, 8);
            this->cutsceneCamera = Gameplay_CreateSubCamera(globalCtx);
            Gameplay_ChangeCameraStatus(globalCtx, 0, 1);
            Gameplay_ChangeCameraStatus(globalCtx, this->cutsceneCamera, 7);
            this->cutsceneState = 2;
            this->timers[0] = 60;
            this->actor.posRot.pos.y = -40.0f;
            Audio_SetBGM(0x100100FF);
            gSaveContext.eventChkInf[7] |= 4;
            Flags_SetSwitch(globalCtx, 0x23);
        case 2:
            VEC_SET(player->actor.posRot.pos, 14.0f, -26.0f, -3160.0f);
            player->actor.posRot.rot.y = player->actor.shape.rot.y = 0;
            player->actor.speedXZ = 0.0f;
            VEC_SET(this->cameraEye, 14.0f, 4.0f, -3145.0f);
            this->cameraAt.x = this->cameraAt.y = 14.0f;
            this->cameraAt.z = -3000.0f;
            if (this->timers[0] == 25) {
                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, 0x2E, 14.0f, -130.0f, -3007.0f, 0, 0,
                                   0, 0x100);
            }
            if (this->timers[0] == 21) {
                Audio_PlayActorSound2(this->actor.child, NA_SE_EV_SPEAR_FENCE);
            }
            if (this->timers[0] == 0) {
                this->cutsceneState = 3;
                this->timers[0] = 80;
            }
            break;
        case 3:
            if (this->timers[0] == 25) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_GANON_HORSE_GROAN);
            }
            if (this->timers[0] == 20) {
                func_8002DF54(globalCtx, &this->actor, 9);
            }
            if (this->timers[0] == 1) {
                Audio_SetBGM(0x23);
            }
            Math_SmoothScaleMaxF(&this->cameraEye.x, 54.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraEye.y, 4.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraEye.z, -3235.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.x, -86.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.y, 14.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.z, -2980.0f, 0.05f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraSpeedMod, 1.0f, 1.0f, 0.01f);
            if (this->timers[0] == 0) {
                this->cutsceneState = 4;
                this->timers[0] = 50;
                this->cameraSpeedMod = 0.0f;
            }
            break;
        case 4:
            Math_SmoothScaleMaxF(&this->cameraEye.x, 84.0f, 0.1f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraEye.y, -26.0f, 0.1f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraEye.z, -3115.0f, 0.1f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.x, -136.0f, 0.1f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.y, 74.0f, 0.1f, this->cameraSpeedMod * 20.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.z, -3380.0f, 0.1f, this->cameraSpeedMod * 40.0f);
            Math_SmoothScaleMaxF(&this->cameraSpeedMod, 1.0f, 1.0f, 0.05f);
            if (this->timers[0] == 5) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_HORSE_SANDDUST);
            }
            if (this->timers[0] == 0) {
                this->cutsceneState = 5;
                this->timers[0] = 50;
                this->cameraSpeedMod = 0.0f;
            }
            break;
        case 5:
            this->cutsceneState = 6;
            VEC_SET(this->cameraEye, 64.0f, -16.0f, -3205.0f);
            VEC_SET(this->cameraAt, -136.0f, 174.0f, -3470.0f);
            this->cameraEyeVel.x = fabsf(this->cameraEye.x - 34.0f);
            this->cameraEyeVel.y = fabsf(this->cameraEye.y - 69.0f);
            this->cameraEyeVel.z = fabsf(this->cameraEye.z - -3290.0f);
            this->cameraAtVel.x = fabsf(this->cameraAt.x - -136.0f);
            this->cameraAtVel.y = fabsf(this->cameraAt.y - 164.0f);
            this->cameraAtVel.z = fabsf(this->cameraAt.z - -3380.0f);
            this->timers[0] = 250;
        case 6:
            Math_SmoothScaleMaxF(&this->cameraEye.x, 34.0f, 0.05f, this->cameraSpeedMod * this->cameraEyeVel.x);
            Math_SmoothScaleMaxF(&this->cameraEye.y, 69.0f, 0.05f, this->cameraSpeedMod * this->cameraEyeVel.y);
            Math_SmoothScaleMaxF(&this->cameraEye.z, -3290.0f, 0.05f, this->cameraSpeedMod * this->cameraEyeVel.z);
            Math_SmoothScaleMaxF(&this->cameraAt.x, -136.0f, 0.05f, this->cameraSpeedMod * this->cameraAtVel.x);
            Math_SmoothScaleMaxF(&this->cameraAt.y, 164.0f, 0.05f, this->cameraSpeedMod * this->cameraAtVel.y);
            Math_SmoothScaleMaxF(&this->cameraAt.z, -3380.0f, 0.05f, this->cameraSpeedMod * this->cameraAtVel.z);
            Math_SmoothScaleMaxF(&this->cameraSpeedMod, 0.01f, 1.0f, 0.001f);
            if ((this->timers[0] == 245) || (this->timers[0] == 3)) {
                SkelAnime_ChangeAnimTransitionStop(&this->skin.skelAnime, &D_0600DDB8, -8.0f);
                this->bossPGintroState = 2;
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_GANON_HORSE_NEIGH);
                if (this->timers[0] == 3) {
                    Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_VOICE);
                }
            }
            if (this->timers[0] == 192) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_HORSE_SANDDUST);
            }
            if (this->timers[0] == 212) {
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_HORSE_LAND2);
                SkelAnime_ChangeAnim(&this->skin.skelAnime, &D_0600E8A0, 0.3f, 0.0f, 5.0f, 1, -10.0f);
            }
            if (this->timers[0] == 90) {
                globalCtx->envCtx.unk_BF = 2;
                globalCtx->envCtx.unk_D6 = 0x14;
            }
            if (this->timers[0] == 100) {
                this->bossPGintroState = 3;
            }
            if (this->timers[0] == 60) {
                this->bossPGintroState = 5;
            }
            if (this->timers[0] == 130) {
                Audio_SetBGM(0x105000FF);
            }
            if (this->timers[0] == 30) {
                bossPG->eyeState = 2;
            }
            if (this->timers[0] == 35) {
                func_80078914(&audioVec, NA_SE_EN_FANTOM_EYE);
            }
            if (this->timers[0] == 130) {
                bossPG->eyeState = 1;
                func_80078914(&audioVec, NA_SE_EN_FANTOM_ST_LAUGH);
            }
            if (this->timers[0] == 20) {
                Audio_SetBGM(0x1B);
            }
            if (this->timers[0] == 2) {
                this->cameraSpeedMod = 0.0f;
                this->cutsceneState = 7;
                this->cameraEyeVel.x = fabsf(this->cameraEye.x - 194.0f);
                this->cameraEyeVel.y = fabsf(this->cameraEye.y - -26.0f);
                this->cameraEyeVel.z = fabsf(this->cameraEye.z - -3175.0f);
                this->timers[0] = 100;
                this->timers[1] = 34;
                this->cameraAtVel.x = fabsf(this->cameraAt.x - this->actor.posRot.pos.x);
                this->cameraAtVel.y = fabsf(this->cameraAt.y - ((this->actor.posRot.pos.y + 70.0f) - 20.0f));
                this->cameraAtVel.z = fabsf(this->cameraAt.z - this->actor.posRot.pos.z);
            }
            break;
        case 7:
            if (this->timers[1] == 1) {
                SkelAnime_ChangeAnim(&this->skin.skelAnime, &D_0600E8A0, 0.5f, 0.0f,
                                     SkelAnime_GetFrameCount(&D_0600E8A0.genericHeader), 1, -3.0f);
            }
            Math_SmoothScaleMaxF(&this->cameraEye.x, 194.0f, 0.1f, this->cameraSpeedMod * this->cameraEyeVel.x);
            Math_SmoothScaleMaxF(&this->cameraEye.y, -26.0f, 0.1f, this->cameraSpeedMod * this->cameraEyeVel.y);
            Math_SmoothScaleMaxF(&this->cameraEye.z, this->cameraPanZ + -3175.0f, 0.1f,
                                 this->cameraSpeedMod * this->cameraEyeVel.z);
            Math_SmoothScaleMaxF(&this->cameraPanZ, -100.0f, 0.1f, 1.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.x, this->actor.posRot.pos.x, 0.1f, this->cameraSpeedMod * 10.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.y, (this->actor.posRot.pos.y + 70.0f) - 20.0f, 0.1f,
                                 this->cameraSpeedMod * 10.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.z, this->actor.posRot.pos.z, 0.1f, this->cameraSpeedMod * 10.0f);
            Math_SmoothScaleMaxF(&this->actor.posRot.pos.y, 60.0f, 0.1f, 2.0f);
            this->actor.posRot.pos.y += 2.0f * Math_Sins(this->gallopTimer * 0x5DC);
            Math_SmoothScaleMaxF(&this->cameraSpeedMod, 1.0f, 1.0f, 0.05f);
            if (this->timers[0] == 75) {
                TitleCard_InitBossName(globalCtx, &globalCtx->actorCtx.titleCtx, SEGMENTED_TO_VIRTUAL(&D_060059A0),
                                       0xA0, 0xB4, 0x80, 0x28);
            }
            if (this->timers[0] == 0) {
                this->cutsceneState = 8;
                this->timers[0] = 200;
                this->timers[1] = 23;
                this->cameraSpeedMod = 0.0f;
                SkelAnime_ChangeAnim(&this->skin.skelAnime, &D_0600C65C, 1.0f, 0.0f,
                                     SkelAnime_GetFrameCount(&D_0600C65C.genericHeader), 3, -4.0f);
                this->bossPGintroState = 10;
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_VOICE);
                Audio_PlayActorSound2(&this->actor, NA_SE_EV_GANON_HORSE_NEIGH);
            }
            break;
        case 8:
            if (this->timers[1] == 1) {
                SkelAnime_ChangeAnim(&this->skin.skelAnime, &D_0600CB1C, 0.5f, 0.0f,
                                     SkelAnime_GetFrameCount(&D_0600CB1C.genericHeader), 3, -3.0f);
                this->bossPGintroState = 11;
            }
            if (this->timers[0] == 170) {
                func_8002DF54(globalCtx, &this->actor, 8);
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_MASIC2);
            }
            Math_SmoothScaleMaxF(&this->cameraEye.z, this->cameraPanZ + -3215.0f, 0.1f, this->cameraSpeedMod * 1.5f);
            Math_SmoothScaleMaxF(&this->cameraPanZ, -100.0f, 0.1f, 1.0f);
            Math_SmoothScaleMaxF(&this->actor.posRot.pos.z, -2915.5f, 1.0f, this->cameraSpeedMod * 10.0f);
            Math_SmoothScaleMaxF(&this->cameraSpeedMod, 1.0f, 1.0f, 0.05f);
            if ((fabsf(this->actor.posRot.pos.z - -2915.5f) < 300.0f) && !this->spawnedWarp) {
                this->spawnedWarp = true;
                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE, 14.0f,
                                   this->actor.posRot.pos.y + 50.0f, -2915.5f, 0, this->actor.shape.rot.y, 0, FHG_WARP_RETREAT);
                this->fhgFireKillWarp = true;
            }
            Math_SmoothScaleMaxF(&this->cameraAt.x, this->actor.posRot.pos.x, 0.2f, 50.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.z, this->actor.posRot.pos.z, 0.2f, 50.0f);
            osSyncPrintf("TIME %d-------------------------------------------------\n", this->timers[0]);
            if (fabsf(this->actor.posRot.pos.z - -2915.5f) < 1.0f) {
                globalCtx->envCtx.unk_BF = 0;
                globalCtx->envCtx.unk_D6 = 0x14;
                this->cutsceneState = 9;
                SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B4C8, -3.0f);
                this->bossPGintroState = 255;
                this->timers[1] = 75;
                this->timers[0] = 140;
            }
            break;
        case 9:
            EnfHG_Retreat(this, globalCtx);
            Math_SmoothScaleMaxF(&this->cameraEye.z, this->cameraPanZ + -3215.0f, 0.1f, this->cameraSpeedMod * 1.5f);
            Math_SmoothScaleMaxF(&this->cameraPanZ, -100.0f, 0.1f, 1.0f);
            Math_SmoothScaleMaxF(&this->cameraAt.y, (this->actor.posRot.pos.y + 70.0f) - 20.0f, 0.1f,
                                 this->cameraSpeedMod * 10.0f);
            if (this->timers[1] == 0) {
                camera = Gameplay_GetCamera(globalCtx, 0);
                camera->eye = this->cameraEye;
                camera->eyeNext = this->cameraEye;
                camera->at = this->cameraAt;
                func_800C08AC(globalCtx, this->cutsceneCamera, 0);
                this->cutsceneCamera = 0;
                func_80064534(globalCtx, &globalCtx->csCtx);
                func_8002DF54(globalCtx, &this->actor, 7);
                this->actionFunc = EnfHG_Retreat;
            }
            break;
    }
    if (this->cutsceneCamera != 0) {
        func_800C04D8(globalCtx, this->cutsceneCamera, &this->cameraAt, &this->cameraEye);
    }
}

void EnfHG_SetupApproach(EnfHG* this, GlobalContext* globalCtx, s16 paintingIndex) {
    s16 oppositeIndex[6] = { 3, 4, 5, 0, 1, 2 };

    SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B4C8, 0.0f);
    this->actionFunc = EnfHG_Approach;
    this->curPainting = paintingIndex;
    this->targetPainting = oppositeIndex[this->curPainting];

    osSyncPrintf("KABE NO 1 = %d\n", this->curPainting);
    osSyncPrintf("KABE NO 2 = %d\n", this->targetPainting);

    this->actor.posRot.pos.x = (1.3f * sPaintings[this->curPainting].pos.x) + 10.0f;
    this->actor.posRot.pos.y = sPaintings[this->curPainting].pos.y + 120.0f;
    this->actor.posRot.pos.z = (1.3f * sPaintings[this->curPainting].pos.z) - 3325.0f;
    this->actor.posRot.rot.y = sPaintings[this->curPainting].yRot;

    osSyncPrintf("XP1  = %f\n", this->actor.posRot.pos.x);
    osSyncPrintf("ZP1  = %f\n", this->actor.posRot.pos.z);

    this->inPaintingPos.x = (sPaintings[this->targetPainting].pos.x * 1.3f) + 10.0f;
    this->inPaintingPos.y = sPaintings[this->targetPainting].pos.y;
    this->inPaintingPos.z = (sPaintings[this->targetPainting].pos.z * 1.3f) - 3325.0f;
    this->inPaintingVelX = (fabsf(this->inPaintingPos.x - this->actor.posRot.pos.x) * 2) * 0.01f;

    if (this->inPaintingVelX < 1.0f) {
        this->inPaintingVelX = 1.0f;
    }
    this->inPaintingVelZ = (fabsf(this->inPaintingPos.z - this->actor.posRot.pos.z) * 2) * 0.01f;
    if (this->inPaintingVelZ < 1.0f) {
        this->inPaintingVelZ = 1.0f;
    }

    this->timers[0] = 100;
    this->actor.scale.x = 0.002f;
    this->actor.scale.y = 0.002f;
    this->actor.scale.z = 0.001f;
    this->approachRate = 0.0f;

    this->unk_1E8 = globalCtx->lightCtx.unk_07;
    this->unk_1EC = globalCtx->lightCtx.unk_08;
    this->unk_1F0 = globalCtx->lightCtx.unk_09;
    this->unk_1F4 = 0.0f;
    this->unk_1F8 = 0.0f;
    this->turnRot = 0;
    this->turnAround = 0;
    this->spawnedWarp = false;
}

void EnfHG_Approach(EnfHG* this, GlobalContext* globalCtx) {
    osSyncPrintf("STANDBY !!\n");
    osSyncPrintf("XP2  = %f\n", this->actor.posRot.pos.x);
    osSyncPrintf("ZP2  = %f\n", this->actor.posRot.pos.z);
    if (this->actor.params == 1) {
        this->hoofSfxPos.x = this->actor.projectedPos.x / (this->actor.scale.x * 100.0f);
        this->hoofSfxPos.y = this->actor.projectedPos.y / (this->actor.scale.x * 100.0f);
        this->hoofSfxPos.z = this->actor.projectedPos.z / (this->actor.scale.x * 100.0f);
        if ((this->gallopTimer % 8) == 0) {
            func_80078914(&this->hoofSfxPos, NA_SE_EV_HORSE_RUN);
        }
    }
    SkelAnime_FrameUpdateMatrix(&this->skin.skelAnime);
    Math_SmoothScaleMaxF(&this->actor.scale.x, 0.011499999f, 1.0f, this->approachRate);
    Math_SmoothScaleMaxF(&this->approachRate, 0.0002f, 1.0f, 0.0000015f);
    Math_SmoothScaleMaxF(&this->actor.posRot.pos.y, 60.0f, 0.1f, 1.0f);
    this->actor.scale.y = this->actor.scale.x;
    if (this->timers[0] == 0) {
        osSyncPrintf("arg_data ------------------------------------>%d\n", this->actor.params);
        if (this->actor.params != 1) {
            this->timers[0] = 140;
            this->actionFunc = EnfHG_Retreat;
            SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B4C8, 0.0f);
            this->turnAround = -0x8000;
        } else {
            this->actionFunc = EnfHG_Attack;
            Audio_PlayActorSound2(&this->actor, NA_SE_EV_GANON_HORSE_NEIGH);
            this->timers[0] = 40;
            Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE,
                               this->actor.posRot.pos.x, this->actor.posRot.pos.y + 50.0f, this->actor.posRot.pos.z, 0,
                               this->actor.shape.rot.y + 0x8000, 0, FHG_WARP_EMERGE);
            this->fhgFireKillWarp = false;
        }
    }
}

void EnfHG_Attack(EnfHG* this, GlobalContext* globalCtx) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;

    osSyncPrintf("KABE OUT !!\n");
    this->bossPGinPainting = false;
    SkelAnime_FrameUpdateMatrix(&this->skin.skelAnime);
    if (this->timers[0] != 0) {
        Math_SmoothScaleMaxF(&this->actor.scale.z, 0.011499999f, 1.0f, 0.0002f);
        if (this->timers[0] == 1) {
            this->bossPGintroState = 1;
            this->timers[1] = 50;
            SkelAnime_ChangeAnimTransitionStop(&this->skin.skelAnime, &D_0600C65C, 0.0f);
        }
        Math_SmoothScaleMaxF(&this->unk_1E8, 255.0f, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1EC, 255.0f, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1F0, 255.0f, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1F4, -60.0f, 1.0f, 5.0f);
    } else {
        Math_SmoothScaleMaxF(&this->unk_1E8, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1EC, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1F0, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
        Math_SmoothScaleMaxF(&this->unk_1F4, 0.0f, 1.0f, 5.0f);
        if (this->timers[1] == 29) {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_MASIC2);
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_VOICE);
        }
        if (this->hitTimer == 0) {
            if (this->timers[1] == 24) {
                Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE,
                                   this->actor.posRot.pos.x, (this->actor.posRot.pos.y + 100.0f) + 25.0f,
                                   this->actor.posRot.pos.z, 0, 0, 0, FHG_LIGHTNING_STRIKE);
            }
            if (this->timers[1] == 45) {
                SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B9D0, 0.0f);
            }
            if (this->timers[1] == 38) {
                this->bossPGintroState = 3;
            }
            if (this->timers[1] == 16) {
                SkelAnime_ChangeAnimTransitionStop(&this->skin.skelAnime, &D_0600CB1C, 0.0f);
                this->bossPGintroState = 4;
            }
        }
        Math_SmoothScaleMaxF(&this->actor.scale.z, 0.011499999f, 1.0f, 0.002f);
        Math_SmoothScaleMaxF(&this->actor.posRot.pos.x, this->inPaintingPos.x, 1.0f, this->inPaintingVelX);
        Math_SmoothScaleMaxF(&this->actor.posRot.pos.y, 60.0f, 0.1f, 1.0f);
        Math_SmoothScaleMaxF(&this->actor.posRot.pos.z, this->inPaintingPos.z, 1.0f, this->inPaintingVelZ);
    }
    if (this->hitTimer == 20) {
        this->actionFunc = EnfHG_Damage;
        this->spawnedWarp = false;
        SkelAnime_ChangeAnim(&this->skin.skelAnime, &D_0600CB1C, -1.0f, 0.0f,
                             SkelAnime_GetFrameCount(&D_0600CB1C.genericHeader), 2, -5.0f);
        this->timers[0] = 10;
        this->bossPGintroState = 4;
        this->damageSpeedMod = 1.0f;
    } else {
        sp54 = this->actor.posRot.pos.x - this->inPaintingPos.x;
        sp50 = this->actor.posRot.pos.z - this->inPaintingPos.z;
        sp4C = sqrtf(SQ(sp54) + SQ(sp50));
        if (sp4C < 350.0f) {
            this->bossPGinPainting = true;
        }
        if ((sp4C < 300.0f) && !this->spawnedWarp) {
            this->spawnedWarp = true;
            Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE, this->inPaintingPos.x,
                               this->actor.posRot.pos.y + 50.0f, this->inPaintingPos.z, 0, this->actor.shape.rot.y, 0,
                               FHG_WARP_RETREAT);
            this->fhgFireKillWarp = true;
        }
        osSyncPrintf("SPD X %f\n", this->inPaintingVelX);
        osSyncPrintf("SPD Z %f\n", this->inPaintingVelZ);
        osSyncPrintf("X=%f\n", sp54);
        osSyncPrintf("Z=%f\n", sp50);
        if (sp4C == 0.0f) {
            this->timers[0] = 140;
            this->actionFunc = EnfHG_Retreat;
            SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B4C8, 0.0f);
            this->bossPGintroState = 5;
        }
    }
}

void EnfHG_Damage(EnfHG* this, GlobalContext* globalCtx) {
    f32 dx;
    f32 dz;
    f32 dxz2;

    osSyncPrintf("REVISE !!\n");
    SkelAnime_FrameUpdateMatrix(&this->skin.skelAnime);
    Math_SmoothScaleMaxF(&this->unk_1E8, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
    Math_SmoothScaleMaxF(&this->unk_1EC, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
    Math_SmoothScaleMaxF(&this->unk_1F0, globalCtx->lightCtx.unk_07, 1.0f, 10.0f);
    Math_SmoothScaleMaxF(&this->unk_1F4, 0.0f, 1.0f, 5.0f);
    Math_SmoothScaleMaxF(&this->actor.scale.z, 0.011499999f, 1.0f, 0.002f);
    if (this->timers[0] != 0) {
        Math_SmoothDownscaleMaxF(&this->damageSpeedMod, 1.0f, 0.1f);
        if (this->timers[0] == 1) {
            this->targetPainting = this->curPainting;
            this->inPaintingPos.x = (sPaintings[this->targetPainting].pos.x * 1.3f) + 10.0f;
            this->inPaintingPos.y = sPaintings[this->targetPainting].pos.y;
            this->inPaintingPos.z = (sPaintings[this->targetPainting].pos.z * 1.3f) - 3325.0f;
        }
    } else {
        Math_SmoothScaleMaxF(&this->damageSpeedMod, 1.0f, 1.0f, 0.1f);
    }
    Math_SmoothScaleMaxF(&this->actor.posRot.pos.x, this->inPaintingPos.x, 1.0f,
                         this->damageSpeedMod * this->inPaintingVelX);
    Math_SmoothScaleMaxF(&this->actor.posRot.pos.y, 60.0f, 0.1f, 1.0f);
    Math_SmoothScaleMaxF(&this->actor.posRot.pos.z, this->inPaintingPos.z, 1.0f,
                         this->damageSpeedMod * this->inPaintingVelZ);
    dx = this->actor.posRot.pos.x - this->inPaintingPos.x;
    dz = this->actor.posRot.pos.z - this->inPaintingPos.z;
    dxz2 = sqrtf(SQ(dx) + SQ(dz));
    if (dxz2 < 300.0f) {
        if (!this->spawnedWarp) {
            this->spawnedWarp = true;
            Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_FHG_FIRE, this->inPaintingPos.x,
                               this->actor.posRot.pos.y + 50.0f, this->inPaintingPos.z, 0,
                               this->actor.shape.rot.y + 0x8000, 0, FHG_WARP_RETREAT);
        }
    }
    if (dxz2 == 0.0f) {
        BossGanondrof* bossPG = BOSSPG;
        this->timers[0] = 140;
        this->actionFunc = EnfHG_Retreat;
        SkelAnime_ChangeAnimTransitionRepeat(&this->skin.skelAnime, &D_0600B4C8, 0.0f);
        if (bossPG->actor.colChkInfo.health > 24) {
            this->bossPGintroState = 5;
        } else {
            bossPG->actionState = 1;
        }
        this->turnAround = -0x8000;
    }
}

void EnfHG_Retreat(EnfHG* this, GlobalContext* globalCtx) {
    s16 temp_rand1;
    s16 temp_rand2;

    osSyncPrintf("KABE IN !!\n");
    if (this->turnAround != 0) {
        Math_SmoothScaleMaxS(&this->turnRot, this->turnAround, 5, 2000);
    }
    if (this->actor.params == 1) {
        this->hoofSfxPos.x = this->actor.projectedPos.x / (this->actor.scale.x * 100.0f);
        this->hoofSfxPos.y = this->actor.projectedPos.y / (this->actor.scale.x * 100.0f);
        this->hoofSfxPos.z = this->actor.projectedPos.z / (this->actor.scale.x * 100.0f);
        if ((this->gallopTimer % 8) == 0) {
            func_80078914(&this->hoofSfxPos, NA_SE_EV_HORSE_RUN);
        }
    }
    SkelAnime_FrameUpdateMatrix(&this->skin.skelAnime);
    Math_SmoothScaleMaxF(&this->actor.scale.z, 0.001f, 1.0f, 0.001f);
    Math_SmoothScaleMaxF(&this->actor.scale.x, 0.002f, 0.05f, 0.0001f);
    Math_SmoothScaleMaxF(&this->actor.posRot.pos.y, 200.0f, 0.05f, 1.0f);
    this->actor.scale.y = this->actor.scale.x;
    if ((this->timers[0] == 80) && (this->actor.params == 1)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_FANTOM_LAUGH);
    }
    if (this->timers[0] == 0) {
        BossGanondrof* bossPG = BOSSPG;
        if (this->actor.params != 1) {
            this->killActor = true;
            bossPG->killActor = true;
        } else if (bossPG->actionState != 0) {
            this->actionFunc = EnfHG_Done;
            this->actor.draw = NULL;
        } else {
            temp_rand1 = Math_Rand_ZeroOne() * 5.99f;
            EnfHG_SetupApproach(this, globalCtx, temp_rand1);
            do {
                temp_rand2 = Math_Rand_ZeroOne() * 5.99f;
            } while (temp_rand2 == temp_rand1);
            osSyncPrintf("ac1 = %x `````````````````````````````````````````````````\n",
                         Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_BOSS_GANONDROF,
                                            this->actor.posRot.pos.x, this->actor.posRot.pos.y,
                                            this->actor.posRot.pos.z, 0, 0, 0, temp_rand2 + 0xA));
        }
    }
}

void EnfHG_Done(EnfHG* this, GlobalContext* globalCtx) {
    this->bossPGinPainting = false;
}

void EnfHG_Update(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnfHG* this = THIS;
    u8 i;

    if (this->killActor) {
        Actor_Kill(&this->actor);
        return;
    }
    this->gallopTimer++;
    this->bossPGinPainting = true;
    for (i = 0; i < 5; i++) {
        DECR(this->timers[i]);
    }

    this->actionFunc(this, globalCtx);

    DECR(this->hitTimer);

    this->actor.posRot2.pos = this->actor.posRot.pos;
    this->actor.posRot2.pos.y += 70.0f;
    this->actor.shape.rot.y = this->actor.posRot.rot.y;

    this->actor.shape.unk_08 = Math_Sins(this->hitTimer * 0x9000) * 700.0f * (this->hitTimer / 20.0f);
    this->actor.shape.rot.z = (s16)(Math_Sins(this->hitTimer * 0x7000) * 1500.0f) * (this->hitTimer / 20.0f);
}

void EnfHG_Noop(Actor* thisx, GlobalContext* globalCtx, PSkinAwb* skin) {
}

void EnfHG_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnfHG* this = THIS;
    BossGanondrof* bossPG = BOSSPG;
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_fhg.c", 2439);
    func_80093D18(globalCtx->state.gfxCtx);

    oGfxCtx->polyOpa.p = (((bossPG->invincibilityTimer & 4) != 0) && (bossPG->actionState == 0))
                             ? Gfx_SetFog(oGfxCtx->polyOpa.p, 0xFF, 50, 0, 0, 900, 1099)
                             : Gfx_SetFog(oGfxCtx->polyOpa.p, (u32)this->unk_1E8, (u32)this->unk_1EC,
                                          (u32)this->unk_1F0, 0, (s32)this->unk_1F4 + 995, (s32)this->unk_1F8 + 1000);
    func_800A6330(&this->actor, globalCtx, &this->skin, EnfHG_Noop, 0x23);
    oGfxCtx->polyOpa.p = func_800BC8A0(globalCtx, oGfxCtx->polyOpa.p);
    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_fhg.c", 2480);
}
