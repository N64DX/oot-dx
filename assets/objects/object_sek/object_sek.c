#include "object_sek.h"

#include "gfx.h"

Vtx object_sekVtx_000000[] = {
#include "assets/objects/object_sek/object_sekVtx_000000.vtx.inc"
};

Vtx object_sekVtx_000BF0[] = {
#include "assets/objects/object_sek/object_sekVtx_000BF0.vtx.inc"
};

Vtx object_sekVtx_003010[] = {
#include "assets/objects/object_sek/object_sekVtx_003010.vtx.inc"
};

u64 object_sek_Tex_0003F0[] = {
#include "assets/objects/object_sek/tex_0003F0.ci8.inc.c"
};

u64 object_sek_Tex_0007F0[] = {
#include "assets/objects/object_sek/tex_0007F0.ci8.inc.c"
};

u64 object_sek_TLUT_001610[] = {
#include "assets/objects/object_sek/tlut_001610.rgba16.inc.c"
};

u64 object_sek_Tex_001810[] = {
#include "assets/objects/object_sek/tex_001810.ci8.inc.c"
};

u64 object_sek_Tex_001C10[] = {
#include "assets/objects/object_sek/tex_001C10.ci8.inc.c"
};

u64 object_sek_Tex_002010[] = {
#include "assets/objects/object_sek/tex_002010.ci8.inc.c"
};

u64 object_sek_Tex_002410[] = {
#include "assets/objects/object_sek/tex_002410.ci8.inc.c"
};

u64 object_sek_Tex_002810[] = {
#include "assets/objects/object_sek/tex_002810.ci8.inc.c"
};

u64 object_sek_Tex_002C10[] = {
#include "assets/objects/object_sek/tex_002C10.ci8.inc.c"
};

u64 object_sek_Tex_003A70[] = {
#include "assets/objects/object_sek/tex_003A70.ci8.inc.c"
};

u64 object_sek_Tex_004270[] = {
#include "assets/objects/object_sek/tex_004270.ci8.inc.c"
};

Gfx gOwlStatueClosedDL[] = {
    gsSPDisplayList(object_sek_DL_001110),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_0003F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_sekVtx_000000, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 8, 0),
    gsSP2Triangles(2, 7, 0, 0, 1, 8, 2, 0),
    gsSP2Triangles(5, 9, 3, 0, 5, 10, 9, 0),
    gsSP2Triangles(5, 11, 10, 0, 4, 11, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_0007F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_sekVtx_000000[12], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 1, 0, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_001810, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x00FC),
    gsSPVertex(&object_sekVtx_000000[19], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 2, 3, 0),
    gsSP2Triangles(0, 7, 8, 0, 6, 7, 0, 0),
    gsSP2Triangles(9, 7, 6, 0, 0, 2, 6, 0),
    gsSP2Triangles(8, 7, 9, 0, 0, 8, 4, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_sek_DL_001110[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_001810, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_sekVtx_000BF0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 0, 7, 0, 8, 7, 3, 0),
    gsSP2Triangles(3, 7, 0, 0, 0, 5, 9, 0),
    gsSP2Triangles(0, 9, 1, 0, 1, 9, 3, 0),
    gsSP2Triangles(7, 8, 6, 0, 3, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 12, 17, 10, 0),
    gsSP2Triangles(17, 12, 13, 0, 14, 13, 11, 0),
    gsSP2Triangles(11, 13, 18, 0, 11, 18, 12, 0),
    gsSP2Triangles(13, 19, 18, 0, 18, 19, 12, 0),
    gsSP2Triangles(19, 13, 12, 0, 17, 16, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_001C10, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_sekVtx_000BF0[20], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 3, 5, 4, 0),
    gsSPVertex(&object_sekVtx_000BF0[26], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_002010, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 253, 255, 255, 255),
    gsSPVertex(&object_sekVtx_000BF0[32], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_sekVtx_000BF0[37], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_002410, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_sekVtx_000BF0[42], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 3, 0),
    gsSP2Triangles(9, 4, 3, 0, 0, 4, 10, 0),
    gsSP2Triangles(10, 6, 5, 0, 5, 11, 10, 0),
    gsSP2Triangles(12, 1, 0, 0, 12, 0, 10, 0),
    gsSP2Triangles(0, 8, 3, 0, 8, 0, 11, 0),
    gsSP1Triangle(11, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_002810, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 253, 255, 255, 255),
    gsSPVertex(&object_sekVtx_000BF0[55], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 5, 0),
    gsSP2Triangles(5, 8, 6, 0, 0, 2, 5, 0),
    gsSP2Triangles(3, 2, 1, 0, 9, 8, 5, 0),
    gsSP2Triangles(8, 10, 6, 0, 9, 11, 8, 0),
    gsSP2Triangles(10, 8, 11, 0, 5, 12, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_002C10, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_sekVtx_000BF0[68], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 0, 0, 0, 2, 6, 0),
    gsSP2Triangles(7, 0, 4, 0, 5, 4, 6, 0),
    gsSP1Triangle(6, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_001810, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_sekVtx_000BF0[76], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_sekVtx_000BF0[79], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gOwlStatueOpenedDL[] = {
    gsSPDisplayList(object_sek_DL_001110),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_003A70, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_sekVtx_003010, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_004270, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_sekVtx_003010[4], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_sek_TLUT_001610),
    gsDPLoadTextureBlock(object_sek_Tex_001810, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&object_sekVtx_003010[12], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(10, 9, 18, 0, 10, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 8, 24, 0),
    gsSP2Triangles(19, 22, 25, 0, 19, 18, 22, 0),
    gsSP2Triangles(26, 18, 9, 0, 27, 28, 23, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_sekVtx_003010[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 4, 3, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 4, 8, 5, 0),
    gsSP2Triangles(14, 8, 4, 0, 15, 16, 1, 0),
    gsSP2Triangles(8, 15, 9, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 19, 0, 22, 23, 14, 0),
    gsSP2Triangles(23, 16, 14, 0, 14, 15, 8, 0),
    gsSP2Triangles(14, 24, 22, 0, 1, 9, 15, 0),
    gsSP2Triangles(19, 21, 17, 0, 17, 25, 18, 0),
    gsSP2Triangles(14, 26, 24, 0, 16, 15, 14, 0),
    gsSP2Triangles(27, 28, 29, 0, 0, 30, 31, 0),
    gsSP1Triangle(11, 31, 30, 0),
    gsSPVertex(&object_sekVtx_003010[76], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 3, 8, 4, 0),
    gsSP2Triangles(3, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 3, 17, 18, 0),
    gsSP2Triangles(3, 19, 17, 0, 18, 9, 3, 0),
    gsSP2Triangles(20, 9, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 23, 25, 0, 21, 22, 20, 0),
    gsSP2Triangles(10, 9, 20, 0, 20, 23, 10, 0),
    gsSP2Triangles(5, 26, 14, 0, 27, 10, 28, 0),
    gsSP2Triangles(29, 30, 31, 0, 28, 10, 23, 0),
    gsSP1Triangle(28, 23, 24, 0),
    gsSPVertex(&object_sekVtx_003010[108], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 2, 0),
    gsSPEndDisplayList(),
};
