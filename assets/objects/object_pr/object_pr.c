#include "object_pr.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_prVtx_000750[] = {
#include "assets/objects/object_pr/object_prVtx_000750.vtx.inc"
};

Vtx object_prVtx_002200[] = {
#include "assets/objects/object_pr/object_prVtx_002200.vtx.inc"
};

Vtx object_prVtx_003920[] = {
#include "assets/objects/object_pr/object_prVtx_003920.vtx.inc"
};

u64 object_pr_Tex_001608[] = {
#include "assets/objects/object_pr/tex_001608.rgba16.inc.c"
};

u64 object_pr_Tex_001708[] = {
#include "assets/objects/object_pr/tex_001708.rgba16.inc.c"
};

u64 object_pr_Tex_001908[] = {
#include "assets/objects/object_pr/tex_001908.rgba16.inc.c"
};

u64 object_pr_Tex_001B08[] = {
#include "assets/objects/object_pr/tex_001B08.rgba16.inc.c"
};

u64 object_pr_Tex_001D08[] = {
#include "assets/objects/object_pr/tex_001D08.rgba16.inc.c"
};

u64 object_pr_Tex_0030A8[] = {
#include "assets/objects/object_pr/tex_0030A8.rgba16.inc.c"
};

u64 object_pr_Tex_0031A8[] = {
#include "assets/objects/object_pr/tex_0031A8.rgba16.inc.c"
};

u64 object_pr_Tex_0033A8[] = {
#include "assets/objects/object_pr/tex_0033A8.rgba16.inc.c"
};

u64 object_pr_Tex_0035A8[] = {
#include "assets/objects/object_pr/tex_0035A8.rgba16.inc.c"
};

u64 object_pr_Tex_0037A8[] = {
#include "assets/objects/object_pr/tex_0037A8.rgba16.inc.c"
};

u64 gSkullFishBodyRibTex[] = {
#include "assets/objects/object_pr/body_rib.rgba16.inc.c"
};

u64 gSkullFishTailTex[] = {
#include "assets/objects/object_pr/tail.rgba16.inc.c"
};

u64 gSkullFishEyeSocketTex[] = {
#include "assets/objects/object_pr/eye_socket.rgba16.inc.c"
};

u64 gSkullFishJawTex[] = {
#include "assets/objects/object_pr/jaw.rgba16.inc.c"
};

u64 gSkullFishGlowingEyesTex[] = {
#include "assets/objects/object_pr/glowing_eyes.rgba16.inc.c"
};

Gfx object_pr_DL_000F30[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[19], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001908, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[25], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 4, 6, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_prVtx_000750[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 0, 0, 2, 16, 0, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 24, 0, 28, 29, 30, 0),
    gsSPVertex(&object_prVtx_000750[63], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(3, 8, 1, 0, 9, 1, 10, 0),
    gsSP2Triangles(10, 1, 8, 0, 7, 4, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 10, 4, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 7, 8, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 15, 17, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_001130[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[90], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_0011C8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[82], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_001260[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[86], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_0012F8[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[94], 8, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[102], 14, 8),
    gsSP2Triangles(2, 8, 9, 0, 10, 11, 3, 0),
    gsSP2Triangles(12, 0, 4, 0, 3, 13, 14, 0),
    gsSP2Triangles(15, 16, 5, 0, 6, 1, 17, 0),
    gsSP2Triangles(18, 19, 7, 0, 7, 20, 21, 0),
    gsSPVertex(&object_prVtx_000750[116], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 6, 4, 0, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_0013E8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001608, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[15], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_001480[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[5], 2, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001608, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[7], 5, 2),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsSPVertex(&object_prVtx_000750[12], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_001550[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_prVtx_000750, 2, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_001708, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_000750[2], 3, 2),
    gsSP2Triangles(2, 0, 3, 0, 4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_0029E0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0037A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[19], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0033A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[25], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 4, 6, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0035A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_prVtx_002200[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 0, 0, 2, 16, 0, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 24, 0, 28, 29, 30, 0),
    gsSPVertex(&object_prVtx_002200[63], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(3, 8, 1, 0, 9, 1, 10, 0),
    gsSP2Triangles(10, 1, 8, 0, 7, 4, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 10, 4, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 7, 8, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 15, 17, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002BD0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0035A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[90], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002C68[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0035A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[82], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002D00[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0035A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[86], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002D98[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[94], 8, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0035A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[102], 14, 8),
    gsSP2Triangles(2, 8, 9, 0, 10, 11, 3, 0),
    gsSP2Triangles(12, 0, 4, 0, 3, 13, 14, 0),
    gsSP2Triangles(15, 16, 5, 0, 6, 1, 17, 0),
    gsSP2Triangles(18, 19, 7, 0, 7, 20, 21, 0),
    gsSPVertex(&object_prVtx_002200[116], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 6, 4, 0, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002E88[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0030A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[15], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002F20[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[5], 2, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0030A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[7], 5, 2),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsSPVertex(&object_prVtx_002200[12], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx object_pr_DL_002FF0[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_prVtx_002200, 2, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_pr_Tex_0031A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_002200[2], 3, 2),
    gsSP2Triangles(2, 0, 3, 0, 4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gSkullFishBodyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSkullFishBodyRibTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_003920[5], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 1, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gSkullFishTailDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_prVtx_003920, 2, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSkullFishTailTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_003920[2], 3, 2),
    gsSP2Triangles(0, 2, 3, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gSkullFishSkullDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSkullFishGlowingEyesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_003920[11], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSkullFishEyeSocketTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_003920[17], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gSkullFishJawDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSkullFishJawTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_prVtx_003920[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

StandardLimb object_pr_Standardlimb_003828 = { 
    { -465, 0, 0 }, OBJECT_PR_1_LIMB_02 - 1, LIMB_DONE, NULL
};

StandardLimb object_pr_Standardlimb_003834 = { 
    { 0, 0, 0 }, OBJECT_PR_1_LIMB_03 - 1, OBJECT_PR_1_LIMB_05 - 1, object_pr_DL_002E88
};

StandardLimb object_pr_Standardlimb_003840 = { 
    { 2300, 0, 0 }, OBJECT_PR_1_LIMB_04 - 1, LIMB_DONE, object_pr_DL_002F20
};

StandardLimb object_pr_Standardlimb_00384C = { 
    { 2200, 0, 0 }, LIMB_DONE, LIMB_DONE, object_pr_DL_002FF0
};

StandardLimb object_pr_Standardlimb_003858 = { 
    { 0, 0, 0 }, OBJECT_PR_1_LIMB_06 - 1, LIMB_DONE, object_pr_DL_0029E0
};

StandardLimb object_pr_Standardlimb_003864 = { 
    { 850, 500, 0 }, LIMB_DONE, OBJECT_PR_1_LIMB_07 - 1, object_pr_DL_002D98
};

StandardLimb object_pr_Standardlimb_003870 = { 
    { 750, -700, 0 }, LIMB_DONE, OBJECT_PR_1_LIMB_08 - 1, object_pr_DL_002D00
};

StandardLimb object_pr_Standardlimb_00387C = { 
    { 300, 400, 700 }, LIMB_DONE, OBJECT_PR_1_LIMB_09 - 1, object_pr_DL_002C68
};

StandardLimb object_pr_Standardlimb_003888 = { 
    { 300, 400, -700 }, LIMB_DONE, LIMB_DONE, object_pr_DL_002BD0
};

void* object_pr_Skel_0038B8Limbs[] = {
    &object_pr_Standardlimb_003828,
    &object_pr_Standardlimb_003834,
    &object_pr_Standardlimb_003840,
    &object_pr_Standardlimb_00384C,
    &object_pr_Standardlimb_003858,
    &object_pr_Standardlimb_003864,
    &object_pr_Standardlimb_003870,
    &object_pr_Standardlimb_00387C,
    &object_pr_Standardlimb_003888,
};

FlexSkeletonHeader object_pr_Skel_0038B8 = { 
    { object_pr_Skel_0038B8Limbs, ARRAY_COUNT(object_pr_Skel_0038B8Limbs) }, 8
};

StandardLimb gSkullFishBodyLimb = { 
    { 0, 0, 0 }, PR_2_LIMB_SKULL - 1, LIMB_DONE, gSkullFishBodyDL
};

StandardLimb gSkullFishSkullLimb = { 
    { 0, 0, 0 }, PR_2_LIMB_JAW - 1, PR_2_LIMB_TAIL - 1, gSkullFishSkullDL
};

StandardLimb gSkullFishJawLimb = { 
    { 200, 200, 0 }, LIMB_DONE, LIMB_DONE, gSkullFishJawDL
};

StandardLimb gSkullFishTailLimb = { 
    { 1550, 0, 0 }, LIMB_DONE, LIMB_DONE, gSkullFishTailDL
};

void* gSkullFishSkelLimbs[] = {
    &gSkullFishBodyLimb,
    &gSkullFishSkullLimb,
    &gSkullFishJawLimb,
    &gSkullFishTailLimb,
};

FlexSkeletonHeader gSkullFishSkel = { 
    { gSkullFishSkelLimbs, ARRAY_COUNT(gSkullFishSkelLimbs) }, 4
};

s16 object_pr_Anim_000268FrameData[] = {
    0x0000, 0x0000, 0x02EE, 0x02D9, 0x02A0, 0x024C, 0x01E6, 0x0177, 0x0108, 0x00A2, 0x004E, 0x0015, 0x0000, 0x0000, 
    0xFBE6, 0xFC03, 0xFC53, 0xFCC9, 0xFD58, 0xFDF3, 0xFE8E, 0xFF1D, 0xFF93, 0xFFE3, 0x0000, 0xFF90, 0xF521, 0x0D96, 
    0x00A8, 0xF780, 0xFDB5, 0x055E, 0x0A16, 0x089D, 0x04FB, 0x0144, 0xFF90, 0x0000, 0x0D90, 0xF8E5, 0x06B9, 0xFF30, 
    0xF7CE, 0xFF6B, 0x067F, 0x0640, 0x03EE, 0x0145, 0x0000, 0x0625, 0x0F4E, 0xFD9E, 0x0B15, 0x0CF0, 0x0C96, 0x0D48, 
    0x0D5E, 0x0BA2, 0x0938, 0x0712, 0x0625, 0x0000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0x0000, 0x4000, 0x2DAA, 0x2B39, 0x2BD5, 0x2DAA, 0x3007, 0x332C, 0x36AD, 0x3A21, 0x3D1D, 0x3F35, 
    0x4000, 0x0000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x0000, 0x0000, 
    0x21D1, 0x0A4F, 0x1659, 0x21D1, 0x1F1A, 0x19F2, 0x1363, 0x0C78, 0x063D, 0x01BC, 0x0000, 0x0000, 0x0000, 0xEB36, 
    0xDE97, 0xF9F0, 0x14C7, 0x1624, 0x131B, 0x0D86, 0x073E, 0x021F, 0x0000, 0x0000, 0x2372, 0xF766, 0x0C33, 0x2372, 
    0x270B, 0x2871, 0x283E, 0x270B, 0x2572, 0x240C, 0x2372, 0xC000, 0x2D42, 0x524E, 0x3F69, 0x2BC0, 0x2B60, 0x2DB0, 
    0x31BA, 0x3689, 0x3B28, 0x3EA1, 0x4000, 0xC000, 0xDFC8, 0xE350, 0xE18C, 0xDFC8, 0xDFC8, 0xDFC8, 0xDFC8, 0xDFC8, 
    0xDFC8, 0xDFC8, 0xDFC8, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x0000, 0x4D6A, 0x5081, 0x50C4, 0x4EC9, 0x4B27, 0x4675, 0x414C, 0x3C41, 0x37EB, 0x34E3, 0x33BF, 0x0000, 
    0x0000, 0x2101, 0xE89A, 0xFC09, 0x133A, 0x13D5, 0x10D7, 0x0BCE, 0x0649, 0x01D5, 0x0000, 0x9C7F, 0xBEB9, 0xBC30, 
    0xB53D, 0xAAFB, 0xA5B3, 0xAA04, 0xB103, 0xB926, 0xC0DF, 0xC6A4, 0xC8E8, 0x2000, 0x4000, 0x4000, 0xE4EB, 0x2CCD, 
    0xFB5D, 0xF854, 0xF2B7, 0xEBE5, 0xE545, 0xE041, 0xDE44, 0xC000, 0xD943, 0xCF13, 0xB6A7, 0xC000, 0xC3CD, 0xC78A, 
    0xCB05, 0xCE0D, 0xD06F, 0xD200, 0xD290, 0x2000, 0x2B99, 0xDC95, 0x544A, 0x2CCD, 0x5F82, 0x5FB3, 0x5FC2, 0x5FB9, 
    0x5FA5, 0x5F92, 0x5F8B, 0xE000, 0xC000, 0xC000, 0xE359, 0xECCD, 0xCFDA, 0xC67D, 0xBCBE, 0xB354, 0x2B25, 0x2547, 
    0x22FF, 0x4000, 0x26BD, 0x30ED, 0x3742, 0x4000, 0x42C3, 0x45E2, 0x493B, 0x4C7F, 0x30B2, 0x2EB9, 0x2DFB, 0x2000, 
    0xD468, 0x236B, 0x2A1A, 0x1333, 0xF4DF, 0xEDF2, 0xE90C, 0xE58B, 0x6314, 0x6185, 0x60F2, 0x0000, 
};

JointIndex object_pr_Anim_000268JointIndices[] = {
    { 0x0000, 0x0001, 0x000D },
    { 0x0019, 0x0025, 0x0031 },
    { 0x003D, 0x0049, 0x0055 },
    { 0x0000, 0x0000, 0x0061 },
    { 0x006D, 0x0000, 0x0079 },
    { 0x0085, 0x0091, 0x009D },
    { 0x0000, 0x0000, 0x00A9 },
    { 0x00B5, 0x0000, 0x00C1 },
    { 0x00CD, 0x00D9, 0x00E5 },
    { 0x00F1, 0x00FD, 0x0109 },
};

AnimationHeader object_pr_Anim_000268 = { 
    { 12 }, object_pr_Anim_000268FrameData, object_pr_Anim_000268JointIndices, 1
};

s16 object_pr_Anim_000740FrameData[] = {
    0x0000, 0x0000, 0xFF72, 0xFE5B, 0xFD9C, 0xFDEC, 0xFE8F, 0xFEE4, 0xFF30, 0xFF76, 0xFFBB, 0x0017, 0x0080, 0x00C6, 
    0x00B8, 0xFFD9, 0xFE82, 0xFDC8, 0xFE5C, 0xFF8C, 0x005A, 0x007E, 0x006E, 0x0042, 0x0015, 0x0000, 0xFFEE, 0xFFDC, 
    0x0000, 0x00E6, 0x0190, 0x0111, 0x002F, 0xFF5D, 0xFF0A, 0xFF7E, 0x006F, 0x0175, 0x0228, 0x024D, 0x021D, 0x01DD, 
    0x019F, 0x0152, 0x010B, 0x00C9, 0x0082, 0x0042, 0x0012, 0x0000, 0xF4A2, 0xF23A, 0xECAD, 0xDFCB, 0xC700, 0x27F9, 
    0x1532, 0x2184, 0x0935, 0xCEAB, 0xEBCE, 0xEF08, 0x3D94, 0xDBBC, 0xDFD9, 0xE3CE, 0xEB55, 0xEF64, 0xE24F, 0x4517, 
    0x35DD, 0x352C, 0x34A2, 0x4000, 0x3B38, 0x3278, 0x2DEC, 0x306F, 0x3401, 0x4C2F, 0x4D68, 0x4316, 0x3781, 0x4542, 
    0x4C78, 0x47AA, 0x42D9, 0x338A, 0x2A6D, 0x24E7, 0x244C, 0x335C, 0x4648, 0x33A4, 0x2E8E, 0x3214, 0x3AF9, 0x0000, 
    0xF4B5, 0xF2ED, 0xEE4F, 0xE151, 0xC74F, 0x271C, 0x143D, 0x2175, 0x0904, 0xCEC8, 0xEC9B, 0xEF4C, 0x3D92, 0xDCAF, 
    0xE2D6, 0xE874, 0xEF61, 0xF01B, 0xE28D, 0x4555, 0x34E7, 0x348A, 0x348D, 0x0000, 0x00F6, 0x0377, 0x06EF, 0x0ACC, 
    0x0E7C, 0x116B, 0x1307, 0x12BE, 0x0FFE, 0x0B15, 0x04BF, 0xFDB5, 0xF6B4, 0xF076, 0xEBB6, 0xE92F, 0xE944, 0xEB6E, 
    0xEF08, 0xF36C, 0xF7F5, 0xFBFF, 0xFEE4, 0x0000, 0x03F4, 0x0C7A, 0x1491, 0x1739, 0x10FC, 0x0539, 0xF933, 0xF22D, 
    0xF9C0, 0x0696, 0x0DD7, 0x1402, 0x18EE, 0x1EBA, 0x2348, 0x2019, 0x03E0, 0xEAD4, 0xF2DE, 0x0579, 0x11C7, 0x0EBD, 
    0x0565, 0x0000, 0x02C9, 0x0949, 0x10B7, 0x164A, 0x1739, 0x1233, 0x0926, 0xFE2A, 0xF358, 0xEAC8, 0xE693, 0xEF34, 
    0x00DE, 0x0B41, 0x08F7, 0x018C, 0xF81B, 0xEFBE, 0xE6EF, 0xDE34, 0xDBBA, 0xE656, 0xF733, 0x0000, 0xFE1F, 0xF984, 
    0xF3BC, 0xEE54, 0xEAD6, 0xEAD0, 0xEE54, 0xF3FE, 0xFB27, 0x032B, 0x0B64, 0x132C, 0x19DE, 0x1ED4, 0x2169, 0x2132, 
    0x1E9E, 0x1A51, 0x14EE, 0x0F18, 0x0972, 0x04A0, 0x0143, 0x0000, 0xFB67, 0xF09C, 0xE420, 0xDA72, 0xD812, 0xE91E, 
    0x061F, 0x163B, 0x0E81, 0xFBE0, 0xE94B, 0xE1B4, 0xE7DC, 0xF4D8, 0x0518, 0x150B, 0x211F, 0x25C5, 0x14D0, 0xF464, 
    0xDF68, 0xE50F, 0xF627, 0x0000, 0xF9C0, 0xEEB3, 0xEA68, 0xF0EA, 0xFC36, 0x08C3, 0x1306, 0x1776, 0x14B4, 0x0D43, 
    0x036A, 0xF96F, 0xF199, 0xEE30, 0xF168, 0xF9D4, 0x0449, 0x0D99, 0x1298, 0x11CD, 0x0D55, 0x0767, 0x0238, 0xC000, 
    0x7C13, 0x758F, 0x7459, 0x88FA, 0x945F, 0xFC97, 0x5F6B, 0x49C1, 0x3C23, 0x2DEC, 0xFCD8, 0x5D2B, 0x443B, 0x97CC, 
    0x8654, 0x84D4, 0x8FA2, 0xA83F, 0xDB8F, 0x9B4C, 0xBED0, 0x40E7, 0x3C9B, 0xC000, 0xC176, 0xC49F, 0xC7A8, 0xCA7E, 
    0xCBD1, 0xB39E, 0xD057, 0xD514, 0xD671, 0xCF22, 0xC980, 0xB2E5, 0xB5D2, 0xCC58, 0xD549, 0xDAB0, 0xD5B2, 0xCAB1, 
    0xC4A2, 0xBCB9, 0xB836, 0xCB3B, 0xC5D5, 0xC000, 0x0000, 0x0000, 0x0000, 0xFC84, 0x0000, 0x92E8, 0x25C1, 0x3074, 
    0x3708, 0x446B, 0x75F9, 0x157D, 0x2F0D, 0xDCFE, 0xF0BC, 0xF5DB, 0xF321, 0xE50F, 0xB84D, 0xF76E, 0xCE77, 0x46D3, 
    0x4633, 0x0000, 0x14F6, 0x298F, 0x1CC4, 0x0663, 0xFC43, 0x08DF, 0x205D, 0x3709, 0x4131, 0x3A21, 0x2940, 0x1502, 
    0x03DC, 0xFC43, 0x0063, 0x0BBD, 0x1AC2, 0x29E4, 0x3594, 0x3A43, 0x3093, 0x1B43, 0x05F3, 0x0000, 0x06B9, 0x0C39, 
    0x064D, 0xFCA2, 0xF40A, 0xF155, 0xF87A, 0x0602, 0x139E, 0x1AFD, 0x191F, 0x11D2, 0x08FD, 0x0286, 0xFEDB, 0xFD18, 
    0xFF25, 0x0D75, 0x1984, 0x0DCB, 0xFF7A, 0xFD58, 0xFEBB, 0x0000, 0x0AA1, 0x138F, 0x0BAA, 0xFE95, 0xF201, 0xEBA1, 
    0xEEAF, 0xF791, 0x01B6, 0x0892, 0x0B78, 0x0CA9, 0x0BF5, 0x092E, 0x00F1, 0xF51F, 0xED72, 0xF327, 0xFA05, 0xF1D2, 
    0xEA94, 0xF0AA, 0xFAB6, 0x9C7F, 0x9C7F, 0x9C7F, 0x9BAA, 0x9A48, 0x9A01, 0x9C7F, 0xA48F, 0xB085, 0xBB54, 0xBFF1, 
    0xBB2F, 0xB059, 0xA41E, 0x9B2C, 0x97D5, 0x978F, 0x97BD, 0x97FF, 0x98DB, 0x99CB, 0x9AB8, 0x9B81, 0x9C33, 0xF9C3, 
    0xFD81, 0xEEBF, 0xD5C7, 0xBA34, 0xC76C, 0xE062, 0xEEBF, 0xF9C3, 0xFA09, 0xF7ED, 0xEEBF, 0xFBA7, 0xF9C3, 0xED45, 
    0xDC08, 0x4AFA, 0x3BD1, 0xF206, 0xEB54, 0x0B6A, 0xEEBF, 0xFBC0, 0xFBA9, 0xE496, 0xD43E, 0xC2F0, 0xD43E, 0xE496, 
    0xDC4F, 0xCBF3, 0xC2F0, 0xE496, 0xDC4F, 0xCBF3, 0xC2F0, 0xD43E, 0xE496, 0xE068, 0xD65D, 0xB530, 0xBD10, 0xBF0A, 
    0xBDF8, 0xBEE1, 0xC2F0, 0xCE27, 0xDD59, 0x5942, 0x5D85, 0x6805, 0x5D85, 0x5942, 0x5BAB, 0x5F7C, 0x6805, 0x5942, 
    0x5BAB, 0x5F7C, 0x6805, 0x5D85, 0x5942, 0x5A90, 0x5D0F, 0xDFD7, 0xE805, 0x37E8, 0x4D9C, 0x3EC2, 0x6805, 0x5EE3, 
    0x5B67, 0x02BF, 0xF8BB, 0xEF64, 0xDB83, 0xA391, 0xBEB1, 0x0158, 0x08D2, 0x098B, 0x02BF, 0xEA73, 0xDA6E, 0xE254, 
    0xF306, 0x02BF, 0x1841, 0xDB4A, 0x1018, 0x1B40, 0xD4D7, 0x02BF, 0xFD5D, 0xFDF0, 0x00E6, 0x26E9, 0x1AEC, 0x1116, 
    0x2888, 0x329B, 0x3AFE, 0x2DA5, 0x2033, 0x20F8, 0x26E9, 0x2870, 0x2500, 0x25D4, 0x258A, 0x26E9, 0x303A, 0x4798, 
    0x50ED, 0x568B, 0x45C5, 0x26E9, 0x22B9, 0x2330, 0x2584, 0x4D1A, 0x434D, 0x3E8B, 0x2EE7, 0xF6A3, 0x11EE, 0x512B, 
    0x5295, 0x5235, 0x4D1A, 0x388F, 0x2B84, 0x3374, 0x4249, 0x4D1A, 0x5907, 0x0E83, 0x364A, 0x3B75, 0x0942, 0x4D1A, 
    0x4B42, 0x4B72, 0x4C72, 0x0000, 
};

JointIndex object_pr_Anim_000740JointIndices[] = {
    { 0x0001, 0x0019, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0031, 0x0049, 0x0061 },
    { 0x0079, 0x0091, 0x00A9 },
    { 0x00C1, 0x00D9, 0x00F1 },
    { 0x0109, 0x0121, 0x0139 },
    { 0x0000, 0x0000, 0x0151 },
    { 0x0169, 0x0181, 0x0199 },
    { 0x01B1, 0x01C9, 0x01E1 },
    { 0x01F9, 0x0211, 0x0229 },
};

AnimationHeader object_pr_Anim_000740 = { 
    { 24 }, object_pr_Anim_000740FrameData, object_pr_Anim_000740JointIndices, 1
};

s16 object_pr_Anim_001E10FrameData[] = {
    0x0000, 0x4000, 0xC000, 0x9C7F, 0xFF76, 0xDFC4, 0x58E7, 0xF2B6, 0x1B4A, 0x419D, 
};

JointIndex object_pr_Anim_001E10JointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0002, 0x0002, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0007, 0x0008, 0x0009 },
};

AnimationHeader object_pr_Anim_001E10 = { 
    { 2 }, object_pr_Anim_001E10FrameData, object_pr_Anim_001E10JointIndices, 10
};

s16 object_pr_Anim_0021E8FrameData[] = {
    0xFE2F, 0x0000, 0x9C7F, 0xFE2F, 0xFEA4, 0xFF1E, 0xFF94, 0xFFFF, 0x0072, 0x00FB, 0x018A, 0x0213, 0x0286, 0x02D6, 
    0x02F4, 0x02DE, 0x02A3, 0x024A, 0x01DC, 0x0162, 0x00E5, 0x006C, 0xFFFF, 0xFF95, 0xFF1F, 0xFEA7, 0xFE33, 0xFDCC, 
    0xFD78, 0xFD40, 0xFD2C, 0xFD4E, 0xFDA8, 0x445B, 0x46B9, 0x4902, 0x4B0E, 0x4CB6, 0x4DD2, 0x4E39, 0x4DAB, 0x4C2D, 
    0x4A05, 0x4775, 0x44C1, 0x422E, 0x4000, 0x3DF0, 0x3BA5, 0x3947, 0x36FE, 0x34F2, 0x334A, 0x322E, 0x31C7, 0x3255, 
    0x33D3, 0x35FB, 0x388B, 0x3B3F, 0x3DD2, 0x4000, 0x4210, 0xF27D, 0xF5EB, 0xF977, 0xFCE8, 0x0000, 0x0346, 0x0722, 
    0x0B2F, 0x0F07, 0x1244, 0x1480, 0x1555, 0x14BA, 0x1311, 0x1095, 0x0D83, 0x0A15, 0x0689, 0x0318, 0x0000, 0xFCE8, 
    0xF977, 0xF5EB, 0xF27D, 0xEF6B, 0xECEF, 0xEB46, 0xEAAB, 0xEB80, 0xEDBC, 0xE0E9, 0xE000, 0xE140, 0xE49A, 0xE976, 
    0xEF3A, 0xF54D, 0xFB18, 0x0000, 0x04A4, 0x09CD, 0x0F20, 0x1444, 0x18E0, 0x1C9A, 0x1F17, 0x2000, 0x1F17, 0x1C9A, 
    0x18E0, 0x1444, 0x0F20, 0x09CD, 0x04A4, 0x0000, 0xFB18, 0xF54D, 0xEF3A, 0xE976, 0xE49A, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0xCB99, 
    0xCD00, 0xCDE7, 0xCE39, 0xCDDC, 0xCCD7, 0xCB44, 0xC93C, 0xC6D9, 0xC436, 0xC16C, 0xC16C, 0xC436, 0xC6D9, 0xC93C, 
    0xCB44, 0xCCD7, 0xCDDC, 0xCE39, 0xCDDC, 0xCCD7, 0xCB44, 0xC93C, 0xC6D9, 0xC436, 0xC16C, 0xC16C, 0xC436, 0xC6D9, 
    0xC93C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x003D, 0x00E9, 0x01F5, 0x034F, 0x04EA, 0x06B4, 0x089E, 0x0A98, 0x0C92, 0x0E7C, 
    0x1046, 0x11E0, 0x133B, 0x1447, 0x14F3, 0x1530, 0x14E1, 0x1403, 0x12AF, 0x10FD, 0x0F03, 0x0CD9, 0x0A98, 0x0857, 
    0x062D, 0x0433, 0x0280, 0x012C, 0x004F, 0x0000, 0x02BA, 0x05F1, 0x0952, 0x0C86, 0x0F39, 0x1115, 0x11C7, 0x1146, 
    0x0FE4, 0x0DD2, 0x0B42, 0x0867, 0x0572, 0x0294, 0x0000, 0xFD46, 0xFA0F, 0xF6AE, 0xF37A, 0xF0C7, 0xEEEB, 0xEE39, 
    0xEEBA, 0xF01C, 0xF22E, 0xF4BE, 0xF799, 0xFA8E, 0xFD6C, 0xFF76, 0xFD79, 0xF861, 0xF17B, 0xEA14, 0xE373, 0xDEE1, 
    0xDDA6, 0xE046, 0xE5C1, 0xED1C, 0xF55D, 0xFD8C, 0x04B2, 0x09DD, 0x0C17, 0x0A52, 0x0506, 0xFD83, 0xF51E, 0xED2E, 
    0xE70F, 0xE422, 0xE4A2, 0xE768, 0xEBBC, 0xF0E5, 0xF62D, 0xFAD9, 0xFE30, 0xDFC4, 0xDFB9, 0xDFA2, 0xDF8A, 0xDF7E, 
    0xDF84, 0xDF9C, 0xDFBD, 0xDFE7, 0xE023, 0xE06D, 0xE0C2, 0xE116, 0xE161, 0xE194, 0xE1A5, 0xE184, 0xE136, 0xE0D1, 
    0xE06A, 0xE012, 0xDFD1, 0xDFA9, 0xDF90, 0xDF81, 0xDF7E, 0xDF87, 0xDF98, 0xDFAD, 0xDFBD, 0x58E7, 0x5886, 0x5783, 
    0x560A, 0x544C, 0x527A, 0x50C4, 0x4F57, 0x4E03, 0x4C90, 0x4B1A, 0x49BE, 0x4891, 0x47A7, 0x4712, 0x46E3, 0x4740, 
    0x482B, 0x4984, 0x4B2A, 0x4CF1, 0x4EAA, 0x501D, 0x5170, 0x52E2, 0x545A, 0x55C1, 0x5700, 0x5800, 0x58AA, 0xF2B6, 
    0xF548, 0xFA1F, 0x0052, 0x06F4, 0x0D1B, 0x11D1, 0x1419, 0x1399, 0x111B, 0x0D54, 0x08F3, 0x04A0, 0x00FB, 0xFEA2, 
    0xFE30, 0x0091, 0x058D, 0x0C16, 0x1315, 0x1964, 0x1DCF, 0x1F18, 0x1CCF, 0x17ED, 0x114C, 0x09C1, 0x021C, 0xFB2E, 
    0xF5C6, 0x1B4A, 0x1B56, 0x1BFF, 0x1D18, 0x1E73, 0x1FE2, 0x2139, 0x224E, 0x2349, 0x245C, 0x2574, 0x267C, 0x2762, 
    0x2816, 0x288A, 0x28AE, 0x2866, 0x27B0, 0x26A8, 0x2569, 0x2414, 0x22CE, 0x21BD, 0x20BB, 0x1F96, 0x1E67, 0x1D46, 
    0x1C4B, 0x1B92, 0x1B34, 0x419D, 0x41A2, 0x41EC, 0x4270, 0x4327, 0x4403, 0x44ED, 0x45C1, 0x4695, 0x4796, 0x48BB, 
    0x49F0, 0x4B1C, 0x4C1E, 0x4CD0, 0x4D0A, 0x4C98, 0x4B89, 0x4A26, 0x48AE, 0x4750, 0x462A, 0x454F, 0x4494, 0x43D4, 
    0x4320, 0x4287, 0x420E, 0x41BC, 0x4194, 0x0000, 
};

JointIndex object_pr_Anim_0021E8JointIndices[] = {
    { 0x0003, 0x0001, 0x0001 },
    { 0x0001, 0x0001, 0x0001 },
    { 0x0001, 0x0021, 0x0001 },
    { 0x0001, 0x003F, 0x0001 },
    { 0x0001, 0x005D, 0x0001 },
    { 0x007B, 0x0099, 0x00B7 },
    { 0x0001, 0x0001, 0x00D5 },
    { 0x0001, 0x00F3, 0x0002 },
    { 0x0111, 0x012F, 0x014D },
    { 0x016B, 0x0189, 0x01A7 },
};

AnimationHeader object_pr_Anim_0021E8 = { 
    { 30 }, object_pr_Anim_0021E8FrameData, object_pr_Anim_0021E8JointIndices, 3
};

s16 sSkullFishDieAnimFrameData[] = {
    0x0000, 0x04AF, 0x4000, 0xFB51, 0x71BD, 0x4614, 0xEBA1, 0x11ED, 0x1AE4, 0x2856, 
};

JointIndex sSkullFishDieAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0003 },
    { 0x0008, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0006, 0x0000, 0x0007 },
};

AnimationHeader gSkullFishDieAnim = { 
    { 2 }, sSkullFishDieAnimFrameData, sSkullFishDieAnimJointIndices, 8
};

s16 sSkullFishAttackAnimFrameData[] = {
    0x0000, 0x0000, 0xFF79, 0xFF06, 0xFFE3, 0x00A5, 0xFFC5, 0xFED7, 0xFF61, 0x0000, 0x0031, 0x0064, 0x005E, 0x0049, 
    0x0030, 0x001A, 0x0009, 0x0000, 0x0096, 0x0000, 0x00BC, 0x0000, 0x0022, 0x0000, 0x0061, 0x0000, 0xF613, 0xFB7B, 
    0xDD52, 0x02C3, 0xE396, 0x0D4C, 0x097A, 0x4000, 0x3472, 0x2AA2, 0x3961, 0x4D3A, 0x45CF, 0x3882, 0x3B99, 0x0000, 
    0xEF8E, 0xEFD4, 0xD430, 0x0146, 0xE7DB, 0x1115, 0x0AFC, 0x0000, 0xF19E, 0xE584, 0xFC88, 0x1246, 0x0196, 0xED9A, 
    0xF5A9, 0x8000, 0x789B, 0x7155, 0x789C, 0x80F3, 0x7E83, 0x7AC5, 0x7D54, 0x0000, 0x0EF2, 0x1DBE, 0x0DE9, 0xFECF, 
    0x10D3, 0x2269, 0x1147, 0x0000, 0x10B4, 0xF5A0, 0xE02B, 0xF873, 0x1337, 0x07DB, 0xF682, 0x0000, 0x0B7C, 0x1530, 
    0x0D30, 0xFFE0, 0xF293, 0xEA9A, 0xF46B, 0x0000, 
};

JointIndex sSkullFishAttackAnimJointIndices[] = {
    { 0x0001, 0x0009, 0x0011 },
    { 0x0019, 0x0021, 0x0029 },
    { 0x0000, 0x0031, 0x0039 },
    { 0x0000, 0x0000, 0x0041 },
    { 0x0000, 0x0049, 0x0051 },
};

AnimationHeader gSkullFishAttackAnim = { 
    { 8 }, sSkullFishAttackAnimFrameData, sSkullFishAttackAnimJointIndices, 1
};

s16 sSkullFishSwimAnimFrameData[] = {
    0x0000, 0x8000, 0x0000, 0x001A, 0x004A, 0x0064, 0x005A, 0x0040, 0x0020, 0x0000, 0xFFD9, 0xFFB0, 0xFF9C, 0xFFAC, 
    0xFFCE, 0xFFF0, 0x4000, 0x419A, 0x4478, 0x45B0, 0x44B4, 0x4310, 0x4109, 0x3EE1, 0x3CDD, 0x3B40, 0x3A50, 0x3AE9, 
    0x3CE6, 0x3F04, 0xF937, 0xFB7B, 0xFE94, 0x01F4, 0x050E, 0x0752, 0x0833, 0x0752, 0x050E, 0x01F4, 0xFE94, 0xFB7B, 
    0xF937, 0xF856, 0x0000, 0xFFE2, 0x016B, 0x0403, 0x0711, 0x09FD, 0x0C2D, 0x0D0A, 0x0C35, 0x0A17, 0x0741, 0x0443, 
    0x01AD, 0x0012, 0xEC7F, 0xF6C9, 0x0000, 0x0939, 0x124E, 0x1669, 0x1459, 0x0F0B, 0x07D2, 0x0000, 0xF477, 0xE716, 
    0xE0AB, 0xE420, 
};

JointIndex sSkullFishSwimAnimJointIndices[] = {
    { 0x0002, 0x0000, 0x0000 },
    { 0x0000, 0x0010, 0x0000 },
    { 0x0000, 0x001E, 0x0001 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x003A, 0x0000 },
};

AnimationHeader gSkullFishSwimAnim = { 
    { 14 }, sSkullFishSwimAnimFrameData, sSkullFishSwimAnimJointIndices, 2
};
