#include "object_slime.h"

#include "gfx.h"

static Vtx object_slimeVtx_000000[] = {
#include "assets/objects/object_slime/object_slimeVtx_000000.vtx.inc"
};

static Vtx object_slimeVtx_000830[] = {
#include "assets/objects/object_slime/object_slimeVtx_000830.vtx.inc"
};

static u64 gChuchuMouthTex[] = {
#include "assets/objects/object_slime/chuchu_mouth.rgba16.inc.c"
};

static u64 gChuchuEyeSocketTex[] = {
#include "assets/objects/object_slime/chuchu_eye_socket.rgba16.inc.c"
};

static u64 gChuchuSlimeFlowTex[] = {
#include "assets/objects/object_slime/chuchu_slime_flow.i4.inc.c"
};

static u64 gChuchuSlimeBaseTex[] = {
#include "assets/objects/object_slime/chuchu_slime_base.i4.inc.c"
};

u64 gChuchuEyeOpenTex[] = {
#include "assets/objects/object_slime/chuchu_eye_open.rgba16.inc.c"
};

u64 gChuchuEyeHalfTex[] = {
#include "assets/objects/object_slime/chuchu_eye_half.rgba16.inc.c"
};

u64 gChuchuEyeClosedTex[] = {
#include "assets/objects/object_slime/chuchu_eye_closed.rgba16.inc.c"
};

Gfx gChuchuBodyDL[] = {
    gsSPTexture(0x11F8, 0x1388, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gChuchuSlimeBaseTex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gChuchuSlimeFlowTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&object_slimeVtx_000000[38], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(6, 2, 3, 0, 0, 9, 11, 0),
    gsSP2Triangles(10, 5, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 12, 17, 15, 0),
    gsSP2Triangles(14, 17, 12, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 7, 8, 10, 0),
    gsSP2Triangles(3, 4, 6, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 18, 20, 0, 22, 24, 20, 0),
    gsSP2Triangles(11, 1, 0, 0, 24, 23, 20, 0),
    gsSP2Triangles(10, 9, 13, 0, 9, 0, 14, 0),
    gsSP2Triangles(0, 2, 25, 0, 2, 6, 15, 0),
    gsSP2Triangles(6, 5, 26, 0, 5, 10, 27, 0),
    gsSP2Triangles(10, 13, 27, 0, 9, 14, 13, 0),
    gsSP2Triangles(0, 25, 14, 0, 2, 15, 25, 0),
    gsSP2Triangles(6, 26, 15, 0, 5, 27, 26, 0),
    gsSP2Triangles(4, 3, 22, 0, 3, 1, 24, 0),
    gsSP2Triangles(1, 11, 23, 0, 11, 8, 18, 0),
    gsSP2Triangles(8, 7, 19, 0, 7, 4, 21, 0),
    gsSP2Triangles(19, 7, 21, 0, 4, 22, 21, 0),
    gsSP2Triangles(3, 24, 22, 0, 1, 23, 24, 0),
    gsSP2Triangles(11, 18, 23, 0, 8, 19, 18, 0),
    gsSP2Triangles(12, 28, 29, 0, 28, 30, 29, 0),
    gsSP2Triangles(30, 13, 29, 0, 13, 12, 29, 0),
    gsSP2Triangles(16, 30, 31, 0, 30, 28, 31, 0),
    gsSP2Triangles(28, 12, 31, 0, 12, 16, 31, 0),
    gsSPEndDisplayList(),
};

Gfx gChuchuEyesDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gChuchuEyeSocketTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_slimeVtx_000000, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(15, 10, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 16, 18, 20, 0),
    gsSP2Triangles(16, 20, 21, 0, 16, 21, 19, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gChuchuMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_slimeVtx_000000[22], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000000),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&object_slimeVtx_000000[70], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gChuchuPuddleDL[] = {
    gsSPTexture(0x0DAC, 0x0DAC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gChuchuSlimeBaseTex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 13, 13),
    gsDPLoadMultiBlock_4b(gChuchuSlimeFlowTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(object_slimeVtx_000830, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 10, 13, 0, 10, 9, 13, 0),
    gsSP2Triangles(14, 12, 11, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 15, 14, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 18, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 19, 22, 0, 10, 12, 23, 0),
    gsSP2Triangles(12, 15, 23, 0, 21, 20, 24, 0),
    gsSP2Triangles(20, 25, 24, 0, 25, 26, 24, 0),
    gsSP2Triangles(25, 3, 26, 0, 21, 24, 27, 0),
    gsSP2Triangles(24, 26, 27, 0, 5, 8, 7, 0),
    gsSP2Triangles(5, 4, 8, 0, 10, 23, 7, 0),
    gsSP2Triangles(6, 10, 7, 0, 27, 1, 5, 0),
    gsSP2Triangles(5, 1, 0, 0, 18, 19, 28, 0),
    gsSP2Triangles(18, 28, 27, 0, 5, 7, 23, 0),
    gsSP2Triangles(5, 23, 15, 0, 16, 18, 29, 0),
    gsSP2Triangles(18, 27, 29, 0, 15, 16, 29, 0),
    gsSP2Triangles(15, 29, 5, 0, 29, 27, 5, 0),
    gsSP2Triangles(27, 26, 3, 0, 27, 3, 1, 0),
    gsSPEndDisplayList(),
};
