#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene.h"
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_room_0.h"

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

SceneCmd daiyousei_izumi_scene[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene.inc.c"
};

SceneCmd* daiyousei_izumi_scene_02000060_AltHeaders[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders.inc.c"
};

ActorEntry daiyousei_izumi_scene_02000078_PlayerEntryList[LENGTH_daiyousei_izumi_scene_02000078_PlayerEntryList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000078_PlayerEntryList.inc.c"
};

RomFile daiyousei_izumi_scene_020000A8_RoomList[LENGTH_daiyousei_izumi_scene_020000A8_RoomList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020000A8_RoomList.inc.c"
};

Spawn daiyousei_izumi_scene_020000B0_SpawnList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020000B0_SpawnList.inc.c"
};

s16 daiyousei_izumi_scene_020000B8_ExitList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020000B8_ExitList.inc.c"
};

EnvLightSettings daiyousei_izumi_scene_020000BC_EnvLightSettingsList[LENGTH_daiyousei_izumi_scene_020000BC_EnvLightSettingsList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020000BC_EnvLightSettingsList.inc.c"
};

u8 daiyousei_izumi_scene_zeros_00012C[4] = { 0 };

CutsceneData gGreatFairyMagicCs[] = {
#include "assets/scenes/indoors/daiyousei_izumi/gGreatFairyMagicCs.csdata.inc.c"
};

CutsceneData gGreatFairyDoubleMagicCs[] = {
#include "assets/scenes/indoors/daiyousei_izumi/gGreatFairyDoubleMagicCs.csdata.inc.c"
};

CutsceneData gGreatFairyDoubleDefenseCs[] = {
#include "assets/scenes/indoors/daiyousei_izumi/gGreatFairyDoubleDefenseCs.csdata.inc.c"
};

BgCamInfo daiyousei_izumi_scene_020043A4_BgCamList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020043A4_BgCamList.inc.c"
};

SurfaceType daiyousei_izumi_scene_020043A4_SurfaceTypes[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020043A4_SurfaceTypes.inc.c"
};

CollisionPoly daiyousei_izumi_scene_020043A4_PolyList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020043A4_PolyList.inc.c"
};

Vec3s daiyousei_izumi_scene_020043A4_VtxList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020043A4_VtxList.inc.c"
};

CollisionHeader daiyousei_izumi_scene_020043A4_Col = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_020043A4_Col.inc.c"
};

SceneCmd daiyousei_izumi_scene_unused[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused.inc.c"
};

ActorEntry daiyousei_izumi_scene_unused_02004428_PlayerEntryList[LENGTH_daiyousei_izumi_scene_unused_02004428_PlayerEntryList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused_02004428_PlayerEntryList.inc.c"
};

RomFile daiyousei_izumi_scene_unused_02004438_RoomList[LENGTH_daiyousei_izumi_scene_unused_02004438_RoomList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused_02004438_RoomList.inc.c"
};

Spawn daiyousei_izumi_scene_unused_02004440_SpawnList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused_02004440_SpawnList.inc.c"
};

s16 daiyousei_izumi_scene_unused_02004444_ExitList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused_02004444_ExitList.inc.c"
};

EnvLightSettings daiyousei_izumi_scene_unused_02004448_EnvLightSettingsList[LENGTH_daiyousei_izumi_scene_unused_02004448_EnvLightSettingsList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_unused_02004448_EnvLightSettingsList.inc.c"
};

SceneCmd daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds.inc.c"
};

ActorEntry daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004500_PlayerEntryList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004500_PlayerEntryList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004500_PlayerEntryList.inc.c"
};

RomFile daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004530_RoomList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004530_RoomList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004530_RoomList.inc.c"
};

Spawn daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004538_SpawnList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004538_SpawnList.inc.c"
};

s16 daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004540_ExitList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004540_ExitList.inc.c"
};

EnvLightSettings daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004544_EnvLightSettingsList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004544_EnvLightSettingsList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020044A0_Cmds_02004544_EnvLightSettingsList.inc.c"
};

u8 daiyousei_izumi_scene_zeros_0045B4[12] = { 0 };

SceneCmd daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds.inc.c"
};

ActorEntry daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004620_PlayerEntryList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004620_PlayerEntryList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004620_PlayerEntryList.inc.c"
};

RomFile daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004650_RoomList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004650_RoomList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004650_RoomList.inc.c"
};

Spawn daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004658_SpawnList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004658_SpawnList.inc.c"
};

s16 daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004660_ExitList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004660_ExitList.inc.c"
};

EnvLightSettings daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004664_EnvLightSettingsList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004664_EnvLightSettingsList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020045C0_Cmds_02004664_EnvLightSettingsList.inc.c"
};

u8 daiyousei_izumi_scene_zeros_0046D4[12] = { 0 };

SceneCmd daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds.inc.c"
};

ActorEntry daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004740_PlayerEntryList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004740_PlayerEntryList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004740_PlayerEntryList.inc.c"
};

RomFile daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004770_RoomList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004770_RoomList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004770_RoomList.inc.c"
};

Spawn daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004778_SpawnList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004778_SpawnList.inc.c"
};

s16 daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004780_ExitList[] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004780_ExitList.inc.c"
};

EnvLightSettings daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004784_EnvLightSettingsList[LENGTH_daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004784_EnvLightSettingsList] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_02000060_AltHeaders_020046E0_Cmds_02004784_EnvLightSettingsList.inc.c"
};

u8 daiyousei_izumi_scene_zeros_0047F4[12] = { 0 };

u64 daiyousei_izumi_scene_00004800_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00004800_Tex_WIDTH, daiyousei_izumi_scene_00004800_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00004800_Tex.i8.inc.c"
};

u64 daiyousei_izumi_scene_00005000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00005000_Tex_WIDTH, daiyousei_izumi_scene_00005000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00005000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_00005800_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00005800_Tex_WIDTH, daiyousei_izumi_scene_00005800_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00005800_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_00006000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00006000_Tex_WIDTH, daiyousei_izumi_scene_00006000_Tex_HEIGHT, 4)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00006000_Tex.ia4.inc.c"
};

u64 daiyousei_izumi_scene_00007000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00007000_Tex_WIDTH, daiyousei_izumi_scene_00007000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00007000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_00008000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00008000_Tex_WIDTH, daiyousei_izumi_scene_00008000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00008000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_00009000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_00009000_Tex_WIDTH, daiyousei_izumi_scene_00009000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_00009000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_0000A000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000A000_Tex_WIDTH, daiyousei_izumi_scene_0000A000_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000A000_Tex.i8.inc.c"
};

u64 daiyousei_izumi_scene_0000A800_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000A800_Tex_WIDTH, daiyousei_izumi_scene_0000A800_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000A800_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_0000B000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000B000_Tex_WIDTH, daiyousei_izumi_scene_0000B000_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000B000_Tex.i8.inc.c"
};

u64 daiyousei_izumi_scene_0000C000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000C000_Tex_WIDTH, daiyousei_izumi_scene_0000C000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000C000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_0000C800_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000C800_Tex_WIDTH, daiyousei_izumi_scene_0000C800_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000C800_Tex.ia8.inc.c"
};

u64 daiyousei_izumi_scene_0000D000_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000D000_Tex_WIDTH, daiyousei_izumi_scene_0000D000_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000D000_Tex.rgba16.inc.c"
};

u64 daiyousei_izumi_scene_0000D800_Tex[TEX_LEN(u64, daiyousei_izumi_scene_0000D800_Tex_WIDTH, daiyousei_izumi_scene_0000D800_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/daiyousei_izumi/daiyousei_izumi_scene_0000D800_Tex.rgba16.inc.c"
};

