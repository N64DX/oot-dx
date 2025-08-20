#include "object_link_child.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "player.h"

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

Gfx gLinkChildHeadNearDL[203] = {
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



// Global

static u64 gSwordBowHookshotHandTLUT[] = {
#include "assets/objects/object_link_child/other/sword_bow_hookshot_hand_tlut.rgba16.inc.c"
};

static u64 gSwordMetalTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_metal.i8.inc.c"
};

static u64 gLinkChildBowTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow.ci8.inc.c"
};

static u64 gLinkChildBowDesignTex[] = {
#include "assets/objects/object_link_child/bow/heros_bow_design.ci8.inc.c"
};



// Kokiri Sword

static Gfx gKokiriSwordHandleDL[] = {
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

Gfx gLinkChildLeftHandHoldingHerosSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[29], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 4, 6, 0),
    gsSP2Triangles(5, 4, 10, 0, 2, 9, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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

Gfx gLinkChildLeftHandHoldingRazorSwordDL[] = {
    gsSPDisplayList(gLinkChildLeftHandNearDL),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |  G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_blade_vtx[40], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    
    gsSPEndDisplayList(),
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

Gfx gLinkChildSheathedKokiriSwordDL[] = {
    gsSPDisplayList(gLinkChildKokiriSwordSheathDL),
    gsSPDisplayList(gKokiriSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSheathedHerosSwordDL[] = {
    gsSPDisplayList(gLinkChildHerosSwordSheathDL),
    gsSPMatrix(&gSheathedHerosSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gHerosSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSheathedRazorSwordDL[] = {
    gsSPDisplayList(gLinkChildRazorSwordSheathDL),
    gsSPMatrix(&gSheathedRazorSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gRazorSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSheathedGildedSwordDL[] = {
    gsSPDisplayList(gLinkChildGildedSwordSheathDL),
    gsSPMatrix(&gSheathedGildedSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gGildedSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gLinkChildKokiriSwordSheathDL[] = {
	gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
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

Gfx gLinkChildHerosSwordSheathDL[] = {
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

Gfx gLinkChildRazorSwordSheathDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

Gfx gLinkChildGildedSwordSheathDL[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&gilded_sword_sheath_vtx[57], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    
    gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsSPDisplayList(gLinkChildSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildDekuShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildDekuShieldWithMatrixDL),
};

Gfx gLinkChildHylianShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldKokiriSwordSheathDL[] = {
    gsSPDisplayList(gLinkChildKokiriSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldHerosSwordSheathDL[] = {
    gsSPDisplayList(gLinkChildHerosSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldRazorSwordSheathDL[] = {
    gsSPDisplayList(gLinkChildRazorSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};

Gfx gLinkChildHylianShieldGildedSwordSheathDL[] = {
    gsSPDisplayList(gLinkChildGildedSwordSheathDL),
    gsSPBranchList(gLinkChildHylianShieldAndSheathNearDL),
};


Gfx gLinkChildHerosShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildHerosShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildHerosShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldKokiriSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedKokiriSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldHerosSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedHerosSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldRazorSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedRazorSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};

Gfx gLinkChildMirrorShieldGildedSwordSheathedDL[] = {
    gsSPDisplayList(gLinkChildSheathedGildedSwordDL),
    gsSPBranchList(gLinkChildMirrorShieldWithMatrixDL),
};



// Hero's Shield

static u64 gLinkChildHerosShieldFrontTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_tlut.rgba16.inc.c"
};

static u64 gLinkChildHerosShieldBackTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back_tlut.rgba16.inc.c"
};

static u64 gLinkChildHerosShieldFrontUpperTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_upper.ci8.inc.c"
};

static u64 gLinkChildHerosShieldFrontLowerTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_front_lower.ci8.inc.c"
};

static u64 gLinkChildHerosShieldBackTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_back.ci8.inc.c"
};

static u64 gLinkChildShieldHandleTLUT[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle_tlut.rgba16.inc.c"
};

static u64 gLinkChildShieldHandleTex[] = {
#include "assets/objects/object_link_child/shields/heros_shield_handle.ci8.inc.c"
};

static Vtx heros_shield_vtx[] = {
#include "assets/objects/object_link_child/shields/heros_shield.vtx.inc"
};

static Mtx gLinkChildHerosShieldMtx = { 
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

static Mtx gLinkChildMirrorShieldMtx = { 
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

static Vtx hammer_vtx[] = {
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

static u64 gLinkChildHookshotHandleTex[] = {
#include "assets/objects/object_link_child/hookshot/hookshot_handle.ci8.inc.c"
};

static u64 gLinkChildHookshotHandTex[] = {
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

static Vtx heros_bow_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow.vtx.inc"
};

static Vtx heros_bow_string_vtx[] = {
#include "assets/objects/object_link_child/bow/heros_bow_string.vtx.inc"
};

static Vtx heros_bow_first_person_vtx[] = {
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
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

static u64 gLinkChildPowerSymbolTex[] = {
#include "assets/objects/object_link_child/other/power_symbol.ia16.inc.c"
};

static Vtx bracelet_right_vtx[] = {
#include "assets/objects/object_link_child/other/bracelet_right.vtx.inc"
};

Gfx gLinkChildPowerBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildGoronBraceletVtx1, 3, 0),
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
    gsDPLoadTextureBlock(gLinkChildPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildGoronBraceletVtx2, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildPowerBraceletsDL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
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
    gsDPLoadTextureBlock(gLinkChildPowerSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&bracelet_right_vtx[17], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPBranchList(gLinkChildPowerBraceletDL),
};



// Earring

static u64 gLinkChildEarringTex[] = {
#include "assets/objects/object_link_boy/gLinkAdultEarringTex.ia16.inc.c"
};

static Vtx earring_vtx[] = {
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
