#ifndef YDAN_SCENE_H
#define YDAN_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"
#include "versions.h"

extern SceneCmd ydan_scene[];
#define LENGTH_ydan_scene_02000060_PlayerEntryList 2 + 11
extern ActorEntry ydan_scene_02000060_PlayerEntryList[LENGTH_ydan_scene_02000060_PlayerEntryList];
#define LENGTH_ydan_scene_02000080_TransitionActorEntryList 12
extern TransitionActorEntry ydan_scene_02000080_TransitionActorEntryList[LENGTH_ydan_scene_02000080_TransitionActorEntryList];
#define LENGTH_ydan_scene_02000140_RoomList 12
extern RomFile ydan_scene_02000140_RoomList[LENGTH_ydan_scene_02000140_RoomList];
extern Spawn ydan_scene_020001A0_SpawnList[];
extern s16 ydan_scene_020001A4_ExitList[];
#define LENGTH_ydan_scene_020001A8_EnvLightSettingsList 7
extern EnvLightSettings ydan_scene_020001A8_EnvLightSettingsList[LENGTH_ydan_scene_020001A8_EnvLightSettingsList];

#if !OOT_MQ
extern Vec3s ydan_scene_0200B610_BgCamList_02000250_BgCamFuncData[];
extern BgCamInfo ydan_scene_0200B610_BgCamList[];
extern SurfaceType ydan_scene_0200B610_SurfaceTypes[];
extern CollisionPoly ydan_scene_0200B610_PolyList[];
extern Vec3s ydan_scene_0200B610_VtxList[];
extern WaterBox ydan_scene_0200B610_WaterBoxes[];
extern CollisionHeader ydan_scene_0200B610_Col;
extern CutsceneData gDekuTreeIntroCs[];
extern u64 ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT[];
#else
extern Vec3s ydan_scene_0200B618_BgCamList_02000250_BgCamFuncData[];
extern BgCamInfo ydan_scene_0200B618_BgCamList[];
extern SurfaceType ydan_scene_0200B618_SurfaceTypes[];
extern CollisionPoly ydan_scene_0200B618_PolyList[];
extern Vec3s ydan_scene_0200B618_VtxList[];
extern WaterBox ydan_scene_0200B618_WaterBoxes[];
extern CollisionHeader ydan_scene_0200B618_Col;
extern CutsceneData gDekuTreeIntroCs[];
extern u64 ydan_room_0_03000270_RoomShapeCullable_0300027C_CullableEntries_03003450_DL_0000B810_TLUT[];
#endif

#define gDekuTreeDayEntranceTex_WIDTH 32
#define gDekuTreeDayEntranceTex_HEIGHT 64
extern u64 gDekuTreeDayEntranceTex[TEX_LEN(u64, gDekuTreeDayEntranceTex_WIDTH, gDekuTreeDayEntranceTex_HEIGHT, 16)];
#define gDekuTreeNightEntranceTex_WIDTH 32
#define gDekuTreeNightEntranceTex_HEIGHT 64
extern u64 gDekuTreeNightEntranceTex[TEX_LEN(u64, gDekuTreeNightEntranceTex_WIDTH, gDekuTreeNightEntranceTex_HEIGHT, 16)];

#endif
