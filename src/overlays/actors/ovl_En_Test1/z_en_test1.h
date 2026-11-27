#ifndef Z_EN_TEST1_H
#define Z_EN_TEST1_H

#include "ultra64.h"
#include "actor.h"
#include "keyframe.h"

struct EnTest1;

typedef struct EnTest1PrimColor {
    /* 0x0 */ u8 r;
    /* 0x1 */ u8 g;
    /* 0x2 */ u8 b;
    /* 0x3 */ u8 a;
    /* 0x4 */ u8 lodFrac;
} EnTest1PrimColor;

typedef struct EnTest1EnvColor {
    /* 0x0 */ u8 r;
    /* 0x1 */ u8 g;
    /* 0x2 */ u8 b;
    /* 0x3 */ u8 a;
} EnTest1EnvColor;

typedef struct EnTest1ColorParams {
    /* 0x0 */ s16 keyFrameLength;
    /* 0x2 */ s16 keyFrameCount;
    /* 0x4 */ const EnTest1PrimColor* primColors;
    /* 0x8 */ const EnTest1EnvColor* envColors;
    /* 0xC */ const u16* keyFrames;
} EnTest1ColorParams;

typedef struct EnTest1TexScrollParams {
    /* 0x0 */ s16 xStep;
    /* 0x2 */ s16 yStep;
    /* 0x4 */ u16 width;
    /* 0x6 */ u16 height;
} EnTest1TexScrollParams;

typedef struct EnTest1Material {
    /* 0x0 */ const EnTest1ColorParams* colorParams[2];
    /* 0x8 */ const EnTest1TexScrollParams* texScrollParams;
} EnTest1Material;

typedef struct EnTest1Struct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Vec3f unk_08;
    /* 0x14 */ Vec3f unk_14;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ Vec3s unk_30;
    /* 0x36 */ Vec3s unk_36;
} EnTest1Struct; // size = 0x3C

typedef struct EnTest1 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ KFSkelAnimeFlex kfSkelAnime;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ Vec3s jointTable[12];
    /* 0x1C0 */ Vec3s morphTable[12];
    /* 0x208 */ u8 unk_208;
    /* 0x209 */ u8 unk_209;
    /* 0x20A */ u8 surfaceMaterial;
    /* 0x20C */ EnTest1Struct unk_20C[20];
} EnTest1; // size = 0x6BC

#endif
