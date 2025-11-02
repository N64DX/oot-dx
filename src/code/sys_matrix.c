#include "libc64/math64.h"
#include "gfx.h"
#if DEBUG_FEATURES
#include "fault.h"
#endif
#include "printf.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z_lib.h"
#include "game.h"
#include "skin_matrix.h"

// clang-format off
Mtx gIdentityMtx = gdSPDefMtx(
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
);

MtxF gIdentityMtxF = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f,
};
// clang-format on

MtxF* sMatrixStack;   // "Matrix_stack"
MtxF* sCurrentMatrix; // "Matrix_now"

void Matrix_Init(GameState* gameState) {
    sCurrentMatrix = GAME_STATE_ALLOC(gameState, 20 * sizeof(MtxF), "../sys_matrix.c", 153);
    sMatrixStack = sCurrentMatrix;
}

void Matrix_Push(void) {
    Matrix_MtxFCopy(sCurrentMatrix + 1, sCurrentMatrix);
    sCurrentMatrix++;
}

void Matrix_Pop(void) {
    sCurrentMatrix--;
    ASSERT(sCurrentMatrix >= sMatrixStack, "Matrix_now >= Matrix_stack", "../sys_matrix.c", 176);
}

void Matrix_Get(MtxF* dest) {
    Matrix_MtxFCopy(dest, sCurrentMatrix);
}

void Matrix_Put(MtxF* src) {
    Matrix_MtxFCopy(sCurrentMatrix, src);
}

MtxF* Matrix_GetCurrent(void) {
    return sCurrentMatrix;
}

void Matrix_Mult(MtxF* mf, u8 mode) {
    MtxF* cmf = Matrix_GetCurrent();

    if (mode == MTXMODE_APPLY) {
        SkinMatrix_MtxFMtxFMult(cmf, mf, cmf);
    } else {
        Matrix_MtxFCopy(sCurrentMatrix, mf);
    }
}

void Matrix_Translate(f32 x, f32 y, f32 z, u8 mode) {
    MtxF* cmf = sCurrentMatrix;
    f32 tx;
    f32 ty;

    if (mode == MTXMODE_APPLY) {
        tx = cmf->xx;
        ty = cmf->xy;
        cmf->xw += tx * x + ty * y + cmf->xz * z;
        tx = cmf->yx;
        ty = cmf->yy;
        cmf->yw += tx * x + ty * y + cmf->yz * z;
        tx = cmf->zx;
        ty = cmf->zy;
        cmf->zw += tx * x + ty * y + cmf->zz * z;
        tx = cmf->wx;
        ty = cmf->wy;
        cmf->ww += tx * x + ty * y + cmf->wz * z;
    } else {
        SkinMatrix_SetTranslate(cmf, x, y, z);
    }
}

void Matrix_Scale(f32 x, f32 y, f32 z, u8 mode) {
    MtxF* cmf = sCurrentMatrix;

    if (mode == MTXMODE_APPLY) {
        cmf->xx *= x;
        cmf->yx *= x;
        cmf->zx *= x;
        cmf->xy *= y;
        cmf->yy *= y;
        cmf->zy *= y;
        cmf->xz *= z;
        cmf->yz *= z;
        cmf->zz *= z;
        cmf->wx *= x;
        cmf->wy *= y;
        cmf->wz *= z;
    } else {
        SkinMatrix_SetScale(cmf, x, y, z);
    }
}

void Matrix_RotateX(f32 x, u8 mode) {
    MtxF* cmf = sCurrentMatrix;

    if (mode == MTXMODE_APPLY) {
        if (x != 0.0f) {
            f32 s = sinf(x);
            f32 c = cosf(x);
            f32 t0, t1;

            t0 = cmf->xy; t1 = cmf->xz; cmf->xy = t0 * c + t1 * s; cmf->xz = t1 * c - t0 * s;
            t0 = cmf->yy; t1 = cmf->yz; cmf->yy = t0 * c + t1 * s; cmf->yz = t1 * c - t0 * s;
            t0 = cmf->zy; t1 = cmf->zz; cmf->zy = t0 * c + t1 * s; cmf->zz = t1 * c - t0 * s;
            t0 = cmf->wy; t1 = cmf->wz; cmf->wy = t0 * c + t1 * s; cmf->wz = t1 * c - t0 * s;
        }
    } else {
        f32 s = (x != 0.0f) ? sinf(x) : 0.0f;
        f32 c = (x != 0.0f) ? cosf(x) : 1.0f;

        cmf->xx = 1.0f; cmf->xy = 0.0f; cmf->xz = 0.0f; cmf->xw = 0.0f;
        cmf->yx = 0.0f; cmf->yy = c;    cmf->yz = -s;   cmf->yw = 0.0f;
        cmf->zx = 0.0f; cmf->zy = s;    cmf->zz = c;    cmf->zw = 0.0f;
        cmf->wx = 0.0f; cmf->wy = 0.0f; cmf->wz = 0.0f; cmf->ww = 1.0f;
    }
}

void Matrix_RotateY(f32 y, u8 mode) {
    MtxF* cmf = sCurrentMatrix;

    if (mode == MTXMODE_APPLY) {
        if (y != 0.0f) {
            f32 s = sinf(y);
            f32 c = cosf(y);
            f32 t0, t1;

            t0 = cmf->xx; t1 = cmf->xz; cmf->xx = t0 * c - t1 * s; cmf->xz = t0 * s + t1 * c;
            t0 = cmf->yx; t1 = cmf->yz; cmf->yx = t0 * c - t1 * s; cmf->yz = t0 * s + t1 * c;
            t0 = cmf->zx; t1 = cmf->zz; cmf->zx = t0 * c - t1 * s; cmf->zz = t0 * s + t1 * c;
            t0 = cmf->wx; t1 = cmf->wz; cmf->wx = t0 * c - t1 * s; cmf->wz = t0 * s + t1 * c;
        }
    } else {
        f32 s = (y != 0.0f) ? sinf(y) : 0.0f;
        f32 c = (y != 0.0f) ? cosf(y) : 1.0f;

        cmf->xx = c;    cmf->xy = 0.0f; cmf->xz = s;    cmf->xw = 0.0f;
        cmf->yx = 0.0f; cmf->yy = 1.0f; cmf->yz = 0.0f; cmf->yw = 0.0f;
        cmf->zx = -s;   cmf->zy = 0.0f; cmf->zz = c;    cmf->zw = 0.0f;
        cmf->wx = 0.0f; cmf->wy = 0.0f; cmf->wz = 0.0f; cmf->ww = 1.0f;
    }
}

void Matrix_RotateZ(f32 z, u8 mode) {
    MtxF* cmf = sCurrentMatrix;

    if (mode == MTXMODE_APPLY) {
        if (z != 0.0f) {
            f32 s = sinf(z);
            f32 c = cosf(z);
            f32 t0, t1;

            t0 = cmf->xx; t1 = cmf->xy; cmf->xx = t0 * c + t1 * s; cmf->xy = t1 * c - t0 * s;
            t0 = cmf->yx; t1 = cmf->yy; cmf->yx = t0 * c + t1 * s; cmf->yy = t1 * c - t0 * s;
            t0 = cmf->zx; t1 = cmf->zy; cmf->zx = t0 * c + t1 * s; cmf->zy = t1 * c - t0 * s;
            t0 = cmf->wx; t1 = cmf->wy; cmf->wx = t0 * c + t1 * s; cmf->wy = t1 * c - t0 * s;
        }
    } else {
        f32 s = (z != 0.0f) ? sinf(z) : 0.0f;
        f32 c = (z != 0.0f) ? cosf(z) : 1.0f;

        cmf->xx = c;    cmf->xy = -s;   cmf->xz = 0.0f; cmf->xw = 0.0f;
        cmf->yx = s;    cmf->yy = c;    cmf->yz = 0.0f; cmf->yw = 0.0f;
        cmf->zx = 0.0f; cmf->zy = 0.0f; cmf->zz = 1.0f; cmf->zw = 0.0f;
        cmf->wx = 0.0f; cmf->wy = 0.0f; cmf->wz = 0.0f; cmf->ww = 1.0f;
    }
}

/**
 * Rotate using ZYX Tait-Bryan angles.
 * This means a (column) vector is first rotated around X, then around Y, then around Z, then (if `mode` is
 * `MTXMODE_APPLY`) gets transformed according to whatever the matrix was before adding the ZYX rotation.
 * Original Name: Matrix_RotateXYZ, changed to reflect rotation order.
 */
void Matrix_RotateZYX(s16 x, s16 y, s16 z, u8 mode) {
    MtxF* cmf = sCurrentMatrix;
    f32 sin, cos;
    f32 temp1, temp2;

    if (mode == MTXMODE_APPLY) {
        if (z != 0) { // Z rotation
            sin = Math_SinS(z);
            cos = Math_CosS(z);

            temp1 = cmf->xx; temp2 = cmf->xy; cmf->xx = temp1 * cos + temp2 * sin; cmf->xy = temp2 * cos - temp1 * sin;
            temp1 = cmf->yx; temp2 = cmf->yy; cmf->yx = temp1 * cos + temp2 * sin; cmf->yy = temp2 * cos - temp1 * sin;
            temp1 = cmf->zx; temp2 = cmf->zy; cmf->zx = temp1 * cos + temp2 * sin; cmf->zy = temp2 * cos - temp1 * sin;
            temp1 = cmf->wx; temp2 = cmf->wy; cmf->wx = temp1 * cos + temp2 * sin; cmf->wy = temp2 * cos - temp1 * sin;
        }

        if (y != 0) { // Y rotation
            sin = Math_SinS(y);
            cos = Math_CosS(y);

            temp1 = cmf->xx; temp2 = cmf->xz; cmf->xx = temp1 * cos - temp2 * sin; cmf->xz = temp1 * sin + temp2 * cos;
            temp1 = cmf->yx; temp2 = cmf->yz; cmf->yx = temp1 * cos - temp2 * sin; cmf->yz = temp1 * sin + temp2 * cos;
            temp1 = cmf->zx; temp2 = cmf->zz; cmf->zx = temp1 * cos - temp2 * sin; cmf->zz = temp1 * sin + temp2 * cos;
            temp1 = cmf->wx; temp2 = cmf->wz; cmf->wx = temp1 * cos - temp2 * sin; cmf->wz = temp1 * sin + temp2 * cos;
        }

        if (x != 0) { // X rotation
            sin = Math_SinS(x);
            cos = Math_CosS(x);

            temp1 = cmf->xy; temp2 = cmf->xz; cmf->xy = temp1 * cos + temp2 * sin; cmf->xz = temp2 * cos - temp1 * sin;
            temp1 = cmf->yy; temp2 = cmf->yz; cmf->yy = temp1 * cos + temp2 * sin; cmf->yz = temp2 * cos - temp1 * sin;
            temp1 = cmf->zy; temp2 = cmf->zz; cmf->zy = temp1 * cos + temp2 * sin; cmf->zz = temp2 * cos - temp1 * sin;
            temp1 = cmf->wy; temp2 = cmf->wz; cmf->wy = temp1 * cos + temp2 * sin; cmf->wz = temp2 * cos - temp1 * sin;
        }

    } else SkinMatrix_SetRotateZYX(cmf, x, y, z); // Fallback: write full rotation matrix
}

/**
 * Translate and rotate using ZYX Tait-Bryan angles.
 * This means a (column) vector is first rotated around X, then around Y, then around Z, then translated, then gets
 * transformed according to whatever the matrix was previously.
 */
void Matrix_TranslateRotateZYX(Vec3f* translation, Vec3s* rotation) {
    MtxF* cmf = sCurrentMatrix;
    f32 t0, t1;

    f32 sinX = (rotation->x != 0) ? Math_SinS(rotation->x) : 0.0f;
    f32 cosX = (rotation->x != 0) ? Math_CosS(rotation->x) : 1.0f;
    f32 sinY = (rotation->y != 0) ? Math_SinS(rotation->y) : 0.0f;
    f32 cosY = (rotation->y != 0) ? Math_CosS(rotation->y) : 1.0f;
    f32 sinZ = (rotation->z != 0) ? Math_SinS(rotation->z) : 0.0f;
    f32 cosZ = (rotation->z != 0) ? Math_CosS(rotation->z) : 1.0f;

    // Apply translation
    cmf->xw += cmf->xx * translation->x + cmf->xy * translation->y + cmf->xz * translation->z;
    cmf->yw += cmf->yx * translation->x + cmf->yy * translation->y + cmf->yz * translation->z;
    cmf->zw += cmf->zx * translation->x + cmf->zy * translation->y + cmf->zz * translation->z;
    cmf->ww += cmf->wx * translation->x + cmf->wy * translation->y + cmf->wz * translation->z;

    if (rotation->z != 0) { // Z rotation
        t0 = cmf->xx; t1 = cmf->xy; cmf->xx = t0*cosZ + t1*sinZ; cmf->xy = t1*cosZ - t0*sinZ;
        t0 = cmf->yx; t1 = cmf->yy; cmf->yx = t0*cosZ + t1*sinZ; cmf->yy = t1*cosZ - t0*sinZ;
        t0 = cmf->zx; t1 = cmf->zy; cmf->zx = t0*cosZ + t1*sinZ; cmf->zy = t1*cosZ - t0*sinZ;
        t0 = cmf->wx; t1 = cmf->wy; cmf->wx = t0*cosZ + t1*sinZ; cmf->wy = t1*cosZ - t0*sinZ;
    }

    if (rotation->y != 0) { // Y rotation
        t0 = cmf->xx; t1 = cmf->xz; cmf->xx = t0*cosY - t1*sinY; cmf->xz = t0*sinY + t1*cosY;
        t0 = cmf->yx; t1 = cmf->yz; cmf->yx = t0*cosY - t1*sinY; cmf->yz = t0*sinY + t1*cosY;
        t0 = cmf->zx; t1 = cmf->zz; cmf->zx = t0*cosY - t1*sinY; cmf->zz = t0*sinY + t1*cosY;
        t0 = cmf->wx; t1 = cmf->wz; cmf->wx = t0*cosY - t1*sinY; cmf->wz = t0*sinY + t1*cosY;
    }

    if (rotation->x != 0) { // X rotation
        t0 = cmf->xy; t1 = cmf->xz; cmf->xy = t0*cosX + t1*sinX; cmf->xz = t1*cosX - t0*sinX;
        t0 = cmf->yy; t1 = cmf->yz; cmf->yy = t0*cosX + t1*sinX; cmf->yz = t1*cosX - t0*sinX;
        t0 = cmf->zy; t1 = cmf->zz; cmf->zy = t0*cosX + t1*sinX; cmf->zz = t1*cosX - t0*sinX;
        t0 = cmf->wy; t1 = cmf->wz; cmf->wy = t0*cosX + t1*sinX; cmf->wz = t1*cosX - t0*sinX;
    }
}

/**
 * Set the current matrix to translate and rotate using YXZ Tait-Bryan angles.
 * This means a (column) vector is first rotated around Z, then around X, then around Y, then translated.
 */
void Matrix_SetTranslateRotateYXZ(f32 translateX, f32 translateY, f32 translateZ, Vec3s* rot) {
    MtxF* cmf = sCurrentMatrix;
    f32 temp1 = Math_SinS(rot->y);
    f32 temp2 = Math_CosS(rot->y);
    f32 cos;
    f32 sin;

    cmf->xx = temp2;
    cmf->zx = -temp1;
    cmf->xw = translateX;
    cmf->yw = translateY;
    cmf->zw = translateZ;
    cmf->wx = 0.0f;
    cmf->wy = 0.0f;
    cmf->wz = 0.0f;
    cmf->ww = 1.0f;

    if (rot->x != 0) {
        sin = Math_SinS(rot->x);
        cos = Math_CosS(rot->x);

        cmf->zz = temp2 * cos;
        cmf->zy = temp2 * sin;
        cmf->xz = temp1 * cos;
        cmf->xy = temp1 * sin;
        cmf->yz = -sin;
        cmf->yy = cos;
    } else {
        cmf->zz = temp2;
        cmf->xz = temp1;
        cmf->yz = 0.0f;
        cmf->zy = 0.0f;
        cmf->xy = 0.0f;
        cmf->yy = 1.0f;
    }

    if (rot->z != 0) {
        sin = Math_SinS(rot->z);
        cos = Math_CosS(rot->z);

        temp1 = cmf->xx;
        temp2 = cmf->xy;
        cmf->xx = temp1 * cos + temp2 * sin;
        cmf->xy = temp2 * cos - temp1 * sin;

        temp1 = cmf->zx;
        temp2 = cmf->zy;
        cmf->zx = temp1 * cos + temp2 * sin;
        cmf->zy = temp2 * cos - temp1 * sin;

        temp2 = cmf->yy;
        cmf->yx = temp2 * sin;
        cmf->yy = temp2 * cos;
    } else {
        cmf->yx = 0.0f;
    }
}

Mtx* Matrix_MtxFToMtx(MtxF* src, Mtx* dest) {
    int i;
    u16* m1 = (u16*)&dest->m[0][0];
    u16* m2 = (u16*)&dest->m[2][0];
    f32* srcs = (f32*)src;
    const f32 scale = 65536.0f;

    for (i = 0; i < 16; i += 4) {
        s32 t0 = (s32)(srcs[i+0] * scale);
        s32 t1 = (s32)(srcs[i+1] * scale);
        s32 t2 = (s32)(srcs[i+2] * scale);
        s32 t3 = (s32)(srcs[i+3] * scale);

        m1[i+0] = t0 >> 16; m2[i+0] = t0;
        m1[i+1] = t1 >> 16; m2[i+1] = t1;
        m1[i+2] = t2 >> 16; m2[i+2] = t2;
        m1[i+3] = t3 >> 16; m2[i+3] = t3;
    }

    return dest;
}

#if DEBUG_FEATURES

Mtx* Matrix_ToMtx(Mtx* dest, const char* file, int line) {
    return Matrix_MtxFToMtx(MATRIX_CHECK_FLOATS(sCurrentMatrix, file, line), dest);
}

Mtx* Matrix_Finalize(GraphicsContext* gfxCtx, const char* file, int line) {
    return Matrix_ToMtx(GRAPH_ALLOC(gfxCtx, sizeof(Mtx)), file, line);
}

#else

Mtx* Matrix_ToMtx(Mtx* dest) {
    return Matrix_MtxFToMtx(sCurrentMatrix, dest);
}

Mtx* Matrix_Finalize(GraphicsContext* gfxCtx) {
    return Matrix_ToMtx(GRAPH_ALLOC(gfxCtx, sizeof(Mtx)));
}

#endif /* DEBUG_FEATURES */

Mtx* Matrix_MtxFToNewMtx(MtxF* src, GraphicsContext* gfxCtx) {
    return Matrix_MtxFToMtx(src, GRAPH_ALLOC(gfxCtx, sizeof(Mtx)));
}

void Matrix_MultVec3f(Vec3f* src, Vec3f* dest) {
    MtxF* cmf = sCurrentMatrix;

    dest->x = cmf->xw + (cmf->xx * src->x + cmf->xy * src->y + cmf->xz * src->z);
    dest->y = cmf->yw + (cmf->yx * src->x + cmf->yy * src->y + cmf->yz * src->z);
    dest->z = cmf->zw + (cmf->zx * src->x + cmf->zy * src->y + cmf->zz * src->z);
}

void Matrix_MtxFCopy(MtxF* dest, MtxF* src) {
    int i;
    f32* destf = (f32*)dest;
    f32* srcf  = (f32*)src;

    for (i = 0; i < 16; i += 4) {
        destf[i+0] = srcf[i+0];
        destf[i+1] = srcf[i+1];
        destf[i+2] = srcf[i+2];
        destf[i+3] = srcf[i+3];
    }
}

void Matrix_MtxToMtxF(Mtx* src, MtxF* dest) {
    int i;
    u16* m1 = (u16*)&src->m[0][0];
    u16* m2 = (u16*)&src->m[2][0];
    f32* destf = (f32*)dest;
    const f32 scale = 1.0f / 65536.0f;

    for (i = 0; i < 16; i += 4) {
        destf[i+0] = ((s32)m1[i+0] << 16 | m2[i+0]) * scale;
        destf[i+1] = ((s32)m1[i+1] << 16 | m2[i+1]) * scale;
        destf[i+2] = ((s32)m1[i+2] << 16 | m2[i+2]) * scale;
        destf[i+3] = ((s32)m1[i+3] << 16 | m2[i+3]) * scale;
    }
}

void Matrix_MultVec3fExt(Vec3f* src, Vec3f* dest, MtxF* mf) {
    dest->x = mf->xw + (mf->xx * src->x + mf->xy * src->y + mf->xz * src->z);
    dest->y = mf->yw + (mf->yx * src->x + mf->yy * src->y + mf->yz * src->z);
    dest->z = mf->zw + (mf->zx * src->x + mf->zy * src->y + mf->zz * src->z);
}

void Matrix_Transpose(MtxF* mf) {
    f32 temp;

    temp = mf->yx;
    mf->yx = mf->xy;
    mf->xy = temp;

    temp = mf->zx;
    mf->zx = mf->xz;
    mf->xz = temp;

    temp = mf->zy;
    mf->zy = mf->yz;
    mf->yz = temp;
}

/**
 * Changes the 3x3 part of the current matrix to `mf` * S, where S is the scale in the current matrix.
 *
 * In details, S is a diagonal where each coefficient is the norm of the column in the 3x3 current matrix.
 * The 3x3 part can then be written as R * S where R has its columns normalized.
 * Since R is typically a rotation matrix, and the 3x3 part is changed from R * S to `mf` * S, this operation can be
 * seen as replacing the R rotation with `mf`, hence the function name.
 */
void Matrix_ReplaceRotation(MtxF* mf) {
    MtxF* cmf = sCurrentMatrix;
    f32 acc;
    f32 temp;
    f32 curColNorm;

    // compute the Euclidean norm of the first column of the current matrix
    acc = cmf->xx;
    acc *= acc;
    temp = cmf->yx;
    acc += SQ(temp);
    temp = cmf->zx;
    acc += SQ(temp);
    curColNorm = sqrtf(acc);

    cmf->xx = mf->xx * curColNorm;
    cmf->yx = mf->yx * curColNorm;
    cmf->zx = mf->zx * curColNorm;

    // second column
    acc = cmf->xy;
    acc *= acc;
    temp = cmf->yy;
    acc += SQ(temp);
    temp = cmf->zy;
    acc += SQ(temp);
    curColNorm = sqrtf(acc);

    cmf->xy = mf->xy * curColNorm;
    cmf->yy = mf->yy * curColNorm;
    cmf->zy = mf->zy * curColNorm;

    // third column
    acc = cmf->xz;
    acc *= acc;
    temp = cmf->yz;
    acc += SQ(temp);
    temp = cmf->zz;
    acc += SQ(temp);
    curColNorm = sqrtf(acc);

    cmf->xz = mf->xz * curColNorm;
    cmf->yz = mf->yz * curColNorm;
    cmf->zz = mf->zz * curColNorm;
}

/**
 * Gets the rotation the specified matrix represents, using Tait-Bryan YXZ angles.
 * The flag value doesn't matter for a rotation matrix. Not 0 does extra calculation.
 */
void Matrix_MtxFToYXZRotS(MtxF* mf, Vec3s* rotDest, s32 flag) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    temp = mf->xz;
    temp *= temp;
    temp += SQ(mf->zz);
    rotDest->x = RAD_TO_BINANG(Math_FAtan2F(-mf->yz, sqrtf(temp)));

    if ((rotDest->x == 0x4000) || (rotDest->x == -0x4000)) {
        rotDest->z = 0;

        rotDest->y = RAD_TO_BINANG(Math_FAtan2F(-mf->zx, mf->xx));
    } else {
        rotDest->y = RAD_TO_BINANG(Math_FAtan2F(mf->xz, mf->zz));

        if (!flag) {
            rotDest->z = RAD_TO_BINANG(Math_FAtan2F(mf->yx, mf->yy));
        } else {
            temp = mf->xx;
            temp2 = mf->zx;
            temp3 = mf->zy;

            temp *= temp;
            temp += SQ(temp2);
            temp2 = mf->yx;
            temp += SQ(temp2);
            /* temp = xx^2+zx^2+yx^2 == 1 for a rotation matrix */
            temp = sqrtf(temp);
            temp = temp2 / temp;

            temp2 = mf->xy;
            temp2 *= temp2;
            temp2 += SQ(temp3);
            temp3 = mf->yy;
            temp2 += SQ(temp3);
            /* temp2 = xy^2+zy^2+yy^2 == 1 for a rotation matrix */
            temp2 = sqrtf(temp2);
            temp2 = temp3 / temp2;

            /* for a rotation matrix, temp == yx and temp2 == yy
             * which is the same as in the !flag branch */
            rotDest->z = RAD_TO_BINANG(Math_FAtan2F(temp, temp2));
        }
    }
}

/**
 * Gets the rotation the specified matrix represents, using Tait-Bryan ZYX angles.
 * The flag value doesn't matter for a rotation matrix. Not 0 does extra calculation.
 */
void Matrix_MtxFToZYXRotS(MtxF* mf, Vec3s* rotDest, s32 flag) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    temp = mf->xx;
    temp *= temp;
    temp += SQ(mf->yx);
    rotDest->y = RAD_TO_BINANG(Math_FAtan2F(-mf->zx, sqrtf(temp)));

    if ((rotDest->y == 0x4000) || (rotDest->y == -0x4000)) {
        rotDest->x = 0;
        rotDest->z = RAD_TO_BINANG(Math_FAtan2F(-mf->xy, mf->yy));
    } else {
        rotDest->z = RAD_TO_BINANG(Math_FAtan2F(mf->yx, mf->xx));

        if (!flag) {
            rotDest->x = RAD_TO_BINANG(Math_FAtan2F(mf->zy, mf->zz));
        } else {
            // see Matrix_MtxFToYXZRotS
            temp = mf->xy;
            temp2 = mf->yy;
            temp3 = mf->yz;

            temp *= temp;
            temp += SQ(temp2);
            temp2 = mf->zy;
            temp += SQ(temp2);
            temp = sqrtf(temp);
            temp = temp2 / temp;

            temp2 = mf->xz;
            temp2 *= temp2;
            temp2 += SQ(temp3);
            temp3 = mf->zz;
            temp2 += SQ(temp3);
            temp2 = sqrtf(temp2);
            temp2 = temp3 / temp2;

            rotDest->x = RAD_TO_BINANG(Math_FAtan2F(temp, temp2));
        }
    }
}

/*
 * Rotate the matrix by `angle` radians around a unit vector `axis`.
 * NB: `axis` is assumed to be a unit vector.
 */
void Matrix_RotateAxis(f32 angle, Vec3f* axis, u8 mode) {
    MtxF* cmf;
    f32 sin;
    f32 cos;
    f32 rCos;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    if (mode == MTXMODE_APPLY) {
        if (angle != 0) {
            cmf = sCurrentMatrix;

            sin = sinf(angle);
            cos = cosf(angle);

            temp1 = cmf->xx;
            temp2 = cmf->xy;
            temp3 = cmf->xz;
            temp4 = (axis->x * temp1 + axis->y * temp2 + axis->z * temp3) * (1.0f - cos);
            cmf->xx = temp1 * cos + axis->x * temp4 + sin * (temp2 * axis->z - temp3 * axis->y);
            cmf->xy = temp2 * cos + axis->y * temp4 + sin * (temp3 * axis->x - temp1 * axis->z);
            cmf->xz = temp3 * cos + axis->z * temp4 + sin * (temp1 * axis->y - temp2 * axis->x);

            temp1 = cmf->yx;
            temp2 = cmf->yy;
            temp3 = cmf->yz;
            temp4 = (axis->x * temp1 + axis->y * temp2 + axis->z * temp3) * (1.0f - cos);
            cmf->yx = temp1 * cos + axis->x * temp4 + sin * (temp2 * axis->z - temp3 * axis->y);
            cmf->yy = temp2 * cos + axis->y * temp4 + sin * (temp3 * axis->x - temp1 * axis->z);
            cmf->yz = temp3 * cos + axis->z * temp4 + sin * (temp1 * axis->y - temp2 * axis->x);

            temp1 = cmf->zx;
            temp2 = cmf->zy;
            temp3 = cmf->zz;
            temp4 = (axis->x * temp1 + axis->y * temp2 + axis->z * temp3) * (1.0f - cos);
            cmf->zx = temp1 * cos + axis->x * temp4 + sin * (temp2 * axis->z - temp3 * axis->y);
            cmf->zy = temp2 * cos + axis->y * temp4 + sin * (temp3 * axis->x - temp1 * axis->z);
            cmf->zz = temp3 * cos + axis->z * temp4 + sin * (temp1 * axis->y - temp2 * axis->x);
        }
    } else {
        cmf = sCurrentMatrix;

        if (angle != 0) {
            sin = sinf(angle);
            cos = cosf(angle);
            rCos = 1.0f - cos;

            cmf->xx = axis->x * axis->x * rCos + cos;
            cmf->yy = axis->y * axis->y * rCos + cos;
            cmf->zz = axis->z * axis->z * rCos + cos;

            if (0) {}

            temp2 = axis->x * rCos * axis->y;
            temp3 = axis->z * sin;
            cmf->yx = temp2 + temp3;
            cmf->xy = temp2 - temp3;

            temp2 = axis->x * rCos * axis->z;
            temp3 = axis->y * sin;
            cmf->zx = temp2 - temp3;
            cmf->xz = temp2 + temp3;

            temp2 = axis->y * rCos * axis->z;
            temp3 = axis->x * sin;
            cmf->zy = temp2 + temp3;
            cmf->yz = temp2 - temp3;

            cmf->wx = cmf->wy = cmf->wz = cmf->xw = cmf->yw = cmf->zw = 0.0f;
            cmf->ww = 1.0f;
        } else {
            cmf->yx = 0.0f;
            cmf->zx = 0.0f;
            cmf->wx = 0.0f;
            cmf->xy = 0.0f;
            cmf->zy = 0.0f;
            cmf->wy = 0.0f;
            cmf->xz = 0.0f;
            cmf->yz = 0.0f;
            cmf->wz = 0.0f;
            cmf->xw = 0.0f;
            cmf->yw = 0.0f;
            cmf->zw = 0.0f;
            cmf->xx = 1.0f;
            cmf->yy = 1.0f;
            cmf->zz = 1.0f;
            cmf->ww = 1.0f;
        }
    }
}

#if DEBUG_FEATURES
MtxF* Matrix_CheckFloats(MtxF* mf, const char* file, int line) {
    s32 i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (!(-32768.0f <= mf->mf[i][j]) || !(mf->mf[i][j] < 32768.0f)) {
                PRINTF("%s %d: [%s] =\n"
                       "/ %12.6f %12.6f %12.6f %12.6f \\\n"
                       "| %12.6f %12.6f %12.6f %12.6f |\n"
                       "| %12.6f %12.6f %12.6f %12.6f |\n"
                       "\\ %12.6f %12.6f %12.6f %12.6f /\n",
                       file, line, "mf", mf->xx, mf->xy, mf->xz, mf->xw, mf->yx, mf->yy, mf->yz, mf->yw, mf->zx, mf->zy,
                       mf->zz, mf->zw, mf->wx, mf->wy, mf->wz, mf->ww);
                Fault_AddHungupAndCrash(file, line);
            }
        }
    }

    return mf;
}
#endif

void Matrix_SetTranslateUniformScaleMtxF(MtxF* mf, f32 scale, f32 translateX, f32 translateY, f32 translateZ) {
    mf->xx = scale;
    mf->yx = 0.0f;
    mf->zx = 0.0f;
    mf->wx = 0.0f;
    mf->xy = 0.0f;
    mf->yy = scale;
    mf->zy = 0.0f;
    mf->wy = 0.0f;
    mf->xz = 0.0f;
    mf->yz = 0.0f;
    mf->zz = scale;
    mf->wz = 0.0f;
    mf->xw = translateX;
    mf->yw = translateY;
    mf->zw = translateZ;
    mf->ww = 1.0f;
}

void Matrix_SetTranslateUniformScaleMtx(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ) {
    MtxF mf;

    Matrix_SetTranslateUniformScaleMtxF(&mf, scale, translateX, translateY, translateZ);
    guMtxF2L(mf.mf, mtx);
}

void Matrix_SetTranslateUniformScaleMtx2(Mtx* mtx, f32 scale, f32 translateX, f32 translateY, f32 translateZ) {
    u16* intPart = (u16*)&mtx->m[0][0];
    u16* fracPart = (u16*)&mtx->m[2][0];
    u32 fixedPoint;

    fixedPoint = (s32)(scale * 0x10000);
    fracPart[0] = fixedPoint & 0xFFFF;
    intPart[0] = (fixedPoint >> 16) & 0xFFFF;

    fixedPoint = (s32)(scale * 0x10000);
    intPart[5] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[5] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(scale * 0x10000);
    intPart[10] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[10] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateX * 0x10000);
    intPart[12] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[12] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateY * 0x10000);
    intPart[13] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[13] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateZ * 0x10000);
    intPart[14] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[14] = fixedPoint & 0xFFFF;

    intPart[1] = 0;
    intPart[2] = 0;
    intPart[3] = 0;
    intPart[4] = 0;
    intPart[6] = 0;
    intPart[7] = 0;
    intPart[8] = 0;
    intPart[9] = 0;
    intPart[11] = 0;
    intPart[15] = 1;

    fracPart[1] = 0;
    fracPart[2] = 0;
    fracPart[3] = 0;
    fracPart[4] = 0;
    fracPart[6] = 0;
    fracPart[7] = 0;
    fracPart[8] = 0;
    fracPart[9] = 0;
    fracPart[11] = 0;
    fracPart[15] = 0;
}

void Matrix_SetTranslateScaleMtx1(Mtx* mtx, f32 scaleX, f32 scaleY, f32 scaleZ, f32 translateX, f32 translateY,
                                  f32 translateZ) {
    u16* intPart = (u16*)&mtx->m[0][0];
    u16* fracPart = (u16*)&mtx->m[2][0];
    u32 fixedPoint;

    fixedPoint = (s32)(scaleX * 0x10000);
    intPart[0] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[0] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(scaleY * 0x10000);
    intPart[5] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[5] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(scaleZ * 0x10000);
    intPart[10] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[10] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateX * 0x10000);
    intPart[12] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[12] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateY * 0x10000);
    intPart[13] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[13] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateZ * 0x10000);
    intPart[14] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[14] = fixedPoint & 0xFFFF;

    intPart[1] = 0;
    intPart[2] = 0;
    intPart[3] = 0;
    intPart[4] = 0;
    intPart[6] = 0;
    intPart[7] = 0;
    intPart[8] = 0;
    intPart[9] = 0;
    intPart[11] = 0;
    intPart[15] = 1;

    fracPart[1] = 0;
    fracPart[2] = 0;
    fracPart[3] = 0;
    fracPart[4] = 0;
    fracPart[6] = 0;
    fracPart[7] = 0;
    fracPart[8] = 0;
    fracPart[9] = 0;
    fracPart[11] = 0;
    fracPart[15] = 0;
}

void Matrix_SetTranslateScaleMtx2(Mtx* mtx, f32 scaleX, f32 scaleY, f32 scaleZ, f32 translateX, f32 translateY,
                                  f32 translateZ) {
    Mtx_t* m = &mtx->m;
    u16* intPart = (u16*)&(*m)[0][0];
    u16* fracPart = (u16*)&(*m)[2][0];
    u32 fixedPoint;

    (*m)[0][1] = 0;
    (*m)[2][1] = 0;
    (*m)[0][3] = 0;
    (*m)[2][3] = 0;
    (*m)[1][0] = 0;

    fixedPoint = (s32)(scaleX * 0x10000);
    (*m)[0][0] = fixedPoint;
    intPart[1] = 0;
    (*m)[2][0] = fixedPoint << 16;

    fixedPoint = (s32)(scaleY * 0x10000);
    (*m)[0][2] = fixedPoint >> 16;
    (*m)[2][2] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(scaleZ * 0x10000);
    (*m)[1][1] = fixedPoint;
    intPart[11] = 0;
    (*m)[3][1] = fixedPoint << 16;

    (*m)[3][0] = 0;

    fixedPoint = (s32)(translateX * 0x10000);
    intPart[12] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[12] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateY * 0x10000);
    intPart[13] = (fixedPoint >> 16) & 0xFFFF;
    fracPart[13] = fixedPoint & 0xFFFF;

    fixedPoint = (s32)(translateZ * 0x10000);
    intPart[14] = (fixedPoint >> 16) & 0xFFFF;
    intPart[15] = 1;
    (*m)[3][3] = fixedPoint << 16;
}

void Matrix_MultZero(Vec3f* dest) {
    MtxF* cmf = sCurrentMatrix;

    dest->x = cmf->xw;
    dest->y = cmf->yw;
    dest->z = cmf->zw;
}

void Matrix_MultVecY(f32 y, Vec3f* dest) {
    MtxF* cmf = sCurrentMatrix;

    dest->x = cmf->xw + cmf->xy * y;
    dest->y = cmf->yw + cmf->yy * y;
    dest->z = cmf->zw + cmf->zy * y;
}

void Matrix_MultVecX(f32 x, Vec3f* dest) {
    MtxF* cmf = sCurrentMatrix;

    dest->x = cmf->xw + cmf->xx * x;
    dest->y = cmf->yw + cmf->yx * x;
    dest->z = cmf->zw + cmf->zx * x;
}

void Matrix_MultVecZ(f32 z, Vec3f* dest) {
    MtxF* cmf = sCurrentMatrix;

    dest->x = cmf->xw + cmf->xz * z;
    dest->y = cmf->yw + cmf->yz * z;
    dest->z = cmf->zw + cmf->zz * z;
}

void Matrix_RotateXFApply(f32 x) {
    MtxF* cmf;
    f32 sin;
    f32 cos;
    f32 tempY;
    f32 tempZ;
    //s32 pad;

    if (x != 0.0f) {
        cmf = sCurrentMatrix;

        sin = sins(RAD_TO_BINANG(x)) * SHT_MINV;
        cos = coss(RAD_TO_BINANG(x)) * SHT_MINV;

        tempY = cmf->xy;
        tempZ = cmf->xz;
        cmf->xy = (tempY * cos) + (tempZ * sin);
        cmf->xz = (tempZ * cos) - (tempY * sin);

        tempY = cmf->yy;
        tempZ = cmf->yz;
        cmf->yy = (tempY * cos) + (tempZ * sin);
        cmf->yz = (tempZ * cos) - (tempY * sin);

        tempY = cmf->zy;
        tempZ = cmf->zz;
        cmf->zy = (tempY * cos) + (tempZ * sin);
        cmf->zz = (tempZ * cos) - (tempY * sin);

        tempY = cmf->wy;
        tempZ = cmf->wz;
        cmf->wy = (tempY * cos) + (tempZ * sin);
        cmf->wz = (tempZ * cos) - (tempY * sin);
    }
}

void Matrix_RotateYF(f32 y, MatrixMode mode) {
    MtxF* cmf;
    f32 sin;
    f32 cos;
    f32 tempX;
    f32 tempZ;
    f32 zero = 0.0;
    f32 one = 1.0;

    if (mode == MTXMODE_APPLY) {
        if (y != 0.0f) {
            cmf = sCurrentMatrix;

            sin = sinf(y);
            cos = cosf(y);

            tempX = cmf->xx;
            tempZ = cmf->xz;
            cmf->xx = tempX * cos - tempZ * sin;
            cmf->xz = tempX * sin + tempZ * cos;

            tempX = cmf->yx;
            tempZ = cmf->yz;
            cmf->yx = tempX * cos - tempZ * sin;
            cmf->yz = tempX * sin + tempZ * cos;

            tempX = cmf->zx;
            tempZ = cmf->zz;
            cmf->zx = tempX * cos - tempZ * sin;
            cmf->zz = tempX * sin + tempZ * cos;

            tempX = cmf->wx;
            tempZ = cmf->wz;
            cmf->wx = tempX * cos - tempZ * sin;
            cmf->wz = tempX * sin + tempZ * cos;
        }
    } else {
        cmf = sCurrentMatrix;

        if (y != 0.0f) {
            sin = sinf(y);
            cos = cosf(y);
        } else {
            cos = one;
            sin = zero;
        }

        cmf->yx = zero;
        cmf->wx = zero;
        cmf->xy = zero;
        cmf->zy = zero;
        cmf->wy = zero;
        cmf->yz = zero;
        cmf->wz = zero;
        cmf->xw = zero;
        cmf->yw = zero;
        cmf->zw = zero;
        cmf->yy = one;
        cmf->ww = one;
        cmf->xx = cos;
        cmf->zz = cos;
        cmf->zx = -sin;
        cmf->xz = sin;
    }
}

void Matrix_RotateZF(f32 z, MatrixMode mode) {
    MtxF* cmf;
    f32 sin;
    f32 cos;
    f32 tempX;
    f32 tempY;

    if (mode == MTXMODE_APPLY) {
        if (z != 0) {
            cmf = sCurrentMatrix;

            sin = sinf(z);
            cos = cosf(z);

            tempX = cmf->xx;
            tempY = cmf->xy;
            cmf->xx = tempX * cos + tempY * sin;
            cmf->xy = tempY * cos - tempX * sin;

            tempX = cmf->yx;
            tempY = cmf->yy;
            cmf->yx = tempX * cos + tempY * sin;
            cmf->yy = tempY * cos - tempX * sin;

            tempX = cmf->zx;
            tempY = cmf->zy;
            cmf->zx = tempX * cos + tempY * sin;
            cmf->zy = tempY * cos - tempX * sin;

            tempX = cmf->wx;
            tempY = cmf->wy;
            cmf->wx = tempX * cos + tempY * sin;
            cmf->wy = tempY * cos - tempX * sin;
        }
    } else {
        cmf = sCurrentMatrix;

        if (z != 0) {
            sin = sinf(z);
            cos = cosf(z);
        } else {
            sin = 0.0f;
            cos = 1.0f;
        }

        cmf->zx = 0.0f;
        cmf->wx = 0.0f;
        cmf->zy = 0.0f;
        cmf->wy = 0.0f;
        cmf->xz = 0.0f;
        cmf->yz = 0.0f;
        cmf->wz = 0.0f;
        cmf->xw = 0.0f;
        cmf->yw = 0.0f;
        cmf->zw = 0.0f;
        cmf->zz = 1.0f;
        cmf->ww = 1.0f;
        cmf->xx = cos;
        cmf->yy = cos;
        cmf->yx = sin;
        cmf->xy = -sin;
    }
}
