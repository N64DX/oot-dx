#ifndef OBJECT_LINK_YOUNG_H
#define OBJECT_LINK_YOUNG_H 1

#include "ultra64.h"
#include "animation.h"

extern u64 gLinkYoungEyesOpenTex[];
extern u64 gLinkYoungEyesHalfTex[];
extern u64 gLinkYoungEyesClosedfTex[];
extern u64 gLinkYoungEyesLeftTex[];
extern u64 gLinkYoungEyesRightTex[];
extern u64 gLinkYoungEyesWideTex[];
extern u64 gLinkYoungEyesDownTex[];
extern u64 gLinkYoungEyesWincingTex[];
extern u64 gLinkYoungMouthClosedTex[];
extern u64 gLinkYoungMouthHalfTex[];
extern u64 gLinkYoungMouthOpenTex[];
extern u64 gLinkYoungMouthSmileTex[];
extern Gfx gLinkYoungLeftHandNearDL[];
extern Gfx gLinkYoungLeftFistNearDL[];
extern Gfx gLinkYoungLeftFistAndKokiriSwordNearDL[];
extern Gfx gLinkYoungRightHandNearDL[];
extern Gfx gLinkYoungRightHandClosedNearDL[];
extern Gfx gLinkYoungRightFistAndDekuShieldNearDL[];
extern Gfx gLinkYoungLeftFistAndBoomerangNearDL[];
extern Gfx gLinkYoungHylianShieldAndSheathNearDL[];
extern Gfx gLinkYoungLeftHandHoldingMasterSwordDL[];
extern Gfx gLinkYoungRightHandHoldingFairyOcarinaNearDL[];
extern Gfx gLinkYoungRightHandHoldingSlingshotNearDL[];
extern Gfx gLinkYoungLeftHandUpNearDL[];
extern Gfx gLinkYoungGoronBraceletDL[];
extern Gfx gLinkYoungRightHandAndOotNearDL[];
extern Gfx gLinkYoungRightArmStretchedSlingshotDL[];
extern Gfx gLinkYoungBottleDL[];
extern Gfx gLinkYoungWaistNearDL[];
extern Gfx gLinkYoungRightThighNearDL[];
extern Gfx gLinkYoungRightShinNearDL[];
extern Gfx gLinkYoungRightFootNearDL[];
extern Gfx gLinkYoungLeftThighNearDL[];
extern Gfx gLinkYoungLeftShinNearDL[];
extern Gfx gLinkYoungLeftFootNearDL[];
extern Gfx gLinkYoungCollarNearDL[];
extern Gfx gLinkYoungTorsoNearDL[];
extern Gfx gLinkYoungHeadNearDL[];
extern Gfx gLinkYoungHatNearDL[];
extern Gfx gLinkYoungRightShoulderNearDL[];
extern Gfx gLinkYoungRightForearmNearDL[];
extern Gfx gLinkYoungLeftShoulderNearDL[];
extern Gfx gLinkYoungLeftForearmNearDL[];
extern Gfx gLinkYoungSlingshotStringDL[];
extern Gfx gLinkYoungDekuShieldDL[];
extern Gfx gLinkYoungDekuShieldWithMatrixDL[];

extern FlexSkeletonHeader gLinkYoungSkel;



// Hero's Sword
extern Gfx gLinkYoungLeftHandHoldingHerosSwordDL[];

// Razor Sword
extern Gfx gLinkYoungLeftHandHoldingRazorSwordDL[];

// Gilded Sword
extern Gfx gLinkYoungLeftHandHoldingSilverSwordDL[];
extern Gfx gLinkYoungLeftHandHoldingGoldenSwordDL[];

// Sheaths
extern Gfx gLinkYoungSheathedKokiriSwordDL[];
extern Gfx gLinkYoungSheathedHerosSwordDL[];
extern Gfx gLinkYoungSheathedRazorSwordDL[];
extern Gfx gLinkYoungSheathedGildedSwordDL[];
extern Gfx gLinkYoungKokiriSwordSheathDL[];
extern Gfx gLinkYoungHerosSwordSheathDL[];
extern Gfx gLinkYoungKokiriHerosSheathDL[];
extern Gfx gLinkYoungRazorSwordSheathDL[];
extern Gfx gLinkYoungGildedSwordSheathDL[];

// Shields With Sheathed Swords
extern Gfx gLinkYoungDekuShieldKokiriSwordSheathedDL[];
extern Gfx gLinkYoungDekuShieldHerosSwordSheathedDL[];
extern Gfx gLinkYoungDekuShieldRazorSwordSheathedDL[];
extern Gfx gLinkYoungDekuShieldGildedSwordSheathedDL[];
extern Gfx gLinkYoungHylianShieldKokiriSwordSheathedDL[];
extern Gfx gLinkYoungHylianShieldHerosSwordSheathedDL[];
extern Gfx gLinkYoungHylianShieldRazorSwordSheathedDL[];
extern Gfx gLinkYoungHylianShieldGildedSwordSheathedDL[];
extern Gfx gLinkYoungHylianShieldKokiriSwordSheathDL[];
extern Gfx gLinkYoungHylianShieldHerosSwordSheathDL[];
extern Gfx gLinkYoungHylianShieldRazorSwordSheathDL[];
extern Gfx gLinkYoungHylianShieldGildedSwordSheathDL[];
extern Gfx gLinkYoungHerosShieldKokiriSwordSheathedDL[];
extern Gfx gLinkYoungHerosShieldHerosSwordSheathedDL[];
extern Gfx gLinkYoungHerosShieldRazorSwordSheathedDL[];
extern Gfx gLinkYoungHerosShieldGildedSwordSheathedDL[];
extern Gfx gLinkYoungMirrorShieldKokiriSwordSheathedDL[];
extern Gfx gLinkYoungMirrorShieldHerosSwordSheathedDL[];
extern Gfx gLinkYoungMirrorShieldRazorSwordSheathedDL[];
extern Gfx gLinkYoungMirrorShieldGildedSwordSheathedDL[];

// Hero's Shield
extern Gfx gLinkYoungHerosShieldDL[];
extern Gfx gLinkYoungHoldingHerosShieldDL[];
extern Gfx gLinkYoungHerosShieldWithMatrixDL[];

// Mirror Shield
extern Gfx gLinkYoungMirrorShieldDL[];
extern Gfx gLinkYoungHoldingMirrorShieldDL[];
extern Gfx gLinkYoungMirrorShieldWithMatrixDL[];

// Megaton Hammer
extern Gfx gLinkYoungLeftHandHoldingHammerNearDL[];

// Hookshot
extern Gfx gLinkYoungRightHandHoldingHookshot[];
extern Gfx gLinkYoungRightHandHoldingHookshotNear[];
extern Gfx gLinkYoungRightHandHoldingHookshotNearDL[];
extern Gfx gLinkYoungRightHandHoldingHookshotFarDL[];

// Bow
extern Gfx gLinkYoungRightHandHoldingBowNearDL[];
extern Gfx gLinkYoungRightHandHoldingBowFirstPersonDL[];
extern Gfx gLinkYoungBowStringDL[];

// Power Bracelet
extern Gfx gLinkYoungPowerBraceletDL[];
extern Gfx gLinkYoungPowerBraceletsDL[];

// Earring
extern Gfx gLinkYoungEarringsIronDL[];
extern Gfx gLinkYoungEarringsHoverDL[];

#endif
