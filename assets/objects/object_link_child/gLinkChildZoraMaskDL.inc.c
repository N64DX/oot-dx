    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeBoarderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b,
 gLinkChildZoraMaskEyeBoarderTex_WIDTH, gLinkChildZoraMaskEyeBoarderTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP,
 G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildZoraMaskVtx[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 0, 9, 7, 0),
    gsSP2Triangles(10, 8, 7, 0, 8, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 3, 13, 12, 0),
    gsSP2Triangles(14, 10, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(16, 9, 0, 0, 15, 17, 18, 0),
    gsSP2Triangles(12, 19, 3, 0, 19, 12, 11, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 21, 17, 0),
    gsSP2Triangles(22, 9, 16, 0, 16, 23, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 24, 20, 4, 0),
    gsSP2Triangles(3, 23, 2, 0, 2, 23, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildZoraMaskEarTex_WIDTH,
 gLinkChildZoraMaskEarTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildZoraMaskVtx[25], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildZoraMaskEyeTex_WIDTH,
 gLinkChildZoraMaskEyeTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildZoraMaskVtx[35], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 7, 5, 0, 0, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildZoraMaskMouthTex_WIDTH,
 gLinkChildZoraMaskMouthTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildZoraMaskVtx[44], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 3, 4, 2, 0),
    gsSPEndDisplayList(),
