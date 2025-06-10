#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

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

SceneCmd HIDAN_scene[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_scene.inc.c"
};

ActorEntry HIDAN_scene_02000068_PlayerEntryList[LENGTH_HIDAN_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry HIDAN_scene_02000088_TransitionActorEntryList[LENGTH_HIDAN_scene_02000088_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02000088_TransitionActorEntryList.inc.c"
};

RomFile HIDAN_scene_020002D8_RoomList[LENGTH_HIDAN_scene_020002D8_RoomList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_020002D8_RoomList.inc.c"
};

Spawn HIDAN_scene_020003B0_SpawnList[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_020003B0_SpawnList.inc.c"
};

s16 HIDAN_scene_020003B4_ExitList[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_020003B4_ExitList.inc.c"
};

EnvLightSettings HIDAN_scene_020003B8_EnvLightSettingsList[LENGTH_HIDAN_scene_020003B8_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_020003B8_EnvLightSettingsList.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000410_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000410_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000430_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000430_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_0200043C_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_0200043C_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000450_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000450_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000464_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000464_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_0200047C_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_0200047C_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000494_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000494_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004A0_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004A0_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004AC_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004AC_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004C0_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004C0_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004E4_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004E4_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004F0_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004F0_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_020004FC_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_020004FC_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000508_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000508_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_0200051C_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_0200051C_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000528_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000528_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000534_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000534_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_02000540_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_02000540_Points.inc.c"
};

Vec3s HIDAN_scenePathList_000558_0200054C_Points[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558_0200054C_Points.inc.c"
};

Path HIDAN_scenePathList_000558[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scenePathList_000558.inc.c"
};

Vec3s HIDAN_scene_02018AFC_BgCamList_020005F0_BgCamFuncData[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_BgCamList_020005F0_BgCamFuncData.inc.c"
};

BgCamInfo HIDAN_scene_02018AFC_BgCamList[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_BgCamList.inc.c"
};

SurfaceType HIDAN_scene_02018AFC_SurfaceTypes[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_SurfaceTypes.inc.c"
};

CollisionPoly HIDAN_scene_02018AFC_PolyList[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_PolyList.inc.c"
};

Vec3s HIDAN_scene_02018AFC_VtxList[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_VtxList.inc.c"
};

CollisionHeader HIDAN_scene_02018AFC_Col = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene_02018AFC_Col.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.tlut.rgba16.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.tlut.rgba16.inc.c"
};

u64 HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_030025B0_DL_00018B70_CITex[TEX_LEN(u64, HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_030025B0_DL_00018B70_CITex_WIDTH, HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_030025B0_DL_00018B70_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_030025B0_DL_00018B70_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018D70_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018D70_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018D70_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018D70_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018F70_Tex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018F70_Tex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018F70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018F70_Tex.rgba16.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019770_Tex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019770_Tex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019770_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019770_Tex.rgba16.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019F70_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019F70_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019F70_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00019F70_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_03000380_DL_0001A170_Tex[TEX_LEN(u64, HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_03000380_DL_0001A170_Tex_WIDTH, HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_03000380_DL_0001A170_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_1_03000240_RoomShapeCullable_0300024C_CullableEntries_03000380_DL_0001A170_Tex.rgba16.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_0200041C[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/pathList_0200041C.inc.c"
};

static Vec3s mq_path_list_02000410[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/pathList_02000410.inc.c"
};

static Vec3s mq_path_list_02000428[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/pathList_02000428.inc.c"
};

static Vec3s mq_path_list_02000434[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/pathList_02000434.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
