#include "assets/objects/gameplay_keep/gameplay_keep_extra.h"
#include "assets/misc/link_animetion/link_animetion_extra.h"

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



// Spark

Vtx gameplay_keepVtx_023440[] = {
#include "assets/objects/gameplay_keep/gameplay_keep_Vtx_023440.inc.c"
};

u64 gElectricSpark1Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_1.i4.inc.h"
};

u64 gElectricSpark2Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_2.i4.inc.h"
};

u64 gElectricSpark3Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_3.i4.inc.h"
};

u64 gElectricSpark4Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_4.i4.inc.h"
};

Gfx gElectricSparkMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,  G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gElectricSparkModelDL[] = {
    gsSPVertex(gameplay_keepVtx_023440, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};



// Light Orb

Vtx gameplay_keepVtx_023308[] = {
#include "assets/objects/gameplay_keep/gameplay_keep_Vtx_023308.inc.c"
};

Gfx gLightOrbMaterial1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gLightOrbMaterial2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gLightOrbModelDL[] = {
    gsSPVertex(gameplay_keepVtx_023308, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};



// Frozen Steam

Vtx gameplay_keepVtx_051080[] = {
#include "assets/objects/gameplay_keep/gameplay_keep_Vtx_051080.inc.c"
};

u64 gEffFireMask1Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_mask_1.i4.inc.c"
};

u64 gEffIceSmokeTex[] = {
#include "assets/objects/gameplay_keep/eff_ice_smoke.i4.inc.c"
};

Gfx gFrozenSteamMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gEffFireMask1Tex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(gEffIceSmokeTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetEnvColor(255, 255, 255, 128),
    gsSPEndDisplayList(),
};

Gfx gFrozenSteamModelDL[] = {
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_051080, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};



// Ice Fragment

Vtx gameplay_keepVtx_0502C0[] = {
#include "assets/objects/gameplay_keep/gameplay_keep_Vtx_0502C0.inc.c"
};

u64 gEffIceFragmentTex[] = {
#include "assets/objects/gameplay_keep/eff_ice_fragment.i8.inc.c"
};

Gfx gEffIceFragment2MaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffIceFragmentTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPEndDisplayList(),
};

Gfx gEffIceFragment2ModelDL[] = {
    gsSPVertex(gameplay_keepVtx_0502C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[33], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSPEndDisplayList(),
};



// Deku stick & Broken Giant's Knife

Vtx gLinkChildLinkDekuStickVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickVtx.inc.c"
};

Gfx gLinkDekuStickDL[41] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickDL.inc.c"
};

Vtx gLinkAdultBrokenGiantsKnifeBladeVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeVtx.inc.c"
};

Gfx gLinkBrokenGiantsKnifeBladeDL[28] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeDL.inc.c"
};



// Masks

#define gLinkChildSpookyMaskTex_WIDTH 32
#define gLinkChildSpookyMaskTex_HEIGHT 64
u64 gLinkChildSpookyMaskTex[TEX_LEN(u64, gLinkChildSpookyMaskTex_WIDTH, gLinkChildSpookyMaskTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskTex.ia16.inc.c"
};

#define gLinkChildKeatonMaskEyeBrowTex_WIDTH 32
#define gLinkChildKeatonMaskEyeBrowTex_HEIGHT 16
u64 gLinkChildKeatonMaskEyeBrowTex[TEX_LEN(u64, gLinkChildKeatonMaskEyeBrowTex_WIDTH, gLinkChildKeatonMaskEyeBrowTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskEyeBrowTex.rgba16.inc.c"
};

#define gLinkChildKeatonMaskEarTex_WIDTH 8
#define gLinkChildKeatonMaskEarTex_HEIGHT 8
u64 gLinkChildKeatonMaskEarTex[TEX_LEN(u64, gLinkChildKeatonMaskEarTex_WIDTH, gLinkChildKeatonMaskEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskEarTex.rgba16.inc.c"
};

#define gLinkChildSkullMaskEyeTex_WIDTH 16
#define gLinkChildSkullMaskEyeTex_HEIGHT 16
u64 gLinkChildSkullMaskEyeTex[TEX_LEN(u64, gLinkChildSkullMaskEyeTex_WIDTH, gLinkChildSkullMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildMaskOfTruthTex_WIDTH 32
#define gLinkChildMaskOfTruthTex_HEIGHT 64
u64 gLinkChildMaskOfTruthTex[TEX_LEN(u64, gLinkChildMaskOfTruthTex_WIDTH, gLinkChildMaskOfTruthTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthTex.rgba16.inc.c"
};

#define gLinkChildMaskOfTruthCurveTex_WIDTH 16
#define gLinkChildMaskOfTruthCurveTex_HEIGHT 32
u64 gLinkChildMaskOfTruthCurveTex[TEX_LEN(u64, gLinkChildMaskOfTruthCurveTex_WIDTH, gLinkChildMaskOfTruthCurveTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthCurveTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskMouthTex_WIDTH 64
#define gLinkChildGoronMaskMouthTex_HEIGHT 32
u64 gLinkChildGoronMaskMouthTex[TEX_LEN(u64, gLinkChildGoronMaskMouthTex_WIDTH, gLinkChildGoronMaskMouthTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskEyeTex_WIDTH 32
#define gLinkChildGoronMaskEyeTex_HEIGHT 32
u64 gLinkChildGoronMaskEyeTex[TEX_LEN(u64, gLinkChildGoronMaskEyeTex_WIDTH, gLinkChildGoronMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskNoseTex_WIDTH 8
#define gLinkChildGoronMaskNoseTex_HEIGHT 8
u64 gLinkChildGoronMaskNoseTex[TEX_LEN(u64, gLinkChildGoronMaskNoseTex_WIDTH, gLinkChildGoronMaskNoseTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskNoseTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskHairTex_WIDTH 16
#define gLinkChildGoronMaskHairTex_HEIGHT 16
u64 gLinkChildGoronMaskHairTex[TEX_LEN(u64, gLinkChildGoronMaskHairTex_WIDTH, gLinkChildGoronMaskHairTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskHairTex.rgba16.inc.c"
};

#define gLinkChildSkullMaskTeethTex_WIDTH 8
#define gLinkChildSkullMaskTeethTex_HEIGHT 8
u64 gLinkChildSkullMaskTeethTex[TEX_LEN(u64, gLinkChildSkullMaskTeethTex_WIDTH, gLinkChildSkullMaskTeethTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskTeethTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskEarTex_WIDTH 8
#define gLinkChildGoronMaskEarTex_HEIGHT 8
u64 gLinkChildGoronMaskEarTex[TEX_LEN(u64, gLinkChildGoronMaskEarTex_WIDTH, gLinkChildGoronMaskEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEarTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEyeBoarderTex_WIDTH 8
#define gLinkChildZoraMaskEyeBoarderTex_HEIGHT 8
u64 gLinkChildZoraMaskEyeBoarderTex[TEX_LEN(u64, gLinkChildZoraMaskEyeBoarderTex_WIDTH, gLinkChildZoraMaskEyeBoarderTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeBoarderTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEarTex_WIDTH 32
#define gLinkChildZoraMaskEarTex_HEIGHT 32
u64 gLinkChildZoraMaskEarTex[TEX_LEN(u64, gLinkChildZoraMaskEarTex_WIDTH, gLinkChildZoraMaskEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEarTex.rgba16.inc.c"
};

#define gLinkChildSkullMaskNoseTex_WIDTH 8
#define gLinkChildSkullMaskNoseTex_HEIGHT 8
u64 gLinkChildSkullMaskNoseTex[TEX_LEN(u64, gLinkChildSkullMaskNoseTex_WIDTH, gLinkChildSkullMaskNoseTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskNoseTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEyeTex_WIDTH 32
#define gLinkChildZoraMaskEyeTex_HEIGHT 32
u64 gLinkChildZoraMaskEyeTex[TEX_LEN(u64, gLinkChildZoraMaskEyeTex_WIDTH, gLinkChildZoraMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskMouthTex_WIDTH 32
#define gLinkChildZoraMaskMouthTex_HEIGHT 32
u64 gLinkChildZoraMaskMouthTex[TEX_LEN(u64, gLinkChildZoraMaskMouthTex_WIDTH, gLinkChildZoraMaskMouthTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskEyeTex_WIDTH 32
#define gLinkChildGerudoMaskEyeTex_HEIGHT 32
u64 gLinkChildGerudoMaskEyeTex[TEX_LEN(u64, gLinkChildGerudoMaskEyeTex_WIDTH, gLinkChildGerudoMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskMouthTex_WIDTH 16
#define gLinkChildGerudoMaskMouthTex_HEIGHT 16
u64 gLinkChildGerudoMaskMouthTex[TEX_LEN(u64, gLinkChildGerudoMaskMouthTex_WIDTH, gLinkChildGerudoMaskMouthTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskHairTex_WIDTH 16
#define gLinkChildGerudoMaskHairTex_HEIGHT 16
u64 gLinkChildGerudoMaskHairTex[TEX_LEN(u64, gLinkChildGerudoMaskHairTex_WIDTH, gLinkChildGerudoMaskHairTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskHairTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskNoseTex_WIDTH 8
#define gLinkChildGerudoMaskNoseTex_HEIGHT 8
u64 gLinkChildGerudoMaskNoseTex[TEX_LEN(u64, gLinkChildGerudoMaskNoseTex_WIDTH, gLinkChildGerudoMaskNoseTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskNoseTex.rgba16.inc.c"
};

Vtx gLinkChildSkullMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskVtx.inc.c"
};

Vtx gLinkChildSpookyMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskVtx.inc.c"
};

Vtx gLinkChildKeatonMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskVtx.inc.c"
};

Vtx gLinkChildMaskOfTruthVtx[] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthVtx.inc.c"
};

Vtx gLinkChildGoronMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskVtx.inc.c"
};

Vtx gLinkChildZoraMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskVtx.inc.c"
};

Vtx gLinkChildGerudoMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskVtx.inc.c"
};

Gfx gLinkChildSkullMaskDL[70] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskDL.inc.c"
};

Gfx gLinkChildSpookyMaskDL[30] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskDL.inc.c"
};

Gfx gLinkChildKeatonMaskDL[50] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskDL.inc.c"
};

Gfx gLinkChildMaskOfTruthDL[44] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthDL.inc.c"
};

Gfx gLinkChildGoronMaskDL[70] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskDL.inc.c"
};

Gfx gLinkChildZoraMaskDL[65] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskDL.inc.c"
};

Gfx gLinkChildGerudoMaskDL[84] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskDL.inc.c"
};

// Bunny hood

#define gLinkChildBunnyHoodEyeTex_WIDTH 16
#define gLinkChildBunnyHoodEyeTex_HEIGHT 16
u64 gLinkChildBunnyHoodEyeTex[TEX_LEN(u64, gLinkChildBunnyHoodEyeTex_WIDTH, gLinkChildBunnyHoodEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodEyeTex.rgba16.inc.c"
};

#define gLinkChildBunnyHoodTex_WIDTH 16
#define gLinkChildBunnyHoodTex_HEIGHT 32
u64 gLinkChildBunnyHoodTex[TEX_LEN(u64, gLinkChildBunnyHoodTex_WIDTH, gLinkChildBunnyHoodTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodTex.rgba16.inc.c"
};

#define gLinkChildBunnyHoodEarTex_WIDTH 16
#define gLinkChildBunnyHoodEarTex_HEIGHT 32
u64 gLinkChildBunnyHoodEarTex[TEX_LEN(u64, gLinkChildBunnyHoodEarTex_WIDTH, gLinkChildBunnyHoodEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodEarTex.rgba16.inc.c"
};

Vtx gLinkChildBunnyHoodVtx[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodVtx.inc.c"
};

Gfx gLinkChildBunnyHoodDL[114] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodDL.inc.c"
};

// MM Style Jumps

LinkAnimationHeader gPlayerAnim_link_normal_newroll_jump_20f = { 
    { 13 }, gPlayerAnim_link_normal_newroll_jump_20f_Data,
};

LinkAnimationHeader gPlayerAnim_link_normal_newroll_jump_end_20f = { 
    { 13 }, gPlayerAnim_link_normal_newroll_jump_end_20f_Data,
};

LinkAnimationHeader gPlayerAnim_link_normal_newside_jump_20f = { 
    { 14 }, gPlayerAnim_link_normal_newside_jump_20f_Data,
};

LinkAnimationHeader gPlayerAnim_link_normal_newside_jump_end_20f = { 
    { 16 }, gPlayerAnim_link_normal_newside_jump_end_20f_Data,
};
