    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gLinkChildRightForearmNearVtx[0], 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, gLinkChildEarTex_WIDTH, gLinkChildEarTex_HEIGHT,
 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&gLinkChildRightForearmNearVtx[5], 17, 5),
    gsSP2Triangles(5, 4, 1, 0, 1, 2, 6, 0),
    gsSP2Triangles(7, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 2, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(0, 4, 18, 0, 19, 3, 0, 0),
    gsSP1Triangle(20, 21, 1, 0),
    gsSPVertex(&gLinkChildRightForearmNearVtx[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 3, 2, 0, 10, 2, 11, 0),
    gsSP2Triangles(6, 9, 8, 0, 6, 8, 7, 0),
    gsSP2Triangles(11, 2, 7, 0, 6, 1, 0, 0),
    gsSP2Triangles(6, 0, 5, 0, 6, 5, 9, 0),
    gsSPEndDisplayList(),
