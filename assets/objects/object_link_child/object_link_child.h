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



// Global
extern u64 gSwordBowHookshotHandTLUT[];

// Kokiri Sword
extern Vtx kokiri_sword_mm_blade_vtx[];
extern Gfx gLinkChildLeftHandHoldingBrokenSwordDL[];
extern Gfx gKokiriSwordBladeDL[];
extern Gfx gKokiriSwordHandleDL[];

// Razor Sword
extern u64 gRazorSwordHandleDesignTex[];
extern u64 gRazorSwordHandleGripTex[];
extern u64 gSwordMetalTex[];
extern Vtx razor_sword_handle_vtx[];
extern Vtx razor_sword_blade_vtx[];
extern Gfx gLinkChildLeftHandHoldingRazorSwordDL[];
extern Gfx gRazorSwordHandleDL[];
extern Gfx gRazorSwordBladeDL[];

// Gilded Sword
extern u64 object_link_child_Tex_01C380[];
extern u64 object_link_child_Tex_01C400[];
extern u64 object_link_child_Tex_01C900[];
extern u64 object_link_child_Tex_01D340[];
extern Vtx gilded_sword_handle_vtx[];
extern Vtx gilded_sword_blade_vtx[];
extern Gfx gLinkChildLeftHandHoldingSilverSwordDL[];
extern Gfx gLinkChildLeftHandHoldingGoldenSwordDL[];
extern Gfx gGildedSwordHandleDL[];
extern Gfx gSilverSwordBladeDL[];
extern Gfx gGoldenSwordBladeDL[];
extern Gfx gGildedSwordBladeDL[];

// Sheaths
extern Vtx razor_sword_sheath_vtx[];
extern Vtx gilded_sword_sheath_vtx[];
extern Mtx gSheathedRazorSwordMtx;
extern Mtx gSheathedGildedSwordMtx;
extern Gfx gSheathedKokiriSwordDL[];
extern Gfx gSheathedRazorSwordDL[];
extern Gfx gSheathedGildedSwordDL[];
extern Gfx gKokiriSwordSheathDL[];
extern Gfx gRazorSwordSheathDL[];
extern Gfx gGildedSwordSheathDL[];

// Shields With Sheathed Swords
extern Gfx gLinkChildDekuShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildDekuShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildDekuShieldGildedSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildHerosShieldGildedSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldKokiriSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldRazorSwordSheathedDL[];
extern Gfx gLinkChildMirrorShieldGildedSwordSheathedDL[];

// Shields With Sheaths
extern Gfx gLinkChildDekuShieldKokiriSwordSheathDL[];
extern Gfx gLinkChildDekuShieldRazorSwordSheathDL[];
extern Gfx gLinkChildDekuShieldGildedSwordSheathDL[];
extern Gfx gLinkChildHerosShieldKokiriSwordSheathDL[];
extern Gfx gLinkChildHerosShieldRazorSwordSheathDL[];
extern Gfx gLinkChildHerosShieldGildedSwordSheathDL[];
extern Gfx gLinkChildMirrorShieldKokiriSwordSheathDL[];
extern Gfx gLinkChildMirrorShieldRazorSwordSheathDL[];
extern Gfx gLinkChildMirrorShieldGildedSwordSheathDL[];

// Hero's Shield
extern u64 gLinkChildHerosShieldFrontTLUT[];
extern u64 gLinkChildHerosShieldBackTLUT[];
extern u64 gLinkChildHerosShieldFrontUpperTex[];
extern u64 gLinkChildHerosShieldFrontLowerTex[];
extern u64 gLinkChildHerosShieldBackTex[];
extern u64 gLinkChildShieldHandleTLUT[];
extern u64 gLinkChildShieldHandleTex[];
extern Vtx heros_shield_vtx[];
extern Mtx gLinkChildHerosShieldMtx;
extern Gfx gLinkChildHerosShieldDL[];
extern Gfx gLinkChildHoldingHerosShieldDL[];
extern Gfx gLinkChildHerosShieldWithMatrixDL[];

// Mirror Shield
extern u64 object_link_child_Tex_01C800[];
extern u64 object_link_child_Tex_01CB00[];
extern u64 object_link_child_Tex_01D300[];
extern u64 object_link_child_Tex_01D440[];
extern Vtx mirror_shield_vtx[];
extern Mtx gLinkChildMirrorShieldMtx;
extern Gfx gLinkChildMirrorShieldDL[];
extern Gfx gLinkChildHoldingMirrorShieldDL[];
extern Gfx gLinkChildMirrorShieldWithMatrixDL[];

// Megaton Hammer
extern Vtx hammer_vtx[];
extern Gfx gLinkChildLeftHandHoldingHammerNearDL[];

// Hookshot
extern u64 gLinkChildHookshotHandleTex[];
extern u64 gLinkChildHookshotChainTex[];
extern u64 gLinkChildHookshotReticleTex[];
extern u64 gLinkChildHookshotHandTex[];
extern Vtx hookshot_chain_vtx[];
extern Vtx hookshot_reticle_vtx[];
extern Vtx hookshot_hand_vtx[];
extern Vtx hookshot_far_vtx[];
extern Vtx hookshot_tip_vtx[];
extern Gfx gLinkChildRightHandHoldingHookshot[];
extern Gfx gLinkChildRightHandHoldingHookshotNear[];
extern Gfx gLinkChildRightHandHoldingHookshotNearDL[];
extern Gfx gLinkChildRightHandHoldingHookshotFarDL[];
extern Gfx gLinkChildHookshotTipDL[];
extern Gfx gLinkChildHookshotChainDL[];
extern Gfx gLinkChildHookshotReticleDL[];

// Bow
extern u64 gLinkChildBowBodyTex[];
extern u64 gLinkChildBowTex[];
extern u64 gLinkChildBowDesignTex[];
extern Vtx heros_bow_vtx[];
extern Vtx heros_bow_string_vtx[];
extern Vtx heros_bow_first_person_vtx[];
extern Gfx gLinkChildRightHandHoldingBowNearDL[];
extern Gfx gLinkChildRightHandHoldingBowFirstPersonDL[];
extern Gfx gLinkChildBowStringDL[];

// Power Bracelet
extern u64 gLinkChildPowerSymbolTex[];
extern Vtx bracelet_right_vtx[];
extern Gfx gLinkChildBracelet1DL[];
extern Gfx gLinkChildBracelet2DL[];
extern Gfx gLinkChildPowerBraceletDL[];
extern Gfx gLinkChildPowerBraceletsDL[];

// Earring
extern u64 gLinkChildEarringTex[];
extern Vtx earring_vtx[];
extern Gfx gLinkChildEarringsIronDL[];
extern Gfx gLinkChildEarringsHoverDL[];
extern Gfx gLinkChildEarringsEmpty1DL[];
extern Gfx gLinkChildEarringsEmpty2DL[];

#endif
