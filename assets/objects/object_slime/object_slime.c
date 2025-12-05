#include "object_slime.h"

 static u64 slimeTexture[] = {
#include "assets/objects/object_slime/slime_texture.rgba16.inc.c"
};

static u64 slimeHiliteTexture[] = {
#include "assets/objects/object_slime/slime_texture_2.i8.inc.c"
};

static Vtx slimeVertices[1] = {
    VTX(0, 0, 0, 0, 0, 0, 0, 0, 0),
};

Gfx slimeDList[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_HILITERGBA2),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPLoadMultiBlock(slimeHiliteTexture, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x07000000),
    gsDPLoadTextureBlock(slimeTexture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x0A00, 0x0A00, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetPrimColor(0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF),
    gsDPSetEnvColor(0xFF, 0xFF, 0xFF, 0x00),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, PRIMITIVE, TEXEL0, 0, SHADE, PRIMITIVE, ENVIRONMENT, COMBINED, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, TEXEL0, COMBINED),
    gsSPVertex(&slimeVertices[0], 1, 0),
    gsDPSetPrimColor(0, 0, 255, 70, 131, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 50),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 100),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 100),
    gsDPSetPrimColor(0, 0, 0, 0, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 200),
    gsDPSetPrimColor(0, 0, 0, 100, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 300),
    gsDPSetPrimColor(0, 0, 0, 100, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 400),
    gsDPSetPrimColor(0, 0, 100, 0, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 500),
    gsDPSetPrimColor(0, 0, 100, 0, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 600),
    gsDPSetPrimColor(0, 0, 100, 100, 0, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 700),
    gsDPSetPrimColor(0, 0, 100, 100, 100, 0),
    gsSPBranchLessZraw(slimeSubDList, 0x00, 800),
    gsSPEndDisplayList(),
};

static Vtx slimeSubVertices[21] = {
    VTX(557, 531, 1766, 0, 0, 37, 213, 113, 0),    VTX(-1518, 531, 1091, 0, 0, 160, 213, 69, 0),
    VTX(-525, 1302, 1634, 0, 0, 220, 43, 113, 0),  VTX(-1014, 2006, 736, 0, 0, 189, 95, 48, 0),
    VTX(387, 2006, 1192, 0, 0, 26, 95, 79, 0),     VTX(0, 2377, 0, 0, 0, 0, 127, 0, 0),
    VTX(1253, 2006, 0, 0, 0, 84, 95, 0, 0),        VTX(1376, 1302, 1010, 0, 0, 96, 42, 70, 0),
    VTX(1840, 531, 0, 0, 0, 119, 213, 0, 0),       VTX(387, 2006, -1192, 0, 0, 26, 95, 177, 0),
    VTX(-1014, 2006, -736, 0, 0, 189, 95, 208, 0), VTX(1376, 1302, -1010, 0, 0, 96, 42, 186, 0),
    VTX(557, 531, -1766, 0, 0, 37, 213, 143, 0),   VTX(-1518, 531, -1091, 0, 0, 159, 214, 186, 0),
    VTX(-525, 1302, -1634, 0, 0, 220, 43, 143, 0), VTX(-1701, 1302, 0, 0, 0, 137, 43, 0, 0),
    VTX(-351, 0, -1043, 0, 0, 243, 137, 216, 0),   VTX(897, 0, 652, 0, 0, 29, 135, 21, 0),
    VTX(883, 0, -632, 0, 0, 43, 142, 225, 0),      VTX(-328, 0, 1036, 0, 0, 240, 141, 50, 0),
    VTX(-1101, 0, -12, 0, 0, 214, 137, 0, 0),
};

Gfx slimeSubDList[] = {
    gsSPVertex(&slimeSubVertices[0], 21, 0),
    gsSP2Triangles(0, 2, 1, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 4, 5, 0, 12, 11, 8, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 14, 9, 0),
    gsSP2Triangles(12, 14, 9, 0, 6, 9, 5, 0),
    gsSP2Triangles(6, 9, 5, 0, 8, 11, 6, 0),
    gsSP2Triangles(8, 11, 6, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 13, 15, 10, 0),
    gsSP2Triangles(13, 15, 10, 0, 9, 10, 5, 0),
    gsSP2Triangles(9, 10, 5, 0, 8, 7, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 1, 15, 13, 0),
    gsSP2Triangles(1, 15, 13, 0, 1, 2, 3, 0),
    gsSP2Triangles(1, 2, 3, 0, 10, 3, 5, 0),
    gsSP2Triangles(10, 3, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 0, 7, 4, 0),
    gsSP2Triangles(0, 7, 4, 0, 10, 9, 14, 0),
    gsSP2Triangles(10, 9, 14, 0, 3, 10, 15, 0),
    gsSP2Triangles(3, 10, 15, 0, 4, 3, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 6, 4, 7, 0),
    gsSP2Triangles(6, 4, 7, 0, 9, 6, 11, 0),
    gsSP1Triangle(9, 6, 11, 0),
    gsSP1Quadrangle(19, 20, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 0, 19, 17, 0),
    gsSP2Triangles(0, 19, 17, 0, 8, 17, 18, 0),
    gsSP2Triangles(8, 17, 18, 0, 12, 18, 16, 0),
    gsSP2Triangles(12, 18, 16, 0, 13, 16, 20, 0),
    gsSP2Triangles(13, 16, 20, 0, 1, 20, 19, 0),
    gsSP2Triangles(1, 20, 19, 0, 4, 2, 0, 0),
    gsSP2Triangles(4, 2, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 14, 13, 0),
    gsSP2Triangles(10, 14, 13, 0, 3, 15, 1, 0),
    gsSP2Triangles(3, 15, 1, 0, 8, 18, 12, 0),
    gsSP2Triangles(8, 18, 12, 0, 12, 16, 13, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 20, 1, 0),
    gsSP2Triangles(13, 20, 1, 0, 1, 19, 0, 0),
    gsSP2Triangles(1, 19, 0, 0, 0, 17, 8, 0),
    gsSP1Triangle(0, 17, 8, 0),
    gsSPEndDisplayList(),
};
