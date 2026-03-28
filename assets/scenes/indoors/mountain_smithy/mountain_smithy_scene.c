#include "mountain_smithy_scene.h"
#include "mountain_smithy_room_0.h"

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

SceneCmd mountain_smithy_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, NATURE_ID_NONE, NA_BGM_SHOP),
    SCENE_CMD_ROOM_LIST(1, mountain_smithy_sceneRoomList0x0000A0),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, mountain_smithy_sceneTransitionActorList_000090),
    SCENE_CMD_COL_HEADER(&mountain_smithy_sceneCollisionHeader_0008DC),
    SCENE_CMD_ENTRANCE_LIST(mountain_smithy_sceneEntranceList0x0000A8),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, mountain_smithy_sceneStartPositionList0x000080),
    SCENE_CMD_SKYBOX_SETTINGS(SKYBOX_NONE, 0, LIGHT_MODE_SETTINGS),
    SCENE_CMD_EXIT_LIST(mountain_smithy_sceneExitList_0000AC),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, mountain_smithy_sceneLightSettings0x0000B0),
    SCENE_CMD_END(),
};

ActorEntry mountain_smithy_sceneStartPositionList0x000080[] = {
    { ACTOR_PLAYER, { -3, -15, 289 }, { 0, 0x8000, 0 }, 0x0FFF },
};

TransitionActorEntry mountain_smithy_sceneTransitionActorList_000090[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 0, -15, 339, 0, 0x01BF },
};

RomFile mountain_smithy_sceneRoomList0x0000A0[] = {
    { (uintptr_t)_mountain_smithy_room_0SegmentRomStart, (uintptr_t)_mountain_smithy_room_0SegmentRomEnd },
};

Spawn mountain_smithy_sceneEntranceList0x0000A8[] = {
    { 0x00, 0x00 },
};

u16 mountain_smithy_sceneExitList_0000AC[] = {
    ENTR_SPRING_LAKE_1,
};

EnvLightSettings mountain_smithy_sceneLightSettings0x0000B0[] = {
    { 0x41, 0x41, 0x32, 0x19, 0xD3, 0x6C, 0xAA, 0xA0, 0x82, 0xEC, 0x53, 0xAD, 0x8C, 0x8C, 0x5A, 0x00, 0x14, 0x14, 0x073E, 0x35E8 },
    { 0x41, 0x41, 0x32, 0x45, 0x45, 0x45, 0xAA, 0xA0, 0x82, 0xBB, 0xBB, 0xBB, 0x8C, 0x8C, 0x5A, 0x2D, 0x1E, 0x28, 0x0766, 0x35E8 },
    { 0x78, 0x5A, 0x00, 0x45, 0x45, 0x45, 0xFA, 0x87, 0x32, 0xBB, 0xBB, 0xBB, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00, 0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x45, 0x45, 0x45, 0x14, 0x14, 0x23, 0xBB, 0xBB, 0xBB, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E, 0x07E0, 0x3200 },
};

BgCamInfo mountain_smithy_sceneCollisionHeader_0008DCCamDataList[] = {
    { 0x003F, 0, NULL },
};

SurfaceType mountain_smithy_sceneCollisionHeader_0008DCSurfaceType[] = {
    {0x00000000, 0x00001002}, {0x00000100, 0x00001002}, {0x00000000, 0x0000100A}, {0x00000000, 0x00001000},
};

CollisionPoly mountain_smithy_sceneCollisionHeader_0008DCPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x0008, 0x0009, 0x000A, 0x7FFF, 0x0000, 0x0000, 0x0070},
    {0x0002, 0x0008, 0x000A, 0x000B, 0x7FFF, 0x0000, 0x0000, 0x0070},
    {0x0002, 0x200C, 0x000D, 0x000E, 0x82A5, 0x0000, 0xE622, 0x007D},
    {0x0002, 0x200C, 0x000E, 0x000F, 0x82A5, 0x0000, 0xE622, 0x007D},
    {0x0003, 0x0010, 0x0011, 0x0012, 0x0000, 0x0000, 0x8001, 0x008B},
    {0x0003, 0x0010, 0x0012, 0x0013, 0x0000, 0x0000, 0x8001, 0x008B},
    {0x0003, 0x0014, 0x0015, 0x0016, 0x0000, 0x0000, 0x7FFF, 0xFF57},
    {0x0003, 0x0014, 0x0016, 0x0017, 0x0000, 0x0000, 0x7FFF, 0xFF57},
    {0x0002, 0xA018, 0x0019, 0x001A, 0x8175, 0x0000, 0xECC7, 0x0057},
    {0x0002, 0xA018, 0x001A, 0x001B, 0x8175, 0x0000, 0xECC7, 0x0057},
    {0x0002, 0xA01B, 0x001A, 0x000F, 0xAB31, 0x0000, 0x5FDE, 0xFFB5},
    {0x0002, 0xA01B, 0x000F, 0x000E, 0xAB31, 0x0000, 0x5FDE, 0xFFB5},
    {0x0000, 0x001C, 0x001D, 0x001E, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0000, 0x001C, 0x001E, 0x001F, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0000, 0x0020, 0x0021, 0x0022, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0020, 0x0022, 0x0023, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0023, 0x0024, 0x0025, 0x7FFF, 0x0000, 0x0000, 0x003C},
    {0x0003, 0x0023, 0x0025, 0x0020, 0x7FFF, 0x0000, 0x0000, 0x003C},
    {0x0003, 0x0022, 0x0026, 0x0024, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0003, 0x0022, 0x0024, 0x0023, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0000, 0x0027, 0x0028, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0000, 0x0027, 0x0029, 0x002A, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0000, 0x0028, 0x002B, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x0029, 0x002C, 0x002D, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x0029, 0x002D, 0x002A, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x202E, 0x002F, 0x0030, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x202E, 0x0030, 0x0031, 0x0000, 0x7FFF, 0x0000, 0x000F},
    {0x0002, 0x2032, 0x0033, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0002, 0x2032, 0x002F, 0x0034, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0003, 0x2035, 0x0036, 0x0033, 0x0000, 0x8001, 0x0000, 0x0055},
    {0x0003, 0x2035, 0x0033, 0x0032, 0x0000, 0x8001, 0x0000, 0x0055},
    {0x0002, 0x2037, 0x0030, 0x0036, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0002, 0x2037, 0x0036, 0x0035, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0002, 0x0038, 0x0039, 0x003A, 0x0000, 0x0000, 0x8001, 0x0144},
    {0x0002, 0x0038, 0x003A, 0x003B, 0x0000, 0x0000, 0x8001, 0x0144},
    {0x0003, 0xA03C, 0x003D, 0x003E, 0x9404, 0x0000, 0x44B8, 0xFFA5},
    {0x0003, 0xA03C, 0x003E, 0x003F, 0x9404, 0x0000, 0x44B8, 0xFFA5},
    {0x0003, 0xA03F, 0x003E, 0x0040, 0x5953, 0x0000, 0x5BAD, 0x000E},
    {0x0003, 0xA03F, 0x0040, 0x0041, 0x5953, 0x0000, 0x5BAD, 0x000E},
    {0x0003, 0xA041, 0x0040, 0x0042, 0x2147, 0x0000, 0x7B98, 0xFFC6},
    {0x0003, 0xA041, 0x0042, 0x0043, 0x2147, 0x0000, 0x7B98, 0xFFC6},
    {0x0002, 0xA043, 0x0042, 0x0044, 0x60DF, 0x0000, 0x53A9, 0x0038},
    {0x0002, 0xA043, 0x0044, 0x0045, 0x60DF, 0x0000, 0x53A9, 0x0038},
    {0x0002, 0x0045, 0x0044, 0x0046, 0x7FFF, 0x0000, 0x0000, 0x00B8},
    {0x0002, 0x0045, 0x0046, 0x0047, 0x7FFF, 0x0000, 0x0000, 0x00B8},
    {0x0003, 0x0047, 0x0046, 0x0009, 0x1A1B, 0x0000, 0x82B2, 0x00E3},
    {0x0003, 0x0047, 0x0009, 0x0008, 0x1A1B, 0x0000, 0x82B2, 0x00E3},
    {0x0003, 0xA03C, 0x0019, 0x0018, 0xFD2D, 0x0000, 0x7FF7, 0xFFB4},
    {0x0003, 0xA03C, 0x0018, 0x003D, 0xFD2D, 0x0000, 0x7FF7, 0xFFB4},
    {0x0000, 0x0016, 0x0015, 0x0012, 0x0000, 0x7FFF, 0x0000, 0xFFF1},
    {0x0000, 0x0016, 0x0012, 0x0011, 0x0000, 0x7FFF, 0x0000, 0xFFF1},
    {0x0003, 0x0015, 0x0014, 0x0013, 0x7FFF, 0x0000, 0x0000, 0x00A5},
    {0x0003, 0x0015, 0x0013, 0x0012, 0x7FFF, 0x0000, 0x0000, 0x00A5},
    {0x0002, 0x200C, 0x0048, 0x0049, 0x8013, 0x0000, 0xFBBC, 0x0055},
    {0x0002, 0x200C, 0x0049, 0x000D, 0x8013, 0x0000, 0xFBBC, 0x0055},
    {0x0000, 0x004A, 0x004B, 0x004C, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0000, 0x004A, 0x004C, 0x004D, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
};

Vec3s mountain_smithy_sceneCollisionHeader_0008DCVertices[] = {
    {    154,      0,     77 },
    {    154,      0,    190 },
    {    199,      0,    190 },
    {    199,      0,     77 },
    {    -60,    -15,    354 },
    {    -60,    -15,    454 },
    {     60,    -15,    454 },
    {     60,    -15,    354 },
    {   -112,    -15,    209 },
    {   -112,    180,    209 },
    {   -112,    180,    330 },
    {   -112,    -15,    330 },
    {     77,    -15,    243 },
    {     77,    180,    243 },
    {     90,    180,    180 },
    {     90,    -15,    180 },
    {   -186,    -13,    139 },
    {   -186,     15,    139 },
    {   -165,     15,    139 },
    {   -165,    -13,    139 },
    {   -165,    -13,    169 },
    {   -165,     15,    169 },
    {   -186,     15,    169 },
    {   -186,    -13,    169 },
    {     76,    180,     78 },
    {     76,    -15,     78 },
    {     64,    -15,    157 },
    {     64,    180,    157 },
    {   -180,    180,    -15 },
    {   -180,    180,     15 },
    {   -135,    180,     15 },
    {   -135,    180,    -15 },
    {    -60,      0,   -105 },
    {   -210,      0,   -105 },
    {   -210,      0,    120 },
    {    -60,      0,    120 },
    {    -60,    -15,    120 },
    {    -60,    -15,   -105 },
    {   -210,    -15,    120 },
    {    210,    -15,   -210 },
    {   -210,    -15,   -210 },
    {   -150,    -15,    210 },
    {    150,    -15,    210 },
    {   -210,    -15,    210 },
    {   -150,    -15,    330 },
    {    150,    -15,    330 },
    {    -30,    -15,    330 },
    {    -30,    -15,    354 },
    {     30,    -15,    354 },
    {     30,    -15,    330 },
    {    -30,     85,    324 },
    {    -30,     85,    354 },
    {    -30,    -15,    324 },
    {     30,     85,    324 },
    {     30,     85,    354 },
    {     30,    -15,    324 },
    {    150,    180,    324 },
    {    150,    -15,    324 },
    {   -150,    -15,    324 },
    {   -150,    180,    324 },
    {    -60,    -15,     75 },
    {    -60,    180,     75 },
    {    -74,    180,     53 },
    {    -74,    -15,     53 },
    {   -113,    180,     91 },
    {   -113,    -15,     91 },
    {   -165,    180,    105 },
    {   -165,    -15,    105 },
    {   -184,    180,    127 },
    {   -184,    -15,    127 },
    {   -184,    180,    194 },
    {   -184,    -15,    194 },
    {     74,    -15,    333 },
    {     74,    180,    333 },
    {   -184,     16,    -41 },
    {   -184,     16,     39 },
    {   -104,     16,     39 },
    {   -104,     16,    -41 },
};

CollisionHeader mountain_smithy_sceneCollisionHeader_0008DC = { 
    { -210, -27, -219 },
    { 233, 419, 454 },
    ARRAY_COUNT(mountain_smithy_sceneCollisionHeader_0008DCVertices), mountain_smithy_sceneCollisionHeader_0008DCVertices,
    ARRAY_COUNT(mountain_smithy_sceneCollisionHeader_0008DCPolygons), mountain_smithy_sceneCollisionHeader_0008DCPolygons,
    mountain_smithy_sceneCollisionHeader_0008DCSurfaceType,
    mountain_smithy_sceneCollisionHeader_0008DCCamDataList,
    0, NULL
};

u8 mountain_smithy_scene_possiblePadding_000908[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 mountain_smithy_sceneTex_000910[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_000910.rgba16.inc.c"
};

u64 mountain_smithy_sceneTex_001110[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001110.rgba16.inc.c"
};

u64 mountain_smithy_sceneTex_001910[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001910.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_001A10[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001A10.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_001B10[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001B10.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_001C10[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001C10.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_001D10[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_001D10.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_002510[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_002510.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_002550[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_002550.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_002590[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_002590.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_0025D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0025D0.rgba32.inc.c"
};

u64 mountain_smithy_sceneTex_0035D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0035D0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_0039D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0039D0.ia16.inc.c"
};

u64 mountain_smithy_sceneTex_0041D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0041D0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_0042D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0042D0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_004AD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_004AD0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_004CD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_004CD0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_004ED0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_004ED0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_0050D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0050D0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_0052D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_0052D0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_005AD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_005AD0.ci8.inc.c"
};

u64 mountain_smithy_sceneTex_005BD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_005BD0.rgba16.inc.c"
};

u64 mountain_smithy_sceneTex_005DD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_005DD0.i8.inc.c"
};

u64 mountain_smithy_sceneTex_006DD0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTex_006DD0.ci8.inc.c"
};

u64 mountain_smithy_sceneTLUT_0075D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTLUT_0075D0.rgba16.inc.c"
};

u64 mountain_smithy_sceneTLUT_0077D0[] = {
#include "assets/scenes/indoors/mountain_smithy/mountain_smithy_sceneTLUT_0077D0.rgba16.inc.c"
};

