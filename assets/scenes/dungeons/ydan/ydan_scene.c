#include "assets/scenes/dungeons/ydan/ydan_scene.h"

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

SceneCmd ydan_scene[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene.inc.c"
};

ActorEntry ydan_scene_02000060_PlayerEntryList[LENGTH_ydan_scene_02000060_PlayerEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_02000060_PlayerEntryList.inc.c"
};

TransitionActorEntry ydan_scene_02000080_TransitionActorEntryList[LENGTH_ydan_scene_02000080_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_02000080_TransitionActorEntryList.inc.c"
};

RomFile ydan_scene_02000140_RoomList[LENGTH_ydan_scene_02000140_RoomList] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_02000140_RoomList.inc.c"
};

Spawn ydan_scene_020001A0_SpawnList[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_020001A0_SpawnList.inc.c"
};

s16 ydan_scene_020001A4_ExitList[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_020001A4_ExitList.inc.c"
};

EnvLightSettings ydan_scene_020001A8_EnvLightSettingsList[LENGTH_ydan_scene_020001A8_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_020001A8_EnvLightSettingsList.inc.c"
};

Vec3s ydan_scene_0200B610_BgCamList_02000250_BgCamFuncData[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_BgCamList_02000250_BgCamFuncData.inc.c"
};

BgCamInfo ydan_scene_0200B610_BgCamList[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_BgCamList.inc.c"
};

SurfaceType ydan_scene_0200B610_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_SurfaceTypes.inc.c"
};

CollisionPoly ydan_scene_0200B610_PolyList[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_PolyList.inc.c"
};

Vec3s ydan_scene_0200B610_VtxList[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_VtxList.inc.c"
};

WaterBox ydan_scene_0200B610_WaterBoxes[] = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_WaterBoxes.inc.c"
};

CollisionHeader ydan_scene_0200B610_Col = {
#include "assets/scenes/dungeons/ydan/ydan_scene_0200B610_Col.inc.c"
};

CutsceneData gDekuTreeIntroCs[] = {
#include "assets/scenes/dungeons/ydan/gDekuTreeIntroCs.csdata.inc.c"
};

u64 ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.tlut.rgba16.inc.c"
};

u64 gDekuTreeDayEntranceTex[TEX_LEN(u64, gDekuTreeDayEntranceTex_WIDTH, gDekuTreeDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/gDekuTreeDayEntranceTex.rgba16.inc.c"
};

u64 gDekuTreeNightEntranceTex[TEX_LEN(u64, gDekuTreeNightEntranceTex_WIDTH, gDekuTreeNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/gDekuTreeNightEntranceTex.rgba16.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ydan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
