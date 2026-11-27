#include "object_gmo.h"

#include "array_count.h"
#include "gfx.h"

Vtx object_gmoVtx_000030[] = {
#include "assets/objects/object_gmo/object_gmoVtx_000030.vtx.inc"
};

u64 gNejironBodyTLUT[] = {
#include "assets/objects/object_gmo/nejiron_body_tlut.rgba16.inc.c"
};

u64 gNejironBodyTex[] = {
#include "assets/objects/object_gmo/nejiron_body.ci8.inc.c"
};

u64 gNejironEyeOpenTex[] = {
#include "assets/objects/object_gmo/nejiron_eye_open.rgba16.inc.c"
};

u64 gNejironEyeHalfTex[] = {
#include "assets/objects/object_gmo/nejiron_eye_half.rgba16.inc.c"
};

u64 gNejironEyeClosedTex[] = {
#include "assets/objects/object_gmo/nejiron_eye_closed.rgba16.inc.c"
};

Gfx gNejironBodyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gNejironBodyTLUT),
    gsDPLoadTextureBlock(gNejironBodyTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_gmoVtx_000030, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 2, 0),
    gsSP2Triangles(11, 2, 1, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 15, 0, 0, 2, 13, 0, 0),
    gsSP2Triangles(16, 9, 17, 0, 2, 10, 12, 0),
    gsSP2Triangles(6, 12, 18, 0, 8, 12, 6, 0),
    gsSP2Triangles(18, 12, 19, 0, 7, 18, 19, 0),
    gsSP2Triangles(8, 7, 19, 0, 10, 9, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 18, 21, 3, 0),
    gsSP2Triangles(23, 4, 21, 0, 4, 24, 25, 0),
    gsSP2Triangles(24, 4, 3, 0, 20, 12, 10, 0),
    gsSP2Triangles(5, 6, 3, 0, 25, 21, 4, 0),
    gsSP2Triangles(20, 26, 12, 0, 27, 3, 21, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 31, 28, 0),
    gsSPVertex(&object_gmoVtx_000030[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 6, 0),
    gsSP2Triangles(5, 13, 7, 0, 6, 7, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 2, 16, 15, 0),
    gsSP2Triangles(13, 21, 7, 0, 7, 21, 11, 0),
    gsSP2Triangles(22, 3, 23, 0, 23, 24, 22, 0),
    gsSP2Triangles(3, 22, 25, 0, 19, 20, 26, 0),
    gsSP2Triangles(27, 3, 25, 0, 15, 14, 2, 0),
    gsSP2Triangles(25, 1, 27, 0, 28, 16, 2, 0),
    gsSP2Triangles(22, 1, 25, 0, 2, 14, 0, 0),
    gsSP2Triangles(1, 3, 27, 0, 29, 4, 30, 0),
    gsSPVertex(&object_gmoVtx_000030[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(12, 11, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(17, 16, 26, 0, 27, 25, 28, 0),
    gsSP2Triangles(26, 29, 30, 0, 23, 25, 27, 0),
    gsSP2Triangles(26, 16, 31, 0, 27, 24, 23, 0),
    gsSPVertex(&object_gmoVtx_000030[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 9, 10, 0),
    gsSP2Triangles(10, 5, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 13, 12, 17, 0),
    gsSP2Triangles(7, 6, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(2, 1, 22, 0, 2, 22, 23, 0),
    gsSP2Triangles(20, 19, 24, 0, 11, 13, 25, 0),
    gsSP2Triangles(13, 17, 15, 0, 25, 26, 11, 0),
    gsSP2Triangles(27, 28, 29, 0, 25, 13, 15, 0),
    gsSP2Triangles(25, 15, 30, 0, 31, 5, 11, 0),
    gsSP1Triangle(21, 31, 11, 0),
    gsSPVertex(&object_gmoVtx_000030[127], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 4, 6, 0, 5, 11, 12, 0),
    gsSP2Triangles(13, 7, 9, 0, 5, 10, 14, 0),
    gsSP2Triangles(6, 14, 10, 0, 4, 10, 15, 0),
    gsSP2Triangles(5, 4, 16, 0, 15, 17, 4, 0),
    gsSP2Triangles(9, 18, 13, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 16, 20, 0, 19, 7, 16, 0),
    gsSP2Triangles(11, 7, 21, 0, 16, 7, 11, 0),
    gsSP2Triangles(7, 13, 22, 0, 23, 18, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 29, 22, 0, 28, 30, 31, 0),
    gsSP1Triangle(29, 21, 7, 0),
    gsSPVertex(&object_gmoVtx_000030[159], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 1, 0, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gNejironEyesDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gmoVtx_000030[172], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

StandardLimb gNejironBodyLimb = { 
    { 0, 0, 0 }, NEJIRON_LIMB_EYES - 1, LIMB_DONE, gNejironBodyDL
};

StandardLimb gNejironEyeLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE, gNejironEyesDL
};

void* gNejironSkelLimbs[] = {
    &gNejironBodyLimb,
    &gNejironEyeLimb,
};

SkeletonHeader gNejironSkel = { 
    gNejironSkelLimbs, ARRAY_COUNT(gNejironSkelLimbs)
};

s16 sNejironIdleAnimFrameData[] = {
    0x0000, 0x0000, 
};

JointIndex sNejironIdleAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gNejironIdleAnim = { 
    { 2 }, sNejironIdleAnimFrameData,
    sNejironIdleAnimJointIndices, 1
};
