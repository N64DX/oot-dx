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
    gsSPVertex(&gLinkChildDekuShieldSwordAndSheathNearVtx[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, gLinkChildDekuShieldFrontTex_WIDTH,
 gLinkChildDekuShieldFrontTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD,
 G_TX_NOLOD),
    gsSPVertex(&gLinkChildDekuShieldSwordAndSheathNearVtx[8], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 5, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 0, 0, 23, 0, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b,
 gLinkChildKokiriSwordSheathTex_WIDTH, gLinkChildKokiriSwordSheathTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP,
 G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPVertex(&gLinkChildDekuShieldSwordAndSheathNearVtx[32], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, gLinkChildSwordJewelTex_WIDTH,
 gLinkChildSwordJewelTex_HEIGHT, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD,
 G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&gLinkChildDekuShieldSwordAndSheathNearVtx[43], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 15, 0),
    gsSP2Triangles(19, 18, 22, 0, 16, 15, 22, 0),
    gsSP2Triangles(22, 15, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(11, 23, 13, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
