#ifndef OBJECT_KGY_H
#define OBJECT_KGY_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectKgyLimb {
    /* 0x00 */ OBJECT_KGY_LIMB_NONE,
    /* 0x01 */ OBJECT_KGY_LIMB_01,
    /* 0x02 */ OBJECT_KGY_LIMB_02,
    /* 0x03 */ OBJECT_KGY_LIMB_03,
    /* 0x04 */ OBJECT_KGY_LIMB_04,
    /* 0x05 */ OBJECT_KGY_LIMB_05,
    /* 0x06 */ OBJECT_KGY_LIMB_06,
    /* 0x07 */ OBJECT_KGY_LIMB_07,
    /* 0x08 */ OBJECT_KGY_LIMB_08,
    /* 0x09 */ OBJECT_KGY_LIMB_09,
    /* 0x0A */ OBJECT_KGY_LIMB_0A,
    /* 0x0B */ OBJECT_KGY_LIMB_0B,
    /* 0x0C */ OBJECT_KGY_LIMB_0C,
    /* 0x0D */ OBJECT_KGY_LIMB_0D,
    /* 0x0E */ OBJECT_KGY_LIMB_0E,
    /* 0x0F */ OBJECT_KGY_LIMB_0F,
    /* 0x10 */ OBJECT_KGY_LIMB_10,
    /* 0x11 */ OBJECT_KGY_LIMB_11,
    /* 0x12 */ OBJECT_KGY_LIMB_12,
    /* 0x13 */ OBJECT_KGY_LIMB_13,
    /* 0x14 */ OBJECT_KGY_LIMB_14,
    /* 0x15 */ OBJECT_KGY_LIMB_15,
    /* 0x16 */ OBJECT_KGY_LIMB_16,
    /* 0x17 */ OBJECT_KGY_LIMB_MAX
} ObjectKgyLimb;

extern s16 object_kgy_Anim_0008FCFrameData[];
extern JointIndex object_kgy_Anim_0008FCJointIndices[];
extern AnimationHeader object_kgy_Anim_0008FC;
extern s16 object_kgy_Anim_001764FrameData[];
extern JointIndex object_kgy_Anim_001764JointIndices[];
extern AnimationHeader object_kgy_Anim_001764;
extern s16 object_kgy_Anim_001EA4FrameData[];
extern JointIndex object_kgy_Anim_001EA4JointIndices[];
extern AnimationHeader object_kgy_Anim_001EA4;
extern s16 object_kgy_Anim_00292CFrameData[];
extern JointIndex object_kgy_Anim_00292CJointIndices[];
extern AnimationHeader object_kgy_Anim_00292C;
extern s16 object_kgy_Anim_003334FrameData[];
extern JointIndex object_kgy_Anim_003334JointIndices[];
extern AnimationHeader object_kgy_Anim_003334;
extern s16 object_kgy_Anim_003D88FrameData[];
extern JointIndex object_kgy_Anim_003D88JointIndices[];
extern AnimationHeader object_kgy_Anim_003D88;
extern s16 object_kgy_Anim_0042E4FrameData[];
extern JointIndex object_kgy_Anim_0042E4JointIndices[];
extern AnimationHeader object_kgy_Anim_0042E4;
extern s16 object_kgy_Anim_004B98FrameData[];
extern JointIndex object_kgy_Anim_004B98JointIndices[];
extern AnimationHeader object_kgy_Anim_004B98;
extern Vtx object_kgyVtx_004BB0[];
extern Gfx object_kgy_DL_009C80[];
extern Gfx object_kgy_DL_009DA0[];
extern Gfx object_kgy_DL_009F28[];
extern Gfx object_kgy_DL_00A0A0[];
extern Gfx object_kgy_DL_00A1C0[];
extern Gfx object_kgy_DL_00A300[];
extern Gfx object_kgy_DL_00A490[];
extern Gfx object_kgy_DL_00A618[];
extern Gfx object_kgy_DL_00A790[];
extern Gfx object_kgy_DL_00A998[];
extern Gfx object_kgy_DL_00AD60[];
extern Gfx object_kgy_DL_00B028[];
extern Gfx object_kgy_DL_00B130[];
extern Gfx object_kgy_DL_00B280[];
extern Gfx object_kgy_DL_00B3C8[];
extern Gfx object_kgy_DL_00B678[];
extern Gfx object_kgy_DL_00B7B8[];
extern Gfx object_kgy_DL_00B978[];
extern u64 object_kgy_TLUT_00BC28[];
extern u64 object_kgy_Tex_00BE28[];
extern u64 object_kgy_Tex_00C628[];
extern u64 object_kgy_Tex_00C728[];
extern u64 object_kgy_Tex_00C828[];
extern u64 object_kgy_Tex_00CC28[];
extern u64 object_kgy_Tex_00D028[];
extern u64 object_kgy_Tex_00D828[];
extern u64 object_kgy_Tex_00D928[];
extern u64 object_kgy_Tex_00E128[];
extern u64 object_kgy_Tex_00E228[];
extern u64 object_kgy_Tex_00E628[];
extern Vtx object_kgyVtx_00E728[];
extern Gfx object_kgy_DL_00E8F0[];
extern Vtx object_kgyVtx_00EE68[];
extern Gfx object_kgy_DL_00F180[];
extern u64 object_kgy_Tex_00F6B0[];
extern StandardLimb object_kgy_Standardlimb_00F7B0;
extern StandardLimb object_kgy_Standardlimb_00F7BC;
extern StandardLimb object_kgy_Standardlimb_00F7C8;
extern StandardLimb object_kgy_Standardlimb_00F7D4;
extern StandardLimb object_kgy_Standardlimb_00F7E0;
extern StandardLimb object_kgy_Standardlimb_00F7EC;
extern StandardLimb object_kgy_Standardlimb_00F7F8;
extern StandardLimb object_kgy_Standardlimb_00F804;
extern StandardLimb object_kgy_Standardlimb_00F810;
extern StandardLimb object_kgy_Standardlimb_00F81C;
extern StandardLimb object_kgy_Standardlimb_00F828;
extern StandardLimb object_kgy_Standardlimb_00F834;
extern StandardLimb object_kgy_Standardlimb_00F840;
extern StandardLimb object_kgy_Standardlimb_00F84C;
extern StandardLimb object_kgy_Standardlimb_00F858;
extern StandardLimb object_kgy_Standardlimb_00F864;
extern StandardLimb object_kgy_Standardlimb_00F870;
extern StandardLimb object_kgy_Standardlimb_00F87C;
extern StandardLimb object_kgy_Standardlimb_00F888;
extern StandardLimb object_kgy_Standardlimb_00F894;
extern StandardLimb object_kgy_Standardlimb_00F8A0;
extern StandardLimb object_kgy_Standardlimb_00F8AC;
extern void* object_kgy_Skel_00F910Limbs[];
extern FlexSkeletonHeader object_kgy_Skel_00F910;
extern s16 object_kgy_Anim_0101F0FrameData[];
extern JointIndex object_kgy_Anim_0101F0JointIndices[];
extern AnimationHeader object_kgy_Anim_0101F0;
extern s16 object_kgy_Anim_010B84FrameData[];
extern JointIndex object_kgy_Anim_010B84JointIndices[];
extern AnimationHeader object_kgy_Anim_010B84;

#endif
