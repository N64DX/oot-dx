#include "object_bee.h"

#include "array_count.h"

Vtx object_beeVtx_000070[] = {
#include "assets/objects/object_bee/object_beeVtx_000070.vtx.inc"
};

u64 gBeeWingTLUT[] = {
#include "assets/objects/object_bee/bee_wing_tlut.rgba16.inc.c"
};

u64 gBeeHeadTLUT[] = {
#include "assets/objects/object_bee/bee_head_tlut.rgba16.inc.c"
};

u64 gBeeBodyTLUT[] = {
#include "assets/objects/object_bee/bee_body_tlut.rgba16.inc.c"
};

u64 gBeeAntennaeTLUT[] = {
#include "assets/objects/object_bee/bee_antennae_tlut.rgba16.inc.c"
};

u64 gBeeWingTex[] = {
#include "assets/objects/object_bee/bee_wing.ci4.inc.c"
};

u64 gBeeHeadTex[] = {
#include "assets/objects/object_bee/bee_head.ci4.inc.c"
};

u64 gBeeBodyTex[] = {
#include "assets/objects/object_bee/bee_body.ci4.inc.c"
};

u64 gBeeAntennaeTex[] = {
#include "assets/objects/object_bee/bee_antennae.ci4.inc.c"
};

Gfx gBeeBodyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gBeeHeadTLUT),
    gsDPLoadTextureBlock_4b(gBeeHeadTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_beeVtx_000070[8], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 3, 0, 7, 9, 12, 0),
    gsSP2Triangles(13, 14, 2, 0, 6, 15, 16, 0),
    gsSP2Triangles(16, 5, 6, 0, 3, 5, 10, 0),
    gsSP1Triangle(14, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gBeeBodyTLUT),
    gsDPLoadTextureBlock_4b(gBeeBodyTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_beeVtx_000070[25], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 1, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 2, 13, 0, 0),
    gsSP2Triangles(9, 14, 2, 0, 2, 15, 16, 0),
    gsSP2Triangles(12, 17, 10, 0, 8, 18, 6, 0),
    gsSP2Triangles(5, 19, 3, 0, 20, 21, 22, 0),
    gsSP2Triangles(22, 23, 20, 0, 16, 24, 2, 0),
    gsSP1Triangle(2, 24, 13, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_pal16(15, gBeeHeadTLUT),
    gsDPLoadTextureBlock_4b(gBeeHeadTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_beeVtx_000070[50], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gBeeHeadDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gBeeHeadTLUT),
    gsDPLoadTextureBlock_4b(gBeeHeadTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_beeVtx_000070[64], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 0, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 13, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gBeeAntennaeDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gBeeAntennaeTLUT),
    gsDPLoadTextureBlock_4b(gBeeAntennaeTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_beeVtx_000070[55], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSPVertex(&object_beeVtx_000070[60], 4, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gBeeRightWingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gBeeWingTLUT),
    gsDPLoadTextureBlock_4b(gBeeWingTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_beeVtx_000070[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gBeeLeftWingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gBeeWingTLUT),
    gsDPLoadTextureBlock_4b(gBeeWingTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_beeVtx_000070, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

s16 sBeeFlyingAnimFrameData[] = {
    0x0000, 0x0240, 0xFFF2, 0x4000, 0xBFA1, 0xFAB4, 0xF3DC, 0x405F, 0x054C, 0x0C24, 0x8000, 0x19AE, 0xFD14, 0x99AE, 0x7D14, 0x0000, 
};

JointIndex sBeeFlyingAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0005, 0x0006, 0x0007 },
    { 0x0000, 0x0000, 0x000B },
    { 0x0008, 0x0009, 0x0007 },
    { 0x000A, 0x000A, 0x000D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gBeeFlyingAnim = { 
    { 2 }, sBeeFlyingAnimFrameData, sBeeFlyingAnimJointIndices, 11
};

StandardLimb gBeeRootLimb = { 
    { 0, 576, -14 }, OBJECT_BEE_LIMB_WINGS_ROOT - 1, LIMB_DONE, NULL
};

StandardLimb gBeeWingsRootLimb = { 
    { 0, 0, 0 }, OBJECT_BEE_LIMB_LEFT_WING_ROOT - 1, OBJECT_BEE_LIMB_BODY - 1, NULL
};

StandardLimb gBeeLeftWingRootLimb = { 
    { 40, 129, 102 }, OBJECT_BEE_LIMB_LEFT_WING - 1, OBJECT_BEE_LIMB_RIGHT_WING_ROOT - 1, NULL
};

StandardLimb gBeeLeftWingLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE, gBeeLeftWingDL
};

StandardLimb gBeeRightWingRootLimb = { 
    { 40, 129, -102 }, OBJECT_BEE_LIMB_RIGHT_WING - 1, LIMB_DONE, NULL
};

StandardLimb gBeeRightWingLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE, gBeeRightWingDL
};

StandardLimb gBeeBodyLimb = { 
    { 0, 0, 0 }, OBJECT_BEE_LIMB_ANTENNAE - 1, LIMB_DONE, gBeeBodyDL
};

StandardLimb gBeeAntennaeLimb = { 
    { 0, 0, 0 }, LIMB_DONE, OBJECT_BEE_LIMB_HEAD - 1, gBeeAntennaeDL
};

StandardLimb gBeeHeadLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE, gBeeHeadDL
};

void* gBeeSkelLimbs[] = {
    &gBeeRootLimb, /* OBJECT_BEE_LIMB_ROOT */
    &gBeeWingsRootLimb, /* OBJECT_BEE_LIMB_WINGS_ROOT */
    &gBeeLeftWingRootLimb, /* OBJECT_BEE_LIMB_LEFT_WING_ROOT */
    &gBeeLeftWingLimb, /* OBJECT_BEE_LIMB_LEFT_WING */
    &gBeeRightWingRootLimb, /* OBJECT_BEE_LIMB_RIGHT_WING_ROOT */
    &gBeeRightWingLimb, /* OBJECT_BEE_LIMB_RIGHT_WING */
    &gBeeBodyLimb, /* OBJECT_BEE_LIMB_BODY */
    &gBeeAntennaeLimb, /* OBJECT_BEE_LIMB_ANTENNAE */
    &gBeeHeadLimb, /* OBJECT_BEE_LIMB_HEAD */
};

SkeletonHeader gBeeSkel = { 
    gBeeSkelLimbs, ARRAY_COUNT(gBeeSkelLimbs)
};

