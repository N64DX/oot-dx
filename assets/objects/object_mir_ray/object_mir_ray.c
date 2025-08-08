#include "object_mir_ray.h"

#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

Vtx gShieldBeamImageDL_06000000_Vtx_fused_[] = {
#include "assets/objects/object_mir_ray/gShieldBeamImageDL_06000000_Vtx_fused_.inc.c"
};

Gfx gShieldBeamImageDL[27] = {
#include "assets/objects/object_mir_ray/gShieldBeamImageDL.inc.c"
};

u64 gShieldBeamImageCircleTex[TEX_LEN(u64, gShieldBeamImageCircleTex_WIDTH, gShieldBeamImageCircleTex_HEIGHT, 16)] = {
#include "assets/objects/object_mir_ray/gShieldBeamImageCircleTex.ia16.inc.c"
};

u64 gShieldBeamImageGerudoSymbolNewTex[TEX_LEN(u64, gShieldBeamImageGerudoSymbolNewTex_WIDTH, gShieldBeamImageGerudoSymbolNewTex_HEIGHT, 16)] = {
#include "assets/objects/object_mir_ray/gShieldBeamImageGerudoSymbolNewTex.ia16.inc.c"
};

Vtx gShieldBeamGlowDL_06000B90_Vtx[] = {
#include "assets/objects/object_mir_ray/gShieldBeamGlowDL_06000B90_Vtx.inc.c"
};

Gfx gShieldBeamGlowDL[21] = {
#include "assets/objects/object_mir_ray/gShieldBeamGlowDL.inc.c"
};

u64 gShieldBeamGlowRayTex[TEX_LEN(u64, gShieldBeamGlowRayTex_WIDTH, gShieldBeamGlowRayTex_HEIGHT, 16)] = {
#include "assets/objects/object_mir_ray/gShieldBeamGlowRayTex.ia16.inc.c"
};



// Majora's Mask

Vtx object_mir_rayVtx_000000[] = {
#include "assets/objects/object_mir_ray/object_mir_rayVtx_000000.vtx.inc"
};

Vtx object_mir_rayVtx_000400[] = {
#include "assets/objects/object_mir_ray/object_mir_rayVtx_000400.vtx.inc"
};

u64 object_mir_ray_Tex_000558[] = {
#include "assets/objects/object_mir_ray/tex_000558.i8.inc.c"
};

Gfx gMajoraShieldBeamImageDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_mir_ray_Tex_000558, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_mir_rayVtx_000400, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 4, 5, 0, 0),
    gsSP2Triangles(0, 6, 3, 0, 7, 6, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 9, 8, 0, 0),
    gsSP2Triangles(9, 0, 10, 0, 0, 5, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gMajoraShieldBeamGlowDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gShieldBeamGlowRayTex, G_IM_FMT_IA, G_IM_SIZ_16b, gShieldBeamGlowRayTex_WIDTH, gShieldBeamGlowRayTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 8, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_mir_rayVtx_000000, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 2, 4, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 9, 0, 8, 12, 9, 0),
    gsSP2Triangles(14, 15, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(16, 17, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(18, 19, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(20, 21, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(1, 0, 21, 0, 20, 1, 21, 0),
    gsSPEndDisplayList(),
};
