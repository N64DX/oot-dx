#ifndef OBJECT_ICE_OBJECTS_H
#define OBJECT_ICE_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx object_ice_objects_Vtx_000000[];
extern Gfx object_ice_objects_DL_000190[37];
extern BgCamInfo object_ice_objects_Col_0003F0_060002C0_BgCamList[];
extern SurfaceType object_ice_objects_Col_0003F0_060002C8_SurfaceTypes[];
extern CollisionPoly object_ice_objects_Col_0003F0_060002D8_PolyList[];
extern Vec3s object_ice_objects_Col_0003F0_060003B8_VtxList[];
extern CollisionHeader object_ice_objects_Col_0003F0;
extern Vtx gRedIceBlockVtx[];
extern Gfx gRedIceBlockDL[30];
extern Vtx gRedIcePlatformVtx[];
extern Gfx gRedIcePlatformDL[80];
extern BgCamInfo gRedIcePlatformBgCamList[];
extern SurfaceType gRedIcePlatformSurfaceTypes[];
extern CollisionPoly gRedIcePlatformPolyList[];
extern Vec3s gRedIcePlatformVtxList[];
extern CollisionHeader gRedIcePlatformCol;
extern Vtx object_ice_objects_Vtx_001C50[];
extern Gfx object_ice_objects_DL_001D10[22];
extern Vtx object_ice_objects_Vtx_001DC0[];
extern Gfx object_ice_objects_DL_0021F0[34];
extern Vtx object_ice_objects_Vtx_002300[];
extern Gfx object_ice_objects_DL_0023D0[20];
extern BgCamInfo object_ice_objects_Col_002594_06002470_BgCamList[];
extern SurfaceType object_ice_objects_Col_002594_06002478_SurfaceTypes[];
extern CollisionPoly object_ice_objects_Col_002594_06002488_PolyList[];
extern Vec3s object_ice_objects_Col_002594_06002558_VtxList[];
extern CollisionHeader object_ice_objects_Col_002594;
extern Vtx gRedIceWallVtx[];
extern Gfx gRedIceWallDL[20];
extern Vtx object_ice_objects_Vtx_0026E0[];
extern Gfx object_ice_objects_DL_002740[19];
extern BgCamInfo object_ice_objects_Col_002854_060027E0_BgCamList[];
extern SurfaceType object_ice_objects_Col_002854_060027E8_SurfaceTypes[];
extern CollisionPoly object_ice_objects_Col_002854_060027F0_PolyList[];
extern Vec3s object_ice_objects_Col_002854_06002830_VtxList[];
extern CollisionHeader object_ice_objects_Col_002854;
extern BgCamInfo gRedIceWallBgCamList[];
extern SurfaceType gRedIceWallSurfaceTypes[];
extern CollisionPoly gRedIceWallPolyList[];
extern Vec3s gRedIceWallVtxList[];
extern CollisionHeader gRedIceWallCol;
#define object_ice_objects_Tex_002950_WIDTH 32
#define object_ice_objects_Tex_002950_HEIGHT 32
extern u64 object_ice_objects_Tex_002950[TEX_LEN(u64, object_ice_objects_Tex_002950_WIDTH, object_ice_objects_Tex_002950_HEIGHT, 16)];
#define gRedIceWallTex_WIDTH 32
#define gRedIceWallTex_HEIGHT 128
extern u64 gRedIceWallTex[TEX_LEN(u64, gRedIceWallTex_WIDTH, gRedIceWallTex_HEIGHT, 8)];
#define object_ice_objects_Tex_004150_WIDTH 32
#define object_ice_objects_Tex_004150_HEIGHT 32
extern u64 object_ice_objects_Tex_004150[TEX_LEN(u64, object_ice_objects_Tex_004150_WIDTH, object_ice_objects_Tex_004150_HEIGHT, 16)];
#define object_ice_objects_Tex_004950_WIDTH 32
#define object_ice_objects_Tex_004950_HEIGHT 32
extern u64 object_ice_objects_Tex_004950[TEX_LEN(u64, object_ice_objects_Tex_004950_WIDTH, object_ice_objects_Tex_004950_HEIGHT, 16)];
#define gRedIceBlockTex_WIDTH 32
#define gRedIceBlockTex_HEIGHT 32
extern u64 gRedIceBlockTex[TEX_LEN(u64, gRedIceBlockTex_WIDTH, gRedIceBlockTex_HEIGHT, 8)];
#define gRedIcePlatformTex_WIDTH 64
#define gRedIcePlatformTex_HEIGHT 64
extern u64 gRedIcePlatformTex[TEX_LEN(u64, gRedIcePlatformTex_WIDTH, gRedIcePlatformTex_HEIGHT, 4)];
#define object_ice_objects_Tex_005D50_WIDTH 64
#define object_ice_objects_Tex_005D50_HEIGHT 64
extern u64 object_ice_objects_Tex_005D50[TEX_LEN(u64, object_ice_objects_Tex_005D50_WIDTH, object_ice_objects_Tex_005D50_HEIGHT, 8)];
#define object_ice_objects_Tex_006D50_WIDTH 32
#define object_ice_objects_Tex_006D50_HEIGHT 64
extern u64 object_ice_objects_Tex_006D50[TEX_LEN(u64, object_ice_objects_Tex_006D50_WIDTH, object_ice_objects_Tex_006D50_HEIGHT, 16)];
#define object_ice_objects_Tex_007D50_WIDTH 64
#define object_ice_objects_Tex_007D50_HEIGHT 64
extern u64 object_ice_objects_Tex_007D50[TEX_LEN(u64, object_ice_objects_Tex_007D50_WIDTH, object_ice_objects_Tex_007D50_HEIGHT, 8)];

extern Gfx gPurpleIceWallDL[20];

#endif
