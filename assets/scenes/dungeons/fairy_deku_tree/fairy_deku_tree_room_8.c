#include "fairy_deku_tree_scene.h"
#include "fairy_deku_tree_room_8.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd fairy_deku_tree_room_8Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(16),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&fairy_deku_tree_room_8MeshHeader0x000060),
    SCENE_CMD_OBJECT_LIST(7, fairy_deku_tree_room_8ObjectList0x000038),
    SCENE_CMD_ACTOR_LIST(1, fairy_deku_tree_room_8ActorList0x000048),
    SCENE_CMD_END(),
};

s16 fairy_deku_tree_room_8ObjectList0x000038[] = {
    OBJECT_BOX,
    OBJECT_TORCH2,
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_TP,
    OBJECT_DEKUBABA,
};

ActorEntry fairy_deku_tree_room_8ActorList0x000048[] = {
    { ACTOR_EN_BOX, { 2001, 760, -9 }, { 0, 0x4000, 0 }, 0x0806 },
};

RoomShapeCullable fairy_deku_tree_room_8MeshHeader0x000060 = {
    2,
    1,
    fairy_deku_tree_room_8MeshDListEntry0x00006C,
    fairy_deku_tree_room_8MeshDListEntry0x00006C + ARRAY_COUNTU(fairy_deku_tree_room_8MeshDListEntry0x00006C)
};

RoomShapeCullableEntry fairy_deku_tree_room_8MeshDListEntry0x00006C[1] = {
    { { 1609, 980, 0 }, 575, fairy_deku_tree_room_8Dlist0x0006E0, NULL },
};

static s32 terminatorMaybe = { 0x01000000 };

Vtx fairy_deku_tree_room_8Vtx_000080[] = {
    VTX(1789, 760, 230, 3840, 1024, 0, 0, 0, 255),
    VTX(1939, 980, 230, 1920, -1792, 255, 255, 255, 255),
    VTX(2089, 760, 230, 0, 1024, 0, 0, 0, 255),
    VTX(1789, 1200, 230, 3840, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, 230, 0, -4608, 0, 0, 0, 255),
    VTX(2089, 760, 230, 5120, 1024, 0, 0, 0, 255),
    VTX(2089, 980, 0, 2176, -1792, 255, 255, 255, 255),
    VTX(2089, 760, -230, -768, 1024, 0, 0, 0, 255),
    VTX(2089, 1200, 230, 5120, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, -230, -768, -4608, 0, 0, 0, 255),
    VTX(2089, 980, 0, 2176, -1792, 255, 255, 255, 255),
    VTX(2089, 760, -230, 0, 1024, 0, 0, 0, 255),
    VTX(1939, 980, -230, 1920, -1792, 255, 255, 255, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1789, 1200, -230, 3840, -4608, 0, 0, 0, 255),
    VTX(2089, 1200, -230, 0, -4608, 0, 0, 0, 255),
    VTX(1939, 980, -230, 1920, -1792, 255, 255, 255, 255),
    VTX(1789, 1060, 160, -1152, -2816, 255, 255, 255, 255),
    VTX(1789, 1200, 230, -2048, -4608, 0, 0, 0, 255),
    VTX(1789, 760, 230, -2048, 1024, 0, 0, 0, 255),
    VTX(1789, 920, 90, -256, -1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 2048, -1024, 0, 0, 0, 255),
    VTX(1789, 1060, -160, 2944, -2816, 255, 255, 255, 255),
    VTX(1789, 1200, -230, 3840, -4608, 0, 0, 0, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1149, 920, 90, 8192, -1024, 0, 0, 0, 255),
    VTX(1469, 840, 90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 760, 90, 8192, 1024, 0, 0, 0, 255),
    VTX(1789, 920, 90, 0, -1024, 0, 0, 0, 255),
    VTX(1789, 760, 90, 0, 1024, 0, 0, 0, 255),
    VTX(1469, 840, 90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 760, -90, 8192, 1024, 0, 0, 0, 255),
    VTX(1469, 840, -90, 4096, 0, 255, 255, 255, 255),
    VTX(1149, 920, -90, 8192, -1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 0, -1024, 0, 0, 0, 255),
    VTX(1789, 760, -90, 0, 1024, 0, 0, 0, 255),
    VTX(1469, 840, -90, 4096, 0, 255, 255, 255, 255),
    VTX(1789, 760, -230, 3840, 1024, 0, 0, 0, 255),
    VTX(1789, 1060, -160, 2944, -2816, 255, 255, 255, 255),
    VTX(1789, 760, -90, 2048, 1024, 0, 0, 0, 255),
    VTX(1789, 920, -90, 2048, -1024, 0, 0, 0, 255),
    VTX(1789, 760, 230, -2048, 1024, 0, 0, 0, 255),
    VTX(1789, 760, 90, -256, 1024, 0, 0, 0, 255),
    VTX(1789, 1060, 160, -1152, -2816, 255, 255, 255, 255),
    VTX(1789, 920, 90, -256, -1024, 0, 0, 0, 255),
};

Vtx fairy_deku_tree_room_8Vtx_000350[] = {
    VTX(1149, 920, -90, 1024, 2048, 0, 0, 0, 255),
    VTX(1789, 920, -90, 1024, 0, 0, 0, 0, 255),
    VTX(1469, 920, 0, 640, 1024, 255, 255, 255, 255),
    VTX(1789, 920, 90, 256, 0, 0, 0, 0, 255),
    VTX(1469, 920, 0, 640, 1024, 255, 255, 255, 255),
    VTX(1149, 920, 90, 256, 2048, 0, 0, 0, 255),
    VTX(1789, 1200, -230, 0, 128, 0, 0, 0, 255),
    VTX(2089, 1200, -230, 0, 2048, 0, 0, 0, 255),
    VTX(1939, 1200, 0, 981, 1088, 255, 255, 255, 255),
    VTX(2089, 1200, 230, 1963, 2048, 0, 0, 0, 255),
    VTX(1789, 1200, 230, 1963, 128, 0, 0, 0, 255),
    VTX(1789, 760, 230, 1963, 128, 0, 0, 0, 255),
    VTX(2089, 760, 230, 1963, 2048, 0, 0, 0, 255),
    VTX(1939, 760, 0, 981, 1088, 255, 255, 255, 255),
    VTX(1149, 760, 90, 256, 2048, 0, 0, 0, 255),
    VTX(1789, 760, 90, 256, 0, 0, 0, 0, 255),
    VTX(1789, 760, 0, 640, 0, 255, 255, 255, 255),
    VTX(1149, 760, -90, 1024, 2048, 0, 0, 0, 255),
    VTX(1789, 760, -90, 1024, 0, 0, 0, 0, 255),
    VTX(1789, 760, 90, 1365, 128, 0, 0, 0, 255),
    VTX(1789, 760, -230, 0, 128, 0, 0, 0, 255),
    VTX(1789, 760, -90, 597, 128, 0, 0, 0, 255),
    VTX(1789, 760, 0, 981, 128, 255, 255, 255, 255),
    VTX(2089, 760, -230, 0, 2048, 0, 0, 0, 255),
    VTX(1939, 760, 0, 981, 1088, 255, 255, 255, 255),
};

Vtx fairy_deku_tree_room_8Vtx_0004E0[] = {
    VTX(1149, 860, 30, -1229, 614, 255, 255, 255, 255),
    VTX(1149, 860, -30, -614, 614, 255, 255, 255, 255),
    VTX(1149, 920, -90, 0, 0, 0, 0, 0, 255),
    VTX(1149, 920, 90, -1843, 0, 0, 0, 0, 255),
    VTX(1149, 760, -30, -614, 1638, 0, 0, 0, 255),
    VTX(1149, 760, -90, 0, 1638, 0, 0, 0, 255),
    VTX(1149, 760, 90, -1843, 1638, 0, 0, 0, 255),
    VTX(1149, 760, 30, -1229, 1638, 0, 0, 0, 255),
};

Vtx fairy_deku_tree_room_8Vtx_000560[] = {
    VTX(1129, 860, -30, 256, 1792, 255, 255, 255, 255),
    VTX(1149, 860, -30, 256, 1536, 255, 255, 255, 255),
    VTX(1149, 860, 30, 1024, 1536, 255, 255, 255, 255),
    VTX(1129, 860, 30, 1024, 1792, 255, 255, 255, 255),
    VTX(1129, 860, 30, 1280, 1792, 255, 255, 255, 255),
    VTX(1149, 860, 30, 1280, 1536, 255, 255, 255, 255),
    VTX(1149, 760, 30, 0, 1536, 0, 0, 0, 255),
    VTX(1129, 760, 30, 0, 1792, 0, 0, 0, 255),
    VTX(1129, 760, 30, 1024, 1792, 0, 0, 0, 255),
    VTX(1149, 760, 30, 1024, 1536, 0, 0, 0, 255),
    VTX(1149, 760, -30, 256, 1536, 0, 0, 0, 255),
    VTX(1129, 760, -30, 256, 1792, 0, 0, 0, 255),
    VTX(1129, 760, -30, 0, 1792, 0, 0, 0, 255),
    VTX(1149, 760, -30, 0, 1536, 0, 0, 0, 255),
    VTX(1149, 860, -30, 1280, 1536, 255, 255, 255, 255),
    VTX(1129, 860, -30, 1280, 1792, 255, 255, 255, 255),
};

Vtx fairy_deku_tree_room_8Vtx_000660[] = {
    VTX(1129, 760, -230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 760, -230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 1200, -230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 1200, -230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 760, 230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 760, 230, 0, 0, 0, 0, 0, 0),
    VTX(1129, 1200, 230, 0, 0, 0, 0, 0, 0),
    VTX(2089, 1200, 230, 0, 0, 0, 0, 0, 0),
};

Gfx fairy_deku_tree_room_8Dlist0x0006E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_000660[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_000630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_000080[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 7, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(11, 15, 16, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 17, 0, 22, 23, 18, 0),
    gsSP2Triangles(22, 18, 17, 0, 24, 23, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 27, 30, 0),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_000080[31], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_011B60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_000350[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(11, 13, 19, 0, 13, 20, 21, 0),
    gsSP2Triangles(13, 22, 19, 0, 13, 21, 22, 0),
    gsSP2Triangles(12, 23, 24, 0, 23, 20, 24, 0),
    gsSP2Triangles(6, 8, 10, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_004BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_0004E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(0, 3, 6, 0, 0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_8Vtx_000560[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};
