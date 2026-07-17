#include "ikana_canyon_scene.h"
#include "ikana_canyon_room_2.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd ikana_canyon_room_2[] = {
    SCENE_CMD_ECHO_SETTINGS(20),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&ikana_canyon_room_2RoomShapeCullable_0000E0),
    SCENE_CMD_OBJECT_LIST(14, ikana_canyon_room_2ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(5, ikana_canyon_room_2ActorEntry_000084),
    SCENE_CMD_END(),
};

s16 ikana_canyon_room_2ObjectList_000058[] = {
    OBJECT_OKUTA,
    OBJECT_ICEFLOE,
    OBJECT_ICE_BLOCK,
    OBJECT_RD,
    OBJECT_HSSTUMP,
    OBJECT_GI_HEART,
    OBJECT_BB,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_SHOPNUTS,
    OBJECT_CROW,
    OBJECT_KUSA,
    OBJECT_BIG_FWALL,
    OBJECT_JSO,
};

ActorEntry ikana_canyon_room_2ActorEntry_000084[] = {
    { ACTOR_DOOR_ANA,       { -2475, -505, 2475 }, { 0, 0xA400, 0x4 }, 0x00B4 },
    { ACTOR_OBJ_MURE,       { -2802, -658, 2752 }, { 0,      0,   0 }, 0x6322 },
    { ACTOR_EN_KANBAN,      { -2980, -505, 3087 }, { 0, 0x6A00,   0 }, 0x005C },
    { ACTOR_EN_RIVER_SOUND, { -2985, -447, 2695 }, { 0,      0,   0 }, 0x0003 },
    { ACTOR_BG_WEATHER,     { -3000, -505, 2700 }, { 0,      0,   0 }, 0x0000 },
};

RoomShapeCullable ikana_canyon_room_2RoomShapeCullable_0000E0 = { 
    2, 8,
    ikana_canyon_room_2RoomShapeCullableEntry_0000EC,
    ikana_canyon_room_2RoomShapeCullableEntry_0000EC + ARRAY_COUNTU(ikana_canyon_room_2RoomShapeCullableEntry_0000EC)
};

RoomShapeCullableEntry ikana_canyon_room_2RoomShapeCullableEntry_0000EC[8] = {
    { {  -2934,    -48,   2725 },    494, NULL, ikana_canyon_room_2DL_0022A8 },
    { {  -2837,   -407,   2759 },    362, NULL, ikana_canyon_room_2DL_002620 },
    { {  -2337,   -681,   2740 },    720, ikana_canyon_room_2DL_001210, NULL },
    { {  -2979,   -513,   2743 },    670, ikana_canyon_room_2DL_000E50, NULL },
    { {  -2613,    200,   2737 },   1198, ikana_canyon_room_2DL_000938, NULL },
    { {  -2066,   -520,   2835 },    426, NULL, ikana_canyon_room_2DL_002A60 },
    { {  -2337,   -520,   2740 },    702, NULL, ikana_canyon_room_2DL_002088 },
    { {  -2337,   -520,   2740 },    702, NULL, ikana_canyon_room_2DL_0028B0 },
};

s32 ikana_canyon_room_2_terminatorMaybe_00016C = { 0x01000000 };

Vtx ikana_canyon_room_2Vtx_000378[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_000378.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_000B90[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_000B90.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_000FF0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_000FF0.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_001F78[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_001F78.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_002178[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_002178.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_002390[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_002390.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_0027A0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_0027A0.vtx.inc"
};

Vtx ikana_canyon_room_2Vtx_0029A0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Vtx_0029A0.vtx.inc"
};

u64 ikana_canyon_room_2Tex_002B30[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Tex_002B30.i4.inc.c"
};

u64 ikana_canyon_room_2Tex_003330[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_2Tex_003330.i4.inc.c"
};

Gfx ikana_canyon_room_2DL_000938[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_000378[84], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 254, 254, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01CC40, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadMultiBlock_4b(ikana_canyon_sceneTex_01CC40, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_000378, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_000378[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(22, 24, 23, 0, 4, 25, 5, 0),
    gsSP2Triangles(4, 1, 25, 0, 1, 0, 25, 0),
    gsSP2Triangles(26, 7, 6, 0, 26, 6, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_000378[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 10, 17, 0, 10, 9, 17, 0),
    gsSP2Triangles(9, 18, 17, 0, 14, 13, 19, 0),
    gsSP2Triangles(13, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 23, 19, 0),
    gsSP2Triangles(23, 24, 17, 0, 24, 16, 17, 0),
    gsSP2Triangles(25, 26, 12, 0, 27, 0, 2, 0),
    gsSP2Triangles(27, 2, 11, 0, 0, 27, 23, 0),
    gsSP2Triangles(7, 0, 23, 0, 11, 2, 18, 0),
    gsSP2Triangles(2, 4, 18, 0, 11, 18, 9, 0),
    gsSP2Triangles(27, 24, 23, 0, 4, 28, 18, 0),
    gsSP1Triangle(29, 7, 23, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_000378[65], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_000378[79], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_000E50[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_000B90[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_001368, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_000B90, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(3, 14, 15, 0, 13, 0, 3, 0),
    gsSP2Triangles(13, 3, 15, 0, 13, 12, 0, 0),
    gsSP2Triangles(15, 14, 9, 0, 15, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_019B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_2Vtx_000B90[16], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_001210[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_000FF0[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01AC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01B440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_000FF0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 1, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 7, 1, 0, 7, 4, 1, 0),
    gsSP2Triangles(7, 9, 4, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 4, 13, 12, 0),
    gsSP2Triangles(4, 12, 2, 0, 16, 17, 9, 0),
    gsSP2Triangles(16, 9, 6, 0, 18, 19, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 9, 24, 4, 0),
    gsSP2Triangles(9, 25, 24, 0, 25, 23, 24, 0),
    gsSP1Triangle(25, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_002088[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_001F78[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 90),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01D440, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_001F78, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(7, 4, 5, 0, 5, 6, 8, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_0022A8[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_002178[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(ikana_canyon_room_2Tex_002B30, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(ikana_canyon_room_2Tex_002B30, 0x0000, 1, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0B000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_002178, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 8, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_002620[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[33], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 127),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(ikana_canyon_room_2Tex_003330, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(ikana_canyon_room_2Tex_003330, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, G_TX_NOLOD),
    gsSPDisplayList(0x0C000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_002390, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[5], 5, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[10], 3, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[13], 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[21], 3, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[24], 5, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSPVertex(&ikana_canyon_room_2Vtx_002390[29], 4, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_0028B0[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_0027A0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 90),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01D440, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_0027A0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 3, 1, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 6, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_2DL_002A60[] = {
    gsSPVertex(&ikana_canyon_room_2Vtx_0029A0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_2Vtx_0029A0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
