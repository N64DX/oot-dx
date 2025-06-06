#if OOT_VERSION == IQUE_CN

    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0,
 0, COMBINED),
    gsDPSetEnvColor(200, 230, 225, 255),
    gsDPLoadTextureTile(sNintendoLeftTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 0, 0, 0, 63, 47, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0184 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0168), HIRES_MULTIPLY((0x0280 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0224), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sNintendoRightTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 0, 0, 0, 63, 47, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0280 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0168), HIRES_MULTIPLY((0x037C + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0224), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sPresentedByTex, G_IM_FMT_IA, G_IM_SIZ_8b, 96, 0, 0, 0, 95, 15, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x01C4 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0140), HIRES_MULTIPLY((0x0340 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x017C), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sIQueTop, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 0, 0, 0, 127, 23, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0184 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0230), HIRES_MULTIPLY((0x0380 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0290), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sIQueBottom, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 0, 0, 0, 127, 23, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0184 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0290), HIRES_MULTIPLY((0x0380 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x02F0), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsSPEndDisplayList(),

#else

    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0,
 0, COMBINED),
    gsDPSetEnvColor(200, 230, 225, 255),
    gsDPLoadTextureTile(sNintendoLeftTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 0, 0, 0, 63, 47, 0, G_TX_NOMIRROR | G_TX_WRAP,
 G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0184 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0168), HIRES_MULTIPLY((0x0280 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0224), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sNintendoRightTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 0, 0, 0, 63, 47, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x0280 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0168), HIRES_MULTIPLY((0x037C + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0224), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsDPLoadTextureTile(sPresentedByTex, G_IM_FMT_IA, G_IM_SIZ_8b, 96, 0, 0, 0, 95, 15, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTextureRectangle(HIRES_MULTIPLY((0x01C4 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x0140), HIRES_MULTIPLY((0x0340 + (WS_SHIFT_FULL * 2))), HIRES_MULTIPLY(0x017C), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(0x0400), HIRES_DIVIDE(0x0400)),
    gsSPEndDisplayList(),

#endif
