#include "assets/scenes/dungeons/bdan/bdan_scene.h"

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

SceneCmd bdan_scene[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_scene.inc.c"
};

SceneCmd* bdan_scene_02000068_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders.inc.c"
};

ActorEntry bdan_scene_02000078_PlayerEntryList[LENGTH_bdan_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000078_PlayerEntryList.inc.c"
};

TransitionActorEntry bdan_scene_02000098_TransitionActorEntryList[LENGTH_bdan_scene_02000098_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000098_TransitionActorEntryList.inc.c"
};

RomFile bdan_scene_020001F8_RoomList[LENGTH_bdan_scene_020001F8_RoomList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_020001F8_RoomList.inc.c"
};

Spawn bdan_scene_02000278_SpawnList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000278_SpawnList.inc.c"
};

s16 bdan_scene_0200027C_ExitList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_0200027C_ExitList.inc.c"
};

EnvLightSettings bdan_scene_02000280_EnvLightSettingsList[LENGTH_bdan_scene_02000280_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000280_EnvLightSettingsList.inc.c"
};

BgCamInfo bdan_scene_02013054_BgCamList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_BgCamList.inc.c"
};

SurfaceType bdan_scene_02013054_SurfaceTypes[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_SurfaceTypes.inc.c"
};

CollisionPoly bdan_scene_02013054_PolyList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_PolyList.inc.c"
};

Vec3s bdan_scene_02013054_VtxList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_VtxList.inc.c"
};

WaterBox bdan_scene_02013054_WaterBoxes[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_WaterBoxes.inc.c"
};

CollisionHeader bdan_scene_02013054_Col = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02013054_Col.inc.c"
};

CutsceneData gJabuRutoObtainingSapphireUnusedCs[] = {
#include "assets/scenes/dungeons/bdan/gJabuRutoObtainingSapphireUnusedCs.csdata.inc.c"
};

SceneCmd bdan_scene_02000068_AltHeaders_02013700_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds.inc.c"
};

ActorEntry bdan_scene_02000068_AltHeaders_02013700_Cmds_02013768_PlayerEntryList[LENGTH_bdan_scene_02000068_AltHeaders_02013700_Cmds_02013768_PlayerEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_02013768_PlayerEntryList.inc.c"
};

TransitionActorEntry bdan_scene_02000068_AltHeaders_02013700_Cmds_02013788_TransitionActorEntryList[LENGTH_bdan_scene_02000068_AltHeaders_02013700_Cmds_02013788_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_02013788_TransitionActorEntryList.inc.c"
};

RomFile bdan_scene_02000068_AltHeaders_02013700_Cmds_020138E8_RoomList[LENGTH_bdan_scene_02000068_AltHeaders_02013700_Cmds_020138E8_RoomList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_020138E8_RoomList.inc.c"
};

Spawn bdan_scene_02000068_AltHeaders_02013700_Cmds_02013968_SpawnList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_02013968_SpawnList.inc.c"
};

s16 bdan_scene_02000068_AltHeaders_02013700_Cmds_0201396C_ExitList[] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_0201396C_ExitList.inc.c"
};

EnvLightSettings bdan_scene_02000068_AltHeaders_02013700_Cmds_02013970_EnvLightSettingsList[LENGTH_bdan_scene_02000068_AltHeaders_02013700_Cmds_02013970_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/bdan/bdan_scene_02000068_AltHeaders_02013700_Cmds_02013970_EnvLightSettingsList.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.tlut.rgba16.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.tlut.rgba16.inc.c"
};

u64 bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00013DE0_CITex[TEX_LEN(u64, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00013DE0_CITex_WIDTH, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00013DE0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00013DE0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000145E0_CITex[TEX_LEN(u64, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000145E0_CITex_WIDTH, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000145E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000145E0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000149E0_CITex[TEX_LEN(u64, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000149E0_CITex_WIDTH, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000149E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000149E0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000151E0_CITex[TEX_LEN(u64, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000151E0_CITex_WIDTH, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000151E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000151E0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

CutsceneData gJabuIntroCs[] = {
#include "assets/scenes/dungeons/bdan/gJabuIntroCs.csdata.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons_mq/bdan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
