#ifndef OBJECT_TITE_H
#define OBJECT_TITE_H

#include "animation.h"
#include "tex_len.h"
#include "ultra64.h"

extern s16 object_tite_Anim_0001D4_06000000_FrameData[];
extern JointIndex object_tite_Anim_0001D4_0600013C_JointIndices[];
extern AnimationHeader object_tite_Anim_0001D4;
extern s16 object_tite_Anim_0004F8_060001F0_FrameData[];
extern JointIndex object_tite_Anim_0004F8_06000460_JointIndices[];
extern AnimationHeader object_tite_Anim_0004F8;
extern s16 object_tite_Anim_00069C_06000510_FrameData[];
extern JointIndex object_tite_Anim_00069C_06000604_JointIndices[];
extern AnimationHeader object_tite_Anim_00069C;
extern s16 object_tite_Anim_00083C_060006B0_FrameData[];
extern JointIndex object_tite_Anim_00083C_060007A4_JointIndices[];
extern AnimationHeader object_tite_Anim_00083C;
extern s16 object_tite_Anim_000A14_06000850_FrameData[];
extern JointIndex object_tite_Anim_000A14_0600097C_JointIndices[];
extern AnimationHeader object_tite_Anim_000A14;
extern s16 object_tite_Anim_000C70_06000A30_FrameData[];
extern JointIndex object_tite_Anim_000C70_06000BD8_JointIndices[];
extern AnimationHeader object_tite_Anim_000C70;
extern s16 object_tite_Anim_000F50_06000C80_FrameData[];
extern JointIndex object_tite_Anim_000F50_06000EB8_JointIndices[];
extern AnimationHeader object_tite_Anim_000F50;
extern s16 object_tite_Anim_0012E4_06000F60_FrameData[];
extern JointIndex object_tite_Anim_0012E4_0600124C_JointIndices[];
extern AnimationHeader object_tite_Anim_0012E4;
extern u8 object_tite_Blob_0012F4[];
#define object_tite_Tex_001300_WIDTH 16
#define object_tite_Tex_001300_HEIGHT 32
extern u64 object_tite_Tex_001300[TEX_LEN(u64, object_tite_Tex_001300_WIDTH, object_tite_Tex_001300_HEIGHT, 16)];
#define object_tite_Tex_001700_WIDTH 16
#define object_tite_Tex_001700_HEIGHT 16
extern u64 object_tite_Tex_001700[TEX_LEN(u64, object_tite_Tex_001700_WIDTH, object_tite_Tex_001700_HEIGHT, 16)];
#define object_tite_Tex_001900_WIDTH 8
#define object_tite_Tex_001900_HEIGHT 16
extern u64 object_tite_Tex_001900[TEX_LEN(u64, object_tite_Tex_001900_WIDTH, object_tite_Tex_001900_HEIGHT, 16)];
#define object_tite_Tex_001A00_WIDTH 4
#define object_tite_Tex_001A00_HEIGHT 16
extern u64 object_tite_Tex_001A00[TEX_LEN(u64, object_tite_Tex_001A00_WIDTH, object_tite_Tex_001A00_HEIGHT, 16)];
#define object_tite_Tex_001A80_WIDTH 8
#define object_tite_Tex_001A80_HEIGHT 8
extern u64 object_tite_Tex_001A80[TEX_LEN(u64, object_tite_Tex_001A80_WIDTH, object_tite_Tex_001A80_HEIGHT, 16)];
#define object_tite_Tex_001B00_WIDTH 16
#define object_tite_Tex_001B00_HEIGHT 32
extern u64 object_tite_Tex_001B00[TEX_LEN(u64, object_tite_Tex_001B00_WIDTH, object_tite_Tex_001B00_HEIGHT, 16)];
#define object_tite_Tex_001F00_WIDTH 16
#define object_tite_Tex_001F00_HEIGHT 16
extern u64 object_tite_Tex_001F00[TEX_LEN(u64, object_tite_Tex_001F00_WIDTH, object_tite_Tex_001F00_HEIGHT, 16)];
#define object_tite_Tex_002100_WIDTH 8
#define object_tite_Tex_002100_HEIGHT 16
extern u64 object_tite_Tex_002100[TEX_LEN(u64, object_tite_Tex_002100_WIDTH, object_tite_Tex_002100_HEIGHT, 16)];

extern u64 object_tite_Tex_yellow_body[TEX_LEN(u64, 16, 32, 16)];
extern u64 object_tite_Tex_yellow_eye[TEX_LEN(u64, 16, 16, 16)];
extern u64 object_tite_Tex_yellow_leg[TEX_LEN(u64, 8, 16, 16)];

extern Vtx object_tite_Vtx_002200[];
extern Vtx object_tite_Vtx_002470[];
extern Vtx object_tite_Vtx_002690[];
extern Vtx object_tite_Vtx_002750[];
extern Vtx object_tite_Vtx_002970[];
extern Vtx object_tite_Vtx_002A30[];
extern Vtx object_tite_Vtx_002C50[];
extern Vtx object_tite_Vtx_002D10[];
extern Vtx object_tite_Vtx_002F30[];
extern Gfx object_tite_DL_002FF0[46];
extern Gfx object_tite_DL_003160[38];
extern Gfx object_tite_DL_003290[20];
extern Gfx object_tite_DL_003330[38];
extern Gfx object_tite_DL_003460[20];
extern Gfx object_tite_DL_003500[38];
extern Gfx object_tite_DL_003630[20];
extern Gfx object_tite_DL_0036D0[38];
extern Gfx object_tite_DL_003800[20];
extern StandardLimb object_tite_Limb_0038A0;
extern StandardLimb object_tite_Limb_0038AC;
extern StandardLimb object_tite_Limb_0038B8;
extern StandardLimb object_tite_Limb_0038C4;
extern StandardLimb object_tite_Limb_0038D0;
extern StandardLimb object_tite_Limb_0038DC;
extern StandardLimb object_tite_Limb_0038E8;
extern StandardLimb object_tite_Limb_0038F4;
extern StandardLimb object_tite_Limb_003900;
extern StandardLimb object_tite_Limb_00390C;
extern StandardLimb object_tite_Limb_003918;
extern StandardLimb object_tite_Limb_003924;
extern StandardLimb object_tite_Limb_003930;
extern StandardLimb object_tite_Limb_00393C;
extern StandardLimb object_tite_Limb_003948;
extern StandardLimb object_tite_Limb_003954;
extern StandardLimb object_tite_Limb_003960;
extern StandardLimb object_tite_Limb_00396C;
extern StandardLimb object_tite_Limb_003978;
extern StandardLimb object_tite_Limb_003984;
extern StandardLimb object_tite_Limb_003990;
extern StandardLimb object_tite_Limb_00399C;
extern StandardLimb object_tite_Limb_0039A8;
extern StandardLimb object_tite_Limb_0039B4;
extern void* object_tite_Skel_003A20_060039C0_Limbs[];
typedef enum object_tite_Skel_003A20Limb {
    /*  0 */ LIMB_OBJECT_TITE_003A20_NONE,
    /*  1 */ LIMB_OBJECT_TITE_0038A0,
    /*  2 */ LIMB_OBJECT_TITE_0038AC,
    /*  3 */ LIMB_OBJECT_TITE_0038B8,
    /*  4 */ LIMB_OBJECT_TITE_0038C4,
    /*  5 */ LIMB_OBJECT_TITE_0038D0,
    /*  6 */ LIMB_OBJECT_TITE_0038DC,
    /*  7 */ LIMB_OBJECT_TITE_0038E8,
    /*  8 */ LIMB_OBJECT_TITE_0038F4,
    /*  9 */ LIMB_OBJECT_TITE_003900,
    /* 10 */ LIMB_OBJECT_TITE_00390C,
    /* 11 */ LIMB_OBJECT_TITE_003918,
    /* 12 */ LIMB_OBJECT_TITE_003924,
    /* 13 */ LIMB_OBJECT_TITE_003930,
    /* 14 */ LIMB_OBJECT_TITE_00393C,
    /* 15 */ LIMB_OBJECT_TITE_003948,
    /* 16 */ LIMB_OBJECT_TITE_003954,
    /* 17 */ LIMB_OBJECT_TITE_003960,
    /* 18 */ LIMB_OBJECT_TITE_00396C,
    /* 19 */ LIMB_OBJECT_TITE_003978,
    /* 20 */ LIMB_OBJECT_TITE_003984,
    /* 21 */ LIMB_OBJECT_TITE_003990,
    /* 22 */ LIMB_OBJECT_TITE_00399C,
    /* 23 */ LIMB_OBJECT_TITE_0039A8,
    /* 24 */ LIMB_OBJECT_TITE_0039B4,
    /* 25 */ LIMB_OBJECT_TITE_003A20_MAX
} object_tite_Skel_003A20Limb;
extern SkeletonHeader object_tite_Skel_003A20;

#endif
