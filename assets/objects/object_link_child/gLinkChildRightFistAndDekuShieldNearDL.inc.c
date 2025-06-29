    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildDekuShieldBackTex_WIDTH,
 gLinkChildDekuShieldBackTex_HEIGHT, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD,
 G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gLinkChildRightFistAndDekuShieldNearVtx[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildDekuShieldFrontTex_WIDTH,
 gLinkChildDekuShieldFrontTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildRightFistAndDekuShieldNearVtx[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(1, 0, 16, 0, 13, 15, 8, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 8, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(16, 0, 23, 0, 25, 26, 27, 0),
    gsSP1Triangle(7, 28, 29, 0),
    gsSPVertex(&gLinkChildRightFistAndDekuShieldNearVtx[38], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, gLinkChildHandTex_WIDTH,
 gLinkChildHandTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsSPVertex(&gLinkChildRightFistAndDekuShieldNearVtx[47], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 10, 16, 0, 17, 10, 14, 0),
    gsSP2Triangles(18, 14, 19, 0, 17, 14, 18, 0),
    gsSP2Triangles(8, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 10, 17, 16, 0),
    gsSP2Triangles(12, 26, 10, 0, 12, 14, 26, 0),
    gsSP2Triangles(26, 14, 10, 0, 8, 21, 6, 0),
    gsSP2Triangles(6, 21, 27, 0, 27, 21, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPEndDisplayList(),
