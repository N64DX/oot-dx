#ifndef OBJECT_LINK_CHILD_H
/**
#define OBJECT_LINK_CHILD_H

#include "ultra64.h"
#include "tex_len.h"
#include "z64animation.h"

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
extern Gfx gLinkChildLeftHandFarDL[40];
extern Gfx gLinkChildLeftFistFarDL[36];
extern Gfx gLinkChildRightHandFarDL[40];
extern Gfx gLinkChildRightHandClosedFarDL[36];
extern Gfx gLinkChildRightFistAndDekuShieldFarDL[57];
extern Gfx gLinkChildLeftFistAndBoomerangFarDL[50];
extern Gfx gLinkChildHylianShieldSwordAndSheathFarDL[76];
extern Gfx gLinkChildHylianShieldAndSheathFarDL[62];
extern Gfx gLinkChildDekuShieldSwordAndSheathFarDL[77];
extern Gfx gLinkChildDekuShieldAndSheathFarDL[66];
extern Gfx gLinkChildSwordAndSheathFarDL[52];
extern Gfx gLinkChildSheathFarDL[38];
extern Gfx gLinkChildLeftFistAndKokiriSwordFarDL[78];
extern Gfx gLinkChildRightHandHoldingOOTFarDL[74];
extern Gfx gLinkChildRightHandHoldingFairyOcarinaFarDL[73];
extern Gfx gLinkChildRightHandHoldingSlingshotFarDL[57];
extern Gfx gLinkChildRightArmStretchedSlingshotDL[134];
extern Gfx gLinkChildBottleDL[33];

extern Gfx gLinkChildWaistFarDL[70];

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

*/
#define OBJECT_LINK_CHILD_H 1

extern u64 gLinkChildEyesOpenTex[];
extern u64 gLinkChildEyesHalfTex[];
extern u64 gLinkChildEyesClosedfTex[];
extern u64 gLinkChildEyesLeftTex[];
extern u64 gLinkChildEyesRightTex[];
extern u64 gLinkChildEyesWideTex[];
extern u64 gLinkChildEyesDownTex[];
extern u64 gLinkChildEyesWincingTex[];
extern u64 gLinkChildMouthClosedTex[];
extern u64 gLinkChildMouthHalfTex[];
extern u64 gLinkChildMouthOpenTex[];
extern u64 gLinkChildMouthSmileTex[];
extern u64 gLinkChildNoseTex[];
extern u64 gLinkChildEarTex[];
extern u64 gLinkChildBeltTLUT[];
extern u64 gLinkChildSkinTLUT[];
extern u64 gLinkChildLowerBootTex[];
extern u64 gLinkChildBootTex[];
extern u64 gLinkChildWaistTex[];
extern u64 gLinkChildBeltTex[];
extern u64 gLinkChildBeltClaspTex[];
extern Vtx object_link_childVtx_006A80[];
extern Gfx gLinkChildLinkDekuStickDL[];
extern u64 gLinkChildFairyOcarinaTex[];
extern u64 gLinkChildGoronBraceletTex[];
extern u64 gLinkChildGoronSymbolTex[];
extern u64 gLinkChildDekuShieldBackTex[];
extern u64 gLinkChildDekuShieldFrontTex[];
extern u64 gLinkChildHylianShieldBackTex[];
extern u64 gLinkChildSlingshotTex[];
extern u64 gLinkChildSlingshotSeedTex[];
extern u64 gLinkChildHandTLUT[];
extern u64 gLinkChildSwordsTLUT[];
extern u64 gLinkChildSwordTLUT[];
extern u64 gLinkChildHandTex[];
extern u64 gLinkChildKokiriSwordSheathTex[];
extern u64 gLinkChildSwordJewelTex[];
extern u64 gLinkChildMasterSwordPommelTex[];
extern u64 gLinkChildMasterSwordGuardTex[];
extern u64 gLinkChildMasterSwordEmblemTex[];
extern Vtx object_link_childVtx_00ABF0[];
extern Gfx gLinkChildLeftHandNearDL[];
extern Gfx gLinkChildLeftFistNearDL[];
extern Gfx gLinkChildLeftFistAndKokiriSwordNearDL[];
extern Gfx gLinkChildRightHandNearDL[];
extern Gfx gLinkChildRightHandClosedNearDL[];
extern Gfx gLinkChildRightFistAndDekuShieldNearDL[];
extern Gfx gLinkChildLeftFistAndBoomerangNearDL[];
extern Gfx gLinkChildHylianShieldSwordAndSheathNearDL[];
extern Gfx gLinkChildHylianShieldAndSheathNearDL[];
extern Gfx gLinkChildDekuShieldSwordAndSheathNearDL[];
extern Gfx gLinkChildDekuShieldAndSheathNearDL[];
extern Gfx gLinkChildSwordAndSheathNearDL[];
extern Gfx gLinkChildSheathNearDL[];
extern Gfx gLinkChildLeftHandHoldingMasterSwordDL[];
extern Gfx gLinkChildRightHandAndOotNearDL[];
extern Gfx gLinkChildRightHandHoldingFairyOcarinaNearDL[];
extern Gfx gLinkChildRightHandHoldingSlingshotNearDL[];
extern Gfx gLinkChildLeftHandUpNearDL[];
extern Gfx gLinkChildGoronBraceletDL[];
extern Gfx gLinkChildRightArmStretchedSlingshotDL[];
extern Gfx gLinkChildBottleDL[];
extern Gfx gLinkChildDL_18580[];
extern Gfx gLinkChildBottle2DL[];
extern Vtx object_link_childVtx_01C978[];
extern Vtx object_link_childVtx_01EDA8[];
extern Vtx object_link_childVtx_01F528[];
extern Vtx object_link_childVtx_01FE08[];
extern Gfx gLinkChildWaistNearDL[];
extern Gfx gLinkChildRightThighNearDL[];
extern Gfx gLinkChildRightShinNearDL[];
extern Gfx gLinkChildRightFootNearDL[];
extern Gfx gLinkChildLeftThighNearDL[];
extern Gfx gLinkChildLeftShinNearDL[];
extern Gfx gLinkChildLeftFootNearDL[];
extern Gfx gLinkChildCollarNearDL[];
extern Gfx gLinkChildTorsoNearDL[];
extern Gfx gLinkChildHeadNearDL[];
extern Gfx gLinkChildHatNearDL[];
extern Gfx gLinkChildRightShoulderNearDL[];
extern Gfx gLinkChildRightForearmNearDL[];
extern Gfx gLinkChildLeftShoulderNearDL[];
extern Gfx gLinkChildLeftForearmNearDL[];
extern Vtx object_link_childVtx_022148[];
extern Gfx gLinkChildSlingshotStringDL[];
extern Vtx object_link_childVtx_022208[];
extern Gfx gLinkChildDekuShieldDL[];
extern Mtx gLinkChildDekuShieldMtx;
extern Gfx gLinkChildDekuShieldWithMatrixDL[];
extern u64 gLinkChildSpookyMaskTex[];
extern u64 gLinkChildKeatonMaskEyeBrowTex[];
extern u64 gLinkChildKeatonMaskEarTex[];
extern u64 gLinkChildSkullMaskEyeTex[];
extern u64 gLinkChildMaskOfTruthTex[];
extern u64 gLinkChildMaskOfTruthCurveTex[];
extern u64 gLinkChildGoronMaskMouthTex[];
extern u64 gLinkChildGoronMaskEyeTex[];
extern u64 gLinkChildGoronMaskNoseTex[];
extern u64 gLinkChildGoronMaskHairTex[];
extern u64 gLinkChildSkullMaskTeethTex[];
extern u64 gLinkChildGoronMaskEarTex[];
extern u64 gLinkChildZoraMaskEyeBoarderTex[];
extern u64 gLinkChildZoraMaskEarTex[];
extern u64 gLinkChildSkullMaskNoseTex[];
extern u64 gLinkChildZoraMaskEyeTex[];
extern u64 gLinkChildZoraMaskMouthTex[];
extern u64 gLinkChildGerudoMaskEyeTex[];
extern u64 gLinkChildGerudoMaskMouthTex[];
extern u64 gLinkChildGerudoMaskHairTex[];
extern u64 gLinkChildGerudoMaskNoseTex[];
extern Vtx object_link_childVtx_029220[];
extern Gfx gLinkChildSkullMaskDL[];
extern Gfx gLinkChildSpookyMaskDL[];
extern Gfx gLinkChildKeatonMaskDL[];
extern Gfx gLinkChildMaskOfTruthDL[];
extern Gfx gLinkChildGoronMaskDL[];
extern Gfx gLinkChildZoraMaskDL[];
extern Gfx gLinkChildGerudoMaskDL[];
extern u64 gLinkChildBunnyHoodEyeTex[];
extern u64 gLinkChildBunnyHoodTex[];
extern u64 gLinkChildBunnyHoodEarTex[];
extern Vtx object_link_childVtx_02C428[];
extern Gfx gLinkChildBunnyHoodDL[];
extern LodLimb gLinkChildRootLimb;
extern LodLimb gLinkChildWaistLimb;
extern LodLimb gLinkChildLowerControlLimb;
extern LodLimb gLinkChildRightThighLimb;
extern LodLimb gLinkChildRightShinLimb;
extern LodLimb gLinkChildRightFootLimb;
extern LodLimb gLinkChildLeftThighLimb;
extern LodLimb gLinkChildLeftShinLimb;
extern LodLimb gLinkChildLeftFootLimb;
extern LodLimb gLinkChildUpperControlLimb;
extern LodLimb gLinkChildHeadLimb;
extern LodLimb gLinkChildHatLimb;
extern LodLimb gLinkChildCollarLimb;
extern LodLimb gLinkChildLeftshoulderLimb;
extern LodLimb gLinkChildLeftForearmLimb;
extern LodLimb gLinkChildLeftHandLimb;
extern LodLimb gLinkChildRightshoulderLimb;
extern LodLimb gLinkChildRightForearmLimb;
extern LodLimb gLinkChildRightHandLimb;
extern LodLimb gLinkChildSwordAndSheathLimb;
extern LodLimb gLinkChildTorsoLimb;
extern void* gLinkChildSkelLimbs[];
extern FlexSkeletonHeader gLinkChildSkel;
#endif
