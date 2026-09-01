#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene.h"
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_room_0.h"

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

SceneCmd yousei_izumi_tate_scene[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene.inc.c"
};

ActorEntry yousei_izumi_tate_scene_02000058_PlayerEntryList[LENGTH_yousei_izumi_tate_scene_02000058_PlayerEntryList] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02000058_PlayerEntryList.inc.c"
};

RomFile yousei_izumi_tate_scene_02000068_RoomList[LENGTH_yousei_izumi_tate_scene_02000068_RoomList] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02000068_RoomList.inc.c"
};

Spawn yousei_izumi_tate_scene_02000070_SpawnList[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02000070_SpawnList.inc.c"
};

s16 yousei_izumi_tate_scene_02000074_ExitList[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02000074_ExitList.inc.c"
};

EnvLightSettings yousei_izumi_tate_scene_02000078_EnvLightSettingsList[LENGTH_yousei_izumi_tate_scene_02000078_EnvLightSettingsList] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02000078_EnvLightSettingsList.inc.c"
};

BgCamInfo yousei_izumi_tate_scene_02001FDC_BgCamList[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_BgCamList.inc.c"
};

SurfaceType yousei_izumi_tate_scene_02001FDC_SurfaceTypes[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_SurfaceTypes.inc.c"
};

CollisionPoly yousei_izumi_tate_scene_02001FDC_PolyList[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_PolyList.inc.c"
};

Vec3s yousei_izumi_tate_scene_02001FDC_VtxList[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_VtxList.inc.c"
};

WaterBox yousei_izumi_tate_scene_02001FDC_WaterBoxes[] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_WaterBoxes.inc.c"
};

CollisionHeader yousei_izumi_tate_scene_02001FDC_Col = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_02001FDC_Col.inc.c"
};

u8 yousei_izumi_tate_scene_zeros_002008[8] = { 0 };

u64 yousei_izumi_tate_scene_00002010_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00002010_Tex_WIDTH, yousei_izumi_tate_scene_00002010_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00002010_Tex.ia8.inc.c"
};

u64 yousei_izumi_tate_scene_00002810_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00002810_Tex_WIDTH, yousei_izumi_tate_scene_00002810_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00002810_Tex.i8.inc.c"
};

u64 yousei_izumi_tate_scene_00003810_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00003810_Tex_WIDTH, yousei_izumi_tate_scene_00003810_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00003810_Tex.ia16.inc.c"
};

u64 yousei_izumi_tate_scene_00004810_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00004810_Tex_WIDTH, yousei_izumi_tate_scene_00004810_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00004810_Tex.i8.inc.c"
};

u64 yousei_izumi_tate_scene_00005010_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00005010_Tex_WIDTH, yousei_izumi_tate_scene_00005010_Tex_HEIGHT, 8)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00005010_Tex.i8.inc.c"
};

u64 yousei_izumi_tate_scene_00005810_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00005810_Tex_WIDTH, yousei_izumi_tate_scene_00005810_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00005810_Tex.rgba16.inc.c"
};

u64 yousei_izumi_tate_scene_00006010_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00006010_Tex_WIDTH, yousei_izumi_tate_scene_00006010_Tex_HEIGHT, 4)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00006010_Tex.i4.inc.c"
};

u64 yousei_izumi_tate_scene_00007010_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00007010_Tex_WIDTH, yousei_izumi_tate_scene_00007010_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00007010_Tex.rgba16.inc.c"
};

u64 yousei_izumi_tate_scene_00007810_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00007810_Tex_WIDTH, yousei_izumi_tate_scene_00007810_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00007810_Tex.rgba16.inc.c"
};

u64 yousei_izumi_tate_scene_00008010_Tex[TEX_LEN(u64, yousei_izumi_tate_scene_00008010_Tex_WIDTH, yousei_izumi_tate_scene_00008010_Tex_HEIGHT, 16)] = {
#include "assets/scenes/indoors/yousei_izumi_tate/yousei_izumi_tate_scene_00008010_Tex.rgba16.inc.c"
};

