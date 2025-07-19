// Global

u64 gSwordBowHookshotHandTLUT[] = {
#include "assets/objects/object_link_child/other/sword_bow_hookshot_hand_tlut.rgba16.inc.c"
};



// Kokiri Sword

Gfx gLinkChildLeftHandHoldingBrokenSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
	gsSPDisplayList(gGildedSwordHandleDL),
    gsSPBranchList(gKokiriSwordBladeDL),
};

Gfx gKokiriSwordBladeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildLeftFistAndKokiriSwordNearVtx[50], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gLinkChildLeftFistAndKokiriSwordNearVtx[53], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 3, 5, 0),
    gsSP2Triangles(2, 1, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 7, 6, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordHandleDL[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&gLinkChildSwordAndSheathNearVtx[11], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 15, 0),
    gsSP2Triangles(19, 18, 22, 0, 16, 15, 22, 0),
    gsSP2Triangles(22, 15, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(11, 23, 13, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};



// Hero's Sword

u64 gHerosSwordHandlePommelTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_pommel.rgba16.inc.c"
};

u64 gHerosSwordHandleCrossGuardTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_cross_gaurd.ci8.inc.c"
};

u64 gHerosSwordHandleGripTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_grip.i8.inc.c"
};

u64 gHerosSwordHandleTLUT[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_tlut.rgba16.inc.c"
};

Vtx heros_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_handle.vtx.inc"
};

Vtx heros_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_blade.vtx.inc"
};

Gfx gLinkChildLeftHandHoldingHerosSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
	gsSPDisplayList(gHerosSwordHandleDL),
	gsSPBranchList(gHerosSwordBladeDL),
};

Gfx gHerosSwordHandleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gHerosSwordHandleGripTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_handle_vtx, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 7, 8, 0),
    gsSP2Triangles(10, 11, 0, 0, 11, 3, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gHerosSwordHandleTLUT),
    gsDPLoadTextureBlock(gHerosSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_sword_handle_vtx[12], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gHerosSwordHandleTLUT),
    gsDPLoadTextureBlock(gHerosSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 160, 160, 160, 255),
    gsSPVertex(&heros_sword_handle_vtx[18], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gHerosSwordHandleTLUT),
    gsDPLoadTextureBlock(gHerosSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&heros_sword_handle_vtx[22], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gHerosSwordHandlePommelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_sword_handle_vtx[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 0, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 4, 3, 0),
    gsSP2Triangles(2, 1, 7, 0, 1, 8, 7, 0),
    gsSP2Triangles(7, 6, 5, 0, 7, 8, 6, 0),
    gsSP2Triangles(8, 4, 6, 0, 1, 4, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gHerosSwordBladeDL[] = {
    gsSPTexture(0x06A4, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(heros_sword_blade_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x07D0, 0x0DAC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[3], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x04B0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[6], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x0640, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
    gsSPEndDisplayList(),
};



// Razor Sword

u64 gRazorSwordHandleDesignTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_design.rgba16.inc.c"
};

u64 gRazorSwordHandleGripTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_grip.rgba16.inc.c"
};

u64 gSwordMetalTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_metal.i8.inc.c"
};

Vtx razor_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle.vtx.inc"
};

Vtx razor_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_blade.vtx.inc"
};

Gfx gLinkChildLeftHandHoldingRazorSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
	gsSPDisplayList(gRazorSwordHandleDL),
	gsSPBranchList(gRazorSwordBladeDL),
};
	
Gfx gRazorSwordHandleDL[] = {
	// Part 1
    gsSPTexture(0x0708, 0x0C80, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 2, 0),
    gsSP2Triangles(0, 5, 2, 0, 0, 2, 1, 0),
	
	// Part 2
    gsSPTexture(0x0384, 0x1068, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[7], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
	
	// Part 3
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[17], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 0, 0, 3, 9, 8, 0),
    gsSP2Triangles(10, 11, 6, 0, 7, 11, 10, 0),
	
	// Part 4
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[29], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 4, 6, 0),
    gsSP2Triangles(5, 4, 10, 0, 2, 9, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 17, 16, 0, 18, 20, 16, 0),
    gsSP2Triangles(21, 17, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 18, 22, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSPVertex(&razor_sword_handle_vtx[60], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 6, 11, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&razor_sword_handle_vtx[72], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 2, 4, 0, 0),
	
	gsSPEndDisplayList(),
};	

Gfx gRazorSwordBladeDL[] = {
	// Part 1
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 4, 0),
    gsSP1Triangle(3, 4, 6, 0),
	
	// Part 2
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[7], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	
	// Part 3
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[11], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	
	// Part 4
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[15], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 3, 4, 0),
    gsSP1Triangle(4, 6, 5, 0),
	
	// Part 5
    gsSPTexture(0x0320, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(9, 10, 0, 0, 5, 11, 8, 0),
    gsSP2Triangles(5, 8, 3, 0, 8, 11, 5, 0),
    gsSP1Triangle(8, 5, 6, 0),
	
	// Part 6
    gsSPTexture(0x05DC, 0x0834, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[34], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	// Part 7
    gsSPTexture(0x0A8C, 0x0640, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[37], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    
	gsSPEndDisplayList(),
};



// Gilded Sword

u64 object_link_child_Tex_01C380[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C380.rgba16.inc.c"
};

u64 object_link_child_Tex_01C400[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C400.rgba16.inc.c"
};

u64 object_link_child_Tex_01C900[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C900.rgba16.inc.c"
};

u64 object_link_child_Tex_01D340[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01D340.i8.inc.c"
};

Vtx gilded_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_handle.vtx.inc"
};

Vtx gilded_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_blade.vtx.inc"
};

Gfx gLinkChildLeftHandHoldingSilverSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPDisplayList(gSilverSwordBladeDL),
    gsSPBranchList(gGildedSwordBladeDL),
};

Gfx gLinkChildLeftHandHoldingGoldenSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPDisplayList(gGoldenSwordBladeDL),
    gsSPBranchList(gGildedSwordBladeDL),
};

Gfx gGildedSwordHandleDL[] = {
	// Part 1
	gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
	
	// Part 2
	gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx[5], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	
	// Part 3
	gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 40, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx[10], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 2, 4, 5, 0),
    gsSP2Triangles(2, 5, 0, 0, 3, 0, 6, 0),
    gsSP2Triangles(6, 5, 3, 0, 0, 5, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 0, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 10, 14, 0),
    gsSP2Triangles(13, 11, 10, 0, 10, 8, 14, 0),
    gsSP2Triangles(15, 12, 14, 0, 15, 14, 8, 0),
    gsSP2Triangles(15, 8, 7, 0, 15, 7, 5, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 18, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 19, 22, 0, 22, 23, 24, 0),
    gsSP2Triangles(20, 22, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(25, 23, 22, 0, 25, 22, 19, 0),
    gsSP2Triangles(26, 25, 17, 0, 25, 19, 17, 0),
    gsSP2Triangles(17, 16, 26, 0, 27, 16, 28, 0),
    gsSP2Triangles(28, 26, 27, 0, 26, 16, 29, 0),
    gsSP2Triangles(16, 30, 29, 0, 16, 27, 30, 0),
    gsSP2Triangles(31, 27, 26, 0, 29, 31, 26, 0),
	
	// Part 4
	gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx[42], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 3, 6, 0),
    gsSP2Triangles(1, 3, 5, 0, 7, 1, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 11, 8, 0, 13, 11, 14, 0),
    gsSP2Triangles(9, 11, 13, 0, 15, 9, 13, 0),
	
	// Part 5
	gsSPTexture(0x07D0, 0x044C, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 64, 64, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx[58], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 1, 2, 0),
    gsSP2Triangles(2, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(3, 4, 0, 0, 8, 3, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 1, 4, 5, 0),
    gsSP2Triangles(4, 7, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(7, 4, 3, 0, 0, 2, 9, 0),
    gsSP2Triangles(9, 2, 6, 0, 6, 7, 3, 0),
    gsSP1Triangle(6, 3, 8, 0),
	
	// Part 6
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_handle_vtx[68], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(17, 16, 20, 0, 19, 18, 21, 0),
    gsSP2Triangles(20, 11, 10, 0, 21, 14, 13, 0),
    gsSP2Triangles(3, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 1, 26, 0, 26, 1, 0, 0),
    gsSP2Triangles(27, 7, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 31, 22, 25, 0),
    gsSP2Triangles(28, 9, 30, 0, 24, 22, 31, 0),
	
	gsSPEndDisplayList(),
};

Gfx gSilverSwordBladeDL[] = {
    // Part 1
	gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 192, 192, 192, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 5, 0),
	
	// Part 2
	gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 192, 192, 192, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[13], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    
	gsSPEndDisplayList(),
};

Gfx gGoldenSwordBladeDL[] = {
	// Part 1
	gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 5, 0),
	
	// Part 2
	gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[13], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
	
	gsSPEndDisplayList(),
};

Gfx gGildedSwordBladeDL[] = {
    // Part 3
	gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[26], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 12, 13, 0),
	
	// Part 4
	gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |  G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[40], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    
    gsSPEndDisplayList(),
};



// Sheaths

Vtx heros_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_sheath.vtx.inc"
};

Vtx razor_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_sheath.vtx.inc"
};

Vtx gilded_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_sheath.vtx.inc"
};

Mtx gSheathedHerosSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -37814493  , -2097151   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Mtx gSheathedRazorSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -31391984  , -1310719   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Mtx gSheathedGildedSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -37814493  , -2097151   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gSheathedHerosSwordDL[] = {
    gsSPDisplayList(gHerosSwordSheathDL),
    gsSPMatrix(&gSheathedHerosSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gHerosSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gSheathedKokiriSwordDL[] = {
    gsSPDisplayList(gKokiriSwordSheathDL),
    gsSPDisplayList(gKokiriSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gSheathedRazorSwordDL[] = {
    gsSPDisplayList(gRazorSwordSheathDL),
    gsSPMatrix(&gSheathedRazorSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gRazorSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gSheathedGildedSwordDL[] = {
    gsSPDisplayList(gGildedSwordSheathDL),
    gsSPMatrix(&gSheathedGildedSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordSheathDL[] = {
	gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildSwordAndSheathNearVtx[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
	gsSPEndDisplayList(),
};

Gfx gHerosSwordSheathDL[] = {
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_sheath_vtx, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 3, 5, 4, 0),
    gsSP2Triangles(3, 6, 5, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 5, 0, 0, 0, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHerosSwordHandlePommelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_sword_sheath_vtx[8], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 5, 4, 0, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&heros_sword_sheath_vtx[14], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordSheathDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_sheath_vtx, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 4, 0, 10, 4, 3, 0),
    gsSP2Triangles(12, 1, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 7, 17, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&razor_sword_sheath_vtx[18], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 2, 4, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&razor_sword_sheath_vtx[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gGildedSwordSheathDL[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_sheath_vtx[57], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    
    gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_sheath_vtx[52], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_sheath_vtx, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(8, 3, 6, 0, 2, 9, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01C400, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gilded_sword_sheath_vtx[10], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(4, 18, 19, 0, 6, 18, 4, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(1, 3, 24, 0, 25, 1, 24, 0),
    gsSP2Triangles(26, 18, 27, 0, 19, 18, 26, 0),
    gsSP2Triangles(26, 5, 7, 0, 27, 5, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01C380, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gilded_sword_sheath_vtx[38], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 4, 0),
    gsSP2Triangles(9, 4, 0, 0, 11, 12, 13, 0),
    
    gsSPEndDisplayList(),
};



// Shields With Sheaths

Gfx gLinkChildDekuShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildHylianShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldKokiriSwordSheathDL[] = {
    gsSPDisplayList(gKokiriSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldHerosSwordSheathDL[] = {
    gsSPDisplayList(gHerosSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldRazorSwordSheathDL[] = {
    gsSPDisplayList(gRazorSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldGildedSwordSheathDL[] = {
    gsSPDisplayList(gGildedSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};


Gfx gLinkChildHerosShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};



// Hero's Shield

u64 gLinkChildHerosShieldFrontTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_tlut.rgba16.inc.c"
};

u64 gLinkChildHerosShieldBackTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back_tlut.rgba16.inc.c"
};

u64 gLinkChildHerosShieldFrontUpperTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_upper.ci8.inc.c"
};

u64 gLinkChildHerosShieldFrontLowerTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_lower.ci8.inc.c"
};

u64 gLinkChildHerosShieldBackTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back.ci8.inc.c"
};

u64 gLinkChildShieldHandleTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle_tlut.rgba16.inc.c"
};

u64 gLinkChildShieldHandleTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle.ci8.inc.c"
};

Vtx heros_shield_vtx[] = {
#include "assets/objects/object_link_child/shields/heros_shield.vtx.inc"
};

Mtx gLinkChildHerosShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , 1          , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkChildHerosShieldDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkChildShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_shield_vtx, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkChildHerosShieldBackTLUT),
    gsDPLoadTextureBlock(gLinkChildHerosShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_shield_vtx[12], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 6, 5, 0),
    gsSP2Triangles(2, 8, 6, 0, 2, 3, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkChildHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkChildHerosShieldFrontLowerTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_shield_vtx[21], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 6, 5, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkChildHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkChildHerosShieldFrontUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_shield_vtx[29], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 1, 5, 0),
    gsSP2Triangles(2, 5, 7, 0, 9, 2, 7, 0),
    gsSP2Triangles(10, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 2, 9, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHoldingHerosShieldDL[] = {
	gsSPDisplayList(gLinkChildRightHandClosedNearDL),
    gsSPBranchList(gLinkChildHerosShieldDL),
};

Gfx gLinkChildHerosShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkChildHerosShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkChildHerosShieldDL),
};



// Mirror Shield

u64 object_link_child_Tex_01C800[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01C800.rgba16.inc.c"
};

u64 object_link_child_Tex_01CB00[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01CB00.i8.inc.c"
};

u64 object_link_child_Tex_01D300[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01D300.i8.inc.c"
};

u64 object_link_child_Tex_01D440[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01D440.i8.inc.c"
};

Vtx mirror_shield_vtx[] = {
#include "assets/objects/object_link_child/shields/mirror_shield.vtx.inc"
};

Mtx gLinkChildMirrorShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , -3276799   , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkChildMirrorShieldDL[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 120, 120, 120, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 2, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 2, 6, 0),
    gsSP2Triangles(2, 7, 6, 0, 3, 7, 2, 0),
    gsSP2Triangles(2, 8, 4, 0, 2, 9, 8, 0),
    gsSP2Triangles(2, 10, 9, 0, 5, 10, 2, 0),
	gsSPTexture(0x0898, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D440, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx[11], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 10, 8, 9, 0),
    gsSP2Triangles(11, 8, 10, 0, 11, 12, 8, 0),
	gsSPTexture(0x0898, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D440, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx[24], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 6, 7, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 9, 8, 0),
    gsSP2Triangles(11, 9, 10, 0, 11, 12, 9, 0),
	gsSPTexture(0x0E74, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx[37], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 8, 1, 0, 5, 9, 6, 0),
    gsSP2Triangles(5, 10, 9, 0, 10, 11, 9, 0),
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx[49], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 0, 3, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 4, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 11, 13, 0, 11, 9, 13, 0),
    gsSP2Triangles(14, 11, 12, 0, 14, 10, 11, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(13, 9, 15, 0, 9, 8, 15, 0),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkChildShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mirror_shield_vtx[65], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 1, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 4, 6, 0),
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 70, 70, 70, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01CB00, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&mirror_shield_vtx[73], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 4, 5, 0, 0),
    gsSP2Triangles(0, 6, 3, 0, 7, 6, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 9, 8, 0, 0),
    gsSP2Triangles(9, 0, 10, 0, 0, 5, 10, 0),
	
    gsSPEndDisplayList(),
};

Gfx gLinkChildHoldingMirrorShieldDL[] = {
	gsSPDisplayList(gLinkChildRightHandClosedNearDL),
    gsSPBranchList(gLinkChildMirrorShieldDL),
};

Gfx gLinkChildMirrorShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkChildMirrorShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkChildMirrorShieldDL),
};



// Megaton Hammer

Vtx hammer_vtx[] = {
#include "assets/objects/object_link_child/other/hammer.vtx.inc"
};

Gfx gLinkChildLeftHandHoldingHammerNearDL[] = {
	gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 79, 0, 0, 255),
    gsSPVertex(&hammer_vtx, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 1, 0, 0, 2, 6, 0, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 5, 0, 0),
    gsSP2Triangles(8, 4, 3, 0, 4, 6, 2, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 1, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 155, 192, 201, 255),
    gsSPVertex(&hammer_vtx[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&hammer_vtx[12], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&hammer_vtx[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&hammer_vtx[74], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&hammer_vtx[103], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&hammer_vtx[133], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&hammer_vtx[164], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&hammer_vtx[194], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
	
	gsSPDisplayList(gLinkChildLeftHandNearDL),
	
	gsSPEndDisplayList(),
};



// Hookshot

u64 gLinkChildHookshotHandleTex[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_handle.ci8.inc.c"
};

u64 gLinkChildHookshotHandTex[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_hand.ci8.inc.c"
};

Vtx hookshot_chain_vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainVtx.inc.c"
};

Vtx hookshot_hand_vtx[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_hand.vtx.inc"
};

Vtx hookshot_far_vtx[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_far.vtx.inc"
};

Gfx gLinkChildRightHandHoldingHookshot[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildHookshotHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&hookshot_far_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 0, 0),
    gsSP2Triangles(6, 3, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 7, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(10, 17, 19, 0, 10, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 28, 30, 0),
    gsSPVertex(&hookshot_far_vtx[31], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 2, 0, 8, 5, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 14, 17, 19, 0),
    gsSP2Triangles(19, 20, 14, 0, 20, 15, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 30, 0),
    
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookshot_far_vtx[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 0, 2, 0),
    gsSP2Triangles(3, 0, 4, 0, 2, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(4, 16, 17, 0, 17, 5, 4, 0),
    gsSP2Triangles(6, 17, 16, 0, 6, 7, 17, 0),
    
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookshot_far_vtx[80], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 0, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 8, 10, 0),
    gsSP2Triangles(0, 13, 11, 0, 4, 16, 17, 0),
    gsSP2Triangles(10, 13, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(13, 10, 11, 0, 7, 21, 17, 0),
    gsSP2Triangles(17, 20, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(17, 16, 7, 0, 25, 22, 16, 0),
    gsSP2Triangles(25, 26, 22, 0, 24, 16, 22, 0),
    gsSP2Triangles(27, 21, 28, 0, 24, 7, 16, 0),
    gsSP2Triangles(6, 26, 25, 0, 24, 23, 6, 0),
    gsSP2Triangles(6, 7, 24, 0, 23, 29, 6, 0),
    gsSP2Triangles(25, 4, 6, 0, 6, 29, 26, 0),
    gsSP1Triangle(30, 27, 31, 0),
    gsSPVertex(&hookshot_far_vtx[112], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 0, 2, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 0, 13, 1, 0),
    gsSP2Triangles(0, 14, 13, 0, 15, 4, 16, 0),
    gsSP2Triangles(17, 18, 3, 0, 4, 15, 0, 0),
    gsSP2Triangles(18, 19, 3, 0, 16, 4, 20, 0),
    gsSP2Triangles(3, 21, 22, 0, 15, 11, 23, 0),
    gsSP2Triangles(16, 11, 15, 0, 22, 20, 3, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 24, 16, 0),
    gsSP2Triangles(25, 26, 27, 0, 22, 28, 0, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&hookshot_far_vtx[144], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 0, 4, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 2, 6, 0, 8, 4, 7, 0),
    gsSP2Triangles(8, 5, 4, 0, 7, 9, 10, 0),
    gsSP1Triangle(7, 6, 9, 0),
    
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandHoldingHookshotNearDL[] = {
	gsSPDisplayList(gLinkChildRightHandHoldingHookshot),
	gsSPBranchList(gLinkChildRightHandClosedNearDL),
};

Gfx gLinkChildRightHandHoldingHookshotFarDL[] = {
    gsSPDisplayList(gLinkChildRightHandHoldingHookshot),
    
	gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildHookshotHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookshot_hand_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 20, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 25, 30, 0),
    gsSPVertex(&hookshot_hand_vtx[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 10, 9, 15, 0),
    gsSP2Triangles(10, 15, 6, 0, 16, 8, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 16, 0),
    gsSP2Triangles(18, 20, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(3, 0, 25, 0, 26, 21, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 24, 29, 30, 0),
    gsSP1Triangle(25, 0, 31, 0),
    gsSPVertex(&hookshot_hand_vtx[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(23, 21, 20, 0, 27, 28, 29, 0),
    gsSP2Triangles(23, 25, 30, 0, 30, 21, 23, 0),
    gsSPVertex(&hookshot_hand_vtx[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 0, 6, 0, 1, 0, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 15, 5, 18, 0),
    gsSP2Triangles(2, 17, 14, 0, 6, 19, 15, 0),
    gsSP2Triangles(15, 18, 1, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 8, 0, 14, 17, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 11, 10, 29, 0),
    gsSP1Triangle(12, 30, 10, 0),
    gsSPVertex(&hookshot_hand_vtx[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(0, 9, 13, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 14, 23, 0, 3, 23, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 27, 14, 22, 0),
    gsSPVertex(&hookshot_hand_vtx[156], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 0, 0),
    gsSP2Triangles(2, 1, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(2, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 20, 0),
    gsSP2Triangles(4, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(12, 7, 2, 0, 24, 25, 8, 0),
    gsSP2Triangles(23, 26, 27, 0, 0, 10, 28, 0),
    gsSP1Triangle(29, 9, 30, 0),
    gsSPVertex(&hookshot_hand_vtx[187], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(18, 15, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 20, 27, 22, 0),
    gsSP2Triangles(18, 28, 29, 0, 18, 30, 28, 0),
    gsSPVertex(&hookshot_hand_vtx[218], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 3, 5, 0),
    gsSP2Triangles(8, 9, 4, 0, 6, 2, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 13, 7, 0),
    gsSP2Triangles(7, 5, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 8, 0, 17, 3, 7, 0),
    gsSP2Triangles(18, 17, 7, 0, 17, 15, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 13, 20, 19, 0),
    gsSP2Triangles(20, 0, 21, 0, 14, 20, 13, 0),
    gsSP2Triangles(20, 1, 0, 0, 14, 1, 20, 0),
    gsSP2Triangles(6, 11, 22, 0, 6, 10, 11, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(23, 27, 24, 0, 23, 28, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 30, 27, 0),
	
    gsSPEndDisplayList(),
};



// Hero's Bow

u64 gLinkChildBowTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow.ci8.inc.c"
};

u64 gLinkChildBowDesignTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow_design.ci8.inc.c"
};

Vtx heros_bow_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow.vtx.inc"
};

Vtx heros_bow_string_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow_string.vtx.inc"
};

Vtx heros_bow_first_person_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow_first_person.vtx.inc"
};

Gfx gLinkChildRightHandHoldingBowNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_bow_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 7, 2, 0),
    gsSP2Triangles(3, 0, 4, 0, 0, 3, 6, 0),
    gsSP2Triangles(2, 1, 5, 0, 2, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 9, 11, 0, 10, 9, 12, 0),
    gsSP2Triangles(8, 13, 11, 0, 10, 13, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 22, 0, 28, 29, 20, 0),
    gsSP2Triangles(30, 20, 29, 0, 22, 21, 26, 0),
    gsSP2Triangles(29, 28, 26, 0, 26, 30, 29, 0),
    gsSP1Triangle(22, 27, 20, 0),
    gsSPVertex(&heros_bow_vtx[31], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 3, 9, 0),
    gsSP2Triangles(5, 4, 7, 0, 5, 9, 3, 0),
    gsSP2Triangles(7, 6, 5, 0, 10, 11, 0, 0),
    gsSP2Triangles(1, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 15, 14, 0, 18, 19, 16, 0),
    gsSP2Triangles(17, 19, 18, 0, 11, 10, 13, 0),
    gsSP2Triangles(13, 2, 1, 0, 14, 19, 17, 0),
    gsSP2Triangles(16, 19, 14, 0, 20, 21, 22, 0),
    gsSP1Triangle(20, 23, 21, 0),
	
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_bow_vtx[55], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(11, 14, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 15, 14, 0, 14, 16, 12, 0),
    gsSP2Triangles(16, 17, 12, 0, 5, 4, 7, 0),
    gsSP2Triangles(7, 18, 1, 0, 19, 4, 3, 0),
    gsSP2Triangles(3, 20, 19, 0, 18, 7, 4, 0),
    gsSP2Triangles(4, 19, 18, 0, 15, 21, 22, 0),
    gsSP2Triangles(22, 21, 16, 0, 23, 24, 21, 0),
    gsSP2Triangles(21, 15, 23, 0, 24, 17, 16, 0),
    gsSP2Triangles(16, 21, 24, 0, 13, 23, 15, 0),
    gsSP2Triangles(25, 16, 14, 0, 14, 15, 26, 0),
    gsSP2Triangles(26, 27, 14, 0, 14, 27, 25, 0),
    gsSP2Triangles(26, 15, 22, 0, 22, 16, 25, 0),
    gsSP2Triangles(12, 13, 28, 0, 10, 29, 13, 0),
    gsSP2Triangles(12, 28, 10, 0, 5, 7, 6, 0),
    gsSP2Triangles(9, 3, 5, 0, 30, 0, 2, 0),
    gsSP2Triangles(9, 31, 8, 0, 8, 31, 6, 0),
    gsSPVertex(&heros_bow_vtx[87], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 7, 0, 0),
    gsSP2Triangles(8, 6, 0, 0, 2, 8, 0, 0),
    gsSP2Triangles(3, 6, 8, 0, 3, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 13, 15, 0),
	
    gsSPBranchList(gLinkChildRightHandClosedNearDL),
};

Gfx gLinkChildRightHandHoldingBowFirstPersonDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(heros_bow_first_person_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(3, 1, 9, 0, 9, 1, 0, 0),
    gsSP2Triangles(3, 10, 2, 0, 2, 10, 0, 0),
    gsSP2Triangles(6, 11, 4, 0, 8, 7, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 13, 19, 0, 15, 14, 17, 0),
    gsSP2Triangles(15, 19, 13, 0, 17, 16, 15, 0),
    gsSP2Triangles(12, 6, 5, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(20, 27, 23, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 25, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(4, 11, 7, 0, 22, 27, 20, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 29, 31, 0),
    gsSPVertex(&heros_bow_first_person_vtx[32], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 10, 7, 12, 0),
    gsSP2Triangles(9, 6, 5, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 12, 9, 0, 7, 8, 5, 0),
	
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_bow_first_person_vtx[45], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 3, 15, 0),
    gsSP2Triangles(16, 15, 12, 0, 15, 3, 12, 0),
    gsSP2Triangles(3, 7, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 17, 4, 0, 12, 14, 16, 0),
    gsSP2Triangles(3, 18, 6, 0, 5, 18, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 8, 20, 19, 0),
    gsSP2Triangles(19, 9, 8, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 24, 9, 0, 22, 25, 26, 0),
    gsSP2Triangles(26, 27, 22, 0, 28, 29, 7, 0),
    gsSP2Triangles(4, 29, 28, 0, 25, 9, 24, 0),
    gsSP2Triangles(28, 7, 6, 0, 29, 30, 31, 0),
    gsSP2Triangles(31, 7, 29, 0, 4, 17, 30, 0),
    gsSP2Triangles(30, 29, 4, 0, 7, 31, 12, 0),
    gsSP2Triangles(16, 11, 13, 0, 24, 26, 25, 0),
    gsSPVertex(&heros_bow_first_person_vtx[77], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(11, 15, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(11, 18, 15, 0, 18, 17, 15, 0),
    gsSP2Triangles(6, 8, 19, 0, 20, 8, 11, 0),
    gsSP2Triangles(18, 9, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 20, 11, 0, 18, 21, 16, 0),
	
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkChildHookshotHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_bow_first_person_vtx[99], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 20, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 25, 30, 0),
    gsSPVertex(&heros_bow_first_person_vtx[130], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 10, 9, 15, 0),
    gsSP2Triangles(10, 15, 6, 0, 16, 8, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 16, 0),
    gsSP2Triangles(18, 20, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(3, 0, 25, 0, 26, 21, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 24, 29, 30, 0),
    gsSP1Triangle(25, 0, 31, 0),
    gsSPVertex(&heros_bow_first_person_vtx[162], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(23, 21, 20, 0, 27, 28, 29, 0),
    gsSP2Triangles(23, 25, 30, 0, 30, 21, 23, 0),
    gsSPVertex(&heros_bow_first_person_vtx[193], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 0, 6, 0, 1, 0, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 15, 5, 18, 0),
    gsSP2Triangles(2, 17, 14, 0, 6, 19, 15, 0),
    gsSP2Triangles(15, 18, 1, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 8, 0, 14, 17, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 11, 10, 29, 0),
    gsSP1Triangle(12, 30, 10, 0),
    gsSPVertex(&heros_bow_first_person_vtx[224], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(0, 9, 13, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 14, 23, 0, 3, 23, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 27, 14, 22, 0),
    gsSPVertex(&heros_bow_first_person_vtx[255], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 0, 0),
    gsSP2Triangles(2, 1, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(2, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 20, 0),
    gsSP2Triangles(4, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(12, 7, 2, 0, 24, 25, 8, 0),
    gsSP2Triangles(23, 26, 27, 0, 0, 10, 28, 0),
    gsSP1Triangle(29, 9, 30, 0),
    gsSPVertex(&heros_bow_first_person_vtx[286], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(18, 15, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 20, 27, 22, 0),
    gsSP2Triangles(18, 28, 29, 0, 18, 30, 28, 0),
    gsSPVertex(&heros_bow_first_person_vtx[317], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 3, 5, 0),
    gsSP2Triangles(8, 9, 4, 0, 6, 2, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 13, 7, 0),
    gsSP2Triangles(7, 5, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 8, 0, 17, 3, 7, 0),
    gsSP2Triangles(18, 17, 7, 0, 17, 15, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 13, 20, 19, 0),
    gsSP2Triangles(20, 0, 21, 0, 14, 20, 13, 0),
    gsSP2Triangles(20, 1, 0, 0, 14, 1, 20, 0),
    gsSP2Triangles(6, 11, 22, 0, 6, 10, 11, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(23, 27, 24, 0, 23, 28, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 30, 27, 0),
	
    gsSPEndDisplayList(),
};

Gfx gLinkChildBowStringDL[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, SHADE, 0, 0, 0, 1),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_bow_string_vtx, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSPEndDisplayList(),
};



// Power Bracelet

u64 gLinkChildPowerSymbolTex[] = {
#include "assets/objects/object_link_child/other/power_symbol.ia16.inc.c"
};

Vtx bracelet_right_vtx[] = {
#include "assets/objects/object_link_child/other/bracelet_right.vtx.inc"
};

Gfx gLinkChildBracelet1DL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildGoronBraceletVtx1[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gLinkChildGoronBraceletVtx1[3], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 10, 6, 7, 0),
    gsSP2Triangles(10, 7, 3, 0, 11, 12, 8, 0),
    gsSP2Triangles(5, 12, 11, 0, 11, 10, 3, 0),
    gsSP2Triangles(11, 3, 5, 0, 13, 11, 1, 0),
    gsSP1Triangle(1, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

Gfx gLinkChildBracelet2DL[] = {
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildGoronBraceletVtx2[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};
    
Gfx gLinkChildPowerBraceletDL[] = {
    gsSPDisplayList(gLinkChildBracelet1DL),
    gsDPLoadTextureBlock(gLinkChildPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPBranchList(gLinkChildBracelet2DL),
};

Gfx gLinkChildPowerBraceletsDL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&bracelet_right_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&bracelet_right_vtx[3], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 10, 6, 7, 0),
    gsSP2Triangles(10, 7, 3, 0, 11, 12, 8, 0),
    gsSP2Triangles(5, 12, 11, 0, 11, 10, 3, 0),
    gsSP2Triangles(11, 3, 5, 0, 13, 11, 1, 0),
    gsSP1Triangle(1, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&bracelet_right_vtx[17], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPBranchList(gLinkChildPowerBraceletDL),
};




// Earring

u64 gLinkChildEarringTex[] = {
#include "assets/objects/object_link_boy/gLinkAdultEarringTex.ia16.inc.c"
};

Vtx earring_vtx[] = {
#include "assets/objects/object_link_child/other/earring.vtx.inc"
};

Gfx gLinkChildEarringsIronDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&earring_vtx, 8, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildEarringTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(0,  1,  2,  0, 3,  4,  5,  0),
    gsSP2Triangles(4,  3,  6,  0, 0,  7,  1,  0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildEarringsHoverDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0x80, 187, 165, 61, 255),
    gsSPVertex(&earring_vtx, 8, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildEarringTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(0,  1,  2,  0, 3,  4,  5,  0),
    gsSP2Triangles(4,  3,  6,  0, 0,  7,  1,  0),
    gsSPEndDisplayList(),
};
