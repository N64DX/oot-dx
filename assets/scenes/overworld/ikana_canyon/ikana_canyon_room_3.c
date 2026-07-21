#include "ikana_canyon_scene.h"
#include "ikana_canyon_room_3.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd ikana_canyon_room_3[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(ikana_canyon_room_3AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(15),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_CURSED, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&ikana_canyon_room_3RoomShapeCullable_0000A0),
    SCENE_CMD_OBJECT_LIST(14, ikana_canyon_room_3ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(1, ikana_canyon_room_3ActorEntry_000084),
    SCENE_CMD_END(),
};

SceneCmd* ikana_canyon_room_3AlternateHeaders[] = {
    NULL,
    NULL,
    ikana_canyon_room_3Set_cleansed,
};

s16 ikana_canyon_room_3ObjectList_000058[] = {
    OBJECT_OKUTA,
    OBJECT_ICEFLOE,
    OBJECT_SEK,
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

RoomShapeCullable ikana_canyon_room_3RoomShapeCullable_0000A0 = { 
    2, 5,
    ikana_canyon_room_3RoomShapeCullableEntry_0000AC,
    ikana_canyon_room_3RoomShapeCullableEntry_0000AC + ARRAY_COUNTU(ikana_canyon_room_3RoomShapeCullableEntry_0000AC)
};

ActorEntry ikana_canyon_room_3ActorEntry_000084[] = {
    { ACTOR_BG_WEATHER, { -1750, 109, 1600 }, { 0, 0, 0 }, 0x0000 },
};

RoomShapeCullableEntry ikana_canyon_room_3RoomShapeCullableEntry_0000AC[5] = {
    { {  -1575,    198,   1585 },    392, ikana_canyon_room_3DL_000638, NULL },
    { {  -1682,    399,   1689 },    280, ikana_canyon_room_3DL_001438, NULL },
    { {  -1788,    399,   1585 },    338, ikana_canyon_room_3DL_000C38, NULL },
    { {  -1740,   1465,   1679 },    190, ikana_canyon_room_3DL_001020, NULL },
    { {  -1740,    982,   1679 },    324, ikana_canyon_room_3DL_0012A8, NULL },
};

SceneCmd ikana_canyon_room_3Set_cleansed[] = {
    SCENE_CMD_ECHO_SETTINGS(15),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&ikana_canyon_room_3RoomShapeCullable_0000A0),
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(ikana_canyon_room_3ObjectList_000058), ikana_canyon_room_3ObjectList_000058),
    SCENE_CMD_END(),
};

s32 ikana_canyon_room_3_terminatorMaybe_0000FC = { 0x01000000 };

Vtx ikana_canyon_room_3Vtx_0002A8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Vtx_0002A8.vtx.inc"
};

Vtx ikana_canyon_room_3Vtx_0008A8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Vtx_0008A8.vtx.inc"
};

Vtx ikana_canyon_room_3Vtx_000DA0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Vtx_000DA0.vtx.inc"
};

Vtx ikana_canyon_room_3Vtx_001128[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Vtx_001128.vtx.inc"
};

Vtx ikana_canyon_room_3Vtx_001338[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Vtx_001338.vtx.inc"
};

u64 ikana_canyon_room_3Tex_001540[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Tex_001540.ci8.inc.c"
};

u64 ikana_canyon_room_3Tex_002540[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_3Tex_002540.ci8.inc.c"
};

Gfx ikana_canyon_room_3DL_000638[] = {
    gsSPVertex(&ikana_canyon_room_3Vtx_0002A8[49], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_3Tex_001540, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 254, 254, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_3Vtx_0002A8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_3Tex_001540, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&ikana_canyon_room_3Vtx_0002A8[4], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 6, 0),
    gsSP2Triangles(13, 15, 10, 0, 13, 10, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_001368, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_3Vtx_0002A8[26], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 0, 12, 0),
    gsSP2Triangles(0, 3, 12, 0, 3, 13, 12, 0),
    gsSP2Triangles(13, 7, 12, 0, 7, 10, 12, 0),
    gsDPSetPrimColor(0, 0x80, 254, 254, 255, 255),
    gsSPVertex(&ikana_canyon_room_3Vtx_0002A8[40], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 4, 6, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 7, 0, 3, 2, 4, 0),
    gsSP1Triangle(3, 4, 8, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_3DL_000C38[] = {
    gsSPVertex(&ikana_canyon_room_3Vtx_0008A8[49], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01BC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01BC40, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_3Vtx_0008A8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 9, 0, 16, 9, 8, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 31, 30, 29, 0),
    gsSPVertex(&ikana_canyon_room_3Vtx_0008A8[32], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 3, 4, 0, 0, 5, 3, 0),
    gsSP2Triangles(0, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 11, 12, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP1Triangle(16, 13, 15, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_3DL_001020[] = {
    gsSPVertex(&ikana_canyon_room_3Vtx_000DA0[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01DC40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_3Vtx_000DA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_3DL_0012A8[] = {
    gsSPVertex(&ikana_canyon_room_3Vtx_001128[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_3Vtx_001128, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 2, 1, 0, 8, 1, 9, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 7, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 8, 9, 0, 14, 9, 15, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_3DL_001438[] = {
    gsSPVertex(&ikana_canyon_room_3Vtx_001338[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_3Tex_002540, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_3Vtx_001338, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};
