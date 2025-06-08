#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

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
#include "versions.h"

static SceneCmd* questHeaders[1];

#if !OOT_NTSC
extern CollisionHeader ice_doukutu_scene_0200F5C4_Col;
#endif

SceneCmd ice_doukutu_scene[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.inc.c"
};

SceneCmd* ice_doukutu_scene_02000068_AltHeaders[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders.inc.c"
};

ActorEntry ice_doukutu_scene_02000078_PlayerEntryList[LENGTH_ice_doukutu_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000078_PlayerEntryList.inc.c"
};

TransitionActorEntry ice_doukutu_scene_02000098_TransitionActorEntryList[LENGTH_ice_doukutu_scene_02000098_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000098_TransitionActorEntryList.inc.c"
};

RomFile ice_doukutu_scene_02000158_RoomList[LENGTH_ice_doukutu_scene_02000158_RoomList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000158_RoomList.inc.c"
};

Spawn ice_doukutu_scene_020001B8_SpawnList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001B8_SpawnList.inc.c"
};

s16 ice_doukutu_scene_020001BC_ExitList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001BC_ExitList.inc.c"
};

EnvLightSettings ice_doukutu_scene_020001C0_EnvLightSettingsList[LENGTH_ice_doukutu_scene_020001C0_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_020001C0_EnvLightSettingsList.inc.c"
};

CutsceneData gIceCavernSerenadeCs[] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernSerenadeCs.csdata.inc.c"
};

#if OOT_NTSC
Vec3s ice_doukutu_scene_0200F5C4_BgCamList_02001A00_BgCamFuncData[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_BgCamList_02001A00_BgCamFuncData.inc.c"
};

BgCamInfo ice_doukutu_scene_0200F5C4_BgCamList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_BgCamList.inc.c"
};

SurfaceType ice_doukutu_scene_0200F5C4_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_SurfaceTypes.inc.c"
};

CollisionPoly ice_doukutu_scene_0200F5C4_PolyList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_PolyList.inc.c"
};

Vec3s ice_doukutu_scene_0200F5C4_VtxList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_VtxList.inc.c"
};

WaterBox ice_doukutu_scene_0200F5C4_WaterBoxes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_WaterBoxes.inc.c"
};

CollisionHeader ice_doukutu_scene_0200F5C4_Col = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5C4_Col.inc.c"
};

SceneCmd ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds.inc.c"
};

ActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F658_PlayerEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F658_PlayerEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F658_PlayerEntryList.inc.c"
};

TransitionActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F668_TransitionActorEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F668_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F668_TransitionActorEntryList.inc.c"
};

RomFile ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F728_RoomList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F728_RoomList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F728_RoomList.inc.c"
};

Spawn ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F788_SpawnList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F788_SpawnList.inc.c"
};

s16 ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F78C_ExitList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F78C_ExitList.inc.c"
};

EnvLightSettings ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F790_EnvLightSettingsList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F790_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5F0_Cmds_0200F790_EnvLightSettingsList.inc.c"
};

u64 ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030015C0_DL_0000F7F0_TLUT[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030015C0_DL_0000F7F0_TLUT.tlut.rgba16.inc.c"
};

u64 gIceCavernNightEntranceTex[TEX_LEN(u64, gIceCavernNightEntranceTex_WIDTH, gIceCavernNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernNightEntranceTex.ia16.inc.c"
};

u64 gIceCavernDayEntranceTex[TEX_LEN(u64, gIceCavernDayEntranceTex_WIDTH, gIceCavernDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernDayEntranceTex.ia16.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC10_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC10_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC10_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC10_Tex.i8.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010010_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010010_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010010_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010010_Tex.rgba16.inc.c"
};

u64 ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010810_Tex[TEX_LEN(u64, ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010810_Tex_WIDTH, ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010810_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010810_Tex.rgba16.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A10_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A10_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A10_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A10_Tex.i8.inc.c"
};

u64 ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E10_Tex[TEX_LEN(u64, ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E10_Tex_WIDTH, ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E10_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E10_Tex.rgba16.inc.c"
};
#else
BgCamInfo ice_doukutu_scene_0200F5A8_BgCamList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_BgCamList.inc.c"
};

SurfaceType ice_doukutu_scene_0200F5A8_SurfaceTypes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_SurfaceTypes.inc.c"
};

CollisionPoly ice_doukutu_scene_0200F5A8_PolyList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_PolyList.inc.c"
};

Vec3s ice_doukutu_scene_0200F5C4_VtxList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_VtxList.inc.c"
};

Vec3s ice_doukutu_scene_0200F5A8_VtxList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_VtxList.inc.c"
};

WaterBox ice_doukutu_scene_0200F5C4_WaterBoxes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_WaterBoxes.inc.c"
};

WaterBox ice_doukutu_scene_0200F5A8_WaterBoxes[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_WaterBoxes.inc.c"
};

CollisionHeader ice_doukutu_scene_0200F5C4_Col = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_0200F5A8_Col.inc.c"
};

CollisionHeader ice_doukutu_scene_0200F5A8_Col = {
    {
        -2019, // x
        -221, // y
        -2866, // z
    }, // minBounds
    {
        1672, // x
        789, // y
        3161, // z
    }, // maxBounds
    ARRAY_COUNT(ice_doukutu_scene_0200F5A8_WaterBoxes), // numVertices
    NULL, // vtxList
    ARRAY_COUNT(ice_doukutu_scene_0200F5A8_WaterBoxes), // numPolygons
    NULL, // polyList
    NULL, // surfaceTypeList
    NULL, // bgCamList
    ARRAY_COUNT(ice_doukutu_scene_0200F5A8_WaterBoxes), // numWaterBoxes
    NULL, // waterBoxes
};

SceneCmd ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds.inc.c"
};

ActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F648_PlayerEntryList.inc.c"
};

TransitionActorEntry ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F658_TransitionActorEntryList.inc.c"
};

RomFile ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F718_RoomList.inc.c"
};

Spawn ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F778_SpawnList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F778_SpawnList.inc.c"
};

s16 ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F77C_ExitList[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F77C_ExitList.inc.c"
};

EnvLightSettings ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList[LENGTH_ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene_02000068_AltHeaders_0200F5E0_Cmds_0200F780_EnvLightSettingsList.inc.c"
};

u64 ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030015C0_DL_0000F7E0_TLUT[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030015C0_DL_0000F7E0_TLUT.tlut.rgba16.inc.c"
};

u64 gIceCavernNightEntranceTex[TEX_LEN(u64, gIceCavernNightEntranceTex_WIDTH, gIceCavernNightEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernNightEntranceTex.ia16.inc.c"
};

u64 gIceCavernDayEntranceTex[TEX_LEN(u64, gIceCavernDayEntranceTex_WIDTH, gIceCavernDayEntranceTex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/gIceCavernDayEntranceTex.ia16.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC00_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC00_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC00_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_0000FC00_Tex.i8.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010000_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010000_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03001B80_DL_00010000_Tex.rgba16.inc.c"
};

u64 ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010800_Tex[TEX_LEN(u64, ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010800_Tex_WIDTH, ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010800_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_1_03000150_RoomShapeNormal_0300015C_DListsEntries_0300AB20_DL_0300A760_DL_00010800_Tex.rgba16.inc.c"
};

u64 ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A00_Tex[TEX_LEN(u64, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A00_Tex_WIDTH, ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A00_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002F00_DL_03000330_DL_00010A00_Tex.i8.inc.c"
};

u64 ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E00_Tex[TEX_LEN(u64, ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E00_Tex_WIDTH, ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E00_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_2_030000D0_RoomShapeNormal_030000DC_DListsEntries_030016F0_DL_030011D0_DL_00010E00_Tex.rgba16.inc.c"
};
#endif

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/transitionActors.inc.c"
};

static BgCamInfo mq_cam_list[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/camList.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_020002CC[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_020002CC.inc.c"
};

static Vec3s mq_path_list_020002E0[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_020002E0.inc.c"
};

static Vec3s mq_path_list_0200024C[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_0200024C.inc.c"
};

static Vec3s mq_path_list_02000270[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_02000270.inc.c"
};

static Vec3s mq_path_list_02000290[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_02000290.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
