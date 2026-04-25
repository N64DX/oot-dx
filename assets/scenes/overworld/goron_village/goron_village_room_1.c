#include "goron_village_scene.h"
#include "goron_village_room_1.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd goron_village_room_1[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&goron_village_room_1RoomShapeCullable_0000A0),
    SCENE_CMD_OBJECT_LIST(14, goron_village_room_1ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(6, goron_village_room_1ActorEntry_00005C),
    SCENE_CMD_END(),
};

s16 goron_village_room_1ObjectList_00004C[] = {
    OBJECT_HORSE,
    OBJECT_SPOT00_OBJECTS,
    OBJECT_SPOT18_OBJ,
    OBJECT_ICE_OBJECTS,
    OBJECT_D_HSBLOCK,
    OBJECT_GM,
    OBJECT_OF1D_MAP,
    OBJECT_SHOPNUTS,
    OBJECT_KANBAN,
    OBJECT_GI_HEART,
    OBJECT_KIBAKO2,
    OBJECT_KA,
    OBJECT_MAMENOKI,
    OBJECT_FR,
};

ActorEntry goron_village_room_1ActorEntry_00005C[] = {
    { ACTOR_EN_GM,          { -1145, -500, -3689 }, { 0,      0,  0 }, 0x0108 }, // Unlocks on switch: 08
    { ACTOR_EN_KAKASI2,     { -1194, -140, -2365 }, { 0,      0, 14 }, 0x053E }, // Switch: 3E
    { ACTOR_OBJ_KIBAKO3,    { -1184, -500, -3051 }, { 0, 0x4000,  0 }, 0x0231 }, // Yellow: 3 (Spring Lake)
    { ACTOR_OBJ_HSBLOCK,    { -1070, -200, -2340 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_OBJ_HSBLOCK,    { -1070, -320, -2580 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_OBJ_HSBLOCK,    { -1070, -440, -2820 }, { 0,      0,  0 }, 0x0000 },
};

RoomShapeCullable goron_village_room_1RoomShapeCullable_0000A0 = { 
    2, 4,
    goron_village_room_1RoomShapeCullableEntry_0000AC,
    goron_village_room_1RoomShapeCullableEntry_0000AC +
    ARRAY_COUNTU(goron_village_room_1RoomShapeCullableEntry_0000AC)
};

RoomShapeCullableEntry goron_village_room_1RoomShapeCullableEntry_0000AC[4] = {
    { {  -1139,   -320,  -3090 },    914, goron_village_room_1DL_0019C8, NULL },
    { {  -1140,   -320,  -2700 },    364, goron_village_room_1DL_001D08, NULL },
    { {  -1139,   -240,  -3090 },    934, goron_village_room_1DL_0009B8, NULL },
    { {   -973,   -370,  -3581 },    166, goron_village_room_1DL_001408, NULL },
};

s32 goron_village_room_1_terminatorMaybe_0000EC = { 0x01000000 };

Vtx goron_village_room_1Vtx_000138[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Vtx_000138.vtx.inc"
};

Vtx goron_village_room_1Vtx_000BE8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Vtx_000BE8.vtx.inc"
};

Vtx goron_village_room_1Vtx_0016F8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Vtx_0016F8.vtx.inc"
};

Vtx goron_village_room_1Vtx_001B08[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Vtx_001B08.vtx.inc"
};

u64 goron_village_room_1Tex_001EA0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Tex_001EA0.ci8.inc.c"
};

u64 goron_village_room_1Tex_0022A0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_1Tex_0022A0.ci8.inc.c"
};

Gfx goron_village_room_1DL_0009B8[] = {
    gsSPVertex(&goron_village_room_1Vtx_000138[128], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(goron_village_sceneTex_001000, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_1Vtx_000138, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(6, 12, 13, 0, 6, 13, 7, 0),
    gsSP2Triangles(7, 13, 5, 0, 13, 14, 3, 0),
    gsSP2Triangles(5, 13, 3, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_1Vtx_000138[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 4, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 17, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(19, 21, 23, 0, 20, 19, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&goron_village_room_1Vtx_000138[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 1, 5, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 5, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(13, 15, 20, 0, 17, 21, 18, 0),
    gsSP2Triangles(17, 22, 21, 0, 23, 9, 11, 0),
    gsSP2Triangles(7, 24, 25, 0, 7, 6, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&goron_village_room_1Vtx_000138[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 16, 17, 0, 18, 19, 16, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 16, 0),
    gsSP2Triangles(16, 23, 21, 0, 24, 25, 19, 0),
    gsSP2Triangles(25, 16, 19, 0, 23, 16, 25, 0),
    gsSP2Triangles(19, 20, 24, 0, 16, 22, 14, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&goron_village_room_1Vtx_000138[125], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_1DL_001408[] = {
    gsSPVertex(&goron_village_room_1Vtx_000BE8[122], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_1Tex_0022A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_1Vtx_000BE8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(3, 7, 8, 0, 0, 3, 8, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&goron_village_room_1Vtx_000BE8[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 6, 5, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005D00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_1Vtx_000BE8[52], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_1Vtx_000BE8[84], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_006100, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_1Vtx_000BE8[104], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 1, 4, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(3, 11, 8, 0, 3, 2, 11, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 2, 0),
    gsSP2Triangles(5, 12, 1, 0, 14, 12, 5, 0),
    gsSP2Triangles(7, 14, 5, 0, 15, 16, 9, 0),
    gsSP2Triangles(11, 15, 9, 0, 11, 17, 15, 0),
    gsSP2Triangles(2, 13, 17, 0, 2, 17, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_1DL_0019C8[] = {
    gsSPVertex(&goron_village_room_1Vtx_0016F8[37], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_1Tex_001EA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_1Vtx_0016F8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 3, 17, 0),
    gsSP2Triangles(19, 2, 1, 0, 19, 20, 2, 0),
    gsSP2Triangles(21, 20, 19, 0, 21, 19, 22, 0),
    gsSP2Triangles(23, 19, 1, 0, 24, 23, 1, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 24, 1, 0),
    gsSP2Triangles(26, 24, 27, 0, 28, 25, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 24, 30, 23, 0),
    gsSP1Triangle(19, 23, 31, 0),
    gsSPVertex(&goron_village_room_1Vtx_0016F8[32], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_1DL_001D08[] = {
    gsSPVertex(&goron_village_room_1Vtx_001B08[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005100, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_1Vtx_001B08, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005900, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_1Vtx_001B08[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};
