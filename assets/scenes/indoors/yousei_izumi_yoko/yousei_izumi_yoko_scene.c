#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene.h"
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_room_0.h"

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
#include "save.h"

SceneCmd yousei_izumi_yoko_scene[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene.inc.c"
};

SceneCmd* yousei_izumi_yoko_scene_02000060_AltHeaders[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders.inc.c"
};

ActorEntry yousei_izumi_yoko_scene_02000078_PlayerEntryList[LENGTH_yousei_izumi_yoko_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000078_PlayerEntryList.inc.c"
};

RomFile yousei_izumi_yoko_scene_020000A8_RoomList[LENGTH_yousei_izumi_yoko_scene_020000A8_RoomList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020000A8_RoomList.inc.c"
};

Spawn yousei_izumi_yoko_scene_020000B0_SpawnList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020000B0_SpawnList.inc.c"
};

s16 yousei_izumi_yoko_scene_020000B8_ExitList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020000B8_ExitList.inc.c"
};

EnvLightSettings yousei_izumi_yoko_scene_020000BC_EnvLightSettingsList[LENGTH_yousei_izumi_yoko_scene_020000BC_EnvLightSettingsList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020000BC_EnvLightSettingsList.inc.c"
};

u8 yousei_izumi_yoko_scene_zeros_000158[8] = { 0 };

CutsceneData gGreatFairyFaroresWindCs[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/gGreatFairyFaroresWindCs.csdata.inc.c"
};

CutsceneData gGreatFairyDinsFireCs[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/gGreatFairyDinsFireCs.csdata.inc.c"
};

CutsceneData gGreatFairyNayrusLoveCs[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/gGreatFairyNayrusLoveCs.csdata.inc.c"
};

BgCamInfo yousei_izumi_yoko_scene_020039A8_BgCamList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020039A8_BgCamList.inc.c"
};

SurfaceType yousei_izumi_yoko_scene_020039A8_SurfaceTypes[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020039A8_SurfaceTypes.inc.c"
};

CollisionPoly yousei_izumi_yoko_scene_020039A8_PolyList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020039A8_PolyList.inc.c"
};

Vec3s yousei_izumi_yoko_scene_020039A8_VtxList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020039A8_VtxList.inc.c"
};

CollisionHeader yousei_izumi_yoko_scene_020039A8_Col = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_020039A8_Col.inc.c"
};

u8 yousei_izumi_yoko_scene_zeros_0039D4[12] = { 0 };

SceneCmd yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds.inc.c"
};

ActorEntry yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A40_PlayerEntryList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A40_PlayerEntryList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A40_PlayerEntryList.inc.c"
};

RomFile yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A70_RoomList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A70_RoomList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A70_RoomList.inc.c"
};

Spawn yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A78_SpawnList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A78_SpawnList.inc.c"
};

s16 yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A80_ExitList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A80_ExitList.inc.c"
};

EnvLightSettings yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A84_EnvLightSettingsList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A84_EnvLightSettingsList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_020039E0_Cmds_02003A84_EnvLightSettingsList.inc.c"
};

SceneCmd yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds.inc.c"
};

ActorEntry yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003B80_PlayerEntryList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003B80_PlayerEntryList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003B80_PlayerEntryList.inc.c"
};

RomFile yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BB0_RoomList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BB0_RoomList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BB0_RoomList.inc.c"
};

Spawn yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BB8_SpawnList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BB8_SpawnList.inc.c"
};

s16 yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BC0_ExitList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BC0_ExitList.inc.c"
};

EnvLightSettings yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BC4_EnvLightSettingsList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BC4_EnvLightSettingsList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003B20_Cmds_02003BC4_EnvLightSettingsList.inc.c"
};

SceneCmd yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds.inc.c"
};

ActorEntry yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CC0_PlayerEntryList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CC0_PlayerEntryList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CC0_PlayerEntryList.inc.c"
};

RomFile yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CF0_RoomList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CF0_RoomList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CF0_RoomList.inc.c"
};

Spawn yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CF8_SpawnList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003CF8_SpawnList.inc.c"
};

s16 yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003D00_ExitList[] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003D00_ExitList.inc.c"
};

EnvLightSettings yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003D04_EnvLightSettingsList[LENGTH_yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003D04_EnvLightSettingsList] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_02000060_AltHeaders_02003C60_Cmds_02003D04_EnvLightSettingsList.inc.c"
};

u64 yousei_izumi_yoko_scene_00003DA0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_00003DA0_Tex_WIDTH, yousei_izumi_yoko_scene_00003DA0_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_00003DA0_Tex.i8.inc.c"
};

u64 yousei_izumi_yoko_scene_000045A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000045A0_Tex_WIDTH, yousei_izumi_yoko_scene_000045A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000045A0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_00004DA0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_00004DA0_Tex_WIDTH, yousei_izumi_yoko_scene_00004DA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_00004DA0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_000055A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000055A0_Tex_WIDTH, yousei_izumi_yoko_scene_000055A0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000055A0_Tex.ia4.inc.c"
};

u64 yousei_izumi_yoko_scene_000065A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000065A0_Tex_WIDTH, yousei_izumi_yoko_scene_000065A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000065A0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_000075A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000075A0_Tex_WIDTH, yousei_izumi_yoko_scene_000075A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000075A0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_000085A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000085A0_Tex_WIDTH, yousei_izumi_yoko_scene_000085A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000085A0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_000095A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_000095A0_Tex_WIDTH, yousei_izumi_yoko_scene_000095A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_000095A0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_00009DA0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_00009DA0_Tex_WIDTH, yousei_izumi_yoko_scene_00009DA0_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_00009DA0_Tex.i8.inc.c"
};

u64 yousei_izumi_yoko_scene_0000ADA0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_0000ADA0_Tex_WIDTH, yousei_izumi_yoko_scene_0000ADA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_0000ADA0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_0000B5A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_0000B5A0_Tex_WIDTH, yousei_izumi_yoko_scene_0000B5A0_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_0000B5A0_Tex.ia8.inc.c"
};

u64 yousei_izumi_yoko_scene_0000BDA0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_0000BDA0_Tex_WIDTH, yousei_izumi_yoko_scene_0000BDA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_0000BDA0_Tex.rgba16.inc.c"
};

u64 yousei_izumi_yoko_scene_0000C5A0_Tex[TEX_LEN(u64, yousei_izumi_yoko_scene_0000C5A0_Tex_WIDTH, yousei_izumi_yoko_scene_0000C5A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_yoko/yousei_izumi_yoko_scene_0000C5A0_Tex.rgba16.inc.c"
};

