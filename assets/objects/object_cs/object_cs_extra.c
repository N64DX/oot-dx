#include "assets/objects/object_cs/object_cs.h"
#include "object_cs_extra.h"

#include "array_count.h"
#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gGraveyardKidHair2Tex[TEX_LEN(u64, 16, 32, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidHair2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidEyesOpen2Tex[TEX_LEN(u64, gGraveyardKidEyesOpenTex_WIDTH, gGraveyardKidEyesOpenTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesOpen2Tex.rgba16.inc.c"
};

u64 gGraveyardKidEyesHalf2Tex[TEX_LEN(u64, gGraveyardKidEyesHalfTex_WIDTH, gGraveyardKidEyesHalfTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesHalf2Tex.rgba16.inc.c"
};

u64 gGraveyardKidEyesClosed2Tex[TEX_LEN(u64, gGraveyardKidEyesClosedTex_WIDTH, gGraveyardKidEyesClosedTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesClosed2Tex.rgba16.inc.c"
};

u64 gGraveyardKidShirt12Tex[TEX_LEN(u64, gGraveyardKidShirt1Tex_WIDTH, gGraveyardKidShirt1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt12Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidShirt22Tex[TEX_LEN(u64, gGraveyardKidShirt2Tex_WIDTH, gGraveyardKidShirt2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt22Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidBoot2Tex[TEX_LEN(u64, gGraveyardKidBoot2Tex_WIDTH, gGraveyardKidBoot2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidBoot2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidPants2Tex[TEX_LEN(u64, gGraveyardKidPantsTex_WIDTH, gGraveyardKidPantsTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidPants2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

Gfx gGraveyardKidChest2DL[75] = {
#include "assets/objects/object_cs/gGraveyardKidChest2DL.inc.c"
};

Gfx gGraveyardKidHead2DL[148] = {
#include "assets/objects/object_cs/gGraveyardKidHead2DL.inc.c"
};

Gfx gGraveyardKidRightUpperArm2DL[55] = {
#include "assets/objects/object_cs/gGraveyardKidRightUpperArm2DL.inc.c"
};

Gfx gGraveyardKidRightArm2DL[73] = {
#include "assets/objects/object_cs/gGraveyardKidRightArm2DL.inc.c"
};

Gfx gGraveyardKidLeftUpperArm2DL[55] = {
#include "assets/objects/object_cs/gGraveyardKidLeftUpperArm2DL.inc.c"
};

Gfx gGraveyardKidLeftArm2DL[73] = {
#include "assets/objects/object_cs/gGraveyardKidLeftArm2DL.inc.c"
};

Gfx gGraveyardKidTorso2DL[36] = {
#include "assets/objects/object_cs/gGraveyardKidTorso2DL.inc.c"
};

Gfx gGraveyardKidRightThigh2DL[42] = {
#include "assets/objects/object_cs/gGraveyardKidRightThigh2DL.inc.c"
};

Gfx gGraveyardKidLeftThigh2DL[42] = {
#include "assets/objects/object_cs/gGraveyardKidLeftThigh2DL.inc.c"
};

StandardLimb gGraveyardKidTorso2Limb = {
#include "assets/objects/object_cs/gGraveyardKidTorso2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftThigh2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftThigh2Limb.inc.c"
};

StandardLimb gGraveyardKidRightThigh2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightThigh2Limb.inc.c"
};

StandardLimb gGraveyardKidChest2Limb = {
#include "assets/objects/object_cs/gGraveyardKidChest2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftShoulder2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftShoulder2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftArm2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftArm2Limb.inc.c"
};

StandardLimb gGraveyardKidRightShoulder2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightShoulder2Limb.inc.c"
};

StandardLimb gGraveyardKidRightArm2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightArm2Limb.inc.c"
};

StandardLimb gGraveyardKidHead2Limb = {
#include "assets/objects/object_cs/gGraveyardKidHead2Limb.inc.c"
};

void* gGraveyardKidSkel2_06008504_Limbs[] = {
#include "assets/objects/object_cs/gGraveyardKidSkel2_06008504_Limbs.inc.c"
};

FlexSkeletonHeader gGraveyardKidSkel2 = {
#include "assets/objects/object_cs/gGraveyardKidSkel2.inc.c"
};
