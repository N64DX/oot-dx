#include "object_mkk.h"

Vtx object_mkkVtx_000000[] = {
#include "assets/objects/object_mkk/object_mkkVtx_000000.vtx.inc"
};

Vtx object_mkkVtx_0000E0[] = {
#include "assets/objects/object_mkk/object_mkkVtx_0000E0.vtx.inc"
};

Vtx object_mkkVtx_0001C0[] = {
#include "assets/objects/object_mkk/object_mkkVtx_0001C0.vtx.inc"
};

Vtx object_mkkVtx_0002B0[] = {
#include "assets/objects/object_mkk/object_mkkVtx_0002B0.vtx.inc"
};

u64 gBlackBoeTex[] = {
#include "assets/objects/object_mkk/black_boe.i4.inc.c"
};

u64 gWhiteBoeTex[] = {
#include "assets/objects/object_mkk/white_boe.i4.inc.c"
};

u64 gBoeEyeTex[] = {
#include "assets/objects/object_mkk/boe_eye.rgba16.inc.c"
};

Gfx gBlackBoeBodyMaterialDL[] = {
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gBlackBoeTex, G_IM_FMT_I, 16, 16, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4,
                            4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx gBlackBoeBodyModelDL[] = {
    gsSPVertex(object_mkkVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gBlackBoeEndDL[] = {
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gBlackBoeEyesDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gBoeEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_mkkVtx_0000E0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gWhiteBoeBodyMaterialDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gWhiteBoeTex, G_IM_FMT_I, 16, 16, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx gWhiteBoeBodyModelDL[] = {
    gsSPVertex(object_mkkVtx_0001C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gWhiteBoeEndDL[] = {
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gWhiteBoeEyesDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gBoeEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_mkkVtx_0002B0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};
