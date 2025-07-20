#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "gameplay_keep_extra.h"

#include "gfx.h"

Vtx gLinkAdultHookshotChainVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainVtx.inc.c"
};

#define gLinkAdultHookshotChainTex_WIDTH 16
#define gLinkAdultHookshotChainTex_HEIGHT 32
u64 gLinkAdultHookshotChainTex[TEX_LEN(u64, gLinkAdultHookshotChainTex_WIDTH, gLinkAdultHookshotChainTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainTex.rgba16.inc.c"
};

Gfx gLinkHookshotChainDL[23] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainDL.inc.c"
};

Vtx gLinkAdultHookshotTipVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipVtx.inc.c"
};

Gfx gLinkOcarinaHookshotTipDL[22] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipDL.inc.c"
};

Vtx gLinkMajoraHookshotTipVtx[] = {
#include "assets/objects/gameplay_keep/gLinkMajoraHookshotTipVtx.inc.c"
};

u64 gHookshotTipLUT[] = {
#include "assets/objects/object_link_child/other/sword_bow_hookshot_hand_tlut.rgba16.inc.c"
};

u64 gLinkMajoraHookshotDesignTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow_design.ci8.inc.c"
};

Gfx gLinkMajoraHookshotTipDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gHookshotTipLUT),
    gsDPLoadTextureBlock(gLinkMajoraHookshotDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gLinkMajoraHookshotTipVtx, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 4, 3, 0, 1, 10, 11, 0),
    gsSP2Triangles(12, 10, 1, 0, 9, 13, 14, 0),
    gsSP2Triangles(3, 12, 0, 0, 9, 11, 6, 0),
    gsSP2Triangles(5, 8, 6, 0, 1, 0, 12, 0),
    gsSP2Triangles(13, 8, 5, 0, 15, 16, 5, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 14, 0, 0),
    gsSP2Triangles(10, 12, 17, 0, 0, 14, 15, 0),
    gsSP2Triangles(15, 4, 0, 0, 12, 3, 17, 0),
    gsSP2Triangles(16, 15, 14, 0, 5, 4, 15, 0),
    gsSP2Triangles(5, 7, 3, 0, 3, 7, 17, 0),
    gsSP2Triangles(13, 16, 14, 0, 5, 16, 13, 0),
    gsSP2Triangles(7, 6, 17, 0, 9, 8, 13, 0),
    gsSP2Triangles(6, 11, 17, 0, 2, 9, 14, 0),
    gsSP2Triangles(11, 9, 1, 0, 11, 10, 17, 0),
    gsSPEndDisplayList(),
};

#define gLinkAdultHookshotReticleTex_WIDTH 64
#define gLinkAdultHookshotReticleTex_HEIGHT 64
u64 gLinkAdultHookshotReticleTex[TEX_LEN(u64, gLinkAdultHookshotReticleTex_WIDTH, gLinkAdultHookshotReticleTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleTex.i8.inc.c"
};

Vtx gLinkAdultHookshotReticleVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleVtx.inc.c"
};

Gfx gLinkHookshotReticleDL[13] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleDL.inc.c"
};
