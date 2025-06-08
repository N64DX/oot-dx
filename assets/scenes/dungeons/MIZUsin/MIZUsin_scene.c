#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "actor.h"
#include "array_count.h"
#include "camera.h"
#include "object.h"
#include "segment_symbols.h"
#include "sequence.h"
#include "skybox.h"
#include "stdbool.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd MIZUsin_scene[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.inc.c"
};

ActorEntry MIZUsin_scene_02000068_PlayerEntryList[LENGTH_MIZUsin_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry MIZUsin_scene_02000078_TransitionActorEntryList[LENGTH_MIZUsin_scene_02000078_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02000078_TransitionActorEntryList.inc.c"
};

RomFile MIZUsin_scene_02000228_RoomList[LENGTH_MIZUsin_scene_02000228_RoomList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02000228_RoomList.inc.c"
};

Spawn MIZUsin_scene_020002E0_SpawnList[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_020002E0_SpawnList.inc.c"
};

s16 MIZUsin_scene_020002E4_ExitList[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_020002E4_ExitList.inc.c"
};

EnvLightSettings MIZUsin_scene_020002E8_EnvLightSettingsList[LENGTH_MIZUsin_scene_020002E8_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_020002E8_EnvLightSettingsList.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_02000358_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_02000358_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_02000370_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_02000370_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_0200039C_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_0200039C_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_020003BC_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_020003BC_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_020003EC_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_020003EC_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_020003F8_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_020003F8_Points.inc.c"
};

Vec3s MIZUsin_scenePathList_000424_0200040C_Points[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424_0200040C_Points.inc.c"
};

Path MIZUsin_scenePathList_000424[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scenePathList_000424.inc.c"
};

BgCamInfo MIZUsin_scene_02013CC4_BgCamList[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_BgCamList.inc.c"
};

SurfaceType MIZUsin_scene_02013CC4_SurfaceTypes[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_SurfaceTypes.inc.c"
};

CollisionPoly MIZUsin_scene_02013CC4_PolyList[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_PolyList.inc.c"
};

Vec3s MIZUsin_scene_02013CC4_VtxList[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_VtxList.inc.c"
};

WaterBox MIZUsin_scene_02013CC4_WaterBoxes[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_WaterBoxes.inc.c"
};

CollisionHeader MIZUsin_scene_02013CC4_Col = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene_02013CC4_Col.inc.c"
};

u64 MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_030010F8_DL_00013CF0_Tex[TEX_LEN(u64, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_030010F8_DL_00013CF0_Tex_WIDTH, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_030010F8_DL_00013CF0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_030010F8_DL_00013CF0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03000BE8_DL_000144F0_Tex[TEX_LEN(u64, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03000BE8_DL_000144F0_Tex_WIDTH, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03000BE8_DL_000144F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03000BE8_DL_000144F0_Tex.rgba16.inc.c"
};

u64 gWaterTempleDayEntranceTex[TEX_LEN(u64, gWaterTempleDayEntranceTex_WIDTH, gWaterTempleDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/gWaterTempleDayEntranceTex.ia16.inc.c"
};

u64 MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03001DC0_DL_000150F0_Tex[TEX_LEN(u64, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03001DC0_DL_000150F0_Tex_WIDTH, MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03001DC0_DL_000150F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_0_03000220_RoomShapeCullable_0300022C_CullableEntries_03001DC0_DL_000150F0_Tex.rgba16.inc.c"
};

u64 gWaterTempleNightEntranceTex[TEX_LEN(u64, gWaterTempleNightEntranceTex_WIDTH, gWaterTempleNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/gWaterTempleNightEntranceTex.ia16.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_02000358[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList_02000358.inc.c"
};

static Vec3s mq_path_list_02000370[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList_02000370.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
