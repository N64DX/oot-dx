#include "object_haka_obj.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_haka_objVtx_000000[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_000000.vtx.inc"
};

Vtx object_haka_objVtx_000180[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_000180.vtx.inc"
};

Vtx object_haka_objVtx_000F20[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_000F20.vtx.inc"
};

Vtx object_haka_objVtx_001040[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_001040.vtx.inc"
};

Vtx object_haka_objVtx_001390[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_001390.vtx.inc"
};

Vtx object_haka_objVtx_0015C0[] = {
#include "assets/objects/object_haka_obj/object_haka_objVtx_0015C0.vtx.inc"
};

u64 object_haka_obj_TLUT_001800[] = {
#include "assets/objects/object_haka_obj/tlut_001800.rgba16.inc.c"
};

u64 object_haka_obj_TLUT_001A00[] = {
#include "assets/objects/object_haka_obj/tex_002C40.tlut.rgba16.inc.c"
};

u64 object_haka_obj_TLUT_001A20[] = {
#include "assets/objects/object_haka_obj/tex_003440.tlut.rgba16.inc.c"
};

u64 object_haka_obj_TLUT_001A40[] = {
#include "assets/objects/object_haka_obj/tlut_001A40.rgba16.inc.c"
};

u64 object_haka_obj_Tex_001C40[] = {
#include "assets/objects/object_haka_obj/tex_001C40.ci8.inc.c"
};

u64 object_haka_obj_Tex_002040[] = {
#include "assets/objects/object_haka_obj/tex_002040.ci8.inc.c"
};

u64 object_haka_obj_Tex_002440[] = {
#include "assets/objects/object_haka_obj/tex_002440.rgba16.inc.c"
};

u64 object_haka_obj_Tex_002C40[] = {
#include "assets/objects/object_haka_obj/tex_002C40.ci4.inc.c"
};

u64 object_haka_obj_Tex_003440[] = {
#include "assets/objects/object_haka_obj/tex_003440.ci4.inc.c"
};

u64 object_haka_obj_Tex_003C40[] = {
#include "assets/objects/object_haka_obj/tex_003C40.ci8.inc.c"
};

u64 object_haka_obj_Tex_004440[] = {
#include "assets/objects/object_haka_obj/tex_004440.ci8.inc.c"
};

u64 object_haka_obj_Tex_004840[] = {
#include "assets/objects/object_haka_obj/tex_004840.rgba16.inc.c"
};

u64 object_haka_obj_Tex_004C40[] = {
#include "assets/objects/object_haka_obj/tex_004C40.rgba16.inc.c"
};

u64 object_haka_obj_Tex_004E40[] = {
#include "assets/objects/object_haka_obj/tex_004E40.rgba16.inc.c"
};

u64 object_haka_obj_Tex_005640[] = {
#include "assets/objects/object_haka_obj/tex_005640.i4.inc.c"
};

u64 object_haka_obj_Tex_005E40[] = {
#include "assets/objects/object_haka_obj/tex_005E40.rgba16.inc.c"
};

u64 object_haka_obj_Tex_006640[] = {
#include "assets/objects/object_haka_obj/tex_006640.i4.inc.c"
};

u64 object_haka_obj_Tex_006E40[] = {
#include "assets/objects/object_haka_obj/tex_006E40.rgba16.inc.c"
};

u64 object_haka_obj_Tex_007640[] = {
#include "assets/objects/object_haka_obj/tex_007640.i4.inc.c"
};

Gfx object_haka_obj_DL_000040[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 67, 80, 77, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(object_haka_obj_Tex_005640, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_haka_obj_Tex_004E40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_haka_objVtx_000000, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx object_haka_obj_DL_0007B0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_haka_obj_TLUT_001A00),
    gsDPLoadTextureBlock_4b(object_haka_obj_Tex_002C40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_haka_objVtx_000180[75], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_haka_obj_TLUT_001A20),
    gsDPLoadTextureBlock_4b(object_haka_obj_Tex_003440, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_haka_objVtx_000180[79], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 0, 0),
    gsSP2Triangles(0, 3, 5, 0, 0, 5, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_002040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x007C),
    gsSPVertex(&object_haka_objVtx_000180[87], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_002040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x007C),
    gsSPVertex(&object_haka_objVtx_000180[91], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_002040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x02FC),
    gsSPVertex(&object_haka_objVtx_000180[55], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 0, 3, 0, 7, 3, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_haka_obj_Tex_002440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x007C),
    gsSPVertex(&object_haka_objVtx_000180[63], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_haka_obj_Tex_002440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x007C),
    gsSPVertex(&object_haka_objVtx_000180[71], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_001C40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x017C),
    gsSPVertex(object_haka_objVtx_000180, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 7, 11, 12, 0),
    gsSP2Triangles(3, 4, 13, 0, 3, 13, 14, 0),
    gsSP2Triangles(0, 3, 14, 0, 12, 4, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_001C40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x01FC),
    gsSPVertex(&object_haka_objVtx_000180[15], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001800),
    gsDPLoadTextureBlock(object_haka_obj_Tex_001C40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x027C),
    gsSPVertex(&object_haka_objVtx_000180[39], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx object_haka_obj_DL_000F70[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(object_haka_obj_Tex_006640, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_haka_obj_Tex_005E40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_haka_objVtx_000F20, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_haka_obj_DL_001200[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001A40),
    gsDPLoadTextureBlock(object_haka_obj_Tex_003C40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_haka_objVtx_001040, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(1, 4, 12, 0, 1, 12, 13, 0),
    gsSP2Triangles(14, 8, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(9, 17, 18, 0, 9, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_haka_obj_TLUT_001A40),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x037C),
    gsSPVertex(&object_haka_objVtx_001040[20], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx object_haka_obj_DL_001410[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x05FC, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_haka_objVtx_001390[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPLoadTextureBlock_4b(object_haka_obj_Tex_007640, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(object_haka_obj_Tex_006E40, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, G_TX_NOLOD),
    gsSPVertex(object_haka_objVtx_001390, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx object_haka_obj_DL_001680[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEI_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 80, 95, 80, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_haka_objVtx_0015C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_haka_objVtx_0015C0[3], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_haka_objVtx_0015C0[6], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_haka_obj_Tex_004C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_haka_objVtx_0015C0[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_haka_obj_Colheader_000148CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_haka_obj_Colheader_000148SurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_DIRT_SOFT,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly object_haka_obj_Colheader_000148Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000}, {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0000},
};

Vec3s object_haka_obj_Colheader_000148Vertices[] = {
    {    800,      0,      0 },
    {    800,   1400,      0 },
    {   -800,   1400,      0 },
    {   -800,      0,      0 },
};

CollisionHeader object_haka_obj_Colheader_000148 = { 
    { -800, 0, 0 },
    { 800, 1400, 0 },
    ARRAY_COUNT(object_haka_obj_Colheader_000148Vertices), object_haka_obj_Colheader_000148Vertices,
    ARRAY_COUNT(object_haka_obj_Colheader_000148Polygons), object_haka_obj_Colheader_000148Polygons,
    object_haka_obj_Colheader_000148SurfaceType,
    object_haka_obj_Colheader_000148CamDataList,
    0, NULL
};

BgCamInfo object_haka_obj_Colheader_000EE8CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_haka_obj_Colheader_000EE8SurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_STONE,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    }, {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_STONE,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly object_haka_obj_Colheader_000EE8Polygons[] = {
    {0x0000, 0xA000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0xFCE0}, {0x0000, 0xA000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0xFCE0}, {0x0000, 0xA004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFCE0}, {0x0000, 0xA004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFCE0},
    {0x0000, 0xA001, 0x0006, 0x0005, 0x8001, 0x0000, 0x0000, 0xFC7C}, {0x0000, 0xA001, 0x0005, 0x0002, 0x8001, 0x0000, 0x0000, 0xFC7C}, {0x0001, 0x0008, 0x0009, 0x000A, 0x8001, 0x0000, 0x0000, 0x012C}, {0x0001, 0x0008, 0x000A, 0x000B, 0x8001, 0x0000, 0x0000, 0x012C},
    {0x0001, 0x000C, 0x000D, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFC7C}, {0x0001, 0x000C, 0x0009, 0x0008, 0x0000, 0x0000, 0x7FFF, 0xFC7C}, {0x0001, 0x000E, 0x000F, 0x000B, 0x0000, 0x0000, 0x8001, 0xFC7C}, {0x0001, 0x000E, 0x000B, 0x000A, 0x0000, 0x0000, 0x8001, 0xFC7C},
};

Vec3s object_haka_obj_Colheader_000EE8Vertices[] = {
    {    300,      0,   -800 },
    {   -900,      0,   -800 },
    {   -900,   1800,   -800 },
    {    300,   1800,   -800 },
    {    300,   1800,    800 },
    {   -900,   1800,    800 },
    {   -900,      0,    800 },
    {    300,      0,    800 },
    {    300,      0,    900 },
    {    300,   1800,    900 },
    {    300,   1800,   -900 },
    {    300,      0,   -900 },
    {    600,      0,    900 },
    {    600,   1800,    900 },
    {    600,   1800,   -900 },
    {    600,      0,   -900 },
};

CollisionHeader object_haka_obj_Colheader_000EE8 = { 
    { -900, 0, -900 },
    { 600, 1800, 900 },
    ARRAY_COUNT(object_haka_obj_Colheader_000EE8Vertices), object_haka_obj_Colheader_000EE8Vertices,
    ARRAY_COUNT(object_haka_obj_Colheader_000EE8Polygons), object_haka_obj_Colheader_000EE8Polygons,
    object_haka_obj_Colheader_000EE8SurfaceType,
    object_haka_obj_Colheader_000EE8CamDataList,
    0, NULL
};

BgCamInfo object_haka_obj_Colheader_001588CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_haka_obj_Colheader_001588SurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_DIRT,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly object_haka_obj_Colheader_001588Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0x0000}, {0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0x0000},
};

Vec3s object_haka_obj_Colheader_001588Vertices[] = {
    {      0,  -2240,   1800 },
    {      0,      0,   1800 },
    {      0,      0,  -1800 },
    {      0,  -2240,  -1800 },
};

CollisionHeader object_haka_obj_Colheader_001588 = { 
    { 0, -2240, -1800 },
    { 0, 0, 1800 },
    ARRAY_COUNT(object_haka_obj_Colheader_001588Vertices), object_haka_obj_Colheader_001588Vertices,
    ARRAY_COUNT(object_haka_obj_Colheader_001588Polygons), object_haka_obj_Colheader_001588Polygons,
    object_haka_obj_Colheader_001588SurfaceType,
    object_haka_obj_Colheader_001588CamDataList,
    0, NULL
};
