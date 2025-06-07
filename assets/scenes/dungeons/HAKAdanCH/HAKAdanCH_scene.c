#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

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

SceneCmd HAKAdanCH_scene[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.inc.c"
};

ActorEntry HAKAdanCH_scene_02000068_PlayerEntryList[LENGTH_HAKAdanCH_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry HAKAdanCH_scene_02000078_TransitionActorEntryList[LENGTH_HAKAdanCH_scene_02000078_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_02000078_TransitionActorEntryList.inc.c"
};

RomFile HAKAdanCH_scene_02000168_RoomList[LENGTH_HAKAdanCH_scene_02000168_RoomList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_02000168_RoomList.inc.c"
};

Spawn HAKAdanCH_scene_020001A0_SpawnList[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_020001A0_SpawnList.inc.c"
};

s16 HAKAdanCH_scene_020001A4_ExitList[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_020001A4_ExitList.inc.c"
};

EnvLightSettings HAKAdanCH_scene_020001A8_EnvLightSettingsList[LENGTH_HAKAdanCH_scene_020001A8_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_020001A8_EnvLightSettingsList.inc.c"
};

Vec3s HAKAdanCH_scenePathList_000220_02000200_Points[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scenePathList_000220_02000200_Points.inc.c"
};

Path HAKAdanCH_scenePathList_000220[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scenePathList_000220.inc.c"
};

u8 HAKAdanCH_scene_zeros_000228[8] = { 0 };

Vec3s HAKAdanCH_scene_0200A528_BgCamList_02000230_BgCamFuncData[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_BgCamList_02000230_BgCamFuncData.inc.c"
};

BgCamInfo HAKAdanCH_scene_0200A528_BgCamList[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_BgCamList.inc.c"
};

SurfaceType HAKAdanCH_scene_0200A528_SurfaceTypes[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_SurfaceTypes.inc.c"
};

CollisionPoly HAKAdanCH_scene_0200A528_PolyList[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_PolyList.inc.c"
};

Vec3s HAKAdanCH_scene_0200A528_VtxList[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_VtxList.inc.c"
};

WaterBox HAKAdanCH_scene_0200A528_WaterBoxes[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_WaterBoxes.inc.c"
};

CollisionHeader HAKAdanCH_scene_0200A528_Col = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene_0200A528_Col.inc.c"
};

u8 HAKAdanCH_scene_zeros_00A554[12] = { 0 };

u64 HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000A560_Tex[TEX_LEN(u64, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000A560_Tex_WIDTH, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000A560_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000A560_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03000680_DL_0000AD60_Tex[TEX_LEN(u64, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03000680_DL_0000AD60_Tex_WIDTH, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03000680_DL_0000AD60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03000680_DL_0000AD60_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000B560_Tex[TEX_LEN(u64, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000B560_Tex_WIDTH, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000B560_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_030033E8_DL_0000B560_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03001230_DL_0000BD60_Tex[TEX_LEN(u64, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03001230_DL_0000BD60_Tex_WIDTH, HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03001230_DL_0000BD60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_0_03000290_RoomShapeCullable_0300029C_CullableEntries_03001230_DL_0000BD60_Tex.rgba16.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_02000200[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList_02000200.inc.c"
};

static Vec3s mq_path_list_02000224[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList_02000224.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
