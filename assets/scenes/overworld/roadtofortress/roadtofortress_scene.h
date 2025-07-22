#ifndef ROADTOFORTRESS_SCENE_H
#define ROADTOFORTRESS_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd roadtofortressCommands[];
extern ActorEntry roadtofortressStartPositionList0x000090[];
extern RomFile roadtofortressRoomList0x0000D0[];
extern Spawn roadtofortressEntranceList0x0000D8[];
extern u16 roadtofortressExitList_0000E0[];
extern EnvLightSettings roadtofortressLightSettings0x0000E8[];
extern Vec3s roadtofortressPathwayList_000350[];
extern Vec3s roadtofortressPathwayList_000398[];
extern Vec3s roadtofortressPathwayList_0003C4[];
extern Path roadtofortressPathway_0003F0[];
extern Vec3s roadtofortressCsCameraPoints_000528[];
extern BgCamInfo roadtofortressCollisionHeader_002824CamDataList[];
extern SurfaceType roadtofortressCollisionHeader_002824SurfaceType[];
extern CollisionPoly roadtofortressCollisionHeader_002824Polygons[];
extern Vec3s roadtofortressCollisionHeader_002824Vertices[];
extern CollisionHeader roadtofortressCollisionHeader_002824;
extern u64 roadtofortress_sceneTex_003050[];
extern u64 roadtofortress_sceneTex_003850[];
extern u64 roadtofortress_sceneTex_004050[];
extern u64 roadtofortress_sceneTex_004850[];
extern u64 roadtofortress_sceneTex_005050[];
extern u64 roadtofortress_sceneTex_005850[];
extern u64 roadtofortress_sceneTex_006850[];
extern u64 roadtofortress_sceneTex_007050[];
extern u64 roadtofortress_sceneTex_007850[];
extern u64 roadtofortress_sceneTLUT_008050[];
extern u64 roadtofortress_sceneTLUT_008070[];
#endif
