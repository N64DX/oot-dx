#include "object_ice_objects.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

Vtx object_ice_objects_Vtx_000000[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Vtx_000000.inc.c"
};

Gfx object_ice_objects_DL_000190[37] = {
#include "assets/objects/object_ice_objects/object_ice_objects_DL_000190.inc.c"
};

u8 object_ice_objects_zeros_0002B8[8] = { 0 };

BgCamInfo object_ice_objects_Col_0003F0_060002C0_BgCamList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_0003F0_060002C0_BgCamList.inc.c"
};

SurfaceType object_ice_objects_Col_0003F0_060002C8_SurfaceTypes[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_0003F0_060002C8_SurfaceTypes.inc.c"
};

CollisionPoly object_ice_objects_Col_0003F0_060002D8_PolyList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_0003F0_060002D8_PolyList.inc.c"
};

Vec3s object_ice_objects_Col_0003F0_060003B8_VtxList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_0003F0_060003B8_VtxList.inc.c"
};

CollisionHeader object_ice_objects_Col_0003F0 = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_0003F0.inc.c"
};

u8 object_ice_objects_zeros_00041C[4] = { 0 };

Vtx gRedIceBlockVtx[] = {
#include "assets/objects/object_ice_objects/gRedIceBlockVtx.inc.c"
};

Gfx gRedIceBlockDL[30] = {
#include "assets/objects/object_ice_objects/gRedIceBlockDL.inc.c"
};

Vtx gRedIcePlatformVtx[] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformVtx.inc.c"
};

Gfx gRedIcePlatformDL[80] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformDL.inc.c"
};

BgCamInfo gRedIcePlatformBgCamList[] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformBgCamList.inc.c"
};

SurfaceType gRedIcePlatformSurfaceTypes[] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformSurfaceTypes.inc.c"
};

CollisionPoly gRedIcePlatformPolyList[] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformPolyList.inc.c"
};

Vec3s gRedIcePlatformVtxList[] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformVtxList.inc.c"
};

CollisionHeader gRedIcePlatformCol = {
#include "assets/objects/object_ice_objects/gRedIcePlatformCol.inc.c"
};

u8 object_ice_objects_zeros_001C48[8] = { 0 };

Vtx object_ice_objects_Vtx_001C50[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Vtx_001C50.inc.c"
};

Gfx object_ice_objects_DL_001D10[22] = {
#include "assets/objects/object_ice_objects/object_ice_objects_DL_001D10.inc.c"
};

Vtx object_ice_objects_Vtx_001DC0[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Vtx_001DC0.inc.c"
};

Gfx object_ice_objects_DL_0021F0[34] = {
#include "assets/objects/object_ice_objects/object_ice_objects_DL_0021F0.inc.c"
};

Vtx object_ice_objects_Vtx_002300[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Vtx_002300.inc.c"
};

Gfx object_ice_objects_DL_0023D0[20] = {
#include "assets/objects/object_ice_objects/object_ice_objects_DL_0023D0.inc.c"
};

BgCamInfo object_ice_objects_Col_002594_06002470_BgCamList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002594_06002470_BgCamList.inc.c"
};

SurfaceType object_ice_objects_Col_002594_06002478_SurfaceTypes[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002594_06002478_SurfaceTypes.inc.c"
};

CollisionPoly object_ice_objects_Col_002594_06002488_PolyList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002594_06002488_PolyList.inc.c"
};

Vec3s object_ice_objects_Col_002594_06002558_VtxList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002594_06002558_VtxList.inc.c"
};

CollisionHeader object_ice_objects_Col_002594 = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002594.inc.c"
};

Vtx gRedIceWallVtx[] = {
#include "assets/objects/object_ice_objects/gRedIceWallVtx.inc.c"
};

Gfx gRedIceWallDL[20] = {
#include "assets/objects/object_ice_objects/gRedIceWallDL.inc.c"
};

Vtx object_ice_objects_Vtx_0026E0[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Vtx_0026E0.inc.c"
};

Gfx object_ice_objects_DL_002740[19] = {
#include "assets/objects/object_ice_objects/object_ice_objects_DL_002740.inc.c"
};

u8 object_ice_objects_zeros_0027D8[8] = { 0 };

BgCamInfo object_ice_objects_Col_002854_060027E0_BgCamList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002854_060027E0_BgCamList.inc.c"
};

SurfaceType object_ice_objects_Col_002854_060027E8_SurfaceTypes[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002854_060027E8_SurfaceTypes.inc.c"
};

CollisionPoly object_ice_objects_Col_002854_060027F0_PolyList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002854_060027F0_PolyList.inc.c"
};

Vec3s object_ice_objects_Col_002854_06002830_VtxList[] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002854_06002830_VtxList.inc.c"
};

CollisionHeader object_ice_objects_Col_002854 = {
#include "assets/objects/object_ice_objects/object_ice_objects_Col_002854.inc.c"
};

BgCamInfo gRedIceWallBgCamList[] = {
#include "assets/objects/object_ice_objects/gRedIceWallBgCamList.inc.c"
};

SurfaceType gRedIceWallSurfaceTypes[] = {
#include "assets/objects/object_ice_objects/gRedIceWallSurfaceTypes.inc.c"
};

CollisionPoly gRedIceWallPolyList[] = {
#include "assets/objects/object_ice_objects/gRedIceWallPolyList.inc.c"
};

Vec3s gRedIceWallVtxList[] = {
#include "assets/objects/object_ice_objects/gRedIceWallVtxList.inc.c"
};

CollisionHeader gRedIceWallCol = {
#include "assets/objects/object_ice_objects/gRedIceWallCol.inc.c"
};

u64 object_ice_objects_Tex_002950[TEX_LEN(u64, object_ice_objects_Tex_002950_WIDTH, object_ice_objects_Tex_002950_HEIGHT, 16)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_002950.rgba16.inc.c"
};

u64 gRedIceWallTex[TEX_LEN(u64, gRedIceWallTex_WIDTH, gRedIceWallTex_HEIGHT, 8)] = {
#include "assets/objects/object_ice_objects/gRedIceWallTex.i8.inc.c"
};

u64 object_ice_objects_Tex_004150[TEX_LEN(u64, object_ice_objects_Tex_004150_WIDTH, object_ice_objects_Tex_004150_HEIGHT, 16)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_004150.rgba16.inc.c"
};

u64 object_ice_objects_Tex_004950[TEX_LEN(u64, object_ice_objects_Tex_004950_WIDTH, object_ice_objects_Tex_004950_HEIGHT, 16)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_004950.rgba16.inc.c"
};

u64 gRedIceBlockTex[TEX_LEN(u64, gRedIceBlockTex_WIDTH, gRedIceBlockTex_HEIGHT, 8)] = {
#include "assets/objects/object_ice_objects/gRedIceBlockTex.i8.inc.c"
};

u64 gRedIcePlatformTex[TEX_LEN(u64, gRedIcePlatformTex_WIDTH, gRedIcePlatformTex_HEIGHT, 4)] = {
#include "assets/objects/object_ice_objects/gRedIcePlatformTex.i4.inc.c"
};

u64 object_ice_objects_Tex_005D50[TEX_LEN(u64, object_ice_objects_Tex_005D50_WIDTH, object_ice_objects_Tex_005D50_HEIGHT, 8)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_005D50.i8.inc.c"
};

u64 object_ice_objects_Tex_006D50[TEX_LEN(u64, object_ice_objects_Tex_006D50_WIDTH, object_ice_objects_Tex_006D50_HEIGHT, 16)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_006D50.rgba16.inc.c"
};

u64 object_ice_objects_Tex_007D50[TEX_LEN(u64, object_ice_objects_Tex_007D50_WIDTH, object_ice_objects_Tex_007D50_HEIGHT, 8)] = {
#include "assets/objects/object_ice_objects/object_ice_objects_Tex_007D50.ia8.inc.c"
};

Gfx gPurpleIceWallDL[20] = {
#include "assets/objects/object_ice_objects/gPurpleIceWallDL.inc.c"
};
