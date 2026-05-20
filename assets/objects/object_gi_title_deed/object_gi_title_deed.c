#include "object_gi_title_deed.h"

#include "gfx.h"

Vtx gGiTitleDeedVtx[] = {
#include "assets/objects/object_gi_title_deed/object_gi_title_deedVtx.inc.c"
};

u64 gGiTitleDeedRightInscriptionsTex[] = {
#include "assets/objects/object_gi_title_deed/gi_title_deed_right_inscriptions.i8.inc.c"
};

u64 gGiTitleDeedLeftInscriptionsTex[] = {
#include "assets/objects/object_gi_title_deed/gi_title_deed_left_inscriptions.i8.inc.c"
};

u64 gGiTitleDeedSealAndRibbonTex[] = {
#include "assets/objects/object_gi_title_deed/gi_title_deed_seal_and_ribbon.i8.inc.c"
};

Gfx gGiTitleDeedSealAndRibbonDL[] = {
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiTitleDeedSealAndRibbonTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH),
    gsSPVertex(&gGiTitleDeedVtx[66], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 4, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 18, 21, 22, 0),
    gsSP2Triangles(18, 22, 19, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 25, 27, 26, 0),
    gsSP2Triangles(27, 28, 26, 0, 25, 29, 27, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 0, 255),
    gsDPLoadTextureBlock(gGiTitleDeedLeftInscriptionsTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH),
    gsSPVertex(&gGiTitleDeedVtx[54], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSP2Triangles(8, 2, 1, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 3, 2, 0, 9, 2, 8, 0),
    gsSP2Triangles(10, 4, 3, 0, 10, 3, 9, 0),
    gsSP2Triangles(11, 5, 4, 0, 11, 4, 10, 0),
    gsSP2Triangles(7, 0, 5, 0, 7, 5, 11, 0),
    gsSP2Triangles(11, 10, 9, 0, 11, 9, 8, 0),
    gsSP2Triangles(11, 8, 6, 0, 11, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gGiTitleDeedPaperDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiTitleDeedSealAndRibbonTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gGiTitleDeedVtx[30], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 5, 10, 11, 0),
    gsSP2Triangles(5, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 13, 0, 2, 0),
    gsSP2Triangles(13, 2, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 19, 9, 8, 0),
    gsSP2Triangles(19, 8, 7, 0, 19, 7, 6, 0),
    gsSP2Triangles(19, 6, 5, 0, 19, 5, 12, 0),
    gsSP2Triangles(19, 12, 20, 0, 21, 18, 22, 0),
    gsSP2Triangles(21, 15, 18, 0, 21, 23, 15, 0),
    gsDPPipeSync(),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiTitleDeedRightInscriptionsTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gGiTitleDeedVtx, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 5, 10, 11, 0),
    gsSP2Triangles(5, 11, 12, 0, 6, 13, 14, 0),
    gsSP2Triangles(6, 14, 7, 0, 13, 0, 2, 0),
    gsSP1Triangle(13, 2, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiTitleDeedLeftInscriptionsTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gGiTitleDeedVtx[15], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 10, 11, 0, 4, 11, 5, 0),
    gsSP2Triangles(12, 0, 13, 0, 0, 3, 13, 0),
    gsSP1Triangle(3, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gGiTitleDeedLandColorDL[] = {
    gsDPSetPrimColor(0, 0xFF, 0, 255, 0, 255),
    gsSPDisplayList(gGiTitleDeedSealAndRibbonDL),
    gsDPSetPrimColor(0, 0xFF, 255, 225, 155, 255),
    gsDPSetEnvColor(35, 0, 0, 255),
    gsSPBranchList(gGiTitleDeedPaperDL),
};

Gfx gGiTitleDeedSwampColorDL[] = {
    gsDPSetPrimColor(0, 0xFF, 0, 255, 0, 255),
    gsSPDisplayList(gGiTitleDeedSealAndRibbonDL),
    gsDPSetPrimColor(0, 0xFF, 140, 235, 100, 255),
    gsDPSetEnvColor(0, 45, 0, 255),
    gsSPBranchList(gGiTitleDeedPaperDL),
};

Gfx gGiTitleDeedMountainColorDL[] = {
    gsDPSetPrimColor(0, 0xFF, 255, 255, 0, 255),
    gsSPDisplayList(gGiTitleDeedSealAndRibbonDL),
    gsDPSetPrimColor(0, 0xFF, 255, 155, 155, 255),
    gsDPSetEnvColor(35, 0, 0, 255),
    gsSPBranchList(gGiTitleDeedPaperDL),
};

Gfx gGiTitleDeedOceanColorDL[] = {
    gsDPSetPrimColor(0, 0xFF, 255, 255, 0, 255),
    gsSPDisplayList(gGiTitleDeedSealAndRibbonDL),
    gsDPSetPrimColor(0, 0xFF, 140, 130, 255, 255),
    gsDPSetEnvColor(0, 0, 50, 255),
    gsSPBranchList(gGiTitleDeedPaperDL),
};
