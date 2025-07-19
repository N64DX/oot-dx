#include "object_gi_gold_dust.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"

Vtx object_gi_gold_dustVtx[] = {
#include "assets/objects/object_gi_gold_dust/object_gi_gold_dustVtx.inc.c"
};

u64 gGiGoldDustPowderClothTex[] = {
#include "assets/objects/object_gi_gold_dust/gi_gold_dust_powder_cloth.i8.inc.c"
};

u64 gGiGoldDustPowderContentTex[] = {
#include "assets/objects/object_gi_gold_dust/gi_gold_dust_powder_content.i4.inc.c"
};

Gfx gGiGoldDustPowderDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 135, 107, 0, 255),
    gsDPSetEnvColor(70, 60, 20, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiGoldDustPowderClothTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_gold_dustVtx[23], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 13, 0, 0),
    gsSP2Triangles(16, 15, 3, 0, 16, 8, 17, 0),
    gsSP2Triangles(17, 10, 18, 0, 18, 12, 19, 0),
    gsSP2Triangles(20, 21, 14, 0, 22, 20, 13, 0),
    gsSP2Triangles(23, 22, 15, 0, 23, 17, 24, 0),
    gsSP2Triangles(24, 18, 25, 0, 25, 19, 26, 0),
    gsSP2Triangles(27, 20, 28, 0, 28, 22, 29, 0),
    gsSP2Triangles(29, 23, 30, 0, 31, 30, 23, 0),
    gsSPVertex(&object_gi_gold_dustVtx[55], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(13, 12, 1, 0, 14, 13, 0, 0),
    gsSP2Triangles(15, 7, 16, 0, 16, 9, 17, 0),
    gsSP2Triangles(17, 11, 18, 0, 19, 18, 11, 0),
    gsSP2Triangles(20, 19, 12, 0, 21, 20, 13, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 28, 27, 0),
    gsSP1Triangle(30, 31, 29, 0),
    gsSPVertex(&object_gi_gold_dustVtx[87], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 1, 11, 10, 0),
    gsSP2Triangles(12, 13, 1, 0, 14, 5, 15, 0),
    gsSP2Triangles(5, 7, 16, 0, 7, 9, 17, 0),
    gsSP2Triangles(11, 17, 9, 0, 13, 18, 11, 0),
    gsSP2Triangles(19, 20, 13, 0, 15, 21, 22, 0),
    gsSP2Triangles(16, 23, 15, 0, 17, 24, 16, 0),
    gsSP2Triangles(17, 18, 25, 0, 18, 20, 26, 0),
    gsSP2Triangles(20, 27, 28, 0, 23, 29, 21, 0),
    gsSP1Triangle(24, 30, 23, 0),
    gsSPVertex(&object_gi_gold_dustVtx[118], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 1, 12, 9, 0),
    gsSP2Triangles(13, 14, 1, 0, 13, 4, 15, 0),
    gsSP2Triangles(4, 6, 16, 0, 6, 8, 17, 0),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 225, 225, 0, 255),
    gsDPSetEnvColor(160, 95, 0, 255),
    gsDPLoadTextureBlock_4b(gGiGoldDustPowderContentTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH),
    gsSPVertex(object_gi_gold_dustVtx, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 1, 14, 16, 0),
    gsSP2Triangles(1, 0, 17, 0, 1, 17, 18, 0),
    gsSP2Triangles(18, 14, 1, 0, 18, 12, 14, 0),
    gsSP2Triangles(12, 18, 19, 0, 9, 12, 19, 0),
    gsSP2Triangles(19, 10, 9, 0, 10, 19, 20, 0),
    gsSP2Triangles(21, 5, 7, 0, 21, 3, 5, 0),
    gsSP2Triangles(3, 21, 17, 0, 0, 3, 17, 0),
    gsSP2Triangles(19, 18, 17, 0, 20, 19, 17, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 22, 11, 10, 0),
    gsSP2Triangles(11, 13, 9, 0, 13, 15, 12, 0),
    gsSP2Triangles(15, 16, 14, 0, 16, 2, 1, 0),
    gsSPEndDisplayList(),
};
