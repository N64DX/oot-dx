#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"

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

SceneCmd HAKAdan_scene[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_scene.inc.c"
};

ActorEntry HAKAdan_scene_02000060_PlayerEntryList[LENGTH_HAKAdan_scene_02000060_PlayerEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02000060_PlayerEntryList.inc.c"
};

TransitionActorEntry HAKAdan_scene_02000080_TransitionActorEntryList[LENGTH_HAKAdan_scene_02000080_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02000080_TransitionActorEntryList.inc.c"
};

RomFile HAKAdan_scene_020001F0_RoomList[LENGTH_HAKAdan_scene_020001F0_RoomList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_020001F0_RoomList.inc.c"
};

Spawn HAKAdan_scene_020002A8_SpawnList[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_020002A8_SpawnList.inc.c"
};

s16 HAKAdan_scene_020002AC_ExitList[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_020002AC_ExitList.inc.c"
};

EnvLightSettings HAKAdan_scene_020002B0_EnvLightSettingsList[LENGTH_HAKAdan_scene_020002B0_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_020002B0_EnvLightSettingsList.inc.c"
};

BgCamInfo HAKAdan_scene_02016394_BgCamList[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02016394_BgCamList.inc.c"
};

SurfaceType HAKAdan_scene_02016394_SurfaceTypes[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02016394_SurfaceTypes.inc.c"
};

CollisionPoly HAKAdan_scene_02016394_PolyList[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02016394_PolyList.inc.c"
};

Vec3s HAKAdan_scene_02016394_VtxList[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02016394_VtxList.inc.c"
};

CollisionHeader HAKAdan_scene_02016394_Col = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene_02016394_Col.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_000163C0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_000163C0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_000163C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_000163C0_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_00016BC0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_00016BC0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_00016BC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_00016BC0_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000173C0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000173C0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000173C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000173C0_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_00017BC0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_00017BC0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_00017BC0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_00017BC0_Tex.rgba16.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
