    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
 G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 247, 164, 109, 255),
    gsSPVertex(&gLinkChildLinkDekuStickVtx[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(7, 3, 5, 0, 0, 8, 1, 0),
    gsSP2Triangles(5, 4, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 11, 7, 0),
    gsSP2Triangles(12, 0, 2, 0, 12, 11, 0, 0),
    gsSP2Triangles(13, 6, 14, 0, 15, 2, 6, 0),
    gsSP2Triangles(16, 3, 7, 0, 14, 3, 16, 0),
    gsSP2Triangles(17, 4, 6, 0, 2, 1, 17, 0),
    gsSP2Triangles(1, 8, 18, 0, 18, 8, 5, 0),
    gsSP2Triangles(18, 5, 10, 0, 19, 20, 4, 0),
    gsSP2Triangles(19, 4, 17, 0, 17, 21, 19, 0),
    gsSP2Triangles(1, 18, 22, 0, 17, 1, 21, 0),
    gsSP2Triangles(17, 6, 2, 0, 6, 3, 14, 0),
    gsSP2Triangles(15, 12, 2, 0, 7, 11, 16, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&gLinkChildLinkDekuStickVtx[23], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 11, 12, 0),
    gsSPEndDisplayList(),
