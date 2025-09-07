#ifndef OBJECT_CS_H
#define OBJECT_CS_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 gGraveyardKidWalkFrameData[];
extern JointIndex gGraveyardKidWalkJointIndices[];
extern AnimationHeader gGraveyardKidWalkAnim;
extern s16 gGraveyardKidSwingStickUpFrameData[];
extern JointIndex gGraveyardKidSwingStickUpJointIndices[];
extern AnimationHeader gGraveyardKidSwingStickUpAnim;
extern s16 gGraveyardKidGrabStickTwoHandsFrameData[];
extern JointIndex gGraveyardKidGrabStickTwoHandsJointIndices[];
extern AnimationHeader gGraveyardKidGrabStickTwoHandsAnim;
extern s16 gGraveyardKidIdleFrameData[];
extern JointIndex gGraveyardKidIdleJointIndices[];
extern AnimationHeader gGraveyardKidIdleAnim;

#define gGraveyardKidGradientTex_WIDTH 8
#define gGraveyardKidGradientTex_HEIGHT 8
extern u64 gGraveyardKidGradientTex[TEX_LEN(u64, gGraveyardKidGradientTex_WIDTH, gGraveyardKidGradientTex_HEIGHT, 8)];
#define gGraveyardKidHairTex_WIDTH 16
#define gGraveyardKidHairTex_HEIGHT 16
extern u64 gGraveyardKidHairTex[TEX_LEN(u64, gGraveyardKidHairTex_WIDTH, gGraveyardKidHairTex_HEIGHT, 8)];
#define gGraveyardKidEarTex_WIDTH 8
#define gGraveyardKidEarTex_HEIGHT 8
extern u64 gGraveyardKidEarTex[TEX_LEN(u64, gGraveyardKidEarTex_WIDTH, gGraveyardKidEarTex_HEIGHT, 8)];
#define gGraveyardKidNoseTex_WIDTH 8
#define gGraveyardKidNoseTex_HEIGHT 8
extern u64 gGraveyardKidNoseTex[TEX_LEN(u64, gGraveyardKidNoseTex_WIDTH, gGraveyardKidNoseTex_HEIGHT, 8)];
#define gGraveyardKidMouthTex_WIDTH 32
#define gGraveyardKidMouthTex_HEIGHT 16
extern u64 gGraveyardKidMouthTex[TEX_LEN(u64, gGraveyardKidMouthTex_WIDTH, gGraveyardKidMouthTex_HEIGHT, 16)];
#define gGraveyardKidEyesOpenTex_WIDTH 64
#define gGraveyardKidEyesOpenTex_HEIGHT 16
extern u64 gGraveyardKidEyesOpenTex[TEX_LEN(u64, gGraveyardKidEyesOpenTex_WIDTH, gGraveyardKidEyesOpenTex_HEIGHT, 16)];
extern u64 gGraveyardKidEyesOpen2Tex[TEX_LEN(u64, gGraveyardKidEyesOpenTex_WIDTH, gGraveyardKidEyesOpenTex_HEIGHT, 16)];
#define gGraveyardKidEyesHalfTex_WIDTH 64
#define gGraveyardKidEyesHalfTex_HEIGHT 16
extern u64 gGraveyardKidEyesHalfTex[TEX_LEN(u64, gGraveyardKidEyesHalfTex_WIDTH, gGraveyardKidEyesHalfTex_HEIGHT, 16)];
extern u64 gGraveyardKidEyesHalf2Tex[TEX_LEN(u64, gGraveyardKidEyesHalfTex_WIDTH, gGraveyardKidEyesHalfTex_HEIGHT, 16)];
#define gGraveyardKidEyesClosedTex_WIDTH 64
#define gGraveyardKidEyesClosedTex_HEIGHT 16
extern u64 gGraveyardKidEyesClosedTex[TEX_LEN(u64, gGraveyardKidEyesClosedTex_WIDTH, gGraveyardKidEyesClosedTex_HEIGHT, 16)];
extern u64 gGraveyardKidEyesClosed2Tex[TEX_LEN(u64, gGraveyardKidEyesClosedTex_WIDTH, gGraveyardKidEyesClosedTex_HEIGHT, 16)];
#define gGraveyardKidFingersTex_WIDTH 16
#define gGraveyardKidFingersTex_HEIGHT 16
extern u64 gGraveyardKidFingersTex[TEX_LEN(u64, gGraveyardKidFingersTex_WIDTH, gGraveyardKidFingersTex_HEIGHT, 8)];
#define gGraveyardKidShirt1Tex_WIDTH 16
#define gGraveyardKidShirt1Tex_HEIGHT 16
extern u64 gGraveyardKidShirt1Tex[TEX_LEN(u64, gGraveyardKidShirt1Tex_WIDTH, gGraveyardKidShirt1Tex_HEIGHT, 8)];
#define gGraveyardKidShirt2Tex_WIDTH 8
#define gGraveyardKidShirt2Tex_HEIGHT 8
extern u64 gGraveyardKidShirt2Tex[TEX_LEN(u64, gGraveyardKidShirt2Tex_WIDTH, gGraveyardKidShirt2Tex_HEIGHT, 8)];
#define gGraveyardKidStickTex_WIDTH 8
#define gGraveyardKidStickTex_HEIGHT 8
extern u64 gGraveyardKidStickTex[TEX_LEN(u64, gGraveyardKidStickTex_WIDTH, gGraveyardKidStickTex_HEIGHT, 8)];
#define gGraveyardKidBoot2Tex_WIDTH 8
#define gGraveyardKidBoot2Tex_HEIGHT 8
extern u64 gGraveyardKidBoot2Tex[TEX_LEN(u64, gGraveyardKidBoot2Tex_WIDTH, gGraveyardKidBoot2Tex_HEIGHT, 8)];
#define gGraveyardKidBoot1Tex_WIDTH 8
#define gGraveyardKidBoot1Tex_HEIGHT 16
extern u64 gGraveyardKidBoot1Tex[TEX_LEN(u64, gGraveyardKidBoot1Tex_WIDTH, gGraveyardKidBoot1Tex_HEIGHT, 8)];
#define gGraveyardKidPantsTex_WIDTH 16
#define gGraveyardKidPantsTex_HEIGHT 16
extern u64 gGraveyardKidPantsTex[TEX_LEN(u64, gGraveyardKidPantsTex_WIDTH, gGraveyardKidPantsTex_HEIGHT, 8)];

extern FlexSkeletonHeader gGraveyardKidSkel;
extern FlexSkeletonHeader gGraveyardKidSkel2;

typedef enum gGraveyardKidSkelLimb {
    /*  0 */ LIMB_OBJECT_CS_008540_NONE,
    /*  1 */ LIMB_OBJECT_CS_008450,
    /*  2 */ LIMB_OBJECT_CS_00845C,
    /*  3 */ LIMB_OBJECT_CS_008468,
    /*  4 */ LIMB_OBJECT_CS_008474,
    /*  5 */ LIMB_OBJECT_CS_008480,
    /*  6 */ LIMB_OBJECT_CS_00848C,
    /*  7 */ LIMB_OBJECT_CS_008498,
    /*  8 */ LIMB_OBJECT_CS_0084A4,
    /*  9 */ LIMB_OBJECT_CS_0084B0,
    /* 10 */ LIMB_OBJECT_CS_0084BC,
    /* 11 */ LIMB_OBJECT_CS_0084C8,
    /* 12 */ LIMB_OBJECT_CS_0084D4,
    /* 13 */ LIMB_OBJECT_CS_0084E0,
    /* 14 */ LIMB_OBJECT_CS_0084EC,
    /* 15 */ LIMB_OBJECT_CS_0084F8,
    /* 16 */ LIMB_OBJECT_CS_008540_MAX
} gGraveyardKidSkelLimb;

#endif
