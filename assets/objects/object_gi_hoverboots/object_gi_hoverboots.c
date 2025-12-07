#include "object_gi_hoverboots.h"
#include "extracted/ntsc-1.0/assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"
#include "sys_matrix.h"

u64 gGiHoverBootsDL_00000000_Tex[TEX_LEN(u64, gGiHoverBootsDL_00000000_Tex_WIDTH, gGiHoverBootsDL_00000000_Tex_HEIGHT, 4)] = {
#include "assets/objects/object_gi_hoverboots/gGiHoverBootsDL_00000000_Tex.ia4.inc.c"
};

u64 gGiHoverBootsDL_00000300_Tex[TEX_LEN(u64, gGiHoverBootsDL_00000300_Tex_WIDTH, gGiHoverBootsDL_00000300_Tex_HEIGHT, 4)] = {
#include "assets/objects/object_gi_hoverboots/gGiHoverBootsDL_00000300_Tex.i4.inc.c"
};

Vtx gGiHoverBootsVtx[] = {
#include "assets/objects/object_gi_hoverboots/gGiHoverBootsVtx.inc.c"
};

Gfx gGiHoverBootsDL[196] = {
#include "assets/objects/object_gi_hoverboots/gGiHoverBootsDL.inc.c"
};

Gfx gGiRedFeatherDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 230, 230, 160, 255),
    gsDPSetEnvColor(90, 60, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gGiHoverBootsDL_00000000_Tex, G_IM_FMT_IA, gGiHoverBootsDL_00000000_Tex_WIDTH, gGiHoverBootsDL_00000000_Tex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&gGiHoverBootsVtx[313], 12, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gGiGoldFeatherDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 230, 230, 160, 255),
    gsDPSetEnvColor(90, 60, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gGiHoverBootsDL_00000000_Tex, G_IM_FMT_IA, gGiHoverBootsDL_00000000_Tex_WIDTH, gGiHoverBootsDL_00000000_Tex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&gGiHoverBootsVtx[313], 12, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};
