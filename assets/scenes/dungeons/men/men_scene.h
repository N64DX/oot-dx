#ifndef MEN_SCENE_H
#define MEN_SCENE_H

#include "bgcheck.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"
#include "versions.h"

#if !OOT_MQ

extern SceneCmd men_scene[];
#define LENGTH_men_scene_02000068_PlayerEntryList 1 + 11
extern ActorEntry men_scene_02000068_PlayerEntryList[LENGTH_men_scene_02000068_PlayerEntryList];
#define LENGTH_men_scene_02000078_TransitionActorEntryList 22
extern TransitionActorEntry men_scene_02000078_TransitionActorEntryList[LENGTH_men_scene_02000078_TransitionActorEntryList];
#define LENGTH_men_scene_020001D8_RoomList 11
extern RomFile men_scene_020001D8_RoomList[LENGTH_men_scene_020001D8_RoomList];
extern Spawn men_scene_02000230_SpawnList[];
extern s16 men_scene_02000234_ExitList[];
#define LENGTH_men_scene_02000238_EnvLightSettingsList 4
extern EnvLightSettings men_scene_02000238_EnvLightSettingsList[LENGTH_men_scene_02000238_EnvLightSettingsList];
extern u8 men_scene_unaccounted_000290[];
extern Vec3s men_scene_020002F0_PathList_020002C0_Points[];
extern Path men_scene_020002F0_PathList[];
extern u8 men_scene_unaccounted_0002F8[];
extern Vec3s men_scene_0200F700_BgCamList_02000300_BgCamFuncData[];
extern BgCamInfo men_scene_0200F700_BgCamList[];
extern SurfaceType men_scene_0200F700_SurfaceTypes[];
extern CollisionPoly men_scene_0200F700_PolyList[];
extern Vec3s men_scene_0200F700_VtxList[];
extern WaterBox men_scene_0200F700_WaterBoxes[];
extern CollisionHeader men_scene_0200F700_Col;
extern u64 gMenDL_008118_03002AD0_DL_0000F730_TLUT[];
#define gGTGDayEntranceTex_WIDTH 8
#define gGTGDayEntranceTex_HEIGHT 128
extern u64 gGTGDayEntranceTex[TEX_LEN(u64, gGTGDayEntranceTex_WIDTH, gGTGDayEntranceTex_HEIGHT, 16)];
#define gGTGNightEntranceTex_WIDTH 8
#define gGTGNightEntranceTex_HEIGHT 128
extern u64 gGTGNightEntranceTex[TEX_LEN(u64, gGTGNightEntranceTex_WIDTH, gGTGNightEntranceTex_HEIGHT, 16)];
#define gMenDL_008118_03002AD0_DL_00010930_CITex_WIDTH 32
#define gMenDL_008118_03002AD0_DL_00010930_CITex_HEIGHT 32
extern u64 gMenDL_008118_03002AD0_DL_00010930_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00010930_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00010930_CITex_HEIGHT, 8)];
#define gMenDL_008118_03002AD0_DL_00010D30_CITex_WIDTH 64
#define gMenDL_008118_03002AD0_DL_00010D30_CITex_HEIGHT 32
extern u64 gMenDL_008118_03002AD0_DL_00010D30_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00010D30_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00010D30_CITex_HEIGHT, 8)];

#else

extern SceneCmd men_scene[];
#define LENGTH_men_scene_02000060_PlayerEntryList 1 + 11
extern ActorEntry men_scene_02000060_PlayerEntryList[LENGTH_men_scene_02000060_PlayerEntryList];
#define LENGTH_men_scene_02000070_TransitionActorEntryList 22
extern TransitionActorEntry men_scene_02000070_TransitionActorEntryList[LENGTH_men_scene_02000070_TransitionActorEntryList];
#define LENGTH_men_scene_020001D0_RoomList 11
extern RomFile men_scene_020001D0_RoomList[LENGTH_men_scene_020001D0_RoomList];
extern Spawn men_scene_02000228_SpawnList[];
extern s16 men_scene_0200022C_ExitList[];
#define LENGTH_men_scene_02000230_EnvLightSettingsList 4
extern EnvLightSettings men_scene_02000230_EnvLightSettingsList[LENGTH_men_scene_02000230_EnvLightSettingsList];
extern Vec3s men_scene_0200F690_BgCamList_02000290_BgCamFuncData[];
extern BgCamInfo men_scene_0200F690_BgCamList[];
extern SurfaceType men_scene_0200F690_SurfaceTypes[];
extern CollisionPoly men_scene_0200F690_PolyList[];
extern Vec3s men_scene_0200F690_VtxList[];
extern WaterBox men_scene_0200F690_WaterBoxes[];
extern CollisionHeader men_scene_0200F690_Col;
extern u64 gMenDL_008118_03002AD0_DL_0000F6C0_TLUT[];
#define gGTGDayEntranceTex_WIDTH 8
#define gGTGDayEntranceTex_HEIGHT 128
extern u64 gGTGDayEntranceTex[TEX_LEN(u64, gGTGDayEntranceTex_WIDTH, gGTGDayEntranceTex_HEIGHT, 16)];
#define gGTGNightEntranceTex_WIDTH 8
#define gGTGNightEntranceTex_HEIGHT 128
extern u64 gGTGNightEntranceTex[TEX_LEN(u64, gGTGNightEntranceTex_WIDTH, gGTGNightEntranceTex_HEIGHT, 16)];
#define gMenDL_008118_03002AD0_DL_000108C0_CITex_WIDTH 32
#define gMenDL_008118_03002AD0_DL_000108C0_CITex_HEIGHT 32
extern u64 gMenDL_008118_03002AD0_DL_000108C0_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_000108C0_CITex_WIDTH, gMenDL_008118_03002AD0_DL_000108C0_CITex_HEIGHT, 8)];
#define gMenDL_008118_03002AD0_DL_00010CC0_CITex_WIDTH 64
#define gMenDL_008118_03002AD0_DL_00010CC0_CITex_HEIGHT 32
extern u64 gMenDL_008118_03002AD0_DL_00010CC0_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00010CC0_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00010CC0_CITex_HEIGHT, 8)];

#endif

#endif
