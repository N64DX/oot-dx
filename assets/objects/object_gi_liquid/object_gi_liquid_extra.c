#include "assets/objects/object_gi_liquid/object_gi_liquid.h"
#include "object_gi_liquid_extra.h"

#include "gfx.h"

Gfx gGiPurplePotColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 191, 0, 255, 255),
    gsDPSetEnvColor(20, 40, 0, 255),
    gsSPEndDisplayList(),
};

Gfx gGiPurpleLiquidColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(48, 25, 52, 255),
    gsSPEndDisplayList(),
};

Gfx gGiPurplePatternColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 218, 177, 218, 255),
    gsDPSetEnvColor(147, 112, 219, 255),
    gsDPLoadTextureBlock(gGiGreenPotionPatternTex, G_IM_FMT_IA, G_IM_SIZ_8b, gGiGreenPotionPatternTex_WIDTH, gGiGreenPotionPatternTex_HEIGHT, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
};
