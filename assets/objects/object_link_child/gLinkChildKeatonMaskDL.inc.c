    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEyeBrowTex, G_IM_FMT_RGBA, G_IM_SIZ_16b,
 gLinkChildKeatonMaskEyeBrowTex_WIDTH, gLinkChildKeatonMaskEyeBrowTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP,
 G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildKeatonMaskVtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 12, 1, 0, 0),
    gsSP2Triangles(20, 16, 21, 0, 3, 22, 23, 0),
    gsSP2Triangles(19, 24, 6, 0, 25, 1, 12, 0),
    gsSP2Triangles(24, 19, 11, 0, 13, 26, 11, 0),
    gsSP2Triangles(11, 26, 24, 0, 6, 17, 19, 0),
    gsSP2Triangles(0, 13, 12, 0, 2, 1, 25, 0),
    gsSP2Triangles(18, 17, 8, 0, 2, 27, 0, 0),
    gsSP2Triangles(8, 17, 6, 0, 23, 9, 3, 0),
    gsSP2Triangles(4, 3, 10, 0, 20, 28, 14, 0),
    gsSP2Triangles(14, 16, 20, 0, 29, 30, 31, 0),
    gsSPVertex(&gLinkChildKeatonMaskVtx[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildKeatonMaskEarTex_WIDTH,
 gLinkChildKeatonMaskEarTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildKeatonMaskVtx[38], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 3, 8, 0),
    gsSP2Triangles(9, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 10, 18, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 0, 19, 1, 0),
    gsSP2Triangles(2, 20, 6, 0, 4, 18, 5, 0),
    gsSPEndDisplayList(),
