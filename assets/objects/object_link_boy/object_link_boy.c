/**
#include "object_link_boy.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "z64player.h"

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

#define gLinkAdultUnusedHandTex_WIDTH 16
#define gLinkAdultUnusedHandTex_HEIGHT 16
u64 gLinkAdultUnusedHandTex[TEX_LEN(u64, gLinkAdultUnusedHandTex_WIDTH, gLinkAdultUnusedHandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedHandTex.ci8.tlut_gLinkAdultHeadTLUT.inc.c"
};

u64 gLinkAdultTLUT1[] = {
#include "assets/objects/object_link_boy/gLinkAdultBootFarTex.tlut.rgba16.inc.c"
};

#define gLinkAdultBootFarTex_WIDTH 16
#define gLinkAdultBootFarTex_HEIGHT 32
u64 gLinkAdultBootFarTex[TEX_LEN(u64, gLinkAdultBootFarTex_WIDTH, gLinkAdultBootFarTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultBootFarTex.ci8.inc.c"
};

u64 gLinkAdultTLUT2[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT2.tlut.rgba16.inc.c"
};

u64 gLinkAdultTLUT3[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT3.tlut.rgba16.inc.c"
};

u8 gLinkAdult_5AB0_Blob[] = {
#include "assets/objects/object_link_boy/gLinkAdult_5AB0_Blob.bin.inc.c"
};

u64 gLinkAdultHeadTLUT[] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadTLUT.tlut.rgba16.inc.c"
};

u64 gLinkAdultTlut_005E00[] = {
#include "assets/objects/object_link_boy/gLinkAdultTlut_005E00.tlut.rgba16.inc.c"
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

#define gLinkAdultUnusedGauntlet1Tex_WIDTH 16
#define gLinkAdultUnusedGauntlet1Tex_HEIGHT 32
u64 gLinkAdultUnusedGauntlet1Tex[TEX_LEN(u64, gLinkAdultUnusedGauntlet1Tex_WIDTH, gLinkAdultUnusedGauntlet1Tex_HEIGHT,
                                         8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedGauntlet1Tex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultUnusedGauntlet2Tex_WIDTH 16
#define gLinkAdultUnusedGauntlet2Tex_HEIGHT 32
u64 gLinkAdultUnusedGauntlet2Tex[TEX_LEN(u64, gLinkAdultUnusedGauntlet2Tex_WIDTH, gLinkAdultUnusedGauntlet2Tex_HEIGHT,
                                         8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedGauntlet2Tex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultArmGauntletTex_WIDTH 32
#define gLinkAdultArmGauntletTex_HEIGHT 32
u64 gLinkAdultArmGauntletTex[TEX_LEN(u64, gLinkAdultArmGauntletTex_WIDTH, gLinkAdultArmGauntletTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultArmGauntletTex.ci8.tlut_gLinkAdultTLUT2.inc.c"
};

#define gLinkAdultUnusedSheathTex_WIDTH 32
#define gLinkAdultUnusedSheathTex_HEIGHT 64
u64 gLinkAdultUnusedSheathTex[TEX_LEN(u64, gLinkAdultUnusedSheathTex_WIDTH, gLinkAdultUnusedSheathTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedSheathTex.ci8.tlut_gLinkAdultTlut_005E00.inc.c"
};

#define gLinkAdultUnusedSheathBandTex_WIDTH 32
#define gLinkAdultUnusedSheathBandTex_HEIGHT 16
u64 gLinkAdultUnusedSheathBandTex[TEX_LEN(u64, gLinkAdultUnusedSheathBandTex_WIDTH,
                                          gLinkAdultUnusedSheathBandTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedSheathBandTex.ci8.tlut_gLinkAdultTlut_005E00.inc.c"
};

#define gLinkAdultUnusedSwordPommelTex_WIDTH 16
#define gLinkAdultUnusedSwordPommelTex_HEIGHT 16
u64 gLinkAdultUnusedSwordPommelTex[TEX_LEN(u64, gLinkAdultUnusedSwordPommelTex_WIDTH,
                                           gLinkAdultUnusedSwordPommelTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedSwordPommelTex.ci8.tlut_gLinkAdultTlut_005E00.inc.c"
};

#define gLinkAdultUnusedSwordGuardTex_WIDTH 32
#define gLinkAdultUnusedSwordGuardTex_HEIGHT 32
u64 gLinkAdultUnusedSwordGuardTex[TEX_LEN(u64, gLinkAdultUnusedSwordGuardTex_WIDTH,
                                          gLinkAdultUnusedSwordGuardTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedSwordGuardTex.ci8.tlut_gLinkAdultTlut_005E00.inc.c"
};

#define gLinkAdultUnusedSwordEmblemTex_WIDTH 16
#define gLinkAdultUnusedSwordEmblemTex_HEIGHT 16
u64 gLinkAdultUnusedSwordEmblemTex[TEX_LEN(u64, gLinkAdultUnusedSwordEmblemTex_WIDTH,
                                           gLinkAdultUnusedSwordEmblemTex_HEIGHT, 8)] = {
#include "assets/objects/object_link_boy/gLinkAdultUnusedSwordEmblemTex.ci8.tlut_gLinkAdultTlut_005E00.inc.c"
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

u8 gLinkAdult_CD40_Blob[] = {
#include "assets/objects/object_link_boy/gLinkAdult_CD40_Blob.bin.inc.c"
};

u64 gLinkAdultTLUT5[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT5.tlut.rgba16.inc.c"
};

u8 gLinkAdult_CF48_Blob[] = {
#include "assets/objects/object_link_boy/gLinkAdult_CF48_Blob.bin.inc.c"
};

u64 gLinkAdultTLUT6[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT6.tlut.rgba16.inc.c"
};

u8 gLinkAdult_D070_Blob[] = {
#include "assets/objects/object_link_boy/gLinkAdult_D070_Blob.bin.inc.c"
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

Vtx gLinkAdultHylianShieldSwordAndSheathFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldSwordAndSheathFarVtx.inc.c"
};

Vtx gLinkAdultHylianShieldAndSheathFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldAndSheathFarVtx.inc.c"
};

Vtx gLinkAdultMirrorShieldSwordAndSheathFarVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathFarVtx1.inc.c"
};

Vtx gLinkAdultMirrorShieldAndSheathFarVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathFarVtx1.inc.c"
};

Vtx gLinkAdultLeftHandFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandFarVtx.inc.c"
};

Vtx gLinkAdultLeftHandClosedFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandClosedFarVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingMasterSwordFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingMasterSwordFarVtx.inc.c"
};

Vtx gLinkAdultRightHandFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandFarVtx.inc.c"
};

Vtx gLinkAdultRightHandClosedFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandClosedFarVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingHylianShieldFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHylianShieldFarVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingBowFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowFarVtx.inc.c"
};

Vtx gLinkAdultMasterSwordAndSheathFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultMasterSwordAndSheathFarVtx.inc.c"
};

Vtx gLinkAdultSheathFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathFarVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingHammerFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingHammerFarVtx.inc.c"
};

Vtx gLinkAdultLeftHandHoldingBgsFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingBgsFarVtx.inc.c"
};

Vtx gLinkAdultRightHandHoldingMirrorShieldFarVtx1[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldFarVtx1.inc.c"
};

Vtx gLinkAdultRightHandHoldingOotFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingOotFarVtx.inc.c"
};

Vtx gLinkAdultHandHoldingBrokenGiantsKnifeFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBrokenGiantsKnifeFarVtx.inc.c"
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

Vtx gLinkAdultMirrorShieldSwordAndSheathFarVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathFarVtx2.inc.c"
};

Vtx gLinkAdultMirrorShieldAndSheathFarVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathFarVtx2.inc.c"
};

Vtx gLinkAdultRightHandHoldingMirrorShieldFarVtx2[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldFarVtx2.inc.c"
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

Gfx gLinkAdultHylianShieldSwordAndSheathFarDL[96] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldSwordAndSheathFarDL.inc.c"
};

Gfx gLinkAdultHylianShieldAndSheathFarDL[71] = {
#include "assets/objects/object_link_boy/gLinkAdultHylianShieldAndSheathFarDL.inc.c"
};

Gfx gLinkAdultMirrorShieldSwordAndSheathFarDL[132] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldSwordAndSheathFarDL.inc.c"
};

Gfx gLinkAdultMirrorShieldAndSheathFarDL[105] = {
#include "assets/objects/object_link_boy/gLinkAdultMirrorShieldAndSheathFarDL.inc.c"
};

Gfx gLinkAdultLeftHandFarDL[51] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandFarDL.inc.c"
};

Gfx gLinkAdultLeftHandClosedFarDL[81] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandClosedFarDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingMasterSwordFarDL[144] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingMasterSwordFarDL.inc.c"
};

Gfx gLinkAdultRightHandFarDL[51] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandFarDL.inc.c"
};

Gfx gLinkAdultRightHandClosedFarDL[81] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandClosedFarDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingHylianShieldFarDL[78] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingHylianShieldFarDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingBowFarDL[111] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingBowFarDL.inc.c"
};

Gfx gLinkAdultMasterSwordAndSheathFarDL[74] = {
#include "assets/objects/object_link_boy/gLinkAdultMasterSwordAndSheathFarDL.inc.c"
};

Gfx gLinkAdultSheathFarDL[39] = {
#include "assets/objects/object_link_boy/gLinkAdultSheathFarDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingHammerFarDL[134] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingHammerFarDL.inc.c"
};

Gfx gLinkAdultLeftHandHoldingBgsFarDL[145] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftHandHoldingBgsFarDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingMirrorShieldFarDL[131] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingMirrorShieldFarDL.inc.c"
};

Gfx gLinkAdultRightHandHoldingOotFarDL[82] = {
#include "assets/objects/object_link_boy/gLinkAdultRightHandHoldingOotFarDL.inc.c"
};

Gfx gLinkAdultHandHoldingBrokenGiantsKnifeFarDL[131] = {
#include "assets/objects/object_link_boy/gLinkAdultHandHoldingBrokenGiantsKnifeFarDL.inc.c"
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

Vtx gLinkAdultHookshotChainVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainVtx.inc.c"
};

#define gLinkAdultHookshotChainTex_WIDTH 16
#define gLinkAdultHookshotChainTex_HEIGHT 32
u64 gLinkAdultHookshotChainTex[TEX_LEN(u64, gLinkAdultHookshotChainTex_WIDTH, gLinkAdultHookshotChainTex_HEIGHT, 16)];

Gfx gLinkAdultHookshotChainDL[23] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainDL.inc.c"
};

Vtx gLinkAdultBowStringVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBowStringVtx.inc.c"
};

Gfx gLinkAdultBowStringDL[12] = {
#include "assets/objects/object_link_boy/gLinkAdultBowStringDL.inc.c"
};

Vtx gLinkAdultHookshotTipVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipVtx.inc.c"
};

Gfx gLinkAdultHookshotTipDL[22] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotTipDL.inc.c"
};

u64 gLinkAdultHookshotChainTex[TEX_LEN(u64, gLinkAdultHookshotChainTex_WIDTH, gLinkAdultHookshotChainTex_HEIGHT,
                                       16)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotChainTex.rgba16.inc.c"
};

Vtx gLinkAdultBrokenGiantsKnifeBladeVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeVtx.inc.c"
};

Gfx gLinkAdultBrokenGiantsKnifeBladeDL[28] = {
#include "assets/objects/object_link_boy/gLinkAdultBrokenGiantsKnifeBladeDL.inc.c"
};

// Hookshot reticle

#define gLinkAdultHookshotReticleTex_WIDTH 64
#define gLinkAdultHookshotReticleTex_HEIGHT 64
u64 gLinkAdultHookshotReticleTex[TEX_LEN(u64, gLinkAdultHookshotReticleTex_WIDTH, gLinkAdultHookshotReticleTex_HEIGHT,
                                         8)] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleTex.i8.inc.c"
};

Vtx gLinkAdultHookshotReticleVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleVtx.inc.c"
};

Gfx gLinkAdultHookshotReticleDL[13] = {
#include "assets/objects/object_link_boy/gLinkAdultHookshotReticleDL.inc.c"
};

// Far skeleton vertices and DLs

Vtx gLinkAdultRightFootFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightFootFarVtx.inc.c"
};

Vtx gLinkAdultRightLegFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightLegFarVtx.inc.c"
};

Vtx gLinkAdultRightThighFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightThighFarVtx.inc.c"
};

Vtx gLinkAdultLeftFootFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftFootFarVtx.inc.c"
};

Vtx gLinkAdultLeftLegFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftLegFarVtx.inc.c"
};

Vtx gLinkAdultLeftThighFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftThighFarVtx.inc.c"
};

Vtx gLinkAdultWaistFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultWaistFarVtx.inc.c"
};

Vtx gLinkAdultHatFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHatFarVtx.inc.c"
};

Vtx gLinkAdultHeadFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadFarVtx.inc.c"
};

Vtx gLinkAdultVtx_02E120[] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_02E120.inc.c"
};

Vtx gLinkAdultLeftArmFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmFarVtx.inc.c"
};

Vtx gLinkAdultLeftShoulderFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftShoulderFarVtx.inc.c"
};

Vtx gLinkAdultVtx_02E7E0[] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_02E7E0.inc.c"
};

Vtx gLinkAdultRightArmFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmFarVtx.inc.c"
};

Vtx gLinkAdultRightShoulderFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultRightShoulderFarVtx.inc.c"
};

Vtx gLinkAdultTorsoFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultTorsoFarVtx.inc.c"
};

Vtx gLinkAdultCollarFarVtx[] = {
#include "assets/objects/object_link_boy/gLinkAdultCollarFarVtx.inc.c"
};

Gfx gLinkAdultWaistFarDL[78] = {
#include "assets/objects/object_link_boy/gLinkAdultWaistFarDL.inc.c"
};

Gfx gLinkAdultRightThighFarDL[67] = {
#include "assets/objects/object_link_boy/gLinkAdultRightThighFarDL.inc.c"
};

Gfx gLinkAdultRightLegFarDL[57] = {
#include "assets/objects/object_link_boy/gLinkAdultRightLegFarDL.inc.c"
};

Gfx gLinkAdultRightFootFarDL[36] = {
#include "assets/objects/object_link_boy/gLinkAdultRightFootFarDL.inc.c"
};

Gfx gLinkAdultLeftThighFarDL[68] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftThighFarDL.inc.c"
};

Gfx gLinkAdultLeftLegFarDL[57] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftLegFarDL.inc.c"
};

Gfx gLinkAdultLeftFootFarDL[36] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftFootFarDL.inc.c"
};

Gfx gLinkAdultCollarFarDL[21] = {
#include "assets/objects/object_link_boy/gLinkAdultCollarFarDL.inc.c"
};

Gfx gLinkAdultTorsoFarDL[54] = {
#include "assets/objects/object_link_boy/gLinkAdultTorsoFarDL.inc.c"
};

Gfx gLinkAdultHeadFarDL[182] = {
#include "assets/objects/object_link_boy/gLinkAdultHeadFarDL.inc.c"
};

Gfx gLinkAdultHatFarDL[30] = {
#include "assets/objects/object_link_boy/gLinkAdultHatFarDL.inc.c"
};

Gfx gLinkAdultRightShoulderFarDL[53] = {
#include "assets/objects/object_link_boy/gLinkAdultRightShoulderFarDL.inc.c"
};

Gfx gLinkAdultRightArmFarDL[86] = {
#include "assets/objects/object_link_boy/gLinkAdultRightArmFarDL.inc.c"
};

Gfx gLinkAdultLeftShoulderFarDL[53] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftShoulderFarDL.inc.c"
};

Gfx gLinkAdultLeftArmFarDL[86] = {
#include "assets/objects/object_link_boy/gLinkAdultLeftArmFarDL.inc.c"
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

Gfx gLinkAdultHeadNearDL[233] = {
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
*/
#include "ultra64.h"
#include "z64.h"
#include "object_link_boy.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
static Vtx gLinkAdultVtx_033760[54];
static Vtx gLinkAdultVtx_0340A0[146];

u64 gLinkAdultEyesOpenTex[] = {
#include "assets/objects/object_link_boy/eyes_open.ci8.inc.c"
};

u64 gLinkAdultEyesHalfTex[] = {
#include "assets/objects/object_link_boy/eyes_half.ci8.inc.c"
};

u64 gLinkAdultEyesClosedfTex[] = {
#include "assets/objects/object_link_boy/eyes_closed.ci8.inc.c"
};

u64 gLinkAdultEyesLeftTex[] = {
#include "assets/objects/object_link_boy/eyes_left.ci8.inc.c"
};

u64 gLinkAdultEyesRightTex[] = {
#include "assets/objects/object_link_boy/eyes_right.ci8.inc.c"
};

u64 gLinkAdultEyesWideTex[] = {
#include "assets/objects/object_link_boy/eyes_wide.ci8.inc.c"
};

u64 gLinkAdultEyesDownTex[] = {
#include "assets/objects/object_link_boy/eyes_down.ci8.inc.c"
};

u64 gLinkAdultEyesWincingTex[] = {
#include "assets/objects/object_link_boy/eyes_wincing.ci8.inc.c"
};

u64 gLinkAdultMouthClosedTex[] = {
#include "assets/objects/object_link_boy/mouth_closed.ci8.inc.c"
};

u64 gLinkAdultMouthHalfTex[] = {
#include "assets/objects/object_link_boy/mouth_half.ci8.inc.c"
};

u64 gLinkAdultMouthOpenTex[] = {
#include "assets/objects/object_link_boy/mouth_open.ci8.inc.c"
};

u64 gLinkAdultMouthSmileTex[] = {
#include "assets/objects/object_link_boy/mouth_smile.ci8.inc.c"
};

u64 gLinkAdultEarTex[] = {
#include "assets/objects/object_link_boy/ear.ci8.inc.c"
};

u64 gLinkAdultNoseTex[] = {
#include "assets/objects/object_link_boy/nose.ci8.inc.c"
};

u64 gLinkAdultNose2Tex[] = {
#include "assets/objects/object_link_boy/nose2.ci8.inc.c"
};

u64 gLinkAdultTLUT2[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT2.rgba16.inc.c"
};

u64 gLinkAdultTLUT3[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT3.rgba16.inc.c"
};

u64 gLinkAdultHeadTLUT[] = {
#include "assets/objects/object_link_boy/head_tlut.rgba16.inc.c"
};

u64 gLinkAdultBootTex[] = {
#include "assets/objects/object_link_boy/boot.ci8.inc.c"
};

u64 gLinkAdultLegTex[] = {
#include "assets/objects/object_link_boy/leg.ci8.inc.c"
};

u64 gLinkAdultBoot2Tex[] = {
#include "assets/objects/object_link_boy/boot_2.ci8.inc.c"
};

u64 gLinkAdultBootBuckleTex[] = {
#include "assets/objects/object_link_boy/boot_buckle.ci8.inc.c"
};

u64 gLinkAdultSkirtAndHatTex[] = {
#include "assets/objects/object_link_boy/skirt_and_hat.rgba16.inc.c"
};

u64 gLinkAdultBeltTex[] = {
#include "assets/objects/object_link_boy/belt.ci8.inc.c"
};

u64 gLinkAdultBeltClaspTex[] = {
#include "assets/objects/object_link_boy/belt_clasp.ci8.inc.c"
};

u64 gLinkAdultEarringTex[] = {
#include "assets/objects/object_link_boy/earring.ia16.inc.c"
};

u64 gLinkAdultNeckTex[] = {
#include "assets/objects/object_link_boy/neck.ci8.inc.c"
};

u64 gLinkAdultArmGauntletTex[] = {
#include "assets/objects/object_link_boy/arm_gauntlet.ci8.inc.c"
};

u64 gLinkAdultTunicTex[] = {
#include "assets/objects/object_link_boy/tunic.ci8.inc.c"
};

u64 gLinkAdultCollarTex[] = {
#include "assets/objects/object_link_boy/collar.rgba16.inc.c"
};

u64 gLinkAdultGauntletPlate1Tex[] = {
#include "assets/objects/object_link_boy/gauntlet_plate_1.rgba16.inc.c"
};

u64 gLinkAdultGauntletPlate2Tex[] = {
#include "assets/objects/object_link_boy/gauntlet_plate_2.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsHeelTex[] = {
#include "assets/objects/object_link_boy/hover_boots_heel.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsJetTex[] = {
#include "assets/objects/object_link_boy/hover_boots_jet.rgba16.inc.c"
};

u64 gLinkAdultHoverBootsFeatherTex[] = {
#include "assets/objects/object_link_boy/hover_boots_feather.rgba16.inc.c"
};

u64 gLinkAdultMirrorShieldLowerDesignTex[] = {
#include "assets/objects/object_link_boy/mirror_shield_lower_design.ia16.inc.c"
};

u64 gLinkAdultMirrorShieldUpperDesignTex[] = {
#include "assets/objects/object_link_boy/mirror_shield_upper_design.ia8.inc.c"
};

u64 gLinkAdultHookshotMetalTex[] = {
#include "assets/objects/object_link_boy/hookshot_metal.rgba16.inc.c"
};

u64 gLinkAdultBowBodyTex[] = {
#include "assets/objects/object_link_boy/bow_body.i8.inc.c"
};

u64 gLinkAdultTLUT4[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT4.rgba16.inc.c"
};

u64 gLinkAdultTLUT5[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT5.rgba16.inc.c"
};

u64 gLinkAdultTLUT6[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT6.rgba16.inc.c"
};

u64 gLinkAdultTLUT7[] = {
#include "assets/objects/object_link_boy/gLinkAdultTLUT7.rgba16.inc.c"
};

u64 gLinkAdultSwordPommelTex[] = {
#include "assets/objects/object_link_boy/sword_pommel.ci8.inc.c"
};

u64 gLinkAdultIronBootTex[] = {
#include "assets/objects/object_link_boy/iron_boot.ci8.inc.c"
};

u64 gLinkAdultDefaultGauntlet1Tex[] = {
#include "assets/objects/object_link_boy/default_gauntlet_1.ci8.inc.c"
};

u64 gLinkAdultShieldHandleTex[] = {
#include "assets/objects/object_link_boy/shield_handle.ci8.inc.c"
};

u64 gLinkAdultDefaultGauntlet2Tex[] = {
#include "assets/objects/object_link_boy/default_gauntlet_2.ci8.inc.c"
};

u64 gLinkAdultHandTex[] = {
#include "assets/objects/object_link_boy/hand.ci8.inc.c"
};

u64 gLinkAdultClosedHandThumbTex[] = {
#include "assets/objects/object_link_boy/closed_hand_thumb.ci8.inc.c"
};

u64 gLinkAdultHylianShieldBackTex[] = {
#include "assets/objects/object_link_boy/hylian_shield_back.ci8.inc.c"
};

u64 gLinkAdultClosedHandSideTex[] = {
#include "assets/objects/object_link_boy/closed_hand_side.ci8.inc.c"
};

u64 gLinkAdultSheathTex[] = {
#include "assets/objects/object_link_boy/sheath.ci8.inc.c"
};

u64 gLinkAdultArmOutUpperGauntletTex[] = {
#include "assets/objects/object_link_boy/arm_out_upper_gauntlet.ci8.inc.c"
};

u64 gLinkAdultSwordGuardTex[] = {
#include "assets/objects/object_link_boy/sword_guard.ci8.inc.c"
};

u64 gLinkAdultSheathBandTex[] = {
#include "assets/objects/object_link_boy/sheath_band.ci8.inc.c"
};

u64 gLinkAdultSwordEmblemTex[] = {
#include "assets/objects/object_link_boy/sword_emblem.ci8.inc.c"
};

u64 gLinkAdultHookshotHandleTex[] = {
#include "assets/objects/object_link_boy/hookshot_handle.ci8.inc.c"
};

u64 gLinkAdultHookshotDesignTex[] = {
#include "assets/objects/object_link_boy/hookshot_design.ci8.inc.c"
};

u64 gLinkAdultArmOutSleeveTex[] = {
#include "assets/objects/object_link_boy/arm_out_sleeve.ci8.inc.c"
};

Vtx object_link_boyVtx_00EFB8[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_00EFB8.vtx.inc"
};

Gfx gLinkAdultHylianShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_00EFB8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 2, 7, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 2, 1, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 4, 0, 7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[10], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[22], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[28], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[47], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[77], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[103], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[115], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHylianShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[125], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[137], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[147], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[151], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 2, 7, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 2, 1, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 4, 0, 7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[161], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[173], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMirrorShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x2710, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[179], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[182], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[189], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[207], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[210], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP1Triangle(10, 1, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[221], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[233], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[243], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[262], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[292], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4436], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4440], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMirrorShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x2710, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[318], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[321], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[328], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[346], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[349], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[360], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[372], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[382], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4446], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4450], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[386], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(16, 17, 14, 0, 5, 4, 10, 0),
    gsSP2Triangles(7, 6, 18, 0, 0, 2, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 9, 10, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(12, 30, 13, 0, 31, 20, 22, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[418], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[424], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 2, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[434], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 5, 4, 0),
    gsSP2Triangles(9, 8, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 3, 9, 0, 6, 10, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 4, 8, 7, 0),
    gsSP2Triangles(5, 10, 3, 0, 2, 1, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(12, 0, 14, 0, 2, 14, 0, 0),
    gsSP2Triangles(13, 2, 11, 0, 13, 14, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[449], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 16, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[472], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[482], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[485], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[488], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingMasterSwordNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[499], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[502], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[533], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[553], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[572], 32, 0),
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
    gsSPVertex(&object_link_boyVtx_00EFB8[603], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[621], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[635], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 16, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[662], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[668], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[671], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[674], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[685], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 7, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 13, 8, 7, 0),
    gsSP2Triangles(22, 12, 11, 0, 23, 4, 6, 0),
    gsSP2Triangles(24, 25, 26, 0, 13, 14, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[716], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[731], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[737], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(4, 6, 9, 0, 8, 7, 3, 0),
    gsSP2Triangles(9, 5, 4, 0, 3, 10, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 6, 4, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 2, 13, 0, 2, 14, 0, 0),
    gsSP2Triangles(11, 0, 12, 0, 0, 14, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[752], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[779], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[785], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[788], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[791], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingHylianShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[802], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 6, 5, 0),
    gsSP2Triangles(4, 7, 6, 0, 7, 4, 3, 0),
    gsSP2Triangles(8, 6, 7, 0, 7, 3, 8, 0),
    gsSP2Triangles(8, 3, 9, 0, 2, 9, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[812], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_00EFB8[824], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 2, 15, 0, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[851], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 4, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[857], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHylianShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPVertex(&object_link_boyVtx_00EFB8[860], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 0, 0, 0, 5, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[866], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[869], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingBowNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultBowBodyTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 69, 69, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[880], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 7, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 13, 7, 0, 7, 13, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 161, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[896], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[914], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 15, 16, 0),
    gsSP2Triangles(11, 17, 15, 0, 10, 18, 19, 0),
    gsSP2Triangles(10, 19, 2, 0, 20, 3, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 17, 23, 15, 0),
    gsSP2Triangles(24, 25, 26, 0, 14, 27, 28, 0),
    gsSP2Triangles(24, 29, 25, 0, 21, 3, 5, 0),
    gsSP2Triangles(0, 2, 19, 0, 30, 29, 24, 0),
    gsSP2Triangles(23, 31, 15, 0, 14, 13, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[946], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[952], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[979], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[985], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[988], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[991], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 10, 0),
    gsSP1Triangle(11, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultMasterSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1003], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1015], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1025], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1044], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(7, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(0, 2, 14, 0, 12, 14, 2, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(4, 26, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1074], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 12, 17, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 25, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingHammerNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 79, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1100], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 1, 0, 0, 2, 6, 0, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 5, 0, 0),
    gsSP2Triangles(8, 4, 3, 0, 4, 6, 2, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 1, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 155, 192, 201, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1109], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1112], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1144], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1174], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1203], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1233], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1264], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1294], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1303], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 15, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1330], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[1336], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1339], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1342], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandHoldingBgsNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1353], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 2, 5, 0, 0, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 2, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1361], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(1, 4, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(0, 2, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(14, 1, 15, 0, 13, 14, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 16, 2, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1386], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1389], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 0, 0),
    gsSP2Triangles(10, 3, 5, 0, 4, 11, 5, 0),
    gsSP2Triangles(1, 12, 2, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 7, 6, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 8, 7, 0),
    gsSP2Triangles(24, 25, 22, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1421], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 6, 16, 4, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1448], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[1454], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1457], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1460], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP1Triangle(0, 2, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHandHoldingBrokenGiantsKnifeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1471], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 2, 5, 0, 0, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 2, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 2, 1, 0),
    gsSP2Triangles(3, 5, 7, 0, 5, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1479], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 4, 14, 0, 11, 13, 8, 0),
    gsSP2Triangles(15, 8, 5, 0, 16, 8, 7, 0),
    gsSP2Triangles(9, 4, 8, 0, 15, 5, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1500], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1503], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 7, 6, 0),
    gsSP2Triangles(16, 9, 11, 0, 17, 13, 12, 0),
    gsSP1Triangle(18, 3, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1522], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 11, 10, 0, 6, 13, 14, 0),
    gsSP2Triangles(11, 12, 15, 0, 6, 14, 4, 0),
    gsSP1Triangle(3, 2, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1539], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[1549], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1552], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1555], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP1Triangle(0, 2, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingMirrorShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1564], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1567], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsDPPipeSync(),
    gsSPTexture(0x05DC, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0, 215, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1574], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 6, 0),
    gsSP2Triangles(14, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 17, 7, 6, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 15, 11, 0),
    gsSP2Triangles(16, 9, 1, 0, 17, 6, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, 1),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1592], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1595], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP1Triangle(9, 10, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1606], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 15, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1629], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 9, 8, 0, 4, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[1639], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1642], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1645], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldLowerDesignTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 205, 225, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4456], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultMirrorShieldUpperDesignTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4460], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingOotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1656], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 7, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 13, 8, 7, 0),
    gsSP2Triangles(22, 12, 11, 0, 23, 4, 6, 0),
    gsSP2Triangles(24, 25, 26, 0, 13, 14, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1687], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1702], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1708], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(4, 6, 9, 0, 8, 7, 3, 0),
    gsSP2Triangles(9, 5, 4, 0, 3, 10, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 6, 4, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 12, 14, 0),
    gsSP2Triangles(14, 2, 13, 0, 2, 14, 0, 0),
    gsSP2Triangles(11, 0, 12, 0, 0, 14, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOcarinaofTimeDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1723], 23, 0),
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

Gfx gLinkAdultSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1746], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(2, 1, 10, 0, 10, 1, 6, 0),
    gsSP2Triangles(11, 8, 5, 0, 11, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultSheathBandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1758], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1768], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHandOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1772], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(7, 5, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 13, 14, 0),
    gsSP2Triangles(13, 4, 6, 0, 8, 4, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1787], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1791], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 6, 13, 0),
    gsSP2Triangles(8, 13, 6, 0, 15, 14, 16, 0),
    gsSP2Triangles(14, 15, 12, 0, 17, 13, 8, 0),
    gsSP2Triangles(17, 14, 13, 0, 2, 18, 0, 0),
    gsSP2Triangles(18, 5, 0, 0, 18, 3, 5, 0),
    gsSP2Triangles(18, 2, 3, 0, 19, 17, 8, 0),
    gsSP2Triangles(17, 16, 14, 0, 19, 16, 17, 0),
    gsSP2Triangles(20, 15, 21, 0, 12, 20, 6, 0),
    gsSP1Triangle(12, 15, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingHookshotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotMetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1813], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 0, 0),
    gsSP2Triangles(1, 0, 5, 0, 1, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(7, 6, 12, 0, 12, 6, 10, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(11, 13, 9, 0, 11, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(14, 17, 19, 0, 14, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 24, 21, 0),
    gsSP2Triangles(25, 21, 20, 0, 24, 25, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultHookshotHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[1839], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 8, 9, 3, 0),
    gsSP2Triangles(2, 6, 7, 0, 5, 4, 10, 0),
    gsSP2Triangles(9, 4, 3, 0, 5, 10, 8, 0),
    gsSP2Triangles(8, 10, 9, 0, 0, 6, 1, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(11, 13, 15, 0, 14, 11, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHookshotDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPVertex(&object_link_boyVtx_00EFB8[1855], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_link_boyVtx_00EFB8[1875], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 15, 4, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1898], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 4, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandThumbTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsSPVertex(&object_link_boyVtx_00EFB8[1904], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultClosedHandSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[1907], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[1910], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP1Triangle(4, 10, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate1DL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1921], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 8, 15, 9, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 22, 16, 0, 19, 21, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate2DL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1945], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 14, 13, 21, 0),
    gsSP2Triangles(10, 9, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(23, 19, 24, 0, 16, 15, 25, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1971], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[1974], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftGauntletPlate3DL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[1983], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 6, 5, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 11, 15, 12, 0),
    gsSP2Triangles(15, 11, 16, 0, 8, 7, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2009], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2012], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate1DL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2021], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 9, 15, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 22, 16, 0, 23, 19, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate2DL[] = {
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2045], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 13, 12, 0),
    gsSP2Triangles(22, 9, 8, 0, 18, 23, 19, 0),
    gsSP2Triangles(24, 19, 23, 0, 25, 17, 16, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2071], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2074], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightGauntletPlate3DL[] = {
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultGauntletPlate2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2083], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 5, 4, 0),
    gsSP2Triangles(14, 1, 0, 0, 10, 15, 11, 0),
    gsSP2Triangles(16, 11, 15, 0, 17, 9, 8, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsDPPipeSync(),
    gsSPTexture(0x2710, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, 1, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 254, 15, 15, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2109], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2112], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftIronBootDL[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultIronBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2121], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 5, 0),
    gsSP2Triangles(12, 5, 8, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 18, 17, 22, 0),
    gsSP2Triangles(0, 23, 24, 0, 11, 25, 21, 0),
    gsSP2Triangles(23, 22, 26, 0, 26, 22, 17, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 27, 0),
    gsSP1Triangle(25, 19, 21, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2153], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 0, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightIronBootDL[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultIronBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2164], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 3, 4, 0),
    gsSP2Triangles(10, 9, 4, 0, 5, 8, 11, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 12, 13, 0),
    gsSP2Triangles(5, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 16, 15, 0),
    gsSP2Triangles(20, 21, 2, 0, 18, 22, 10, 0),
    gsSP2Triangles(23, 24, 21, 0, 16, 19, 25, 0),
    gsSP2Triangles(20, 23, 21, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 26, 0),
    gsSP1Triangle(18, 17, 22, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2195], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftHoverBootDL[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsHeelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2208], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 8, 13, 9, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 5, 0),
    gsSP2Triangles(25, 5, 4, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2238], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsJetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[2250], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 3, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 14, 22, 0, 22, 14, 13, 0),
    gsSP2Triangles(9, 4, 3, 0, 13, 10, 23, 0),
    gsSP2Triangles(20, 19, 24, 0, 0, 20, 24, 0),
    gsSP2Triangles(5, 6, 3, 0, 10, 13, 11, 0),
    gsSP2Triangles(5, 7, 6, 0, 23, 22, 13, 0),
    gsSP2Triangles(24, 1, 0, 0, 8, 25, 9, 0),
    gsSP2Triangles(6, 8, 9, 0, 2, 26, 0, 0),
    gsSP2Triangles(0, 26, 20, 0, 26, 18, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsFeatherTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[2277], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHoverBootDL[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsHeelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[2285], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 13, 8, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 21, 23, 0, 5, 25, 26, 0),
    gsSP2Triangles(6, 5, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[2315], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 8, 10, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsJetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[2327], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 13, 22, 0, 14, 13, 21, 0),
    gsSP2Triangles(5, 4, 9, 0, 23, 12, 14, 0),
    gsSP2Triangles(24, 19, 18, 0, 24, 18, 2, 0),
    gsSP2Triangles(5, 8, 3, 0, 11, 14, 12, 0),
    gsSP2Triangles(8, 7, 3, 0, 14, 21, 23, 0),
    gsSP2Triangles(2, 1, 24, 0, 9, 25, 6, 0),
    gsSP2Triangles(9, 6, 8, 0, 2, 26, 0, 0),
    gsSP2Triangles(18, 26, 2, 0, 18, 20, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHoverBootsFeatherTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_00EFB8[2354], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHandHoldingBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3403], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(7, 5, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 13, 14, 0),
    gsSP2Triangles(13, 4, 6, 0, 8, 4, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[3418], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[3422], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 6, 13, 0),
    gsSP2Triangles(8, 13, 6, 0, 15, 14, 16, 0),
    gsSP2Triangles(14, 15, 12, 0, 17, 13, 8, 0),
    gsSP2Triangles(17, 14, 13, 0, 2, 18, 0, 0),
    gsSP2Triangles(18, 5, 0, 0, 18, 3, 5, 0),
    gsSP2Triangles(18, 2, 3, 0, 19, 17, 8, 0),
    gsSP2Triangles(17, 16, 14, 0, 19, 16, 17, 0),
    gsSP2Triangles(20, 15, 21, 0, 12, 20, 6, 0),
    gsSP1Triangle(12, 15, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3444], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3447], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP1Triangle(14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_boyVtx_00EFB8[3465], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 0, 0, 5, 7, 8, 0),
    gsSP2Triangles(0, 9, 5, 0, 0, 10, 9, 0),
    gsSP2Triangles(2, 10, 0, 0, 2, 11, 10, 0),
    gsSP2Triangles(9, 7, 5, 0, 12, 7, 9, 0),
    gsSP2Triangles(13, 2, 3, 0, 13, 11, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightArmOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultArmOutSleeveTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT7),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3479], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(9, 8, 5, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 12, 1, 0, 11, 13, 12, 0),
    gsSP2Triangles(1, 14, 2, 0, 1, 12, 14, 0),
    gsSP2Triangles(0, 15, 3, 0, 16, 0, 4, 0),
    gsSP2Triangles(16, 17, 0, 0, 18, 19, 12, 0),
    gsSP2Triangles(14, 12, 19, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 18, 20, 0, 7, 20, 5, 0),
    gsSP2Triangles(7, 21, 20, 0, 3, 8, 4, 0),
    gsSP2Triangles(3, 6, 8, 0, 2, 15, 0, 0),
    gsSP2Triangles(5, 22, 9, 0, 5, 20, 22, 0),
    gsSP2Triangles(12, 23, 18, 0, 12, 13, 23, 0),
    gsSP2Triangles(1, 17, 11, 0, 1, 0, 17, 0),
    gsSP2Triangles(17, 10, 24, 0, 17, 16, 10, 0),
    gsSP2Triangles(13, 24, 23, 0, 23, 24, 22, 0),
    gsSP2Triangles(9, 24, 10, 0, 9, 22, 24, 0),
    gsSP2Triangles(22, 18, 23, 0, 22, 20, 18, 0),
    gsSP2Triangles(24, 11, 17, 0, 24, 13, 11, 0),
    gsSP2Triangles(4, 10, 16, 0, 4, 8, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultArmOutUpperGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[3504], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 0, 6, 0),
    gsSP2Triangles(10, 8, 7, 0, 10, 7, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 15, 11, 10, 0),
    gsSP2Triangles(17, 23, 18, 0, 24, 16, 25, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 27, 28, 0),
    gsSP2Triangles(22, 28, 19, 0, 29, 21, 20, 0),
    gsSP1Triangle(29, 20, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3535], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 11, 10, 0),
    gsSP2Triangles(12, 21, 22, 0, 12, 22, 9, 0),
    gsSP2Triangles(16, 23, 24, 0, 16, 24, 15, 0),
    gsSP2Triangles(3, 25, 26, 0, 3, 26, 19, 0),
    gsSP2Triangles(0, 27, 6, 0, 20, 24, 28, 0),
    gsSP2Triangles(20, 28, 29, 0, 12, 11, 30, 0),
    gsSP2Triangles(31, 27, 0, 0, 0, 2, 31, 0),
    gsSP1Triangle(25, 27, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3567], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 20, 0),
    gsSP2Triangles(21, 22, 0, 0, 21, 0, 23, 0),
    gsSP2Triangles(8, 24, 20, 0, 20, 25, 8, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 9, 0),
    gsSP2Triangles(11, 7, 9, 0, 12, 9, 27, 0),
    gsSP2Triangles(17, 23, 15, 0, 3, 6, 28, 0),
    gsSP2Triangles(29, 30, 17, 0, 21, 28, 6, 0),
    gsSP1Triangle(6, 31, 21, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3599], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3602], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 2, 0),
    gsSP2Triangles(14, 12, 2, 0, 15, 14, 2, 0),
    gsSP2Triangles(1, 15, 2, 0, 8, 16, 6, 0),
    gsSP2Triangles(17, 18, 10, 0, 18, 19, 11, 0),
    gsSP2Triangles(5, 3, 20, 0, 21, 10, 22, 0),
    gsSP2Triangles(23, 15, 24, 0, 25, 8, 7, 0),
    gsSP2Triangles(3, 0, 20, 0, 22, 24, 15, 0),
    gsSP2Triangles(26, 22, 15, 0, 1, 26, 15, 0),
    gsSP2Triangles(3, 8, 27, 0, 8, 28, 16, 0),
    gsSP2Triangles(27, 1, 3, 0, 0, 2, 29, 0),
    gsSP1Triangle(7, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3634], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 10, 0),
    gsSP2Triangles(11, 6, 8, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 2, 0, 7, 20, 21, 0),
    gsSP2Triangles(22, 19, 18, 0, 21, 20, 18, 0),
    gsSP2Triangles(2, 21, 18, 0, 6, 22, 18, 0),
    gsSP2Triangles(18, 20, 6, 0, 21, 23, 17, 0),
    gsSP2Triangles(1, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(13, 7, 29, 0, 13, 10, 8, 0),
    gsSP2Triangles(17, 16, 21, 0, 23, 21, 2, 0),
    gsSP2Triangles(30, 31, 17, 0, 16, 29, 21, 0),
    gsSP2Triangles(28, 1, 26, 0, 28, 24, 1, 0),
    gsSP2Triangles(8, 9, 11, 0, 2, 1, 23, 0),
    gsSP1Triangle(2, 19, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[3666], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 6, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 12, 0),
    gsSP2Triangles(25, 12, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3697], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 9, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 17, 19, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 26, 19, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3728], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 1, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 2, 20, 21, 0),
    gsSP2Triangles(17, 22, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(13, 26, 11, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 27, 0, 1, 20, 2, 0),
    gsSP1Triangle(31, 1, 14, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3760], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 1, 0),
    gsSP2Triangles(19, 20, 0, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3792], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 14, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 17, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 4, 26, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftArmOutNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultArmOutSleeveTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT7),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3820], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 12, 14, 0, 12, 13, 10, 0),
    gsSP2Triangles(0, 16, 17, 0, 12, 11, 8, 0),
    gsSP2Triangles(2, 16, 0, 0, 2, 18, 16, 0),
    gsSP2Triangles(19, 5, 7, 0, 6, 12, 4, 0),
    gsSP2Triangles(6, 14, 12, 0, 20, 15, 14, 0),
    gsSP2Triangles(20, 1, 15, 0, 19, 20, 5, 0),
    gsSP2Triangles(18, 20, 19, 0, 1, 18, 2, 0),
    gsSP2Triangles(1, 20, 18, 0, 8, 4, 12, 0),
    gsSP2Triangles(14, 5, 20, 0, 14, 6, 5, 0),
    gsSP2Triangles(15, 3, 13, 0, 15, 1, 3, 0),
    gsSP2Triangles(21, 3, 0, 0, 21, 22, 3, 0),
    gsSP2Triangles(0, 17, 21, 0, 13, 22, 10, 0),
    gsSP1Triangle(13, 3, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultArmOutUpperGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[3843], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(19, 9, 8, 0, 19, 8, 12, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 6, 0),
    gsSP2Triangles(23, 6, 5, 0, 12, 11, 19, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 14, 30, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3874], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(0, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 1, 13, 0, 21, 13, 22, 0),
    gsSP2Triangles(23, 20, 24, 0, 25, 26, 19, 0),
    gsSP2Triangles(25, 19, 18, 0, 13, 1, 0, 0),
    gsSP2Triangles(16, 27, 28, 0, 23, 5, 4, 0),
    gsSP2Triangles(23, 4, 18, 0, 25, 9, 8, 0),
    gsSP2Triangles(25, 8, 17, 0, 12, 29, 30, 0),
    gsSP2Triangles(16, 26, 25, 0, 31, 6, 5, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[3906], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 8, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 9, 18, 0),
    gsSP2Triangles(19, 18, 9, 0, 20, 21, 22, 0),
    gsSP1Triangle(5, 6, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingBowFirstPersonDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultBowBodyTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 69, 69, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3930], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 3, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 8, 6, 0, 4, 8, 7, 0),
    gsSP2Triangles(9, 4, 1, 0, 9, 8, 4, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 12, 11, 0),
    gsSP2Triangles(7, 11, 4, 0, 13, 12, 10, 0),
    gsSP2Triangles(13, 14, 12, 0, 2, 14, 13, 0),
    gsSP2Triangles(2, 15, 14, 0, 4, 15, 2, 0),
    gsSP2Triangles(4, 16, 15, 0, 11, 16, 4, 0),
    gsSP2Triangles(7, 5, 10, 0, 13, 0, 2, 0),
    gsSP2Triangles(10, 0, 13, 0, 10, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 161, 0, 0, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3947], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 4, 3, 0, 2, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(7, 8, 5, 0, 6, 5, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3957], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 5, 0, 10, 2, 11, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 5, 8, 0),
    gsSP2Triangles(14, 8, 6, 0, 14, 13, 8, 0),
    gsSP2Triangles(15, 14, 6, 0, 6, 16, 7, 0),
    gsSP2Triangles(17, 15, 6, 0, 5, 12, 17, 0),
    gsSP2Triangles(17, 6, 5, 0, 9, 16, 6, 0),
    gsSP2Triangles(5, 18, 9, 0, 0, 19, 20, 0),
    gsSP2Triangles(0, 11, 19, 0, 20, 21, 0, 0),
    gsSP2Triangles(7, 18, 5, 0, 4, 10, 11, 0),
    gsSP2Triangles(11, 0, 4, 0, 22, 23, 1, 0),
    gsSP2Triangles(11, 1, 23, 0, 11, 23, 19, 0),
    gsSP2Triangles(21, 1, 0, 0, 21, 22, 1, 0),
    gsSP2Triangles(11, 2, 1, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[3981], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 17, 16, 24, 0),
    gsSP2Triangles(6, 5, 13, 0, 25, 6, 26, 0),
    gsSP2Triangles(27, 28, 15, 0, 29, 30, 26, 0),
    gsSP1Triangle(23, 22, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4013], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 11, 10, 0, 13, 15, 16, 0),
    gsSP2Triangles(16, 11, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 12, 0, 0, 21, 1, 0, 0),
    gsSP2Triangles(22, 17, 23, 0, 18, 17, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 8, 7, 0),
    gsSP2Triangles(27, 25, 1, 0, 23, 28, 22, 0),
    gsSP2Triangles(22, 7, 18, 0, 1, 25, 29, 0),
    gsSP2Triangles(12, 20, 10, 0, 0, 3, 20, 0),
    gsSP1Triangle(30, 31, 17, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4045], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 15, 2, 0),
    gsSP2Triangles(2, 16, 0, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4069], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 0, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 6, 11, 12, 0),
    gsSP2Triangles(6, 12, 13, 0, 3, 8, 0, 0),
    gsSP2Triangles(3, 2, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(3, 11, 6, 0, 5, 14, 4, 0),
    gsSP2Triangles(6, 8, 3, 0, 7, 13, 15, 0),
    gsSP2Triangles(7, 15, 9, 0, 13, 7, 6, 0),
    gsSP1Triangle(8, 10, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[4085], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 6, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 13, 15, 18, 0),
    gsSP2Triangles(12, 19, 13, 0, 20, 1, 21, 0),
    gsSP2Triangles(20, 2, 1, 0, 9, 19, 22, 0),
    gsSP2Triangles(12, 22, 19, 0, 23, 15, 14, 0),
    gsSP2Triangles(23, 14, 11, 0, 24, 25, 16, 0),
    gsSP2Triangles(11, 19, 9, 0, 1, 3, 26, 0),
    gsSP2Triangles(18, 7, 6, 0, 18, 6, 13, 0),
    gsSP2Triangles(26, 21, 1, 0, 26, 3, 27, 0),
    gsSP2Triangles(1, 0, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(11, 10, 31, 0, 17, 28, 0, 0),
    gsSP2Triangles(27, 29, 26, 0, 5, 27, 3, 0),
    gsSP1Triangle(30, 21, 26, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4117], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 8, 17, 6, 0),
    gsSP2Triangles(18, 19, 2, 0, 20, 21, 22, 0),
    gsSP2Triangles(10, 12, 20, 0, 23, 24, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightHandHoldingHookshotFarDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotMetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_00EFB8[4142], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 1, 4, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 13, 14, 0),
    gsSP2Triangles(7, 14, 8, 0, 15, 11, 10, 0),
    gsSP2Triangles(6, 9, 16, 0, 6, 16, 17, 0),
    gsSP2Triangles(12, 11, 18, 0, 11, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(1, 24, 25, 0, 1, 0, 24, 0),
    gsSP2Triangles(1, 26, 5, 0, 1, 25, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4172], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 1, 7, 8, 0),
    gsSP2Triangles(1, 8, 2, 0, 9, 5, 4, 0),
    gsSP2Triangles(0, 3, 10, 0, 0, 10, 11, 0),
    gsSP2Triangles(6, 5, 12, 0, 5, 13, 12, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 16, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(16, 18, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(30, 26, 28, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4203], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(2, 8, 9, 0, 4, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4233], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 3, 0, 10, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkAdultHookshotHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[4245], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(3, 12, 4, 0, 0, 13, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHookshotDesignTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT4),
    gsSPVertex(&object_link_boyVtx_00EFB8[4259], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 4, 11, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet1Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT5),
    gsSPVertex(&object_link_boyVtx_00EFB8[4275], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 17, 16, 24, 0),
    gsSP2Triangles(6, 5, 13, 0, 25, 6, 26, 0),
    gsSP2Triangles(27, 28, 15, 0, 29, 30, 26, 0),
    gsSP1Triangle(23, 22, 31, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4307], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 11, 10, 0, 13, 15, 16, 0),
    gsSP2Triangles(16, 11, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 12, 0, 0, 21, 1, 0, 0),
    gsSP2Triangles(22, 17, 23, 0, 18, 17, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 22, 8, 7, 0),
    gsSP2Triangles(27, 25, 1, 0, 23, 28, 22, 0),
    gsSP2Triangles(22, 7, 18, 0, 1, 25, 29, 0),
    gsSP2Triangles(12, 20, 10, 0, 0, 3, 20, 0),
    gsSP1Triangle(30, 31, 17, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4339], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 15, 2, 0),
    gsSP2Triangles(2, 16, 0, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultDefaultGauntlet2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_boyVtx_00EFB8[4363], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 0, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 6, 11, 12, 0),
    gsSP2Triangles(6, 12, 13, 0, 3, 8, 0, 0),
    gsSP2Triangles(3, 2, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(3, 11, 6, 0, 5, 14, 4, 0),
    gsSP2Triangles(6, 8, 3, 0, 7, 13, 15, 0),
    gsSP2Triangles(7, 15, 9, 0, 13, 7, 6, 0),
    gsSP1Triangle(8, 10, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkAdultHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT6),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_boyVtx_00EFB8[4379], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 6, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 13, 15, 18, 0),
    gsSP2Triangles(12, 19, 13, 0, 20, 1, 21, 0),
    gsSP2Triangles(20, 2, 1, 0, 9, 19, 22, 0),
    gsSP2Triangles(12, 22, 19, 0, 23, 15, 14, 0),
    gsSP2Triangles(23, 14, 11, 0, 24, 25, 16, 0),
    gsSP2Triangles(11, 19, 9, 0, 1, 3, 26, 0),
    gsSP2Triangles(18, 7, 6, 0, 18, 6, 13, 0),
    gsSP2Triangles(26, 21, 1, 0, 26, 3, 27, 0),
    gsSP2Triangles(1, 0, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(11, 10, 31, 0, 17, 28, 0, 0),
    gsSP2Triangles(27, 29, 26, 0, 5, 27, 3, 0),
    gsSP1Triangle(30, 21, 26, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4411], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 8, 17, 6, 0),
    gsSP2Triangles(18, 19, 2, 0, 20, 21, 22, 0),
    gsSP2Triangles(10, 12, 20, 0, 23, 24, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_boyVtx_00EFB8[4466], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_00EFB8[4469], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 5, 8, 3, 0),
    gsSP2Triangles(5, 9, 8, 0, 1, 9, 5, 0),
    gsSP2Triangles(1, 10, 9, 0, 8, 6, 3, 0),
    gsSP2Triangles(11, 6, 8, 0, 12, 1, 0, 0),
    gsSP1Triangle(12, 10, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 204),
    gsSPVertex(&object_link_boyVtx_00EFB8[4482], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(1, 3, 4, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 5, 3, 0, 6, 3, 0, 0),
    gsSP2Triangles(10, 1, 11, 0, 10, 11, 7, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02AE70[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02AE70.vtx.inc"
};

Gfx gLinkAdultHookshotChainDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotChainTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02AE70, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02B0A8[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B0A8.vtx.inc"
};

Gfx gLinkAdultBowStringDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B0A8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_02B168[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B168.vtx.inc"
};

Gfx gLinkAdultHookshotTipDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B168, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_02B168[3], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 11, 14, 0),
    gsSPEndDisplayList(),
};

u64 gLinkAdultHookshotChainTex[] = {
#include "assets/objects/object_link_boy/hookshot_chain.rgba16.inc.c"
};

Vtx object_link_boyVtx_02B738[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02B738.vtx.inc"
};

Gfx gLinkAdultBrokenGiantsKnifeBladeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x4E20, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_boyVtx_02B738, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_boyVtx_02B738[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_boyVtx_02B738[33], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPEndDisplayList(),
};

u64 gLinkAdultHookshotReticleTex[] = {
#include "assets/objects/object_link_boy/hookshot_dot.i8.inc.c"
};

Vtx object_link_boyVtx_02CB18[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_02CB18.vtx.inc"
};

Gfx gLinkAdultHookshotReticleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkAdultHookshotReticleTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsSPVertex(object_link_boyVtx_02CB18, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_boyVtx_031350[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_031350.vtx.inc"
};

static Vtx gLinkAdultVtx_033760[54] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_033760.vtx.inc"
};

Vtx object_link_boyVtx_033AC0[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_033AC0.vtx.inc"
};

static Vtx gLinkAdultVtx_0340A0[146] = {
#include "assets/objects/object_link_boy/gLinkAdultVtx_0340A0.vtx.inc"
};

Vtx object_link_boyVtx_0349C0[] = {
#include "assets/objects/object_link_boy/object_link_boyVtx_0349C0.vtx.inc"
};

Gfx gLinkAdultWaistNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBeltTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[282], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 1, 9, 10, 0),
    gsSP1Triangle(1, 10, 2, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPDisplayList(0x0C000000),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 13, 12, 18, 0),
    gsSP2Triangles(11, 19, 12, 0, 20, 14, 17, 0),
    gsSP1Triangle(18, 21, 20, 0),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBeltClaspTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBeltTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x003C),
    gsSPVertex(&object_link_boyVtx_031350[312], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 12, 0),
    gsSP2Triangles(13, 10, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(11, 15, 9, 0, 16, 15, 11, 0),
    gsSP2Triangles(14, 17, 13, 0, 9, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[97], 8, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_031350[105], 18, 8),
    gsSP2Triangles(3, 8, 0, 0, 3, 1, 9, 0),
    gsSP2Triangles(3, 10, 11, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 6, 12, 0, 13, 14, 3, 0),
    gsSP2Triangles(15, 16, 1, 0, 17, 1, 2, 0),
    gsSP2Triangles(18, 19, 2, 0, 20, 2, 5, 0),
    gsSP2Triangles(2, 21, 22, 0, 7, 23, 24, 0),
    gsSP1Triangle(25, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[123], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(13, 10, 14, 0, 15, 13, 14, 0),
    gsSP1Triangle(14, 16, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightLegNearDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[41], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[46], 15, 5),
    gsSP2Triangles(0, 1, 5, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 3, 8, 0, 9, 3, 4, 0),
    gsSP2Triangles(10, 4, 11, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 1, 2, 0, 15, 4, 0, 0),
    gsSP2Triangles(16, 0, 17, 0, 18, 2, 19, 0),
    gsSPVertex(&object_link_boyVtx_031350[61], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBoot2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(15, 17, 10, 0, 14, 12, 11, 0),
    gsSP2Triangles(16, 19, 20, 0, 20, 18, 16, 0),
    gsSP2Triangles(11, 18, 14, 0, 13, 12, 8, 0),
    gsSP2Triangles(13, 8, 21, 0, 8, 7, 22, 0),
    gsSP2Triangles(8, 22, 21, 0, 11, 17, 18, 0),
    gsSP2Triangles(19, 16, 15, 0, 19, 15, 23, 0),
    gsSP1Triangle(17, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBootBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSPVertex(&object_link_boyVtx_031350[85], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 0, 8, 0),
    gsSP2Triangles(3, 5, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 5, 0, 10, 4, 3, 0),
    gsSP2Triangles(10, 3, 11, 0, 0, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightFootNearDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_boyVtx_031350, 4, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[4], 22, 4),
    gsSP2Triangles(0, 4, 5, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 9, 2, 0, 0, 10, 11, 0),
    gsSP2Triangles(3, 1, 12, 0, 13, 14, 0, 0),
    gsSP2Triangles(1, 2, 15, 0, 3, 16, 0, 0),
    gsSP2Triangles(17, 2, 0, 0, 1, 18, 19, 0),
    gsSP2Triangles(20, 21, 1, 0, 22, 3, 23, 0),
    gsSP1Triangle(24, 25, 3, 0),
    gsSPVertex(&object_link_boyVtx_031350[26], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 0, 3, 0),
    gsSP2Triangles(7, 3, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 7, 0, 11, 4, 6, 0),
    gsSP2Triangles(11, 12, 4, 0, 12, 11, 13, 0),
    gsSP1Triangle(13, 14, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[238], 8, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_boyVtx_031350[246], 19, 8),
    gsSP2Triangles(2, 8, 1, 0, 9, 10, 0, 0),
    gsSP2Triangles(11, 0, 1, 0, 12, 6, 3, 0),
    gsSP2Triangles(13, 3, 5, 0, 1, 14, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 4, 0, 18, 0),
    gsSP2Triangles(5, 4, 19, 0, 5, 20, 21, 0),
    gsSP2Triangles(22, 23, 4, 0, 24, 25, 7, 0),
    gsSP1Triangle(7, 6, 26, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[265], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(13, 11, 14, 0, 13, 14, 15, 0),
    gsSP1Triangle(15, 16, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftLegNearDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[181], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[186], 15, 5),
    gsSP2Triangles(5, 1, 0, 0, 6, 7, 2, 0),
    gsSP2Triangles(8, 3, 2, 0, 9, 4, 3, 0),
    gsSP2Triangles(10, 3, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 0, 4, 15, 0),
    gsSP2Triangles(16, 0, 17, 0, 18, 2, 19, 0),
    gsSPVertex(&object_link_boyVtx_031350[201], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBoot2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 11, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 17, 20, 0),
    gsSP2Triangles(13, 17, 19, 0, 12, 11, 14, 0),
    gsSP2Triangles(9, 8, 18, 0, 18, 20, 9, 0),
    gsSP2Triangles(14, 20, 12, 0, 21, 7, 22, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 8, 0),
    gsSP2Triangles(21, 8, 7, 0, 20, 17, 12, 0),
    gsSP2Triangles(24, 19, 18, 0, 24, 18, 8, 0),
    gsSP1Triangle(13, 12, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBootBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSPVertex(&object_link_boyVtx_031350[226], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(3, 5, 10, 0, 4, 3, 6, 0),
    gsSP2Triangles(4, 6, 9, 0, 0, 10, 5, 0),
    gsSP2Triangles(0, 5, 11, 0, 0, 11, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftFootNearDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[140], 4, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[144], 22, 4),
    gsSP2Triangles(4, 5, 0, 0, 1, 6, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 10, 11, 0, 0),
    gsSP2Triangles(12, 1, 3, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 2, 1, 0, 0, 16, 3, 0),
    gsSP2Triangles(0, 2, 17, 0, 18, 19, 1, 0),
    gsSP2Triangles(1, 20, 21, 0, 22, 3, 23, 0),
    gsSP1Triangle(3, 24, 25, 0),
    gsSPVertex(&object_link_boyVtx_031350[166], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 0, 3, 0),
    gsSP2Triangles(7, 3, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 7, 0, 4, 6, 11, 0),
    gsSP2Triangles(6, 12, 11, 0, 13, 11, 12, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultCollarNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultCollarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_0349C0[137], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP1Triangle(8, 6, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP1Triangle(9, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultTorsoNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_0349C0[94], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 8, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 14, 3, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 9, 13, 17, 0),
    gsSP2Triangles(18, 19, 12, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 10, 0),
    gsSP2Triangles(10, 9, 24, 0, 26, 3, 14, 0),
    gsSP2Triangles(26, 14, 16, 0, 26, 16, 27, 0),
    gsSP2Triangles(28, 26, 27, 0, 4, 7, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 28, 27, 19, 0),
    gsSP2Triangles(28, 19, 18, 0, 28, 18, 8, 0),
    gsSP2Triangles(17, 13, 14, 0, 16, 19, 27, 0),
    gsSP2Triangles(7, 28, 8, 0, 4, 3, 26, 0),
    gsSP2Triangles(29, 2, 1, 0, 6, 5, 21, 0),
    gsSP2Triangles(6, 21, 20, 0, 5, 2, 29, 0),
    gsSP2Triangles(5, 29, 21, 0, 19, 16, 13, 0),
    gsSP2Triangles(19, 13, 12, 0, 7, 4, 26, 0),
    gsSP2Triangles(7, 26, 28, 0, 10, 25, 29, 0),
    gsSP2Triangles(10, 29, 1, 0, 8, 18, 30, 0),
    gsSP2Triangles(15, 17, 14, 0, 23, 22, 24, 0),
    gsSP2Triangles(6, 15, 3, 0, 9, 17, 23, 0),
    gsSP2Triangles(24, 9, 23, 0, 18, 12, 11, 0),
    gsSP2Triangles(0, 8, 30, 0, 11, 12, 9, 0),
    gsSP1Triangle(11, 30, 18, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultTunicTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_0349C0[125], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 0, 2, 0, 2, 3, 5, 0),
    gsSP2Triangles(2, 6, 4, 0, 7, 0, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 8, 10, 0),
    gsSP2Triangles(11, 8, 7, 0, 5, 6, 2, 0),
    gsSP2Triangles(7, 4, 11, 0, 10, 5, 9, 0),
    gsSP1Triangle(5, 3, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHeadNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[365], 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultNeckTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[371], 18, 6),
    gsSP2Triangles(6, 0, 1, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 2, 3, 0, 10, 0, 11, 0),
    gsSP2Triangles(12, 3, 5, 0, 0, 13, 14, 0),
    gsSP2Triangles(2, 15, 16, 0, 4, 17, 18, 0),
    gsSP2Triangles(19, 4, 2, 0, 20, 1, 4, 0),
    gsSP2Triangles(21, 5, 0, 0, 5, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultHeadTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&object_link_boyVtx_031350[389], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 8, 0, 13, 14, 15, 0),
    gsSP2Triangles(3, 16, 7, 0, 7, 4, 3, 0),
    gsSP2Triangles(16, 10, 15, 0, 16, 3, 11, 0),
    gsSP2Triangles(10, 16, 11, 0, 11, 8, 10, 0),
    gsSP2Triangles(14, 7, 16, 0, 14, 16, 15, 0),
    gsSP2Triangles(17, 18, 9, 0, 6, 19, 20, 0),
    gsSP2Triangles(12, 21, 22, 0, 12, 22, 23, 0),
    gsSP2Triangles(24, 22, 25, 0, 22, 24, 23, 0),
    gsSP2Triangles(22, 21, 25, 0, 21, 26, 25, 0),
    gsSP2Triangles(8, 12, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(24, 25, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(30, 29, 27, 0),
    gsSPVertex(&object_link_boyVtx_031350[420], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 3, 0),
    gsSP2Triangles(3, 8, 2, 0, 2, 8, 0, 0),
    gsSP2Triangles(0, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 0, 9, 11, 0),
    gsSP2Triangles(0, 11, 13, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 1, 0, 13, 1, 0, 0),
    gsSP2Triangles(15, 16, 17, 0, 3, 1, 18, 0),
    gsSP2Triangles(15, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultSkirtAndHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPVertex(&object_link_boyVtx_031350[449], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
    gsSP2Triangles(12, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(7, 6, 16, 0, 16, 6, 17, 0),
    gsSP2Triangles(19, 20, 13, 0, 20, 19, 21, 0),
    gsSP2Triangles(1, 21, 22, 0, 18, 22, 14, 0),
    gsSP2Triangles(18, 2, 22, 0, 16, 18, 14, 0),
    gsSP2Triangles(2, 1, 22, 0, 16, 15, 7, 0),
    gsSP2Triangles(22, 15, 14, 0, 22, 19, 15, 0),
    gsSP2Triangles(21, 19, 22, 0, 10, 12, 23, 0),
    gsSP2Triangles(20, 21, 1, 0, 24, 12, 13, 0),
    gsSP2Triangles(23, 12, 25, 0, 12, 24, 25, 0),
    gsSP2Triangles(20, 25, 24, 0, 20, 0, 25, 0),
    gsSP2Triangles(20, 1, 0, 0, 24, 13, 20, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_boyVtx_031350[475], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 1, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 1, 20, 7, 0),
    gsSP2Triangles(0, 20, 1, 0, 21, 3, 8, 0),
    gsSP2Triangles(8, 3, 1, 0, 11, 22, 23, 0),
    gsSP1Triangle(11, 23, 12, 0),
    gsSPVertex(&object_link_boyVtx_031350[499], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(6, 8, 12, 0, 4, 13, 5, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(18, 5, 13, 0, 11, 10, 0, 0),
    gsSP2Triangles(19, 2, 1, 0, 0, 20, 11, 0),
    gsSP2Triangles(21, 20, 0, 0, 20, 9, 11, 0),
    gsSPVertex(&object_link_boyVtx_031350[521], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00BC, 0x00BC),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 18, 22, 0),
    gsSP2Triangles(20, 22, 21, 0, 16, 17, 14, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkAdultEarringTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 26, 29, 0, 23, 30, 24, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultHeadTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[552], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 1, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultHeadTLUT),
    gsDPLoadTextureBlock(gLinkAdultEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 9, 0),
    gsSP2Triangles(14, 15, 7, 0, 8, 7, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultHeadTLUT),
    gsDPLoadTextureBlock(gLinkAdultNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultHeadTLUT),
    gsDPLoadTextureBlock(gLinkAdultNose2Tex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(20, 21, 22, 0, 23, 22, 24, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultHatNearDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_031350[330], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_031350[336], 18, 6),
    gsSP2Triangles(6, 0, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(3, 2, 10, 0, 11, 12, 2, 0),
    gsSP2Triangles(13, 4, 0, 0, 1, 5, 14, 0),
    gsSP2Triangles(15, 2, 1, 0, 16, 17, 1, 0),
    gsSP2Triangles(1, 18, 19, 0, 20, 5, 4, 0),
    gsSP2Triangles(21, 0, 3, 0, 22, 0, 23, 0),
    gsSPVertex(&object_link_boyVtx_031350[354], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 3, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 2, 1, 0, 0, 6, 1, 0),
    gsSP2Triangles(5, 8, 1, 0, 5, 6, 3, 0),
    gsSP2Triangles(3, 9, 4, 0, 5, 7, 8, 0),
    gsSP2Triangles(1, 6, 5, 0, 9, 3, 0, 0),
    gsSP2Triangles(10, 0, 2, 0, 9, 0, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_0349C0[47], 5, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_0349C0[52], 15, 5),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 2, 0),
    gsSP2Triangles(3, 9, 10, 0, 11, 1, 4, 0),
    gsSP2Triangles(2, 12, 4, 0, 13, 14, 3, 0),
    gsSP2Triangles(15, 16, 4, 0, 17, 2, 0, 0),
    gsSP2Triangles(18, 0, 3, 0, 3, 1, 19, 0),
    gsSPVertex(&object_link_boyVtx_0349C0[67], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 2, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 10, 9, 8, 0),
    gsSP2Triangles(9, 11, 0, 0, 10, 12, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(14, 13, 16, 0, 15, 20, 13, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 22, 0, 25, 22, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightArmNearDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_boyVtx_0349C0, 7, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_0349C0[7], 22, 7),
    gsSP2Triangles(7, 4, 5, 0, 8, 5, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(14, 15, 3, 0, 3, 4, 16, 0),
    gsSP1Triangle(17, 5, 0, 0),
    gsSP2Triangles(1, 6, 18, 0, 19, 6, 2, 0),
    gsSP2Triangles(2, 20, 21, 0, 22, 23, 1, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(27, 26, 28, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultArmGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x007C),
    gsSPVertex(&object_link_boyVtx_0349C0[29], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 10, 9, 0, 16, 13, 15, 0),
    gsSP2Triangles(1, 17, 16, 0, 16, 15, 1, 0),
    gsSP2Triangles(9, 13, 16, 0, 0, 17, 1, 0),
    gsSP2Triangles(2, 1, 15, 0, 2, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_boyVtx_033AC0[47], 5, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 30, 105, 27, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_033AC0[52], 15, 5),
    gsSP2Triangles(5, 6, 4, 0, 2, 7, 8, 0),
    gsSP2Triangles(9, 10, 3, 0, 4, 1, 11, 0),
    gsSP2Triangles(4, 12, 2, 0, 3, 13, 14, 0),
    gsSP2Triangles(4, 15, 16, 0, 0, 2, 17, 0),
    gsSP2Triangles(3, 0, 18, 0, 19, 1, 3, 0),
    gsSPVertex(&object_link_boyVtx_033AC0[67], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 0, 2, 0),
    gsSP2Triangles(10, 7, 6, 0, 6, 9, 10, 0),
    gsSP2Triangles(2, 11, 9, 0, 9, 12, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 16, 15, 19, 0),
    gsSP1Triangle(16, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(25, 24, 23, 0, 24, 26, 20, 0),
    gsSP1Triangle(20, 26, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftArmNearDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_boyVtx_033AC0, 7, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_boyVtx_033AC0[7], 17, 7),
    gsSP2Triangles(3, 0, 7, 0, 8, 0, 2, 0),
    gsSP2Triangles(9, 10, 3, 0, 2, 11, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 4, 15, 16, 0),
    gsSP2Triangles(4, 17, 18, 0, 1, 6, 19, 0),
    gsSP2Triangles(20, 5, 4, 0, 21, 6, 5, 0),
    gsSP1Triangle(22, 5, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT2),
    gsDPLoadTextureBlock(gLinkAdultArmGauntletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x007C),
    gsSPVertex(&object_link_boyVtx_033AC0[24], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(5, 14, 15, 0, 12, 6, 15, 0),
    gsSP2Triangles(15, 10, 9, 0, 9, 12, 15, 0),
    gsSP2Triangles(15, 6, 5, 0, 16, 14, 5, 0),
    gsSP2Triangles(13, 12, 9, 0, 13, 9, 8, 0),
    gsSP2Triangles(16, 5, 4, 0, 0, 17, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkAdultTLUT3),
    gsDPLoadTextureBlock(gLinkAdultLegTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP1Triangle(21, 20, 22, 0),
    gsSPEndDisplayList(),
};

LodLimb gLinkAdultRootLimb = { 
    { -57, 3377, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultWaistLimb = { 
    { 0, 0, 0 }, 0x02, 0x09,
    { gLinkAdultWaistNearDL, gLinkAdultWaistNearDL }
};

LodLimb gLinkAdultLowerControlLimb = { 
    { 945, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultRightThighLimb = { 
    { -399, 69, -249 }, 0x04, 0x06,
    { gLinkAdultRightThighNearDL, gLinkAdultRightThighNearDL }
};

LodLimb gLinkAdultRightLegLimb = { 
    { 1306, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkAdultRightLegNearDL, gLinkAdultRightLegNearDL }
};

LodLimb gLinkAdultRightFootLimb = { 
    { 1256, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultRightFootNearDL, gLinkAdultRightFootNearDL }
};

LodLimb gLinkAdultLeftThighLimb = { 
    { -396, 76, 264 }, 0x07, LIMB_DONE,
    { gLinkAdultLeftThighNearDL, gLinkAdultLeftThighNearDL }
};

LodLimb gLinkAdultLeftLegLimb = { 
    { 1304, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkAdultLeftLegNearDL, gLinkAdultLeftLegNearDL }
};

LodLimb gLinkAdultLeftFootLimb = { 
    { 1257, 6, 3 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultLeftFootNearDL, gLinkAdultLeftFootNearDL }
};

LodLimb gLinkAdultUpperControlLimb = { 
    { 0, 21, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkAdultHeadLimb = { 
    { 1392, -259, 0 }, 0x0B, 0x0C,
    { gLinkAdultHeadNearDL, gLinkAdultHeadNearDL }
};

LodLimb gLinkAdultHatLimb = { 
    { -298, -700, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultHatNearDL, gLinkAdultHatNearDL }
};

LodLimb gLinkAdultCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkAdultCollarNearDL, gLinkAdultCollarNearDL }
};

LodLimb gLinkAdultLeftShoulderLimb = { 
    { 1039, -172, 680 }, 0x0E, 0x10,
    { gLinkAdultLeftShoulderNearDL, gLinkAdultLeftShoulderNearDL }
};

LodLimb gLinkAdultLeftArmLimb = { 
    { 919, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkAdultLeftArmNearDL, gLinkAdultLeftArmNearDL }
};

LodLimb gLinkAdultLeftHandLimb = { 
    { 754, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultLeftHandNearDL, gLinkAdultLeftHandNearDL }
};

LodLimb gLinkAdultRightShoulderLimb = { 
    { 1039, -173, -680 }, 0x11, 0x13,
    { gLinkAdultRightShoulderNearDL, gLinkAdultRightShoulderNearDL }
};

LodLimb gLinkAdultRightArmLimb = { 
    { 919, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkAdultRightArmNearDL, gLinkAdultRightArmNearDL }
};

LodLimb gLinkAdultRightHandLimb = { 
    { 754, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultRightHandNearDL, gLinkAdultRightHandNearDL }
};

LodLimb gLinkAdultSwordAndSheathLimb = { 
    { 978, -692, 342 }, LIMB_DONE, 0x14,
    { gLinkAdultMasterSwordAndSheathNearDL, gLinkAdultMasterSwordAndSheathNearDL }
};

LodLimb gLinkTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkAdultTorsoNearDL, gLinkAdultTorsoNearDL }
};

void* gLinkAdultSkelLimbs[] = {
    &gLinkAdultRootLimb,
    &gLinkAdultWaistLimb,
    &gLinkAdultLowerControlLimb,
    &gLinkAdultRightThighLimb,
    &gLinkAdultRightLegLimb,
    &gLinkAdultRightFootLimb,
    &gLinkAdultLeftThighLimb,
    &gLinkAdultLeftLegLimb,
    &gLinkAdultLeftFootLimb,
    &gLinkAdultUpperControlLimb,
    &gLinkAdultHeadLimb,
    &gLinkAdultHatLimb,
    &gLinkAdultCollarLimb,
    &gLinkAdultLeftShoulderLimb,
    &gLinkAdultLeftArmLimb,
    &gLinkAdultLeftHandLimb,
    &gLinkAdultRightShoulderLimb,
    &gLinkAdultRightArmLimb,
    &gLinkAdultRightHandLimb,
    &gLinkAdultSwordAndSheathLimb,
    &gLinkTorsoLimb,
};

FlexSkeletonHeader gLinkAdultSkel = { 
    { gLinkAdultSkelLimbs, ARRAY_COUNT(gLinkAdultSkelLimbs) }, 18
};
