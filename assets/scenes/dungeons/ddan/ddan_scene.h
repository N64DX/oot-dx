#ifndef DDAN_SCENE_H
#define DDAN_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"
#include "versions.h"

extern SceneCmd ddan_scene[];
#define LENGTH_ddan_scene_02000060_PlayerEntryList 2 + 16
extern ActorEntry ddan_scene_02000060_PlayerEntryList[LENGTH_ddan_scene_02000060_PlayerEntryList];
#define LENGTH_ddan_scene_02000080_TransitionActorEntryList 23
extern TransitionActorEntry ddan_scene_02000080_TransitionActorEntryList[LENGTH_ddan_scene_02000080_TransitionActorEntryList];
#define LENGTH_ddan_scene_020001F0_RoomList 17
extern RomFile ddan_scene_020001F0_RoomList[LENGTH_ddan_scene_020001F0_RoomList];
extern Spawn ddan_scene_02000278_SpawnList[];
extern s16 ddan_scene_0200027C_ExitList[];
#define LENGTH_ddan_scene_02000280_EnvLightSettingsList 5
extern EnvLightSettings ddan_scene_02000280_EnvLightSettingsList[LENGTH_ddan_scene_02000280_EnvLightSettingsList];

#if !OOT_MQ

extern BgCamInfo ddan_scene_02011D38_BgCamList[];
extern SurfaceType ddan_scene_02011D38_SurfaceTypes[];
extern CollisionPoly ddan_scene_02011D38_PolyList[];
extern Vec3s ddan_scene_02011D38_VtxList[];
extern CollisionHeader ddan_scene_02011D38_Col;

#else

extern BgCamInfo ddan_scene_02011D40_BgCamList[];
extern SurfaceType ddan_scene_02011D40_SurfaceTypes[];
extern CollisionPoly ddan_scene_02011D40_PolyList[];
extern Vec3s ddan_scene_02011D40_VtxList[];
extern CollisionHeader ddan_scene_02011D40_Col;

#endif

extern u64 gDCSceneTLUT[];
#define gDCLavaFloor1Tex_WIDTH 32
#define gDCLavaFloor1Tex_HEIGHT 32
extern u64 gDCLavaFloor1Tex[TEX_LEN(u64, gDCLavaFloor1Tex_WIDTH, gDCLavaFloor1Tex_HEIGHT, 8)];
#define gDCDayEntranceTex_WIDTH 32
#define gDCDayEntranceTex_HEIGHT 64
extern u64 gDCDayEntranceTex[TEX_LEN(u64, gDCDayEntranceTex_WIDTH, gDCDayEntranceTex_HEIGHT, 8)];
#define gDCLavaFloor8Tex_WIDTH 32
#define gDCLavaFloor8Tex_HEIGHT 32
extern u64 gDCLavaFloor8Tex[TEX_LEN(u64, gDCLavaFloor8Tex_WIDTH, gDCLavaFloor8Tex_HEIGHT, 8)];
#define gDCLavaFloor7Tex_WIDTH 32
#define gDCLavaFloor7Tex_HEIGHT 32
extern u64 gDCLavaFloor7Tex[TEX_LEN(u64, gDCLavaFloor7Tex_WIDTH, gDCLavaFloor7Tex_HEIGHT, 8)];
#define gDCNightEntranceTex_WIDTH 32
#define gDCNightEntranceTex_HEIGHT 64
extern u64 gDCNightEntranceTex[TEX_LEN(u64, gDCNightEntranceTex_WIDTH, gDCNightEntranceTex_HEIGHT, 8)];
#define gDCLavaFloor6Tex_WIDTH 32
#define gDCLavaFloor6Tex_HEIGHT 32
extern u64 gDCLavaFloor6Tex[TEX_LEN(u64, gDCLavaFloor6Tex_WIDTH, gDCLavaFloor6Tex_HEIGHT, 8)];
#define gDCLavaFloor4Tex_WIDTH 32
#define gDCLavaFloor4Tex_HEIGHT 32
extern u64 gDCLavaFloor4Tex[TEX_LEN(u64, gDCLavaFloor4Tex_WIDTH, gDCLavaFloor4Tex_HEIGHT, 8)];
#define gDCLavaFloor3Tex_WIDTH 32
#define gDCLavaFloor3Tex_HEIGHT 32
extern u64 gDCLavaFloor3Tex[TEX_LEN(u64, gDCLavaFloor3Tex_WIDTH, gDCLavaFloor3Tex_HEIGHT, 8)];
#define gDCLavaFloor2Tex_WIDTH 32
#define gDCLavaFloor2Tex_HEIGHT 32
extern u64 gDCLavaFloor2Tex[TEX_LEN(u64, gDCLavaFloor2Tex_WIDTH, gDCLavaFloor2Tex_HEIGHT, 8)];
#define gDCLavaFloor5Tex_WIDTH 32
#define gDCLavaFloor5Tex_HEIGHT 32
extern u64 gDCLavaFloor5Tex[TEX_LEN(u64, gDCLavaFloor5Tex_WIDTH, gDCLavaFloor5Tex_HEIGHT, 8)];
extern CutsceneData gDcOpeningCs[];

#endif
