#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

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

SceneCmd ganontika_scene[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene.inc.c"
};

ActorEntry ganontika_scene_02000068_PlayerEntryList[LENGTH_ganontika_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry ganontika_scene_020000F8_TransitionActorEntryList[LENGTH_ganontika_scene_020000F8_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_020000F8_TransitionActorEntryList.inc.c"
};

RomFile ganontika_scene_02000248_RoomList[LENGTH_ganontika_scene_02000248_RoomList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02000248_RoomList.inc.c"
};

Spawn ganontika_scene_020002E8_SpawnList[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_020002E8_SpawnList.inc.c"
};

u8 ganontika_scene_unaccounted_0002F8[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_unaccounted_0002F8.bin.inc.c"
};

s16 ganontika_scene_020002FC_ExitList[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_020002FC_ExitList.inc.c"
};

EnvLightSettings ganontika_scene_02000300_EnvLightSettingsList[LENGTH_ganontika_scene_02000300_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02000300_EnvLightSettingsList.inc.c"
};

Vec3s ganontika_scenePathList_000674_0200053C_Points[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scenePathList_000674_0200053C_Points.inc.c"
};

Vec3s ganontika_scenePathList_000674_020005D4_Points[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scenePathList_000674_020005D4_Points.inc.c"
};

Vec3s ganontika_scenePathList_000674_0200066C_Points[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scenePathList_000674_0200066C_Points.inc.c"
};

Path ganontika_scenePathList_000674[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scenePathList_000674.inc.c"
};

u8 ganontika_scene_zeros_00068C[4] = { 0 };

Vec3s ganontika_scene_02019E9C_BgCamList_02000690_BgCamFuncData[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_BgCamList_02000690_BgCamFuncData.inc.c"
};

BgCamInfo ganontika_scene_02019E9C_BgCamList[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_BgCamList.inc.c"
};

SurfaceType ganontika_scene_02019E9C_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_SurfaceTypes.inc.c"
};

CollisionPoly ganontika_scene_02019E9C_PolyList[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_PolyList.inc.c"
};

Vec3s ganontika_scene_02019E9C_VtxList[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_VtxList.inc.c"
};

CollisionHeader ganontika_scene_02019E9C_Col = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_02019E9C_Col.inc.c"
};

u8 ganontika_scene_zeros_019EC8[8] = { 0 };

CutsceneData gForestTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gForestTrialSageCs.csdata.inc.c"
};

CutsceneData gWaterTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gWaterTrialSageCs.csdata.inc.c"
};

CutsceneData gShadowTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gShadowTrialSageCs.csdata.inc.c"
};

CutsceneData gFireTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gFireTrialSageCs.csdata.inc.c"
};

CutsceneData gLightTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gLightTrialSageCs.csdata.inc.c"
};

CutsceneData gSpiritTrialSageCs[] = {
#include "assets/scenes/dungeons/ganontika/gSpiritTrialSageCs.csdata.inc.c"
};

CutsceneData gTowerBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gTowerBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01DF74[12] = { 0 };

CutsceneData gLightBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gLightBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01E3C8[8] = { 0 };

CutsceneData gFireBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gFireBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01E778[8] = { 0 };

CutsceneData gForestBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gForestBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01EB28[8] = { 0 };

CutsceneData gSpiritBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gSpiritBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01EF58[8] = { 0 };

CutsceneData gWaterBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gWaterBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_01F368[8] = { 0 };

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.tlut.rgba16.inc.c"
};

u8 ganontika_scene_unaccounted_01F568[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_scene_unaccounted_01F568.bin.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_0001F570_Tex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_0001F570_Tex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_0001F570_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_0001F570_Tex.rgba16.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F770_CITex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F770_CITex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F770_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F770_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_0001FF70_CITex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_0001FF70_CITex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_0001FF70_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_0001FF70_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00020370_CITex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00020370_CITex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00020370_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00020370_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_00020B70_Tex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_00020B70_Tex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_00020B70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_00020B70_Tex.rgba16.inc.c"
};

CutsceneData gShadowBarrierCs[] = {
#include "assets/scenes/dungeons/ganontika/gShadowBarrierCs.csdata.inc.c"
};

u8 ganontika_scene_zeros_0217B8[8] = { 0 };

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ganontika/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_020005D4[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_020005D4.inc.c"
};

static Vec3s mq_path_list_020005F4[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_020005F4.inc.c"
};

static Vec3s mq_path_list_0200053C[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_0200053C.inc.c"
};

static Vec3s mq_path_list_0200063C[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_0200063C.inc.c"
};

static Vec3s mq_path_list_02000624[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_02000624.inc.c"
};

static Vec3s mq_path_list_02000630[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_02000630.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
