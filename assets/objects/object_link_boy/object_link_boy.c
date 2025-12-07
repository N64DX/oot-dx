#include "object_link_boy.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "player.h"

// Eyes textures

u64 gLinkAdultEyesOpenTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesOpenTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesHalfTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesHalfTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesClosedfTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesClosedfTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesRightTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesRightTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesLeftTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesLeftTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesWideTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesWideTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesDownTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesDownTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultEyesWincingTex[TEX_LEN(u64, LINK_ADULT_EYES_TEX_WIDTH, LINK_ADULT_EYES_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEyesWincingTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

// Mouth textures

u64 gLinkAdultMouthClosedTex[TEX_LEN(u64, LINK_ADULT_MOUTH_TEX_WIDTH, LINK_ADULT_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultMouthClosedTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultMouthHalfTex[TEX_LEN(u64, LINK_ADULT_MOUTH_TEX_WIDTH, LINK_ADULT_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultMouthHalfTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultMouthOpenTex[TEX_LEN(u64, LINK_ADULT_MOUTH_TEX_WIDTH, LINK_ADULT_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultMouthOpenTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultMouthSmileTex[TEX_LEN(u64, LINK_ADULT_MOUTH_TEX_WIDTH, LINK_ADULT_MOUTH_TEX_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultMouthSmileTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

// Textures

#define gLinkAdultEarTex_WIDTH 16
#define gLinkAdultEarTex_HEIGHT 16
u64 gLinkAdultEarTex[TEX_LEN(u64, gLinkAdultEarTex_WIDTH, gLinkAdultEarTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultEarTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

#define gLinkAdultNoseTex_WIDTH 16
#define gLinkAdultNoseTex_HEIGHT 16
u64 gLinkAdultNoseTex[TEX_LEN(u64, gLinkAdultNoseTex_WIDTH, gLinkAdultNoseTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultNoseTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

#define gLinkAdultNose2Tex_WIDTH 16
#define gLinkAdultNose2Tex_HEIGHT 16
u64 gLinkAdultNose2Tex[TEX_LEN(u64, gLinkAdultNose2Tex_WIDTH, gLinkAdultNose2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultNose2Tex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultTLUT2[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT2.tlut.rgba16.inc.c"
};

u64 gLinkAdultTLUT3[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT3.tlut.rgba16.inc.c"
};

u64 gLinkAdultHeadTLUT[] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadTLUT.tlut.rgba16.inc.c"
};

#define gLinkAdultBootTex_WIDTH 16
#define gLinkAdultBootTex_HEIGHT 16
u64 gLinkAdultBootTex[TEX_LEN(u64, gLinkAdultBootTex_WIDTH, gLinkAdultBootTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBootTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultLegTex_WIDTH 16
#define gLinkAdultLegTex_HEIGHT 32
u64 gLinkAdultLegTex[TEX_LEN(u64, gLinkAdultLegTex_WIDTH, gLinkAdultLegTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultLegTex.ci8.tlut_gLinkAdultTLUT3.inc.c"
};

#define gLinkAdultBoot2Tex_WIDTH 16
#define gLinkAdultBoot2Tex_HEIGHT 32
u64 gLinkAdultBoot2Tex[TEX_LEN(u64, gLinkAdultBoot2Tex_WIDTH, gLinkAdultBoot2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBoot2Tex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultBootBuckleTex_WIDTH 32
#define gLinkAdultBootBuckleTex_HEIGHT 16
u64 gLinkAdultBootBuckleTex[TEX_LEN(u64, gLinkAdultBootBuckleTex_WIDTH, gLinkAdultBootBuckleTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBootBuckleTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultSkirtAndHatTex_WIDTH 32
#define gLinkAdultSkirtAndHatTex_HEIGHT 32
u64 gLinkAdultSkirtAndHatTex[TEX_LEN(u64, gLinkAdultSkirtAndHatTex_WIDTH, gLinkAdultSkirtAndHatTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultSkirtAndHatTex.rgba16.inc.c"
};

#define gLinkAdultBeltTex_WIDTH 8
#define gLinkAdultBeltTex_HEIGHT 16
u64 gLinkAdultBeltTex[TEX_LEN(u64, gLinkAdultBeltTex_WIDTH, gLinkAdultBeltTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBeltTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultBeltClaspTex_WIDTH 32
#define gLinkAdultBeltClaspTex_HEIGHT 16
u64 gLinkAdultBeltClaspTex[TEX_LEN(u64, gLinkAdultBeltClaspTex_WIDTH, gLinkAdultBeltClaspTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBeltClaspTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultEarringTex_WIDTH 32
#define gLinkAdultEarringTex_HEIGHT 32
u64 gLinkAdultEarringTex[TEX_LEN(u64, gLinkAdultEarringTex_WIDTH, gLinkAdultEarringTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultEarringTex.ia16.inc.c"
};

#define gLinkAdultNeckTex_WIDTH 16
#define gLinkAdultNeckTex_HEIGHT 32
u64 gLinkAdultNeckTex[TEX_LEN(u64, gLinkAdultNeckTex_WIDTH, gLinkAdultNeckTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultNeckTex.ci8.tlut_gLinkAdultTLUT3.inc.c"
};

#define gLinkAdultArmGauntletTex_WIDTH 32
#define gLinkAdultArmGauntletTex_HEIGHT 32
u64 gLinkAdultArmGauntletTex[TEX_LEN(u64, gLinkAdultArmGauntletTex_WIDTH, gLinkAdultArmGauntletTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultArmGauntletTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultTunicTex_WIDTH 16
#define gLinkAdultTunicTex_HEIGHT 32
u64 gLinkAdultTunicTex[TEX_LEN(u64, gLinkAdultTunicTex_WIDTH, gLinkAdultTunicTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultTunicTex.ci8.tlut_gLinkAdultTLUT3.inc.c"
};

#define gLinkAdultCollarTex_WIDTH 16
#define gLinkAdultCollarTex_HEIGHT 32
u64 gLinkAdultCollarTex[TEX_LEN(u64, gLinkAdultCollarTex_WIDTH, gLinkAdultCollarTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultCollarTex.rgba16.inc.c"
};

#define gLinkAdultGauntletPlate1Tex_WIDTH 16
#define gLinkAdultGauntletPlate1Tex_HEIGHT 32
u64 gLinkAdultGauntletPlate1Tex[TEX_LEN(u64, gLinkAdultGauntletPlate1Tex_WIDTH, gLinkAdultGauntletPlate1Tex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_boy/gLinkAdultGauntletPlate1Tex.rgba16.inc.c"
};

#define gLinkAdultGauntletPlate2Tex_WIDTH 32
#define gLinkAdultGauntletPlate2Tex_HEIGHT 32
u64 gLinkAdultGauntletPlate2Tex[TEX_LEN(u64, gLinkAdultGauntletPlate2Tex_WIDTH, gLinkAdultGauntletPlate2Tex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_boy/gLinkAdultGauntletPlate2Tex.rgba16.inc.c"
};

#define gLinkAdultHoverBootsHeelTex_WIDTH 16
#define gLinkAdultHoverBootsHeelTex_HEIGHT 8
u64 gLinkAdultHoverBootsHeelTex[TEX_LEN(u64, gLinkAdultHoverBootsHeelTex_WIDTH, gLinkAdultHoverBootsHeelTex_HEIGHT,
                                        16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHoverBootsHeelTex.rgba16.inc.c"
};

#define gLinkAdultHoverBootsJetTex_WIDTH 32
#define gLinkAdultHoverBootsJetTex_HEIGHT 32
u64 gLinkAdultHoverBootsJetTex[TEX_LEN(u64, gLinkAdultHoverBootsJetTex_WIDTH, gLinkAdultHoverBootsJetTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHoverBootsJetTex.rgba16.inc.c"
};

#define gLinkAdultHoverBootsFeatherTex_WIDTH 32
#define gLinkAdultHoverBootsFeatherTex_HEIGHT 16
u64 gLinkAdultHoverBootsFeatherTex[TEX_LEN(u64, gLinkAdultHoverBootsFeatherTex_WIDTH,
                                           gLinkAdultHoverBootsFeatherTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHoverBootsFeatherTex.rgba16.inc.c"
};

#define gLinkAdultMirrorShieldLowerDesignTex_WIDTH 32
#define gLinkAdultMirrorShieldLowerDesignTex_HEIGHT 64
u64 gLinkAdultMirrorShieldLowerDesignTex[TEX_LEN(u64, gLinkAdultMirrorShieldLowerDesignTex_WIDTH,
                                                 gLinkAdultMirrorShieldLowerDesignTex_HEIGHT, 16)] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldLowerDesignTex.ia16.inc.c"
};

#define gLinkAdultMirrorShieldUpperDesignTex_WIDTH 64
#define gLinkAdultMirrorShieldUpperDesignTex_HEIGHT 32
u64 gLinkAdultMirrorShieldUpperDesignTex[TEX_LEN(u64, gLinkAdultMirrorShieldUpperDesignTex_WIDTH,
                                                 gLinkAdultMirrorShieldUpperDesignTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldUpperDesignTex.ia8.inc.c"
};

#define gLinkAdultHookshotMetalTex_WIDTH 8
#define gLinkAdultHookshotMetalTex_HEIGHT 8
u64 gLinkAdultHookshotMetalTex[TEX_LEN(u64, gLinkAdultHookshotMetalTex_WIDTH, gLinkAdultHookshotMetalTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotMetalTex.rgba16.inc.c"
};

#define gLinkAdultBowBodyTex_WIDTH 8
#define gLinkAdultBowBodyTex_HEIGHT 8
u64 gLinkAdultBowBodyTex[TEX_LEN(u64, gLinkAdultBowBodyTex_WIDTH, gLinkAdultBowBodyTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBowBodyTex.i8.inc.c"
};

u64 gLinkAdultTLUT4[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT4.tlut.rgba16.inc.c"
};

u64 gLinkAdultTLUT5[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT5.tlut.rgba16.inc.c"
};

u64 gLinkAdultTLUT6[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT6.tlut.rgba16.inc.c"
};

u64 gLinkAdultTLUT7[] = {
#include "assets/objects/object_link_boy/gLinkAdultArmOutSleeveTex.tlut.rgba16.inc.c"
};

#define gLinkAdultSwordPommelTex_WIDTH 16
#define gLinkAdultSwordPommelTex_HEIGHT 16
u64 gLinkAdultSwordPommelTex[TEX_LEN(u64, gLinkAdultSwordPommelTex_WIDTH, gLinkAdultSwordPommelTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultSwordPommelTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultIronBootTex_WIDTH 16
#define gLinkAdultIronBootTex_HEIGHT 16
u64 gLinkAdultIronBootTex[TEX_LEN(u64, gLinkAdultIronBootTex_WIDTH, gLinkAdultIronBootTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultIronBootTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultDefaultGauntlet1Tex_WIDTH 16
#define gLinkAdultDefaultGauntlet1Tex_HEIGHT 32
u64 gLinkAdultDefaultGauntlet1Tex[TEX_LEN(u64, gLinkAdultDefaultGauntlet1Tex_WIDTH,
                                          gLinkAdultDefaultGauntlet1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultDefaultGauntlet1Tex.ci8.tlut_gLinkAdultTLUT5.inc.c"
};

#define gLinkAdultShieldHandleTex_WIDTH 8
#define gLinkAdultShieldHandleTex_HEIGHT 16
u64 gLinkAdultShieldHandleTex[TEX_LEN(u64, gLinkAdultShieldHandleTex_WIDTH, gLinkAdultShieldHandleTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultShieldHandleTex.ci8.tlut_gLinkAdultTLUT5.inc.c"
};

#define gLinkAdultDefaultGauntlet2Tex_WIDTH 16
#define gLinkAdultDefaultGauntlet2Tex_HEIGHT 32
u64 gLinkAdultDefaultGauntlet2Tex[TEX_LEN(u64, gLinkAdultDefaultGauntlet2Tex_WIDTH,
                                          gLinkAdultDefaultGauntlet2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultDefaultGauntlet2Tex.ci8.tlut_gLinkAdultTLUT5.inc.c"
};

#define gLinkAdultHandTex_WIDTH 16
#define gLinkAdultHandTex_HEIGHT 16
u64 gLinkAdultHandTex[TEX_LEN(u64, gLinkAdultHandTex_WIDTH, gLinkAdultHandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHandTex.ci8.tlut_gLinkAdultTLUT6.inc.c"
};

#define gLinkAdultClosedHandThumbTex_WIDTH 16
#define gLinkAdultClosedHandThumbTex_HEIGHT 16
u64 gLinkAdultClosedHandThumbTex[TEX_LEN(u64, gLinkAdultClosedHandThumbTex_WIDTH, gLinkAdultClosedHandThumbTex_HEIGHT,
                                         8)] = {
#include "assets/objects/object_link_boy/gLinkAdultClosedHandThumbTex.ci8.tlut_gLinkAdultTLUT6.inc.c"
};

#define gLinkAdultHylianShieldBackTex_WIDTH 16
#define gLinkAdultHylianShieldBackTex_HEIGHT 32
u64 gLinkAdultHylianShieldBackTex[TEX_LEN(u64, gLinkAdultHylianShieldBackTex_WIDTH,
                                          gLinkAdultHylianShieldBackTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldBackTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultClosedHandSideTex_WIDTH 16
#define gLinkAdultClosedHandSideTex_HEIGHT 16
u64 gLinkAdultClosedHandSideTex[TEX_LEN(u64, gLinkAdultClosedHandSideTex_WIDTH, gLinkAdultClosedHandSideTex_HEIGHT,
                                        8)] = {
#include "assets/objects/object_link_boy/gLinkAdultClosedHandSideTex.ci8.tlut_gLinkAdultTLUT6.inc.c"
};

#define gLinkAdultSheathTex_WIDTH 32
#define gLinkAdultSheathTex_HEIGHT 32
u64 gLinkAdultSheathTex[TEX_LEN(u64, gLinkAdultSheathTex_WIDTH, gLinkAdultSheathTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultArmOutUpperGauntletTex_WIDTH 32
#define gLinkAdultArmOutUpperGauntletTex_HEIGHT 32
u64 gLinkAdultArmOutUpperGauntletTex[TEX_LEN(u64, gLinkAdultArmOutUpperGauntletTex_WIDTH,
                                             gLinkAdultArmOutUpperGauntletTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultArmOutUpperGauntletTex.ci8.tlut_gLinkAdultTLUT5.inc.c"
};

#define gLinkAdultSwordGuardTex_WIDTH 32
#define gLinkAdultSwordGuardTex_HEIGHT 32
u64 gLinkAdultSwordGuardTex[TEX_LEN(u64, gLinkAdultSwordGuardTex_WIDTH, gLinkAdultSwordGuardTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultSwordGuardTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultSheathBandTex_WIDTH 32
#define gLinkAdultSheathBandTex_HEIGHT 16
u64 gLinkAdultSheathBandTex[TEX_LEN(u64, gLinkAdultSheathBandTex_WIDTH, gLinkAdultSheathBandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathBandTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultSwordEmblemTex_WIDTH 16
#define gLinkAdultSwordEmblemTex_HEIGHT 16
u64 gLinkAdultSwordEmblemTex[TEX_LEN(u64, gLinkAdultSwordEmblemTex_WIDTH, gLinkAdultSwordEmblemTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultSwordEmblemTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultHookshotHandleTex_WIDTH 16
#define gLinkAdultHookshotHandleTex_HEIGHT 8
u64 gLinkAdultHookshotHandleTex[TEX_LEN(u64, gLinkAdultHookshotHandleTex_WIDTH, gLinkAdultHookshotHandleTex_HEIGHT,
                                        8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotHandleTex.ci8.tlut_gLinkAdultTLUT5.inc.c"
};

#define gLinkAdultHookshotDesignTex_WIDTH 16
#define gLinkAdultHookshotDesignTex_HEIGHT 32
u64 gLinkAdultHookshotDesignTex[TEX_LEN(u64, gLinkAdultHookshotDesignTex_WIDTH, gLinkAdultHookshotDesignTex_HEIGHT,
                                        8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotDesignTex.ci8.tlut_gLinkAdultTLUT4.inc.c"
};

#define gLinkAdultArmOutSleeveTex_WIDTH 16
#define gLinkAdultArmOutSleeveTex_HEIGHT 32
u64 gLinkAdultArmOutSleeveTex[TEX_LEN(u64, gLinkAdultArmOutSleeveTex_WIDTH, gLinkAdultArmOutSleeveTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultArmOutSleeveTex.ci8.inc.c"
};

// Various vertices and DLs

Vtx gLinkAdultHylianShieldSwordAndSheathNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldSwordAndSheathNearVtx.inc.c"
};

Vtx gLinkAdultHylianShieldAndSheathNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldAndSheathNearVtx.inc.c"
};

Vtx gLinkAdultMirrorShieldSwordAndSheathNearVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathNearVtx1.inc.c"
};

Vtx gLinkAdultMirrorShieldAndSheathNearVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathNearVtx1.inc.c"
};

Vtx gLinkAdultLeftHandNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandNearVtx.inc.c"
};

Vtx gLinkAdultLeftHandClosedNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandClosedNearVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingMasterSwordNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingMasterSwordNearVtx.inc.c"
};

Vtx gLinkAdultRightHandNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandNearVtx.inc.c"
};

Vtx gLinkAdultRightHandClosedNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandClosedNearVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingHylianShieldNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHylianShieldNearVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingBowNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowNearVtx.inc.c"
};

Vtx gLinkAdultMasterSwordAndSheathNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultMasterSwordAndSheathNearVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingHammerNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingHammerNearVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingBgsNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingBgsNearVtx.inc.c"
};

Vtx gLinkAdultHandHoldingBrokenGiantsKnifeVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBrokenGiantsKnifeVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingMirrorShieldNearVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldNearVtx1.inc.c"
};

Vtx gLinkAdultRightHandHoldingOotNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingOotNearVtx.inc.c"
};

Vtx gLinkAdultSheathNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathNearVtx.inc.c"
};

Vtx gLinkAdultLeftHandOutNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandOutNearVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingHookshotNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHookshotNearVtx.inc.c"
};

Vtx gLinkAdultLeftGauntletPlate1Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate1Vtx.inc.c"
};

Vtx gLinkAdultLeftGauntletPlate2Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate2Vtx.inc.c"
};

Vtx gLinkAdultLeftGauntletPlate3Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate3Vtx.inc.c"
};

Vtx gLinkAdultRightGauntletPlate1Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate1Vtx.inc.c"
};

Vtx gLinkAdultRightGauntletPlate2Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate2Vtx.inc.c"
};

Vtx gLinkAdultRightGauntletPlate3Vtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate3Vtx.inc.c"
};

Vtx gLinkAdultLeftIronBootVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftIronBootVtx.inc.c"
};

Vtx gLinkAdultRightIronBootVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightIronBootVtx.inc.c"
};

Vtx gLinkAdultLeftHoverBootVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHoverBootVtx.inc.c"
};

Vtx gLinkAdultRightHoverBootVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHoverBootVtx.inc.c"
};

Vtx gLinkAdultHandHoldingBottleVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBottleVtx.inc.c"
};

Vtx gLinkAdultRightArmOutNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmOutNearVtx.inc.c"
};

Vtx gLinkAdultRightHandOutNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandOutNearVtx.inc.c"
};

Vtx gLinkAdultLeftArmOutNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmOutNearVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingBowFirstPersonVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowFirstPersonVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingHookshotFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHookshotFarVtx.inc.c"
};

Vtx gLinkAdultMirrorShieldSwordAndSheathNearVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathNearVtx2.inc.c"
};

Vtx gLinkAdultMirrorShieldAndSheathNearVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathNearVtx2.inc.c"
};

Vtx gLinkAdultRightHandHoldingMirrorShieldNearVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldNearVtx2.inc.c"
};

Vtx gLinkAdultBottleVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBottleVtx.inc.c"
};

Gfx gLinkAdultHylianShieldSwordAndSheathNearDL[127] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldSwordAndSheathNearDL.inc.c"
};

Gfx gLinkAdultHylianShieldAndSheathNearDL[105] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldAndSheathNearDL.inc.c"
};

Gfx gLinkAdultMirrorShieldSwordAndSheathNearDL[159] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathNearDL.inc.c"
};

Gfx gLinkAdultMirrorShieldAndSheathNearDL[127] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathNearDL.inc.c"
};

Gfx gLinkAdultLeftHandNearDL[72] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandNearDL.inc.c"
};

Gfx gLinkAdultLeftHandClosedNearDL[82] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandClosedNearDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingMasterSwordNearDL[164] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingMasterSwordNearDL.inc.c"
};

Gfx gLinkAdultRightHandNearDL[73] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandNearDL.inc.c"
};

Gfx gLinkAdultRightHandClosedNearDL[82] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandClosedNearDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingHylianShieldNearDL[135] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHylianShieldNearDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingBowNearDL[119] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowNearDL.inc.c"
};

Gfx gLinkAdultMasterSwordAndSheathNearDL[80] = {
#include "assets/objects/object_link_boy/gLinkAdultMasterSwordAndSheathNearDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingHammerNearDL[157] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingHammerNearDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingBgsNearDL[145] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingBgsNearDL.inc.c"
};

Gfx gLinkAdultHandHoldingBrokenGiantsKnifeDL[142] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBrokenGiantsKnifeDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingMirrorShieldNearDL[155] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldNearDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingOotNearDL[104] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingOotNearDL.inc.c"
};

Gfx gLinkAdultSheathNearDL[48] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathNearDL.inc.c"
};

Gfx gLinkAdultLeftHandOutNearDL[67] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandOutNearDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingHookshotNearDL[149] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHookshotNearDL.inc.c"
};

Gfx gLinkAdultLeftGauntletPlate1DL[24] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate1DL.inc.c"
};

Gfx gLinkAdultLeftGauntletPlate2DL[44] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate2DL.inc.c"
};

Gfx gLinkAdultLeftGauntletPlate3DL[44] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftGauntletPlate3DL.inc.c"
};

Gfx gLinkAdultRightGauntletPlate1DL[24] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate1DL.inc.c"
};

Gfx gLinkAdultRightGauntletPlate2DL[44] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate2DL.inc.c"
};

Gfx gLinkAdultRightGauntletPlate3DL[44] = {
#include "assets/objects/object_link_boy/gLinkAdultRightGauntletPlate3DL.inc.c"
};

Gfx gLinkAdultLeftIronBootDL[41] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftIronBootDL.inc.c"
};

Gfx gLinkAdultRightIronBootDL[41] = {
#include "assets/objects/object_link_boy/gLinkAdultRightIronBootDL.inc.c"
};

Gfx gLinkAdultLeftHoverBootDL[65] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHoverBootDL.inc.c"
};

Gfx gLinkAdultRightHoverBootDL[65] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHoverBootDL.inc.c"
};

Gfx gLinkAdultHandHoldingBottleDL[99] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBottleDL.inc.c"
};

Gfx gLinkAdultRightArmOutNearDL[97] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmOutNearDL.inc.c"
};

Gfx gLinkAdultRightHandOutNearDL[112] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandOutNearDL.inc.c"
};

Gfx gLinkAdultLeftArmOutNearDL[85] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmOutNearDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingBowFirstPersonDL[158] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowFirstPersonDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingHookshotFarDL[196] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHookshotFarDL.inc.c"
};

Gfx gLinkAdultBottleDL[35] = {
#include "assets/objects/object_link_boy/gLinkAdultBottleDL.inc.c"
};

// Hookshot, bow, broken giant's knife

Vtx gLinkAdultBowStringVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBowStringVtx.inc.c"
};

Gfx gLinkAdultBowStringDL[12] = {
#include "assets/objects/object_link_boy/gLinkAdultBowStringDL.inc.c"
};

// Near skeleton vertices and DLs

Vtx gLinkAdultRightFootNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightFootNearVtx.inc.c"
};

Vtx gLinkAdultRightLegNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightLegNearVtx.inc.c"
};

Vtx gLinkAdultRightThighNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightThighNearVtx.inc.c"
};

Vtx gLinkAdultLeftFootNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftFootNearVtx.inc.c"
};

Vtx gLinkAdultLeftLegNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftLegNearVtx.inc.c"
};

Vtx gLinkAdultLeftThighNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftThighNearVtx.inc.c"
};

Vtx gLinkAdultWaistNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultWaistNearVtx.inc.c"
};

Vtx gLinkAdultHatNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHatNearVtx.inc.c"
};

Vtx gLinkAdultHeadNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadNearVtx.inc.c"
};

Vtx gLinkAdultVtx_033760[] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_033760.inc.c"
};

Vtx gLinkAdultLeftArmNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmNearVtx.inc.c"
};

Vtx gLinkAdultLeftShoulderNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftShoulderNearVtx.inc.c"
};

Vtx gLinkAdultVtx_0340A0[] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_0340A0.inc.c"
};

Vtx gLinkAdultRightArmNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmNearVtx.inc.c"
};

Vtx gLinkAdultRightShoulderNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightShoulderNearVtx.inc.c"
};

Vtx gLinkAdultTorsoNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultTorsoNearVtx.inc.c"
};

Vtx gLinkAdultCollarNearVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultCollarNearVtx.inc.c"
};

Gfx gLinkAdultWaistNearDL[105] = {
#include "assets/objects/object_link_boy/gLinkAdultWaistNearDL.inc.c"
};

Gfx gLinkAdultRightThighNearDL[71] = {
#include "assets/objects/object_link_boy/gLinkAdultRightThighNearDL.inc.c"
};

Gfx gLinkAdultRightLegNearDL[86] = {
#include "assets/objects/object_link_boy/gLinkAdultRightLegNearDL.inc.c"
};

Gfx gLinkAdultRightFootNearDL[43] = {
#include "assets/objects/object_link_boy/gLinkAdultRightFootNearDL.inc.c"
};

Gfx gLinkAdultLeftThighNearDL[71] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftThighNearDL.inc.c"
};

Gfx gLinkAdultLeftLegNearDL[86] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftLegNearDL.inc.c"
};

Gfx gLinkAdultLeftFootNearDL[43] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftFootNearDL.inc.c"
};

Gfx gLinkAdultCollarNearDL[24] = {
#include "assets/objects/object_link_boy/gLinkAdultCollarNearDL.inc.c"
};

Gfx gLinkAdultTorsoNearDL[70] = {
#include "assets/objects/object_link_boy/gLinkAdultTorsoNearDL.inc.c"
};

Gfx gLinkAdultHeadNearDL[234] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadNearDL.inc.c"
};

Gfx gLinkAdultHatNearDL[37] = {
#include "assets/objects/object_link_boy/gLinkAdultHatNearDL.inc.c"
};

Gfx gLinkAdultRightShoulderNearDL[56] = {
#include "assets/objects/object_link_boy/gLinkAdultRightShoulderNearDL.inc.c"
};

Gfx gLinkAdultRightArmNearDL[63] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmNearDL.inc.c"
};

Gfx gLinkAdultLeftShoulderNearDL[57] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftShoulderNearDL.inc.c"
};

Gfx gLinkAdultLeftArmNearDL[79] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmNearDL.inc.c"
};

// Skeleton

LodLimb gLinkAdultRootLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRootLimb.inc.c"
};

LodLimb gLinkAdultWaistLimb = {
#include "assets/objects/object_link_boy/gLinkAdultWaistLimb.inc.c"
};

LodLimb gLinkAdultLowerControlLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLowerControlLimb.inc.c"
};

LodLimb gLinkAdultRightThighLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightThighLimb.inc.c"
};

LodLimb gLinkAdultRightLegLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightLegLimb.inc.c"
};

LodLimb gLinkAdultRightFootLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightFootLimb.inc.c"
};

LodLimb gLinkAdultLeftThighLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftThighLimb.inc.c"
};

LodLimb gLinkAdultLeftLegLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftLegLimb.inc.c"
};

LodLimb gLinkAdultLeftFootLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftFootLimb.inc.c"
};

LodLimb gLinkAdultUpperControlLimb = {
#include "assets/objects/object_link_boy/gLinkAdultUpperControlLimb.inc.c"
};

LodLimb gLinkAdultHeadLimb = {
#include "assets/objects/object_link_boy/gLinkAdultHeadLimb.inc.c"
};

LodLimb gLinkAdultHatLimb = {
#include "assets/objects/object_link_boy/gLinkAdultHatLimb.inc.c"
};

LodLimb gLinkAdultCollarLimb = {
#include "assets/objects/object_link_boy/gLinkAdultCollarLimb.inc.c"
};

LodLimb gLinkAdultLeftShoulderLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftShoulderLimb.inc.c"
};

LodLimb gLinkAdultLeftArmLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmLimb.inc.c"
};

LodLimb gLinkAdultLeftHandLimb = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandLimb.inc.c"
};

LodLimb gLinkAdultRightShoulderLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightShoulderLimb.inc.c"
};

LodLimb gLinkAdultRightArmLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmLimb.inc.c"
};

LodLimb gLinkAdultRightHandLimb = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandLimb.inc.c"
};

LodLimb gLinkAdultSwordAndSheathLimb = {
#include "assets/objects/object_link_boy/gLinkAdultSwordAndSheathLimb.inc.c"
};

LodLimb gLinkTorsoLimb = {
#include "assets/objects/object_link_boy/gLinkTorsoLimb.inc.c"
};

void* gLinkAdultLimbs[] = {
#include "assets/objects/object_link_boy/gLinkAdultLimbs.inc.c"
};

FlexSkeletonHeader gLinkAdultSkel = {
#include "assets/objects/object_link_boy/gLinkAdultSkel.inc.c"
};



// Great Fairy's Sword

static u64 gGreatFairysSwordTex[] = {
#include "assets/objects/object_link_child/swords/gilded_sword_tex_01D340.i8.inc.c"
};

static u64 gGreatFairysSwordDesignTex[] = {
#include "assets/objects/object_link_child/swords/great_fairys_sword_Design_tex.rgba16.inc.c"
};

static Vtx great_fairys_sword_vtx[] = {
#include "assets/objects/object_link_child/swords/great_fairys_sword.vtx.inc"
};

Gfx gLinkAdultGreatFairysSwordDL[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 120, 30, 40, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatFairysSwordTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&great_fairys_sword_vtx, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 2, 4, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(13, 8, 14, 0, 8, 7, 14, 0),
    gsSP2Triangles(15, 2, 16, 0, 17, 2, 15, 0),
    gsSP2Triangles(17, 3, 2, 0, 2, 1, 16, 0),

    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 90, 30, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatFairysSwordTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&great_fairys_sword_vtx[18], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 7, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSP2Triangles(10, 2, 1, 0, 9, 8, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(10, 1, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(18, 10, 16, 0, 19, 11, 20, 0),
    gsSP2Triangles(21, 19, 20, 0, 11, 8, 20, 0),
    gsSP2Triangles(22, 13, 23, 0, 22, 23, 24, 0),

    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 90, 30, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatFairysSwordTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&great_fairys_sword_vtx[43], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(4, 8, 7, 0, 7, 8, 9, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSP2Triangles(9, 8, 10, 0, 10, 11, 12, 0),
    gsSP1Triangle(10, 8, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSP2Triangles(13, 1, 14, 0, 15, 13, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(16, 20, 19, 0, 20, 21, 19, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 24, 0),
    gsSP1Triangle(22, 20, 23, 0),

    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatFairysSwordDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&great_fairys_sword_vtx[68], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 4, 10, 0, 4, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 16, 19, 0),
    gsSP2Triangles(20, 17, 21, 0, 19, 21, 17, 0),
    gsSP2Triangles(22, 16, 23, 0, 21, 23, 20, 0),
    gsSP2Triangles(23, 21, 22, 0, 18, 23, 16, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(24, 30, 25, 0, 29, 30, 27, 0),
    gsSP1Triangle(31, 28, 27, 0),
    gsSPVertex(&great_fairys_sword_vtx[100], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 0, 5, 0, 8, 6, 9, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 4, 11, 0),
    gsSP2Triangles(10, 11, 0, 0, 11, 4, 9, 0),
    gsSP2Triangles(5, 0, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 18, 12, 0),
    gsSP1Triangle(17, 19, 15, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
    gsSP2Triangles(25, 28, 27, 0, 29, 30, 31, 0),

    gsSPDisplayList(gLinkAdultLeftHandNearDL),

    gsSPEndDisplayList(),
};
