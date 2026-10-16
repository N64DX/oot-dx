#include "object_famos.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_famosVtx_000110[] = {
#include "assets/objects/object_famos/object_famosVtx_000110.vtx.inc"
};

u64 gFamosLightSwitchTex[] = {
#include "assets/objects/object_famos/famos_light_switch.rgba16.inc.c"
};

u64 gFamosMainBodyTex[] = {
#include "assets/objects/object_famos/famos_main_body.ci4.inc.c"
};

u64 gFamosBottomTex[] = {
#include "assets/objects/object_famos/famos_bottom.ci4.inc.c"
};

u64 gFamosShieldTex[] = {
#include "assets/objects/object_famos/famos_shield.ci4.inc.c"
};

u64 gFamosSwordHiltTex[] = {
#include "assets/objects/object_famos/famos_sword_hilt.ci4.inc.c"
};

u64 gFamosBodyTLUT[] = {
#include "assets/objects/object_famos/famos_main_body.tlut.rgba16.inc.c"
};

u64 gFamosBottomTLUT[] = {
#include "assets/objects/object_famos/famos_bottom.tlut.rgba16.inc.c"
};

u64 gFamosShieldTLUT[] = {
#include "assets/objects/object_famos/famos_shield.tlut.rgba16.inc.c"
};

u64 gFamosSwordHiltTLUT[] = {
#include "assets/objects/object_famos/famos_sword_hilt.tlut.rgba16.inc.c"
};

Gfx gFamosHelmetDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_famosVtx_000110, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 11, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(14, 15, 12, 0, 1, 0, 16, 0),
    gsSP2Triangles(15, 14, 17, 0, 7, 18, 5, 0),
    gsSP2Triangles(12, 19, 13, 0, 8, 20, 9, 0),
    gsSP2Triangles(5, 18, 21, 0, 21, 18, 22, 0),
    gsSP2Triangles(21, 20, 23, 0, 23, 5, 21, 0),
    gsSP2Triangles(22, 15, 21, 0, 16, 4, 1, 0),
    gsSP1Triangle(24, 9, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[25], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(13, 23, 11, 0, 13, 15, 23, 0),
    gsSP2Triangles(19, 24, 17, 0, 19, 25, 24, 0),
    gsSP2Triangles(20, 26, 21, 0, 27, 28, 2, 0),
    gsSP2Triangles(6, 29, 4, 0, 6, 30, 29, 0),
    gsSP2Triangles(2, 31, 27, 0, 2, 1, 31, 0),
    gsSPVertex(&object_famosVtx_000110[57], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 178, 178, 178, 255),
    gsSPVertex(&object_famosVtx_000110[69], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gFamosMainBodyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_famosVtx_000110[74], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 2, 8, 0, 0),
    gsSP2Triangles(5, 9, 3, 0, 3, 9, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[84], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[92], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 5, 6, 3, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 7, 0, 0),
    gsSP2Triangles(6, 5, 7, 0, 1, 4, 3, 0),
    gsSP2Triangles(0, 9, 8, 0, 2, 9, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[102], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 7, 3, 0),
    gsSP1Triangle(6, 8, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 252, 244, 255),
    gsSPVertex(&object_famosVtx_000110[111], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 250, 255, 255, 255),
    gsSPVertex(&object_famosVtx_000110[119], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_famosVtx_000110[127], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 7, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[135], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 7, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[143], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 7, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[151], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[159], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[167], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBottomTLUT),
    gsDPLoadTextureBlock_4b(gFamosBottomTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[171], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gFamosShieldDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gFamosShieldTLUT),
    gsDPLoadTextureBlock_4b(gFamosShieldTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_famosVtx_000110[200], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosShieldTLUT),
    gsDPLoadTextureBlock_4b(gFamosShieldTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 83, 83, 86, 255),
    gsSPVertex(&object_famosVtx_000110[211], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gFamosSwordDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gFamosSwordHiltTLUT),
    gsDPLoadTextureBlock_4b(gFamosSwordHiltTex, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_famosVtx_000110[216], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(10, 26, 27, 0, 17, 28, 29, 0),
    gsSPVertex(&object_famosVtx_000110[246], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 4, 3, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 1, 0, 0, 15, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, gFamosBodyTLUT),
    gsDPLoadTextureBlock_4b(gFamosMainBodyTex, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_famosVtx_000110[262], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 1, 0, 12, 1, 0, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 4, 0, 16, 4, 3, 0),
    gsSP2Triangles(18, 19, 8, 0, 18, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gFamosLightSwitchDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFamosLightSwitchTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_famosVtx_000110[176], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

StandardLimb gFamosBodyLimb = { 
    { 0, 1190, 0 }, FAMOS_LIMB_EMBLEM - 1, LIMB_DONE, gFamosMainBodyDL
};

StandardLimb gFamosEmblemLimb = { 
    { 3408, 0, -639 }, LIMB_DONE, FAMOS_LIMB_SWORD - 1, gFamosLightSwitchDL
};

StandardLimb gFamosSwordLimb = { 
    { 3381, -1488, -1035 }, LIMB_DONE, FAMOS_LIMB_SHIELD - 1, gFamosSwordDL
};

StandardLimb gFamosShieldLimb = { 
    { 3381, 1488, -1035 }, LIMB_DONE, FAMOS_LIMB_HEAD - 1, gFamosShieldDL
};

StandardLimb gFamosHeadLimb = { 
    { 5399, 0, 0 }, LIMB_DONE, LIMB_DONE, gFamosHelmetDL
};

void* gFamosSkelLimbs[] = {
    &gFamosBodyLimb,
    &gFamosEmblemLimb,
    &gFamosSwordLimb,
    &gFamosShieldLimb,
    &gFamosHeadLimb,
};

SkeletonHeader gFamosSkel = { 
    gFamosSkelLimbs, ARRAY_COUNT(gFamosSkelLimbs)
};

s16 sFamosShakeAnimFrameData[] = {
    0x0000, 0x04A6, 0x4000, 0x4007, 0xC1C5, 0xFFF9, 0x0000, 0x012C, 0xFFED, 0xFED4, 0xFFC1, 0x00C8, 0x0010, 0xFF38, 
    0xFF5A, 0xFFC3, 0x0000, 0x0000, 0xFC00, 0xF8E4, 0x0072, 0x071C, 0x03B0, 0xFD1A, 0xF8E4, 0xFA35, 0xFDE5, 0x0000, 
    0x3FFA, 0xFA8C, 0x5CE8, 0xEB33, 0x5B6B, 0xE472, 0xEE7A, 0xEB59, 0xF1FB, 0x27C7, 0x3FFA, 0xBE1A, 0xBCD6, 0xCA8D, 
    0xB168, 0xCDBB, 0xB47F, 0xB78C, 0xBAD7, 0xBDAB, 0xBE8B, 0xBE1A, 0x0006, 0x4B89, 0xD875, 0x59A2, 0xD977, 0x58D7, 
    0x573B, 0x52F7, 0x4406, 0x12DC, 0x0006, 0x4007, 0x3081, 0x1CDA, 0x2CE0, 0x1CBF, 0x24D4, 0x2D47, 0x26E8, 0x21F6, 
    0x2FBA, 0x4007, 0xC1C5, 0xC693, 0xCFF7, 0xD4F5, 0xD3E6, 0xD125, 0xCD5A, 0xC932, 0xC565, 0xC2B3, 0xC1C5, 0xFFF9, 
    0x15D7, 0x1AB2, 0x1BF5, 0x1BB4, 0x1B04, 0x19E4, 0x1805, 0x1434, 0x0AEB, 0xFFF9, 0xFFC6, 0x054B, 0x098D, 0xFEFD, 
    0xF5B0, 0xFF33, 0x098D, 0x08F8, 0x0581, 0x019E, 0xFFC6, 0x0000, 
};

JointIndex sFamosShakeAnimJointIndices[] = {
    { 0x0006, 0x0001, 0x0000 },
    { 0x0011, 0x0000, 0x0002 },
    { 0x0003, 0x0004, 0x0005 },
    { 0x001C, 0x0027, 0x0032 },
    { 0x003D, 0x0048, 0x0053 },
    { 0x0000, 0x0000, 0x005E },
};

AnimationHeader gFamosShakeAnim = { 
    { 11 }, sFamosShakeAnimFrameData, sFamosShakeAnimJointIndices, 6
};

s16 sFamosIdleAnimFrameData[] = {
    0x0000, 0x04A6, 0x4000, 0x4007, 0xC1C5, 0xFFF9, 0xFFC6, 0x3FFA, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFF, 0x3FFE, 0x3FFA, 
    0xBE1A, 0xB4BB, 0xAB5C, 0xAE4A, 0xB4BB, 0xBB2D, 0xBE1A, 0x0006, 0x0001, 0x0001, 0x0001, 0x0001, 0x0002, 0x0006, 
    0x4007, 0x3FFE, 0x3FFF, 0x3FFF, 0x3FFE, 0x3FE6, 0x4007, 0xC1C5, 0xBA9A, 0xB36F, 0xB5AD, 0xBA9A, 0xBF88, 0xC1C5, 
    0xFFF9, 0x0002, 0x0001, 0x0001, 0x0002, 0x001A, 0xFFF9, 0x0000, 
};

JointIndex sFamosIdleAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0003, 0x0004, 0x0005 },
    { 0x0007, 0x000E, 0x0015 },
    { 0x001C, 0x0023, 0x002A },
    { 0x0000, 0x0000, 0x0006 },
};

AnimationHeader gFamosIdleAnim = { 
    { 7 }, sFamosIdleAnimFrameData, sFamosIdleAnimJointIndices, 7
};
