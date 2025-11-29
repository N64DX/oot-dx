#include "assets/objects/object_deku_door/object_deku_door.h"

#include "gfx.h"

static Vtx gameplay_keepVtx_00E770[4] = {
    VTX(-300, 250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(5700, 250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(5700, 250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 0, 1024, 2048, 170, 170, 170, 255),
}; 

static Vtx gameplay_keepVtx_00E7B0[6] = {
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E810[4] = {
    VTX(4560, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 250, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E850[4] = {
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E890[8] = {
    VTX(4383, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, 250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E910[8] = {
    VTX(4560, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(5094, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E990[4] = {
    VTX(5700, -250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(-300, -250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(-300, -250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(5700, -250, 0, 0, 2048, 170, 170, 170, 255),
}; 

static Vtx gameplay_keepVtx_00E9D0[6] = {
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EA30[4] = {
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EA70[4] = {
    VTX(4560, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -250, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EAB0[8] = {
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, -250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EB30[8] = {
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, -250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, -250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EBB0[8] = {
    VTX(5700, 250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(-300, -250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(5700, -250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(-300, -250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(5700, -250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(5700, 250, 10000, 1024, 0, 170, 170, 170, 255),
}; 

u64 gDekuBossDoorTex[] = {
#include "assets/objects/object_deku_door/dekuBossDoor.rgba16.inc.c"
};

Gfx gDekuBossDoorFrameDL[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0, K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00EBB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 2, 1, 0),
    gsSP2Triangles(0, 6, 3, 0, 0, 7, 6, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gDekuBossDoorLeftDL[] = {
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0, K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E770[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E7B0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E810[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E850[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E890[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E910[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDekuBossDoorFrameDL),
    gsSPEndDisplayList(),
}; 

Gfx gDekuBossDoorRightDL[] = {
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0, K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E990[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E9D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EAB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EB30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDekuBossDoorFrameDL),
    gsSPEndDisplayList(),
}; 
