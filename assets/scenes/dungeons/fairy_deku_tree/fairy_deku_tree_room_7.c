#include "fairy_deku_tree_scene.h"
#include "fairy_deku_tree_room_7.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd fairy_deku_tree_room_7Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(16),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&fairy_deku_tree_room_7MeshHeader0x000060),
    SCENE_CMD_OBJECT_LIST(7, fairy_deku_tree_room_7ObjectList0x000038),
    SCENE_CMD_ACTOR_LIST(1, fairy_deku_tree_room_7ActorList0x000048),
    SCENE_CMD_END(),
};

s16 fairy_deku_tree_room_7ObjectList0x000038[] = {
    OBJECT_BOX,
    OBJECT_TORCH2,
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_TP,
    OBJECT_DEKUBABA,
};

ActorEntry fairy_deku_tree_room_7ActorList0x000048[] = {
    { ACTOR_EN_BOX, -953, 520, 950, 0, -8192, 0, 0x0065 },
};

RoomShapeCullable fairy_deku_tree_room_7MeshHeader0x000060 = {
    2,
    1,
    fairy_deku_tree_room_7MeshDListEntry0x00006C,
    fairy_deku_tree_room_7MeshDListEntry0x00006C + ARRAY_COUNTU(fairy_deku_tree_room_7MeshDListEntry0x00006C)
};

RoomShapeCullableEntry fairy_deku_tree_room_7MeshDListEntry0x00006C[1] = {
    { { -919, 680, 917 }, 318, fairy_deku_tree_room_7Dlist0x000410, NULL },
};

static s32 terminatorMaybe = { 0x01000000 };

Vtx fairy_deku_tree_room_7Vtx_000080[] = {
    VTX(-975, 520, 649, 0, 1024, 0, 0, 0, 255),
    VTX(-1081, 680, 755, 1920, -1024, 238, 238, 238, 255),
    VTX(-1188, 520, 861, 3840, 1024, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 3840, -3072, 0, 0, 0, 255),
    VTX(-975, 840, 649, 0, -3072, 0, 0, 0, 255),
    VTX(-1188, 520, 861, 5888, 1024, 0, 0, 0, 255),
    VTX(-1025, 680, 1024, 2944, -1024, 238, 238, 238, 255),
    VTX(-862, 520, 1186, 0, 1024, 0, 0, 0, 255),
    VTX(-862, 840, 1186, 0, -3072, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 5888, -3072, 0, 0, 0, 255),
    VTX(-862, 520, 1186, 3840, 1024, 0, 0, 0, 255),
    VTX(-756, 680, 1080, 1920, -1024, 238, 238, 238, 255),
    VTX(-650, 520, 974, 0, 1024, 0, 0, 0, 255),
    VTX(-862, 840, 1186, 3840, -3072, 0, 0, 0, 255),
    VTX(-650, 840, 974, 0, -3072, 0, 0, 0, 255),
};

Vtx fairy_deku_tree_room_7Vtx_000170[] = {
    VTX(-862, 840, 1186, 0, 2048, 0, 0, 0, 255),
    VTX(-919, 840, 918, 1178, 1280, 255, 255, 255, 255),
    VTX(-650, 840, 974, 0, 512, 0, 0, 0, 255),
    VTX(-975, 840, 649, 2355, 512, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 2355, 2048, 0, 0, 0, 255),
    VTX(-650, 520, 974, 0, 512, 0, 0, 0, 255),
    VTX(-919, 520, 918, 1178, 1280, 255, 255, 255, 255),
    VTX(-862, 520, 1186, 0, 2048, 0, 0, 0, 255),
    VTX(-975, 520, 649, 2355, 512, 0, 0, 0, 255),
    VTX(-1188, 520, 861, 2355, 2048, 0, 0, 0, 255),
};

Vtx fairy_deku_tree_room_7Vtx_000210[] = {
    VTX(-975, 520, 649, 0, 2048, 0, 0, 0, 255),
    VTX(-834, 620, 790, 2048, 1024, 255, 255, 255, 255),
    VTX(-975, 840, 649, 0, -1229, 0, 0, 0, 255),
    VTX(-834, 520, 790, 2048, 2048, 0, 0, 0, 255),
    VTX(-792, 620, 833, 2662, 1024, 255, 255, 255, 255),
    VTX(-650, 840, 974, 4710, -1229, 0, 0, 0, 255),
    VTX(-650, 520, 974, 4710, 2048, 0, 0, 0, 255),
    VTX(-792, 520, 833, 2662, 2048, 0, 0, 0, 255),
};

Vtx fairy_deku_tree_room_7Vtx_000290[] = {
    VTX(-820, 620, 776, 1280, 1792, 255, 255, 255, 255),
    VTX(-834, 620, 790, 1280, 1536, 255, 255, 255, 255),
    VTX(-834, 520, 790, 0, 1536, 0, 0, 0, 255),
    VTX(-820, 520, 776, 0, 1792, 0, 0, 0, 255),
    VTX(-777, 520, 819, 0, 1792, 0, 0, 0, 255),
    VTX(-792, 520, 833, 0, 1536, 0, 0, 0, 255),
    VTX(-792, 620, 833, 1280, 1536, 255, 255, 255, 255),
    VTX(-777, 620, 819, 1280, 1792, 255, 255, 255, 255),
    VTX(-820, 520, 776, 1024, 1792, 0, 0, 0, 255),
    VTX(-834, 520, 790, 1024, 1536, 0, 0, 0, 255),
    VTX(-792, 520, 833, 256, 1536, 0, 0, 0, 255),
    VTX(-777, 520, 819, 256, 1792, 0, 0, 0, 255),
    VTX(-777, 620, 819, 256, 1792, 255, 255, 255, 255),
    VTX(-792, 620, 833, 256, 1536, 255, 255, 255, 255),
    VTX(-834, 620, 790, 1024, 1536, 255, 255, 255, 255),
    VTX(-820, 620, 776, 1024, 1792, 255, 255, 255, 255),
};

Vtx fairy_deku_tree_room_7Vtx_000390[] = {
    VTX(-943, 520, 622, 0, 0, 0, 0, 0, 0),
    VTX(-631, 520, 993, 0, 0, 0, 0, 0, 0),
    VTX(-943, 840, 622, 0, 0, 0, 0, 0, 0),
    VTX(-631, 840, 993, 0, 0, 0, 0, 0, 0),
    VTX(-1204, 520, 841, 0, 0, 0, 0, 0, 0),
    VTX(-893, 520, 1212, 0, 0, 0, 0, 0, 0),
    VTX(-1204, 840, 841, 0, 0, 0, 0, 0, 0),
    VTX(-893, 840, 1212, 0, 0, 0, 0, 0, 0),
};

Gfx fairy_deku_tree_room_7Dlist0x000410[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fairy_deku_tree_room_7Vtx_000390[0], 8, 0),
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
    gsSPVertex(&fairy_deku_tree_room_7Vtx_000080[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(5, 9, 6, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 14, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_011B60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_7Vtx_000170[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_004BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_7Vtx_000210[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fairy_deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fairy_deku_tree_room_7Vtx_000290[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};
