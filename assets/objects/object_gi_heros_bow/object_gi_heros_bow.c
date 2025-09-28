#include "object_gi_heros_bow.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"

Vtx object_gi_bowVtx[] = {
#include "assets/objects/object_gi_heros_bow/object_gi_heros_bowVtx.inc.c"
};

u64 gGiBowHandleTex[] = {
#include "assets/objects/object_gi_heros_bow/gi_bow_handle.i8.inc.c"
};

u64 gGiBowStringTex[] = {
#include "assets/objects/object_gi_heros_bow/gi_bow_string.i8.inc.c"
};

Gfx gGiHerosBowHandleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 55, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiBowStringTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_gi_bowVtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 3, 5, 0, 2, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 8, 11, 0),
    gsSP2Triangles(8, 7, 11, 0, 9, 12, 7, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(23, 18, 17, 0, 23, 17, 24, 0),
    gsSP2Triangles(4, 25, 26, 0, 18, 27, 16, 0),
    gsSP2Triangles(11, 28, 10, 0, 15, 29, 13, 0),
    gsSP2Triangles(22, 14, 13, 0, 22, 13, 19, 0),
    gsSPVertex(&object_gi_bowVtx[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 18, 23, 16, 0),
    gsSP2Triangles(24, 21, 20, 0, 25, 21, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_bowVtx[62], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 4, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(8, 14, 9, 0, 11, 15, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiBowHandleTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_gi_bowVtx[78], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 6, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(19, 20, 5, 0, 4, 19, 5, 0),
    gsSP2Triangles(18, 13, 16, 0, 21, 10, 11, 0),
    gsSP2Triangles(9, 8, 22, 0, 8, 12, 22, 0),
    gsSP2Triangles(13, 8, 16, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 12, 27, 28, 0),
    gsSP2Triangles(12, 14, 27, 0, 29, 8, 7, 0),
    gsSP2Triangles(11, 30, 31, 0, 11, 6, 30, 0),
    gsSPVertex(&object_gi_bowVtx[110], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 4, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 5, 7, 0, 10, 19, 11, 0),
    gsSP2Triangles(20, 8, 0, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 12, 26, 27, 0),
    gsSP2Triangles(28, 29, 17, 0, 30, 31, 26, 0),
    gsSPVertex(&object_gi_bowVtx[142], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 4, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 6, 16, 0, 13, 12, 6, 0),
    gsSP2Triangles(17, 13, 16, 0, 18, 13, 17, 0),
    gsSP2Triangles(13, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_bowVtx[173], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 3, 0, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 2, 9, 10, 0),
    gsSP2Triangles(11, 9, 12, 0, 11, 10, 9, 0),
    gsSP2Triangles(9, 13, 12, 0, 9, 14, 13, 0),
    gsSP1Triangle(8, 14, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gGiHerosBowStringDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiBowStringTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_bowVtx[188], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_gi_bowVtx[192], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_gi_bowVtx[196], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
