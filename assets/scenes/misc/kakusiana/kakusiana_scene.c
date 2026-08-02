#include "assets/scenes/misc/kakusiana/kakusiana_scene.h"

#include "actor.h"
#include "array_count.h"
#include "camera.h"
#include "object.h"
#include "segment_symbols.h"
#include "sequence.h"
#include "skybox.h"
#include "stdbool.h"
#include "ultra64.h"
#include "save.h"

SceneCmd kakusiana_scene[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene.inc.c"
};

ActorEntry kakusiana_scene_02000058_PlayerEntryList[LENGTH_kakusiana_scene_02000058_PlayerEntryList] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_02000058_PlayerEntryList.inc.c"
};

RomFile kakusiana_scene_02000138_RoomList[LENGTH_kakusiana_scene_02000138_RoomList] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_02000138_RoomList.inc.c"
};

Spawn kakusiana_scene_020001A8_SpawnList[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_020001A8_SpawnList.inc.c"
};

s16 kakusiana_scene_020001C4_ExitList[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_020001C4_ExitList.inc.c"
};

EnvLightSettings kakusiana_scene_020001C8_EnvLightSettingsList[LENGTH_kakusiana_scene_020001C8_EnvLightSettingsList] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_020001C8_EnvLightSettingsList.inc.c"
};

u8 kakusiana_scene_zeros_000278[8] = { 0 };

BgCamInfo kakusiana_scene_0200B7F0_BgCamList[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_BgCamList.inc.c"
};

SurfaceType kakusiana_scene_0200B7F0_SurfaceTypes[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_SurfaceTypes.inc.c"
};

CollisionPoly kakusiana_scene_0200B7F0_PolyList[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_PolyList.inc.c"
};

Vec3s kakusiana_scene_0200B7F0_VtxList[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_VtxList.inc.c"
};

WaterBox kakusiana_scene_0200B7F0_WaterBoxes[] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_WaterBoxes.inc.c"
};

CollisionHeader kakusiana_scene_0200B7F0_Col = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0200B7F0_Col.inc.c"
};

u8 kakusiana_scene_zeros_00B81C[4] = { 0 };

u64 kakusiana_scene_0000B820_Tex[TEX_LEN(u64, kakusiana_scene_0000B820_Tex_WIDTH, kakusiana_scene_0000B820_Tex_HEIGHT, 4)] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0000B820_Tex.ia4.inc.c"
};

u64 kakusiana_scene_0000C020_Tex[TEX_LEN(u64, kakusiana_scene_0000C020_Tex_WIDTH, kakusiana_scene_0000C020_Tex_HEIGHT, 16)] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0000C020_Tex.ia16.inc.c"
};

u64 kakusiana_scene_0000D020_Tex[TEX_LEN(u64, kakusiana_scene_0000D020_Tex_WIDTH, kakusiana_scene_0000D020_Tex_HEIGHT, 16)] = {
#include "assets/scenes/misc/kakusiana/kakusiana_scene_0000D020_Tex.rgba16.inc.c"
};

