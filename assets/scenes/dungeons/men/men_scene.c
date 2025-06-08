#include "assets/scenes/dungeons/men/men_scene.h"

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

SceneCmd men_scene[] = {
#include "assets/scenes/dungeons/men/men_scene.inc.c"
};

ActorEntry men_scene_02000068_PlayerEntryList[LENGTH_men_scene_02000068_PlayerEntryList] = {
#include "assets/scenes/dungeons/men/men_scene_02000068_PlayerEntryList.inc.c"
};

TransitionActorEntry men_scene_02000078_TransitionActorEntryList[LENGTH_men_scene_02000078_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/men/men_scene_02000078_TransitionActorEntryList.inc.c"
};

RomFile men_scene_020001D8_RoomList[LENGTH_men_scene_020001D8_RoomList] = {
#include "assets/scenes/dungeons/men/men_scene_020001D8_RoomList.inc.c"
};

Spawn men_scene_02000230_SpawnList[] = {
#include "assets/scenes/dungeons/men/men_scene_02000230_SpawnList.inc.c"
};

s16 men_scene_02000234_ExitList[] = {
#include "assets/scenes/dungeons/men/men_scene_02000234_ExitList.inc.c"
};

EnvLightSettings men_scene_02000238_EnvLightSettingsList[LENGTH_men_scene_02000238_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/men/men_scene_02000238_EnvLightSettingsList.inc.c"
};

Vec3s men_scene_020002F0_PathList_020002C0_Points[] = {
#include "assets/scenes/dungeons/men/men_scene_020002F0_PathList_020002C0_Points.inc.c"
};

Path men_scene_020002F0_PathList[] = {
#include "assets/scenes/dungeons/men/men_scene_020002F0_PathList.inc.c"
};

Vec3s men_scene_0200F700_BgCamList_02000300_BgCamFuncData[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_BgCamList_02000300_BgCamFuncData.inc.c"
};

BgCamInfo men_scene_0200F700_BgCamList[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_BgCamList.inc.c"
};

SurfaceType men_scene_0200F700_SurfaceTypes[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_SurfaceTypes.inc.c"
};

CollisionPoly men_scene_0200F700_PolyList[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_PolyList.inc.c"
};

Vec3s men_scene_0200F700_VtxList[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_VtxList.inc.c"
};

WaterBox men_scene_0200F700_WaterBoxes[] = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_WaterBoxes.inc.c"
};

CollisionHeader men_scene_0200F700_Col = {
#include "assets/scenes/dungeons/men/men_scene_0200F700_Col.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000F730_TLUT[] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000F730_TLUT.tlut.rgba16.inc.c"
};

u64 gGTGDayEntranceTex[TEX_LEN(u64, gGTGDayEntranceTex_WIDTH, gGTGDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/gGTGDayEntranceTex.ia16.inc.c"
};

u64 gGTGNightEntranceTex[TEX_LEN(u64, gGTGNightEntranceTex_WIDTH, gGTGNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/gGTGNightEntranceTex.ia16.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_00010930_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00010930_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00010930_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_00010930_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_00010D30_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00010D30_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00010D30_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_00010D30_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/men/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/men/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/men/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/men/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
