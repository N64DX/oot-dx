#include "object_gi_shield_3_mm.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"

Vtx object_gi_shield_3Vtx[] = {
#include "assets/objects/object_gi_shield_3_mm/object_gi_shield_3Vtx.inc.c"
};

u64 gGiMirrorShieldHandleTex[] = {
#include "assets/objects/object_gi_shield_3_mm/gi_mirror_shield_handle.i4.inc.c"
};

u64 gGiMirrorShieldFaceSymbolTex[] = {
#include "assets/objects/object_gi_shield_3_mm/gi_mirror_shield_face_symbol.i8.inc.c"
};

u64 gGiMirrorShieldFaceBackgroundTex[] = {
#include "assets/objects/object_gi_shield_3_mm/gi_mirror_shield_face_background.i8.inc.c"
};

u64 gGiMirrorShieldPatternTex[] = {
#include "assets/objects/object_gi_shield_3_mm/gi_mirror_shield_pattern.i4.inc.c"
};

Gfx gGiMirrorShieldMMDL[] = {
    gsSPTexture(0x07D0, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(30, 30, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiMirrorShieldFaceBackgroundTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(object_gi_shield_3Vtx, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 7, 8, 0),
    gsSP2Triangles(4, 2, 1, 0, 1, 9, 3, 0),
    gsSP2Triangles(8, 9, 1, 0, 1, 6, 7, 0),
    gsSP2Triangles(1, 10, 5, 0, 0, 10, 1, 0),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 60, 10, 0, 255),
    gsDPSetEnvColor(155, 155, 0, 255),
    gsDPLoadTextureBlock_4b(gGiMirrorShieldPatternTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPVertex(&object_gi_shield_3Vtx[11], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 5, 0, 8, 9, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(1, 14, 15, 0, 1, 0, 14, 0),
    gsSP2Triangles(6, 2, 16, 0, 6, 7, 2, 0),
    gsSP2Triangles(15, 14, 17, 0, 14, 18, 17, 0),
    gsSP2Triangles(19, 20, 12, 0, 20, 10, 12, 0),
    gsSP2Triangles(21, 11, 8, 0, 11, 9, 8, 0),
    gsSP2Triangles(17, 20, 19, 0, 17, 18, 20, 0),
    gsSPTexture(0x07D0, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gGiMirrorShieldPatternTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPVertex(&object_gi_shield_3Vtx[33], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 8, 1, 0),
    gsSP2Triangles(1, 0, 3, 0, 4, 9, 1, 0),
    gsSP2Triangles(1, 9, 7, 0, 8, 5, 1, 0),
    gsSP2Triangles(6, 10, 1, 0, 1, 10, 2, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiMirrorShieldFaceSymbolTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_shield_3Vtx[44], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 0, 6, 0, 7, 0, 8, 0),
    gsSP2Triangles(0, 5, 8, 0, 7, 9, 0, 0),
    gsSP2Triangles(0, 10, 6, 0, 3, 10, 0, 0),
    gsSP2Triangles(2, 4, 0, 0, 0, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 155, 0, 0, 255),
    gsDPSetEnvColor(195, 195, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gGiMirrorShieldHandleTex, G_IM_FMT_I, 32, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_shield_3Vtx[55], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 6, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 11, 8, 0, 8, 13, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 55, 253),
    gsDPSetEnvColor(20, 0, 0, 255),
    gsDPLoadTextureBlock_4b(gGiMirrorShieldPatternTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_shield_3Vtx[71], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 0, 3, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 4, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 11, 13, 0, 11, 9, 13, 0),
    gsSP2Triangles(14, 11, 12, 0, 14, 10, 11, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(13, 9, 15, 0, 9, 8, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 20, 21, 0, 16, 19, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 20, 22, 21, 0),
    gsSP2Triangles(19, 18, 22, 0, 19, 22, 20, 0),
    gsSP2Triangles(23, 22, 18, 0, 23, 18, 17, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 27, 29, 0, 27, 25, 29, 0),
    gsSP2Triangles(30, 27, 28, 0, 30, 26, 27, 0),
    gsSP2Triangles(30, 29, 31, 0, 30, 28, 29, 0),
    gsSP2Triangles(29, 25, 31, 0, 25, 24, 31, 0),
    gsSPVertex(&object_gi_shield_3Vtx[103], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 0, 3, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 4, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 11, 13, 0, 11, 9, 13, 0),
    gsSP2Triangles(14, 11, 12, 0, 14, 10, 11, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(13, 9, 15, 0, 9, 8, 15, 0),
    gsSPEndDisplayList(),
};
