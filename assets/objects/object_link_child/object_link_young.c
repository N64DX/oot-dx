#include "object_link_young.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "player.h"


u64 gLinkYoungEyesOpenTex[] = {
#include "assets/objects/object_link_child/majora/eyes_open.ci8.inc.c"
};

u64 gLinkYoungEyesHalfTex[] = {
#include "assets/objects/object_link_child/majora/eyes_half.ci8.inc.c"
};

u64 gLinkYoungEyesClosedfTex[] = {
#include "assets/objects/object_link_child/majora/eyes_closed.ci8.inc.c"
};

u64 gLinkYoungEyesLeftTex[] = {
#include "assets/objects/object_link_child/majora/eyes_roll_left.ci8.inc.c"
};

u64 gLinkYoungEyesRightTex[] = {
#include "assets/objects/object_link_child/majora/eyes_roll_right.ci8.inc.c"
};

u64 gLinkYoungEyesWideTex[] = {
#include "assets/objects/object_link_child/majora/eyes_wide-2.ci8.inc.c"
};

u64 gLinkYoungEyesDownTex[] = {
#include "assets/objects/object_link_child/majora/eyes_roll_down.ci8.inc.c"
};

u64 gLinkYoungEyesWincingTex[] = {
#include "assets/objects/object_link_child/majora/tex_003800.ci8.inc.c"
};

u64 gLinkYoungMouthClosedTex[] = {
#include "assets/objects/object_link_child/majora/mouth_closed.ci8.inc.c"
};

u64 gLinkYoungMouthHalfTex[] = {
#include "assets/objects/object_link_child/majora/mouth_teeth.ci8.inc.c"
};

u64 gLinkYoungMouthOpenTex[] = {
#include "assets/objects/object_link_child/majora/mouth_angry.ci8.inc.c"
};

u64 gLinkYoungMouthSmileTex[] = {
#include "assets/objects/object_link_child/majora/mouth_happy.ci8.inc.c"
};

u64 gLinkHumanSkinTLUT[] = {
#include "assets/objects/object_link_child/majora/skin_tlut.rgba16.inc.c"
};

u64 gLinkHumanMouthTLUT[] = {
#include "assets/objects/object_link_child/majora/mouth_tlut.rgba16.inc.c"
};

u64 object_link_child_Tex_005400[] = {
#include "assets/objects/object_link_child/majora/tex_005400.rgba16.inc.c"
};

u64 object_link_child_Tex_005500[] = {
#include "assets/objects/object_link_child/majora/tex_005500.ci8.inc.c"
};

u64 object_link_child_Tex_005540[] = {
#include "assets/objects/object_link_child/majora/tex_005540.ci8.inc.c"
};

u64 gLinkHumanEarTex[] = {
#include "assets/objects/object_link_child/majora/ear.ci8.inc.c"
};

u64 gLinkHumanBeltClaspTex[] = {
#include "assets/objects/object_link_child/majora/belt_clasp.rgba16.inc.c"
};

u64 gLinkHumanBeltTex[] = {
#include "assets/objects/object_link_child/majora/belt.rgba16.inc.c"
};

u64 object_link_child_Tex_005C40[] = {
#include "assets/objects/object_link_child/majora/tex_005C40.i8.inc.c"
};

u64 object_link_child_Tex_005D40[] = {
#include "assets/objects/object_link_child/majora/tex_005D40.i8.inc.c"
};

u64 object_link_child_Tex_005D80[] = {
#include "assets/objects/object_link_child/majora/tex_005D80.i8.inc.c"
};

u64 object_link_child_Tex_005E00[] = {
#include "assets/objects/object_link_child/majora/tex_005E00.rgba16.inc.c"
};

u64 object_link_child_Tex_006200[] = {
#include "assets/objects/object_link_child/majora/tex_006200.rgba16.inc.c"
};

u64 object_link_child_Tex_006A00[] = {
#include "assets/objects/object_link_child/majora/tex_006A00.ci8.inc.c"
};

u64 object_link_child_Tex_006B00[] = {
#include "assets/objects/object_link_child/majora/tex_006B00.rgba16.inc.c"
};

u64 object_link_child_TLUT_00DA80[] = {
#include "assets/objects/object_link_child/majora/tlut_00DA80.rgba16.inc.c"
};

u64 object_link_child_Tex_007700[] = {
#include "assets/objects/object_link_child/majora/tex_007700.rgba16.inc.c"
};

u64 object_link_child_Tex_00DB08[] = {
#include "assets/objects/object_link_child/majora/tex_00DB08.ci8.inc.c"
};

Vtx object_link_childVtx_007900[] = {
#include "assets/objects/object_link_child/majora/object_link_childVtx_007900.vtx.inc"
};

Vtx object_link_childVtx_00DF68[] = {
#include "assets/objects/object_link_child/majora/object_link_childVtx_00DF68.vtx.inc"
};

Vtx object_link_childVtx_00E4D8[] = {
#include "assets/objects/object_link_child/majora/object_link_childVtx_00E4D8.vtx.inc"
};

Vtx object_link_childVtx_00E858[] = {
#include "assets/objects/object_link_child/majora/object_link_childVtx_00E858.vtx.inc"
};

Vtx object_link_childVtx_01DD38[] = {
#include "assets/objects/object_link_child/majora/object_link_childVtx_01DD38.vtx.inc"
};

Vtx deku_shield_vtx[] = {
#include "assets/objects/object_link_child/other/deku_shield.vtx.inc"
};

Vtx boomerang_vtx[] = {
#include "assets/objects/object_link_child/other/boomerang.vtx.inc"
};

Vtx master_sword_vtx[] = {
#include "assets/objects/object_link_child/other/master_sword.vtx.inc"
};

Vtx fairy_ocarina_vtx[] = {
#include "assets/objects/object_link_child/other/fairy_ocarina.vtx.inc"
};

Vtx ocarina_of_time_vtx[] = {
#include "assets/objects/object_link_child/other/ocarina_of_time.vtx.inc"
};

Vtx slingshot_vtx[] = {
#include "assets/objects/object_link_child/other/slingshot.vtx.inc"
};

Vtx slingshot_stretched_vtx[] = {
#include "assets/objects/object_link_child/other/slingshot_stretched.vtx.inc"
};

Vtx bottle_vtx[] = {
#include "assets/objects/object_link_child/other/bottle.vtx.inc"
};

Vtx kokiri_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/other/kokiri_sword_blade.vtx.inc"
};

Vtx kokiri_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/other/kokiri_sword_handle.vtx.inc"
};

Vtx kokiri_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/other/kokiri_sword_sheath.vtx.inc"
};

Vtx kokiri_sword_handle_holding_vtx[] = {
#include "assets/objects/object_link_child/other/kokiri_sword_handle_holding.vtx.inc"
};

u64 gLinkYoungFairyOcarinaTex[] = {
#include "assets/objects/object_link_child/gLinkChildFairyOcarinaTex.rgba16.inc.c"
};

u64 gLinkYoungGoronBraceletTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletTex.rgba16.inc.c"
};

u64 gLinkYoungGoronSymbolTex[] = {
#include "assets/objects/object_link_child/gLinkChildGoronSymbolTex.ia16.inc.c"
};

u64 gLinkYoungDekuShieldBackTex[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldBackTex.rgba16.inc.c"
};

u64 gLinkYoungDekuShieldFrontTex[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldFrontTex.rgba16.inc.c"
};

u64 gLinkYoungHylianShieldBackTex[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldBackTex.rgba16.inc.c"
};

u64 gLinkYoungSlingshotTex[] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotTex.rgba16.inc.c"
};

u64 gLinkYoungSlingshotSeedTex[] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotSeedTex.rgba16.inc.c"
};

u64 gLinkYoungHandTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildHandTex.tlut.rgba16.inc.c"
};

u64 gLinkYoungSwordsTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildSwordsTLUT.tlut.rgba16.inc.c"
};

u64 gLinkYoungSwordTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildSwordJewelTex.tlut.rgba16.inc.c"
};

u64 gLinkYoungKokiriSwordSheathTex[] = {
#include "assets/objects/object_link_child/gLinkChildKokiriSwordSheathTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

u64 gLinkYoungSwordJewelTex[] = {
#include "assets/objects/object_link_child/gLinkChildSwordJewelTex.ci8.inc.c"
};

u64 gLinkYoungMasterSwordPommelTex[] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordPommelTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

u64 gLinkYoungMasterSwordGuardTex[] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordGuardTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

u64 gLinkYoungMasterSwordEmblemTex[] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordEmblemTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

Vtx gLinkYoungHylianShieldAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldAndSheathNearVtx.inc.c"
};

Gfx gLinkYoungLeftHandNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_006A00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[571], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 10, 13, 0),
    gsSP2Triangles(13, 9, 14, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 9, 0, 14, 12, 15, 0),
    gsSP2Triangles(15, 11, 10, 0, 16, 5, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 0, 22, 0, 5, 16, 3, 0),
    gsSP2Triangles(0, 21, 4, 0, 7, 24, 0, 0),
    gsSP2Triangles(0, 24, 1, 0, 0, 25, 22, 0),
    gsSP2Triangles(20, 26, 18, 0, 3, 16, 23, 0),
    gsSP2Triangles(23, 22, 3, 0, 22, 25, 6, 0),
    gsSP2Triangles(11, 27, 28, 0, 22, 6, 3, 0),
    gsSP2Triangles(7, 4, 3, 0, 7, 0, 4, 0),
    gsSP2Triangles(12, 11, 28, 0, 29, 11, 15, 0),
    gsSP2Triangles(25, 8, 6, 0, 29, 27, 11, 0),
    gsSP2Triangles(2, 25, 0, 0, 8, 1, 30, 0),
    gsSP2Triangles(17, 23, 16, 0, 25, 2, 8, 0),
    gsSP2Triangles(23, 17, 21, 0, 8, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftFistNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00DF68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 20, 12, 13, 0),
    gsSP2Triangles(17, 12, 21, 0, 22, 17, 23, 0),
    gsSP2Triangles(23, 17, 21, 0, 24, 25, 6, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 21, 12, 0, 12, 30, 10, 0),
    gsSP2Triangles(30, 17, 10, 0, 12, 17, 30, 0),
    gsSP2Triangles(8, 24, 6, 0, 31, 24, 8, 0),
    gsSPVertex(&object_link_childVtx_00DF68[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftFistAndKokiriSwordNearDL[] = {
    gsSPDisplayList(gLinkYoungLeftHandNearDL),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&kokiri_sword_handle_holding_vtx, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(11, 9, 0, 0, 8, 12, 13, 0),
    gsSP2Triangles(2, 11, 0, 0, 2, 10, 11, 0),
    gsSP2Triangles(12, 10, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(16, 12, 14, 0, 15, 16, 3, 0),
    gsSP2Triangles(16, 14, 2, 0, 16, 2, 3, 0),
    gsSP2Triangles(2, 14, 10, 0, 10, 17, 8, 0),
    gsSP2Triangles(17, 12, 8, 0, 10, 12, 17, 0),
    gsSP2Triangles(6, 18, 4, 0, 8, 15, 9, 0),
    gsSP2Triangles(13, 15, 8, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungSwordTLUT),
    gsSPVertex(&kokiri_sword_handle_holding_vtx[19], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(16, 21, 17, 0, 11, 25, 26, 0),
    gsSP2Triangles(11, 26, 27, 0, 11, 27, 9, 0),
    gsSP2Triangles(19, 28, 29, 0, 30, 16, 29, 0),
    gsSP2Triangles(29, 16, 18, 0, 29, 18, 19, 0),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&kokiri_sword_blade_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&kokiri_sword_blade_vtx[3], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 3, 5, 0),
    gsSP2Triangles(2, 1, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 7, 6, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightHandNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_006A00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[681], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 9, 6, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 2, 6, 0),
    gsSP2Triangles(14, 10, 12, 0, 15, 10, 16, 0),
    gsSP2Triangles(17, 9, 18, 0, 19, 17, 18, 0),
    gsSP2Triangles(19, 13, 20, 0, 15, 11, 10, 0),
    gsSP2Triangles(13, 6, 20, 0, 19, 20, 5, 0),
    gsSP2Triangles(5, 7, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(20, 6, 9, 0, 0, 24, 9, 0),
    gsSP2Triangles(9, 24, 18, 0, 17, 3, 9, 0),
    gsSP2Triangles(19, 7, 25, 0, 20, 9, 3, 0),
    gsSP2Triangles(5, 20, 3, 0, 23, 26, 21, 0),
    gsSP2Triangles(4, 25, 7, 0, 27, 10, 14, 0),
    gsSP2Triangles(14, 16, 28, 0, 29, 28, 16, 0),
    gsSP2Triangles(27, 30, 29, 0, 28, 29, 30, 0),
    gsSP2Triangles(30, 27, 14, 0, 14, 28, 30, 0),
    gsSP2Triangles(29, 16, 10, 0, 10, 27, 29, 0),
    gsSP2Triangles(2, 13, 18, 0, 18, 13, 19, 0),
    gsSP2Triangles(25, 17, 19, 0, 1, 0, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00E4D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(2, 19, 0, 0, 13, 10, 20, 0),
    gsSP2Triangles(21, 10, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(21, 18, 22, 0, 8, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
    gsSP2Triangles(10, 21, 20, 0, 12, 30, 10, 0),
    gsSP2Triangles(12, 18, 30, 0, 30, 18, 10, 0),
    gsSP2Triangles(8, 25, 6, 0, 6, 25, 31, 0),
    gsSPVertex(&object_link_childVtx_00E4D8[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightFistAndDekuShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_shield_vtx, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&deku_shield_vtx[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(1, 0, 16, 0, 13, 15, 8, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 8, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(16, 0, 23, 0, 25, 26, 27, 0),
    gsSP1Triangle(7, 28, 29, 0),
    gsSPVertex(&deku_shield_vtx[38], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPBranchList(gLinkYoungRightHandClosedNearDL),
};

Gfx gLinkYoungLeftFistAndBoomerangNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&boomerang_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&boomerang_vtx[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&boomerang_vtx[33], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsSPVertex(&boomerang_vtx[36], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 5, 3, 0, 5, 7, 4, 0),
    gsSP2Triangles(6, 3, 1, 0, 4, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 3, 0),
    gsSP2Triangles(10, 11, 8, 0, 12, 13, 8, 0),
    gsSP2Triangles(8, 13, 9, 0, 14, 13, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 12, 8, 11, 0),
    gsSP2Triangles(3, 9, 13, 0, 13, 14, 3, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 6, 0, 0),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&boomerang_vtx[51], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 20, 12, 13, 0),
    gsSP2Triangles(17, 12, 21, 0, 22, 17, 23, 0),
    gsSP2Triangles(23, 17, 21, 0, 24, 25, 6, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 21, 12, 0, 12, 30, 10, 0),
    gsSP2Triangles(30, 17, 10, 0, 12, 17, 30, 0),
    gsSP2Triangles(8, 24, 6, 0, 31, 24, 8, 0),
    gsSPVertex(&boomerang_vtx[83], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    
    gsSPEndDisplayList(),
};

Gfx gLinkYoungHylianShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungHylianShieldAndSheathNearVtx[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&gLinkYoungHylianShieldAndSheathNearVtx[11], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gHylianShieldDesignTex_WIDTH, gHylianShieldDesignTex_HEIGHT, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungHylianShieldAndSheathNearVtx[15], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungHylianShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gLinkYoungHylianShieldAndSheathNearVtx[25], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftHandHoldingMasterSwordDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&master_sword_vtx, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 4, 1, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(2, 7, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 11, 0),
    gsSP2Triangles(12, 16, 13, 0, 11, 9, 8, 0),
    gsSP2Triangles(16, 12, 11, 0, 3, 7, 17, 0),
    gsSP2Triangles(6, 7, 4, 0, 4, 7, 2, 0),
    gsSP2Triangles(3, 5, 0, 0, 17, 7, 18, 0),
    gsSP2Triangles(16, 19, 13, 0, 18, 20, 17, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 8, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 13, 19, 21, 0),
    gsSP2Triangles(22, 6, 3, 0, 6, 23, 18, 0),
    gsSP2Triangles(15, 21, 24, 0, 13, 21, 15, 0),
    gsSP2Triangles(24, 11, 15, 0, 24, 16, 11, 0),
    gsSP2Triangles(7, 6, 18, 0, 6, 22, 25, 0),
    gsSP2Triangles(20, 25, 22, 0, 25, 23, 6, 0),
    gsSP2Triangles(18, 26, 20, 0, 25, 18, 23, 0),
    gsSP2Triangles(10, 14, 8, 0, 20, 26, 25, 0),
    gsSP2Triangles(14, 10, 12, 0, 25, 26, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&master_sword_vtx[27], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&master_sword_vtx[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&master_sword_vtx[61], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungMasterSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungSwordsTLUT),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&master_sword_vtx[81], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungMasterSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&master_sword_vtx[100], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 5, 10, 0, 8, 10, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(1, 23, 24, 0, 25, 26, 24, 0),
    gsSP2Triangles(27, 17, 19, 0, 28, 29, 13, 0),
    gsSP2Triangles(21, 20, 15, 0, 15, 20, 30, 0),
    gsSP2Triangles(15, 30, 16, 0, 13, 12, 18, 0),
    gsSPVertex(&master_sword_vtx[131], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungMasterSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&master_sword_vtx[149], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightHandHoldingFairyOcarinaNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungFairyOcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fairy_ocarina_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 0, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 10, 8, 0),
    gsSP2Triangles(11, 0, 6, 0, 9, 12, 7, 0),
    gsSP2Triangles(13, 12, 9, 0, 0, 14, 5, 0),
    gsSP2Triangles(0, 2, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 13, 15, 0, 18, 12, 13, 0),
    gsSP2Triangles(12, 18, 19, 0, 15, 20, 16, 0),
    gsSP2Triangles(16, 20, 9, 0, 21, 7, 19, 0),
    gsSP2Triangles(15, 13, 20, 0, 12, 19, 7, 0),
    gsSP2Triangles(20, 13, 9, 0, 21, 10, 7, 0),
    gsSP2Triangles(8, 16, 9, 0, 8, 22, 23, 0),
    gsSP2Triangles(23, 24, 8, 0, 24, 16, 8, 0),
    gsSP2Triangles(17, 16, 24, 0, 11, 25, 0, 0),
    gsSP2Triangles(26, 8, 10, 0, 27, 28, 29, 0),
    gsSP2Triangles(30, 22, 8, 0, 26, 11, 31, 0),
    gsSPVertex(&fairy_ocarina_vtx[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00E858, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00E858[30], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightHandHoldingSlingshotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&slingshot_vtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(2, 19, 0, 0, 13, 10, 20, 0),
    gsSP2Triangles(21, 10, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(21, 18, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 27, 29, 0),
    gsSP2Triangles(10, 21, 20, 0, 12, 31, 10, 0),
    gsSP2Triangles(12, 18, 31, 0, 31, 18, 10, 0),
    gsSPVertex(&slingshot_vtx[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkYoungSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&slingshot_vtx[40], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 16, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 17, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&slingshot_vtx[72], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 6, 9, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftHandUpNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_007700, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_01DD38, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 8, 12, 9, 0),
    gsSP2Triangles(13, 7, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 20, 10, 0),
    gsSP2Triangles(21, 14, 2, 0, 9, 22, 13, 0),
    gsSP2Triangles(14, 21, 15, 0, 13, 23, 7, 0),
    gsSP2Triangles(17, 24, 18, 0, 7, 25, 8, 0),
    gsSP2Triangles(7, 23, 25, 0, 26, 9, 12, 0),
    gsSP2Triangles(22, 9, 26, 0, 2, 14, 0, 0),
    gsSP2Triangles(27, 10, 20, 0, 10, 5, 6, 0),
    gsSP2Triangles(28, 11, 10, 0, 8, 29, 12, 0),
    gsSPVertex(&object_link_childVtx_01DD38[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Vtx gLinkYoungGoronBraceletVtx1[] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletVtx1.inc.c"
};

Vtx gLinkYoungGoronBraceletVtx2[] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletVtx2.inc.c"
};

Gfx gLinkYoungGoronBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungGoronBraceletVtx1, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gLinkYoungGoronBraceletVtx1[3], 14, 0),
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
    gsDPLoadTextureBlock(gLinkYoungGoronSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungGoronBraceletVtx2, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightHandAndOotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00E858, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00E858[30], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOcarinaofTimeDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ocarina_of_time_vtx, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(4, 20, 3, 0, 3, 20, 14, 0),
    gsSP2Triangles(12, 17, 19, 0, 12, 19, 22, 0),
    gsSP2Triangles(12, 22, 4, 0, 21, 20, 4, 0),
    
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightArmStretchedSlingshotDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&slingshot_stretched_vtx, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(8, 12, 11, 0, 13, 12, 8, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 25, 24, 0),
    gsSP2Triangles(26, 28, 25, 0, 17, 16, 24, 0),
    gsSP2Triangles(24, 23, 17, 0, 29, 22, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungSlingshotSeedTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&slingshot_stretched_vtx[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(4, 9, 10, 0, 4, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 12, 15, 0),
    gsSP2Triangles(14, 16, 0, 0, 15, 14, 0, 0),
    gsSP2Triangles(0, 16, 17, 0, 0, 17, 18, 0),
    gsSP2Triangles(17, 19, 2, 0, 18, 17, 2, 0),
    gsSP2Triangles(2, 19, 20, 0, 2, 20, 21, 0),
    gsSP2Triangles(21, 20, 9, 0, 21, 9, 4, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&slingshot_stretched_vtx[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 4, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(9, 6, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 21, 17, 20, 0),
    gsSP2Triangles(22, 17, 21, 0, 18, 23, 14, 0),
    gsSP2Triangles(23, 17, 22, 0, 18, 17, 23, 0),
    gsSP2Triangles(24, 13, 25, 0, 26, 0, 27, 0),
    gsSP2Triangles(26, 4, 0, 0, 25, 28, 24, 0),
    gsSP2Triangles(29, 26, 30, 0, 5, 29, 31, 0),
    gsSP2Triangles(4, 29, 5, 0, 4, 26, 29, 0),
    gsSP1Triangle(13, 24, 11, 0),
    gsSPVertex(&slingshot_stretched_vtx[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(6, 14, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 9, 19, 20, 0),
    gsSP2Triangles(16, 18, 21, 0, 7, 9, 20, 0),
    gsSP2Triangles(13, 16, 21, 0, 15, 22, 18, 0),
    gsSP2Triangles(7, 20, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(25, 11, 13, 0, 13, 21, 25, 0),
    gsSP2Triangles(26, 11, 25, 0, 17, 27, 15, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&slingshot_stretched_vtx[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 9, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(11, 7, 3, 0, 6, 11, 3, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 14, 13, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 14, 16, 0),
    gsSP2Triangles(14, 19, 17, 0, 18, 19, 14, 0),
    gsSP2Triangles(12, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 23, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 28, 24, 0, 28, 6, 24, 0),
    gsSP2Triangles(27, 29, 28, 0, 12, 28, 20, 0),
    gsSP2Triangles(11, 28, 12, 0, 28, 11, 6, 0),
    gsSP2Triangles(0, 24, 1, 0, 24, 6, 1, 0),
    gsSPVertex(&slingshot_stretched_vtx[155], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 11, 10, 0),
    gsSP2Triangles(18, 12, 11, 0, 18, 19, 12, 0),
    gsSP2Triangles(18, 14, 19, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&slingshot_stretched_vtx[186], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 7, 12, 0),
    gsSP2Triangles(11, 10, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 13, 16, 0, 15, 5, 16, 0),
    gsSP2Triangles(9, 19, 20, 0, 21, 19, 9, 0),
    gsSP2Triangles(22, 23, 13, 0, 13, 18, 22, 0),
    gsSP2Triangles(24, 23, 22, 0, 23, 17, 13, 0),
    gsSP2Triangles(25, 6, 3, 0, 25, 26, 6, 0),
    gsSP2Triangles(25, 27, 26, 0, 0, 28, 1, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&slingshot_stretched_vtx[218], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 3, 0, 0, 8, 9, 3, 0),
    gsSP2Triangles(4, 8, 7, 0, 4, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 13, 19, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 2, 0, 22, 21, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 23, 25, 0, 27, 26, 29, 0),
    gsSP1Triangle(29, 25, 27, 0),
    gsSPVertex(&slingshot_stretched_vtx[248], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 0, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 6, 5, 0, 13, 17, 15, 0),
    gsSP2Triangles(18, 16, 19, 0, 18, 6, 16, 0),
    gsSP1Triangle(12, 14, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&bottle_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&bottle_vtx[3], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 7, 6, 0),
    gsSP2Triangles(9, 7, 1, 0, 2, 6, 10, 0),
    gsSP2Triangles(6, 2, 1, 0, 5, 11, 3, 0),
    gsSP2Triangles(5, 12, 11, 0, 10, 5, 2, 0),
    gsSP1Triangle(10, 12, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&bottle_vtx[16], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 6, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungWaistNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[260], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 9, 12, 0, 9, 13, 12, 0),
    gsSP2Triangles(10, 14, 11, 0, 4, 15, 7, 0),
    gsSP2Triangles(6, 16, 3, 0, 17, 1, 0, 0),
    gsSP2Triangles(15, 17, 0, 0, 2, 12, 0, 0),
    gsSP2Triangles(0, 7, 15, 0, 11, 13, 9, 0),
    gsSP2Triangles(12, 13, 18, 0, 19, 8, 20, 0),
    gsSP2Triangles(20, 12, 18, 0, 20, 21, 19, 0),
    gsSP2Triangles(20, 22, 21, 0, 8, 19, 5, 0),
    gsSP1Triangle(18, 22, 20, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltClaspTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[283], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 4, 5, 2, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[290], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 5, 0, 5, 2, 1, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[80], 10, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[90], 21, 10),
    gsSP2Triangles(2, 3, 10, 0, 11, 4, 5, 0),
    gsSP2Triangles(12, 13, 6, 0, 14, 15, 7, 0),
    gsSP2Triangles(16, 8, 6, 0, 17, 3, 0, 0),
    gsSP2Triangles(4, 18, 19, 0, 6, 20, 21, 0),
    gsSP2Triangles(6, 7, 22, 0, 23, 9, 4, 0),
    gsSP2Triangles(5, 24, 25, 0, 26, 5, 2, 0),
    gsSP2Triangles(7, 9, 27, 0, 8, 28, 1, 0),
    gsSP1Triangle(0, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_007900[111], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 3, 0, 3, 7, 5, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 7, 3, 0),
    gsSP1Triangle(6, 5, 8, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[120], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 1, 7, 3, 0),
    gsSP2Triangles(7, 8, 3, 0, 7, 6, 8, 0),
    gsSP2Triangles(6, 9, 8, 0, 5, 9, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightShinNearDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[35], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[40], 15, 5),
    gsSP2Triangles(0, 1, 5, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 2, 0, 0, 9, 3, 2, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 1, 4, 0),
    gsSP2Triangles(13, 2, 14, 0, 3, 15, 16, 0),
    gsSP2Triangles(4, 3, 17, 0, 1, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005E00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[55], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 4, 3, 6, 0),
    gsSP2Triangles(5, 7, 1, 0, 2, 8, 3, 0),
    gsSP2Triangles(9, 10, 3, 0, 11, 2, 4, 0),
    gsSP2Triangles(0, 2, 11, 0, 12, 7, 10, 0),
    gsSP2Triangles(10, 9, 12, 0, 12, 13, 7, 0),
    gsSP2Triangles(10, 6, 3, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 5, 10, 0, 5, 6, 10, 0),
    gsSP2Triangles(1, 14, 2, 0, 2, 14, 8, 0),
    gsSP2Triangles(7, 13, 1, 0, 14, 1, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[70], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 3, 5, 6, 0),
    gsSP2Triangles(5, 3, 1, 0, 7, 4, 2, 0),
    gsSP2Triangles(8, 4, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightFootNearDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_007900, 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[5], 19, 5),
    gsSP2Triangles(5, 0, 1, 0, 6, 7, 2, 0),
    gsSP2Triangles(2, 0, 8, 0, 1, 3, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 4, 2, 12, 0),
    gsSP2Triangles(13, 3, 4, 0, 14, 15, 2, 0),
    gsSP2Triangles(16, 17, 4, 0, 1, 18, 19, 0),
    gsSP2Triangles(4, 20, 21, 0, 22, 23, 1, 0),
    gsSPVertex(&object_link_childVtx_007900[24], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(3, 2, 7, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 9, 5, 0, 5, 4, 10, 0),
    gsSP2Triangles(6, 10, 4, 0, 7, 6, 4, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[210], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[220], 21, 10),
    gsSP2Triangles(10, 5, 4, 0, 1, 0, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 6, 14, 15, 0),
    gsSP2Triangles(3, 2, 16, 0, 8, 5, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 20, 21, 3, 0),
    gsSP2Triangles(22, 6, 3, 0, 0, 7, 23, 0),
    gsSP2Triangles(24, 25, 1, 0, 4, 1, 26, 0),
    gsSP2Triangles(27, 7, 6, 0, 9, 28, 2, 0),
    gsSP1Triangle(29, 30, 8, 0),
    gsSPVertex(&object_link_childVtx_007900[241], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 7, 3, 0),
    gsSP1Triangle(8, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[250], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 1, 0),
    gsSP2Triangles(3, 8, 7, 0, 8, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 6, 9, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftShinNearDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[165], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[170], 15, 5),
    gsSP2Triangles(5, 0, 1, 0, 0, 6, 7, 0),
    gsSP2Triangles(1, 2, 8, 0, 2, 3, 9, 0),
    gsSP2Triangles(10, 11, 2, 0, 4, 0, 12, 0),
    gsSP2Triangles(13, 2, 14, 0, 15, 16, 3, 0),
    gsSP2Triangles(17, 3, 4, 0, 18, 19, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005E00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[185], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 4, 3, 0),
    gsSP2Triangles(1, 7, 5, 0, 4, 8, 0, 0),
    gsSP2Triangles(4, 9, 10, 0, 3, 0, 11, 0),
    gsSP2Triangles(11, 0, 2, 0, 9, 7, 12, 0),
    gsSP2Triangles(12, 10, 9, 0, 7, 13, 12, 0),
    gsSP2Triangles(4, 6, 9, 0, 10, 8, 4, 0),
    gsSP2Triangles(9, 5, 7, 0, 9, 6, 5, 0),
    gsSP2Triangles(0, 14, 1, 0, 8, 14, 0, 0),
    gsSP2Triangles(1, 13, 7, 0, 13, 1, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[200], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 6, 3, 0),
    gsSP2Triangles(1, 3, 6, 0, 0, 4, 7, 0),
    gsSP2Triangles(7, 4, 8, 0, 8, 6, 5, 0),
    gsSP2Triangles(5, 9, 8, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftFootNearDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[130], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[135], 19, 5),
    gsSP2Triangles(0, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 10, 0, 0, 1, 11, 12, 0),
    gsSP2Triangles(2, 13, 14, 0, 1, 3, 15, 0),
    gsSP2Triangles(16, 2, 1, 0, 17, 18, 4, 0),
    gsSP2Triangles(19, 3, 0, 0, 20, 4, 2, 0),
    gsSP2Triangles(2, 21, 22, 0, 0, 4, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[154], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 3, 6, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 5, 7, 0),
    gsSP2Triangles(1, 0, 8, 0, 1, 8, 3, 0),
    gsSP2Triangles(2, 4, 7, 0, 2, 1, 4, 0),
    gsSP2Triangles(6, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungCollarNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[551], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 8, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(12, 14, 16, 0, 4, 5, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 17, 19, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungTorsoNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[819], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 1, 14, 7, 0),
    gsSP2Triangles(4, 3, 15, 0, 10, 13, 8, 0),
    gsSP2Triangles(14, 9, 7, 0, 16, 6, 17, 0),
    gsSP2Triangles(16, 2, 6, 0, 18, 8, 19, 0),
    gsSP2Triangles(18, 5, 8, 0, 20, 21, 3, 0),
    gsSP2Triangles(20, 22, 21, 0, 0, 20, 3, 0),
    gsSP2Triangles(2, 7, 6, 0, 5, 18, 23, 0),
    gsSP2Triangles(2, 20, 0, 0, 2, 22, 20, 0),
    gsSP2Triangles(2, 16, 22, 0, 17, 6, 23, 0),
    gsSP2Triangles(6, 5, 23, 0, 7, 9, 5, 0),
    gsSP2Triangles(11, 15, 12, 0, 15, 11, 4, 0),
    gsSP2Triangles(8, 5, 9, 0, 10, 9, 14, 0),
    gsSP2Triangles(7, 2, 1, 0, 19, 8, 13, 0),
    gsSP2Triangles(13, 10, 11, 0, 24, 25, 13, 0),
    gsSP2Triangles(26, 16, 27, 0, 28, 29, 25, 0),
    gsSP2Triangles(29, 18, 19, 0, 30, 24, 31, 0),
    gsSP2Triangles(12, 31, 24, 0, 18, 29, 27, 0),
    gsSP1Triangle(23, 18, 17, 0),
    gsSPVertex(&object_link_childVtx_007900[851], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 1, 0, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 5, 12, 0),
    gsSP2Triangles(4, 7, 13, 0, 9, 14, 15, 0),
    gsSP2Triangles(10, 6, 8, 0, 4, 3, 16, 0),
    gsSP2Triangles(0, 12, 5, 0, 2, 13, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[868], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 1, 8, 0),
    gsSP2Triangles(2, 1, 7, 0, 2, 9, 0, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(7, 13, 12, 0, 8, 13, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltClaspTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[882], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006B00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[887], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[895], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(8, 12, 13, 0, 8, 13, 14, 0),
    gsSP2Triangles(8, 14, 15, 0, 8, 10, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&object_link_childVtx_007900[926], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungHeadNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[338], 7, 0),
    gsSPCullDisplayList(0, 7),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[345], 15, 7),
    gsSP2Triangles(7, 3, 5, 0, 5, 8, 9, 0),
    gsSP2Triangles(3, 10, 11, 0, 12, 0, 1, 0),
    gsSP2Triangles(1, 13, 14, 0, 15, 16, 5, 0),
    gsSP2Triangles(6, 0, 17, 0, 18, 2, 4, 0),
    gsSP2Triangles(19, 20, 1, 0, 1, 2, 21, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[360], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 6, 0),
    gsSP2Triangles(6, 0, 7, 0, 4, 1, 0, 0),
    gsSP2Triangles(8, 1, 4, 0, 6, 9, 5, 0),
    gsSP2Triangles(7, 10, 6, 0, 7, 0, 11, 0),
    gsSP2Triangles(0, 3, 11, 0, 4, 5, 12, 0),
    gsSP2Triangles(13, 12, 5, 0, 13, 5, 14, 0),
    gsSP2Triangles(5, 9, 14, 0, 15, 10, 7, 0),
    gsSP2Triangles(15, 7, 16, 0, 7, 17, 16, 0),
    gsSP2Triangles(17, 7, 11, 0, 11, 3, 18, 0),
    gsSP2Triangles(17, 11, 18, 0, 8, 4, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanMouthTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[379], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 1, 5, 3, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 4, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[387], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(3, 1, 7, 0, 7, 8, 3, 0),
    gsSP2Triangles(8, 7, 5, 0, 9, 8, 5, 0),
    gsSP2Triangles(9, 5, 4, 0, 4, 10, 9, 0),
    gsSP2Triangles(4, 11, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 11, 13, 0, 13, 14, 10, 0),
    gsSP2Triangles(14, 9, 10, 0, 14, 8, 9, 0),
    gsSP2Triangles(15, 16, 12, 0, 11, 15, 12, 0),
    gsSP2Triangles(15, 11, 4, 0, 4, 17, 15, 0),
    gsSP2Triangles(17, 16, 15, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 16, 18, 0, 18, 20, 19, 0),
    gsSP2Triangles(6, 18, 17, 0, 6, 17, 4, 0),
    gsSP2Triangles(19, 20, 21, 0, 21, 20, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[409], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 6, 0),
    gsSP2Triangles(8, 16, 17, 0, 18, 16, 8, 0),
    gsSP2Triangles(16, 18, 19, 0, 8, 17, 20, 0),
    gsSP2Triangles(18, 8, 7, 0, 8, 20, 15, 0),
    gsSP2Triangles(15, 20, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(20, 24, 21, 0, 25, 23, 26, 0),
    gsSP2Triangles(21, 26, 23, 0, 24, 26, 21, 0),
    gsSP2Triangles(27, 15, 21, 0, 21, 22, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 2, 31, 0, 0),
    gsSPVertex(&object_link_childVtx_007900[441], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005400, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[447], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 10, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 16, 17, 15, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 17, 0, 24, 26, 17, 0),
    gsSP2Triangles(17, 26, 15, 0, 26, 27, 15, 0),
    gsSP2Triangles(27, 13, 15, 0, 13, 27, 28, 0),
    gsSP2Triangles(27, 26, 29, 0, 29, 28, 27, 0),
    gsSP2Triangles(30, 28, 31, 0, 29, 31, 28, 0),
    gsSPVertex(&object_link_childVtx_007900[479], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 21, 24, 0),
    gsSP2Triangles(25, 21, 23, 0, 23, 26, 25, 0),
    gsSP2Triangles(21, 25, 27, 0, 28, 27, 25, 0),
    gsSP2Triangles(28, 25, 26, 0, 28, 26, 29, 0),
    gsSP2Triangles(29, 26, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_007900[511], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 10, 11, 0),
    gsSP2Triangles(13, 12, 11, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP1Triangle(25, 26, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005540, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[538], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(gLinkHumanEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[541], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 7, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungHatNearDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[300], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[306], 20, 6),
    gsSP2Triangles(6, 7, 0, 0, 8, 3, 1, 0),
    gsSP2Triangles(9, 1, 0, 0, 10, 11, 2, 0),
    gsSP2Triangles(2, 3, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 3, 0, 4, 17, 18, 0),
    gsSP2Triangles(19, 20, 5, 0, 21, 4, 2, 0),
    gsSP2Triangles(2, 22, 23, 0, 0, 5, 24, 0),
    gsSP1Triangle(5, 4, 25, 0),
    gsSPVertex(&object_link_childVtx_007900[326], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 2, 0),
    gsSP2Triangles(4, 6, 0, 0, 8, 3, 0, 0),
    gsSP2Triangles(6, 1, 0, 0, 2, 8, 0, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 3, 8, 0, 9, 11, 4, 0),
    gsSP2Triangles(11, 5, 4, 0, 4, 3, 9, 0),
    gsSP1Triangle(7, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[745], 6, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[751], 18, 6),
    gsSP2Triangles(0, 1, 6, 0, 7, 2, 8, 0),
    gsSP2Triangles(9, 2, 0, 0, 3, 10, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 4, 14, 1, 0),
    gsSP2Triangles(15, 4, 3, 0, 16, 0, 17, 0),
    gsSP2Triangles(5, 2, 18, 0, 0, 19, 20, 0),
    gsSP2Triangles(21, 3, 5, 0, 22, 1, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[769], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 1, 3, 7, 0),
    gsSP2Triangles(7, 5, 2, 0, 7, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[777], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 8, 9, 1, 0),
    gsSP2Triangles(9, 8, 4, 0, 3, 9, 4, 0),
    gsSP2Triangles(7, 5, 6, 0, 1, 0, 8, 0),
    gsSP2Triangles(5, 7, 3, 0, 2, 6, 0, 0),
    gsSP2Triangles(6, 5, 10, 0, 10, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[788], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungRightForearmNearDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[712], 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[717], 15, 5),
    gsSP2Triangles(5, 6, 0, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 2, 10, 0, 11, 12, 2, 0),
    gsSP2Triangles(1, 13, 14, 0, 0, 3, 15, 0),
    gsSP2Triangles(16, 3, 2, 0, 2, 4, 17, 0),
    gsSP2Triangles(1, 0, 18, 0, 19, 4, 1, 0),
    gsSPVertex(&object_link_childVtx_007900[732], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 2, 1, 0, 2, 9, 0, 0),
    gsSP2Triangles(0, 9, 8, 0, 4, 3, 8, 0),
    gsSP2Triangles(6, 5, 12, 0, 12, 4, 10, 0),
    gsSP2Triangles(10, 7, 12, 0, 12, 5, 4, 0),
    gsSP2Triangles(12, 7, 6, 0, 5, 11, 3, 0),
    gsSP2Triangles(7, 10, 8, 0, 2, 11, 5, 0),
    gsSP1Triangle(7, 9, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[635], 6, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[641], 18, 6),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(3, 5, 9, 0, 10, 11, 0, 0),
    gsSP2Triangles(12, 13, 0, 0, 4, 14, 2, 0),
    gsSP2Triangles(0, 2, 15, 0, 16, 3, 17, 0),
    gsSP2Triangles(18, 5, 1, 0, 19, 20, 3, 0),
    gsSP2Triangles(1, 0, 21, 0, 22, 4, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[659], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 0, 0, 7, 4, 1, 0),
    gsSP2Triangles(0, 6, 7, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[667], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 1, 8, 9, 0),
    gsSP2Triangles(4, 9, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(7, 3, 6, 0, 9, 2, 1, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsSP2Triangles(10, 3, 7, 0, 4, 3, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[678], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftForearmNearDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[602], 5, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[607], 15, 5),
    gsSP2Triangles(0, 5, 6, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 2, 10, 0, 2, 11, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 3, 0, 0),
    gsSP2Triangles(2, 3, 16, 0, 17, 4, 2, 0),
    gsSP2Triangles(18, 0, 1, 0, 1, 4, 19, 0),
    gsSPVertex(&object_link_childVtx_007900[622], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 3, 0, 7, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(1, 0, 11, 0, 2, 8, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 9, 5, 4, 0),
    gsSP2Triangles(12, 3, 6, 0, 10, 4, 12, 0),
    gsSP2Triangles(12, 7, 10, 0, 4, 3, 12, 0),
    gsSP2Triangles(6, 7, 12, 0, 5, 11, 3, 0),
    gsSP2Triangles(9, 10, 7, 0, 3, 11, 0, 0),
    gsSP1Triangle(0, 8, 7, 0),
    gsSPEndDisplayList(),
};

Vtx gLinkYoungSlingshotStringVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotStringVtx.inc.c"
};

Gfx gLinkYoungSlingshotStringDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 205, 255),
    gsSPVertex(gLinkYoungSlingshotStringVtx, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSPEndDisplayList(),
};

Vtx gLinkYoungDekuShieldVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldVtx.inc.c"
};

Gfx gLinkYoungDekuShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gLinkYoungDekuShieldVtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 11, 10, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 10, 25, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&gLinkYoungDekuShieldVtx[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gLinkYoungDekuShieldVtx[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 1, 0, 6, 0),
    gsSP2Triangles(4, 1, 6, 0, 7, 4, 3, 0),
    gsSPEndDisplayList(),
};

Mtx gLinkYoungDekuShieldMtx = { 
    65535      , 0          , -1         , -65536     , 
    0          , -65536     , 39387036   , 3276801    , 
    565445181  , 0          , -248054262 , 7405568    , 
    -44818011  , -250347520 , 0          , 0          , 
};

Gfx gLinkYoungDekuShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkYoungDekuShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkYoungDekuShieldDL),
};

LodLimb gLinkYoungRootLimb = { 
    { 0, 2376, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkYoungWaistLimb = { 
    { -4, -104, 0 }, 0x02, 0x09,
    { gLinkYoungWaistNearDL, gLinkYoungWaistNearDL }
};

LodLimb gLinkYoungLowerControlLimb = { 
    { 607, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkYoungRightThighLimb = { 
    { -172, 50, -190 }, 0x04, 0x06,
    { gLinkYoungRightThighNearDL, gLinkYoungRightThighNearDL }
};

LodLimb gLinkYoungRightShinLimb = { 
    { 697, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkYoungRightShinNearDL, gLinkYoungRightShinNearDL }
};

LodLimb gLinkYoungRightFootLimb = { 
    { 825, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungRightFootNearDL, gLinkYoungRightFootNearDL }
};

LodLimb gLinkYoungLeftThighLimb = { 
    { -170, 57, 192 }, 0x07, LIMB_DONE,
    { gLinkYoungLeftThighNearDL, gLinkYoungLeftThighNearDL }
};

LodLimb gLinkYoungLeftShinLimb = { 
    { 695, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkYoungLeftShinNearDL, gLinkYoungLeftShinNearDL }
};

LodLimb gLinkYoungLeftFootLimb = { 
    { 817, 8, 4 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungLeftFootNearDL, gLinkYoungLeftFootNearDL }
};

LodLimb gLinkYoungUpperControlLimb = { 
    { 0, -103, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkYoungHeadLimb = { 
    { 996, -201, -1 }, 0x0B, 0x0C,
    { gLinkYoungHeadNearDL, gLinkYoungHeadNearDL }
};

LodLimb gLinkYoungHatLimb = { 
    { -365, -670, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungHatNearDL, gLinkYoungHatNearDL }
};

LodLimb gLinkYoungCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkYoungCollarNearDL, gLinkYoungCollarNearDL }
};

LodLimb gLinkYoungLeftshoulderLimb = { 
    { 696, -175, 466 }, 0x0E, 0x10,
    { gLinkYoungLeftShoulderNearDL, gLinkYoungLeftShoulderNearDL }
};

LodLimb gLinkYoungLeftForearmLimb = { 
    { 581, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkYoungLeftForearmNearDL, gLinkYoungLeftForearmNearDL }
};

LodLimb gLinkYoungLeftHandLimb = { 
    { 514, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungLeftHandNearDL, gLinkYoungLeftHandNearDL }
};

LodLimb gLinkYoungRightshoulderLimb = { 
    { 696, -175, -466 }, 0x11, 0x13,
    { gLinkYoungRightShoulderNearDL, gLinkYoungRightShoulderNearDL }
};

LodLimb gLinkYoungRightForearmLimb = { 
    { 577, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkYoungRightForearmNearDL, gLinkYoungRightForearmNearDL }
};

LodLimb gLinkYoungRightHandLimb = { 
    { 525, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungRightHandNearDL, gLinkYoungRightHandNearDL }
};

LodLimb gLinkYoungSwordAndSheathLimb = { 
    { 657, -523, 367 }, LIMB_DONE, 0x14,
    { gLinkYoungRightHandNearDL, gLinkYoungRightHandNearDL }
};

LodLimb gLinkYoungTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkYoungTorsoNearDL, gLinkYoungTorsoNearDL }
};

void* gLinkYoungSkelLimbs[] = {
    &gLinkYoungRootLimb,
    &gLinkYoungWaistLimb,
    &gLinkYoungLowerControlLimb,
    &gLinkYoungRightThighLimb,
    &gLinkYoungRightShinLimb,
    &gLinkYoungRightFootLimb,
    &gLinkYoungLeftThighLimb,
    &gLinkYoungLeftShinLimb,
    &gLinkYoungLeftFootLimb,
    &gLinkYoungUpperControlLimb,
    &gLinkYoungHeadLimb,
    &gLinkYoungHatLimb,
    &gLinkYoungCollarLimb,
    &gLinkYoungLeftshoulderLimb,
    &gLinkYoungLeftForearmLimb,
    &gLinkYoungLeftHandLimb,
    &gLinkYoungRightshoulderLimb,
    &gLinkYoungRightForearmLimb,
    &gLinkYoungRightHandLimb,
    &gLinkYoungSwordAndSheathLimb,
    &gLinkYoungTorsoLimb,
};

FlexSkeletonHeader gLinkYoungSkel = { 
    { gLinkYoungSkelLimbs, ARRAY_COUNT(gLinkYoungSkelLimbs) }, 18
};



// Global

static u64 gSwordBowHookshotHandTLUT[] = {
#include "assets/objects/object_link_child/other/sword_bow_hookshot_hand_tlut.rgba16.inc.c"
};

static u64 gSwordMetalTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_metal.i8.inc.c"
};

static u64 gLinkYoungBowTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow.ci8.inc.c"
};

static u64 gLinkYoungBowDesignTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow_design.ci8.inc.c"
};



// Kokiri Sword

static Gfx gKokiriSwordHandleDL[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkYoungSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungSwordTLUT),
    gsSPVertex(&kokiri_sword_handle_vtx, 24, 0),
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

static u64 gHerosSwordHandlePommelTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_pommel.rgba16.inc.c"
};

static u64 gHerosSwordHandleCrossGuardTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_cross_gaurd.ci8.inc.c"
};

static u64 gHerosSwordHandleGripTex[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_grip.i8.inc.c"
};

static u64 gHerosSwordHandleTLUT[] = {
#include "assets/objects/object_link_child/swords/kokiri_sword_handle_tlut.rgba16.inc.c"
};

static Vtx heros_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_handle.vtx.inc"
};

static Vtx heros_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_blade.vtx.inc"
};

static Gfx gHerosSwordHandleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gHerosSwordHandleGripTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

static Gfx gHerosSwordBladeDL[] = {
    gsSPTexture(0x06A4, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(heros_sword_blade_vtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x07D0, 0x0DAC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[3], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x04B0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[6], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x0640, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
	gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&heros_sword_blade_vtx[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftHandHoldingHerosSwordDL[] = {
    gsSPDisplayList(gLinkYoungLeftHandNearDL),
	gsSPDisplayList(gHerosSwordHandleDL),
	gsSPBranchList(gHerosSwordBladeDL),
};



// Razor Sword

static u64 gRazorSwordHandleDesignTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_design.rgba16.inc.c"
};

static u64 gRazorSwordHandleGripTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_grip.rgba16.inc.c"
};

static Vtx razor_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle.vtx.inc"
};

static Vtx razor_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_blade.vtx.inc"
};

static Gfx gRazorSwordHandleDL[] = {
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[29], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 4, 6, 0),
    gsSP2Triangles(5, 4, 10, 0, 2, 9, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

static Gfx gRazorSwordBladeDL[] = {
	// Part 1
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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

Gfx gLinkYoungLeftHandHoldingRazorSwordDL[] = {
    gsSPDisplayList(gLinkYoungLeftHandNearDL),
	gsSPDisplayList(gRazorSwordHandleDL),
	gsSPBranchList(gRazorSwordBladeDL),
};



// Gilded Sword

static u64 object_link_child_Tex_01C380[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C380.rgba16.inc.c"
};

static u64 object_link_child_Tex_01C400[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C400.rgba16.inc.c"
};

static u64 object_link_child_Tex_01C900[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01C900.rgba16.inc.c"
};

static u64 object_link_child_Tex_01D340[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01D340.i8.inc.c"
};

static Vtx gilded_sword_handle_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_handle.vtx.inc"
};

static Vtx gilded_sword_blade_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_blade.vtx.inc"
};

static Gfx gGildedSwordHandleDL[] = {
	// Part 1
	gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

static Gfx gSilverSwordBladeDL[] = {
    // Part 1
	gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 192, 192, 192, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[13], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    
	gsSPEndDisplayList(),
};

static Gfx gGoldenSwordBladeDL[] = {
	// Part 1
	gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[13], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
	
	gsSPEndDisplayList(),
};

static Gfx gGildedSwordBladeDL[] = {
    // Part 3
	gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |  G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[40], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    
    gsSPEndDisplayList(),
};

Gfx gLinkYoungLeftHandHoldingSilverSwordDL[] = {
    gsSPDisplayList(gLinkYoungLeftHandNearDL),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPDisplayList(gSilverSwordBladeDL),
    gsSPBranchList(gGildedSwordBladeDL),
};

Gfx gLinkYoungLeftHandHoldingGoldenSwordDL[] = {
    gsSPDisplayList(gLinkYoungLeftHandNearDL),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPDisplayList(gGoldenSwordBladeDL),
    gsSPBranchList(gGildedSwordBladeDL),
};



// Sheaths

static Vtx heros_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/heros_sword_sheath.vtx.inc"
};

static Vtx razor_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/razor_sword_sheath.vtx.inc"
};

static Vtx gilded_sword_sheath_vtx[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_sheath.vtx.inc"
};

static Mtx gSheathedHerosSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -37814493  , -2097151   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

static Mtx gSheathedRazorSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -31391984  , -1310719   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

static Mtx gSheathedGildedSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -37814493  , -2097151   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkYoungSheathedKokiriSwordDL[] = {
    gsSPDisplayList(gLinkYoungKokiriSwordSheathDL),
    gsSPDisplayList(gKokiriSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungSheathedHerosSwordDL[] = {
    gsSPDisplayList(gLinkYoungHerosSwordSheathDL),
    gsSPMatrix(&gSheathedHerosSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gHerosSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungSheathedRazorSwordDL[] = {
    gsSPDisplayList(gLinkYoungRazorSwordSheathDL),
    gsSPMatrix(&gSheathedRazorSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gRazorSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungSheathedGildedSwordDL[] = {
    gsSPDisplayList(gLinkYoungGildedSwordSheathDL),
    gsSPMatrix(&gSheathedGildedSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungKokiriSwordSheathDL[] = {
	gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkYoungSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&kokiri_sword_sheath_vtx, 11, 0),
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

Gfx gLinkYoungHerosSwordSheathDL[] = {
	gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

Gfx gLinkYoungRazorSwordSheathDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

Gfx gLinkYoungGildedSwordSheathDL[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_sheath_vtx[57], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    
    gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

Gfx gLinkYoungDekuShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedKokiriSwordDL),
    gsSPBranchList(gLinkYoungDekuShieldWithMatrixDL),
};

Gfx gLinkYoungDekuShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedHerosSwordDL),
    gsSPBranchList(gLinkYoungDekuShieldWithMatrixDL),
};

Gfx gLinkYoungDekuShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedRazorSwordDL),
    gsSPBranchList(gLinkYoungDekuShieldWithMatrixDL),
};

Gfx gLinkYoungDekuShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedGildedSwordDL),
    gsSPBranchList(gLinkYoungDekuShieldWithMatrixDL),
};

Gfx gLinkYoungHylianShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedKokiriSwordDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedHerosSwordDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedRazorSwordDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedGildedSwordDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldKokiriSwordSheathDL[] = {
    gsSPDisplayList(gLinkYoungKokiriSwordSheathDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldHerosSwordSheathDL[] = {
    gsSPDisplayList(gLinkYoungHerosSwordSheathDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldRazorSwordSheathDL[] = {
    gsSPDisplayList(gLinkYoungRazorSwordSheathDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};

Gfx gLinkYoungHylianShieldGildedSwordSheathDL[] = {
    gsSPDisplayList(gLinkYoungGildedSwordSheathDL),
    gsSPBranchList(gLinkYoungHylianShieldAndSheathNearDL),
};


Gfx gLinkYoungHerosShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedKokiriSwordDL),
    gsSPBranchList(gLinkYoungHerosShieldWithMatrixDL),
};

Gfx gLinkYoungHerosShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedHerosSwordDL),
    gsSPBranchList(gLinkYoungHerosShieldWithMatrixDL),
};

Gfx gLinkYoungHerosShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedRazorSwordDL),
    gsSPBranchList(gLinkYoungHerosShieldWithMatrixDL),
};

Gfx gLinkYoungHerosShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedGildedSwordDL),
    gsSPBranchList(gLinkYoungHerosShieldWithMatrixDL),
};

Gfx gLinkYoungMirrorShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedKokiriSwordDL),
    gsSPBranchList(gLinkYoungMirrorShieldWithMatrixDL),
};

Gfx gLinkYoungMirrorShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedHerosSwordDL),
    gsSPBranchList(gLinkYoungMirrorShieldWithMatrixDL),
};

Gfx gLinkYoungMirrorShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedRazorSwordDL),
    gsSPBranchList(gLinkYoungMirrorShieldWithMatrixDL),
};

Gfx gLinkYoungMirrorShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkYoungSheathedGildedSwordDL),
    gsSPBranchList(gLinkYoungMirrorShieldWithMatrixDL),
};



// Hero's Shield

static u64 gLinkYoungHerosShieldFrontTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_tlut.rgba16.inc.c"
};

static u64 gLinkYoungHerosShieldBackTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back_tlut.rgba16.inc.c"
};

static u64 gLinkYoungHerosShieldFrontUpperTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_upper.ci8.inc.c"
};

static u64 gLinkYoungHerosShieldFrontLowerTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_lower.ci8.inc.c"
};

static u64 gLinkYoungHerosShieldBackTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back.ci8.inc.c"
};

static u64 gLinkYoungShieldHandleTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle_tlut.rgba16.inc.c"
};

static u64 gLinkYoungShieldHandleTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle.ci8.inc.c"
};

static Vtx heros_shield_vtx[] = {
#include "assets/objects/object_link_child/shields/heros_shield.vtx.inc"
};

static Mtx gLinkYoungHerosShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , 1          , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkYoungHerosShieldDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkYoungShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkYoungShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_shield_vtx, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkYoungHerosShieldBackTLUT),
    gsDPLoadTextureBlock(gLinkYoungHerosShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&heros_shield_vtx[12], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 6, 5, 0),
    gsSP2Triangles(2, 8, 6, 0, 2, 3, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkYoungHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkYoungHerosShieldFrontLowerTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_shield_vtx[21], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 6, 5, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkYoungHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkYoungHerosShieldFrontUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&heros_shield_vtx[29], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 1, 5, 0),
    gsSP2Triangles(2, 5, 7, 0, 9, 2, 7, 0),
    gsSP2Triangles(10, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 2, 9, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungHoldingHerosShieldDL[] = {
	gsSPDisplayList(gLinkYoungRightHandClosedNearDL),
    gsSPBranchList(gLinkYoungHerosShieldDL),
};

Gfx gLinkYoungHerosShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkYoungHerosShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkYoungHerosShieldDL),
};



// Mirror Shield

static u64 object_link_child_Tex_01C800[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01C800.rgba16.inc.c"
};

static u64 object_link_child_Tex_01CB00[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01CB00.i8.inc.c"
};

static u64 object_link_child_Tex_01D300[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01D300.i8.inc.c"
};

static u64 object_link_child_Tex_01D440[] = {
#include "assets/objects/object_link_child/shields/mirror_shield_tex_01D440.i8.inc.c"
};

static Vtx mirror_shield_vtx[] = {
#include "assets/objects/object_link_child/shields/mirror_shield.vtx.inc"
};

static Mtx gLinkYoungMirrorShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , -3276799   , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkYoungMirrorShieldDL[] = {
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
    gsDPLoadTLUT_pal256(gLinkYoungShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkYoungShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
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

Gfx gLinkYoungHoldingMirrorShieldDL[] = {
	gsSPDisplayList(gLinkYoungRightHandClosedNearDL),
    gsSPBranchList(gLinkYoungMirrorShieldDL),
};

Gfx gLinkYoungMirrorShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkYoungMirrorShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkYoungMirrorShieldDL),
};



// Megaton Hammer

static Vtx hammer_vtx[] = {
#include "assets/objects/object_link_child/other/hammer.vtx.inc"
};

Gfx gLinkYoungLeftHandHoldingHammerNearDL[] = {
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
	
	gsSPDisplayList(gLinkYoungLeftHandNearDL),
	
	gsSPEndDisplayList(),
};



// Hookshot

static u64 gLinkYoungHookshotHandleTex[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_handle.ci8.inc.c"
};

static u64 gLinkYoungHookshotHandTex[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_hand.ci8.inc.c"
};

static Vtx hookshot_chain_vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainVtx.inc.c"
};

static Vtx hookshot_hand_vtx[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_hand.vtx.inc"
};

static Vtx hookshot_far_vtx[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_far.vtx.inc"
};

Gfx gLinkYoungRightHandHoldingHookshot[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkYoungHookshotHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsDPLoadTextureBlock(gLinkYoungBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
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
    gsDPLoadTextureBlock(gLinkYoungBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
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

Gfx gLinkYoungRightHandHoldingHookshotNearDL[] = {
	gsSPDisplayList(gLinkYoungRightHandHoldingHookshot),
	gsSPBranchList(gLinkYoungRightHandClosedNearDL),
};

Gfx gLinkYoungRightHandHoldingHookshotFarDL[] = {
    gsSPDisplayList(gLinkYoungRightHandHoldingHookshot),
    
	gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkYoungHookshotHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
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

static Vtx heros_bow_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow.vtx.inc"
};

static Vtx heros_bow_string_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow_string.vtx.inc"
};

static Vtx heros_bow_first_person_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow_first_person.vtx.inc"
};

Gfx gLinkYoungRightHandHoldingBowNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkYoungBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsDPLoadTextureBlock(gLinkYoungBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
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
	
    gsSPBranchList(gLinkYoungRightHandClosedNearDL),
};

Gfx gLinkYoungRightHandHoldingBowFirstPersonDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gSwordBowHookshotHandTLUT),
    gsDPLoadTextureBlock(gLinkYoungBowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsDPLoadTextureBlock(gLinkYoungBowDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
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
    gsDPLoadTextureBlock(gLinkYoungHookshotHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
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

Gfx gLinkYoungBowStringDL[] = {
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

static u64 gLinkYoungPowerSymbolTex[] = {
#include "assets/objects/object_link_child/other/power_symbol.ia16.inc.c"
};

static Vtx bracelet_right_vtx[] = {
#include "assets/objects/object_link_child/other/bracelet_right.vtx.inc"
};
    
Gfx gLinkYoungPowerBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungGoronBraceletVtx1, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gLinkYoungGoronBraceletVtx1[3], 14, 0),
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
    gsDPLoadTextureBlock(gLinkYoungPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkYoungGoronBraceletVtx2, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungPowerBraceletsDL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkYoungGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
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
    gsDPLoadTextureBlock(gLinkYoungPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&bracelet_right_vtx[17], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPBranchList(gLinkYoungPowerBraceletDL),
};



// Earring

static u64 gLinkYoungEarringTex[] = {
#include "assets/objects/object_link_boy/gLinkAdultEarringTex.ia16.inc.c"
};

static Vtx earring_vtx[] = {
#include "assets/objects/object_link_child/other/earring.vtx.inc"
};

Gfx gLinkYoungEarringsIronDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&earring_vtx, 8, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkYoungEarringTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(0,  1,  2,  0, 3,  4,  5,  0),
    gsSP2Triangles(4,  3,  6,  0, 0,  7,  1,  0),
    gsSPEndDisplayList(),
};

Gfx gLinkYoungEarringsHoverDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0x80, 187, 165, 61, 255),
    gsSPVertex(&earring_vtx, 8, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkYoungEarringTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(0,  1,  2,  0, 3,  4,  5,  0),
    gsSP2Triangles(4,  3,  6,  0, 0,  7,  1,  0),
    gsSPEndDisplayList(),
};
