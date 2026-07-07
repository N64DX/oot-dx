#include "object_crashbox.h"

#include "gfx.h"
#include "array_count.h"
#include "camera.h"

static Vtx object_crashboxVtx[] = {
    VTX(-60, 120, 60, 1024, 0, 244, 120, 38, 255),
    VTX(-60, 0, -60, 0, 1024, 136, 219, 245, 255),
    VTX(-60, 0, 60, 1024, 1024, 255, 135, 35, 255),
    VTX(-60, 120, -60, 1024, 0, 245, 120, 219, 255),
    VTX(60, 0, -60, 0, 1024, 3, 135, 221, 255),
    VTX(-60, 0, -60, 1024, 1024, 136, 219, 245, 255),
    VTX(60, 120, -60, 1024, 0, 120, 11, 219, 255),
    VTX(60, 0, 60, 0, 1024, 38, 136, 11, 255),
    VTX(60, 0, -60, 1024, 1024, 3, 135, 221, 255),
    VTX(60, 120, 60, 1024, 0, 11, 120, 37, 255),
    VTX(-60, 0, 60, 0, 1024, 255, 135, 35, 255),
    VTX(60, 0, 60, 1024, 1024, 38, 136, 11, 255),
    VTX(60, 0, -60, 1024, 0, 3, 135, 221, 255),
    VTX(60, 120, 60, 0, 1024, 11, 120, 37, 255),
    VTX(60, 120, -60, 1024, 1024, 120, 11, 219, 255),
    VTX(-60, 120, -60, 0, 0, 245, 120, 219, 255),
    VTX(60, 120, -60, 0, 0, 120, 11, 219, 255),
    VTX(60, 120, 60, 0, 0, 11, 120, 37, 255),
    VTX(-60, 120, 60, 0, 0, 244, 120, 38, 255),
    VTX(60, 0, 60, 0, 0, 38, 136, 11, 255),
};

static u64 object_crashboxTex_000000[] = {
#include "assets/objects/object_crashbox/object_crashboxTex_000000.ci8.inc.c"
};

static u64 object_crashboxTex_000400[] = {
#include "assets/objects/object_crashbox/object_crashboxTex_000400.rgba16.inc.c"
};

Gfx gCrashboxDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_crashboxTex_000400),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_crashboxTex_000000),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&object_crashboxVtx[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 5, 0, 3, 13, 14, 0),
    gsSP2Triangles(0, 15, 1, 0, 3, 16, 4, 0),
    gsSP2Triangles(6, 17, 7, 0, 9, 18, 10, 0),
    gsSP2Triangles(12, 19, 10, 0, 3, 18, 13, 0),
    gsSPEndDisplayList(),
};

SurfaceType gCrashBoxColSurfaceType[] = {
    { 0x00000000, 0x000007C2 },
};

CollisionPoly gCrashboxColPolygons[] = {
   { 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000, 0xFFC4 },
   { 0x0000, 0x0003, 0x0006, 0x0002, 0x0000, 0x0000, 0x8001, 0xFFC4 },
   { 0x0000, 0x0007, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFFC4 },
   { 0x0000, 0x0005, 0x0000, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFFC4 },
   { 0x0000, 0x0006, 0x0000, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, 
   { 0x0000, 0x0003, 0x0005, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF88 },
   { 0x0000, 0x0001, 0x0003, 0x0002, 0x8001, 0x0000, 0x0000, 0xFFC4 },
   { 0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFC4 },
   { 0x0000, 0x0007, 0x0005, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFFC4 },
   { 0x0000, 0x0005, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFFC4 },
   { 0x0000, 0x0006, 0x0004, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000 },
   { 0x0000, 0x0003, 0x0001, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF88 },
};

Vec3s gCrashboxColVertices[] = {
   { -60,   0,  60 },
   { -60, 120,  60 },
   { -60,   0, -60 },
   { -60, 120, -60 },
   {  60,   0,  60 },
   {  60, 120,  60 },
   {  60,   0, -60 },
   {  60, 120, -60 },
};

CollisionHeader gCrashboxCol = {
    { -60, 0, -60 },
    { 60, 120, 60 },
    ARRAY_COUNT(gCrashboxColVertices), gCrashboxColVertices,
    ARRAY_COUNT(gCrashboxColPolygons), gCrashboxColPolygons,
    gCrashBoxColSurfaceType,
    NULL,
    0, NULL
};

static Vtx object_d_liftVtx_000000[] = {
    VTX(-600, -180, -600, 2048, 2048, 76, 76, 76, 255),
    VTX(600, -180, -600, 2048, 0, 51, 51, 51, 255),
    VTX(600, -180, 600, 0, 0, 25, 25, 25, 255),
    VTX(-600, -180, 600, 0, 2048, 51, 51, 51, 255),
};

static Vtx object_d_liftVtx_000040[] = {
    VTX(-600, -180, 600, 2048, 512, 51, 51, 51, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
    VTX(-600, -180, -600, 0, 512, 76, 76, 76, 255),
};

static Vtx object_d_liftVtx_000040_Big[] = {
    VTX(-600, -180, 600, 2048, 2048, 51, 51, 51, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
    VTX(-600, -180, -600, 0, 2048, 76, 76, 76, 255),
};

static Vtx object_d_liftVtx_000080[] = {
    VTX(-600, 180, 600, 0, 2048, 255, 255, 255, 255),
    VTX(600, 180, 600, 2048, 2048, 140, 140, 140, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
};

static Vtx object_d_liftVtx_0000C0[] = {
    VTX(600, -180, 600, 0, 512, 25, 25, 25, 255),
    VTX(600, 180, 600, 0, 0, 140, 140, 140, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, -180, 600, 2048, 512, 51, 51, 51, 255),
    VTX(600, -180, -600, 2048, 512, 51, 51, 51, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, -180, -600, 0, 512, 76, 76, 76, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
};

static Vtx object_d_liftVtx_0000C0_Big[] = {
    VTX(600, -180, 600, 0, 2048, 25, 25, 25, 255),
    VTX(600, 180, 600, 0, 0, 140, 140, 140, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, -180, 600, 2048, 2048, 51, 51, 51, 255),
    VTX(600, -180, -600, 2048, 2048, 51, 51, 51, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, -180, -600, 0, 2048, 76, 76, 76, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
};

static u64 object_crashboxTex_000800[] = {
#include "assets/objects/object_crashbox/object_crashboxTex_000800.i8.inc.c"
};

static u64 object_crashboxTex_001000[] = {
#include "assets/objects/object_crashbox/object_crashboxTex_001000.i8.inc.c"
};

Gfx gDLiftDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_crashboxTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 150, 110, 70, 255),
    gsSPVertex(&object_d_liftVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_crashboxTex_001000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 2, 4, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 60),
    gsSPVertex(&object_d_liftVtx_000040[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_crashboxTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPVertex(&object_d_liftVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_crashboxTex_001000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 2, 4, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 60),
    gsSPVertex(&object_d_liftVtx_0000C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gDLiftBigDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_crashboxTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 150, 110, 70, 255),
    gsSPVertex(&object_d_liftVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_d_liftVtx_000040_Big[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_d_liftVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_d_liftVtx_0000C0_Big[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

BgCamInfo gFloaterColCamDataList[] = {
	{ CAM_SET_NONE, 0, NULL },
}; 

SurfaceType gFloaterColSurfaceType[] = {
    { 0x00000000, 0x000007C2 },
}; 

CollisionPoly gFloaterColPolygons[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFF4C },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFF4C },
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x8001, 0x0000, 0x0000, 0xFDA8 },
   { 0x0000, 0x0003, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000, 0xFDA8 },
   { 0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF4C },
   { 0x0000, 0x0004, 0x0007, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF4C },
   { 0x0000, 0x0002, 0x0006, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFDA8 },
   { 0x0000, 0x0002, 0x0004, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFDA8 },
   { 0x0000, 0x0001, 0x0007, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFDA8 },
   { 0x0000, 0x0001, 0x0006, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFDA8 },
   { 0x0000, 0x0000, 0x0005, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8 },
   { 0x0000, 0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x8001, 0xFDA8 },

}; 

Vec3s gFloaterColVertices[] = {
   { -600, -180, -600 },
   {  600, -180, -600 },
   {  600, -180,  600 },
   { -600, -180,  600 },
   { -600,  180,  600 },
   { -600,  180, -600 },
   {  600,  180,  600 },
   {  600,  180, -600 },
}; 

CollisionHeader gDLiftCol = {
    {  -600, -180, -600 },
    { 600, 180, 600 },
    ARRAY_COUNT(gFloaterColVertices), gFloaterColVertices,
    ARRAY_COUNT(gFloaterColPolygons), gFloaterColPolygons,
    gFloaterColSurfaceType,
    gFloaterColCamDataList,
    0, NULL
}; 
