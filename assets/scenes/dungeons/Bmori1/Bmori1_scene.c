#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

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

SceneCmd Bmori1_scene[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.inc.c"
};

ActorEntry Bmori1_scene_02000060_PlayerEntryList[LENGTH_Bmori1_scene_02000060_PlayerEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000060_PlayerEntryList.inc.c"
};

TransitionActorEntry Bmori1_scene_02000090_TransitionActorEntryList[LENGTH_Bmori1_scene_02000090_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000090_TransitionActorEntryList.inc.c"
};

RomFile Bmori1_scene_02000260_RoomList[LENGTH_Bmori1_scene_02000260_RoomList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000260_RoomList.inc.c"
};

Spawn Bmori1_scene_02000318_SpawnList[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000318_SpawnList.inc.c"
};

s16 Bmori1_scene_02000320_ExitList[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000320_ExitList.inc.c"
};

EnvLightSettings Bmori1_scene_02000324_EnvLightSettingsList[LENGTH_Bmori1_scene_02000324_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02000324_EnvLightSettingsList.inc.c"
};

BgCamInfo Bmori1_scene_02014054_BgCamList[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_BgCamList.inc.c"
};

SurfaceType Bmori1_scene_02014054_SurfaceTypes[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_SurfaceTypes.inc.c"
};

CollisionPoly Bmori1_scene_02014054_PolyList[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_PolyList.inc.c"
};

Vec3s Bmori1_scene_02014054_VtxList[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_VtxList.inc.c"
};

WaterBox Bmori1_scene_02014054_WaterBoxes[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_WaterBoxes.inc.c"
};

CollisionHeader Bmori1_scene_02014054_Col = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_02014054_Col.inc.c"
};

u64 Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.tlut.rgba16.inc.c"
};

u8 Bmori1_scene_unaccounted_014280[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_unaccounted_014280.bin.inc.c"
};

u64 Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.tlut.rgba16.inc.c"
};

u8 Bmori1_scene_unaccounted_014488[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene_unaccounted_014488.bin.inc.c"
};

u64 Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03002B58_DL_00014490_CITex[TEX_LEN(u64, Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03002B58_DL_00014490_CITex_WIDTH, Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03002B58_DL_00014490_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03002B58_DL_00014490_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 gForestTempleNightEntranceTex[TEX_LEN(u64, gForestTempleNightEntranceTex_WIDTH, gForestTempleNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/gForestTempleNightEntranceTex.ia16.inc.c"
};

u64 gForestTempleDayEntranceTex[TEX_LEN(u64, gForestTempleDayEntranceTex_WIDTH, gForestTempleDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/gForestTempleDayEntranceTex.ia16.inc.c"
};

u64 Bmori1_room_8_03000110_RoomShapeCullable_0300011C_CullableEntries_03008120_DL_00015590_CITex[TEX_LEN(u64, Bmori1_room_8_03000110_RoomShapeCullable_0300011C_CullableEntries_03008120_DL_00015590_CITex_WIDTH, Bmori1_room_8_03000110_RoomShapeCullable_0300011C_CullableEntries_03008120_DL_00015590_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_8_03000110_RoomShapeCullable_0300011C_CullableEntries_03008120_DL_00015590_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00015690_CITex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00015690_CITex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00015690_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00015690_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u64 Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03009E28_DL_00015A90_CITex[TEX_LEN(u64, Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03009E28_DL_00015A90_CITex_WIDTH, Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03009E28_DL_00015A90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_2_030001D0_RoomShapeCullable_030001DC_CullableEntries_03009E28_DL_00015A90_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00015B90_CITex[TEX_LEN(u64, Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00015B90_CITex_WIDTH, Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00015B90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00015B90_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
