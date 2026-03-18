#include "object_raf.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_rafVtx_000140[] = {
#include "assets/objects/object_raf/object_rafVtx_000140.vtx.inc"
};

Vtx object_rafVtx_000C90[] = {
#include "assets/objects/object_raf/object_rafVtx_000C90.vtx.inc"
};

Vtx object_rafVtx_002240[] = {
#include "assets/objects/object_raf/object_rafVtx_002240.vtx.inc"
};

u64 gCarnivorousLilyPadRootsTex[] = {
#include "assets/objects/object_raf/carnivorous_lily_pad_roots.rgba16.inc.c"
};

u64 gCarnivorousLilyPadFlowerPetalTex[] = {
#include "assets/objects/object_raf/carnivorous_lily_pad_flower_petal.rgba16.inc.c"
};

u64 gCarnivorousLilyPadFlowerCenterTex[] = {
#include "assets/objects/object_raf/carnivorous_lily_pad_flower_center.rgba16.inc.c"
};

u64 gCarnivorousLilyPadTrapPetalTex[] = {
#include "assets/objects/object_raf/carnivorous_lily_pad_trap_petal.rgba16.inc.c"
};

u64 gCarnivorousLilyPadTrapTeethTex[] = {
#include "assets/objects/object_raf/carnivorous_lily_pad_trap_teeth.rgba16.inc.c"
};

Gfx gCarnivorousLilyPadTexturelessPlatformDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_rafVtx_000140, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 4, 3, 0, 6, 3, 2, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(5, 7, 1, 0, 5, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadFlowerDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadFlowerPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_rafVtx_000C90, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 10, 0),
    gsSP2Triangles(13, 10, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 20, 0),
    gsSP2Triangles(23, 20, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 26, 29, 27, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadFlowerCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 0, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 5, 8, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadRootsDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadRootsTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[39], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 1, 8, 2, 0),
    gsSP2Triangles(4, 9, 5, 0, 4, 0, 9, 0),
    gsSP2Triangles(7, 3, 5, 0, 2, 9, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap3LowerSegmentDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[116], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap3MiddleSegmentDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[109], 2, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[111], 5, 2),
    gsSP2Triangles(0, 2, 3, 0, 1, 0, 4, 0),
    gsSP1Triangle(5, 6, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap3UpperSegmentDL[] = {
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[84], 5, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[89], 4, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 2, 8, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[93], 6, 5),
    gsSP2Triangles(4, 3, 5, 0, 6, 1, 4, 0),
    gsSP2Triangles(7, 4, 8, 0, 9, 4, 10, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[99], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[105], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap2LowerSegmentDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[81], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap2MiddleSegmentDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[74], 2, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[76], 5, 2),
    gsSP2Triangles(0, 2, 3, 0, 4, 5, 1, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap2UpperSegmentDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[49], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[54], 4, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 2, 8, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[58], 6, 5),
    gsSP2Triangles(5, 4, 6, 0, 4, 1, 7, 0),
    gsSP2Triangles(8, 4, 9, 0, 10, 3, 4, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[64], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[70], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap1LowerSegmentDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[151], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap1MiddleSegmentDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[144], 2, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[146], 5, 2),
    gsSP2Triangles(0, 2, 3, 0, 1, 0, 4, 0),
    gsSP1Triangle(5, 6, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadTrap1UpperSegmentDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[119], 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, 0, 0, 0, TEXEL0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_rafVtx_000C90[124], 4, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 2, 8, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[128], 6, 5),
    gsSP2Triangles(4, 1, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 4, 9, 0, 10, 3, 4, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[134], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_rafVtx_000C90[140], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadParticlePetalDL[] = {
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetColorDither(G_CD_MAGICSQ),
    gsDPSetAlphaDither(G_AD_PATTERN),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, TEXEL0, 0, PRIMITIVE, 0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(205, 250, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapPetalTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&object_rafVtx_002240[7], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 4, 1, 5, 0),
    gsSP2Triangles(6, 3, 4, 0, 5, 7, 4, 0),
    gsSP1Triangle(6, 8, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadParticleTeethDL[] = {
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetColorDither(G_CD_MAGICSQ),
    gsDPSetAlphaDither(G_AD_PATTERN),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, SHADE, TEXEL0, 0, PRIMITIVE, 0, COMBINED, ENVIRONMENT, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(155, 175, 215, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gCarnivorousLilyPadTrapTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(object_rafVtx_002240, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gCarnivorousLilyPadParticleDL[] = {
    gsSPDisplayList(gCarnivorousLilyPadParticleTeethDL),
    gsSPDisplayList(gCarnivorousLilyPadParticlePetalDL),
    gsSPEndDisplayList(),
};

BgCamInfo gCarnivorousLilyPadColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gCarnivorousLilyPadColCamPosData[] = {
    {0x00000000, 0x000007C8},   {0x00000000, 0x000007C0},
};

CollisionPoly gCarnivorousLilyPadColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFAEC},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFAEC},
    {0x0000, 0x0004, 0x0005, 0x0000, 0x0000, 0x0000, 0x8001, 0xE890},
    {0x0000, 0x0004, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xE890},
    {0x0000, 0x0006, 0x0004, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0006, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0007, 0x0006, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xE890},
    {0x0000, 0x0007, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xE890},
    {0x0000, 0x0005, 0x0007, 0x0001, 0x8001, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0005, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xE890},
    {0x0001, 0x0007, 0x0005, 0x0004, 0x0000, 0x8001, 0x0000, 0xF574},
    {0x0001, 0x0007, 0x0004, 0x0006, 0x0000, 0x8001, 0x0000, 0xF574},
};

Vec3s gCarnivorousLilyPadColVertices[] = {
    {  -6000,   1300,  -6000 },
    {  -6000,   1300,   6000 },
    {   6000,   1300,   6000 },
    {   6000,   1300,  -6000 },
    {   6000,  -2700,  -6000 },
    {  -6000,  -2700,  -6000 },
    {   6000,  -2700,   6000 },
    {  -6000,  -2700,   6000 },
};

CollisionHeader gCarnivorousLilyPadCol = { 
    { -6000, -2700, -6000 },
    { 6000, 1300, 6000 },
    ARRAY_COUNT(gCarnivorousLilyPadColVertices), gCarnivorousLilyPadColVertices,
    ARRAY_COUNT(gCarnivorousLilyPadColPolygons), gCarnivorousLilyPadColPolygons,
    gCarnivorousLilyPadColCamPosData,
    gCarnivorousLilyPadColCamDataList,
    0, NULL
};

s16 sCarnivorousLilyPadConvulseAnimFrameData[] = {
    0x0000, 0x9555, 0x4000, 0xEAAB, 0x0000, 0x00A2, 0x01D0, 0x0272, 0x0233, 0x0196, 0x00CB, 0x0000, 0xFEFC, 0xFDDE, 
    0xFD56, 0xFDC1, 0xFEAB, 0xFF96, 0x0000, 0x02A4, 0x0973, 0x12C3, 0x1CE8, 0x2638, 0x2D08, 0x2FAC, 0x2D08, 0x2638, 
    0x1CE8, 0x12C3, 0x0973, 0x02A4, 0x2B22, 0x2DC8, 0x306E, 0x2ED8, 0x2C14, 0x2B22, 0x303F, 0x34E1, 0x2FA7, 0x2B22, 
    0x2FFE, 0x3786, 0x3B6F, 0x3349, 0x0000, 0xF48E, 0xDF83, 0xD4D0, 0xDA4C, 0xE602, 0xF434, 0x0122, 0x090C, 0x0B44, 
    0x0A66, 0x07A4, 0x0432, 0x013F, 0xDE99, 0xD535, 0xCBDB, 0xD0F6, 0xDA43, 0xDF02, 0xD35B, 0xC9C9, 0xDD6A, 0xF01E, 
    0xEA14, 0xDC31, 0xD261, 0xD78A, 0x0000, 0x0124, 0x043D, 0x08CD, 0x0E57, 0x145F, 0x1A67, 0x1FF1, 0x2482, 0x279A, 
    0x28BE, 0x2261, 0x145F, 0x065E, 0x2B22, 0x2DC8, 0x306E, 0x2ED8, 0x2C14, 0x2B22, 0x303F, 0x34E1, 0x3023, 0x2B22, 
    0x2CCE, 0x3074, 0x3279, 0x2ECD, 0x0000, 0x0C5C, 0x2350, 0x2FAC, 0x2E8F, 0x2B84, 0x26F8, 0x2158, 0x1B14, 0x1498, 
    0x0E53, 0x08B4, 0x0428, 0x011C, 0xF078, 0xE86B, 0xE0FC, 0xE72B, 0xF13C, 0xF62C, 0xEACC, 0xDE1A, 0xE2DD, 0xE719, 
    0xDD3A, 0xCFCF, 0xCA2C, 0xDDD4, 0x0000, 0x094C, 0x1A8F, 0x23DB, 0x2305, 0x20BB, 0x1D4F, 0x1914, 0x145D, 0x0F7D, 
    0x0AC6, 0x068C, 0x0320, 0x00D6, 0x2B22, 0x34B9, 0x3FEA, 0x3637, 0x2E85, 0x2B22, 0x2FE9, 0x34E1, 0x2FA7, 0x2B22, 
    0x2FFE, 0x3786, 0x3B6F, 0x3349, 0x0000, 0xFDA1, 0xF785, 0xEF29, 0xE60F, 0xDDB3, 0xD797, 0xD538, 0xD797, 0xDDB3, 
    0xE60F, 0xEF29, 0xF785, 0xFDA1, 0xDC41, 0xD1BE, 0xC983, 0xD619, 0xE8E1, 0xF312, 0xE13D, 0xCDF5, 0xDB31, 0xEA1B, 
    0xE5CE, 0xDBC3, 0xD483, 0xD7A2, 
};

JointIndex sCarnivorousLilyPadConvulseAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0012, 0x0000, 0x0020 },
    { 0x002E, 0x0000, 0x003C },
    { 0x0000, 0x0002, 0x0000 },
    { 0x004A, 0x0000, 0x0058 },
    { 0x0066, 0x0000, 0x0074 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0082, 0x0000, 0x0090 },
    { 0x009E, 0x0000, 0x00AC },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gCarnivorousLilyPadConvulseAnim = { 
    { 14 }, sCarnivorousLilyPadConvulseAnimFrameData, sCarnivorousLilyPadConvulseAnimJointIndices, 4
};

s16 sCarnivorousLilyPadDeathAnimFrameData[] = {
    0x0000, 0x9555, 0x4000, 0xEAAB, 0x0000, 0xFE4F, 0xFA20, 0xF4CA, 0xEFA2, 0xEC00, 0xEB39, 0xEDBE, 0xF28A, 0xF8BD, 
    0xFF7B, 0x05E4, 0x0B1B, 0x0E43, 0x0F31, 0x0E9E, 0x0CFC, 0x0ABF, 0x085A, 0x0640, 0x04E4, 0x0413, 0x034F, 0x029A, 
    0x01F6, 0x0165, 0x00EA, 0x0087, 0x003D, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2B22, 0x2D16, 0x3052, 
    0x30E7, 0x2EC1, 0x2C71, 0x29FC, 0x2765, 0x24B1, 0x21E5, 0x1F06, 0x1C17, 0x191E, 0x161F, 0x131F, 0x1021, 0x0D2B, 
    0x0A42, 0x0769, 0x04A5, 0x01FC, 0x01FC, 0x03EB, 0x063E, 0x085F, 0x09B9, 0x0A21, 0x09FD, 0x0991, 0x091E, 0x08E9, 
    0x08E9, 0x08E9, 0x08E9, 0x08E9, 0x0000, 0x042E, 0x0BCD, 0x0F7C, 0x0CD8, 0x079B, 0x018B, 0xFC6D, 0xFA08, 0xFA5F, 
    0xFBFF, 0xFE7E, 0x0175, 0x047A, 0x0724, 0x090A, 0x09C3, 0x0925, 0x0782, 0x052B, 0x0271, 0xFFA6, 0xFD1A, 0xFB20, 
    0xFA09, 0xF9C3, 0xF9F6, 0xFA87, 0xFB5B, 0xFC57, 0xFD61, 0xFE5F, 0xFF35, 0xFFC9, 0x0000, 0xDE99, 0xE101, 0xE744, 
    0xEFF8, 0xF9B0, 0x0300, 0x0A7C, 0x0EB8, 0x10A5, 0x1226, 0x133F, 0x13F0, 0x143D, 0x1426, 0x13AE, 0x12D6, 0x11A2, 
    0x1011, 0x0E27, 0x0BE6, 0x094E, 0x03EF, 0xFABC, 0xEFCC, 0xE539, 0xDD1C, 0xE433, 0xE6EA, 0xE931, 0xEAC1, 0xEB56, 
    0xEA38, 0xE7C4, 0xE551, 0xE433, 0x0000, 0xFE4F, 0xFA20, 0xF4CA, 0xEFA2, 0xEC00, 0xEB39, 0xEDBE, 0xF28A, 0xF8BD, 
    0xFF7B, 0x05E4, 0x0B1B, 0x0E43, 0x0F17, 0x0E46, 0x0C5E, 0x09ED, 0x077F, 0x05A2, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 
    0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x04E4, 0x2B22, 0x2D16, 0x3052, 
    0x30E7, 0x2EC1, 0x2C71, 0x29FC, 0x2765, 0x24B1, 0x21E5, 0x1F06, 0x1C17, 0x191E, 0x161F, 0x131F, 0x1021, 0x0D2B, 
    0x0A42, 0x0769, 0x04A5, 0x01FC, 0x01FC, 0x03EB, 0x063E, 0x085F, 0x09B9, 0x0A21, 0x09FD, 0x0991, 0x091E, 0x08E9, 
    0x08E9, 0x08E9, 0x08E9, 0x08E9, 0x0000, 0x042E, 0x0BCD, 0x0F7C, 0x0CD8, 0x079B, 0x018B, 0xFC6D, 0xFA08, 0xFA5F, 
    0xFBFF, 0xFE7E, 0x0175, 0x047A, 0x0724, 0x090A, 0x09C3, 0x0925, 0x0782, 0x052B, 0x0271, 0xFFA6, 0xFD1A, 0xFB20, 
    0xFA09, 0xF9C3, 0xF9F6, 0xFA87, 0xFB5B, 0xFC57, 0xFD61, 0xFE5F, 0xFF35, 0xFFC9, 0x0000, 0xF078, 0xF20A, 0xF61F, 
    0xFBC8, 0x0217, 0x081B, 0x0CE6, 0x0F88, 0x10AF, 0x11A4, 0x1263, 0x12E5, 0x1325, 0x131D, 0x12C9, 0x1222, 0x1124, 
    0x0FC8, 0x0E09, 0x0BE3, 0x094E, 0x03E8, 0xFAB3, 0xEFC6, 0xE537, 0xDD1C, 0xE433, 0xE6EA, 0xE931, 0xEAC1, 0xEB56, 
    0xEA38, 0xE7C4, 0xE551, 0xE433, 0x0000, 0xFE4F, 0xFA20, 0xF4CA, 0xEFA2, 0xEC00, 0xEB39, 0xEDBE, 0xF28A, 0xF8BD, 
    0xFF7B, 0x05E4, 0x0B1B, 0x0E43, 0x0F31, 0x0E9E, 0x0CFC, 0x0ABF, 0x085A, 0x0640, 0x04E4, 0x0413, 0x034F, 0x029A, 
    0x01F6, 0x0165, 0x00EA, 0x0087, 0x003D, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2B22, 0x2D16, 0x3052, 
    0x30E7, 0x2EC1, 0x2C71, 0x29FC, 0x2765, 0x24B1, 0x21E5, 0x1F06, 0x1C17, 0x191E, 0x161F, 0x131F, 0x1021, 0x0D2B, 
    0x0A42, 0x0769, 0x04A5, 0x01FC, 0x01FC, 0x03EB, 0x063E, 0x085F, 0x09B9, 0x0A21, 0x09FD, 0x0991, 0x091E, 0x08E9, 
    0x08E9, 0x08E9, 0x08E9, 0x08E9, 0x0000, 0x042E, 0x0BCD, 0x0F7C, 0x0CD8, 0x079B, 0x018B, 0xFC6D, 0xFA08, 0xFA5F, 
    0xFBFF, 0xFE7E, 0x0175, 0x047A, 0x0724, 0x090A, 0x09C3, 0x0925, 0x0782, 0x052B, 0x0271, 0xFFA6, 0xFD1A, 0xFB20, 
    0xFA09, 0xF9C3, 0xF9F6, 0xFA87, 0xFB5B, 0xFC57, 0xFD61, 0xFE5F, 0xFF35, 0xFFC9, 0x0000, 0xDC41, 0xDEF9, 0xE610, 
    0xEFE6, 0xFADE, 0x0558, 0x0DB9, 0x1260, 0x145A, 0x15CB, 0x16B9, 0x172B, 0x1726, 0x16B1, 0x15D3, 0x1491, 0x12F2, 
    0x10FC, 0x0EB5, 0x0C24, 0x094E, 0x03CE, 0xFA96, 0xEFB3, 0xE531, 0xDD1C, 0xE433, 0xE6EA, 0xE931, 0xEAC1, 0xEB56, 
    0xEA38, 0xE7C4, 0xE551, 0xE433, 
};

JointIndex sCarnivorousLilyPadDeathAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0004, 0x0000, 0x0027 },
    { 0x004A, 0x0000, 0x006D },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0090, 0x0000, 0x00B3 },
    { 0x00D6, 0x0000, 0x00F9 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x011C, 0x0000, 0x013F },
    { 0x0162, 0x0000, 0x0185 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gCarnivorousLilyPadDeathAnim = { 
    { 35 }, sCarnivorousLilyPadDeathAnimFrameData, sCarnivorousLilyPadDeathAnimJointIndices, 4
};

s16 sCarnivorousLilyPadSpitAnimFrameData[] = {
    0x0000, 0x1069, 0x1052, 0x100F, 0x0FA3, 0x0F0D, 0x0E50, 0x0D6D, 0x0C65, 0x0B3D, 0x09FB, 0x08A5, 0x0744, 0x05E4, 
    0x0490, 0x0353, 0x023A, 0x014E, 0x009A, 0x0028, 0x0000, 0x8E06, 0x8E21, 0x8E6E, 0x8EE4, 0x8F7B, 0x9029, 0x90E5, 
    0x91A4, 0x925F, 0x930D, 0x93A8, 0x942B, 0x9494, 0x94E2, 0x9519, 0x953A, 0x954C, 0x9553, 0x9555, 0x9555, 0xDB4B, 
    0xDB8F, 0xDC51, 0xDD86, 0xDF1F, 0xE112, 0xE352, 0xE5D3, 0xE887, 0xEB5F, 0xEE4B, 0xF139, 0xF417, 0xF6D1, 0xF953, 
    0xFB8B, 0xFD63, 0xFECB, 0xFFB0, 0x0000, 0x1B3E, 0x1800, 0x1009, 0x0603, 0xFC97, 0xF66B, 0xF62A, 0x1796, 0x37F0, 
    0x3809, 0x35C5, 0x31A4, 0x2C24, 0x25C4, 0x1F03, 0x1861, 0x125A, 0x0D70, 0x0A20, 0x08E9, 0xF0D5, 0xF620, 0x0359, 
    0x1482, 0x259D, 0x32AC, 0x37B2, 0x1364, 0xEE39, 0xEFDC, 0xF760, 0x027B, 0x0EE4, 0x1A54, 0x2280, 0x2520, 0x1A78, 
    0x0435, 0xEE2C, 0xE433, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0x1E2F, 0x1E74, 0x1F3A, 0x2072, 0x220C, 
    0x23FA, 0x262C, 0x2892, 0x2B1F, 0x2DC2, 0x306D, 0x3310, 0x359D, 0x3803, 0x3A35, 0x3C22, 0x3DBD, 0x3EF4, 0x3FBB, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0x1B3E, 0x1800, 0x1009, 0x0603, 0xFC97, 0xF66B, 0xF62A, 
    0x1796, 0x37F0, 0x3809, 0x35C5, 0x31A4, 0x2C24, 0x25C4, 0x1F03, 0x1861, 0x125A, 0x0D70, 0x0A20, 0x08E9, 0xF0D5, 
    0xF620, 0x0359, 0x1482, 0x259D, 0x32AC, 0x37B2, 0x1364, 0xEE39, 0xEFDC, 0xF760, 0x027B, 0x0EE4, 0x1A54, 0x2280, 
    0x2520, 0x1A78, 0x0435, 0xEE2C, 0xE433, 0xEF97, 0xEFAE, 0xEFF1, 0xF05D, 0xF0F3, 0xF1B0, 0xF293, 0xF39B, 0xF4C3, 
    0xF605, 0xF75B, 0xF8BC, 0xFA1C, 0xFB70, 0xFCAD, 0xFDC6, 0xFEB2, 0xFF66, 0xFFD8, 0x0000, 0xF1FA, 0xF1DF, 0xF192, 
    0xF11C, 0xF085, 0xEFD7, 0xEF1B, 0xEE5C, 0xEDA1, 0xECF3, 0xEC58, 0xEBD5, 0xEB6C, 0xEB1E, 0xEAE7, 0xEAC6, 0xEAB4, 
    0xEAAD, 0xEAAB, 0xEAAB, 0x24B5, 0x2471, 0x23AF, 0x227A, 0x20E1, 0x1EEE, 0x1CAE, 0x1A2D, 0x1779, 0x14A1, 0x11B5, 
    0x0EC7, 0x0BE9, 0x092F, 0x06AD, 0x0475, 0x029D, 0x0135, 0x0050, 0x0000, 0x1B3E, 0x1800, 0x1009, 0x0603, 0xFC97, 
    0xF66B, 0xF62A, 0x1796, 0x37F0, 0x3809, 0x35C5, 0x31A4, 0x2C24, 0x25C4, 0x1F03, 0x1861, 0x125A, 0x0D70, 0x0A20, 
    0x08E9, 0xF0D5, 0xF620, 0x0359, 0x1482, 0x259D, 0x32AC, 0x37B2, 0x1364, 0xEE39, 0xEFDC, 0xF760, 0x027B, 0x0EE4, 
    0x1A54, 0x2280, 0x2520, 0x1A78, 0x0435, 0xEE2C, 0xE433, 0x0000, 
};

JointIndex sCarnivorousLilyPadSpitAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0015, 0x0029 },
    { 0x0000, 0x0000, 0x003D },
    { 0x0000, 0x0000, 0x0051 },
    { 0x0065, 0x0079, 0x008D },
    { 0x0000, 0x0000, 0x00A1 },
    { 0x0000, 0x0000, 0x00B5 },
    { 0x00C9, 0x00DD, 0x00F1 },
    { 0x0000, 0x0000, 0x0105 },
    { 0x0000, 0x0000, 0x0119 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gCarnivorousLilyPadSpitAnim = { 
    { 20 }, sCarnivorousLilyPadSpitAnimFrameData,
    sCarnivorousLilyPadSpitAnimJointIndices, 1
};

s16 sCarnivorousLilyPadChewAnimFrameData[] = {
    0x0000, 0x1069, 0x8E06, 0xDB4B, 0x4000, 0x1E2F, 0xEF97, 0xF1FA, 0x24B5, 0x1014, 0x0C2B, 0x0E86, 0x13B5, 0x18E3, 
    0x1B3E, 0x1756, 0x0812, 0x1034, 0x0B4D, 0x0084, 0xF5BC, 0xF0D5, 0xF8F7, 0x1B3E, 0x1756, 0x1014, 0x0C2B, 0x0E86, 
    0x13B5, 0x18E3, 0xF0D5, 0xF8F7, 0x0812, 0x1034, 0x0B4D, 0x0084, 0xF5BC, 0x0E86, 0x13B5, 0x18E3, 0x1B3E, 0x1756, 
    0x1014, 0x0C2B, 0x0B4D, 0x0084, 0xF5BC, 0xF0D5, 0xF8F7, 0x0812, 0x1034, 0x0000, 
};

JointIndex sCarnivorousLilyPadChewAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0009 },
    { 0x0000, 0x0000, 0x0010 },
    { 0x0004, 0x0005, 0x0004 },
    { 0x0000, 0x0000, 0x0017 },
    { 0x0000, 0x0000, 0x001E },
    { 0x0006, 0x0007, 0x0008 },
    { 0x0000, 0x0000, 0x0025 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gCarnivorousLilyPadChewAnim = { 
    { 7 }, sCarnivorousLilyPadChewAnimFrameData, sCarnivorousLilyPadChewAnimJointIndices, 9
};

s16 sCarnivorousLilyPadCloseAnimFrameData[] = {
    0x0000, 0x0000, 0x0115, 0x03D8, 0x0777, 0x0B11, 0x0DF4, 0x0FC6, 0x1069, 0x9555, 0x954F, 0x9504, 0x941A, 0x9279, 
    0x9078, 0x8EBF, 0x8E06, 0x0000, 0xFDD6, 0xF848, 0xF0CE, 0xE8ED, 0xE200, 0xDD23, 0xDB4B, 0x08E9, 0xFEED, 0x0A95, 
    0x165B, 0x19C6, 0x1B29, 0x1B5D, 0x1B3E, 0xE433, 0xF276, 0xE0CA, 0xC9D8, 0xBE4F, 0xCB49, 0xE3AC, 0xF0D5, 0x0000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x3E20, 0x394C, 0x32B1, 0x2B7E, 0x24E3, 0x200E, 
    0x1E2F, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x08E9, 0xFEED, 0x0A95, 0x165B, 0x19C6, 
    0x1B29, 0x1B5D, 0x1B3E, 0xE433, 0xF276, 0xE0CA, 0xC9D8, 0xBE4F, 0xCB49, 0xE3AC, 0xF0D5, 0x0000, 0xFEEB, 0xFC28, 
    0xF889, 0xF4EF, 0xF20C, 0xF03A, 0xEF97, 0xEAAB, 0xEAB1, 0xEAFC, 0xEBE6, 0xED87, 0xEF88, 0xF141, 0xF1FA, 0x0000, 
    0x022A, 0x07B8, 0x0F32, 0x1713, 0x1E00, 0x22DD, 0x24B5, 0x08E9, 0xFEED, 0x0A95, 0x165B, 0x19C6, 0x1B29, 0x1B5D, 
    0x1B3E, 0xE433, 0xF276, 0xE0CA, 0xC9D8, 0xBE4F, 0xCB49, 0xE3AC, 0xF0D5, 0x0000, 
};

JointIndex sCarnivorousLilyPadCloseAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0009, 0x0011 },
    { 0x0000, 0x0000, 0x0019 },
    { 0x0000, 0x0000, 0x0021 },
    { 0x0029, 0x0031, 0x0039 },
    { 0x0000, 0x0000, 0x0041 },
    { 0x0000, 0x0000, 0x0049 },
    { 0x0051, 0x0059, 0x0061 },
    { 0x0000, 0x0000, 0x0069 },
    { 0x0000, 0x0000, 0x0071 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gCarnivorousLilyPadCloseAnim = { 
    { 8 }, sCarnivorousLilyPadCloseAnimFrameData, sCarnivorousLilyPadCloseAnimJointIndices, 1
};

StandardLimb gCarnivorousLilyPadFlowerLimb = { 
    { 0, 0, 0 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_LOWER_SEGMENT - 1, LIMB_DONE, gCarnivorousLilyPadFlowerDL
};

StandardLimb gCarnivorousLilyPadTrap1LowerSegmentLimb = { 
    { -1819, 1000, 1050 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_MIDDLE_SEGMENT - 1, CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_LOWER_SEGMENT - 1, gCarnivorousLilyPadTrap1LowerSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap1MiddleSegmentLimb = { 
    { 600, 0, 0 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_UPPER_SEGMENT - 1, LIMB_DONE, gCarnivorousLilyPadTrap1MiddleSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap1UpperSegmentLimb = { 
    { 1844, 0, 0 }, LIMB_DONE, LIMB_DONE, gCarnivorousLilyPadTrap1UpperSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap2LowerSegmentLimb = { 
    { 0, 1000, -2100 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_MIDDLE_SEGMENT - 1, CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_LOWER_SEGMENT - 1, gCarnivorousLilyPadTrap2LowerSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap2MiddleSegmentLimb = { 
    { 600, 0, 0 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_UPPER_SEGMENT - 1, LIMB_DONE, gCarnivorousLilyPadTrap2MiddleSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap2UpperSegmentLimb = { 
    { 1844, 0, 0 }, LIMB_DONE, LIMB_DONE, gCarnivorousLilyPadTrap2UpperSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap3LowerSegmentLimb = { 
    { 1819, 1000, 1050 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_MIDDLE_SEGMENT - 1, CARNIVOROUS_LILY_PAD_LIMB_ROOTS - 1, gCarnivorousLilyPadTrap3LowerSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap3MiddleSegmentLimb = { 
    { 600, 0, 0 }, CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_UPPER_SEGMENT - 1, LIMB_DONE, gCarnivorousLilyPadTrap3MiddleSegmentDL
};

StandardLimb gCarnivorousLilyPadTrap3UpperSegmentLimb = { 
    { 1844, 0, 0 }, LIMB_DONE, LIMB_DONE, gCarnivorousLilyPadTrap3UpperSegmentDL
};

StandardLimb gCarnivorousLilyPadRootsLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE, gCarnivorousLilyPadRootsDL
};

void* gCarnivorousLilyPadSkelLimbs[] = {
    &gCarnivorousLilyPadFlowerLimb, /* CARNIVOROUS_LILY_PAD_LIMB_FLOWER */
    &gCarnivorousLilyPadTrap1LowerSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_LOWER_SEGMENT */
    &gCarnivorousLilyPadTrap1MiddleSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_MIDDLE_SEGMENT */
    &gCarnivorousLilyPadTrap1UpperSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_UPPER_SEGMENT */
    &gCarnivorousLilyPadTrap2LowerSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_LOWER_SEGMENT */
    &gCarnivorousLilyPadTrap2MiddleSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_MIDDLE_SEGMENT */
    &gCarnivorousLilyPadTrap2UpperSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_UPPER_SEGMENT */
    &gCarnivorousLilyPadTrap3LowerSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_LOWER_SEGMENT */
    &gCarnivorousLilyPadTrap3MiddleSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_MIDDLE_SEGMENT */
    &gCarnivorousLilyPadTrap3UpperSegmentLimb, /* CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_UPPER_SEGMENT */
    &gCarnivorousLilyPadRootsLimb, /* CARNIVOROUS_LILY_PAD_LIMB_ROOTS */
};

FlexSkeletonHeader gCarnivorousLilyPadSkel = { 
    { gCarnivorousLilyPadSkelLimbs, ARRAY_COUNT(gCarnivorousLilyPadSkelLimbs) }, 11
};
