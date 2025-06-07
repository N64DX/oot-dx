#include "assets/scenes/dungeons/ddan/ddan_scene.h"

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

SceneCmd ddan_scene[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene.inc.c"
};

ActorEntry ddan_scene_02000060_PlayerEntryList[LENGTH_ddan_scene_02000060_PlayerEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02000060_PlayerEntryList.inc.c"
};

TransitionActorEntry ddan_scene_02000080_TransitionActorEntryList[LENGTH_ddan_scene_02000080_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02000080_TransitionActorEntryList.inc.c"
};

RomFile ddan_scene_020001F0_RoomList[LENGTH_ddan_scene_020001F0_RoomList] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_020001F0_RoomList.inc.c"
};

Spawn ddan_scene_02000278_SpawnList[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02000278_SpawnList.inc.c"
};

s16 ddan_scene_0200027C_ExitList[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_0200027C_ExitList.inc.c"
};

EnvLightSettings ddan_scene_02000280_EnvLightSettingsList[LENGTH_ddan_scene_02000280_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02000280_EnvLightSettingsList.inc.c"
};

BgCamInfo ddan_scene_02011D38_BgCamList[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02011D38_BgCamList.inc.c"
};

SurfaceType ddan_scene_02011D38_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02011D38_SurfaceTypes.inc.c"
};

CollisionPoly ddan_scene_02011D38_PolyList[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02011D38_PolyList.inc.c"
};

Vec3s ddan_scene_02011D38_VtxList[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02011D38_VtxList.inc.c"
};

CollisionHeader ddan_scene_02011D38_Col = {
#include "assets/scenes/dungeons/ddan/ddan_scene_02011D38_Col.inc.c"
};

u8 ddan_scene_zeros_011D64[12] = { 0 };

u64 gDCSceneTLUT[] = {
#include "assets/scenes/dungeons/ddan/gDCSceneTLUT.tlut.rgba16.inc.c"
};

u8 ddan_scene_unaccounted_011F70[] = {
#include "assets/scenes/dungeons/ddan/ddan_scene_unaccounted_011F70.bin.inc.c"
};

u64 gDCLavaFloor1Tex[TEX_LEN(u64, gDCLavaFloor1Tex_WIDTH, gDCLavaFloor1Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor1Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCDayEntranceTex[TEX_LEN(u64, gDCDayEntranceTex_WIDTH, gDCDayEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCDayEntranceTex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 gDCLavaFloor8Tex[TEX_LEN(u64, gDCLavaFloor8Tex_WIDTH, gDCLavaFloor8Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor8Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCLavaFloor7Tex[TEX_LEN(u64, gDCLavaFloor7Tex_WIDTH, gDCLavaFloor7Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor7Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCNightEntranceTex[TEX_LEN(u64, gDCNightEntranceTex_WIDTH, gDCNightEntranceTex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCNightEntranceTex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 gDCLavaFloor6Tex[TEX_LEN(u64, gDCLavaFloor6Tex_WIDTH, gDCLavaFloor6Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor6Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCLavaFloor4Tex[TEX_LEN(u64, gDCLavaFloor4Tex_WIDTH, gDCLavaFloor4Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor4Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCLavaFloor3Tex[TEX_LEN(u64, gDCLavaFloor3Tex_WIDTH, gDCLavaFloor3Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor3Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCLavaFloor2Tex[TEX_LEN(u64, gDCLavaFloor2Tex_WIDTH, gDCLavaFloor2Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor2Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u64 gDCLavaFloor5Tex[TEX_LEN(u64, gDCLavaFloor5Tex_WIDTH, gDCLavaFloor5Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/gDCLavaFloor5Tex.ci8.tlut_gDCRoom0TLUT.inc.c"
};

u8 ddan_scene_zeros_014F78[8] = { 0 };

CutsceneData gDcOpeningCs[] = {
#include "assets/scenes/dungeons/ddan/gDcOpeningCs.csdata.inc.c"
};

u8 ddan_scene_zeros_015138[8] = { 0 };

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ddan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ddan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ddan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
