#include "ovl_En_Clear_Tag2.h"

Vtx gClearTag2DebrisEffectVtx[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/gClearTag2DebrisEffectVtx.vtx.inc"
};

Vtx gClearTag2FireEffectVtx[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/gClearTag2FireEffectVtx.vtx.inc"
};

Vtx gClearTag2FlashEffectVtx[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/gClearTag2FlashEffectVtx.vtx.inc"
};

Vtx gClearTag2FlashEffectGroundVtx[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/gClearTag2FlashEffectGroundVtx.vtx.inc"
};

Vtx gClearTag2LightRayEffectVtx[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/gClearTag2LightRayEffectVtx.vtx.inc"
};

u64 gClearTag2DebrisEffectTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_debris_effect.rgba16.inc.c"
};

u64 gClearTag2FireEffectFlickerTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_fire_effect_flicker.i4.inc.c"
};

u64 gClearTag2FireEffectBackgroundTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_fire_effect_background.i4.inc.c"
};

u64 gClearTag2FlashEffectTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_flash_effect.i8.inc.c"
};

u64 gClearTag2FlashEffectGroundTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_flash_ground_effect.i4.inc.c"
};

u64 gClearTag2LightRayEffectTex[] = {
#include "assets/overlays/ovl_En_Clear_Tag2/clear_tag2_light_ray_effect.i8.inc.c"
};

Gfx gClearTag2DebrisEffectMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gClearTag2DebrisEffectTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPEndDisplayList(),
};

Gfx gClearTag2DebrisEffectDL[] = {
    gsSPVertex(gClearTag2DebrisEffectVtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gClearTag2FireEffectMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gClearTag2FireEffectFlickerTex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(gClearTag2FireEffectBackgroundTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gClearTag2FireEffectDL[] = {
    gsSPDisplayList(0x08000000),
    gsSPVertex(gClearTag2FireEffectVtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gClearTag2FlashEffectDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gClearTag2FlashEffectTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(gClearTag2FlashEffectVtx, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gClearTag2FlashEffectGroundDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gClearTag2FlashEffectGroundTex, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(gClearTag2FlashEffectGroundVtx, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gClearTag2LightRayEffectMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gClearTag2LightRayEffectTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gClearTag2LightRayEffectDL[] = {
    gsSPVertex(gClearTag2LightRayEffectVtx, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
