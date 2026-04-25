#include "woodfall_temple_scene.h"
#include "woodfall_temple_room_11.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd woodfall_temple_room_11[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_11RoomShapeCullable_000090),
    SCENE_CMD_OBJECT_LIST(2, woodfall_temple_room_11ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(3, woodfall_temple_room_11ActorEntry_000048),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_11ObjectList_000040[] = {
    OBJECT_TOKI_OBJECTS,
    OBJECT_DKJAIL_OBJ,
};

ActorEntry woodfall_temple_room_11ActorEntry_000048[] = {
    { ACTOR_BG_TOKI_SWD,   { -2000,   8, -100 }, { 0, 0, 0 }, 0x000E }, // Sets switch: 0x0E
    { ACTOR_ELF_MSG2,      { -2000,   8, -100 }, { 5, 0, 0 }, 0x0E0F }, // Sets switch: 0x0E
    { ACTOR_BG_DKJAIL_IVY, { -2000,   0,   90 }, { 0, 0, 0 }, 0x0008 }, // Sets switch: 0x08
};

RoomShapeCullable woodfall_temple_room_11RoomShapeCullable_000090 = { 
    2, 12,
    woodfall_temple_room_11RoomShapeCullableEntry_00009C,
    woodfall_temple_room_11RoomShapeCullableEntry_00009C + ARRAY_COUNTU(woodfall_temple_room_11RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry woodfall_temple_room_11RoomShapeCullableEntry_00009C[12] = {
    { {  -2181,     49,    115 },    104, woodfall_temple_room_11DL_0029D8, NULL },
    { {  -2000,     90,     82 },    152, woodfall_temple_room_11DL_002F00, NULL },
    { {  -2000,     65,   -105 },    126, woodfall_temple_room_11DL_0033A8, NULL },
    { {  -2000,    150,   -105 },    264, woodfall_temple_room_11DL_000720, NULL },
    { {  -2000,    150,     37 },    292, woodfall_temple_room_11DL_000E18, NULL },
    { {  -2000,    150,    555 },    504, woodfall_temple_room_11DL_001358, NULL },
    { {  -2000,    150,    150 },    336, woodfall_temple_room_11DL_001950, NULL },
    { {  -2000,    296,   -105 },    218, woodfall_temple_room_11DL_001BD8, NULL },
    { {  -2000,    150,    195 },    362, woodfall_temple_room_11DL_001E58, NULL },
    { {  -2000,    300,    210 },    320, woodfall_temple_room_11DL_002100, NULL },
    { {  -2000,     -4,    -98 },    224, woodfall_temple_room_11DL_0023C0, NULL },
    { {  -2165,      2,    172 },    116, woodfall_temple_room_11DL_002678, NULL },
};

s32 woodfall_temple_room_11_terminatorMaybe_00015C = { 0x01000000 };

Vtx woodfall_temple_room_11Vtx_000160[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_000160.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_000938[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_000938.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_001008[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_001008.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_001540[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_001540.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_001AC8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_001AC8.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_001CC8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_001CC8.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_001F60[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_001F60.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_002210[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_002210.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_002548[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_002548.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_002768[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_002768.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_002B20[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_002B20.vtx.inc"
};

Vtx woodfall_temple_room_11Vtx_003028[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Vtx_003028.vtx.inc"
};

u64 woodfall_temple_room_11Tex_003578[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_003578.ia8.inc.c"
};

u64 woodfall_temple_room_11Tex_003D78[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_003D78.ia8.inc.c"
};

u64 woodfall_temple_room_11Tex_004578[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_004578.rgba16.inc.c"
};

u64 woodfall_temple_room_11Tex_004D78[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_004D78.rgba16.inc.c"
};

u64 woodfall_temple_room_11Tex_005578[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_005578.ia16.inc.c"
};

u64 woodfall_temple_room_11Tex_005D78[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_005D78.ci8.inc.c"
};

u64 woodfall_temple_room_11Tex_006578[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_11Tex_006578.ci8.inc.c"
};

Gfx woodfall_temple_room_11DL_000720[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_000160[84], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_005D78, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_000160, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 3, 2, 0),
    gsSP2Triangles(6, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 7, 13, 14, 0),
    gsSP2Triangles(7, 15, 13, 0, 13, 16, 14, 0),
    gsSP2Triangles(13, 12, 16, 0, 12, 11, 17, 0),
    gsSP2Triangles(11, 18, 17, 0, 16, 12, 17, 0),
    gsSP2Triangles(17, 19, 16, 0, 5, 4, 20, 0),
    gsSP2Triangles(5, 20, 21, 0, 21, 20, 22, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 19, 17, 0),
    gsSP2Triangles(17, 25, 24, 0, 17, 26, 25, 0),
    gsSP2Triangles(17, 18, 26, 0, 27, 24, 28, 0),
    gsSP2Triangles(24, 29, 28, 0, 27, 28, 30, 0),
    gsSP2Triangles(28, 31, 30, 0, 28, 29, 26, 0),
    gsSP1Triangle(28, 26, 31, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_000160[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 6, 3, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(0, 3, 6, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 8, 18, 6, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(13, 11, 21, 0, 13, 21, 24, 0),
    gsSP2Triangles(25, 26, 22, 0, 25, 22, 21, 0),
    gsSP2Triangles(10, 25, 21, 0, 10, 21, 11, 0),
    gsSP2Triangles(27, 28, 26, 0, 27, 26, 25, 0),
    gsSP2Triangles(29, 27, 25, 0, 29, 25, 10, 0),
    gsSP2Triangles(30, 31, 28, 0, 30, 28, 27, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_000160[64], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 1, 0),
    gsSP2Triangles(12, 9, 1, 0, 12, 1, 0, 0),
    gsSP2Triangles(5, 10, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 12, 8, 0, 9, 8, 6, 0),
    gsSP2Triangles(13, 14, 15, 0, 6, 7, 4, 0),
    gsSP2Triangles(16, 17, 7, 0, 16, 18, 17, 0),
    gsSP1Triangle(18, 19, 17, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_000E18[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_000938[70], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_000938, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 5, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 4, 0, 3, 14, 4, 0),
    gsSP2Triangles(16, 17, 18, 0, 2, 19, 20, 0),
    gsSP2Triangles(1, 9, 19, 0, 21, 20, 22, 0),
    gsSP2Triangles(20, 19, 22, 0, 19, 9, 22, 0),
    gsSP2Triangles(9, 8, 22, 0, 23, 24, 0, 0),
    gsSP2Triangles(24, 25, 0, 0, 18, 17, 26, 0),
    gsSP2Triangles(17, 27, 26, 0, 13, 12, 26, 0),
    gsSP2Triangles(12, 18, 26, 0, 5, 28, 29, 0),
    gsSP1Triangle(25, 24, 30, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_000938[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 4, 11, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 14, 1, 15, 0),
    gsSP2Triangles(16, 14, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(15, 18, 17, 0, 18, 15, 1, 0),
    gsSP2Triangles(18, 1, 0, 0, 19, 16, 20, 0),
    gsSP2Triangles(1, 19, 20, 0, 21, 0, 22, 0),
    gsSP2Triangles(17, 22, 23, 0, 17, 21, 22, 0),
    gsSP2Triangles(0, 4, 24, 0, 4, 25, 24, 0),
    gsSP2Triangles(25, 26, 24, 0, 26, 23, 24, 0),
    gsSP2Triangles(23, 22, 24, 0, 4, 12, 27, 0),
    gsSP2Triangles(12, 28, 27, 0, 27, 28, 26, 0),
    gsSP2Triangles(28, 23, 26, 0, 24, 22, 0, 0),
    gsSP2Triangles(27, 26, 25, 0, 27, 25, 4, 0),
    gsSP2Triangles(29, 13, 30, 0, 28, 30, 7, 0),
    gsSP2Triangles(28, 29, 30, 0, 13, 5, 30, 0),
    gsSP2Triangles(5, 7, 30, 0, 12, 13, 29, 0),
    gsSP1Triangle(12, 29, 28, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_000938[62], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_001358[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_001008[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_001008, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 0, 9, 0),
    gsSP2Triangles(6, 9, 8, 0, 0, 2, 10, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 11, 9, 0),
    gsSP2Triangles(1, 12, 2, 0, 6, 13, 14, 0),
    gsSP1Triangle(6, 14, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_11Vtx_001008[15], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 3, 2, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 14, 13, 5, 0),
    gsSP2Triangles(14, 5, 4, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 19, 10, 0),
    gsSP2Triangles(17, 10, 18, 0, 19, 20, 3, 0),
    gsSP2Triangles(19, 3, 10, 0, 15, 18, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 18, 27, 21, 0),
    gsSP2Triangles(27, 10, 2, 0, 21, 28, 29, 0),
    gsSP1Triangle(21, 29, 15, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_001950[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_001540[57], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_001540, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 0, 2, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 15, 18, 0, 15, 19, 20, 0),
    gsSP2Triangles(15, 20, 21, 0, 16, 15, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 22, 26, 27, 0),
    gsSP2Triangles(23, 22, 27, 0, 23, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_001540[32], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(6, 1, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 8, 7, 0),
    gsSP2Triangles(12, 13, 7, 0, 13, 11, 7, 0),
    gsSP2Triangles(12, 7, 10, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 21, 23, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_001BD8[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_001AC8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_005D78, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_001AC8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 4, 0, 3, 6, 2, 0),
    gsSP2Triangles(6, 0, 2, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 1, 7, 0, 2, 8, 5, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_001E58[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_001CC8[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_001CC8, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 12, 10, 0, 14, 10, 15, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_002100[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_001F60[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_001F60, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 2, 0, 7, 8, 5, 0),
    gsSP2Triangles(7, 5, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 5, 0, 11, 10, 9, 0),
    gsSP2Triangles(5, 12, 13, 0, 5, 13, 14, 0),
    gsSP2Triangles(5, 14, 6, 0, 15, 16, 17, 0),
    gsSP1Triangle(15, 17, 8, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_0023C0[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_002210[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_002210, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_006578, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_11Vtx_002210[4], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 6, 7, 0, 3, 8, 0, 0),
    gsSP2Triangles(0, 9, 10, 0, 10, 11, 0, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 12, 4, 0),
    gsSP2Triangles(8, 13, 0, 0, 13, 14, 0, 0),
    gsSP2Triangles(0, 14, 9, 0, 7, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_002678[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_002548[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_002548, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_0029D8[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_002768[31], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 127),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_003578, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_room_11Tex_004D78, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_002768, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 0, 6, 0),
    gsSP2Triangles(0, 7, 8, 0, 7, 3, 8, 0),
    gsSP2Triangles(4, 6, 8, 0, 6, 0, 8, 0),
    gsSP2Triangles(9, 10, 3, 0, 10, 8, 3, 0),
    gsSP2Triangles(10, 4, 8, 0, 10, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 15, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 12, 0),
    gsSP2Triangles(22, 12, 14, 0, 15, 22, 14, 0),
    gsSP2Triangles(22, 19, 20, 0, 22, 20, 12, 0),
    gsSP2Triangles(22, 15, 23, 0, 22, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(26, 27, 29, 0, 24, 26, 30, 0),
    gsSP2Triangles(29, 28, 30, 0, 26, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_002F00[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_002B20[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 0, 31),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_005578, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_002B20, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 16, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 22, 21, 23, 0),
    gsSP2Triangles(21, 24, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 28, 6, 0),
    gsSP2Triangles(28, 4, 6, 0, 29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_002B20[32], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 2, 11, 12, 0),
    gsSP2Triangles(2, 13, 11, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 19, 20, 0),
    gsSP1Triangle(18, 21, 19, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_11DL_0033A8[] = {
    gsSPVertex(&woodfall_temple_room_11Vtx_003028[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 167),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_11Tex_003D78, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_room_11Tex_004578, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, 1),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_11Vtx_003028, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(1, 0, 6, 0, 1, 6, 7, 0),
    gsSP2Triangles(8, 4, 9, 0, 9, 10, 8, 0),
    gsSP2Triangles(7, 6, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
    gsSP2Triangles(13, 15, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 14, 20, 0, 14, 16, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(12, 11, 25, 0, 12, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 26, 25, 30, 0),
    gsSP1Triangle(26, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_11Vtx_003028[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 3, 0),
    gsSP2Triangles(2, 10, 9, 0, 9, 11, 3, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 14, 13, 0),
    gsSP1Triangle(14, 15, 13, 0),
    gsSPEndDisplayList(),
};
