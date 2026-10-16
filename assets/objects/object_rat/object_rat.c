#include "object_rat.h"

#include "array_count.h"
#include "gfx.h"

Vtx object_ratVtx_000280[] = {
#include "assets/objects/object_rat/object_ratVtx_000280.vtx.inc"
};

u64 gRealBombchuSkinTex[] = {
#include "assets/objects/object_rat/real_bombchu_skin.rgba16.inc.c"
};

u64 gRealBombchuMouthTex[] = {
#include "assets/objects/object_rat/real_bombchu_mouth.rgba16.inc.c"
};

u64 gRealBombchuEyeTex[] = {
#include "assets/objects/object_rat/real_bombchu_eye.rgba16.inc.c"
};

Gfx gRealBombchuBodyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_ratVtx_000280, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(1, 5, 6, 0, 3, 7, 8, 0),
    gsSP2Triangles(2, 8, 0, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 9, 8, 0, 7, 11, 8, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 5, 0),
    gsSP2Triangles(14, 6, 4, 0, 1, 6, 14, 0),
    gsSP2Triangles(11, 7, 4, 0, 11, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 7, 3, 0),
    gsSP1Triangle(4, 2, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuBackRightLegDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[119], 3, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ratVtx_000280[122], 3, 3),
    gsSP2Triangles(0, 3, 1, 0, 4, 2, 1, 0),
    gsSP1Triangle(2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuFrontRightLegDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[113], 3, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ratVtx_000280[116], 3, 3),
    gsSP2Triangles(1, 3, 0, 0, 4, 2, 0, 0),
    gsSP1Triangle(1, 2, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuBackLeftLegDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[107], 3, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ratVtx_000280[110], 3, 3),
    gsSP2Triangles(2, 3, 0, 0, 4, 1, 0, 0),
    gsSP1Triangle(2, 1, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuFrontLeftLegDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[101], 3, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ratVtx_000280[104], 3, 3),
    gsSP2Triangles(3, 1, 0, 0, 0, 2, 4, 0),
    gsSP1Triangle(2, 1, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuTailBaseDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 52, 0, 31, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[97], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuTailMiddleDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[94], 2, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 52, 0, 31, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[96], 1, 2),
    gsSP1Triangle(1, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuTailEndDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 0, 0, 188, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[91], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gRealBombchuHeadDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[15], 13, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ratVtx_000280[28], 18, 13),
    gsSP2Triangles(1, 13, 14, 0, 2, 15, 11, 0),
    gsSP2Triangles(3, 16, 1, 0, 17, 0, 5, 0),
    gsSP2Triangles(18, 5, 19, 0, 20, 21, 2, 0),
    gsSP2Triangles(22, 6, 7, 0, 23, 7, 24, 0),
    gsSP2Triangles(25, 26, 6, 0, 0, 27, 28, 0),
    gsSP1Triangle(29, 9, 30, 0),
    gsSPVertex(&object_ratVtx_000280[46], 17, 13),
    gsSP1Triangle(9, 0, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRealBombchuMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(10, 14, 15, 0, 10, 16, 4, 0),
    gsSP2Triangles(12, 17, 8, 0, 18, 19, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(20, 22, 24, 0, 20, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP2Triangles(29, 25, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&object_ratVtx_000280[63], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 1, 5, 0, 2, 1, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRealBombchuMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(8, 12, 13, 0, 13, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTextureBlock(gRealBombchuEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[77], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 9, 8, 0, 5, 7, 9, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTextureBlock(gRealBombchuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ratVtx_000280[87], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

StandardLimb gRealBombchuBodyLimb = { 
    { 0, 700, 0 }, REAL_BOMBCHU_LIMB_HEAD - 1, LIMB_DONE, gRealBombchuBodyDL
};

StandardLimb gRealBombchuHeadLimb = { 
    { -750, 0, 0 }, LIMB_DONE, REAL_BOMBCHU_LIMB_TAIL_BASE - 1, gRealBombchuHeadDL
};

StandardLimb gRealBombchuTailBaseLimb = { 
    { 650, 400, 0 }, REAL_BOMBCHU_LIMB_TAIL_MIDDLE - 1, REAL_BOMBCHU_LIMB_FRONT_LEFT_LEG - 1, gRealBombchuTailBaseDL
};

StandardLimb gRealBombchuTailMiddleLimb = { 
    { 1350, 0, 0 }, REAL_BOMBCHU_LIMB_TAIL_END - 1, LIMB_DONE, gRealBombchuTailMiddleDL
};

StandardLimb gRealBombchuTailEndLimb = { 
    { 1900, 0, 0 }, LIMB_DONE, LIMB_DONE, gRealBombchuTailEndDL
};

StandardLimb gRealBombchuFrontLeftLegLimb = { 
    { -450, -400, 650 }, LIMB_DONE, REAL_BOMBCHU_LIMB_BACK_LEFT_LEG - 1, gRealBombchuFrontLeftLegDL
};

StandardLimb gRealBombchuBackLeftLegLimb = { 
    { 650, -100, 900 }, LIMB_DONE, REAL_BOMBCHU_LIMB_FRONT_RIGHT_LEG - 1, gRealBombchuBackLeftLegDL
};

StandardLimb gRealBombchuFrontRightLegLimb = { 
    { -450, -400, -650 }, LIMB_DONE, REAL_BOMBCHU_LIMB_BACK_RIGHT_LEG - 1, gRealBombchuFrontRightLegDL
};

StandardLimb gRealBombchuBackRightLegLimb = { 
    { 650, -100, -900 }, LIMB_DONE, LIMB_DONE, gRealBombchuBackRightLegDL
};

void* gRealBombchuSkelLimbs[] = {
    &gRealBombchuBodyLimb,
    &gRealBombchuHeadLimb,
    &gRealBombchuTailBaseLimb,
    &gRealBombchuTailMiddleLimb,
    &gRealBombchuTailEndLimb,
    &gRealBombchuFrontLeftLegLimb,
    &gRealBombchuBackLeftLegLimb,
    &gRealBombchuFrontRightLegLimb,
    &gRealBombchuBackRightLegLimb,
};

FlexSkeletonHeader gRealBombchuSkel = { 
    { gRealBombchuSkelLimbs, ARRAY_COUNT(gRealBombchuSkelLimbs) }, 9
};

s16 sRealBombchuSpotAnimFrameData[] = {
    0x0000, 0x0514, 0xC000, 0x0514, 0x0489, 0x047E, 0x063B, 0x086F, 0x0992, 0x0873, 0x0644, 0x0514, 0x0625, 0x0DD8, 
    0x14D0, 0x0F00, 0x0546, 0xFECF, 0xFFA0, 0x03B3, 0x0625, 0xBAAC, 0xAABF, 0x9DBE, 0xAD18, 0xC4D2, 0xD4F3, 0xBD4B, 
    0xB9CB, 0xBAAC, 0x4163, 0x3853, 0x27A7, 0x1F2A, 0x313B, 0x45B7, 0x483F, 0x4667, 0x4322, 0x2E73, 0x3641, 0x3BE5, 
    0x2BA6, 0x1D1C, 0x2991, 0x3837, 0x3739, 0x31C0, 0x0DC2, 0x0FBE, 0x1478, 0x1A1C, 0x1ED6, 0x20D2, 0x1BE1, 0x12B3, 
    0x0DC2, 0x139E, 0x0D5D, 0xFE73, 0xECA6, 0xDDBC, 0xD77A, 0xE712, 0x0407, 0x139E, 0xEA42, 0xE2CE, 0xD109, 0xBBD3, 
    0xAA0D, 0xA299, 0xB52D, 0xD7AE, 0xEA42, 0xF936, 0xF51B, 0xF358, 0xFC34, 0x07EF, 0x0E51, 0x0948, 0xFEE6, 0xF936, 
    0x0CD7, 0x142C, 0x1739, 0x071F, 0xF1DC, 0xE650, 0xEF89, 0x0278, 0x0CD7, 0xF932, 0xEC90, 0xD953, 0xCB1B, 0xBF91, 
    0xBDB5, 0xCF7D, 0xEAF4, 0xF932, 0x0170, 0x14F1, 0x4374, 0xFAF8, 0x297B, 0x3CFD, 0x0C5D, 0x320F, 0x0170, 0xE91F, 
    0xEFCC, 0xFFB6, 0x6D4C, 0x5D62, 0x56B6, 0x6759, 0xF9C2, 0xE91F, 0xDC6A, 0xF002, 0x1EB9, 0xD67B, 0x0532, 0x18CA, 
    0xE7F3, 0x0D41, 0xDC6A, 0x056F, 0x09B8, 0x0C56, 0x056E, 0xFBE1, 0xF66E, 0xF9CF, 0x014A, 0x056F, 0xF2DA, 0xEABD, 
    0xE6CD, 0xF6F0, 0x0C89, 0x1871, 0x0F97, 0xFD0B, 0xF2DA, 0xF914, 0xEC33, 0xD91B, 0xCC31, 0xC23D, 0xC129, 0xD206, 
    0xEBC4, 0xF914, 
};

JointIndex sRealBombchuSpotAnimJointIndices[] = {
    { 0x0000, 0x0003, 0x0000 },
    { 0x0002, 0x000C, 0x0002 },
    { 0x0000, 0x0000, 0x0015 },
    { 0x0000, 0x0000, 0x001E },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0030, 0x0039, 0x0042 },
    { 0x004B, 0x0054, 0x005D },
    { 0x0066, 0x006F, 0x0078 },
    { 0x0081, 0x008A, 0x0093 },
};

AnimationHeader gRealBombchuSpotAnim = { 
    { 9 }, sRealBombchuSpotAnimFrameData, sRealBombchuSpotAnimJointIndices, 3
};

s16 sRealBombchuRunAnimFrameData[] = {
    0x0000, 0x02BC, 0x02BC, 0x02BC, 0x0418, 0x0514, 0x04B0, 0x03D0, 0x0000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 
    0x4000, 0x35B5, 0x2D42, 0x3790, 0x3854, 0x2D88, 0x0000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x8000, 0x899F, 
    0x9104, 0x85C0, 0x74B9, 0x69BD, 0x1771, 0x173A, 0x16D3, 0x169C, 0x16D3, 0x173A, 0x1183, 0x2169, 0x1183, 0xF3FB, 
    0xE415, 0xF3FB, 0xD139, 0xDB55, 0xB6A3, 0x9649, 0x9B3E, 0xAF80, 0x1530, 0x0F7C, 0xE6BD, 0xEB6E, 0xF8AE, 0x0697, 
    0xC000, 0xCD0A, 0xE9D3, 0xD90F, 0xC026, 0xADA4, 0xD4DC, 0xE477, 0xB723, 0x8EC9, 0x95A1, 0xAEDA, 0x0000, 0xF084, 
    0x1185, 0x0BE6, 0xFF3D, 0xF5D0, 0xC000, 0xC1A1, 0xE0AE, 0xCE5E, 0xB358, 0xA105, 
};

JointIndex sRealBombchuRunAnimJointIndices[] = {
    { 0x0000, 0x0002, 0x0000 },
    { 0x0008, 0x000E, 0x0014 },
    { 0x0000, 0x0000, 0x001A },
    { 0x0000, 0x0000, 0x0020 },
    { 0x0000, 0x0000, 0x0026 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x0032, 0x0038 },
    { 0x0000, 0x0000, 0x003E },
    { 0x0000, 0x0044, 0x004A },
};

AnimationHeader gRealBombchuRunAnim = { 
    { 6 }, sRealBombchuRunAnimFrameData, sRealBombchuRunAnimJointIndices, 2
};
