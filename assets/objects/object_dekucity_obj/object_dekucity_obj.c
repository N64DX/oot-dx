#include "object_dekucity_obj.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_dekucity_objVtx_001980[] = {
#include "assets/objects/object_dekucity_obj/object_dekucity_objVtx_001980.vtx.inc"
};

Vtx object_dekucity_objVtx_003830[] = {
#include "assets/objects/object_dekucity_obj/object_dekucity_objVtx_003830.vtx.inc"
};

u64 object_dekucity_obj_Tex_002008[] = {
#include "assets/objects/object_dekucity_obj/tex_002008.rgba16.inc.c"
};

u64 object_dekucity_obj_Tex_002808[] = {
#include "assets/objects/object_dekucity_obj/tex_002808.rgba16.inc.c"
};

u64 object_dekucity_obj_Tex_003008[] = {
#include "assets/objects/object_dekucity_obj/tex_003008.i4.inc.c"
};

u64 object_dekucity_obj_Tex_003AC0[] = {
#include "assets/objects/object_dekucity_obj/tex_003AC0.rgba16.inc.c"
};

u64 object_dekucity_obj_Tex_003EC0[] = {
#include "assets/objects/object_dekucity_obj/tex_003EC0.rgba16.inc.c"
};

Gfx object_dekucity_obj_DL_001D80[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(object_dekucity_obj_Tex_003008, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(object_dekucity_obj_Tex_003008, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsSPDisplayList(0x0B000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_dekucity_objVtx_001980[22], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(12, 3, 2, 0, 12, 2, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 6, 0, 16, 6, 5, 0),
    gsSP2Triangles(16, 5, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(25, 23, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 27, 26, 0, 28, 26, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 30, 29, 0),
    gsSPVertex(&object_dekucity_objVtx_001980[54], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 5, 8, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx object_dekucity_obj_DL_001ED8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xA0, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_dekucity_obj_Tex_002808, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_dekucity_obj_Tex_002008, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_dekucity_objVtx_001980, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 5, 0),
    gsSP2Triangles(11, 12, 9, 0, 11, 9, 6, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 11, 0),
    gsSP2Triangles(16, 13, 10, 0, 16, 10, 17, 0),
    gsSP2Triangles(17, 10, 5, 0, 17, 5, 18, 0),
    gsSP2Triangles(18, 5, 8, 0, 18, 8, 19, 0),
    gsSP2Triangles(8, 7, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(19, 8, 0, 0, 19, 0, 20, 0),
    gsSP2Triangles(20, 0, 3, 0, 20, 3, 21, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_dekucity_obj_DL_003998[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_dekucity_obj_Tex_003EC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_dekucity_obj_Tex_003AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_dekucity_objVtx_003830, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 5, 0),
    gsSP2Triangles(11, 12, 9, 0, 11, 9, 6, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 11, 0),
    gsSP2Triangles(16, 13, 10, 0, 16, 10, 17, 0),
    gsSP2Triangles(17, 10, 5, 0, 17, 5, 18, 0),
    gsSP2Triangles(18, 5, 8, 0, 18, 8, 19, 0),
    gsSP2Triangles(8, 7, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(19, 8, 0, 0, 19, 0, 20, 0),
    gsSP2Triangles(20, 0, 3, 0, 20, 3, 21, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsSPEndDisplayList(),
};
