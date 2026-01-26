#include "ovl_En_Tanron1.h"

u64 ovl_En_Tanron1Tex_001028[] = {
#include "assets/overlays/ovl_En_Tanron1/ovl_En_Tanron1Tex_001028.rgba16.inc.c"
};

u64 ovl_En_Tanron1_DL_001428[] = {
#include "assets/overlays/ovl_En_Tanron1/tex_001428.rgba16.inc.c"
};

Vtx ovl_En_Tanron1Vtx_001828[] = {
#include "assets/overlays/ovl_En_Tanron1/ovl_En_Tanron1Vtx_001828.vtx.inc"
};

Gfx ovl_En_Tanron1_DL_001888[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ovl_En_Tanron1Tex_001028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

Gfx ovl_En_Tanron1_DL_001900[] = {
    gsSPVertex(ovl_En_Tanron1Vtx_001828, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};
