#include "assets/objects/object_gi_shield_1/object_gi_shield_1.h"
#include "object_gi_shield_1_extra.h"

#include "gfx.h"

Vtx gGiDekuShieldVtx_0290[] = {
#include "assets/objects/object_gi_shield_1/gGiDekuShieldVtx_0290.vtx.inc"
};

Vtx gGiDekuShieldVtx_0598[] = {
#include "assets/objects/object_gi_shield_1/gGiDekuShieldVtx_0598.vtx.inc"
};

u64 object_gi_shield_1_000040_Tex[] = {
#include "assets/objects/object_gi_shield_1/object_gi_shield_1_000040_Tex.ci8.inc.c"
};

u64 object_gi_shield_1_000040_TLUT[] = {
#include "assets/objects/object_gi_shield_1/object_gi_shield_1_000040_Tex.tlut.rgba16.inc.c"
};

u64 object_gi_shield_1_0000C0_Tex[] = {
#include "assets/objects/object_gi_shield_1/object_gi_shield_1_0000C0_Tex.ci8.inc.c"
};

u64 object_gi_shield_1_0000C0_TLUT[] = {
#include "assets/objects/object_gi_shield_1/object_gi_shield_1_0000C0_Tex.tlut.rgba16.inc.c"
};

u64 object_gi_shield_1_000140_TLUT[] = {
#include "assets/objects/object_gi_shield_1/object_gi_shield_1_000140_TLUT.rgba16.inc.c"
};

Gfx gGiWoodenShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0x07CF, 0x09C3, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_gi_shield_1_000000_Tex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_gi_shield_1_000140_TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gGiDekuShieldVtx_0290, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 8, 13, 0),
    gsSP2Triangles(16, 9, 11, 0, 4, 17, 18, 0),
    gsSP2Triangles(8, 19, 13, 0, 16, 11, 18, 0),
    gsSP2Triangles(11, 4, 18, 0, 20, 9, 21, 0),
    gsSP2Triangles(4, 3, 17, 0, 22, 23, 6, 0),
    gsSP2Triangles(3, 23, 22, 0, 16, 21, 9, 0),
    gsSP2Triangles(8, 15, 24, 0, 12, 20, 21, 0),
    gsSP2Triangles(11, 25, 4, 0, 26, 15, 13, 0),
    gsSP2Triangles(24, 22, 6, 0, 12, 21, 26, 0),
    gsSP2Triangles(3, 22, 17, 0, 2, 27, 0, 0),
    gsSP2Triangles(28, 27, 2, 0, 2, 29, 28, 0),
    gsSP2Triangles(12, 26, 13, 0, 8, 24, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_gi_shield_1_0000C0_Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_gi_shield_1_0000C0_TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gGiDekuShieldVtx_0598, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 2, 5, 0),
    gsSP2Triangles(1, 3, 7, 0, 3, 8, 7, 0),
    gsSP2Triangles(9, 1, 7, 0, 1, 9, 4, 0),
    gsSP2Triangles(8, 3, 0, 0, 0, 10, 8, 0),
    gsSP2Triangles(2, 10, 0, 0, 2, 6, 10, 0),
    gsSP2Triangles(2, 1, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 17, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gGiDekuShieldVtx_0598[30], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 3, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_shield_1_000040_Tex),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 3, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 63, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 3, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_gi_shield_1_000040_TLUT),
    gsSPVertex(&gGiDekuShieldVtx_0598[43], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 1, 3, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 6, 7, 0),
    gsSP1Triangle(1, 7, 4, 0),
    gsSPEndDisplayList(),
};
