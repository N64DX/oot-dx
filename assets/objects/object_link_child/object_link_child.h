#ifndef OBJECT_LINK_CHILD_H
#define OBJECT_LINK_CHILD_H

#include "ultra64.h"
#include "tex_len.h"
#include "animation.h"

#define LINK_CHILD_EYES_TEX_WIDTH 64
#define LINK_CHILD_EYES_TEX_HEIGHT 32
extern u64 gLinkChildEyesOpenTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesHalfTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesClosedfTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesLeftTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesRightTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesWideTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesDownTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];
extern u64 gLinkChildEyesWincingTex[TEX_LEN(u64, LINK_CHILD_EYES_TEX_WIDTH, LINK_CHILD_EYES_TEX_HEIGHT, 8)];

#define LINK_CHILD_MOUTH_TEX_WIDTH 32
#define LINK_CHILD_MOUTH_TEX_HEIGHT 32
extern u64 gLinkChildMouthClosedTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)];
extern u64 gLinkChildMouthHalfTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)];
extern u64 gLinkChildMouthOpenTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)];
extern u64 gLinkChildMouthSmileTex[TEX_LEN(u64, LINK_CHILD_MOUTH_TEX_WIDTH, LINK_CHILD_MOUTH_TEX_HEIGHT, 8)];

extern Gfx gLinkChildLinkDekuStickDL[41];

extern Gfx gLinkChildLeftHandNearDL[45];
extern Gfx gLinkChildLeftFistNearDL[36];
extern Gfx gLinkChildLeftFistAndKokiriSwordNearDL[81];
extern Gfx gLinkChildRightHandNearDL[44];
extern Gfx gLinkChildRightHandClosedNearDL[36];
extern Gfx gLinkChildRightFistAndDekuShieldNearDL[68];
extern Gfx gLinkChildLeftFistAndBoomerangNearDL[73];
extern Gfx gLinkChildHylianShieldSwordAndSheathNearDL[83];
extern Gfx gLinkChildHylianShieldAndSheathNearDL[69];
extern Gfx gLinkChildDekuShieldSwordAndSheathNearDL[85];
extern Gfx gLinkChildDekuShieldAndSheathNearDL[71];
extern Gfx gLinkChildSwordAndSheathNearDL[56];
extern Gfx gLinkChildSheathNearDL[39];
extern Gfx gLinkChildLeftHandHoldingMasterSwordDL[131];
extern Gfx gLinkChildRightHandAndOotNearDL[74];
extern Gfx gLinkChildRightHandHoldingFairyOcarinaNearDL[73];
extern Gfx gLinkChildRightHandHoldingSlingshotNearDL[60];
extern Gfx gLinkChildLeftHandUpNearDL[41];
extern Gfx gLinkChildGoronBraceletDL[45];
extern Gfx gLinkChildRightArmStretchedSlingshotDL[134];
extern Gfx gLinkChildBottleDL[33];

extern Gfx gLinkChildWaistNearDL[73];
extern Gfx gLinkChildRightShoulderNearDL[58];

extern Gfx gLinkChildSlingshotStringDL[12];

extern Gfx gLinkChildDekuShieldDL[42];
extern Gfx gLinkChildDekuShieldWithMatrixDL[3];

extern Gfx gLinkChildSkullMaskDL[70];
extern Gfx gLinkChildSpookyMaskDL[30];
extern Gfx gLinkChildKeatonMaskDL[50];
extern Gfx gLinkChildMaskOfTruthDL[44];
extern Gfx gLinkChildGoronMaskDL[70];
extern Gfx gLinkChildZoraMaskDL[65];
extern Gfx gLinkChildGerudoMaskDL[84];
extern Gfx gLinkChildBunnyHoodDL[114];

extern FlexSkeletonHeader gLinkChildSkel;



// Kokiri Sword
extern Gfx gLinkChildLeftHandHoldingBrokenSwordDL[];
extern Gfx gKokiriSwordBladeDL[];
extern Gfx gKokiriSwordHandleDL[];

// Hero's Sword
extern Gfx gLinkChildLeftHandHoldingHerosSwordDL[];
extern Gfx gHerosSwordBladeDL[];
extern Gfx gHerosSwordHandleDL[];

// Razor Sword
extern u64 gSwordMetalTex[];
extern Gfx gLinkChildLeftHandHoldingRazorSwordDL[];
extern Gfx gRazorSwordHandleDL[];
extern Gfx gRazorSwordBladeDL[];

// Gilded Sword
extern Gfx gLinkChildLeftHandHoldingSilverSwordDL[];
extern Gfx gLinkChildLeftHandHoldingGoldenSwordDL[];
extern Gfx gGildedSwordHandleDL[];
extern Gfx gSilverSwordBladeDL[];
extern Gfx gGoldenSwordBladeDL[];
extern Gfx gGildedSwordBladeDL[];

// Sheaths
extern Gfx gSheathedKokiriSwordDL[];
extern Gfx gSheathedHerosSwordDL[];
extern Gfx gSheathedRazorSwordDL[];
extern Gfx gSheathedGildedSwordDL[];
extern Gfx gKokiriSwordSheathDL[];
extern Gfx gHerosSwordSheathDL[];
extern Gfx gKokiriHerosSheathDL[];
extern Gfx gRazorSwordSheathDL[];
extern Gfx gGildedSwordSheathDL[];

// Shields With Sheathed Swords
extern Gfx gLinkChildDekuShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildDekuShieldHerosSwordSheathedDL[];
extern Gfx gLinkChildDekuShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildDekuShieldGildedSwordSheathedDL[];
extern Gfx gLinkChildHylianShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildHylianShieldHerosSwordSheathedDL[];
extern Gfx gLinkChildHylianShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildHylianShieldGildedSwordSheathedDL[];
extern Gfx gLinkChildHylianShieldKokiriSwordSheathDL[];
extern Gfx gLinkChildHylianShieldHerosSwordSheathDL[];
extern Gfx gLinkChildHylianShieldRazorSwordSheathDL[];
extern Gfx gLinkChildHylianShieldGildedSwordSheathDL[];
extern Gfx gLinkChildHerosShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldHerosSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldGildedSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldHerosSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldGildedSwordSheathedDL[];

// Hero's Shield
extern Gfx gLinkChildHerosShieldDL[];
extern Gfx gLinkChildHoldingHerosShieldDL[];
extern Gfx gLinkChildHerosShieldWithMatrixDL[];

// Mirror Shield
extern Gfx gLinkChildMirrorShieldDL[];
extern Gfx gLinkChildHoldingMirrorShieldDL[];
extern Gfx gLinkChildMirrorShieldWithMatrixDL[];

// Megaton Hammer
extern Gfx gLinkChildLeftHandHoldingHammerNearDL[];

// Hookshot
extern Gfx gLinkChildRightHandHoldingHookshot[];
extern Gfx gLinkChildRightHandHoldingHookshotNear[];
extern Gfx gLinkChildRightHandHoldingHookshotNearDL[];
extern Gfx gLinkChildRightHandHoldingHookshotFarDL[];
extern Gfx gLinkChildHookshotChainDL[];
extern Gfx gLinkChildHookshotReticleDL[];

// Bow
extern u64 gLinkChildBowTex[];
extern u64 gLinkChildBowDesignTex[];
extern Gfx gLinkChildRightHandHoldingBowNearDL[];
extern Gfx gLinkChildRightHandHoldingBowFirstPersonDL[];
extern Gfx gLinkChildBowStringDL[];

// Power Bracelet
extern Gfx gLinkChildBracelet1DL[];
extern Gfx gLinkChildBracelet2DL[];
extern Gfx gLinkChildPowerBraceletDL[];
extern Gfx gLinkChildPowerBraceletsDL[];

// Earring
extern Gfx gLinkChildEarringsIronDL[];
extern Gfx gLinkChildEarringsHoverDL[];
extern Gfx gLinkChildEarringsEmpty1DL[];
extern Gfx gLinkChildEarringsEmpty2DL[];

#endif
