#include "object_wiz.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_wizVtx_000E40[] = {
#include "assets/objects/object_wiz/object_wizVtx_000E40.vtx.inc"
};

Vtx object_wizVtx_001000[] = {
#include "assets/objects/object_wiz/object_wizVtx_001000.vtx.inc"
};

Vtx object_wizVtx_0016C0[] = {
#include "assets/objects/object_wiz/object_wizVtx_0016C0.vtx.inc"
};

Vtx object_wizVtx_002600[] = {
#include "assets/objects/object_wiz/object_wizVtx_002600.vtx.inc"
};

Vtx object_wizVtx_002B10[] = {
#include "assets/objects/object_wiz/object_wizVtx_002B10.vtx.inc"
};

Vtx object_wizVtx_003000[] = {
#include "assets/objects/object_wiz/object_wizVtx_003000.vtx.inc"
};

Vtx object_wizVtx_0035E0[] = {
#include "assets/objects/object_wiz/object_wizVtx_0035E0.vtx.inc"
};

Vtx object_wizVtx_003F00[] = {
#include "assets/objects/object_wiz/object_wizVtx_003F00.vtx.inc"
};

Vtx object_wizVtx_0050F0[] = {
#include "assets/objects/object_wiz/object_wizVtx_0050F0.vtx.inc"
};

Vtx object_wizVtx_0056B0[] = {
#include "assets/objects/object_wiz/object_wizVtx_0056B0.vtx.inc"
};

Vtx object_wizVtx_005830[] = {
#include "assets/objects/object_wiz/object_wizVtx_005830.vtx.inc"
};

Vtx object_wizVtx_0066D0[] = {
#include "assets/objects/object_wiz/object_wizVtx_0066D0.vtx.inc"
};

u64 gWizrobeIceSmokeTex[] = {
#include "assets/objects/object_wiz/wizrobe_ice_smoke.i4.inc.c"
};

u64 gWizrobeIceSmokeMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_ice_smoke_mask.i4.inc.c"
};

u64 gWizrobePlatformTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform.rgba16.inc.c"
};

u64 gWizrobePlatformLightMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform_light_mask.i4.inc.c"
};

u64 gWizrobePlatformLightBaseTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform_light_base.i4.inc.c"
};

u64 gWizrobePlatformLightRaysTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform_light_rays.i8.inc.c"
};

u64 gWizrobeSmallFlameTex[] = {
#include "assets/objects/object_wiz/wizrobe_small_flame.i4.inc.c"
};

u64 gWizrobeSmallFlameMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_small_flame_mask.i4.inc.c"
};

u64 gWizrobeMagicProjectileTex[] = {
#include "assets/objects/object_wiz/wizrobe_magic_projectile.i4.inc.c"
};

u64 gWizrobeFirePoolTex[] = {
#include "assets/objects/object_wiz/wizrobe_fire_pool.i4.inc.c"
};

u64 gWizrobeFireSmokeTex[] = {
#include "assets/objects/object_wiz/wizrobe_fire_smoke.i4.inc.c"
};

u64 gWizrobeBigFlameTex[] = {
#include "assets/objects/object_wiz/wizrobe_big_flame.i8.inc.c"
};

u64 gWizrobeBigFlameMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_big_flame_mask.i4.inc.c"
};

u64 gWizrobeIcePoolTex[] = {
#include "assets/objects/object_wiz/wizrobe_ice_pool.i8.inc.c"
};

u64 gWizrobeIcePoolShineTex[] = {
#include "assets/objects/object_wiz/wizrobe_ice_pool_shine.i4.inc.c"
};

u64 gWizrobeIcePoolShineMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_ice_pool_shine_mask.i4.inc.c"
};

u64 gWizrobePlatformCenterMaskTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform_center_mask.i4.inc.c"
};

u64 gWizrobePlatformCenterTex[] = {
#include "assets/objects/object_wiz/wizrobe_platform_center.i4.inc.c"
};

u64 gWizrobeFaceSkinTex[] = {
#include "assets/objects/object_wiz/wizrobe_face_skin.rgba16.inc.c"
};

u64 gWizrobeRobeTex[] = {
#include "assets/objects/object_wiz/wizrobe_robe.rgba16.inc.c"
};

u64 gWizrobeHairTex[] = {
#include "assets/objects/object_wiz/wizrobe_hair.rgba16.inc.c"
};

u64 gWizrobeEyeOrbitTex[] = {
#include "assets/objects/object_wiz/wizrobe_eye_orbit.rgba16.inc.c"
};

u64 gWizrobeEyeTex[] = {
#include "assets/objects/object_wiz/wizrobe_eye.rgba16.inc.c"
};

u64 gWizrobeLowerLipTex[] = {
#include "assets/objects/object_wiz/wizrobe_lower_lip.rgba16.inc.c"
};

u64 gWizrobeNoseTex[] = {
#include "assets/objects/object_wiz/wizrobe_nose.rgba16.inc.c"
};

u64 gWizrobeEarTex[] = {
#include "assets/objects/object_wiz/wizrobe_ear.rgba16.inc.c"
};

u64 gWizrobeStaffTipTex[] = {
#include "assets/objects/object_wiz/wizrobe_staff_tip.rgba16.inc.c"
};

u64 gWizrobeStaffTex[] = {
#include "assets/objects/object_wiz/wizrobe_staff.rgba16.inc.c"
};

u64 gWizrobeBandTex[] = {
#include "assets/objects/object_wiz/wizrobe_band.rgba16.inc.c"
};

u64 gWizrobeFootTex[] = {
#include "assets/objects/object_wiz/wizrobe_foot.rgba16.inc.c"
};

Gfx gWizrobeIceSmokeMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gWizrobeIceSmokeTex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(gWizrobeIceSmokeMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetEnvColor(255, 255, 255, 128),
    gsSPEndDisplayList(),
};

Gfx gWizrobeIceSmokeModelDL[] = {
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_wizVtx_000E40, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobePlatformDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobePlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_001000, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 6, 0),
    gsSP2Triangles(7, 8, 5, 0, 7, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(2, 1, 8, 0, 1, 5, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobePlatformLightDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gWizrobePlatformLightBaseTex, G_IM_FMT_I, 16, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gWizrobePlatformLightMaskTex, 0x0020, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_0016C0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 9, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL1, PRIM_LOD_FRAC, TEXEL0, TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_INTER2),
    gsDPLoadTextureBlock(gWizrobePlatformLightRaysTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gWizrobePlatformLightMaskTex, 0x0080, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 15),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0016C0[18], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeSmallFlameDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, TEXEL1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gWizrobeSmallFlameTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gWizrobeSmallFlameMaskTex, 0x0040, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x08000000),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_002600, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gWizrobeMagicProjectileDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gWizrobeMagicProjectileTex, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_002B10, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gWizrobeFirePoolDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gWizrobeFirePoolTex, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, 1, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, 0, ENV_ALPHA, TEXEL0, TEXEL0, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_wizVtx_003000, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 7, 13, 0, 11, 4, 14, 0),
    gsSP2Triangles(8, 1, 15, 0, 5, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeFireSmokeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gWizrobeFireSmokeTex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 6, 15, G_TX_NOMIRROR | G_TX_WRAP, 5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x00FC),
    gsDPSetCombineLERP(TEXEL1, 0, ENV_ALPHA, TEXEL0, TEXEL1, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_wizVtx_0035E0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 4, 0, 2, 1, 5, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeBigFlameDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWizrobeBigFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gWizrobeBigFlameMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, 15),
    gsDPSetCombineLERP(TEXEL1, 0, ENV_ALPHA, TEXEL0, TEXEL0, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_wizVtx_003F00, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 3, 6, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSPVertex(&object_wizVtx_003F00[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeIcePoolDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWizrobeIcePoolTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, COMBINED, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPVertex(object_wizVtx_0050F0, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeIcePoolShineDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gWizrobeIcePoolShineTex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 2, 3),
    gsDPLoadMultiBlock_4b(gWizrobeIcePoolShineMaskTex, 0x0100, 1, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 2, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL1, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_wizVtx_0056B0, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 8, 6, 0, 0, 2, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobePlatformCenterDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gWizrobePlatformCenterTex, G_IM_FMT_I, 16, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gWizrobePlatformCenterMaskTex, 0x0020, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_005830, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobePelvisDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[493], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 0, 7, 0),
    gsSP2Triangles(8, 5, 6, 0, 6, 9, 8, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 8, 4, 0),
    gsSP2Triangles(7, 9, 6, 0, 2, 7, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightThighDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[440], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 2, 4, 0, 2, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightShinDL[] = {
    gsSPMatrix(0x0D000400, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[421], 3, 0),
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[424], 16, 3),
    gsSP2Triangles(3, 4, 0, 0, 0, 1, 5, 0),
    gsSP2Triangles(6, 2, 0, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 2, 10, 0, 11, 1, 12, 0),
    gsSP1Triangle(1, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 18, 0),
    gsSP1Triangle(15, 17, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightFootDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[403], 3, 0),
    gsSPMatrix(0x0D000480, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeFootTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[406], 15, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 1, 0),
    gsSP2Triangles(7, 0, 2, 0, 2, 8, 9, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 0, 12, 0),
    gsSP1Triangle(13, 2, 1, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftThighDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[483], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 4, 3, 0, 3, 2, 1, 0),
    gsSP2Triangles(2, 3, 5, 0, 2, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftShinDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[464], 3, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[467], 16, 3),
    gsSP2Triangles(3, 0, 1, 0, 4, 1, 5, 0),
    gsSP2Triangles(2, 0, 6, 0, 7, 1, 2, 0),
    gsSP2Triangles(8, 0, 9, 0, 2, 10, 11, 0),
    gsSP1Triangle(1, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 16, 15, 0),
    gsSP1Triangle(14, 16, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftFootDL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[446], 3, 0),
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeFootTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[449], 15, 3),
    gsSP2Triangles(0, 1, 3, 0, 4, 2, 0, 0),
    gsSP2Triangles(5, 6, 0, 0, 7, 8, 1, 0),
    gsSP2Triangles(1, 2, 9, 0, 0, 10, 11, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLoinclothDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[489], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeTorsoDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[381], 5, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[386], 17, 5),
    gsSP2Triangles(5, 0, 6, 0, 1, 7, 8, 0),
    gsSP2Triangles(0, 2, 9, 0, 10, 3, 1, 0),
    gsSP2Triangles(4, 3, 11, 0, 3, 12, 13, 0),
    gsSP2Triangles(14, 1, 0, 0, 15, 2, 4, 0),
    gsSP2Triangles(16, 17, 2, 0, 18, 19, 4, 0),
    gsSP1Triangle(4, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeNeckDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[198], 6, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[204], 24, 6),
    gsSP2Triangles(6, 7, 0, 0, 1, 0, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 2, 1, 11, 0),
    gsSP2Triangles(12, 3, 2, 0, 0, 4, 13, 0),
    gsSP2Triangles(5, 3, 14, 0, 15, 4, 5, 0),
    gsSP1Triangle(4, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP1Triangle(21, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wizVtx_0066D0[228], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(17, 14, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 19, 18, 21, 0),
    gsSP2Triangles(20, 21, 18, 0, 22, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeFaceSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeJawDL[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[110], 14, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeLowerLipTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[124], 16, 14),
    gsSP2Triangles(14, 15, 8, 0, 16, 9, 17, 0),
    gsSP2Triangles(10, 18, 19, 0, 20, 11, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeFaceSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(22, 0, 12, 0, 1, 23, 6, 0),
    gsSP2Triangles(24, 1, 0, 0, 25, 0, 26, 0),
    gsSP2Triangles(2, 4, 27, 0, 28, 29, 2, 0),
    gsSPVertex(&object_wizVtx_0066D0[140], 16, 14),
    gsSP2Triangles(14, 15, 3, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 13, 3, 0, 19, 20, 5, 0),
    gsSP2Triangles(5, 7, 21, 0, 7, 22, 23, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTextureBlock(gWizrobeLowerLipTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[156], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeFaceSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(17, 12, 11, 0, 19, 17, 11, 0),
    gsSP2Triangles(19, 18, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 20, 22, 0, 23, 24, 20, 0),
    gsSP2Triangles(24, 21, 20, 0, 24, 23, 25, 0),
    gsSPVertex(&object_wizVtx_0066D0[182], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(9, 6, 8, 0, 11, 10, 9, 0),
    gsSP2Triangles(6, 10, 7, 0, 9, 8, 11, 0),
    gsSP2Triangles(7, 11, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 7, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(14, 7, 15, 0, 13, 15, 10, 0),
    gsSP2Triangles(10, 15, 7, 0, 10, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeHeadDL[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_wizVtx_0066D0, 15, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeFaceSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[15], 16, 15),
    gsSP2Triangles(15, 6, 16, 0, 17, 6, 18, 0),
    gsSP2Triangles(19, 0, 20, 0, 2, 13, 21, 0),
    gsSP2Triangles(22, 13, 9, 0, 9, 23, 24, 0),
    gsSP2Triangles(9, 25, 26, 0, 27, 14, 4, 0),
    gsSP2Triangles(6, 14, 28, 0, 29, 30, 7, 0),
    gsSPVertex(&object_wizVtx_0066D0[31], 8, 15),
    gsSP2Triangles(15, 16, 7, 0, 10, 17, 18, 0),
    gsSP1Triangle(10, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeRobeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(12, 8, 21, 0, 22, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeEyeOrbitTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wizVtx_0066D0[39], 10, 15),
    gsSP2Triangles(15, 16, 5, 0, 1, 17, 5, 0),
    gsSP2Triangles(18, 1, 19, 0, 20, 1, 21, 0),
    gsSP2Triangles(3, 22, 1, 0, 3, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeFaceSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wizVtx_0066D0[49], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(2, 8, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 2, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(9, 7, 14, 0, 10, 9, 14, 0),
    gsSP2Triangles(9, 5, 7, 0, 11, 5, 9, 0),
    gsSP2Triangles(3, 0, 15, 0, 0, 8, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 21, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wizVtx_0066D0[73], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 5, 0, 5, 1, 0, 0),
    gsSP2Triangles(0, 3, 5, 0, 6, 3, 0, 0),
    gsSP2Triangles(6, 7, 3, 0, 2, 6, 0, 0),
    gsSP2Triangles(8, 6, 9, 0, 8, 7, 6, 0),
    gsSP1Triangle(7, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeEyeOrbitTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 24, 21, 0, 24, 25, 21, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTextureBlock(gWizrobeEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[99], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(0, 3, 5, 0, 6, 3, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 7, 3, 0, 10, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightUpperArmDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[331], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(3, 5, 2, 0, 4, 5, 3, 0),
    gsSP2Triangles(2, 1, 3, 0, 4, 2, 5, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightForearmDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[312], 3, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[315], 16, 3),
    gsSP2Triangles(3, 0, 1, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 1, 2, 0, 2, 0, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 1, 10, 11, 0),
    gsSP1Triangle(12, 13, 2, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP1Triangle(17, 15, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeRightHandDL[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[293], 3, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[296], 16, 3),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(1, 2, 7, 0, 8, 2, 0, 0),
    gsSP2Triangles(0, 1, 9, 0, 10, 2, 11, 0),
    gsSP1Triangle(12, 1, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(17, 14, 16, 0, 18, 17, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeStaffDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeStaffTipTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[259], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(7, 8, 9, 0, 9, 10, 7, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 15, 17, 0, 11, 16, 17, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 20, 0, 20, 19, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWizrobeStaffTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wizVtx_0066D0[283], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 1, 0, 8, 0),
    gsSP2Triangles(8, 5, 4, 0, 2, 1, 6, 0),
    gsSP2Triangles(6, 4, 3, 0, 6, 3, 9, 0),
    gsSP2Triangles(7, 0, 2, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 0, 7, 0, 6, 8, 4, 0),
    gsSP2Triangles(1, 8, 6, 0, 9, 5, 8, 0),
    gsSP1Triangle(9, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftUpperArmDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[375], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 5, 4, 0, 4, 5, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 0, 3, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftForearmDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[356], 3, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[359], 16, 3),
    gsSP2Triangles(0, 1, 3, 0, 4, 1, 5, 0),
    gsSP2Triangles(2, 0, 6, 0, 7, 1, 2, 0),
    gsSP2Triangles(8, 0, 9, 0, 10, 11, 0, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP1Triangle(18, 15, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gWizrobeLeftHandDL[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_wizVtx_0066D0[337], 3, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWizrobeBandTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_wizVtx_0066D0[340], 16, 3),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 2, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 2, 0, 0),
    gsSP2Triangles(0, 1, 9, 0, 10, 1, 11, 0),
    gsSP1Triangle(12, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(14, 16, 18, 0, 14, 18, 17, 0),
    gsSPEndDisplayList(),
};

StandardLimb gWizrobePelvisLimb = { 
    { 0, 3980, -100 }, WIZROBE_LIMB_TORSO - 1, LIMB_DONE, gWizrobePelvisDL
};

StandardLimb gWizrobeTorsoLimb = { 
    { 0, 0, 0 }, WIZROBE_LIMB_LEFT_UPPER_ARM - 1, WIZROBE_LIMB_LOINCLOTH - 1, gWizrobeTorsoDL
};

StandardLimb gWizrobeLeftUpperArmLimb = { 
    { 1386, 201, 950 }, WIZROBE_LIMB_LEFT_FOREARM - 1, WIZROBE_LIMB_RIGHT_UPPER_ARM - 1, gWizrobeLeftUpperArmDL
};

StandardLimb gWizrobeLeftForearmLimb = { 
    { 1981, 0, 0 }, WIZROBE_LIMB_LEFT_HAND - 1, LIMB_DONE, gWizrobeLeftForearmDL
};

StandardLimb gWizrobeLeftHandLimb = { 
    { 1825, 0, 0 }, LIMB_DONE, LIMB_DONE, gWizrobeLeftHandDL
};

StandardLimb gWizrobeRightUpperArmLimb = { 
    { 1386, 201, -950 }, WIZROBE_LIMB_RIGHT_FOREARM - 1, WIZROBE_LIMB_NECK - 1, gWizrobeRightUpperArmDL
};

StandardLimb gWizrobeRightForearmLimb = { 
    { 1981, 0, 0 }, WIZROBE_LIMB_RIGHT_HAND - 1, LIMB_DONE, gWizrobeRightForearmDL
};

StandardLimb gWizrobeRightHandLimb = { 
    { 1825, 0, 0 }, WIZROBE_LIMB_STAFF - 1, LIMB_DONE, gWizrobeRightHandDL
};

StandardLimb gWizrobeStaffLimb = { 
    { 675, -400, -200 }, LIMB_DONE, LIMB_DONE, gWizrobeStaffDL
};

StandardLimb gWizrobeNeckLimb = { 
    { 2012, 0, 0 }, WIZROBE_LIMB_HEAD - 1, LIMB_DONE, gWizrobeNeckDL
};

StandardLimb gWizrobeHeadLimb = { 
    { 1300, -300, 0 }, LIMB_DONE, WIZROBE_LIMB_JAW - 1, gWizrobeHeadDL
};

StandardLimb gWizrobeJawLimb = { 
    { 1050, 550, 0 }, LIMB_DONE, LIMB_DONE, gWizrobeJawDL
};

StandardLimb gWizrobeLoinclothLimb = { 
    { 900, -500, 0 }, LIMB_DONE, WIZROBE_LIMB_LEFT_THIGH - 1, gWizrobeLoinclothDL
};

StandardLimb gWizrobeLeftThighLimb = { 
    { 1050, 0, 400 }, WIZROBE_LIMB_LEFT_SHIN - 1, WIZROBE_LIMB_RIGHT_THIGH - 1, gWizrobeLeftThighDL
};

StandardLimb gWizrobeLeftShinLimb = { 
    { 1612, 0, 0 }, WIZROBE_LIMB_LEFT_FOOT - 1, LIMB_DONE, gWizrobeLeftShinDL
};

StandardLimb gWizrobeLeftFootLimb = { 
    { 1503, 0, 0 }, LIMB_DONE, LIMB_DONE, gWizrobeLeftFootDL
};

StandardLimb gWizrobeRightThighLimb = { 
    { 1050, 0, -400 }, WIZROBE_LIMB_RIGHT_SHIN - 1, LIMB_DONE, gWizrobeRightThighDL
};

StandardLimb gWizrobeRightShinLimb = { 
    { 1612, 0, 0 }, WIZROBE_LIMB_RIGHT_FOOT - 1, LIMB_DONE, gWizrobeRightShinDL
};

StandardLimb gWizrobeRightFootLimb = { 
    { 1503, 0, 0 }, LIMB_DONE, LIMB_DONE, gWizrobeRightFootDL
};

void* gWizrobeSkelLimbs[] = {
    &gWizrobePelvisLimb,
    &gWizrobeTorsoLimb,
    &gWizrobeLeftUpperArmLimb,
    &gWizrobeLeftForearmLimb,
    &gWizrobeLeftHandLimb,
    &gWizrobeRightUpperArmLimb,
    &gWizrobeRightForearmLimb,
    &gWizrobeRightHandLimb,
    &gWizrobeStaffLimb,
    &gWizrobeNeckLimb,
    &gWizrobeHeadLimb,
    &gWizrobeJawLimb,
    &gWizrobeLoinclothLimb,
    &gWizrobeLeftThighLimb,
    &gWizrobeLeftShinLimb,
    &gWizrobeLeftFootLimb,
    &gWizrobeRightThighLimb,
    &gWizrobeRightShinLimb,
    &gWizrobeRightFootLimb,
};

FlexSkeletonHeader gWizrobeSkel = { 
    { gWizrobeSkelLimbs, ARRAY_COUNT(gWizrobeSkelLimbs) }, 19
};

BgCamInfo gWizrobePlatformColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gWizrobePlatformColSurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_DIRT,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly gWizrobePlatformColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xF448},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF448},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x8001, 0xF448},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x8001, 0xF448},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xF448},
};

Vec3s gWizrobePlatformColVertices[] = {
    {  -3000,   1000,   3000 },
    {   3000,   1000,   3000 },
    {   3000,   1000,  -3000 },
    {  -3000,   1000,  -3000 },
    {   3000,      0,   3000 },
    {  -3000,      0,   3000 },
    {   3000,      0,  -3000 },
    {  -3000,      0,  -3000 },
};

CollisionHeader gWizrobePlatformCol = { 
    { -3000, 0, -3000 },
    { 3000, 1000, 3000 },
    ARRAY_COUNT(gWizrobePlatformColVertices), gWizrobePlatformColVertices,
    ARRAY_COUNT(gWizrobePlatformColPolygons), gWizrobePlatformColPolygons,
    gWizrobePlatformColSurfaceType,
    gWizrobePlatformColCamDataList,
    0, NULL
};

s16 sWizrobeAttackAnimFrameData[] = {
    0x0000, 0x0BDE, 0xFD89, 0x2000, 0x4000, 0xE000, 0x0000, 0xFFEE, 0xFFD1, 0xFFAE, 0xFF8C, 0xFF73, 0xFF69, 0xFF6D, 
    0xFF76, 0xFF83, 0xFF94, 0xFFA7, 0xFFBA, 0xFFCE, 0xFFDF, 0xFFEF, 0xFFFA, 0x0000, 0x0BDE, 0x0BB2, 0x0B63, 0x0B0A, 
    0x0ABE, 0x0A95, 0x0AA7, 0x0AEB, 0x0B45, 0x0BB1, 0x0C2B, 0x0CAE, 0x0D36, 0x0DBE, 0x0E42, 0x0EBE, 0x0F2D, 0x0F8C, 
    0xFD89, 0xFE2A, 0xFF37, 0x0075, 0x01AA, 0x029A, 0x030C, 0x0314, 0x02F2, 0x02AF, 0x0253, 0x01E4, 0x016D, 0x00F3, 
    0x0080, 0x001B, 0xFFCC, 0xFF9C, 0xFD58, 0xF592, 0xE88A, 0xD8AA, 0xC897, 0xBB32, 0xB388, 0xB0BA, 0xAFAA, 0xB003, 
    0xB173, 0xB3A5, 0xB649, 0xB910, 0xBBB3, 0xBDE9, 0xBF6F, 0xC000, 0xF0F4, 0xF364, 0xF76E, 0xFC3B, 0x00EE, 0x04B0, 
    0x06B3, 0x0745, 0x074D, 0x06E4, 0x0623, 0x0525, 0x0404, 0x02DA, 0x01C3, 0x00DB, 0x003B, 0x0000, 0xC0F6, 0xC019, 
    0xBEB9, 0xBD29, 0xBBA7, 0xBA77, 0xB9EF, 0xBA04, 0xBA60, 0xBAF4, 0xBBAE, 0xBC7F, 0xBD56, 0xBE26, 0xBEE0, 0xBF76, 
    0xBFDB, 0xC000, 0x052F, 0x078B, 0x0B88, 0x1035, 0x149F, 0x17D7, 0x18EB, 0x1835, 0x16C7, 0x14C2, 0x124B, 0x0F85, 
    0x0C91, 0x0995, 0x06B2, 0x040B, 0x01C4, 0x0000, 0xFBBB, 0xFCE5, 0xFED5, 0x011F, 0x0359, 0x0517, 0x05EE, 0x0603, 
    0x05CC, 0x0557, 0x04B3, 0x03F0, 0x031B, 0x0245, 0x017B, 0x00CD, 0x004A, 0x0000, 0x89C5, 0x89A6, 0x895F, 0x891A, 
    0x88FC, 0x892E, 0x89D7, 0x8AEC, 0x8C3E, 0x8DC0, 0x8F63, 0x9119, 0x92D3, 0x9485, 0x961E, 0x9792, 0x98D3, 0x99D1, 
    0xCB3D, 0xE1AB, 0x7870, 0x870D, 0x928C, 0x9698, 0x97DD, 0x0EEF, 0xE40A, 0xCD13, 0xCA24, 0xCB6D, 0xCDD0, 0xD05B, 
    0xD2A2, 0xD467, 0xD583, 0xD5E2, 0xA451, 0x9378, 0xFFA6, 0xF97A, 0xE930, 0xDEAB, 0xD40E, 0xB57A, 0xB889, 0xB1DE, 
    0xA9DD, 0xA28C, 0x9C4B, 0x9737, 0x9355, 0x909C, 0x8EFE, 0x8E73, 0xD98A, 0xCEEE, 0x3A57, 0x22DE, 0x1AE9, 0x1A2B, 
    0x1D5C, 0xAB7C, 0xDC05, 0xF8DE, 0x01C7, 0x0666, 0x09AE, 0x0C54, 0x0E80, 0x102B, 0x113C, 0x119B, 0xF66E, 0xF8AE, 
    0xFC36, 0xFF75, 0x0308, 0x06DC, 0x0ADB, 0x0EF0, 0x1306, 0x1707, 0x1ADF, 0x1E78, 0x21BD, 0x2499, 0x26F8, 0x28C3, 
    0x29E6, 0x2A4C, 0xDE26, 0xDB79, 0xD91A, 0xD95E, 0xD9C6, 0xDA4E, 0xDAEE, 0xDBA1, 0xDC60, 0xDD25, 0xDDEA, 0xDEA9, 
    0xDF5B, 0xDFFB, 0xE082, 0xE0EB, 0xE12E, 0xE145, 0x051F, 0xFD63, 0xF46C, 0xF074, 0xEC48, 0xE7FB, 0xE39E, 0xDF43, 
    0xDAFD, 0xD6DE, 0xD2F7, 0xCF5B, 0xCC1B, 0xC94A, 0xC6FA, 0xC53D, 0xC424, 0xC3C3, 0x07EA, 0x093D, 0x0868, 0x01B7, 
    0xF8A7, 0xF0F1, 0xEE4E, 0xF042, 0xF39B, 0xF805, 0xFD28, 0x02B2, 0x084B, 0x0D9F, 0x1258, 0x1622, 0x18A6, 0x1990, 
    0xE78F, 0xE838, 0xE942, 0xEA4A, 0xEB69, 0xEC62, 0xECF5, 0xED39, 0xED6C, 0xED91, 0xEDAA, 0xEDBA, 0xEDC1, 0xEDC3, 
    0xEDC0, 0xEDBC, 0xEDB8, 0xEDB7, 0xE43D, 0xE9E5, 0xF2CD, 0xFBF5, 0x0627, 0x0E98, 0x127D, 0x1291, 0x1190, 0x0FB5, 
    0x0D38, 0x0A54, 0x0743, 0x043F, 0x0181, 0xFF45, 0xFDC3, 0xFD35, 0x547C, 0x7E06, 0x9E86, 0xA441, 0x9BCC, 0x9718, 
    0x2040, 0x240F, 0x2716, 0xA9D6, 0xAC94, 0xAF6A, 0xB252, 0xB53A, 0xB808, 0xBAA1, 0xBCE8, 0xBEBF, 0x2A1B, 0x258A, 
    0x113F, 0x0816, 0x12D4, 0x23AF, 0x5A08, 0x5C1A, 0x5E33, 0x2000, 0x1E9B, 0x1D97, 0x1CE3, 0x1C64, 0x1BFF, 0x1B99, 
    0x1B18, 0x1A60, 0xC715, 0xE5E2, 0xFFD7, 0x0DDA, 0x1372, 0x24AD, 0xBD24, 0xC35A, 0xC740, 0x4993, 0x4AD9, 0x4B6E, 
    0x4B8E, 0x4B6B, 0x4B2C, 0x4AF8, 0x4AF2, 0x4B39, 0x0342, 0x04DF, 0x06D6, 0x0924, 0x0BC9, 0x0EC3, 0x120F, 0x1618, 
    0x1B74, 0x225F, 0x2AC3, 0x3417, 0x3DEC, 0x47D6, 0x5164, 0x5A29, 0x61B6, 0x679D, 0x12F7, 0x1195, 0x0E78, 0x0A70, 
    0x064C, 0x02DC, 0x00EF, 0x0191, 0x0501, 0x0AE2, 0x127C, 0x1B15, 0x244A, 0x2DB4, 0x36F0, 0x3F9A, 0x474C, 0x4DA2, 
    0x0566, 0x0425, 0x020F, 0xFF98, 0xFD35, 0xFB5A, 0xFA7D, 0xFB15, 0xFDCE, 0x036E, 0x0B90, 0x14F2, 0x1F15, 0x2974, 
    0x338D, 0x3CDF, 0x44E7, 0x4B21, 0x8603, 0x828E, 0x80D5, 0x7FF2, 0x7F01, 0x7E55, 0x7E6C, 0x7EB7, 0x7F0D, 0x7F6D, 
    0x7FD3, 0x803C, 0x80A7, 0x8110, 0x8175, 0x81D3, 0x8228, 0x826F, 0x7463, 0x71DA, 0x70E7, 0x72EE, 0x7956, 0x93DF, 
    0xAAB8, 0xAB9A, 0xAB13, 0xA961, 0xA6C3, 0xA376, 0x9FBB, 0x9BCE, 0x97EF, 0x945B, 0x9153, 0x8F13, 0x939D, 0x9053, 
    0x89FE, 0x82BB, 0x7CA5, 0x787A, 0x76D7, 0x7738, 0x77D0, 0x7894, 0x797A, 0x7A76, 0x7B80, 0x7C8C, 0x7D91, 0x7E83, 
    0x7F58, 0x8007, 0xFDD1, 0xFCD6, 0xFB26, 0xF9B1, 0xF89D, 0xF7C4, 0xF7AB, 0xF836, 0xF8E7, 0xF9B7, 0xFA9B, 0xFB8A, 
    0xFC7B, 0xFD64, 0xFE3C, 0xFEFA, 0xFF94, 0x0000, 0xDECE, 0xE6FF, 0xF545, 0x0261, 0x0D6B, 0x174B, 0x1B7A, 0x1AD9, 
    0x1965, 0x1745, 0x149E, 0x1199, 0x0E5A, 0x0B08, 0x07C9, 0x04C4, 0x021F, 0x0000, 0x2ECD, 0x31CE, 0x3681, 0x38B6, 
    0x359A, 0x3000, 0x2C2F, 0x2ACA, 0x2997, 0x288F, 0x27AE, 0x26EC, 0x2645, 0x25B2, 0x252D, 0x24B2, 0x2439, 0x23BD, 
    0x0F8D, 0x0D4E, 0x0965, 0x0516, 0x01A5, 0x0035, 0x0000, 0xFFE5, 0xFFD5, 0xFFCD, 0xFFCC, 0xFFD0, 0xFFD8, 0xFFE2, 
    0xFFED, 0xFFF6, 0xFFFD, 0x0000, 0x09DD, 0x0901, 0x0782, 0x05B4, 0x03EF, 0x01A2, 0x0000, 0xFFBA, 0xFF81, 0xFF57, 
    0xFF3A, 0xFF2C, 0xFF2C, 0xFF3A, 0xFF56, 0xFF80, 0xFFB9, 0x0000, 0xC3E8, 0xBE8E, 0xB54C, 0xAC61, 0xA807, 0xB364, 
    0xC000, 0xC18D, 0xC291, 0xC31F, 0xC34B, 0xC327, 0xC2C7, 0xC23E, 0xC19F, 0xC0FE, 0xC06D, 0xC000, 0xEF89, 0xF5C4, 
    0xFD14, 0xFF22, 0xFFA4, 0xFFFD, 0x0000, 0xFFF0, 0xFFC5, 0xFF89, 0xFF47, 0xFF08, 0xFED6, 0xFEBC, 0xFEC2, 0xFEF4, 
    0xFF5A, 0x0000, 0xFD17, 0xFF3B, 0x0183, 0x0194, 0x00F3, 0x0055, 0x0000, 0xFFFF, 0x0009, 0x001A, 0x002E, 0x0042, 
    0x0053, 0x005E, 0x005E, 0x0051, 0x0033, 0x0000, 0xF943, 0x0749, 0x1456, 0x0EFE, 0x03C6, 0xFAD5, 0x0000, 0x004E, 
    0x0065, 0x0051, 0x0021, 0xFFE1, 0xFF9E, 0xFF67, 0xFF47, 0xFF4E, 0xFF87, 0x0000, 0x1739, 0x1647, 0x152B, 0x13EC, 
    0x128F, 0x111A, 0x0F92, 0x0DFC, 0x0C5F, 0x0ABF, 0x0922, 0x078E, 0x0608, 0x0496, 0x033D, 0x0202, 0x00EC, 0x0000, 
    0x134E, 0x0FBB, 0x0A85, 0x09D0, 0x0BD0, 0x0A9B, 0x075A, 0x0537, 0x03BE, 0x0321, 0x02D7, 0x0285, 0x0163, 0xFEFC, 
    0xFB70, 0xF7A2, 0xF4D6, 0xF3AB, 0xE223, 0xE603, 0xE7D7, 0xE9F7, 0xF39B, 0xFFE8, 0x066F, 0x0791, 0x07C6, 0x06D2, 
    0x04C3, 0x01C9, 0xFE4F, 0xFAF6, 0xF8AE, 0xF7FE, 0xF844, 0xF8BF, 0xB27E, 0xB63D, 0xC154, 0xC56D, 0xBED6, 0xB837, 
    0xB522, 0xB633, 0xB87E, 0xB931, 0xBB0D, 0xBF2F, 0xC5B9, 0xCEE7, 0xD94C, 0xE24D, 0xE77E, 0xE96D, 0x3A85, 0x42E7, 
    0x466C, 0x42A8, 0x435C, 0x45E5, 0x4621, 0x4374, 0x400C, 0x45EB, 0x4C43, 0x50C5, 0x5176, 0x4D11, 0x4488, 0x3A62, 
    0x329B, 0x2E14, 0x0000, 0xFFB3, 0xFF34, 0xFED4, 0xFEB4, 0xFEB5, 0xFEC7, 0xFEDF, 0xFEFA, 0xFF17, 0xFF36, 0xFF56, 
    0xFF76, 0xFF96, 0xFFB5, 0xFFD1, 0xFFEA, 0x0000, 0x0000, 0xFFF8, 0xFFED, 0xFFE8, 0xFFF2, 0x0003, 0x000D, 0x000E, 
    0x000E, 0x000D, 0x000C, 0x000B, 0x0009, 0x0007, 0x0005, 0x0003, 0x0001, 0x0000, 0xB31A, 0xB3DE, 0xB547, 0xB6D9, 
    0xB912, 0xBB76, 0xBC11, 0xBAF3, 0xB986, 0xB7DB, 0xB602, 0xB40D, 0xB20D, 0xB012, 0xAE2F, 0xAC74, 0xAAF2, 0xA9BB, 
    0x0A4D, 0x0A3A, 0x0C13, 0x1138, 0x1890, 0x1F00, 0x2214, 0x2225, 0x20EF, 0x1ECA, 0x1C14, 0x1927, 0x164D, 0x13BE, 
    0x11A4, 0x101F, 0x0F49, 0x0F3C, 0x0DB5, 0x0FD8, 0x12CA, 0x13EE, 0x122F, 0x0F7F, 0x0E1A, 0x0DDC, 0x0DE4, 0x0DEC, 
    0x0DCA, 0x0D69, 0x0CCD, 0x0C08, 0x0B30, 0x0A59, 0x0990, 0x08D8, 0xD23D, 0xD444, 0xD96B, 0xE1BA, 0xE9CF, 0xEE26, 
    0xEEBE, 0xED95, 0xEBFC, 0xEA45, 0xE8AF, 0xE76A, 0xE69D, 0xE659, 0xE6A2, 0xE76A, 0xE897, 0xE9FF, 0x4EA0, 0x5196, 
    0x555A, 0x5788, 0x572E, 0x5529, 0x52FD, 0x511D, 0x4F33, 0x4D14, 0x4A98, 0x47A3, 0x4429, 0x4030, 0x3BCE, 0x372B, 
    0x327E, 0x2E14, 0xED44, 0xF16A, 0xF8A2, 0xFF3A, 0x04AA, 0x0979, 0x0B94, 0x0B6A, 0x0ADC, 0x09FB, 0x08DC, 0x078E, 
    0x0626, 0x04B4, 0x034B, 0x01FF, 0x00DF, 0x0000, 0x008B, 0x012C, 0x02B1, 0x05C0, 0x0C95, 0x14F3, 0x18CF, 0x1805, 
    0x168F, 0x148D, 0x1220, 0x0F67, 0x0C84, 0x0996, 0x06BF, 0x041E, 0x01D3, 0x0000, 0x994E, 0x97F0, 0x9565, 0x9270, 
    0x8E0C, 0x893E, 0x87DD, 0x89C9, 0x8C43, 0x8F2F, 0x9270, 0x95E8, 0x997A, 0x9D0A, 0xA07A, 0xA3AE, 0xA688, 0xA8EA, 
    
};

JointIndex sWizrobeAttackAnimJointIndices[] = {
    { 0x0006, 0x0018, 0x002A },
    { 0x003C, 0x004E, 0x0060 },
    { 0x0072, 0x0084, 0x0096 },
    { 0x00A8, 0x00BA, 0x00CC },
    { 0x00DE, 0x00F0, 0x0102 },
    { 0x0114, 0x0126, 0x0138 },
    { 0x014A, 0x015C, 0x016E },
    { 0x0180, 0x0192, 0x01A4 },
    { 0x01B6, 0x01C8, 0x01DA },
    { 0x0003, 0x0004, 0x0005 },
    { 0x01EC, 0x01FE, 0x0210 },
    { 0x0222, 0x0234, 0x0246 },
    { 0x0258, 0x026A, 0x027C },
    { 0x0000, 0x0000, 0x028E },
    { 0x02A0, 0x02B2, 0x02C4 },
    { 0x0000, 0x0000, 0x02D6 },
    { 0x02E8, 0x02FA, 0x030C },
    { 0x031E, 0x0330, 0x0342 },
    { 0x0000, 0x0000, 0x0354 },
    { 0x0366, 0x0378, 0x038A },
};

AnimationHeader gWizrobeAttackAnim = { 
    { 18 }, sWizrobeAttackAnimFrameData, sWizrobeAttackAnimJointIndices, 6
};

s16 sWizrobeDamageAnimFrameData[] = {
    0xFF0A, 0x0F8C, 0xFDAF, 0xC000, 0x0000, 0xAC71, 0xF500, 0x7042, 0x36C1, 0xD482, 0x552A, 0x6559, 0xDED7, 0x9957, 
    0x17A9, 0x2112, 0x1D5E, 0x0B23, 0x4B2E, 0x96CB, 0x9ACC, 0x47AD, 0x8AA1, 0x6200, 0xAA8E, 0x956D, 0x2000, 0x4000, 
    0xE000, 0x2573, 0xFDB8, 0x389C, 0xA4B4, 0xEDAA, 0x111D, 0x264D, 0xE614, 0xD303, 0xD8DA, 0x3D44, 0xF639, 0xC9EB, 
    0xF6D2, 0x22CF, 0xB1A6, 0x5719, 0xA12D, 0x0000, 
};

JointIndex sWizrobeDamageAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0003, 0x0004, 0x0005 },
    { 0x0006, 0x0004, 0x0007 },
    { 0x0008, 0x0009, 0x000A },
    { 0x000B, 0x000C, 0x000D },
    { 0x000E, 0x000F, 0x0010 },
    { 0x0011, 0x0012, 0x0013 },
    { 0x0014, 0x0015, 0x0016 },
    { 0x0017, 0x0018, 0x0019 },
    { 0x001A, 0x001B, 0x001C },
    { 0x001D, 0x001E, 0x001F },
    { 0x0004, 0x0004, 0x0020 },
    { 0x0021, 0x0022, 0x0023 },
    { 0x0004, 0x0004, 0x0004 },
    { 0x0024, 0x0025, 0x0026 },
    { 0x0004, 0x0004, 0x0027 },
    { 0x0004, 0x0028, 0x0029 },
    { 0x002A, 0x002B, 0x002C },
    { 0x0004, 0x0004, 0x002D },
    { 0x0004, 0x0004, 0x002E },
};

AnimationHeader gWizrobeDamageAnim = { 
    { 2 }, sWizrobeDamageAnimFrameData, sWizrobeDamageAnimJointIndices, 47
};

s16 sWizrobeDanceAnimFrameData[] = {
    0x0000, 0x0F8C, 0xFF9C, 0xC000, 0x9070, 0xE5BF, 0xF7D8, 0xEE9A, 0xEB3B, 0x0F41, 0xE8AE, 0x0B0C, 0x41F3, 0x79F1, 
    0x1630, 0xF09E, 0x0342, 0x12F7, 0x0566, 0x85CC, 0x7F90, 0x9409, 0x2000, 0x4000, 0xE000, 0x0F8C, 0x0F2B, 0x0ED3, 
    0x0F03, 0x0F5C, 0x0F8C, 0x0F2F, 0x0ED3, 0x0F03, 0x0F5C, 0x0000, 0xFF1A, 0xFD45, 0xFB26, 0xF965, 0xF8AB, 0xF96E, 
    0xFB3F, 0xFD6B, 0xFF3D, 0x99D1, 0x9AD5, 0x9C96, 0x9E87, 0xA019, 0xA0BE, 0xA006, 0x9E4E, 0x9C41, 0x9A8A, 0x0000, 
    0xFDBA, 0xFA22, 0xF842, 0xFB69, 0x0000, 0x0300, 0x058F, 0x06A4, 0x0352, 0x0000, 0x02C2, 0x054C, 0x0474, 0x026E, 
    0x0000, 0xFC1D, 0xF969, 0xFB1F, 0xFE4B, 0x0BB3, 0x0ABA, 0x0A29, 0x09EF, 0x09F8, 0x0A32, 0x0A8C, 0x0AF1, 0x0B51, 
    0x0B97, 0x0000, 0xFCAC, 0xF776, 0xF500, 0xF72D, 0xFB88, 0x002B, 0x032E, 0x030E, 0x012D, 0x0000, 0x0879, 0x1044, 
    0x0C22, 0x0462, 0x0000, 0x071C, 0x0E68, 0x0AAC, 0x03BC, 0x0000, 0x034C, 0x061D, 0x049D, 0x01D6, 0xFEFB, 0xFD40, 
    0xFD40, 0xFE3E, 0xFF6D, 0xF3AB, 0xF3FC, 0xF43C, 0xF406, 0xF3CA, 0xF3DC, 0xF575, 0xF6F8, 0xF62B, 0xF48F, 0xF8BF, 
    0xF834, 0xF7E1, 0xF86A, 0xF913, 0xF900, 0xF65A, 0xF504, 0xF5B5, 0xF76B, 0xE96D, 0xE90B, 0xEAD0, 0xEFA3, 0xF3EA, 
    0xF3FF, 0xE5AD, 0xD761, 0xDA9F, 0xE3D1, 0x2E14, 0x31EB, 0x346B, 0x30EF, 0x2CA5, 0x2D44, 0x407F, 0x4D34, 0x467D, 
    0x37E1, 0xA9A6, 0xA7E9, 0xA651, 0xA6AB, 0xA7C3, 0xA9B1, 0xAFD0, 0xA8FD, 0xA297, 0xA5C8, 0x0F3C, 0x0D62, 0x0B9F, 
    0x0C85, 0x0E0E, 0x0F01, 0x0ED1, 0x0E82, 0x0EBB, 0x0F11, 0x08D8, 0x0B6A, 0x0D16, 0x0C75, 0x0A67, 0x088A, 0x08F7, 
    0x09C4, 0x09A6, 0x0928, 0xE9FF, 0xE070, 0xD8BC, 0xE0E2, 0xECE0, 0xF48A, 0xF2E4, 0xEE80, 0xEBC6, 0xEA5B, 0x2E14, 
    0x3E10, 0x4A80, 0x44F6, 0x37E8, 0x2D44, 0x2FA1, 0x33F0, 0x32D6, 0x2FDB, 0xA8EA, 0xB010, 0xA6E6, 0x9E90, 0xA2D6, 
    0xA8EA, 0xA7DF, 0xA5E8, 0xA6B0, 0xA823, 0x0000, 
};

JointIndex sWizrobeDanceAnimJointIndices[] = {
    { 0x0000, 0x0019, 0x0002 },
    { 0x0003, 0x0023, 0x0003 },
    { 0x0000, 0x0000, 0x002D },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0007, 0x0008, 0x0009 },
    { 0x000A, 0x000B, 0x000C },
    { 0x000D, 0x000E, 0x000F },
    { 0x0010, 0x0011, 0x0012 },
    { 0x0013, 0x0014, 0x0015 },
    { 0x0016, 0x0017, 0x0018 },
    { 0x0037, 0x0041, 0x004B },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0055, 0x0000, 0x005F },
    { 0x0000, 0x0000, 0x0069 },
    { 0x0073, 0x007D, 0x0087 },
    { 0x0000, 0x0000, 0x0091 },
    { 0x0000, 0x0000, 0x009B },
    { 0x00A5, 0x00AF, 0x00B9 },
    { 0x0000, 0x0000, 0x00C3 },
    { 0x0000, 0x0000, 0x00CD },
};

AnimationHeader gWizrobeDanceAnim = { 
    { 10 }, sWizrobeDanceAnimFrameData, sWizrobeDanceAnimJointIndices, 25
};

s16 sWizrobeRunAnimFrameData[] = {
    0x0000, 0x0F8C, 0xFF9C, 0xC000, 0xAE1B, 0xFD17, 0x022E, 0xFE7E, 0xD25B, 0x02A4, 0xC63D, 0x4131, 0x86CE, 0x7F5D, 
    0x7948, 0x36E3, 0xBFF8, 0x0F8C, 0x104B, 0x110A, 0x0F8C, 0x104B, 0x110A, 0x0000, 0xFE19, 0xFA91, 0xF8AB, 0xFA59, 
    0xFDA3, 0x7ADA, 0x7D2D, 0x817E, 0x83D1, 0x81C3, 0x7DBE, 0xBA78, 0x3B42, 0x33B6, 0x212F, 0x1AA2, 0x1D4A, 0x8A63, 
    0xF840, 0xFC68, 0xF59D, 0x0004, 0xFD81, 0x0439, 0x75AD, 0x67A1, 0x8439, 0xAD4B, 0xC72A, 0x0000, 0x15FF, 0x1FE0, 
    0xF265, 0x5701, 0xE07B, 0x3B85, 0x3AC5, 0x39AB, 0x3B50, 0x4868, 0x39BF, 0xBF98, 0xD5BD, 0xDFB7, 0xB1E9, 0x1634, 
    0x9FD5, 0x0000, 0xFC21, 0xF842, 0x0000, 0x047A, 0x06A4, 0x0000, 0xFA4C, 0xF500, 0xFBB5, 0x032E, 0x028B, 0x0000, 
    0x1044, 0x0848, 0x0000, 0x0E68, 0x0848, 0x0000, 0x061D, 0x01BE, 0xFD40, 0xFD59, 0xFECA, 0xE851, 0xF38A, 0x0754, 
    0xF2F1, 0xD5BE, 0xBC07, 0x2E14, 0x1DEC, 0x0000, 0x2D44, 0x4A05, 0x5181, 0xA9A6, 0xA938, 0xA8CD, 0xA9B1, 0xAE6D, 
    0xABB2, 0xE851, 0xD28A, 0xBD03, 0xF2F1, 0xFEB1, 0x02B3, 0x2E14, 0x499F, 0x5828, 0x2D44, 0x12B0, 0x0000, 0xA8EA, 
    0xB010, 0x9E90, 0xA8EA, 0xA5E8, 0xA730, 0x0000, 
};

JointIndex sWizrobeRunAnimJointIndices[] = {
    { 0x0000, 0x0011, 0x0002 },
    { 0x0003, 0x0017, 0x0003 },
    { 0x0000, 0x0000, 0x001D },
    { 0x0023, 0x0029, 0x002F },
    { 0x0000, 0x0004, 0x0000 },
    { 0x0005, 0x0006, 0x0007 },
    { 0x0008, 0x0009, 0x000A },
    { 0x0000, 0x000B, 0x0000 },
    { 0x000C, 0x000D, 0x000E },
    { 0x0035, 0x003B, 0x0041 },
    { 0x0047, 0x0000, 0x000F },
    { 0x0000, 0x0000, 0x0010 },
    { 0x004D, 0x0000, 0x0053 },
    { 0x0000, 0x0000, 0x0059 },
    { 0x0000, 0x0000, 0x005F },
    { 0x0000, 0x0000, 0x0065 },
    { 0x0000, 0x0000, 0x006B },
    { 0x0000, 0x0000, 0x0071 },
    { 0x0000, 0x0000, 0x0077 },
    { 0x0000, 0x0000, 0x007D },
};

AnimationHeader gWizrobeRunAnim = { 
    { 6 }, sWizrobeRunAnimFrameData, sWizrobeRunAnimJointIndices, 17
};

s16 sWizrobeWindUpAnimFrameData[] = {
    0x0000, 0x0BDE, 0xFD89, 0x0566, 0x0BDE, 0x0BB8, 0x0BA2, 0x0B99, 0x0B9A, 0x0BA3, 0x0BB1, 0x0BC0, 0x0BCF, 0x0BDA, 
    0xFD89, 0xFD73, 0xFD67, 0xFD62, 0xFD63, 0xFD68, 0xFD6F, 0xFD78, 0xFD80, 0xFD87, 0xFD58, 0xFFD0, 0x013E, 0x01D2, 
    0x01BB, 0x0127, 0x0045, 0xFF43, 0xFE52, 0xFD9E, 0xF0F4, 0xF058, 0xEFFE, 0xEFD9, 0xEFDF, 0xF004, 0xF03B, 0xF07B, 
    0xF0B7, 0xF0E3, 0xC0F6, 0xC101, 0xC108, 0xC10B, 0xC10A, 0xC108, 0xC103, 0xC0FF, 0xC0FA, 0xC0F7, 0x052F, 0x0565, 
    0x0584, 0x0591, 0x058F, 0x0582, 0x056F, 0x0559, 0x0544, 0x0535, 0xFBBB, 0xFB8F, 0xFB75, 0xFB6B, 0xFB6D, 0xFB77, 
    0xFB87, 0xFB99, 0xFBAA, 0xFBB6, 0x89C5, 0x891F, 0x88BE, 0x8897, 0x889D, 0x88C4, 0x8900, 0x8944, 0x8983, 0x89B3, 
    0xCB3D, 0xC3BA, 0xBE84, 0xBC31, 0xBC91, 0xBEDF, 0xC224, 0xC58A, 0xC876, 0xCA7B, 0xA451, 0xA834, 0xAA50, 0xAB1F, 
    0xAAFF, 0xAA2F, 0xA8E4, 0xA75C, 0xA5E1, 0xA4C2, 0xD98A, 0xDF09, 0xE2EE, 0xE4B0, 0xE467, 0xE2A9, 0xE037, 0xDDB3, 
    0xDB8F, 0xDA17, 0xF66E, 0xF6C0, 0xF6EF, 0xF702, 0xF6FF, 0xF6EC, 0xF6CF, 0xF6AE, 0xF68E, 0xF677, 0xDE26, 0xDD9E, 
    0xDD4F, 0xDD2F, 0xDD34, 0xDD54, 0xDD85, 0xDDBC, 0xDDF0, 0xDE17, 0x051F, 0x04B6, 0x0479, 0x0460, 0x0464, 0x047D, 
    0x04A3, 0x04CD, 0x04F6, 0x0513, 0x07EA, 0x092E, 0x09E9, 0x0A35, 0x0A29, 0x09DE, 0x096A, 0x08E6, 0x086A, 0x080E, 
    0xE78F, 0xE61F, 0xE54A, 0xE4F3, 0xE501, 0xE557, 0xE5DB, 0xE671, 0xE6FE, 0xE766, 0xE43D, 0xE072, 0xDE3E, 0xDD5A, 
    0xDD7E, 0xDE62, 0xDFBE, 0xE149, 0xE2BD, 0xE3D1, 0x547C, 0x51C9, 0x5037, 0x4F95, 0x4FAF, 0x5051, 0x5148, 0x5262, 
    0x536B, 0x5430, 0x2A1B, 0x2A1C, 0x2A12, 0x2A0B, 0x2A0C, 0x2A13, 0x2A1A, 0x2A1E, 0x2A1E, 0x2A1C, 0xC715, 0xC484, 
    0xC30A, 0xC272, 0xC28A, 0xC322, 0xC40B, 0xC516, 0xC611, 0xC6CC, 0x0342, 0x02C9, 0x01F6, 0x012F, 0x00D6, 0x0104, 
    0x0177, 0x020C, 0x02A2, 0x0314, 0x12F7, 0x1001, 0x0AE4, 0x060C, 0x03E5, 0x0503, 0x07CD, 0x0B6E, 0x0F0F, 0x11D9, 
    0x8603, 0x8B17, 0x93D9, 0x9D86, 0xA55B, 0xA894, 0xA4FC, 0x9C69, 0x922E, 0x899B, 0x7463, 0x786B, 0x8024, 0x88ED, 
    0x9021, 0x931E, 0x8FEC, 0x884D, 0x7F34, 0x7795, 0x939D, 0x91A3, 0x8E3F, 0x8A83, 0x877E, 0x863F, 0x87A3, 0x8AF4, 
    0x8EE9, 0x923A, 0x2000, 0xEA3B, 0x547C, 0x2510, 0x1877, 0x13FF, 0x0C2C, 0x0588, 0x0303, 0x01FE, 0x4000, 0x4424, 
    0x3948, 0x3302, 0x2490, 0x16ED, 0x07F0, 0x01B4, 0x1542, 0x318F, 0xE000, 0xAA53, 0x14B8, 0xE409, 0xD406, 0xCB50, 
    0xC26D, 0xC03C, 0xC181, 0xC1DE, 0xFDD1, 0xFDBB, 0xFDAE, 0xFDA8, 0xFDA9, 0xFDAE, 0xFDB7, 0xFDC0, 0xFDC8, 0xFDCF, 
    0xDECE, 0xDD76, 0xDCAE, 0xDC5E, 0xDC6A, 0xDCBB, 0xDD36, 0xDDC2, 0xDE46, 0xDEA8, 0x2ECD, 0x3039, 0x310D, 0x3162, 
    0x3154, 0x30FF, 0x307D, 0x2FE8, 0x2F5D, 0x2EF6, 0x0F8D, 0x102E, 0x108C, 0x10B2, 0x10AC, 0x1086, 0x104C, 0x100A, 
    0x0FCD, 0x0F9F, 0x09DD, 0x0A43, 0x0A7E, 0x0A96, 0x0A92, 0x0A7A, 0x0A56, 0x0A2C, 0x0A05, 0x09E8, 0xC3E8, 0xC411, 
    0xC428, 0xC432, 0xC430, 0xC427, 0xC418, 0xC408, 0xC3F8, 0xC3ED, 0xEF89, 0xEEDF, 0xEE7C, 0xEE54, 0xEE5A, 0xEE82, 
    0xEEBF, 0xEF05, 0xEF46, 0xEF76, 0xFD17, 0xFCF9, 0xFCE7, 0xFCE0, 0xFCE1, 0xFCE8, 0xFCF3, 0xFD00, 0xFD0B, 0xFD14, 
    0xF943, 0xF8FD, 0xF8D5, 0xF8C4, 0xF8C7, 0xF8D7, 0xF8F0, 0xF90D, 0xF928, 0xF93B, 0x1739, 0x182A, 0x18B6, 0x18EE, 
    0x18E5, 0x18AD, 0x1857, 0x17F5, 0x1798, 0x1754, 0x134E, 0x14E5, 0x15A9, 0x15EE, 0x15E3, 0x159D, 0x1527, 0x1491, 
    0x13F8, 0x137F, 0xE223, 0xDF4B, 0xDD8C, 0xDCD2, 0xDCF0, 0xDDA9, 0xDEBF, 0xDFF2, 0xE10A, 0xE1D5, 0xB27E, 0xB297, 
    0xB2D3, 0xB2F7, 0xB2F1, 0xB2CE, 0xB2A6, 0xB289, 0xB27D, 0xB27D, 0x3A85, 0x36C2, 0x345D, 0x3358, 0x3382, 0x3485, 
    0x3603, 0x37A2, 0x3916, 0x3A20, 0xB31A, 0xB37B, 0xB3B4, 0xB3CA, 0xB3C7, 0xB3B0, 0xB38D, 0xB366, 0xB340, 0xB325, 
    0x0A4D, 0x0A84, 0x0AAC, 0x0ABE, 0x0ABB, 0x0AA9, 0x0A90, 0x0A76, 0x0A61, 0x0A53, 0x0DB5, 0x0D75, 0x0D4A, 0x0D38, 
    0x0D3B, 0x0D4D, 0x0D68, 0x0D84, 0x0D9D, 0x0DAE, 0xD23D, 0xD12B, 0xD090, 0xD053, 0xD05C, 0xD09A, 0xD0F9, 0xD167, 
    0xD1D0, 0xD21E, 0x4EA0, 0x4F75, 0x4FEC, 0x501B, 0x5013, 0x4FE4, 0x4F9B, 0x4F47, 0x4EF6, 0x4EB9, 0xED44, 0xEC82, 
    0xEC11, 0xEBE3, 0xEBEB, 0xEC18, 0xEC5E, 0xECAD, 0xECF7, 0xED2E, 0x008B, 0x0091, 0x0094, 0x0095, 0x0095, 0x0094, 
    0x0092, 0x008F, 0x008D, 0x008C, 0x994E, 0x98AD, 0x984F, 0x9829, 0x982F, 0x9855, 0x988F, 0x98D1, 0x990E, 0x993C, 
    
};

JointIndex sWizrobeWindUpAnimJointIndices[] = {
    { 0x0000, 0x0004, 0x000E },
    { 0x0018, 0x0022, 0x002C },
    { 0x0036, 0x0040, 0x004A },
    { 0x0054, 0x005E, 0x0068 },
    { 0x0072, 0x007C, 0x0086 },
    { 0x0090, 0x009A, 0x00A4 },
    { 0x00AE, 0x00B8, 0x00C2 },
    { 0x00CC, 0x00D6, 0x0003 },
    { 0x00E0, 0x00EA, 0x00F4 },
    { 0x00FE, 0x0108, 0x0112 },
    { 0x011C, 0x0126, 0x0130 },
    { 0x013A, 0x0144, 0x014E },
    { 0x0158, 0x0162, 0x016C },
    { 0x0000, 0x0000, 0x0176 },
    { 0x0180, 0x018A, 0x0194 },
    { 0x0000, 0x0000, 0x019E },
    { 0x0000, 0x0000, 0x01A8 },
    { 0x01B2, 0x01BC, 0x01C6 },
    { 0x0000, 0x0000, 0x01D0 },
    { 0x01DA, 0x01E4, 0x01EE },
};

AnimationHeader gWizrobeWindUpAnim = { 
    { 10 }, sWizrobeWindUpAnimFrameData, sWizrobeWindUpAnimJointIndices, 4
};

s16 sWizrobeIdleAnimFrameData[] = {
    0x0000, 0x0F8C, 0xFF9C, 0xC000, 0xD5E2, 0x8E73, 0x119B, 0x2A4C, 0xE145, 0xC3C3, 0x1990, 0xEDB7, 0xFD35, 0x2000, 
    0x4000, 0xE000, 0x0000, 0xFFF6, 0xFFDD, 0xFFBF, 0xFFA6, 0xFF9C, 0xFFA3, 0xFFB6, 0xFFCE, 0xFFE9, 0x0000, 0x0017, 
    0x0032, 0x004A, 0x005D, 0x0064, 0x005A, 0x0041, 0x0023, 0x000A, 0x0F8C, 0x0F95, 0x0FAD, 0x0FC8, 0x0FE0, 0x0FEA, 
    0x0FE0, 0x0FC8, 0x0FAD, 0x0F95, 0x0F8C, 0x0F95, 0x0FAD, 0x0FC8, 0x0FE0, 0x0FEA, 0x0FE0, 0x0FC8, 0x0FAD, 0x0F95, 
    0xFF9C, 0xFFA3, 0xFFB4, 0xFFCF, 0xFFEF, 0x0012, 0x0034, 0x0054, 0x006F, 0x0081, 0x0087, 0x0081, 0x006F, 0x0054, 
    0x0034, 0x0012, 0xFFEF, 0xFFCF, 0xFFB4, 0xFFA3, 0x0000, 0x003E, 0x00D8, 0x01A1, 0x026A, 0x0305, 0x0342, 0x02DB, 
    0x01E8, 0x00D2, 0x0000, 0xFF73, 0xFEEC, 0xFE75, 0xFE14, 0xFDD5, 0xFDBD, 0xFE18, 0xFEDF, 0xFFA6, 0x99D1, 0x99BC, 
    0x9984, 0x9935, 0x98DC, 0x9885, 0x983C, 0x97F2, 0x97A4, 0x976A, 0x975F, 0x9786, 0x97C7, 0x9819, 0x9872, 0x98C8, 
    0x9911, 0x9952, 0x9990, 0x99BF, 0xBEBF, 0xBEA1, 0xBE62, 0xBE28, 0xBE1A, 0xBE5D, 0xBF20, 0xC049, 0xC190, 0xC2AC, 
    0xC35B, 0xC395, 0xC389, 0xC348, 0xC2E5, 0xC273, 0xC1C8, 0xC0D5, 0xBFD7, 0xBF0F, 0x1A60, 0x1A55, 0x1A3A, 0x1A1A, 
    0x1A04, 0x1A04, 0x1A1E, 0x1A3C, 0x1A49, 0x1A43, 0x1A38, 0x1A35, 0x1A3C, 0x1A49, 0x1A59, 0x1A67, 0x1A76, 0x1A7D, 
    0x1A77, 0x1A68, 0x4B39, 0x4B06, 0x4A97, 0x4A2F, 0x4A0E, 0x4A75, 0x4BB0, 0x4D9B, 0x4FC2, 0x51AC, 0x52E0, 0x5346, 
    0x532E, 0x52B9, 0x520B, 0x5146, 0x5026, 0x4E95, 0x4CF9, 0x4BBA, 0x679D, 0x674D, 0x6679, 0x654B, 0x63EB, 0x6285, 
    0x60B8, 0x5E8A, 0x5CBF, 0x5BCD, 0x5BCC, 0x5CCF, 0x5EE9, 0x629F, 0x66DA, 0x6977, 0x69F8, 0x6999, 0x68C9, 0x67FB, 
    0x4DA2, 0x4E1C, 0x4F43, 0x50B0, 0x51FA, 0x52B8, 0x5271, 0x5169, 0x5054, 0x4F60, 0x4E61, 0x4D51, 0x4C83, 0x4C30, 
    0x4C15, 0x4C27, 0x4C65, 0x4CC6, 0x4D2E, 0x4D80, 0x4B21, 0x4AE0, 0x4A2E, 0x4926, 0x47E4, 0x4682, 0x4487, 0x4202, 
    0x3FDC, 0x3E77, 0x3E31, 0x3F90, 0x4229, 0x4626, 0x4A99, 0x4D51, 0x4DCF, 0x4D5B, 0x4C70, 0x4B89, 0x826F, 0x8277, 
    0x8285, 0x8291, 0x8290, 0x8278, 0x8229, 0x81AD, 0x8139, 0x80D8, 0x80A5, 0x80D9, 0x8136, 0x8193, 0x81F4, 0x8235, 
    0x8254, 0x8266, 0x826E, 0x8270, 0x8F13, 0x8EFF, 0x8ECE, 0x8E95, 0x8E66, 0x8E56, 0x8E87, 0x8EE8, 0x8F3D, 0x8F6F, 
    0x8F7F, 0x8F58, 0x8F15, 0x8EBF, 0x8E63, 0x8E38, 0x8E4E, 0x8E85, 0x8EC6, 0x8EFD, 0x8007, 0x800B, 0x8017, 0x8028, 
    0x803B, 0x804E, 0x8066, 0x8081, 0x8092, 0x8099, 0x8079, 0x8006, 0x7F7E, 0x7EFA, 0x7E7D, 0x7E4F, 0x7E88, 0x7EF6, 
    0x7F74, 0x7FDC, 0x0000, 0xFFCA, 0xFF43, 0xFE93, 0xFDE3, 0xFD5C, 0xFD26, 0xFD82, 0xFE57, 0xFF4B, 0x0000, 0x0076, 
    0x00E4, 0x0143, 0x018F, 0x01C1, 0x01D3, 0x018A, 0x00EA, 0x0049, 0x0000, 0xFFC2, 0xFF28, 0xFE5F, 0xFD96, 0xFCFB, 
    0xFCBE, 0xFD29, 0xFE23, 0xFF3A, 0x0000, 0x006F, 0x00CB, 0x0113, 0x0148, 0x0167, 0x0172, 0x0138, 0x00B9, 0x003A, 
    0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BD, 0x23BE, 0x23BE, 
    0x23BE, 0x23BE, 0x23BE, 0x23BE, 0x23BE, 0x23BD, 0x0000, 0x0082, 0x01B9, 0x032B, 0x0461, 0x04E4, 0x0488, 0x039E, 
    0x0265, 0x011C, 0x0000, 0xFEEF, 0xFDBF, 0xFCA5, 0xFBD6, 0xFB85, 0xFBFC, 0xFD19, 0xFE6C, 0xFF89, 0xC000, 0xBF9E, 
    0xBEA5, 0xBD55, 0xBBEF, 0xBAB4, 0xB978, 0xB80E, 0xB6BB, 0xB5C2, 0xB568, 0xB5DD, 0xB6F3, 0xB862, 0xB9E1, 0xBB25, 
    0xBC54, 0xBD9E, 0xBECD, 0xBFAA, 0x0000, 0x014E, 0x0469, 0x081E, 0x0B39, 0x0C87, 0x0B92, 0x0929, 0x05FA, 0x02B2, 
    0x0000, 0xFDA5, 0xFB2E, 0xF8F8, 0xF75F, 0xF6C2, 0xF7B8, 0xFA03, 0xFCBF, 0xFF0A, 0x0000, 0xFF99, 0xFEA3, 0xFD7E, 
    0xFC89, 0xFC22, 0xFC79, 0xFD4E, 0xFE5B, 0xFF59, 0x0000, 0x0041, 0x004C, 0x0037, 0x001A, 0x000B, 0x000A, 0x0007, 
    0x0004, 0x0001, 0x0000, 0x00DE, 0x0300, 0x05AE, 0x0834, 0x09DA, 0x0AAB, 0x0B1F, 0x0B29, 0x0ABB, 0x09C7, 0x07E0, 
    0x050F, 0x01F8, 0xFF41, 0xFD8D, 0xFD2E, 0xFDB6, 0xFEAB, 0xFF97, 0x0000, 0x0104, 0x032F, 0x052F, 0x05B4, 0x04A6, 
    0x02F6, 0x00DC, 0xFE93, 0xFC53, 0xFA57, 0xF8D8, 0xF80E, 0xF820, 0xF8E5, 0xFA27, 0xFBAC, 0xFD3C, 0xFEA0, 0xFF9F, 
    0xF3AB, 0xF3B6, 0xF3CC, 0xF3E2, 0xF3F0, 0xF3F4, 0xF3F4, 0xF3F1, 0xF3E6, 0xF3CE, 0xF3AB, 0xF374, 0xF32C, 0xF2E5, 
    0xF2B0, 0xF29B, 0xF2B5, 0xF2F5, 0xF346, 0xF38D, 0xF8BF, 0xF8AC, 0xF880, 0xF84E, 0xF827, 0xF818, 0xF81D, 0xF82F, 
    0xF851, 0xF883, 0xF8C2, 0xF923, 0xF9A7, 0xFA2F, 0xFA9B, 0xFAC6, 0xFA8E, 0xFA0B, 0xF972, 0xF8F3, 0xE96D, 0xE9BC, 
    0xEA85, 0xEB8D, 0xEC95, 0xED58, 0xEDA3, 0xED96, 0xED62, 0xED2E, 0xED1A, 0xED3E, 0xED82, 0xEDC3, 0xEDD8, 0xED90, 
    0xECC8, 0xEBB4, 0xEA9C, 0xE9C4, 0x2E14, 0x2D9C, 0x2C77, 0x2B0B, 0x29CC, 0x2940, 0x29C4, 0x2AFC, 0x2C64, 0x2D88, 
    0x2E00, 0x2D88, 0x2C64, 0x2AFC, 0x29C4, 0x2940, 0x29CC, 0x2B0B, 0x2C77, 0x2D9C, 0xA9BB, 0xA9F2, 0xAA70, 0xAAFA, 
    0xAB57, 0xAB4B, 0xAA98, 0xA966, 0xA811, 0xA6F8, 0xA679, 0xA6CC, 0xA7B2, 0xA8D7, 0xA9E7, 0xAA8C, 0xAAAB, 0xAA7E, 
    0xAA2D, 0xA9DE, 0x0F3C, 0x0F5C, 0x0FA7, 0x0FFC, 0x1040, 0x105B, 0x1044, 0x100B, 0x0FC0, 0x0F73, 0x0F3B, 0x0F1C, 
    0x0F0A, 0x0F05, 0x0F07, 0x0F09, 0x0F0B, 0x0F13, 0x0F22, 0x0F33, 0x08D8, 0x089F, 0x0817, 0x0771, 0x06E4, 0x06A7, 
    0x06D6, 0x074C, 0x07E0, 0x086E, 0x08D3, 0x0910, 0x0939, 0x0950, 0x0958, 0x0959, 0x094E, 0x0931, 0x090A, 0x08E7, 
    0xE9FF, 0xEA55, 0xEB2D, 0xEC44, 0xED56, 0xEE1D, 0xEE66, 0xEE53, 0xEE13, 0xEDD0, 0xEDAC, 0xEDBD, 0xEDED, 0xEE1D, 
    0xEE27, 0xEDDB, 0xED19, 0xEC14, 0xEB11, 0xEA4D, 0x2E14, 0x2D9C, 0x2C77, 0x2B0B, 0x29CC, 0x2940, 0x29C4, 0x2AFC, 
    0x2C64, 0x2D88, 0x2E00, 0x2D88, 0x2C64, 0x2AFC, 0x29C4, 0x2940, 0x29CC, 0x2B0B, 0x2C77, 0x2D9C, 0xA8EA, 0xA90E, 
    0xA95C, 0xA9AE, 0xA9DB, 0xA9BB, 0xA914, 0xA802, 0xA6DA, 0xA5F4, 0xA5A8, 0xA639, 0xA76C, 0xA8DE, 0xAA27, 0xAAE3, 
    0xAAE4, 0xAA6D, 0xA9C4, 0xA92C, 
};

JointIndex sWizrobeIdleAnimJointIndices[] = {
    { 0x0010, 0x0024, 0x0038 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x0000, 0x004C, 0x0060 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0007, 0x0008, 0x0009 },
    { 0x000A, 0x000B, 0x000C },
    { 0x0074, 0x0088, 0x009C },
    { 0x00B0, 0x00C4, 0x00D8 },
    { 0x00EC, 0x0100, 0x0114 },
    { 0x000D, 0x000E, 0x000F },
    { 0x0128, 0x013C, 0x0150 },
    { 0x0000, 0x0164, 0x0178 },
    { 0x018C, 0x01A0, 0x01B4 },
    { 0x0000, 0x0000, 0x01C8 },
    { 0x01DC, 0x01F0, 0x0204 },
    { 0x0000, 0x0000, 0x0218 },
    { 0x0000, 0x0000, 0x022C },
    { 0x0240, 0x0254, 0x0268 },
    { 0x0000, 0x0000, 0x027C },
    { 0x0000, 0x0000, 0x0290 },
};

AnimationHeader gWizrobeIdleAnim = { 
    { 20 }, sWizrobeIdleAnimFrameData,
    sWizrobeIdleAnimJointIndices, 16
};
