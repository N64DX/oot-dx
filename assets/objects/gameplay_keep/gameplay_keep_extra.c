#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gameplay_keep_extra.h"
#include "assets/misc/link_animetion/link_animetion_extra.h"

#include "gfx.h"

// Square shadow

static Vtx gSquareShadowVtx[] = {
    VTX(-100, 0, 100, 0, 1024, 0, 0, 0, 255),
	VTX(100, 0, 100, 1024, 1024, 0, 0, 0, 255),
	VTX(100, 0, -100, 1024, 0, 0, 0, 0, 255),
	VTX(-100, 0, -100, 0, 0, 0, 0, 0, 255),
};

static u64 gSquareShadowTex[] = {
#include "assets/objects/gameplay_keep/extra/gSquareShadowTex.i4.inc.c"
};

Gfx gSquareShadowDL[] = {
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPLoadTextureBlock_4b(gSquareShadowTex, G_IM_FMT_I, 16, 16, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gSquareShadowVtx, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};



// Floor & wall impact

static Vtx gameplay_keepVtx_06A980[] = {
#include "assets/objects/gameplay_keep/extra/impact/gameplay_keep_Vtx_06A980.inc.c"
};

static u64 gameplay_keep_Tex_06ABF8[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06ABF8.rgba16.inc.c"
};

Gfx gFloorImpactDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_06ABF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 36, 36, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06A980, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 0, 2, 0, 10, 2, 11, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[12], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 4, 3, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[19], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[23], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};



// Feather

u64 gDropFeatherTex[] = {
#include "assets/objects/gameplay_keep/extra/gDropFeatherTex.rgba16.inc.c"
};



// Star

u64 gStarTex[] = {
#include "assets/objects/gameplay_keep/extra/gStarTex.ia8.inc.c"
};



// Hookshot

static Vtx gLinkAdultHookshotChainVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainVtx.inc.c"
};

static u64 gLinkAdultHookshotChainTex[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainTex.rgba16.inc.c"
};

Gfx gLinkHookshotChainDL[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainDL.inc.c"
};

static Vtx gLinkAdultHookshotTipVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipVtx.inc.c"
};

Gfx gLinkOcarinaHookshotTipDL[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipDL.inc.c"
};

static Vtx gLinkMajoraHookshotTipVtx[] = {
#include "assets/objects/gameplay_keep/extra/gLinkMajoraHookshotTipVtx.inc.c"
};

static u64 gHookshotTipLUT[] = {
#include "assets/objects/object_link_child/other/sword_bow_hookshot_hand_tlut.rgba16.inc.c"
};

static u64 gLinkMajoraHookshotDesignTex[] = {
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

static u64 gLinkAdultHookshotReticleTex[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleTex.i8.inc.c"
};

static Vtx gLinkAdultHookshotReticleVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleVtx.inc.c"
};

Gfx gLinkHookshotReticleDL[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleDL.inc.c"
};



// Spark

static Vtx gameplay_keepVtx_023440[] = {
#include "assets/objects/gameplay_keep/extra/gameplay_keep_Vtx_023440.inc.c"
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

static Vtx gameplay_keepVtx_023308[] = {
#include "assets/objects/gameplay_keep/extra/gameplay_keep_Vtx_023308.inc.c"
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

static Vtx gameplay_keepVtx_051080[] = {
#include "assets/objects/gameplay_keep/extra/gameplay_keep_Vtx_051080.inc.c"
};

u64 gEffFireMask1Tex[] = {
#include "assets/objects/gameplay_keep/extra/eff_fire_mask_1.i4.inc.c"
};

static u64 gEffIceSmokeTex[] = {
#include "assets/objects/gameplay_keep/extra/eff_ice_smoke.i4.inc.c"
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

static Vtx gameplay_keepVtx_0502C0[] = {
#include "assets/objects/gameplay_keep/extra/gameplay_keep_Vtx_0502C0.inc.c"
};

static u64 gEffIceFragmentTex[] = {
#include "assets/objects/gameplay_keep/extra/eff_ice_fragment.i8.inc.c"
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

static Vtx gLinkChildLinkDekuStickVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickVtx.inc.c"
};

Gfx gLinkDekuStickDL[] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickDL.inc.c"
};

static Vtx gLinkAdultBrokenGiantsKnifeBladeVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeVtx.inc.c"
};

Gfx gLinkBrokenGiantsKnifeBladeDL[] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeDL.inc.c"
};



// Masks

static Vtx gLinkChildKeatonMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskVtx.inc.c"
};

static Vtx gLinkChildSkullMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskVtx.inc.c"
};

static Vtx gLinkChildSpookyMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskVtx.inc.c"
};

static Vtx gLinkChildBunnyHoodVtx[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodVtx.inc.c"
};

static Vtx gLinkChildGoronMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskVtx.inc.c"
};

static Vtx gLinkChildZoraMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskVtx.inc.c"
};

static Vtx gLinkChildGerudoMaskVtx[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskVtx.inc.c"
};

static Vtx gLinkChildMaskOfTruthVtx[] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthVtx.inc.c"
};

static u64 gLinkChildKeatonMaskEyeBrowTex[] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskEyeBrowTex.rgba16.inc.c"
};

static u64 gLinkChildKeatonMaskEarTex[] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskEarTex.rgba16.inc.c"
};

static u64 gLinkChildSkullMaskEyeTex[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskEyeTex.rgba16.inc.c"
};

static u64 gLinkChildSkullMaskNoseTex[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskNoseTex.rgba16.inc.c"
};

static u64 gLinkChildSkullMaskTeethTex[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskTeethTex.rgba16.inc.c"
};

static u64 gLinkChildSpookyMaskTex[] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskTex.ia16.inc.c"
};

static u64 gLinkChildBunnyHoodTex[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodTex.rgba16.inc.c"
};

static u64 gLinkChildBunnyHoodEyeTex[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodEyeTex.rgba16.inc.c"
};

static u64 gLinkChildBunnyHoodEarTex[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodEarTex.rgba16.inc.c"
};

static u64 gLinkChildGoronMaskEyeTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEyeTex.rgba16.inc.c"
};

static u64 gLinkChildGoronMaskNoseTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskNoseTex.rgba16.inc.c"
};

static u64 gLinkChildGoronMaskMouthTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskMouthTex.rgba16.inc.c"
};

static u64 gLinkChildGoronMaskHairTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskHairTex.rgba16.inc.c"
};

static u64 gLinkChildGoronMaskEarTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEarTex.rgba16.inc.c"
};

static u64 gLinkChildZoraMaskEyeBoarderTex[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeBoarderTex.rgba16.inc.c"
};

static u64 gLinkChildZoraMaskEarTex[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEarTex.rgba16.inc.c"
};

static u64 gLinkChildZoraMaskEyeTex[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeTex.rgba16.inc.c"
};

static u64 gLinkChildZoraMaskMouthTex[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskMouthTex.rgba16.inc.c"
};

static u64 gLinkChildGerudoMaskEyeTex[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskEyeTex.rgba16.inc.c"
};

static u64 gLinkChildGerudoMaskNoseTex[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskNoseTex.rgba16.inc.c"
};

static u64 gLinkChildGerudoMaskMouthTex[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskMouthTex.rgba16.inc.c"
};

static u64 gLinkChildGerudoMaskHairTex[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskHairTex.rgba16.inc.c"
};

static u64 gLinkChildMaskOfTruthTex[] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthTex.rgba16.inc.c"
};

static u64 gLinkChildMaskOfTruthCurveTex[] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthCurveTex.rgba16.inc.c"
};

Gfx gLinkChildKeatonMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskDL.inc.c"
};

Gfx gLinkChildSkullMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskDL.inc.c"
};

Gfx gLinkChildSpookyMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskDL.inc.c"
};

Gfx gLinkChildBunnyHoodDL[] = {
#include "assets/objects/object_link_child/gLinkChildBunnyHoodDL.inc.c"
};

Gfx gLinkChildGoronMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskDL.inc.c"
};

Gfx gLinkChildZoraMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskDL.inc.c"
};

Gfx gLinkChildGerudoMaskDL[] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskDL.inc.c"
};

Gfx gLinkChildMaskOfTruthDL[] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthDL.inc.c"
};



// MM Bottle

static Vtx gMMBottleVtx[] = {
#include "assets/objects/gameplay_keep/extra/gMMbottleVtx.inc.c"
};

static u64 gMMBottleContentsTex[] = {
#include "assets/objects/gameplay_keep/extra/gMMBottleContentsTex.i8.inc.c"
};

static u64 gMMBottleGlassTex[] = {
#include "assets/objects/gameplay_keep/extra/gMMBottleGlassTex.i8.inc.c"
};

Gfx gMMBottleContentsDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gMMBottleContentsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gMMBottleVtx, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(4, 0, 2, 0, 6, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 4, 2, 6, 0),
    gsSP2Triangles(9, 7, 6, 0, 9, 10, 7, 0),
    gsSP2Triangles(2, 10, 9, 0, 2, 11, 10, 0),
    gsSP2Triangles(2, 9, 6, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 8, 7, 0, 11, 12, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gMMBottleGlassDL[] = {
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, SHADE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, PRIMITIVE, SHADE, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 170, 240, 255, 255),
    gsDPSetEnvColor(128, 128, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gMMBottleGlassTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gMMBottleVtx[13], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 9, 5, 0, 9, 4, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 7, 6, 9, 0),
    gsSPTexture(0x0640, 0x08FC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsSPVertex(&gMMBottleVtx[23], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 10, 8, 0),
    gsSP2Triangles(2, 10, 9, 0, 2, 1, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 16, 11, 0, 16, 14, 11, 0),
    gsSP2Triangles(8, 17, 15, 0, 17, 16, 15, 0),
    gsSP2Triangles(10, 18, 8, 0, 18, 17, 8, 0),
    gsSP2Triangles(13, 18, 10, 0, 13, 12, 18, 0),
    gsSP2Triangles(12, 16, 18, 0, 12, 14, 16, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPEndDisplayList(),
};



// MM animations

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

LinkAnimationHeader gPlayerAnim_alink_fukitobu = {
    { 20 }, gPlayerAnim_alink_fukitobu_Data,
};

LinkAnimationHeader gPlayerAnim_alink_kyoro = {
    { 15 }, gPlayerAnim_alink_kyoro_Data,
};

LinkAnimationHeader gPlayerAnim_alink_kyoro_loop = {
    { 62 }, gPlayerAnim_alink_kyoro_loop_Data,
};

// Zora Swim animations

LinkAnimationHeader gPlayerAnim_link_start_booster_jump = {
	{ 16 }, gPlayerAnim_link_start_booster_jump_Data, 
};

LinkAnimationHeader gPlayerAnim_link_booster_jump = {
	{ 16 }, gPlayerAnim_link_booster_jump_Data, 
};

LinkAnimationHeader gPlayerAnim_link_finish_booster_jump = {
	{ 16 }, gPlayerAnim_link_finish_booster_jump_Data, 
};

LinkAnimationHeader gPlayerAnim_link_fish_swim = {
	{ 10 }, gPlayerAnim_link_fish_swim_Data, 
};

LinkAnimationHeader gPlayerAnim_link_swim_to_wait = {
	{ 10 }, gPlayerAnim_link_swim_to_wait_Data, 
};

LinkAnimationHeader gPlayerAnim_link_water_roll = {
	{ 18 }, gPlayerAnim_link_water_roll_Data, 
};



// Beehive

static Vtx gFieldBeehiveVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveVtx.inc.c"
};

static Vtx gFieldBeehiveFragmentVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentVtx.inc.c"
};

static u64 gFieldBeehiveTex[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveTex.rgba16.inc.c"
};

static u64 gFieldBeehiveFragmentTex[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentTex.rgba16.inc.c"
};

Gfx gFieldBeehiveDL[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveDL.inc.c"
};

Gfx gFieldBeehiveFragmentDL[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentDL.inc.c"
};



// Liftable Rock

static Vtx gFieldKakeraVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraVtx.inc.c"
};

static u64 gFieldKakeraTex[] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraTex.rgba16.inc.c"
};

Gfx gFieldKakeraDL[] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraDL.inc.c"
};



// Dash Wind Effet

static Vtx gDashWindConeVtx[] = {
#include "assets/objects/gameplay_keep/extra/gDashWindConeVtx.inc.c"
};

static u64 sDashWindTex[] = {
#include "assets/overlays/ovl_Magic_Wind/sTex.i8.inc.c"
};

Gfx sDashWindConeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sDashWindTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(sDashWindTex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 255, 0, 0),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gDashWindConeVtx, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 8, 1, 0),
    gsSPEndDisplayList(),
};



// Cane of Somaria

static Vtx gCaneOfSomaria1Vtx[] = {
#include "assets/objects/gameplay_keep/extra/gCaneOfSomaria1Vtx.inc.c"
};

static Vtx gCaneOfSomaria2Vtx[] = {
#include "assets/objects/gameplay_keep/extra/gCaneOfSomaria2Vtx.inc.c"
};

static const Gfx gPlayerCane1DL[] = {
    gsSPVertex(gCaneOfSomaria1Vtx, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[62], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[157], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[189], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&gCaneOfSomaria1Vtx[221], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSPEndDisplayList(),
};

static const Gfx gPlayerCane2DL[] = {
    gsSPVertex(gCaneOfSomaria2Vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx gPlayerCaneOfByrnaDL[] = {
    gsDPPipeSync(),
    gsSPLoadGeometryMode(G_SHADE | G_FOG | G_CULL_BACK | G_ZBUFFER | G_SHADING_SMOOTH | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TD_CLAMP | G_CYC_2CYCLE | G_AD_NOISE | G_CD_MAGICSQ | G_TP_PERSP | G_TL_TILE | G_TF_BILERP | G_CK_NONE | G_PM_NPRIMITIVE | G_TT_NONE | G_TC_FILT),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_FOG_SHADE_A | G_AC_NONE | G_ZS_PIXEL | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 41, 80, 200, 255),
    gsSPDisplayList(gPlayerCane1DL),
    gsDPSetPrimColor(0, 0, 80, 140, 255, 255),
    gsSPDisplayList(gPlayerCane2DL),
    gsSPEndDisplayList(),
};

Gfx gPlayerCaneOfSomariaDL[] = {
    gsDPPipeSync(),
    gsSPLoadGeometryMode(G_SHADE | G_FOG | G_CULL_BACK | G_ZBUFFER | G_SHADING_SMOOTH | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TD_CLAMP | G_CYC_2CYCLE | G_AD_NOISE | G_CD_MAGICSQ | G_TP_PERSP | G_TL_TILE | G_TF_BILERP | G_CK_NONE | G_PM_NPRIMITIVE | G_TT_NONE | G_TC_FILT),
    gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_FOG_SHADE_A | G_AC_NONE | G_ZS_PIXEL | G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 177, 50, 41, 255),
    gsSPDisplayList(gPlayerCane1DL),
    gsDPSetPrimColor(0, 0, 56, 83, 113, 255),
    gsSPDisplayList(gPlayerCane2DL),
    gsSPEndDisplayList(),
};



// Hylian Elegy of Emptiness Statue

static Vtx gameplay_keepVtx_01ADB0[] = {
#include "assets/objects/gameplay_keep/extra/elegy/gameplay_keepVtx_01ADB0.inc.c"
};

static u64 gElegyShellHumanMouthTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_mouth.rgba16.inc.c"
};

static u64 gElegyShellHumanEyeAndNoseTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_eye_and_nose.rgba16.inc.c"
};

static u64 gElegyShellHumanNostrilsAndSkinTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_nostrils_and_skin.rgba16.inc.c"
};

static u64 gElegyShellHumanBootsTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_boots.rgba16.inc.c"
};

static u64 gElegyShellHumanPlatformTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_platform.rgba16.inc.c"
};

static u64 gElegyShellBeltAndTunicTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_belt_and_tunic.rgba16.inc.c"
};

static u64 gElegyShellHumanHairTex[] = {
#include "assets/objects/gameplay_keep/extra/elegy/elegy_shell_human_hair.rgba16.inc.c"
};

Gfx gElegyShellHumanDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_01ADB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(0, 13, 3, 0, 8, 13, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 12, 16, 0),
    gsSP2Triangles(13, 15, 14, 0, 15, 8, 12, 0),
    gsSP2Triangles(13, 8, 15, 0, 3, 13, 14, 0),
    gsSP2Triangles(17, 7, 18, 0, 19, 7, 17, 0),
    gsSP2Triangles(12, 19, 16, 0, 12, 7, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 8, 27, 6, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[31], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanEyeAndNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(11, 15, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 14, 16, 0, 17, 12, 14, 0),
    gsSP2Triangles(17, 18, 12, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 18, 19, 0, 15, 21, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 18, 20, 0),
    gsSP2Triangles(25, 26, 18, 0, 12, 18, 26, 0),
    gsSP2Triangles(27, 12, 26, 0, 22, 27, 26, 0),
    gsSP2Triangles(27, 22, 24, 0, 27, 24, 28, 0),
    gsSP2Triangles(12, 27, 28, 0, 13, 12, 28, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanNostrilsAndSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[60], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 1, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 1, 11, 0),
    gsSP2Triangles(19, 9, 8, 0, 19, 20, 9, 0),
    gsSP2Triangles(21, 20, 19, 0, 19, 22, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 4, 6, 7, 0),
    gsSP2Triangles(26, 27, 28, 0, 21, 29, 30, 0),
    gsSP1Triangle(30, 31, 21, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[99], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 5, 4, 0),
    gsSP2Triangles(11, 10, 4, 0, 13, 0, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 5, 19, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellBeltAndTunicTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[120], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 9, 4, 0),
    gsSP2Triangles(7, 6, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 13, 18, 0),
    gsSP2Triangles(18, 21, 0, 0, 2, 18, 0, 0),
    gsSP2Triangles(10, 21, 13, 0, 2, 22, 19, 0),
    gsSP2Triangles(19, 22, 23, 0, 3, 24, 6, 0),
    gsSP2Triangles(5, 24, 3, 0, 1, 22, 2, 0),
    gsSP2Triangles(21, 25, 0, 0, 25, 21, 10, 0),
    gsSP2Triangles(18, 13, 21, 0, 19, 18, 2, 0),
    gsSP2Triangles(25, 24, 0, 0, 0, 24, 1, 0),
    gsSP2Triangles(25, 10, 6, 0, 6, 24, 25, 0),
    gsSP2Triangles(1, 5, 22, 0, 5, 1, 24, 0),
    gsSP2Triangles(5, 4, 22, 0, 4, 26, 22, 0),
    gsSP2Triangles(23, 22, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[150], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 0, 9, 0),
    gsSP2Triangles(6, 8, 10, 0, 11, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 22, 21, 0, 4, 23, 24, 0),
    gsSP2Triangles(4, 25, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(25, 29, 23, 0, 29, 30, 23, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[181], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 9, 16, 12, 0),
    gsSP2Triangles(8, 10, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 13, 0, 20, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 25, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[213], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 3, 1, 0),
    gsSP1Triangle(8, 1, 3, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanNostrilsAndSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[222], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 6, 17, 4, 0),
    gsSP2Triangles(11, 18, 19, 0, 10, 18, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 3, 1, 0),
    gsSP2Triangles(25, 1, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[252], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 13, 7, 4, 0),
    gsSP2Triangles(14, 13, 4, 0, 14, 4, 3, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(15, 19, 20, 0, 19, 15, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 23, 26, 0, 23, 22, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanBootsTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[283], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 18, 17, 0, 2, 21, 0, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[313], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 8, 7, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanPlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[337], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 3, 0, 4, 14, 12, 0),
    gsSP2Triangles(12, 14, 11, 0, 3, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 20, 0),
    gsSP2Triangles(18, 17, 21, 0, 20, 17, 22, 0),
    gsSPEndDisplayList(),
};

static Vtx gameplay_keepVtx_06BB20[] = {
#include "assets/objects/gameplay_keep/extra/impact/gameplay_keep_Vtx_06BB20.inc.c"
};

static u64 gameplay_keep_Tex_06C350[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06C350.i4.inc.c"
};

static u64 gameplay_keep_Tex_06CB50[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06CB50.i4.inc.c"
};

static u64 gameplay_keep_Tex_06D350[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06D350.i4.inc.c"
};

static u64 gameplay_keep_Tex_06DB50[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06DB50.i4.inc.c"
};

static u64 gameplay_keep_Tex_06E350[] = {
#include "assets/objects/gameplay_keep/extra/impact/tex_06E350.i4.inc.c"
};

static Gfx gameplay_keep_DL_06BFE0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06E350, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06E350, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06BB20, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static Gfx gameplay_keep_DL_06C098[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 155, 80),
    gsDPSetEnvColor(155, 155, 55, 255),
    gsSPDisplayList(0x09000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06D350, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06CB50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 13, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_06BB20[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 4, 11, 5, 0),
    gsSP2Triangles(12, 8, 9, 0, 12, 9, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(10, 16, 17, 0, 10, 17, 11, 0),
    gsSP2Triangles(18, 14, 15, 0, 18, 15, 19, 0),
    gsSP2Triangles(20, 18, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(16, 22, 23, 0, 16, 23, 17, 0),
    gsSP2Triangles(24, 20, 21, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(22, 28, 29, 0, 22, 29, 23, 0),
    gsSP2Triangles(30, 26, 27, 0, 30, 27, 31, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPEndDisplayList(),
};

static Gfx gameplay_keep_DL_06C1E8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06C350, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06DB50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0x0050, 0x00FC, 0x014C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_06BB20[4], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[14], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[24], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[34], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
    gsSPEndDisplayList(),
};

static KeyFrame gameplay_keep_KeyFrame_06BB0C[] = {
     { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 9000, }, { 9, 600, 10502, }, { 10, 700, 3137, }, { 11, 809, 3352, }, { 12, 924, 3467, }, { 13, 1040, 3482, }, { 14, 1156, 3398, }, { 15, 1267, 3215, }, { 16, 1370, 2932, }, { 17, 1462, 2549, }, { 18, 1540, 2067, }, { 19, 1600, 900, }, { 20, 1600, 0, }, { 41, 1600, 0, }, { 1, 0, 0, },
     { 7, 0, 0, }, { 8, 0, 3000, }, { 9, 200, 3094, }, { 10, 206, 148, }, { 11, 210, 76, }, { 12, 211, 19, }, { 13, 211, -25, }, { 14, 210, -56, }, { 15, 207, -72, }, { 16, 205, -74, }, { 17, 202, -62, }, { 18, 201, -37, }, { 19, 200, -10, }, { 21, 200, 0, }, { 41, 200, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 9000, },
     { 9, 600, 10503, }, { 10, 700, 3141, }, { 11, 809, 3359, }, { 12, 924, 3475, }, { 13, 1041, 3491, }, { 14, 1157, 3405, }, { 15, 1268, 3218, }, { 16, 1371, 2929, }, { 17, 1463, 2540, }, { 18, 1541, 2049, }, { 19, 1600, 889, }, { 20, 1600, 0, }, { 41, 1600, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 6119, },
     { 9, 408, 6493, }, { 10, 433, 714, }, { 11, 456, 648, }, { 12, 476, 585, }, { 13, 495, 525, }, { 14, 511, 469, }, { 15, 526, 416, }, { 16, 539, 366, }, { 17, 550, 319, }, { 18, 560, 275, }, { 19, 569, 235, }, { 20, 576, 198, }, { 21, 582, 164, }, { 22, 587, 133, }, { 23, 591, 105, }, { 24, 594, 81, }, { 25, 596, 60, },
     { 26, 598, 42, }, { 27, 599, 27, }, { 28, 599, 16, }, { 30, 600, 2, }, { 40, 600, 0, }, { 41, 600, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 358, }, { 9, 24, 766, }, { 10, 51, 848, }, { 11, 80, 905, }, { 12, 111, 953, }, { 13, 144, 991, }, { 14, 177, 1019, }, { 15, 212, 1037, }, { 17, 282, 1044, }, { 18, 316, 1033, },
     { 19, 350, 1012, }, { 20, 384, 981, }, { 21, 416, 941, }, { 22, 446, 891, }, { 23, 475, 830, }, { 24, 502, 761, }, { 25, 526, 681, }, { 26, 547, 592, }, { 27, 565, 493, }, { 28, 580, 384, }, { 29, 591, 265, }, { 30, 598, 137, }, { 31, 600, 35, }, { 32, 600, 0, }, { 41, 600, 0, }, { 1, 0, 0, }, { 7, 0, 0, },
     { 8, 0, 6119, }, { 9, 408, 6493, }, { 10, 433, 714, }, { 11, 456, 648, }, { 12, 476, 585, }, { 13, 495, 525, }, { 14, 511, 469, }, { 15, 526, 416, }, { 16, 539, 366, }, { 17, 550, 319, }, { 18, 560, 275, }, { 19, 569, 235, }, { 20, 576, 198, }, { 21, 582, 164, }, { 22, 587, 133, }, { 23, 591, 105, }, { 24, 594, 81, },
     { 25, 596, 60, }, { 26, 598, 42, }, { 27, 599, 27, }, { 28, 599, 16, }, { 30, 600, 2, }, { 40, 600, 0, }, { 41, 600, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 12600, }, { 9, 840, 12600, }, { 10, 840, 0, }, { 41, 840, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 12600, }, { 9, 840, 12600, }, { 10, 840, 0, },
     { 41, 840, 0, }, { 1, 0, 0, }, { 7, 0, 0, }, { 8, 0, 14400, }, { 9, 960, 14400, }, { 10, 960, 0, }, { 41, 960, 0, },
};

static u16 gameplay_keep_flexBitFlags_06BB0C[]               = { 0x0000, 0x01C0, 0x01C0, 0x01C0 };
static s16 gameplay_keep_kfNums_06BB0C[]                     = { 0x0010, 0x0010, 0x0010, 0x001A, 0x001B, 0x001A, 0x0006, 0x0006, 0x0006 };
static s16 gameplay_keep_presetValues_06BB0C[]               = { 0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };
static KeyFrameFlexLimb gameplay_keep_KeyFrameLimbs_06EB70[] = { { NULL, 0x03, 0x01, 0xFF }, { gameplay_keep_DL_06C1E8, 0x00, 0x01, 0xFF }, { gameplay_keep_DL_06C098, 0x00, 0x01, 0xFF }, { gameplay_keep_DL_06BFE0, 0x00, 0x01, 0xFF }, };
KeyFrameFlexSkeleton gameplay_keep_KFSkel_06EB70             = { 0x04, 0x03, gameplay_keep_KeyFrameLimbs_06EB70 };
KeyFrameAnimation gameplay_keep_KFAnim_06BB0C                = {  gameplay_keep_flexBitFlags_06BB0C, gameplay_keep_KeyFrame_06BB0C, gameplay_keep_kfNums_06BB0C, gameplay_keep_presetValues_06BB0C, 0xFFFF, 0x0029 };
