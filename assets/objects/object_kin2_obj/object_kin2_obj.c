#include "object_kin2_obj.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_kin2_objVtx_000000[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_000000.vtx.inc"
};

Vtx object_kin2_objVtx_000200[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_000200.vtx.inc"
};

Vtx object_kin2_objVtx_0004C0[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_0004C0.vtx.inc"
};

Vtx object_kin2_objVtx_0007D0[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_0007D0.vtx.inc"
};

Vtx object_kin2_objVtx_000940[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_000940.vtx.inc"
};

Vtx object_kin2_objVtx_000FB0[] = {
#include "assets/objects/object_kin2_obj/object_kin2_objVtx_000FB0.vtx.inc"
};

u64 gOceanSpiderHouseTLUT[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_skullkid_painting.tlut.rgba16.inc.c"
};

u64 gOceanSpiderHouseBombableWallCrackTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_bombable_wall_crack.ia8.inc.c"
};

u64 gOceanSpiderHouseBookshelfWoodTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_bookshelf_wood.rgba16.inc.c"
};

u64 gOceanSpiderHouseFireplaceGrateTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_fireplace_grate.rgba16.inc.c"
};

u64 gOceanSpiderHouseSkullkidPaintingTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_skullkid_painting.ci4.inc.c"
};

u64 gOceanSpiderHouseChestOfDrawersFrontTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_chest_of_drawers_front.rgba16.inc.c"
};

u64 gOceanSpiderHouseChestOfDrawersBackTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_chest_of_drawers_back.rgba16.inc.c"
};

u64 gOceanSpiderHouseChestOfDrawersTopTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_chest_of_drawers_top.rgba16.inc.c"
};

u64 gOceanSpiderHouseBookshelfBooksTex[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_bookshelf_books.rgba16.inc.c"
};

u64 gOceanSpiderHouseBombableWallDebrisTex1[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_debris_1.rgba16.inc.c"
};

u64 gOceanSpiderHouseBombableWallDebrisTex2[] = {
#include "assets/objects/object_kin2_obj/ocean_spider_house_debris_2.i4.inc.c"
};

Gfx gOceanSpiderHouseBombableWallDebrisDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseBombableWallDebrisTex1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gOceanSpiderHouseBombableWallDebrisTex2, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_kin2_objVtx_000000, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseBombableWallCrackDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIM_LOD_FRAC, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 159),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseBombableWallCrackTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | 0x00400000),
    gsSPVertex(&object_kin2_objVtx_000200[6], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 0, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseBombableWallDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseBombableWallDebrisTex1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gOceanSpiderHouseBombableWallDebrisTex2, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | 0x00400000),
    gsSPVertex(object_kin2_objVtx_000200, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 3, 0, 2, 1, 5, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseSkullkidPaintingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gOceanSpiderHouseTLUT),
    gsDPLoadTextureBlock_4b(gOceanSpiderHouseSkullkidPaintingTex, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_kin2_objVtx_0004C0, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseFireplaceGrateDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseFireplaceGrateTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_kin2_objVtx_0007D0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseBookshelfDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseBookshelfWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | 0x00400000),
    gsSPVertex(object_kin2_objVtx_000940, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(19, 18, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&object_kin2_objVtx_000940[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOceanSpiderHouseBookshelfBooksTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_kin2_objVtx_000940[34], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx gOceanSpiderHouseChestOfDrawersDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceanSpiderHouseChestOfDrawersTopTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_kin2_objVtx_000FB0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOceanSpiderHouseChestOfDrawersBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_kin2_objVtx_000FB0[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOceanSpiderHouseChestOfDrawersFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_kin2_objVtx_000FB0[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gOceanSpiderHouseBombableWallColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gOceanSpiderHouseBombableWallColSurfaceType[] = {
    {0x00000000, 0x000007CB},
};

CollisionPoly gOceanSpiderHouseBombableWallColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0000, 0x0000, 0x0003, 0x0004, 0x0000, 0x0000, 0x7FFF, 0x0000},
};

Vec3s gOceanSpiderHouseBombableWallColVertices[] = {
    {     60,      0,      0 },
    {     60,     90,      0 },
    {      0,    120,      0 },
    {    -60,     90,      0 },
    {    -60,      0,      0 },
};

CollisionHeader gOceanSpiderHouseBombableWallCol = { 
    { -60, 0, 0 },
    { 60, 120, 0 },
    ARRAY_COUNT(gOceanSpiderHouseBombableWallColVertices), gOceanSpiderHouseBombableWallColVertices,
    ARRAY_COUNT(gOceanSpiderHouseBombableWallColPolygons), gOceanSpiderHouseBombableWallColPolygons,
    gOceanSpiderHouseBombableWallColSurfaceType,
    gOceanSpiderHouseBombableWallColCamDataList,
    0, NULL
};

BgCamInfo gOceanSpiderHouseSkullkidPaintingColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gOceanSpiderHouseSkullkidPaintingColSurfaceType[] = {
    {0x00000000, 0x000007CA},
};

CollisionPoly gOceanSpiderHouseSkullkidPaintingColPolygons[] = {
    {0x0000, 0xA000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0xA000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x0000},
};

Vec3s gOceanSpiderHouseSkullkidPaintingColVertices[] = {
    {    225,      0,      0 },
    {   -225,      0,      0 },
    {   -225,    563,      0 },
    {    225,    563,      0 },
};

CollisionHeader gOceanSpiderHouseSkullkidPaintingCol = { 
    { -225, 0, 0 },
    { 225, 563, 0 },
    ARRAY_COUNT(gOceanSpiderHouseSkullkidPaintingColVertices), gOceanSpiderHouseSkullkidPaintingColVertices,
    ARRAY_COUNT(gOceanSpiderHouseSkullkidPaintingColPolygons), gOceanSpiderHouseSkullkidPaintingColPolygons,
    gOceanSpiderHouseSkullkidPaintingColSurfaceType,
    gOceanSpiderHouseSkullkidPaintingColCamDataList,
    0, NULL
};

BgCamInfo gOceanSpiderHouseFireplaceGrateColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gOceanSpiderHouseFireplaceGrateColSurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gOceanSpiderHouseFireplaceGrateColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0000},
};

Vec3s gOceanSpiderHouseFireplaceGrateColVertices[] = {
    {   -375,    600,      0 },
    {   -375,      0,      0 },
    {    375,      0,      0 },
    {    375,    600,      0 },
};

CollisionHeader gOceanSpiderHouseFireplaceGrateCol = { 
    { -375, 0, 0 },
    { 375, 600, 0 },
    ARRAY_COUNT(gOceanSpiderHouseFireplaceGrateColVertices), gOceanSpiderHouseFireplaceGrateColVertices,
    ARRAY_COUNT(gOceanSpiderHouseFireplaceGrateColPolygons), gOceanSpiderHouseFireplaceGrateColPolygons,
    gOceanSpiderHouseFireplaceGrateColSurfaceType,
    gOceanSpiderHouseFireplaceGrateColCamDataList,
    0, NULL
};

BgCamInfo gOceanSpiderHouseBookshelfColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gOceanSpiderHouseBookshelfColSurfaceType[] = {
    {0x00000000, 0x000007CA},   {0x00E00000, 0x000007CA},
};

CollisionPoly gOceanSpiderHouseBookshelfColPolygons[] = {
    {0x0000, 0x8000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x8000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0004, 0x0000, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0004, 0x0003, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0006, 0x0005, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0006, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0007, 0x0006, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0007, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0007, 0x0000, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x0008, 0x0004, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF88},
    {0x0000, 0x0008, 0x0005, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFF88},
    {0x0001, 0x0004, 0x0008, 0x000B, 0x8001, 0x0000, 0x0000, 0xFFC4},
    {0x0001, 0x0004, 0x000B, 0x0007, 0x8001, 0x0000, 0x0000, 0xFFC4},
    {0x0001, 0x0006, 0x000A, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xFFC4},
    {0x0001, 0x0006, 0x0009, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFFC4},
};

Vec3s gOceanSpiderHouseBookshelfColVertices[] = {
    {      5,     70,     30 },
    {      5,     51,     30 },
    {     53,     51,     30 },
    {     53,     70,     30 },
    {    -60,    120,     30 },
    {     60,    120,     30 },
    {     60,      0,     30 },
    {    -60,      0,     30 },
    {    -60,    120,      0 },
    {     60,    120,      0 },
    {     60,      0,      0 },
    {    -60,      0,      0 },
};

CollisionHeader gOceanSpiderHouseBookshelfCol = { 
    { -60, 0, 0 },
    { 60, 120, 30 },
    ARRAY_COUNT(gOceanSpiderHouseBookshelfColVertices), gOceanSpiderHouseBookshelfColVertices,
    ARRAY_COUNT(gOceanSpiderHouseBookshelfColPolygons), gOceanSpiderHouseBookshelfColPolygons,
    gOceanSpiderHouseBookshelfColSurfaceType,
    gOceanSpiderHouseBookshelfColCamDataList,
    0, NULL
};

BgCamInfo gOceanSpiderHouseChestOfDrawersColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gOceanSpiderHouseChestOfDrawersColSurfaceType[] = {
    {0x00000000, 0x000007CA},   {0x00E00000, 0x000007CA},
};

CollisionPoly gOceanSpiderHouseChestOfDrawersColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFE3E},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFE3E},
    {0x0001, 0x0004, 0x0005, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFF38},
    {0x0001, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFF38},
    {0x0001, 0x0000, 0x0003, 0x0006, 0x8001, 0x0000, 0x0000, 0xFF6A},
    {0x0001, 0x0000, 0x0006, 0x0004, 0x8001, 0x0000, 0x0000, 0xFF6A},
    {0x0001, 0x0005, 0x0007, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFF6A},
    {0x0001, 0x0005, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xFF6A},
    {0x0000, 0x0003, 0x0002, 0x0007, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0x0000},
};

Vec3s gOceanSpiderHouseChestOfDrawersColVertices[] = {
    {   -150,    450,    200 },
    {    150,    450,    200 },
    {    150,    450,      0 },
    {   -150,    450,      0 },
    {   -150,      0,    200 },
    {    150,      0,    200 },
    {   -150,      0,      0 },
    {    150,      0,      0 },
};

CollisionHeader gOceanSpiderHouseChestOfDrawersCol = { 
    { -150, 0, 0 },
    { 150, 450, 200 },
    ARRAY_COUNT(gOceanSpiderHouseChestOfDrawersColVertices), gOceanSpiderHouseChestOfDrawersColVertices,
    ARRAY_COUNT(gOceanSpiderHouseChestOfDrawersColPolygons), gOceanSpiderHouseChestOfDrawersColPolygons,
    gOceanSpiderHouseChestOfDrawersColSurfaceType,
    gOceanSpiderHouseChestOfDrawersColCamDataList,
    0, NULL
};
