/**
#include "object_link_child.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "z64player.h"

// Eyes textures

u64 gLinkChildEyesOpenTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesOpenTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesHalfTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesHalfTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesClosedfTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesClosedfTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesLeftTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesLeftTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesRightTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesRightTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesWideTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesWideTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesDownTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesDownTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildEyesWincingTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEyesWincingTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

// Mouth textures

u64 gLinkChildMouthClosedTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMouthClosedTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildMouthHalfTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMouthHalfTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildMouthOpenTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMouthOpenTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildMouthSmileTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMouthSmileTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

// Textures

#define gLinkChildNoseTex_WIDTH 16
#define gLinkChildNoseTex_HEIGHT 16
u64 gLinkChildNoseTex[TEX_LEN(u64, gLinkChildNoseTex_WIDTH, gLinkChildNoseTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildNoseTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

#define gLinkChildUnusedHandTex_WIDTH 16
#define gLinkChildUnusedHandTex_HEIGHT 16
u64 gLinkChildUnusedHandTex[TEX_LEN(u64, gLinkChildUnusedHandTex_WIDTH, gLinkChildUnusedHandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildUnusedHandTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

#define gLinkChildEarTex_WIDTH 16
#define gLinkChildEarTex_HEIGHT 16
u64 gLinkChildEarTex[TEX_LEN(u64, gLinkChildEarTex_WIDTH, gLinkChildEarTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildEarTex.ci8.tlut_gLinkChildSkinTLUT.inc.c"
};

u64 gLinkChildBeltTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildBeltTLUT.tlut.rgba16.inc.c"
};

u64 gLinkChildSkinTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildSkinTLUT.tlut.rgba16.inc.c"
};

u64 gLinkChildUnusedTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildUnused1Tex.tlut.rgba16.inc.c"
};

#define gLinkChildUnused1Tex_WIDTH 16
#define gLinkChildUnused1Tex_HEIGHT 16
u64 gLinkChildUnused1Tex[TEX_LEN(u64, gLinkChildUnused1Tex_WIDTH, gLinkChildUnused1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildUnused1Tex.ci8.inc.c"
};

#define gLinkChildUnused2Tex_WIDTH 32
#define gLinkChildUnused2Tex_HEIGHT 16
u64 gLinkChildUnused2Tex[TEX_LEN(u64, gLinkChildUnused2Tex_WIDTH, gLinkChildUnused2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildUnused2Tex.ci8.tlut_gLinkChildBeltTLUT.inc.c"
};

#define gLinkChildLowerBootTex_WIDTH 32
#define gLinkChildLowerBootTex_HEIGHT 32
u64 gLinkChildLowerBootTex[TEX_LEN(u64, gLinkChildLowerBootTex_WIDTH, gLinkChildLowerBootTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildLowerBootTex.ci8.tlut_gLinkChildBeltTLUT.inc.c"
};

#define gLinkChildBootTex_WIDTH 32
#define gLinkChildBootTex_HEIGHT 32
u64 gLinkChildBootTex[TEX_LEN(u64, gLinkChildBootTex_WIDTH, gLinkChildBootTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildBootTex.ci8.tlut_gLinkChildBeltTLUT.inc.c"
};

#define gLinkChildWaistTex_WIDTH 32
#define gLinkChildWaistTex_HEIGHT 32
u64 gLinkChildWaistTex[TEX_LEN(u64, gLinkChildWaistTex_WIDTH, gLinkChildWaistTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildWaistTex.i8.inc.c"
};

#define gLinkChildBeltTex_WIDTH 8
#define gLinkChildBeltTex_HEIGHT 16
u64 gLinkChildBeltTex[TEX_LEN(u64, gLinkChildBeltTex_WIDTH, gLinkChildBeltTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildBeltTex.ci8.tlut_gLinkChildBeltTLUT.inc.c"
};

#define gLinkChildBeltClaspTex_WIDTH 32
#define gLinkChildBeltClaspTex_HEIGHT 16
u64 gLinkChildBeltClaspTex[TEX_LEN(u64, gLinkChildBeltClaspTex_WIDTH, gLinkChildBeltClaspTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildBeltClaspTex.ci8.tlut_gLinkChildBeltTLUT.inc.c"
};

// Deku stick

Vtx gLinkChildLinkDekuStickVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickVtx.inc.c"
};

Gfx gLinkChildLinkDekuStickDL[41] = {
#include "assets/objects/object_link_child/gLinkChildLinkDekuStickDL.inc.c"
};

// Textures

#define gLinkChildFairyOcarinaTex_WIDTH 32
#define gLinkChildFairyOcarinaTex_HEIGHT 16
u64 gLinkChildFairyOcarinaTex[TEX_LEN(u64, gLinkChildFairyOcarinaTex_WIDTH, gLinkChildFairyOcarinaTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildFairyOcarinaTex.rgba16.inc.c"
};

#define gLinkChildGoronBraceletTex_WIDTH 8
#define gLinkChildGoronBraceletTex_HEIGHT 8
u64 gLinkChildGoronBraceletTex[TEX_LEN(u64, gLinkChildGoronBraceletTex_WIDTH, gLinkChildGoronBraceletTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletTex.rgba16.inc.c"
};

#define gLinkChildGoronSymbolTex_WIDTH 16
#define gLinkChildGoronSymbolTex_HEIGHT 32
u64 gLinkChildGoronSymbolTex[TEX_LEN(u64, gLinkChildGoronSymbolTex_WIDTH, gLinkChildGoronSymbolTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronSymbolTex.ia16.inc.c"
};

#define gLinkChildDekuShieldBackTex_WIDTH 32
#define gLinkChildDekuShieldBackTex_HEIGHT 32
u64 gLinkChildDekuShieldBackTex[TEX_LEN(u64, gLinkChildDekuShieldBackTex_WIDTH, gLinkChildDekuShieldBackTex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldBackTex.rgba16.inc.c"
};

#define gLinkChildDekuShieldFrontTex_WIDTH 32
#define gLinkChildDekuShieldFrontTex_HEIGHT 64
u64 gLinkChildDekuShieldFrontTex[TEX_LEN(u64, gLinkChildDekuShieldFrontTex_WIDTH, gLinkChildDekuShieldFrontTex_HEIGHT,
                                         16)] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldFrontTex.rgba16.inc.c"
};

#define gLinkChildHylianShieldBackTex_WIDTH 16
#define gLinkChildHylianShieldBackTex_HEIGHT 32
u64 gLinkChildHylianShieldBackTex[TEX_LEN(u64, gLinkChildHylianShieldBackTex_WIDTH,
                                          gLinkChildHylianShieldBackTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldBackTex.rgba16.inc.c"
};

#define gLinkChildSlingshotTex_WIDTH 16
#define gLinkChildSlingshotTex_HEIGHT 32
u64 gLinkChildSlingshotTex[TEX_LEN(u64, gLinkChildSlingshotTex_WIDTH, gLinkChildSlingshotTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotTex.rgba16.inc.c"
};

#define gLinkChildSlingshotSeedTex_WIDTH 32
#define gLinkChildSlingshotSeedTex_HEIGHT 32
u64 gLinkChildSlingshotSeedTex[TEX_LEN(u64, gLinkChildSlingshotSeedTex_WIDTH, gLinkChildSlingshotSeedTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotSeedTex.rgba16.inc.c"
};

u64 gLinkChildHandTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildHandTex.tlut.rgba16.inc.c"
};

u64 gLinkChildSwordsTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildSwordsTLUT.tlut.rgba16.inc.c"
};

u8 gLinkChild_A110_Blob[] = {
#include "assets/objects/object_link_child/gLinkChild_A110_Blob.bin.inc.c"
};

u64 gLinkChildSwordTLUT[] = {
#include "assets/objects/object_link_child/gLinkChildSwordJewelTex.tlut.rgba16.inc.c"
};

#define gLinkChildHandTex_WIDTH 16
#define gLinkChildHandTex_HEIGHT 16
u64 gLinkChildHandTex[TEX_LEN(u64, gLinkChildHandTex_WIDTH, gLinkChildHandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildHandTex.ci8.inc.c"
};

#define gLinkChildKokiriSwordSheathTex_WIDTH 16
#define gLinkChildKokiriSwordSheathTex_HEIGHT 16
u64 gLinkChildKokiriSwordSheathTex[TEX_LEN(u64, gLinkChildKokiriSwordSheathTex_WIDTH,
                                           gLinkChildKokiriSwordSheathTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildKokiriSwordSheathTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

#define gLinkChildSwordJewelTex_WIDTH 32
#define gLinkChildSwordJewelTex_HEIGHT 16
u64 gLinkChildSwordJewelTex[TEX_LEN(u64, gLinkChildSwordJewelTex_WIDTH, gLinkChildSwordJewelTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildSwordJewelTex.ci8.inc.c"
};

#define gLinkChildMasterSwordPommelTex_WIDTH 16
#define gLinkChildMasterSwordPommelTex_HEIGHT 16
u64 gLinkChildMasterSwordPommelTex[TEX_LEN(u64, gLinkChildMasterSwordPommelTex_WIDTH,
                                           gLinkChildMasterSwordPommelTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordPommelTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

#define gLinkChildMasterSwordGuardTex_WIDTH 32
#define gLinkChildMasterSwordGuardTex_HEIGHT 32
u64 gLinkChildMasterSwordGuardTex[TEX_LEN(u64, gLinkChildMasterSwordGuardTex_WIDTH,
                                          gLinkChildMasterSwordGuardTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordGuardTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

#define gLinkChildMasterSwordEmblemTex_WIDTH 16
#define gLinkChildMasterSwordEmblemTex_HEIGHT 16
u64 gLinkChildMasterSwordEmblemTex[TEX_LEN(u64, gLinkChildMasterSwordEmblemTex_WIDTH,
                                           gLinkChildMasterSwordEmblemTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_child/gLinkChildMasterSwordEmblemTex.ci8.tlut_gLinkChildSwordsTLUT.inc.c"
};

// Various vertices and DLs

Vtx gLinkChildLeftHandNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandNearVtx.inc.c"
};

Vtx gLinkChildLeftFistNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistNearVtx.inc.c"
};

Vtx gLinkChildLeftFistAndKokiriSwordNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndKokiriSwordNearVtx.inc.c"
};

Vtx gLinkChildRightHandNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandNearVtx.inc.c"
};

Vtx gLinkChildRightHandClosedNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandClosedNearVtx.inc.c"
};

Vtx gLinkChildRightFistAndDekuShieldNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightFistAndDekuShieldNearVtx.inc.c"
};

Vtx gLinkChildLeftFistAndBoomerangNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndBoomerangNearVtx.inc.c"
};

Vtx gLinkChildHylianShieldSwordAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldSwordAndSheathNearVtx.inc.c"
};

Vtx gLinkChildHylianShieldAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldAndSheathNearVtx.inc.c"
};

Vtx gLinkChildDekuShieldSwordAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldSwordAndSheathNearVtx.inc.c"
};

Vtx gLinkChildDekuShieldAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldAndSheathNearVtx.inc.c"
};

Vtx gLinkChildSwordAndSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSwordAndSheathNearVtx.inc.c"
};

Vtx gLinkChildSheathNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSheathNearVtx.inc.c"
};

Vtx gLinkChildLeftHandHoldingMasterSwordVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandHoldingMasterSwordVtx.inc.c"
};

Vtx gLinkChildRightHandAndOotNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandAndOotNearVtx.inc.c"
};

Vtx gLinkChildRightHandHoldingFairyOcarinaNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingFairyOcarinaNearVtx.inc.c"
};

Vtx gLinkChildRightHandHoldingSlingshotNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingSlingshotNearVtx.inc.c"
};

Vtx gLinkChildLeftHandUpNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandUpNearVtx.inc.c"
};

Vtx gLinkChildGoronBraceletVtx1[] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletVtx1.inc.c"
};

Vtx gLinkChildLeftHandFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandFarVtx.inc.c"
};

Vtx gLinkChildLeftFistFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistFarVtx.inc.c"
};

Vtx gLinkChildRightHandFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandFarVtx.inc.c"
};

Vtx gLinkChildRightHandClosedFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandClosedFarVtx.inc.c"
};

Vtx gLinkChildRightFistAndDekuShieldFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightFistAndDekuShieldFarVtx.inc.c"
};

Vtx gLinkChildLeftFistAndBoomerangFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndBoomerangFarVtx.inc.c"
};

Vtx gLinkChildHylianShieldSwordAndSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldSwordAndSheathFarVtx.inc.c"
};

Vtx gLinkChildHylianShieldAndSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldAndSheathFarVtx.inc.c"
};

Vtx gLinkChildDekuShieldSwordAndSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldSwordAndSheathFarVtx.inc.c"
};

Vtx gLinkChildDekuShieldAndSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldAndSheathFarVtx.inc.c"
};

Vtx gLinkChildSwordAndSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSwordAndSheathFarVtx.inc.c"
};

Vtx gLinkChildSheathFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSheathFarVtx.inc.c"
};

Vtx gLinkChildLeftFistAndKokiriSwordFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndKokiriSwordFarVtx.inc.c"
};

Vtx gLinkChildRightHandHoldingOOTFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingOOTFarVtx.inc.c"
};

Vtx gLinkChildRightHandHoldingFairyOcarinaFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingFairyOcarinaFarVtx.inc.c"
};

Vtx gLinkChildRightHandHoldingSlingshotFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingSlingshotFarVtx.inc.c"
};

Vtx gLinkChildLeftHandUpFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandUpFarVtx.inc.c"
};

Vtx gLinkChildRightArmStretchedSlingshotVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightArmStretchedSlingshotVtx.inc.c"
};

Vtx gLinkChildBottleVtx[] = {
#include "assets/objects/object_link_child/gLinkChildBottleVtx.inc.c"
};

Vtx gLinkChildGoronBraceletVtx2[] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletVtx2.inc.c"
};

Vtx gLinkChildDL_18580_Vtx[] = {
#include "assets/objects/object_link_child/gLinkChildDL_18580_Vtx.inc.c"
};

Vtx gLinkChildBottle2Vtx[] = {
#include "assets/objects/object_link_child/gLinkChildBottle2Vtx.inc.c"
};

Gfx gLinkChildLeftHandNearDL[45] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandNearDL.inc.c"
};

Gfx gLinkChildLeftFistNearDL[36] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistNearDL.inc.c"
};

Gfx gLinkChildLeftFistAndKokiriSwordNearDL[81] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndKokiriSwordNearDL.inc.c"
};

Gfx gLinkChildRightHandNearDL[44] = {
#include "assets/objects/object_link_child/gLinkChildRightHandNearDL.inc.c"
};

Gfx gLinkChildRightHandClosedNearDL[36] = {
#include "assets/objects/object_link_child/gLinkChildRightHandClosedNearDL.inc.c"
};

Gfx gLinkChildRightFistAndDekuShieldNearDL[68] = {
#include "assets/objects/object_link_child/gLinkChildRightFistAndDekuShieldNearDL.inc.c"
};

Gfx gLinkChildLeftFistAndBoomerangNearDL[73] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndBoomerangNearDL.inc.c"
};

Gfx gLinkChildHylianShieldSwordAndSheathNearDL[83] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldSwordAndSheathNearDL.inc.c"
};

Gfx gLinkChildHylianShieldAndSheathNearDL[69] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldAndSheathNearDL.inc.c"
};

Gfx gLinkChildDekuShieldSwordAndSheathNearDL[85] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldSwordAndSheathNearDL.inc.c"
};

Gfx gLinkChildDekuShieldAndSheathNearDL[71] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldAndSheathNearDL.inc.c"
};

Gfx gLinkChildSwordAndSheathNearDL[56] = {
#include "assets/objects/object_link_child/gLinkChildSwordAndSheathNearDL.inc.c"
};

Gfx gLinkChildSheathNearDL[39] = {
#include "assets/objects/object_link_child/gLinkChildSheathNearDL.inc.c"
};

Gfx gLinkChildLeftHandHoldingMasterSwordDL[131] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandHoldingMasterSwordDL.inc.c"
};

Gfx gLinkChildRightHandAndOotNearDL[74] = {
#include "assets/objects/object_link_child/gLinkChildRightHandAndOotNearDL.inc.c"
};

Gfx gLinkChildRightHandHoldingFairyOcarinaNearDL[73] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingFairyOcarinaNearDL.inc.c"
};

Gfx gLinkChildRightHandHoldingSlingshotNearDL[60] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingSlingshotNearDL.inc.c"
};

Gfx gLinkChildLeftHandUpNearDL[41] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandUpNearDL.inc.c"
};

Gfx gLinkChildGoronBraceletDL[45] = {
#include "assets/objects/object_link_child/gLinkChildGoronBraceletDL.inc.c"
};

Gfx gLinkChildLeftHandFarDL[40] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandFarDL.inc.c"
};

Gfx gLinkChildLeftFistFarDL[36] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistFarDL.inc.c"
};

Gfx gLinkChildRightHandFarDL[40] = {
#include "assets/objects/object_link_child/gLinkChildRightHandFarDL.inc.c"
};

Gfx gLinkChildRightHandClosedFarDL[36] = {
#include "assets/objects/object_link_child/gLinkChildRightHandClosedFarDL.inc.c"
};

Gfx gLinkChildRightFistAndDekuShieldFarDL[57] = {
#include "assets/objects/object_link_child/gLinkChildRightFistAndDekuShieldFarDL.inc.c"
};

Gfx gLinkChildLeftFistAndBoomerangFarDL[50] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndBoomerangFarDL.inc.c"
};

Gfx gLinkChildHylianShieldSwordAndSheathFarDL[76] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldSwordAndSheathFarDL.inc.c"
};

Gfx gLinkChildHylianShieldAndSheathFarDL[62] = {
#include "assets/objects/object_link_child/gLinkChildHylianShieldAndSheathFarDL.inc.c"
};

Gfx gLinkChildDekuShieldSwordAndSheathFarDL[77] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldSwordAndSheathFarDL.inc.c"
};

Gfx gLinkChildDekuShieldAndSheathFarDL[66] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldAndSheathFarDL.inc.c"
};

Gfx gLinkChildSwordAndSheathFarDL[52] = {
#include "assets/objects/object_link_child/gLinkChildSwordAndSheathFarDL.inc.c"
};

Gfx gLinkChildSheathFarDL[38] = {
#include "assets/objects/object_link_child/gLinkChildSheathFarDL.inc.c"
};

Gfx gLinkChildLeftFistAndKokiriSwordFarDL[78] = {
#include "assets/objects/object_link_child/gLinkChildLeftFistAndKokiriSwordFarDL.inc.c"
};

Gfx gLinkChildRightHandHoldingOOTFarDL[74] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingOOTFarDL.inc.c"
};

Gfx gLinkChildRightHandHoldingFairyOcarinaFarDL[73] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingFairyOcarinaFarDL.inc.c"
};

Gfx gLinkChildRightHandHoldingSlingshotFarDL[57] = {
#include "assets/objects/object_link_child/gLinkChildRightHandHoldingSlingshotFarDL.inc.c"
};

Gfx gLinkChildLeftHandUpFarDL[41] = {
#include "assets/objects/object_link_child/gLinkChildLeftHandUpFarDL.inc.c"
};

Gfx gLinkChildRightArmStretchedSlingshotDL[134] = {
#include "assets/objects/object_link_child/gLinkChildRightArmStretchedSlingshotDL.inc.c"
};

Gfx gLinkChildBottleDL[33] = {
#include "assets/objects/object_link_child/gLinkChildBottleDL.inc.c"
};

Gfx gLinkChildDL_18580[25] = {
#include "assets/objects/object_link_child/gLinkChildDL_18580.inc.c"
};

Gfx gLinkChildBottle2DL[34] = {
#include "assets/objects/object_link_child/gLinkChildBottle2DL.inc.c"
};

// Far skeleton vertices and DLs

Vtx gLinkChildRightFootFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightFootFarVtx.inc.c"
};

Vtx gLinkChildRightShinFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightShinFarVtx.inc.c"
};

Vtx gLinkChildRightThighFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightThighFarVtx.inc.c"
};

Vtx gLinkChildLeftFootFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFootFarVtx.inc.c"
};

Vtx gLinkChildLeftShinFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftShinFarVtx.inc.c"
};

Vtx gLinkChildLeftThighFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftThighFarVtx.inc.c"
};

Vtx gLinkChildWaistFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildWaistFarVtx.inc.c"
};

Vtx gLinkChildHatFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHatFarVtx.inc.c"
};

Vtx gLinkChildHeadFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHeadFarVtx.inc.c"
};

Vtx gLinkChildCollarFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildCollarFarVtx.inc.c"
};

Vtx gLinkChildVtx_019E08[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_019E08.inc.c"
};

Vtx gLinkChildLeftForearmFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftForearmFarVtx.inc.c"
};

Vtx gLinkChildLeftShoulderFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftShoulderFarVtx.inc.c"
};

Vtx gLinkChildVtx_01A428[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01A428.inc.c"
};

Vtx gLinkChildRightForearmFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightForearmFarVtx.inc.c"
};

Vtx gLinkChildRightShoulderFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightShoulderFarVtx.inc.c"
};

Vtx gLinkChildVtx_01AA98[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01AA98.inc.c"
};

Vtx gLinkChildTorsoFarVtx[] = {
#include "assets/objects/object_link_child/gLinkChildTorsoFarVtx.inc.c"
};

Gfx gLinkChildWaistFarDL[70] = {
#include "assets/objects/object_link_child/gLinkChildWaistFarDL.inc.c"
};

Gfx gLinkChildRightThighFarDL[56] = {
#include "assets/objects/object_link_child/gLinkChildRightThighFarDL.inc.c"
};

Gfx gLinkChildRightShinFarDL[75] = {
#include "assets/objects/object_link_child/gLinkChildRightShinFarDL.inc.c"
};

Gfx gLinkChildRightFootFarDL[37] = {
#include "assets/objects/object_link_child/gLinkChildRightFootFarDL.inc.c"
};

Gfx gLinkChildLeftThighFarDL[56] = {
#include "assets/objects/object_link_child/gLinkChildLeftThighFarDL.inc.c"
};

Gfx gLinkChildLeftShinFarDL[75] = {
#include "assets/objects/object_link_child/gLinkChildLeftShinFarDL.inc.c"
};

Gfx gLinkChildLeftFootFarDL[37] = {
#include "assets/objects/object_link_child/gLinkChildLeftFootFarDL.inc.c"
};

Gfx gLinkChildCollarFarDL[12] = {
#include "assets/objects/object_link_child/gLinkChildCollarFarDL.inc.c"
};

Gfx gLinkChildTorsoFarDL[57] = {
#include "assets/objects/object_link_child/gLinkChildTorsoFarDL.inc.c"
};

Gfx gLinkChildHeadFarDL[161] = {
#include "assets/objects/object_link_child/gLinkChildHeadFarDL.inc.c"
};

Gfx gLinkChildHatFarDL[30] = {
#include "assets/objects/object_link_child/gLinkChildHatFarDL.inc.c"
};

Gfx gLinkChildRightShoulderFarDL[56] = {
#include "assets/objects/object_link_child/gLinkChildRightShoulderFarDL.inc.c"
};

Gfx gLinkChildRightForearmFarDL[38] = {
#include "assets/objects/object_link_child/gLinkChildRightForearmFarDL.inc.c"
};

Gfx gLinkChildLeftShoulderFarDL[56] = {
#include "assets/objects/object_link_child/gLinkChildLeftShoulderFarDL.inc.c"
};

Gfx gLinkChildLeftForearmFarDL[38] = {
#include "assets/objects/object_link_child/gLinkChildLeftForearmFarDL.inc.c"
};

// Near skeleton vertices and DLs

Vtx gLinkChildRightFootNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightFootNearVtx.inc.c"
};

Vtx gLinkChildRightShinNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightShinNearVtx.inc.c"
};

Vtx gLinkChildRightThighNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightThighNearVtx.inc.c"
};

Vtx gLinkChildLeftFootNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftFootNearVtx.inc.c"
};

Vtx gLinkChildLeftShinNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftShinNearVtx.inc.c"
};

Vtx gLinkChildLeftThighNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftThighNearVtx.inc.c"
};

Vtx gLinkChildWaistNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildWaistNearVtx.inc.c"
};

Vtx gLinkChildHatNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHatNearVtx.inc.c"
};

Vtx gLinkChildHeadNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildHeadNearVtx.inc.c"
};

Vtx gLinkChildCollarNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildCollarNearVtx.inc.c"
};

Vtx gLinkChildVtx_01EB38[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01EB38.inc.c"
};

Vtx gLinkChildLeftForearmNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftForearmNearVtx.inc.c"
};

Vtx gLinkChildLeftShoulderNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildLeftShoulderNearVtx.inc.c"
};

Vtx gLinkChildVtx_01F2B8[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01F2B8.inc.c"
};

Vtx gLinkChildRightForearmNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightForearmNearVtx.inc.c"
};

Vtx gLinkChildRightShoulderNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildRightShoulderNearVtx.inc.c"
};

Vtx gLinkChildVtx_01FA28[] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01FA28.inc.c"
};

Vtx gLinkChildTorsoNearVtx[] = {
#include "assets/objects/object_link_child/gLinkChildTorsoNearVtx.inc.c"
};

Gfx gLinkChildWaistNearDL[73] = {
#include "assets/objects/object_link_child/gLinkChildWaistNearDL.inc.c"
};

Gfx gLinkChildRightThighNearDL[63] = {
#include "assets/objects/object_link_child/gLinkChildRightThighNearDL.inc.c"
};

Gfx gLinkChildRightShinNearDL[82] = {
#include "assets/objects/object_link_child/gLinkChildRightShinNearDL.inc.c"
};

Gfx gLinkChildRightFootNearDL[44] = {
#include "assets/objects/object_link_child/gLinkChildRightFootNearDL.inc.c"
};

Gfx gLinkChildLeftThighNearDL[63] = {
#include "assets/objects/object_link_child/gLinkChildLeftThighNearDL.inc.c"
};

Gfx gLinkChildLeftShinNearDL[82] = {
#include "assets/objects/object_link_child/gLinkChildLeftShinNearDL.inc.c"
};

Gfx gLinkChildLeftFootNearDL[44] = {
#include "assets/objects/object_link_child/gLinkChildLeftFootNearDL.inc.c"
};

Gfx gLinkChildCollarNearDL[14] = {
#include "assets/objects/object_link_child/gLinkChildCollarNearDL.inc.c"
};

Gfx gLinkChildTorsoNearDL[70] = {
#include "assets/objects/object_link_child/gLinkChildTorsoNearDL.inc.c"
};

Gfx gLinkChildHeadNearDL[202] = {
#include "assets/objects/object_link_child/gLinkChildHeadNearDL.inc.c"
};

Gfx gLinkChildHatNearDL[39] = {
#include "assets/objects/object_link_child/gLinkChildHatNearDL.inc.c"
};

Gfx gLinkChildRightShoulderNearDL[58] = {
#include "assets/objects/object_link_child/gLinkChildRightShoulderNearDL.inc.c"
};

Gfx gLinkChildRightForearmNearDL[44] = {
#include "assets/objects/object_link_child/gLinkChildRightForearmNearDL.inc.c"
};

Gfx gLinkChildLeftShoulderNearDL[58] = {
#include "assets/objects/object_link_child/gLinkChildLeftShoulderNearDL.inc.c"
};

Gfx gLinkChildLeftForearmNearDL[44] = {
#include "assets/objects/object_link_child/gLinkChildLeftForearmNearDL.inc.c"
};

// Slingshot string

Vtx gLinkChildSlingshotStringVtx[] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotStringVtx.inc.c"
};

Gfx gLinkChildSlingshotStringDL[12] = {
#include "assets/objects/object_link_child/gLinkChildSlingshotStringDL.inc.c"
};

// Deku shield

Vtx gLinkChildDekuShieldVtx[] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldVtx.inc.c"
};

Gfx gLinkChildDekuShieldDL[42] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldDL.inc.c"
};

Mtx gLinkChildDekuShieldMtx =
#include "assets/objects/object_link_child/gLinkChildDekuShieldMtx.inc.c"
    ;

Gfx gLinkChildDekuShieldWithMatrixDL[3] = {
#include "assets/objects/object_link_child/gLinkChildDekuShieldWithMatrixDL.inc.c"
};

// Masks

#define gLinkChildSpookyMaskTex_WIDTH 32
#define gLinkChildSpookyMaskTex_HEIGHT 64
u64 gLinkChildSpookyMaskTex[TEX_LEN(u64, gLinkChildSpookyMaskTex_WIDTH, gLinkChildSpookyMaskTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildSpookyMaskTex.ia16.inc.c"
};

#define gLinkChildKeatonMaskEyeBrowTex_WIDTH 32
#define gLinkChildKeatonMaskEyeBrowTex_HEIGHT 16
u64 gLinkChildKeatonMaskEyeBrowTex[TEX_LEN(u64, gLinkChildKeatonMaskEyeBrowTex_WIDTH,
                                           gLinkChildKeatonMaskEyeBrowTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildKeatonMaskEyeBrowTex.rgba16.inc.c"
};

#define gLinkChildKeatonMaskEarTex_WIDTH 8
#define gLinkChildKeatonMaskEarTex_HEIGHT 8
u64 gLinkChildKeatonMaskEarTex[TEX_LEN(u64, gLinkChildKeatonMaskEarTex_WIDTH, gLinkChildKeatonMaskEarTex_HEIGHT,
                                       16)] = {
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
u64 gLinkChildMaskOfTruthCurveTex[TEX_LEN(u64, gLinkChildMaskOfTruthCurveTex_WIDTH,
                                          gLinkChildMaskOfTruthCurveTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildMaskOfTruthCurveTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskMouthTex_WIDTH 64
#define gLinkChildGoronMaskMouthTex_HEIGHT 32
u64 gLinkChildGoronMaskMouthTex[TEX_LEN(u64, gLinkChildGoronMaskMouthTex_WIDTH, gLinkChildGoronMaskMouthTex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskEyeTex_WIDTH 32
#define gLinkChildGoronMaskEyeTex_HEIGHT 32
u64 gLinkChildGoronMaskEyeTex[TEX_LEN(u64, gLinkChildGoronMaskEyeTex_WIDTH, gLinkChildGoronMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskNoseTex_WIDTH 8
#define gLinkChildGoronMaskNoseTex_HEIGHT 8
u64 gLinkChildGoronMaskNoseTex[TEX_LEN(u64, gLinkChildGoronMaskNoseTex_WIDTH, gLinkChildGoronMaskNoseTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskNoseTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskHairTex_WIDTH 16
#define gLinkChildGoronMaskHairTex_HEIGHT 16
u64 gLinkChildGoronMaskHairTex[TEX_LEN(u64, gLinkChildGoronMaskHairTex_WIDTH, gLinkChildGoronMaskHairTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskHairTex.rgba16.inc.c"
};

#define gLinkChildSkullMaskTeethTex_WIDTH 8
#define gLinkChildSkullMaskTeethTex_HEIGHT 8
u64 gLinkChildSkullMaskTeethTex[TEX_LEN(u64, gLinkChildSkullMaskTeethTex_WIDTH, gLinkChildSkullMaskTeethTex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskTeethTex.rgba16.inc.c"
};

#define gLinkChildGoronMaskEarTex_WIDTH 8
#define gLinkChildGoronMaskEarTex_HEIGHT 8
u64 gLinkChildGoronMaskEarTex[TEX_LEN(u64, gLinkChildGoronMaskEarTex_WIDTH, gLinkChildGoronMaskEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildGoronMaskEarTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEyeBoarderTex_WIDTH 8
#define gLinkChildZoraMaskEyeBoarderTex_HEIGHT 8
u64 gLinkChildZoraMaskEyeBoarderTex[TEX_LEN(u64, gLinkChildZoraMaskEyeBoarderTex_WIDTH,
                                            gLinkChildZoraMaskEyeBoarderTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeBoarderTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEarTex_WIDTH 32
#define gLinkChildZoraMaskEarTex_HEIGHT 32
u64 gLinkChildZoraMaskEarTex[TEX_LEN(u64, gLinkChildZoraMaskEarTex_WIDTH, gLinkChildZoraMaskEarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEarTex.rgba16.inc.c"
};

#define gLinkChildSkullMaskNoseTex_WIDTH 8
#define gLinkChildSkullMaskNoseTex_HEIGHT 8
u64 gLinkChildSkullMaskNoseTex[TEX_LEN(u64, gLinkChildSkullMaskNoseTex_WIDTH, gLinkChildSkullMaskNoseTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildSkullMaskNoseTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskEyeTex_WIDTH 32
#define gLinkChildZoraMaskEyeTex_HEIGHT 32
u64 gLinkChildZoraMaskEyeTex[TEX_LEN(u64, gLinkChildZoraMaskEyeTex_WIDTH, gLinkChildZoraMaskEyeTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildZoraMaskMouthTex_WIDTH 32
#define gLinkChildZoraMaskMouthTex_HEIGHT 32
u64 gLinkChildZoraMaskMouthTex[TEX_LEN(u64, gLinkChildZoraMaskMouthTex_WIDTH, gLinkChildZoraMaskMouthTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildZoraMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskEyeTex_WIDTH 32
#define gLinkChildGerudoMaskEyeTex_HEIGHT 32
u64 gLinkChildGerudoMaskEyeTex[TEX_LEN(u64, gLinkChildGerudoMaskEyeTex_WIDTH, gLinkChildGerudoMaskEyeTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskEyeTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskMouthTex_WIDTH 16
#define gLinkChildGerudoMaskMouthTex_HEIGHT 16
u64 gLinkChildGerudoMaskMouthTex[TEX_LEN(u64, gLinkChildGerudoMaskMouthTex_WIDTH, gLinkChildGerudoMaskMouthTex_HEIGHT,
                                         16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskMouthTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskHairTex_WIDTH 16
#define gLinkChildGerudoMaskHairTex_HEIGHT 16
u64 gLinkChildGerudoMaskHairTex[TEX_LEN(u64, gLinkChildGerudoMaskHairTex_WIDTH, gLinkChildGerudoMaskHairTex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_child/gLinkChildGerudoMaskHairTex.rgba16.inc.c"
};

#define gLinkChildGerudoMaskNoseTex_WIDTH 8
#define gLinkChildGerudoMaskNoseTex_HEIGHT 8
u64 gLinkChildGerudoMaskNoseTex[TEX_LEN(u64, gLinkChildGerudoMaskNoseTex_WIDTH, gLinkChildGerudoMaskNoseTex_HEIGHT,
                                        16)] = {
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

// Skeleton

LodLimb gLinkChildRootLimb = {
#include "assets/objects/object_link_child/gLinkChildRootLimb.inc.c"
};

LodLimb gLinkChildWaistLimb = {
#include "assets/objects/object_link_child/gLinkChildWaistLimb.inc.c"
};

LodLimb gLinkChildLowerControlLimb = {
#include "assets/objects/object_link_child/gLinkChildLowerControlLimb.inc.c"
};

LodLimb gLinkChildRightThighLimb = {
#include "assets/objects/object_link_child/gLinkChildRightThighLimb.inc.c"
};

LodLimb gLinkChildRightShinLimb = {
#include "assets/objects/object_link_child/gLinkChildRightShinLimb.inc.c"
};

LodLimb gLinkChildRightFootLimb = {
#include "assets/objects/object_link_child/gLinkChildRightFootLimb.inc.c"
};

LodLimb gLinkChildLeftThighLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftThighLimb.inc.c"
};

LodLimb gLinkChildLeftShinLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftShinLimb.inc.c"
};

LodLimb gLinkChildLeftFootLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftFootLimb.inc.c"
};

LodLimb gLinkChildUpperControlLimb = {
#include "assets/objects/object_link_child/gLinkChildUpperControlLimb.inc.c"
};

LodLimb gLinkChildHeadLimb = {
#include "assets/objects/object_link_child/gLinkChildHeadLimb.inc.c"
};

LodLimb gLinkChildHatLimb = {
#include "assets/objects/object_link_child/gLinkChildHatLimb.inc.c"
};

LodLimb gLinkChildCollarLimb = {
#include "assets/objects/object_link_child/gLinkChildCollarLimb.inc.c"
};

LodLimb gLinkChildLeftshoulderLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftshoulderLimb.inc.c"
};

LodLimb gLinkChildLeftForearmLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftForearmLimb.inc.c"
};

LodLimb gLinkChildLeftHandLimb = {
#include "assets/objects/object_link_child/gLinkChildLeftHandLimb.inc.c"
};

LodLimb gLinkChildRightshoulderLimb = {
#include "assets/objects/object_link_child/gLinkChildRightshoulderLimb.inc.c"
};

LodLimb gLinkChildRightForearmLimb = {
#include "assets/objects/object_link_child/gLinkChildRightForearmLimb.inc.c"
};

LodLimb gLinkChildRightHandLimb = {
#include "assets/objects/object_link_child/gLinkChildRightHandLimb.inc.c"
};

LodLimb gLinkChildSwordAndSheathLimb = {
#include "assets/objects/object_link_child/gLinkChildSwordAndSheathLimb.inc.c"
};

LodLimb gLinkChildTorsoLimb = {
#include "assets/objects/object_link_child/gLinkChildTorsoLimb.inc.c"
};

void* gLinkChildLimbs[] = {
#include "assets/objects/object_link_child/gLinkChildLimbs.inc.c"
};

FlexSkeletonHeader gLinkChildSkel = {
#include "assets/objects/object_link_child/gLinkChildSkel.inc.c"
};
*/
#include "ultra64.h"
#include "z64.h"
#include "object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
static Vtx gLinkChildVtx_01EB38[39];
static Vtx gLinkChildVtx_01F2B8[39];
static Vtx gLinkChildVtx_01FA28[62];

u64 gLinkChildEyesOpenTex[] = {
#include "assets/objects/object_link_child/eyes_open.ci8.inc.c"
};

u64 gLinkChildEyesHalfTex[] = {
#include "assets/objects/object_link_child/eyes_half.ci8.inc.c"
};

u64 gLinkChildEyesClosedfTex[] = {
#include "assets/objects/object_link_child/eyes_closed.ci8.inc.c"
};

u64 gLinkChildEyesLeftTex[] = {
#include "assets/objects/object_link_child/eyes_left.ci8.inc.c"
};

u64 gLinkChildEyesRightTex[] = {
#include "assets/objects/object_link_child/eyes_right.ci8.inc.c"
};

u64 gLinkChildEyesWideTex[] = {
#include "assets/objects/object_link_child/eyes_wide.ci8.inc.c"
};

u64 gLinkChildEyesDownTex[] = {
#include "assets/objects/object_link_child/eyes_down.ci8.inc.c"
};

u64 gLinkChildEyesWincingTex[] = {
#include "assets/objects/object_link_child/eyes_wincing.ci8.inc.c"
};

u64 gLinkChildMouthClosedTex[] = {
#include "assets/objects/object_link_child/mouth_closed.ci8.inc.c"
};

u64 gLinkChildMouthHalfTex[] = {
#include "assets/objects/object_link_child/mouth_half.ci8.inc.c"
};

u64 gLinkChildMouthOpenTex[] = {
#include "assets/objects/object_link_child/mouth_open.ci8.inc.c"
};

u64 gLinkChildMouthSmileTex[] = {
#include "assets/objects/object_link_child/mouth_smile.ci8.inc.c"
};

u64 gLinkChildNoseTex[] = {
#include "assets/objects/object_link_child/nose.ci8.inc.c"
};

u64 gLinkChildEarTex[] = {
#include "assets/objects/object_link_child/ear.ci8.inc.c"
};

u64 gLinkChildBeltTLUT[] = {
#include "assets/objects/object_link_child/belt_tlut.rgba16.inc.c"
};

u64 gLinkChildSkinTLUT[] = {
#include "assets/objects/object_link_child/skin_tlut.rgba16.inc.c"
};

u64 gLinkChildLowerBootTex[] = {
#include "assets/objects/object_link_child/lower_boot.ci8.inc.c"
};

u64 gLinkChildBootTex[] = {
#include "assets/objects/object_link_child/boot.ci8.inc.c"
};

u64 gLinkChildWaistTex[] = {
#include "assets/objects/object_link_child/waist.i8.inc.c"
};

u64 gLinkChildBeltTex[] = {
#include "assets/objects/object_link_child/belt.ci8.inc.c"
};

u64 gLinkChildBeltClaspTex[] = {
#include "assets/objects/object_link_child/belt_clasp.ci8.inc.c"
};

Vtx object_link_childVtx_006A80[] = {
#include "assets/objects/object_link_child/object_link_childVtx_006A80.vtx.inc"
};

Gfx gLinkChildLinkDekuStickDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 247, 164, 109, 255),
    gsSPVertex(object_link_childVtx_006A80, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(7, 3, 5, 0, 0, 8, 1, 0),
    gsSP2Triangles(5, 4, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 11, 7, 0),
    gsSP2Triangles(12, 0, 2, 0, 12, 11, 0, 0),
    gsSP2Triangles(13, 6, 14, 0, 15, 2, 6, 0),
    gsSP2Triangles(16, 3, 7, 0, 14, 3, 16, 0),
    gsSP2Triangles(17, 4, 6, 0, 2, 1, 17, 0),
    gsSP2Triangles(1, 8, 18, 0, 18, 8, 5, 0),
    gsSP2Triangles(18, 5, 10, 0, 19, 20, 4, 0),
    gsSP2Triangles(19, 4, 17, 0, 17, 21, 19, 0),
    gsSP2Triangles(1, 18, 22, 0, 17, 1, 21, 0),
    gsSP2Triangles(17, 6, 2, 0, 6, 3, 14, 0),
    gsSP2Triangles(15, 12, 2, 0, 7, 11, 16, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_link_childVtx_006A80[23], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 11, 12, 0),
    gsSPEndDisplayList(),
};

u64 gLinkChildFairyOcarinaTex[] = {
#include "assets/objects/object_link_child/fairy_ocarina.rgba16.inc.c"
};

u64 gLinkChildGoronBraceletTex[] = {
#include "assets/objects/object_link_child/goron_bracelet.rgba16.inc.c"
};

u64 gLinkChildGoronSymbolTex[] = {
#include "assets/objects/object_link_child/goron_symbol.ia16.inc.c"
};

u64 gLinkChildDekuShieldBackTex[] = {
#include "assets/objects/object_link_child/deku_shield_back.rgba16.inc.c"
};

u64 gLinkChildDekuShieldFrontTex[] = {
#include "assets/objects/object_link_child/deku_shield_front.rgba16.inc.c"
};

u64 gLinkChildHylianShieldBackTex[] = {
#include "assets/objects/object_link_child/hylian_shield_back.rgba16.inc.c"
};

u64 gLinkChildSlingshotTex[] = {
#include "assets/objects/object_link_child/slingshot.rgba16.inc.c"
};

u64 gLinkChildSlingshotSeedTex[] = {
#include "assets/objects/object_link_child/slingshot_seed.rgba16.inc.c"
};

u64 gLinkChildHandTLUT[] = {
#include "assets/objects/object_link_child/hand_tlut.rgba16.inc.c"
};

u64 gLinkChildSwordsTLUT[] = {
#include "assets/objects/object_link_child/swords_tlut.rgba16.inc.c"
};

u64 gLinkChildSwordTLUT[] = {
#include "assets/objects/object_link_child/sword_tlut.rgba16.inc.c"
};

u64 gLinkChildHandTex[] = {
#include "assets/objects/object_link_child/hand.ci8.inc.c"
};

u64 gLinkChildKokiriSwordSheathTex[] = {
#include "assets/objects/object_link_child/kokiri_sword_sheath.ci8.inc.c"
};

u64 gLinkChildSwordJewelTex[] = {
#include "assets/objects/object_link_child/sword_jewel.ci8.inc.c"
};

u64 gLinkChildMasterSwordPommelTex[] = {
#include "assets/objects/object_link_child/master_sword_pommel.ci8.inc.c"
};

u64 gLinkChildMasterSwordGuardTex[] = {
#include "assets/objects/object_link_child/master_sword_guard.ci8.inc.c"
};

u64 gLinkChildMasterSwordEmblemTex[] = {
#include "assets/objects/object_link_child/master_sword_emblem.ci8.inc.c"
};

Vtx object_link_childVtx_00ABF0[] = {
#include "assets/objects/object_link_child/object_link_childVtx_00ABF0.vtx.inc"
};

Gfx gLinkChildLeftHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00ABF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 4, 1, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(2, 7, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 11, 9, 8, 0),
    gsSP2Triangles(19, 12, 11, 0, 20, 21, 22, 0),
    gsSP2Triangles(6, 7, 4, 0, 4, 7, 2, 0),
    gsSP2Triangles(3, 5, 0, 0, 23, 24, 25, 0),
    gsSP2Triangles(17, 26, 18, 0, 27, 28, 22, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 8, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 13, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(8, 10, 6, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 3, 5, 0, 1, 0, 13, 0),
    gsSP2Triangles(14, 13, 0, 0, 15, 4, 3, 0),
    gsSP2Triangles(16, 17, 14, 0, 15, 5, 4, 0),
    gsSP2Triangles(18, 19, 20, 0, 14, 17, 13, 0),
    gsSP2Triangles(19, 18, 21, 0, 15, 22, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[54], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[86], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistAndKokiriSwordNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[92], 19, 0),
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
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[111], 31, 0),
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
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[142], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[145], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 3, 5, 0),
    gsSP2Triangles(2, 1, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 7, 6, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[172], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 0, 2, 0, 8, 7, 11, 0),
    gsSP2Triangles(12, 10, 2, 0, 13, 6, 8, 0),
    gsSP2Triangles(6, 13, 14, 0, 0, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(19, 13, 20, 0, 18, 13, 19, 0),
    gsSP2Triangles(0, 10, 12, 0, 18, 14, 13, 0),
    gsSP2Triangles(13, 8, 20, 0, 19, 20, 5, 0),
    gsSP2Triangles(5, 9, 19, 0, 21, 4, 3, 0),
    gsSP2Triangles(17, 8, 11, 0, 20, 8, 17, 0),
    gsSP2Triangles(11, 22, 17, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 27, 29, 0),
    gsSP2Triangles(17, 22, 18, 0, 16, 3, 17, 0),
    gsSP2Triangles(9, 21, 16, 0, 20, 17, 3, 0),
    gsSP2Triangles(16, 19, 9, 0, 5, 20, 3, 0),
    gsSP2Triangles(3, 16, 21, 0, 4, 21, 9, 0),
    gsSP2Triangles(24, 29, 25, 0, 25, 27, 26, 0),
    gsSP2Triangles(29, 24, 28, 0, 24, 23, 30, 0),
    gsSP2Triangles(30, 28, 24, 0, 28, 30, 26, 0),
    gsSP2Triangles(25, 26, 23, 0, 26, 30, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[203], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[235], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightFistAndDekuShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[241], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[249], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(1, 0, 16, 0, 13, 15, 8, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 8, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(16, 0, 23, 0, 25, 26, 27, 0),
    gsSP1Triangle(7, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[279], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[288], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 10, 16, 0, 17, 10, 14, 0),
    gsSP2Triangles(18, 14, 19, 0, 17, 14, 18, 0),
    gsSP2Triangles(8, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 10, 17, 16, 0),
    gsSP2Triangles(12, 26, 10, 0, 12, 14, 26, 0),
    gsSP2Triangles(26, 14, 10, 0, 8, 21, 6, 0),
    gsSP2Triangles(6, 21, 27, 0, 27, 21, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistAndBoomerangNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[320], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[323], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[353], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[356], 15, 0),
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
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[371], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[403], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHylianShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[409], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildHylianShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[419], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 5, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[425], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[436], 24, 0),
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

Gfx gLinkChildHylianShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[460], 11, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[471], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[475], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildHylianShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[485], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildDekuShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[491], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[499], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 5, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 0, 0, 23, 0, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[523], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[534], 24, 0),
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

Gfx gLinkChildDekuShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[558], 11, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[569], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[573], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[581], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 5, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 0, 0, 23, 0, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[605], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[616], 24, 0),
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

Gfx gLinkChildSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[640], 11, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[651], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftHandHoldingMasterSwordDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[655], 27, 0),
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
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[682], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[685], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[716], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildMasterSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[736], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMasterSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[755], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[786], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMasterSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[804], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandAndOotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[818], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[848], 23, 0),
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
    gsDPLoadTextureBlock(gOcarinaofTimeDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[871], 23, 0),
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

Gfx gLinkChildRightHandHoldingFairyOcarinaNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildFairyOcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[894], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[926], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[930], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[960], 23, 0),
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

Gfx gLinkChildRightHandHoldingSlingshotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[983], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[1015], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[1023], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 16, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 17, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1055], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 6, 9, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftHandUpNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1067], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 1, 3, 0, 6, 5, 4, 0),
    gsSP2Triangles(0, 3, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 5, 13, 14, 0),
    gsSP2Triangles(10, 12, 15, 0, 16, 10, 15, 0),
    gsSP2Triangles(2, 17, 18, 0, 6, 13, 5, 0),
    gsSP2Triangles(16, 19, 10, 0, 20, 2, 21, 0),
    gsSP2Triangles(15, 22, 16, 0, 2, 20, 17, 0),
    gsSP2Triangles(16, 23, 19, 0, 22, 23, 16, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 11, 26, 0),
    gsSP2Triangles(10, 27, 11, 0, 10, 19, 27, 0),
    gsSP2Triangles(6, 28, 13, 0, 29, 15, 12, 0),
    gsSP2Triangles(22, 29, 24, 0, 22, 15, 29, 0),
    gsSP2Triangles(1, 21, 2, 0, 1, 5, 21, 0),
    gsSP2Triangles(11, 30, 12, 0, 31, 14, 13, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1099], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGoronBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1106], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1109], 14, 0),
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
    gsDPLoadTextureBlock(gLinkChildGoronSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[2238], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightArmStretchedSlingshotDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1935], 30, 0),
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
    gsDPLoadTextureBlock(gLinkChildSlingshotSeedTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[1965], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[1997], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[2029], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[2060], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[2090], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 11, 10, 0),
    gsSP2Triangles(18, 12, 11, 0, 18, 19, 12, 0),
    gsSP2Triangles(18, 14, 19, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2121], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[2153], 32, 0),
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
    gsSPVertex(&object_link_childVtx_00ABF0[2183], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 0, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 6, 5, 0, 13, 17, 15, 0),
    gsSP2Triangles(18, 16, 19, 0, 18, 6, 16, 0),
    gsSP1Triangle(12, 14, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_childVtx_00ABF0[2204], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2207], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 7, 6, 0),
    gsSP2Triangles(9, 7, 1, 0, 2, 6, 10, 0),
    gsSP2Triangles(6, 2, 1, 0, 5, 11, 3, 0),
    gsSP2Triangles(5, 12, 11, 0, 10, 5, 2, 0),
    gsSP1Triangle(10, 12, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_00ABF0[2220], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 6, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildDL_18580[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[2246], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2249], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2279], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildBottle2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_childVtx_00ABF0[2282], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2285], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 7, 6, 0),
    gsSP2Triangles(9, 7, 1, 0, 2, 6, 10, 0),
    gsSP2Triangles(6, 2, 1, 0, 5, 11, 3, 0),
    gsSP2Triangles(5, 12, 11, 0, 10, 5, 2, 0),
    gsSP1Triangle(10, 12, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_00ABF0[2298], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 6, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_01C978[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01C978.vtx.inc"
};

static Vtx gLinkChildVtx_01EB38[39] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01EB38.vtx.inc"
};

Vtx object_link_childVtx_01EDA8[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01EDA8.vtx.inc"
};

static Vtx gLinkChildVtx_01F2B8[39] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01F2B8.vtx.inc"
};

Vtx object_link_childVtx_01F528[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01F528.vtx.inc"
};

static Vtx gLinkChildVtx_01FA28[62] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01FA28.vtx.inc"
};

Vtx object_link_childVtx_01FE08[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01FE08.vtx.inc"
};

Gfx gLinkChildWaistNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[267], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 8, 9, 6, 0),
    gsSP2Triangles(1, 10, 6, 0, 5, 11, 3, 0),
    gsSP2Triangles(11, 7, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(9, 15, 16, 0, 17, 5, 4, 0),
    gsSP2Triangles(18, 19, 0, 0, 2, 1, 6, 0),
    gsSP2Triangles(20, 2, 6, 0, 16, 21, 22, 0),
    gsSP2Triangles(16, 22, 9, 0, 8, 15, 9, 0),
    gsSP2Triangles(2, 18, 0, 0, 17, 4, 22, 0),
    gsSP2Triangles(17, 22, 21, 0, 14, 17, 21, 0),
    gsSP2Triangles(14, 21, 12, 0, 6, 10, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[290], 19, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(8, 4, 3, 0, 5, 13, 3, 0),
    gsSP2Triangles(11, 10, 3, 0, 9, 5, 4, 0),
    gsSP2Triangles(12, 14, 10, 0, 3, 10, 14, 0),
    gsSP1Triangle(3, 13, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltClaspTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[84], 10, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[94], 19, 10),
    gsSP2Triangles(9, 10, 11, 0, 5, 12, 8, 0),
    gsSP2Triangles(13, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(16, 1, 2, 0, 17, 2, 7, 0),
    gsSP2Triangles(0, 1, 18, 0, 0, 19, 20, 0),
    gsSP2Triangles(21, 4, 0, 0, 6, 3, 22, 0),
    gsSP2Triangles(6, 23, 24, 0, 25, 5, 6, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 7, 9, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[113], 2, 10),
    gsSP1Triangle(6, 10, 11, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[115], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 6, 5, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 10, 14, 15, 0),
    gsSP2Triangles(15, 16, 10, 0, 10, 16, 11, 0),
    gsSP2Triangles(17, 18, 15, 0, 14, 17, 15, 0),
    gsSP2Triangles(13, 12, 18, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShinNearDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[36], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[41], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 1, 3, 0),
    gsSP2Triangles(0, 8, 9, 0, 0, 10, 2, 0),
    gsSP2Triangles(1, 11, 12, 0, 3, 2, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 16, 0, 4, 0),
    gsSP2Triangles(17, 18, 1, 0, 4, 1, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[56], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(12, 2, 3, 0, 8, 11, 12, 0),
    gsSP2Triangles(12, 3, 8, 0, 13, 4, 14, 0),
    gsSP2Triangles(14, 4, 15, 0, 11, 8, 9, 0),
    gsSP2Triangles(4, 5, 16, 0, 6, 3, 1, 0),
    gsSP2Triangles(17, 9, 7, 0, 6, 1, 13, 0),
    gsSP2Triangles(4, 16, 15, 0, 13, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(24, 27, 22, 0, 26, 19, 18, 0),
    gsSP2Triangles(19, 26, 25, 0, 24, 23, 20, 0),
    gsSP2Triangles(22, 27, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightFootNearDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01C978, 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[5], 19, 5),
    gsSP2Triangles(5, 0, 4, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 4, 3, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 15, 16, 1, 0),
    gsSP2Triangles(17, 18, 3, 0, 19, 3, 2, 0),
    gsSP2Triangles(20, 21, 2, 0, 4, 22, 23, 0),
    gsSPVertex(&object_link_childVtx_01C978[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 9, 10, 5, 0),
    gsSP2Triangles(4, 3, 7, 0, 3, 2, 7, 0),
    gsSP2Triangles(9, 11, 6, 0, 11, 9, 5, 0),
    gsSP2Triangles(5, 4, 11, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 7, 6, 4, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[218], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[228], 19, 10),
    gsSP2Triangles(10, 11, 8, 0, 0, 12, 6, 0),
    gsSP2Triangles(13, 5, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(9, 3, 2, 0, 9, 2, 16, 0),
    gsSP2Triangles(17, 18, 2, 0, 19, 2, 1, 0),
    gsSP2Triangles(1, 5, 20, 0, 21, 22, 4, 0),
    gsSP2Triangles(23, 4, 7, 0, 24, 25, 7, 0),
    gsSP2Triangles(26, 27, 1, 0, 8, 9, 28, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[247], 1, 10),
    gsSP1Triangle(7, 6, 10, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[248], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 1, 4, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 11, 13, 0, 14, 15, 10, 0),
    gsSP2Triangles(10, 16, 14, 0, 9, 16, 10, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 15, 0),
    gsSP2Triangles(17, 12, 13, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShinNearDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[170], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[175], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 3, 1, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 10, 0, 0),
    gsSP2Triangles(11, 12, 1, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 2, 0, 4, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 19, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[190], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(11, 4, 12, 0, 12, 9, 8, 0),
    gsSP2Triangles(3, 0, 13, 0, 13, 11, 8, 0),
    gsSP2Triangles(8, 3, 13, 0, 14, 7, 15, 0),
    gsSP2Triangles(16, 6, 17, 0, 12, 8, 11, 0),
    gsSP2Triangles(12, 4, 6, 0, 1, 3, 10, 0),
    gsSP2Triangles(9, 12, 16, 0, 15, 1, 10, 0),
    gsSP2Triangles(16, 12, 6, 0, 7, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 22, 0, 20, 19, 25, 0),
    gsSP2Triangles(26, 25, 19, 0, 18, 23, 22, 0),
    gsSP2Triangles(26, 27, 24, 0, 23, 18, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFootNearDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[134], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[139], 19, 5),
    gsSP2Triangles(4, 0, 5, 0, 0, 1, 6, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 3, 0),
    gsSP2Triangles(11, 3, 4, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 1, 2, 0, 1, 15, 16, 0),
    gsSP2Triangles(2, 3, 17, 0, 2, 18, 19, 0),
    gsSP2Triangles(2, 20, 21, 0, 22, 23, 4, 0),
    gsSPVertex(&object_link_childVtx_01C978[158], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 0, 3, 0),
    gsSP2Triangles(8, 11, 9, 0, 4, 9, 11, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 10, 6, 0),
    gsSP2Triangles(5, 11, 8, 0, 5, 8, 7, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildCollarNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[530], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 2, 4, 6, 0),
    gsSP2Triangles(7, 5, 4, 0, 8, 5, 7, 0),
    gsSP2Triangles(0, 9, 1, 0, 0, 2, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildTorsoNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01FE08, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 8, 9, 0, 9, 8, 5, 0),
    gsSP2Triangles(2, 7, 0, 0, 1, 3, 2, 0),
    gsSP2Triangles(5, 4, 9, 0, 6, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01FE08[10], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(4, 12, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(7, 16, 14, 0, 17, 18, 6, 0),
    gsSP2Triangles(8, 13, 19, 0, 8, 20, 21, 0),
    gsSP2Triangles(22, 17, 21, 0, 1, 17, 22, 0),
    gsSP2Triangles(23, 19, 24, 0, 19, 23, 25, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 8, 25, 0),
    gsSP2Triangles(9, 14, 16, 0, 27, 16, 28, 0),
    gsSP2Triangles(29, 27, 28, 0, 10, 0, 12, 0),
    gsSP2Triangles(10, 12, 30, 0, 29, 28, 18, 0),
    gsSP2Triangles(18, 17, 1, 0, 10, 30, 31, 0),
    gsSP2Triangles(16, 18, 28, 0, 0, 29, 1, 0),
    gsSP2Triangles(10, 9, 27, 0, 3, 12, 4, 0),
    gsSPVertex(&object_link_childVtx_01FE08[42], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 7, 0, 18, 2, 19, 0),
    gsSP2Triangles(20, 13, 15, 0, 21, 22, 4, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 9, 0, 28, 29, 17, 0),
    gsSP2Triangles(30, 31, 8, 0, 7, 14, 16, 0),
    gsSP2Triangles(8, 17, 30, 0, 25, 12, 5, 0),
    gsSP2Triangles(6, 11, 15, 0, 2, 18, 0, 0),
    gsSP1Triangle(0, 20, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHeadNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[347], 5, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[352], 24, 5),
    gsSP2Triangles(5, 0, 1, 0, 6, 7, 3, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 1, 0),
    gsSP2Triangles(12, 1, 3, 0, 13, 4, 2, 0),
    gsSP2Triangles(2, 14, 15, 0, 2, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 3, 4, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(23, 20, 28, 0, 28, 25, 27, 0),
    gsSP1Triangle(28, 27, 23, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01C978[376], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 6, 9, 0),
    gsSP2Triangles(4, 2, 9, 0, 8, 4, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 3, 4, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 14, 17, 0),
    gsSP2Triangles(17, 8, 7, 0, 7, 16, 17, 0),
    gsSP2Triangles(3, 11, 0, 0, 13, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_01C978[394], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 6, 9, 0, 8, 9, 6, 0),
    gsSP2Triangles(12, 7, 6, 0, 13, 1, 6, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 10, 14, 0),
    gsSP2Triangles(17, 15, 14, 0, 16, 18, 10, 0),
    gsSP2Triangles(18, 19, 10, 0, 15, 17, 20, 0),
    gsSP2Triangles(21, 15, 22, 0, 0, 23, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 16, 15, 25, 0),
    gsSP2Triangles(25, 24, 16, 0, 27, 21, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 29, 31, 30, 0),
    gsSP1Triangle(24, 18, 16, 0),
    gsSPVertex(&object_link_childVtx_01C978[426], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 0, 0),
    gsSP2Triangles(1, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(8, 2, 9, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(7, 24, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 7, 0),
    gsSP2Triangles(26, 22, 21, 0, 19, 20, 30, 0),
    gsSPVertex(&object_link_childVtx_01C978[457], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 9, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_link_childVtx_01C978[467], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(5, 3, 2, 0, 5, 4, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(17, 6, 18, 0, 19, 9, 12, 0),
    gsSP2Triangles(20, 21, 18, 0, 5, 10, 3, 0),
    gsSP2Triangles(6, 20, 18, 0, 19, 10, 9, 0),
    gsSP2Triangles(7, 6, 17, 0, 4, 11, 9, 0),
    gsSP1Triangle(22, 6, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[490], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 12, 13, 0),
    gsSP2Triangles(7, 14, 15, 0, 7, 15, 9, 0),
    gsSP2Triangles(16, 13, 12, 0, 6, 8, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 10, 18, 0, 0),
    gsSP2Triangles(16, 19, 13, 0, 19, 18, 13, 0),
    gsSP2Triangles(19, 1, 0, 0, 20, 6, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 26, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[519], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 3, 2, 5, 0),
    gsSP2Triangles(5, 2, 6, 0, 1, 7, 6, 0),
    gsSP1Triangle(2, 1, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHatNearDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[309], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[315], 20, 6),
    gsSP2Triangles(6, 7, 4, 0, 2, 1, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 3, 11, 12, 0),
    gsSP2Triangles(0, 4, 13, 0, 14, 1, 0, 0),
    gsSP2Triangles(15, 16, 0, 0, 17, 3, 5, 0),
    gsSP2Triangles(0, 18, 19, 0, 20, 21, 2, 0),
    gsSP2Triangles(22, 4, 3, 0, 5, 2, 23, 0),
    gsSP1Triangle(24, 25, 5, 0),
    gsSPVertex(&object_link_childVtx_01C978[335], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 4, 0),
    gsSP2Triangles(1, 7, 4, 0, 6, 9, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 6, 7, 0, 0),
    gsSP2Triangles(0, 11, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 7, 6, 0, 4, 10, 3, 0),
    gsSP1Triangle(2, 11, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01F528[34], 6, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[40], 18, 6),
    gsSP2Triangles(6, 1, 7, 0, 8, 3, 5, 0),
    gsSP2Triangles(2, 9, 10, 0, 5, 4, 11, 0),
    gsSP2Triangles(2, 1, 12, 0, 13, 0, 3, 0),
    gsSP2Triangles(0, 14, 1, 0, 3, 15, 16, 0),
    gsSP2Triangles(3, 17, 18, 0, 19, 4, 2, 0),
    gsSP2Triangles(20, 4, 21, 0, 22, 23, 2, 0),
    gsSPVertex(&object_link_childVtx_01F528[58], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 2, 8, 0, 9, 2, 1, 0),
    gsSP1Triangle(1, 3, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(13, 19, 11, 0, 14, 16, 12, 0),
    gsSP2Triangles(20, 18, 19, 0, 13, 12, 21, 0),
    gsSP2Triangles(21, 12, 16, 0, 19, 13, 20, 0),
    gsSP2Triangles(12, 11, 14, 0, 18, 20, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightForearmNearDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01F528, 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[5], 17, 5),
    gsSP2Triangles(5, 4, 1, 0, 1, 2, 6, 0),
    gsSP2Triangles(7, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 2, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(0, 4, 18, 0, 19, 3, 0, 0),
    gsSP1Triangle(20, 21, 1, 0),
    gsSPVertex(&object_link_childVtx_01F528[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 3, 2, 0, 10, 2, 11, 0),
    gsSP2Triangles(6, 9, 8, 0, 6, 8, 7, 0),
    gsSP2Triangles(11, 2, 7, 0, 6, 1, 0, 0),
    gsSP2Triangles(6, 0, 5, 0, 6, 5, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01EDA8[34], 6, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[40], 20, 6),
    gsSP2Triangles(6, 1, 7, 0, 5, 3, 8, 0),
    gsSP2Triangles(9, 10, 2, 0, 11, 4, 5, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 14, 15, 0),
    gsSP2Triangles(3, 0, 16, 0, 1, 17, 0, 0),
    gsSP2Triangles(18, 19, 3, 0, 20, 21, 3, 0),
    gsSP2Triangles(2, 4, 22, 0, 23, 4, 24, 0),
    gsSP1Triangle(25, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[60], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 0, 4, 0, 1, 0, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 10, 17, 0),
    gsSP2Triangles(12, 17, 10, 0, 15, 19, 13, 0),
    gsSP2Triangles(14, 16, 18, 0, 19, 12, 11, 0),
    gsSP2Triangles(16, 14, 20, 0, 20, 14, 13, 0),
    gsSP2Triangles(11, 13, 19, 0, 18, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftForearmNearDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01EDA8, 5, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[5], 17, 5),
    gsSP2Triangles(1, 4, 5, 0, 6, 2, 1, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 1, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 3, 2, 0),
    gsSP2Triangles(14, 2, 15, 0, 16, 4, 0, 0),
    gsSP2Triangles(0, 3, 17, 0, 1, 18, 19, 0),
    gsSP1Triangle(1, 20, 21, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 1, 0),
    gsSP2Triangles(5, 4, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 0, 5, 0, 11, 1, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 6, 9, 8, 0),
    gsSP2Triangles(6, 8, 7, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 7, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_022148[] = {
#include "assets/objects/object_link_child/object_link_childVtx_022148.vtx.inc"
};

Gfx gLinkChildSlingshotStringDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 205, 255),
    gsSPVertex(object_link_childVtx_022148, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_022208[] = {
#include "assets/objects/object_link_child/object_link_childVtx_022208.vtx.inc"
};

Gfx gLinkChildDekuShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_022208, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 11, 10, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 10, 25, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_022208[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_022208[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 1, 0, 6, 0),
    gsSP2Triangles(4, 1, 6, 0, 7, 4, 3, 0),
    gsSPEndDisplayList(),
};

Mtx gLinkChildDekuShieldMtx = { 
    65535      , 0          , -1         , -65536     , 
    0          , -65536     , 39387036   , 3276801    , 
    565445181  , 0          , -248054262 , 7405568    , 
    -44818011  , -250347520 , 0          , 0          , 
};

Gfx gLinkChildDekuShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkChildDekuShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gLinkChildDekuShieldDL),
    gsSPEndDisplayList(),
};

u64 gLinkChildSpookyMaskTex[] = {
#include "assets/objects/object_link_child/spooky_mask.ia16.inc.c"
};

u64 gLinkChildKeatonMaskEyeBrowTex[] = {
#include "assets/objects/object_link_child/keaton_mask_eye_brow.rgba16.inc.c"
};

u64 gLinkChildKeatonMaskEarTex[] = {
#include "assets/objects/object_link_child/keaton_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskEyeTex[] = {
#include "assets/objects/object_link_child/skull_mask_eye.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthTex[] = {
#include "assets/objects/object_link_child/mask_of_truth.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthCurveTex[] = {
#include "assets/objects/object_link_child/mask_of_truth_curves.rgba16.inc.c"
};

u64 gLinkChildGoronMaskMouthTex[] = {
#include "assets/objects/object_link_child/goron_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEyeTex[] = {
#include "assets/objects/object_link_child/goron_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGoronMaskNoseTex[] = {
#include "assets/objects/object_link_child/goron_mask_nose.rgba16.inc.c"
};

u64 gLinkChildGoronMaskHairTex[] = {
#include "assets/objects/object_link_child/goron_mask_hair.rgba16.inc.c"
};

u64 gLinkChildSkullMaskTeethTex[] = {
#include "assets/objects/object_link_child/skull_mask_teeth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEarTex[] = {
#include "assets/objects/object_link_child/goron_mask_ear.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeBoarderTex[] = {
#include "assets/objects/object_link_child/zora_mask_eye_boarder.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEarTex[] = {
#include "assets/objects/object_link_child/zora_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskNoseTex[] = {
#include "assets/objects/object_link_child/skull_mask_nose.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeTex[] = {
#include "assets/objects/object_link_child/zora_mask_eye.rgba16.inc.c"
};

u64 gLinkChildZoraMaskMouthTex[] = {
#include "assets/objects/object_link_child/zora_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskEyeTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskMouthTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskHairTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_hair.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskNoseTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_nose.rgba16.inc.c"
};

Vtx object_link_childVtx_029220[] = {
#include "assets/objects/object_link_child/object_link_childVtx_029220.vtx.inc"
};

Gfx gLinkChildSkullMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_029220, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP1Triangle(14, 13, 12, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_link_childVtx_029220[15], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 3, 5, 11, 0),
    gsSP2Triangles(3, 11, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 3, 14, 0, 15, 1, 0, 0),
    gsSP2Triangles(15, 0, 16, 0, 17, 0, 2, 0),
    gsSP2Triangles(17, 2, 18, 0, 2, 1, 19, 0),
    gsSP1Triangle(2, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSkullMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[36], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_029220[43], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[46], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 4, 12, 8, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(14, 17, 16, 0, 14, 13, 18, 0),
    gsSP2Triangles(13, 19, 18, 0, 20, 2, 1, 0),
    gsSP2Triangles(20, 21, 2, 0, 21, 22, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSpookyMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSpookyMaskTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 127, 127, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[69], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 16, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 127, 64, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[86], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(8, 5, 6, 0, 9, 0, 2, 0),
    gsSP2Triangles(2, 7, 10, 0, 2, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildKeatonMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEyeBrowTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[97], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 12, 1, 0, 0),
    gsSP2Triangles(20, 16, 21, 0, 3, 22, 23, 0),
    gsSP2Triangles(19, 24, 6, 0, 25, 1, 12, 0),
    gsSP2Triangles(24, 19, 11, 0, 13, 26, 11, 0),
    gsSP2Triangles(11, 26, 24, 0, 6, 17, 19, 0),
    gsSP2Triangles(0, 13, 12, 0, 2, 1, 25, 0),
    gsSP2Triangles(18, 17, 8, 0, 2, 27, 0, 0),
    gsSP2Triangles(8, 17, 6, 0, 23, 9, 3, 0),
    gsSP2Triangles(4, 3, 10, 0, 20, 28, 14, 0),
    gsSP2Triangles(14, 16, 20, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[129], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[135], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 3, 8, 0),
    gsSP2Triangles(9, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 10, 18, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 0, 19, 1, 0),
    gsSP2Triangles(2, 20, 6, 0, 4, 18, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildMaskOfTruthDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthCurveTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 235, 255, 205, 255),
    gsSPVertex(&object_link_childVtx_029220[156], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[168], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 3, 2, 16, 0),
    gsSP2Triangles(1, 10, 14, 0, 14, 2, 1, 0),
    gsSP2Triangles(15, 16, 2, 0, 13, 17, 11, 0),
    gsSP2Triangles(10, 1, 8, 0, 8, 1, 0, 0),
    gsSP2Triangles(6, 18, 4, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 19, 0),
    gsSP2Triangles(29, 19, 22, 0, 28, 25, 20, 0),
    gsSP2Triangles(20, 19, 28, 0, 19, 29, 27, 0),
    gsSP2Triangles(23, 20, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGoronMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[198], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 3, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[206], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[212], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[227], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 5, 4, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[236], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 6, 5, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 10, 5, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 15, 0, 4, 15, 14, 0),
    gsSP2Triangles(15, 12, 11, 0, 4, 3, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildZoraMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeBoarderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[252], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 0, 9, 7, 0),
    gsSP2Triangles(10, 8, 7, 0, 8, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 3, 13, 12, 0),
    gsSP2Triangles(14, 10, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(16, 9, 0, 0, 15, 17, 18, 0),
    gsSP2Triangles(12, 19, 3, 0, 19, 12, 11, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 21, 17, 0),
    gsSP2Triangles(22, 9, 16, 0, 16, 23, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 24, 20, 4, 0),
    gsSP2Triangles(3, 23, 2, 0, 2, 23, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[277], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[287], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 7, 5, 0, 0, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[296], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 3, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGerudoMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[302], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 5, 4, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 9, 8, 0, 9, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[314], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 0, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 7, 10, 11, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[327], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 10, 19, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[359], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 10, 9, 0),
    gsSP2Triangles(5, 22, 3, 0, 23, 24, 25, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[388], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 12, 10, 13, 0),
    gsSP2Triangles(7, 14, 8, 0, 14, 10, 12, 0),
    gsSP2Triangles(11, 15, 10, 0, 16, 17, 18, 0),
    gsSP2Triangles(7, 10, 14, 0, 16, 19, 20, 0),
    gsSP2Triangles(19, 12, 20, 0, 14, 21, 8, 0),
    gsSP2Triangles(8, 21, 22, 0, 22, 21, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 24, 26, 0),
    gsSP2Triangles(26, 24, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[420], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 0, 2, 0, 10, 1, 8, 0),
    gsSP2Triangles(6, 11, 12, 0, 7, 2, 1, 0),
    gsSP1Triangle(13, 9, 2, 0),
    gsSPEndDisplayList(),
};

u64 gLinkChildBunnyHoodEyeTex[] = {
#include "assets/objects/object_link_child/bunny_hood_eye.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodTex[] = {
#include "assets/objects/object_link_child/bunny_hood.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodEarTex[] = {
#include "assets/objects/object_link_child/bunny_hood_ear.rgba16.inc.c"
};

Vtx object_link_childVtx_02C428[] = {
#include "assets/objects/object_link_child/object_link_childVtx_02C428.vtx.inc"
};

Gfx gLinkChildBunnyHoodDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_02C428, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 2, 13, 0, 12, 4, 3, 0),
    gsSP2Triangles(8, 7, 5, 0, 10, 9, 7, 0),
    gsSP2Triangles(14, 15, 3, 0, 13, 2, 1, 0),
    gsSP2Triangles(2, 16, 0, 0, 7, 6, 10, 0),
    gsSP2Triangles(11, 0, 16, 0, 14, 9, 11, 0),
    gsSP2Triangles(11, 16, 15, 0, 15, 14, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 24, 21, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[25], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 2, 3, 0, 9, 7, 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[35], 5, 0),
    gsSPMatrix(0x0B000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[40], 26, 5),
    gsSP2Triangles(5, 6, 1, 0, 1, 4, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 0, 10, 11, 0),
    gsSP2Triangles(3, 2, 12, 0, 13, 2, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 20, 16, 0, 19, 16, 17, 0),
    gsSP1Triangle(16, 20, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 23, 25, 21, 0),
    gsSP2Triangles(23, 27, 24, 0, 25, 24, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 29, 25, 0, 30, 21, 25, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[66], 5, 0),
    gsSPMatrix(0x0B000040, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[71], 26, 5),
    gsSP2Triangles(1, 5, 6, 0, 7, 4, 1, 0),
    gsSP2Triangles(3, 8, 9, 0, 0, 2, 10, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(16, 20, 14, 0, 19, 16, 15, 0),
    gsSP1Triangle(19, 15, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 21, 25, 0, 29, 30, 25, 0),
    gsSP2Triangles(23, 25, 21, 0, 23, 27, 24, 0),
    gsSP2Triangles(25, 24, 29, 0, 25, 30, 28, 0),
    gsSPEndDisplayList(),
};

LodLimb gLinkChildRootLimb = { 
    { 0, 2376, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildWaistLimb = { 
    { -4, -104, 0 }, 0x02, 0x09,
    { gLinkChildWaistNearDL, gLinkChildWaistNearDL }
};

LodLimb gLinkChildLowerControlLimb = { 
    { 607, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildRightThighLimb = { 
    { -172, 50, -190 }, 0x04, 0x06,
    { gLinkChildRightThighNearDL, gLinkChildRightThighNearDL }
};

LodLimb gLinkChildRightShinLimb = { 
    { 697, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkChildRightShinNearDL, gLinkChildRightShinNearDL }
};

LodLimb gLinkChildRightFootLimb = { 
    { 825, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightFootNearDL, gLinkChildRightFootNearDL }
};

LodLimb gLinkChildLeftThighLimb = { 
    { -170, 57, 192 }, 0x07, LIMB_DONE,
    { gLinkChildLeftThighNearDL, gLinkChildLeftThighNearDL }
};

LodLimb gLinkChildLeftShinLimb = { 
    { 695, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkChildLeftShinNearDL, gLinkChildLeftShinNearDL }
};

LodLimb gLinkChildLeftFootLimb = { 
    { 817, 8, 4 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftFootNearDL, gLinkChildLeftFootNearDL }
};

LodLimb gLinkChildUpperControlLimb = { 
    { 0, -103, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildHeadLimb = { 
    { 996, -201, -1 }, 0x0B, 0x0C,
    { gLinkChildHeadNearDL, gLinkChildHeadNearDL }
};

LodLimb gLinkChildHatLimb = { 
    { -365, -670, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildHatNearDL, gLinkChildHatNearDL }
};

LodLimb gLinkChildCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkChildCollarNearDL, gLinkChildCollarNearDL }
};

LodLimb gLinkChildLeftshoulderLimb = { 
    { 696, -175, 466 }, 0x0E, 0x10,
    { gLinkChildLeftShoulderNearDL, gLinkChildLeftShoulderNearDL }
};

LodLimb gLinkChildLeftForearmLimb = { 
    { 581, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkChildLeftForearmNearDL, gLinkChildLeftForearmNearDL }
};

LodLimb gLinkChildLeftHandLimb = { 
    { 514, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftHandNearDL, gLinkChildLeftHandNearDL }
};

LodLimb gLinkChildRightshoulderLimb = { 
    { 696, -175, -466 }, 0x11, 0x13,
    { gLinkChildRightShoulderNearDL, gLinkChildRightShoulderNearDL }
};

LodLimb gLinkChildRightForearmLimb = { 
    { 577, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkChildRightForearmNearDL, gLinkChildRightForearmNearDL }
};

LodLimb gLinkChildRightHandLimb = { 
    { 525, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightHandNearDL, gLinkChildRightHandNearDL }
};

LodLimb gLinkChildSwordAndSheathLimb = { 
    { 657, -523, 367 }, LIMB_DONE, 0x14,
    { gLinkChildSwordAndSheathNearDL, gLinkChildSwordAndSheathNearDL }
};

LodLimb gLinkChildTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildTorsoNearDL, gLinkChildTorsoNearDL }
};

void* gLinkChildSkelLimbs[] = {
    &gLinkChildRootLimb,
    &gLinkChildWaistLimb,
    &gLinkChildLowerControlLimb,
    &gLinkChildRightThighLimb,
    &gLinkChildRightShinLimb,
    &gLinkChildRightFootLimb,
    &gLinkChildLeftThighLimb,
    &gLinkChildLeftShinLimb,
    &gLinkChildLeftFootLimb,
    &gLinkChildUpperControlLimb,
    &gLinkChildHeadLimb,
    &gLinkChildHatLimb,
    &gLinkChildCollarLimb,
    &gLinkChildLeftshoulderLimb,
    &gLinkChildLeftForearmLimb,
    &gLinkChildLeftHandLimb,
    &gLinkChildRightshoulderLimb,
    &gLinkChildRightForearmLimb,
    &gLinkChildRightHandLimb,
    &gLinkChildSwordAndSheathLimb,
    &gLinkChildTorsoLimb,
};

FlexSkeletonHeader gLinkChildSkel = { 
    { gLinkChildSkelLimbs, ARRAY_COUNT(gLinkChildSkelLimbs) }, 18
};

