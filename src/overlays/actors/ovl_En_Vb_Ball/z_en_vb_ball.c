/*
 * File: z_en_vb_ball.c
 * Overlay: ovl_En_Vb_Ball
 * Description: Volvagia's rocks and bones
 */

#include "z_en_vb_ball.h"
#include "../ovl_Boss_Fd/z_boss_fd.h"

#define FLAGS 0x00000030

#define THIS ((EnVbBall*)thisx)

#define BOSSFD ((BossFd*)this->actor.parent)

void EnVbBall_Init(Actor* thisx, GlobalContext* globalCtx);
void EnVbBall_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnVbBall_Update(Actor* thisx, GlobalContext* globalCtx);
void EnVbBall_Draw(Actor* thisx, GlobalContext* globalCtx);

extern Gfx D_06009F20[];
extern Gfx D_0600B2F8[];

const ActorInit En_Vb_Ball_InitVars = {
    0,
    ACTORTYPE_BOSS,
    FLAGS,
    OBJECT_FD,
    sizeof(EnVbBall),
    (ActorFunc)EnVbBall_Init,
    (ActorFunc)EnVbBall_Destroy,
    (ActorFunc)EnVbBall_Update,
    (ActorFunc)EnVbBall_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    { 0x0A, 0x11, 0x09, 0x39, 0x10, 0x01 },
    { 0x06, { 0x00100700, 0x00, 0x20 }, { 0x00100700, 0x00, 0x00 }, 0x01, 0x01, 0x01 },
    { 0x0014, 0x0001E, 0x000A, 0x0000, 0x0000, 0x0000 }
};

void EnVbBall_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnVbBall* this = THIS;
    s32 pad2;
    f32 angle;

    if (this->actor.params >= 200) { // Volvagia's bones
        this->yRotVel = Math_Rand_CenteredFloat(0x300);
        this->xRotVel = Math_Rand_CenteredFloat(0x300);
        angle = Math_atan2f(this->actor.posRot.pos.x, this->actor.posRot.pos.z);
        this->actor.velocity.y = Math_Rand_ZeroFloat(3.0f);
        this->actor.velocity.x = 2.0f * sinf(angle);
        this->actor.velocity.z = 2.0f * cosf(angle);
        this->actor.gravity = -0.8f;
    } else { // Volvagia's rocks
        Collider_InitCylinder(globalCtx, &this->collider);
        Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
        Actor_SetScale(&this->actor, this->actor.posRot.rot.z / 10000.0f);
        this->collider.dim.radius = this->actor.scale.y * 3000.0f;
        this->collider.dim.height = this->actor.scale.y * 5000.0f;
        this->collider.dim.yShift = this->actor.scale.y * -2500.0f;
        this->xRotVel = Math_Rand_CenteredFloat(0x2000);
        this->yRotVel = Math_Rand_CenteredFloat(0x2000);
        this->shadowSize = this->actor.scale.y * 68.0f;
    }
}

void EnVbBall_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnVbBall* this = THIS;

    if (this->actor.params < 200) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }
}

void EnVbBall_SpawnDebris(GlobalContext* globalCtx, BossFdParticle* particle, Vec3f* position, Vec3f* velocity,
                          Vec3f* acceleration, f32 scale) {
    s16 i;

    for (i = 0; i < 180; i++, particle++) {
        if (particle->type == FD_NULL) {
            particle->type = FD_DEBRIS;
            particle->pos = *position;
            particle->vel = *velocity;
            particle->accel = *acceleration;
            particle->scale = scale / 1000.0f;
            particle->xRot = Math_Rand_ZeroFloat(100.0f);
            particle->yRot = Math_Rand_ZeroFloat(100.0f);
            break;
        }
    }
}

void EnVbBall_SpawnDust(GlobalContext* globalCtx, BossFdParticle* particle, Vec3f* position, Vec3f* velocity,
                        Vec3f* acceleration, f32 scale) {
    s16 i;

    for (i = 0; i < 180; i++, particle++) {
        if (particle->type == FD_NULL) {
            particle->type = FD_DUST;
            particle->pos = *position;
            particle->vel = *velocity;
            particle->accel = *acceleration;
            particle->timer2 = 0;
            particle->scale = scale / 400.0f;
            break;
        }
    }
}

void EnVbBall_UpdateBones(EnVbBall* this, GlobalContext* globalCtx) {
    BossFd* bossFd = BOSSFD;
    f32 pad2;
    f32 pad1;
    f32 angle;
    s16 i;

    func_8002E4B4(globalCtx, &this->actor, 50.0f, 50.0f, 100.0f, 4);
    if ((this->actor.bgCheckFlags & 1) && (this->actor.velocity.y <= 0.0f)) {
        this->xRotVel = Math_Rand_CenteredFloat((f32)0x4000);
        this->yRotVel = Math_Rand_CenteredFloat((f32)0x4000);
        angle = Math_atan2f(this->actor.posRot.pos.x, this->actor.posRot.pos.z);
        this->actor.velocity.x = sinf(angle) * 10.0f;
        this->actor.velocity.z = cosf(angle) * 10.0f;
        this->actor.velocity.y *= -0.5f;
        if (this->actor.params & 1) {
            Audio_PlaySoundGeneral(NA_SE_EN_VALVAISA_LAND, &this->actor.projectedPos, 4, &D_801333E0, &D_801333E0,
                                   &D_801333E8);
        }
        for (i = 0; i < 10; i++) {
            Vec3f dustVel = { 0.0f, 0.0f, 0.0f };
            Vec3f dustAcc = { 0.0f, 0.0f, 0.0f };
            Vec3f dustPos;

            dustVel.x = Math_Rand_CenteredFloat(8.0f);
            dustVel.y = Math_Rand_ZeroFloat(1.0f);
            dustVel.z = Math_Rand_CenteredFloat(8.0f);

            dustAcc.y = 0.3f;

            dustPos.x = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.x;
            dustPos.y = this->actor.groundY + 10.0f;
            dustPos.z = Math_Rand_CenteredFloat(20.0f) + this->actor.posRot.pos.z;

            EnVbBall_SpawnDust(globalCtx, bossFd->particles, &dustPos, &dustVel, &dustAcc,
                               Math_Rand_ZeroFloat(80.0f) + 200.0f);
        }
    }
    if (this->actor.posRot.pos.y < 50.0f) {
        Actor_Kill(&this->actor);
    }
}

void EnVbBall_Update(Actor* thisx, GlobalContext* globalCtx) {
    GlobalContext* globalCtx2 = globalCtx;
    EnVbBall* this = THIS;
    BossFd* bossFd = BOSSFD;
    f32 radius;
    f32 pad2;
    s16 spawnNum;
    s16 i;

    this->unkTimer2++;
    DECR(this->unkTimer1);
    this->actor.shape.rot.x += (s16)this->xRotVel;
    this->actor.shape.rot.y += (s16)this->yRotVel;
    this->actor.velocity.y += -1.0f;
    this->actor.gravity = -1.0f;
    func_8002D7EC(&this->actor);
    if (this->actor.params >= 200) {
        EnVbBall_UpdateBones(this, globalCtx2);
    } else {
        Math_SmoothScaleMaxF(&this->shadowOpacity, 175.0f, 1.0f, 40.0f);
        radius = this->actor.scale.y * 1700.0f;
        this->actor.posRot.pos.y -= radius;
        func_8002E4B4(globalCtx2, &this->actor, 50.0f, 50.0f, 100.0f, 4);
        this->actor.posRot.pos.y += radius;
        if ((this->actor.bgCheckFlags & 1) && (this->actor.velocity.y <= 0.0f)) {
            if ((this->actor.params == 100) || (this->actor.params == 101)) {
                Actor_Kill(&this->actor);
                if (this->actor.params == 100) {
                    func_80033E88(&this->actor, globalCtx2, 5, 0xA);
                }
                if (this->actor.params == 100) {
                    spawnNum = 2;
                } else {
                    spawnNum = 2;
                }
                for (i = 0; i < spawnNum; i++) {
                    Vec3f spawnOffset;
                    EnVbBall* newActor;
                    f32 xRotVel;
                    if (this->actor.params == 100) {
                        spawnOffset.x = Math_Rand_CenteredFloat(13.0f);
                        spawnOffset.y = Math_Rand_ZeroFloat(5.0f) + 6.0f;
                        spawnOffset.z = Math_Rand_CenteredFloat(13);
                    } else {
                        spawnOffset.x = Math_Rand_CenteredFloat(10.0f);
                        spawnOffset.y = Math_Rand_ZeroFloat(3.0f) + 4.0f;
                        spawnOffset.z = Math_Rand_CenteredFloat(10.0f);
                    }
                    newActor = (EnVbBall*)Actor_SpawnAsChild(&globalCtx2->actorCtx, &this->actor, globalCtx2,
                                                             ACTOR_EN_VB_BALL, this->actor.posRot.pos.x + spawnOffset.x,
                                                             this->actor.posRot.pos.y + spawnOffset.y,
                                                             this->actor.posRot.pos.z + spawnOffset.z, 0, 0,
                                                             this->actor.posRot.rot.z * 0.5f, this->actor.params + 1);
                    if (newActor != NULL) {
                        if ((i == 0) && (this->actor.params == 100)) {
                            Audio_PlaySoundGeneral(NA_SE_EN_VALVAISA_ROCK, &newActor->actor.projectedPos, 4,
                                                   &D_801333E0, &D_801333E0, &D_801333E8);
                        }
                        newActor->actor.parent = &BOSSFD->actor;
                        newActor->actor.velocity = spawnOffset;
                        newActor->yRotVel = 0.0f;
                        xRotVel = sqrtf(SQ(spawnOffset.x) + SQ(spawnOffset.z));
                        newActor->xRotVel = 0x1000 / 10.0f * xRotVel;
                        newActor->actor.shape.rot.y = Math_atan2f(spawnOffset.x, spawnOffset.z) * ((f32)0x8000 / M_PI);
                        newActor->shadowOpacity = 200.0f;
                    }
                }
                for (i = 0; i < 15; i++) {
                    Vec3f debrisVel1 = { 0.0f, 0.0f, 0.0f };
                    Vec3f debrisAcc1 = { 0.0f, -1.0f, 0.0f };
                    Vec3f debrisPos1;

                    debrisVel1.x = Math_Rand_CenteredFloat(25.0f);
                    debrisVel1.y = Math_Rand_ZeroFloat(5.0f) + 8;
                    debrisVel1.z = Math_Rand_CenteredFloat(25.0f);

                    debrisPos1.x = Math_Rand_CenteredFloat(10.0f) + this->actor.posRot.pos.x;
                    debrisPos1.y = Math_Rand_CenteredFloat(10.0f) + this->actor.posRot.pos.y;
                    debrisPos1.z = Math_Rand_CenteredFloat(10.0f) + this->actor.posRot.pos.z;

                    EnVbBall_SpawnDebris(globalCtx2, bossFd->particles, &debrisPos1, &debrisVel1, &debrisAcc1,
                                         (s16)Math_Rand_ZeroFloat(12.0f) + 15);
                }
                for (i = 0; i < 10; i++) {
                    Vec3f dustVel = { 0.0f, 0.0f, 0.0f };
                    Vec3f dustAcc = { 0.0f, 0.0f, 0.0f };
                    Vec3f dustPos;

                    dustVel.x = Math_Rand_CenteredFloat(8.0f);
                    dustVel.y = Math_Rand_ZeroFloat(1.0f);
                    dustVel.z = Math_Rand_CenteredFloat(8.0f);

                    dustAcc.y = 1.0f / 2;

                    dustPos.x = Math_Rand_CenteredFloat(30.0f) + this->actor.posRot.pos.x;
                    dustPos.y = Math_Rand_CenteredFloat(30.0f) + this->actor.posRot.pos.y;
                    dustPos.z = Math_Rand_CenteredFloat(30.0f) + this->actor.posRot.pos.z;

                    EnVbBall_SpawnDust(globalCtx2, bossFd->particles, &dustPos, &dustVel, &dustAcc,
                                       Math_Rand_ZeroFloat(100.0f) + 350.0f);
                }
            } else {
                for (i = 0; i < 5; i++) {
                    Vec3f debrisVel2 = { 0.0f, 0.0f, 0.0f };
                    Vec3f debrisAcc2 = { 0.0f, -1.0f, 0.0f };
                    Vec3f debrisPos2;

                    debrisVel2.x = Math_Rand_CenteredFloat(10.0f);
                    debrisVel2.y = Math_Rand_ZeroFloat(3.0f) + 3.0f;
                    debrisVel2.z = Math_Rand_CenteredFloat(10.0f);

                    debrisPos2.x = Math_Rand_CenteredFloat(5.0f) + this->actor.posRot.pos.x;
                    debrisPos2.y = Math_Rand_CenteredFloat(5.0f) + this->actor.posRot.pos.y;
                    debrisPos2.z = Math_Rand_CenteredFloat(5.0f) + this->actor.posRot.pos.z;

                    EnVbBall_SpawnDebris(globalCtx2, bossFd->particles, &debrisPos2, &debrisVel2, &debrisAcc2,
                                         (s16)Math_Rand_ZeroFloat(12.0f) + 15);
                }
                Actor_Kill(&this->actor);
            }
        }
        if (this->collider.base.atFlags & 2) {
            Player* player = PLAYER;
            this->collider.base.atFlags &= ~2;
            Audio_PlayActorSound2(&player->actor, NA_SE_PL_BODY_HIT);
        }
        Collider_CylinderUpdate(&this->actor, &this->collider);
        CollisionCheck_SetAT(globalCtx2, &globalCtx2->colChkCtx, &this->collider.base);
    }
}

void EnVbBall_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnVbBall* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_vb_ball.c", 604);
    if (1) {} // needed for match
    func_80093D18(globalCtx->state.gfxCtx);
    gSPMatrix(oGfxCtx->polyOpa.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_vb_ball.c", 607),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    if (this->actor.params >= 200) {
        gSPDisplayList(oGfxCtx->polyOpa.p++, SEGMENTED_TO_VIRTUAL(D_0600B2F8));
    } else {
        gSPDisplayList(oGfxCtx->polyOpa.p++, SEGMENTED_TO_VIRTUAL(D_06009F20));
        func_80094044(globalCtx->state.gfxCtx);

        gDPSetPrimColor(oGfxCtx->polyXlu.p++, 0, 0, 0, 0, 0, (s8)this->shadowOpacity);
        Matrix_Translate(this->actor.posRot.pos.x, 100.0f, this->actor.posRot.pos.z, MTXMODE_NEW);
        Matrix_Scale(this->shadowSize, 1.0f, this->shadowSize, MTXMODE_APPLY);
        gSPMatrix(oGfxCtx->polyXlu.p++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_vb_ball.c", 626),
                  G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(oGfxCtx->polyXlu.p++, SEGMENTED_TO_VIRTUAL(D_04049210));
    }

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_vb_ball.c", 632);
}
