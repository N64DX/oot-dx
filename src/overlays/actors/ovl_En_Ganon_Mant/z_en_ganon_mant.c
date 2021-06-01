/*
 * File: z_en_ganon_mant.c
 * Overlay: ovl_En_Ganon_Mant
 * Description: Ganondorf's Cape
 */

#include "z_en_ganon_mant.h"
#include "overlays/actors/ovl_Boss_Ganon/z_boss_ganon.h"

#define FLAGS 0x00000030

#define THIS ((EnGanonMant*)thisx)

void EnGanonMant_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGanonMant_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGanonMant_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGanonMant_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit En_Ganon_Mant_InitVars = {
    ACTOR_EN_GANON_MANT,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnGanonMant),
    (ActorFunc)EnGanonMant_Init,
    (ActorFunc)EnGanonMant_Destroy,
    (ActorFunc)EnGanonMant_Update,
    (ActorFunc)EnGanonMant_Draw,
};

s16 D_80A24D20[] = {
    0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0000, 0x0000,
};

s16 D_80A24D34[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0002, 0x0002,
    0x0002, 0x0001, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

s16 D_80A24D54[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

typedef struct {
    s16* unk_0;
    s16 unk_4;
} Struct_80A24D64; // size = 0x8

Struct_80A24D64 D_80A24D64[] = {
    { D_80A24D20, ARRAY_COUNT(D_80A24D20) },
    { D_80A24D20, ARRAY_COUNT(D_80A24D20) },
    { D_80A24D34, ARRAY_COUNT(D_80A24D34) - 1 },
    { D_80A24D54, ARRAY_COUNT(D_80A24D54) - 1 },
};

f32 D_80A24D84[] = {
    0.0f, 1.0f, 0.5f, 0.25f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};

f32 D_80A24DD0[] = {
    0.0f, 1.0f, 0.9f, 0.8f, 0.7f, 0.6f, 0.5f, 0.4f, 0.3f, 0.2f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
};

f32 D_80A24E18[] = {
    0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f,
};

u16 D_80A24E4C[] = {
    0x000B, 0x0017, 0x0023, 0x002F, 0x003B, 0x0047, 0x0053, 0x005F, 0x006B, 0x0077, 0x0083, 0x008F, 0x000A, 0x0016,
    0x0022, 0x002E, 0x003A, 0x0046, 0x0052, 0x005E, 0x006A, 0x0076, 0x0082, 0x008E, 0x0009, 0x0015, 0x0021, 0x002D,
    0x0039, 0x0045, 0x0051, 0x005D, 0x0069, 0x0075, 0x0081, 0x008D, 0x0008, 0x0014, 0x0020, 0x002C, 0x0038, 0x0044,
    0x0050, 0x005C, 0x0068, 0x0074, 0x0080, 0x008C, 0x0007, 0x0013, 0x001F, 0x002B, 0x0037, 0x0043, 0x004F, 0x005B,
    0x0067, 0x0073, 0x007F, 0x008B, 0x0006, 0x0012, 0x001E, 0x002A, 0x0036, 0x0042, 0x004E, 0x005A, 0x0066, 0x0072,
    0x007E, 0x008A, 0x0005, 0x0011, 0x001D, 0x0029, 0x0035, 0x0041, 0x004D, 0x0059, 0x0065, 0x0071, 0x007D, 0x0089,
    0x0004, 0x0010, 0x001C, 0x0028, 0x0034, 0x0040, 0x004C, 0x0058, 0x0064, 0x0070, 0x007C, 0x0088, 0x0003, 0x000F,
    0x001B, 0x0027, 0x0033, 0x003F, 0x004B, 0x0057, 0x0063, 0x006F, 0x007B, 0x0087, 0x0002, 0x000E, 0x001A, 0x0026,
    0x0032, 0x003E, 0x004A, 0x0056, 0x0062, 0x006E, 0x007A, 0x0086, 0x0001, 0x000D, 0x0019, 0x0025, 0x0031, 0x003D,
    0x0049, 0x0055, 0x0061, 0x006D, 0x0079, 0x0085, 0x0000, 0x000C, 0x0018, 0x0024, 0x0030, 0x003C, 0x0048, 0x0054,
    0x0060, 0x006C, 0x0078, 0x0084, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

#include "ovl_en_ganon_mant_gfx.c"

void EnGanonMant_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnGanonMant* this = THIS;

    this->actor.flags &= ~1;
}

void EnGanonMant_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

/**
 * Randomly zeros portions of the cloak texture
 */
void func_80A23D84(EnGanonMant* this) {
    s32 pad;
    s16 i;
    s16 txi;
    s16 tyi;
    s16 texIdx;
    f32 tx = Rand_ZeroFloat(32.0f);
    f32 ty = Rand_ZeroFloat(64.0f);
    f32 randAngle = Rand_ZeroFloat(2 * M_PI);
    f32 randSin = sinf(randAngle);
    f32 randCos = cosf(randAngle);
    Struct_80A24D64* coeffs = &D_80A24D64[(s16)Rand_ZeroFloat(3.99f)];
    s16 count = coeffs->unk_4;
    s16* data = coeffs->unk_0;

    for (i = 0; i < count; i++) {
        if ((0.0f <= tx && tx < 32.0f) && (0.0f <= ty && ty < 64.0f)) {
            for (txi = 0; txi <= data[i]; txi++) {
                texIdx = 0;
                if (1) {}
                for (tyi = 0; tyi <= data[i]; tyi++) {
                    texIdx = (s16)((s16)tx + ((s16)ty * 32)) + ((s16)txi + ((s16)tyi * 32));
                    if (texIdx < ARRAY_COUNT(D_80A24F78)) {
                        D_80A24F78[texIdx] = 0;
                    }
                }
            }
        }
        tx += randSin;
        ty += randCos;
    }

    for (i = 0; i < 4; i++) {
        this->unk_14C[(s16)Rand_ZeroFloat(11.9f)].unk_1B0[(s16)Rand_ZeroFloat(11.9f)] = 1;
    }
}

#ifdef NON_MATCHING
// Stack only
void func_80A23FE0(GlobalContext* globalCtx, EnGanonMant* this, Vec3f* root, Vec3f* arg3, Vec3f* arg4, Vec3f* arg5,
                   Vec3f* arg6, s16 arg7) {
    f32 temp_1;
    f32 temp_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    s16 i;
    f32 unk_16C8;

    f32 spAC;
    Vec3f spA0;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;

    spA0.y = 0;
    if (this->actor.params == 0x23) {
        spA0.x = 0.0f;
        spA0.z = -30.0f;
        Matrix_RotateY(BINANG_TO_RAD(this->actor.shape.rot.y), MTXMODE_NEW);
        Matrix_MultVec3f(&spA0, &sp94);
        for (i = 0; i < 0xC; i++) {
            (arg3 + i)->x += sp94.x;
            (arg3 + i)->z += sp94.z;
        }
        spAC = 6.5f;
    } else {
        spAC = 9.5f;
    }

    for (i = 0; i < 12; i++, arg3++, arg6++, arg5++, arg4++) {
        if (i == 0) {
            arg3->x = root->x;
            arg3->y = root->y;
            arg3->z = root->z;
        } else {
            Math_ApproachZeroF(&arg6->x, 1.0f, 0.1f);
            Math_ApproachZeroF(&arg6->y, 1.0f, 0.1f);
            Math_ApproachZeroF(&arg6->z, 1.0f, 0.1f);
            spA0.x = 0;
            spA0.z = (this->unk_16B0 + (sinf((arg7 * (2 * M_PI)) / 2.1f) * this->unk_16B4)) * D_80A24D84[i];
            Matrix_RotateY(this->unk_16CC, MTXMODE_NEW);
            Matrix_MultVec3f(&spA0, &sp88);
            spA0.x = cosf((arg7 * M_PI) / 11.0f) * this->unk_16B8 * D_80A24DD0[i];
            spA0.z = 0;
            Matrix_MultVec3f(&spA0, &sp7C);
            unk_16C8 = this->unk_16C8;
            temp_f20 = ((arg3->x + arg6->x) - (arg3 - 1)->x) + (sp88.x + sp7C.x);
            temp_f24 = ((arg3->y + arg6->y) - (arg3 - 1)->y) + unk_16C8;
            temp_f22 = ((arg3->z + arg6->z) - (arg3 - 1)->z) + (sp88.z + sp7C.z);
            temp_f26 = Math_Atan2F(temp_f22, temp_f20);
            temp_f20 = -Math_Atan2F(sqrtf(SQ(temp_f20) + SQ(temp_f22)), temp_f24);
            (arg5 - 1)->x = temp_f20;
            spA0.x = 0;
            spA0.z = spAC;
            Matrix_RotateY(temp_f26, MTXMODE_NEW);
            Matrix_RotateX(temp_f20, MTXMODE_APPLY);
            Matrix_MultVec3f(&spA0, &sp94);

            temp_f20 = arg3->x;
            temp_f22 = arg3->z;
            temp_f24 = arg3->y;

            arg3->x = (arg3 - 1)->x + sp94.x;
            arg3->y = (arg3 - 1)->y + sp94.y;
            arg3->z = (arg3 - 1)->z + sp94.z;

            if (sqrtf(SQ(arg3->x - this->actor.world.pos.x) + SQ(arg3->z - this->actor.world.pos.z)) <
                (D_80A24E18[i] * this->unk_16D0)) {
                temp_f12 = Math_Atan2F(arg3->z - this->actor.world.pos.z, arg3->x - this->actor.world.pos.x);
                spA0.z = this->unk_16D0 * D_80A24E18[i];
                Matrix_RotateY(temp_f12, MTXMODE_NEW);
                Matrix_MultVec3f(&spA0, &sp94);
                arg3->x = this->actor.world.pos.x + sp94.x;
                arg3->z = this->actor.world.pos.z + sp94.z;
            }

            if (arg3->y < this->unk_16AC) {
                arg3->y = this->unk_16AC;
            }

            arg6->x = ((arg3->x - temp_f20) * 80.0f) / 100.0f;
            arg6->y = ((arg3->y - temp_f24) * 80.0f) / 100.0f;
            arg6->z = ((arg3->z - temp_f22) * 80.0f) / 100.0f;

            if (this->actor.params != 0x23) {
                if (5.0f < arg6->x) {
                    arg6->x = 5.0f;
                } else if (arg6->x < -5.0f) {
                    arg6->x = -5.0f;
                }
                if (5.0f < arg6->y) {
                    arg6->y = 5.0f;
                } else if (arg6->y < -5.0f) {
                    arg6->y = -5.0f;
                }
                if (5.0f < arg6->z) {
                    arg6->z = 5.0f;
                } else if (arg6->z < -5.0f) {
                    arg6->z = -5.0f;
                }
            }

            temp_1 = arg3->x - arg4->x;
            temp_2 = arg3->z - arg4->z;
            (arg5 - 1)->y = Math_Atan2F(temp_2, temp_1);
        }
    }
    arg5[11].y = arg5[10].y;
    arg5[11].x = arg5[10].x;
}
#else
void func_80A23FE0(GlobalContext* globalCtx, EnGanonMant* this, Vec3f* root, Vec3f* arg3, Vec3f* arg4, Vec3f* arg5,
                   Vec3f* arg6, s16 arg7);
#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_En_Ganon_Mant/func_80A23FE0.s")
#endif

void func_80A245A4(EnGanonMant* this) {
    s16 i;
    Vtx* vtx;
    Vtx* vertices;
    MantSub14C* sub;
    s16 j;
    s16 k;
    Vec3f up;
    Vec3f normal;

    if (this->frameTimer % 2 != 0) {
        vertices = (Vtx*)SEGMENTED_TO_VIRTUAL(D_80A26778);
    } else {
        vertices = (Vtx*)SEGMENTED_TO_VIRTUAL(D_80A27578);
    }
    up.x = 0.0f;
    up.y = 30.0f;
    up.z = 0.0f;

    sub = &this->unk_14C[0];
    for (i = 0; i < ARRAY_COUNT(sub->unk_C); i++, sub++) {
        for (j = 0, k = 0; j < ARRAY_COUNT(sub->unk_C); j++, k += ARRAY_COUNT(sub->unk_C)) {
            vtx = &vertices[D_80A24E4C[i + k]];
            vtx->n.ob[0] = sub->unk_C[j].x;
            vtx->n.ob[1] = sub->unk_C[j].y;
            vtx->n.ob[2] = sub->unk_C[j].z;
            Matrix_RotateY(sub->unk_90[j].y, MTXMODE_NEW);
            Matrix_RotateX(sub->unk_90[j].x, MTXMODE_APPLY);
            Matrix_MultVec3f(&up, &normal);
            vtx->n.n[0] = normal.x;
            vtx->n.n[1] = normal.y;
            vtx->n.n[2] = normal.z;
        }
    }
}

void EnGanonMant_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnGanonMant* this = THIS;
    BossGanon* ganon = (BossGanon*)this->actor.parent;

    this->unk_1705 = 1;
    this->frameTimer++;

    if (this->unk_16C0 == 0.0f) {
        // lol
    } else {
        this->unk_16C0 -= 1.0f;
    }
    if (this->unk_16BC != 0.0f) {
        this->unk_16BC -= 1.0f;
    }
    if (this->unk_16C4 != 0.0f) {
        this->unk_16C4 -= 1.0f;
    }

    this->actor.shape.rot.y = ganon->actor.shape.rot.y;

    if (this->unk_1704 != 0) {
        this->unk_1704--;
        func_80A23D84(this);
    }
}

void func_80A24884(GlobalContext* globalCtx, EnGanonMant* this) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_en_ganon_mant.c", 564);

    Matrix_Translate(0.0f, 0.0f, 0.0f, MTXMODE_NEW);

    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_en_ganon_mant.c", 572),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    // set texture
    gSPDisplayList(POLY_OPA_DISP++, D_80A27078);

    // set vertices
    if (this->frameTimer % 2 != 0) {
        gSPSegment(POLY_OPA_DISP++, 0x0C, D_80A26778);
    } else {
        gSPSegment(POLY_OPA_DISP++, 0x0C, D_80A27578);
    }

    gSPDisplayList(POLY_OPA_DISP++, D_80A27128); // draw vertices

    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_en_ganon_mant.c", 584);
}

void EnGanonMant_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnGanonMant* this = THIS;
    f32 xDiff;
    f32 pitch;
    Vec3f spC0;
    Vec3f spB4;
    f32 zDiff;
    f32 temp_f22_2;
    f32 yDiff;
    f32 yaw;
    Vec3f* phi_v0;
    Vec3f* phi_v1;
    s16 i;
    Vec3f sp8C;
    s16 idx;

    if (this->unk_1705 != 0) {
        if (this->unk_16BC != 0.0f) {
            phi_v0 = &this->unk_16D4;
            phi_v1 = &this->unk_16F8;
            this->unk_16C8 = -13.0f;
        } else if (this->unk_16C0 != 0.0f) {
            phi_v0 = &this->unk_16EC;
            phi_v1 = &this->unk_16E0;
            this->unk_16C8 = -13.0f;
        } else if (this->unk_16C4 != 0.0f) {
            phi_v0 = &this->unk_16EC;
            phi_v1 = &this->unk_16F8;
            this->unk_16C8 = -3.0f;
        } else {
            phi_v0 = &this->unk_16D4;
            phi_v1 = &this->unk_16E0;
        }

        xDiff = phi_v1->x - phi_v0->x;
        yDiff = phi_v1->y - phi_v0->y;
        zDiff = phi_v1->z - phi_v0->z;

        sp8C.x = phi_v0->x + (xDiff * 0.5f);
        sp8C.y = phi_v0->y + (yDiff * 0.5f);
        sp8C.z = phi_v0->z + (zDiff * 0.5f);

        yaw = Math_Atan2F(zDiff, xDiff);
        pitch = -Math_Atan2F(sqrtf(SQ(xDiff) + SQ(zDiff)), yDiff);
        temp_f22_2 = sqrtf(SQ(xDiff) + SQ(yDiff) + SQ(zDiff)) * 0.5f;

        Matrix_RotateY(yaw, MTXMODE_NEW);
        Matrix_RotateX(pitch, MTXMODE_APPLY);
        this->unk_16CC = yaw - M_PI / 2.0f;

        for (i = 0; i < 12; i++) {
            Matrix_Push();

            spC0.x = sinf((i * M_PI) / 11.0f) * temp_f22_2;
            spC0.y = 0;
            spC0.z = -cosf((i * M_PI) / 11.0f) * temp_f22_2;
            Matrix_MultVec3f(&spC0, &spB4);
            this->unk_14C[i].rootPos.x = sp8C.x + spB4.x;
            this->unk_14C[i].rootPos.y = sp8C.y + spB4.y;
            this->unk_14C[i].rootPos.z = sp8C.z + spB4.z;

            idx = i + 1;
            if (idx >= 12) {
                idx = i - 1;
            }

            func_80A23FE0(globalCtx, this, &this->unk_14C[i].rootPos, this->unk_14C[i].unk_C,
                          this->unk_14C[idx].unk_C, &this->unk_14C[i].unk_90[0], &this->unk_14C[i].unk_120[0],
                          i);
            Matrix_Pop();
        }
        func_80A245A4(this);
        this->unk_1705 = 0;
    }

    func_80A24884(globalCtx, this);
}
