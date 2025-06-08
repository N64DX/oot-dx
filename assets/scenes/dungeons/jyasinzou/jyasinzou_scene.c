#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

#include "actor.h"
#include "array_count.h"
#include "camera.h"
#include "cutscene_commands.h"
#include "object.h"
#include "ocarina.h"
#include "player.h"
#include "segment_symbols.h"
#include "sequence.h"
#include "skybox.h"
#include "stdbool.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd jyasinzou_scene[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.inc.c"
};

ActorEntry jyasinzou_scene_02000068_PlayerEntryList[LENGTH_jyasinzou_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry jyasinzou_scene_020000A8_TransitionActorEntryList[LENGTH_jyasinzou_scene_020000A8_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_020000A8_TransitionActorEntryList.inc.c"
};

RomFile jyasinzou_scene_020002B8_RoomList[LENGTH_jyasinzou_scene_020002B8_RoomList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_020002B8_RoomList.inc.c"
};

Spawn jyasinzou_scene_020003A0_SpawnList[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_020003A0_SpawnList.inc.c"
};

s16 jyasinzou_scene_020003A8_ExitList[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_020003A8_ExitList.inc.c"
};

EnvLightSettings jyasinzou_scene_020003B0_EnvLightSettingsList[LENGTH_jyasinzou_scene_020003B0_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_020003B0_EnvLightSettingsList.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_02000408_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_02000408_Points.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_02000414_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_02000414_Points.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_02000428_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_02000428_Points.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_02000430_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_02000430_Points.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_02000468_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_02000468_Points.inc.c"
};

Vec3s jyasinzou_scenePathList_0004C0_020004A0_Points[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0_020004A0_Points.inc.c"
};

Path jyasinzou_scenePathList_0004C0[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scenePathList_0004C0.inc.c"
};

Vec3s jyasinzou_scene_02016834_BgCamList_020004F0_BgCamFuncData[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_BgCamList_020004F0_BgCamFuncData.inc.c"
};

BgCamInfo jyasinzou_scene_02016834_BgCamList[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_BgCamList.inc.c"
};

SurfaceType jyasinzou_scene_02016834_SurfaceTypes[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_SurfaceTypes.inc.c"
};

CollisionPoly jyasinzou_scene_02016834_PolyList[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_PolyList.inc.c"
};

Vec3s jyasinzou_scene_02016834_VtxList[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_VtxList.inc.c"
};

CollisionHeader jyasinzou_scene_02016834_Col = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene_02016834_Col.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.tlut.rgba16.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.tlut.rgba16.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018000_TLUT[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018000_TLUT.tlut.rgba16.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT.tlut.rgba16.inc.c"
};

u64 gSpiritTempleNightEntranceTex[TEX_LEN(u64, gSpiritTempleNightEntranceTex_WIDTH, gSpiritTempleNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/jyasinzou/gSpiritTempleNightEntranceTex.ia16.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018840_CITex[TEX_LEN(u64, jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018840_CITex_WIDTH, jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018840_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018840_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 gSpiritTempleDayEntranceTex[TEX_LEN(u64, gSpiritTempleDayEntranceTex_WIDTH, gSpiritTempleDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/jyasinzou/gSpiritTempleDayEntranceTex.ia16.inc.c"
};

u64 jyasinzou_room_5_03000230_RoomShapeCullable_0300023C_CullableEntries_03006E78_DL_00019140_Tex[TEX_LEN(u64, jyasinzou_room_5_03000230_RoomShapeCullable_0300023C_CullableEntries_03006E78_DL_00019140_Tex_WIDTH, jyasinzou_room_5_03000230_RoomShapeCullable_0300023C_CullableEntries_03006E78_DL_00019140_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_5_03000230_RoomShapeCullable_0300023C_CullableEntries_03006E78_DL_00019140_Tex.rgba16.inc.c"
};

u64 jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00019340_CITex[TEX_LEN(u64, jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00019340_CITex_WIDTH, jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00019340_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00019340_CITex.ci4.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_0200042C[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_0200042C.inc.c"
};

static Vec3s mq_path_list_02000408[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000408.inc.c"
};

static Vec3s mq_path_list_02000414[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000414.inc.c"
};

static Vec3s mq_path_list_02000420[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000420.inc.c"
};

static Vec3s mq_path_list_02000464[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000464.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
