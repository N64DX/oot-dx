#ifndef OLD_LOST_WOODS_SCENE_H
#define OLD_LOST_WOODS_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern RomFile old_lost_woods_sceneRoomList0x0000A0[];
extern Spawn old_lost_woods_sceneEntranceList0x0000A8[];
extern ActorEntry old_lost_woods_sceneStartPositionList0x000050[];
extern u16 old_lost_woods_sceneExitList0x0000B4[];
extern EnvLightSettings old_lost_woods_sceneLightSettings0x0000C0[];
extern Vec3s old_lost_woods_sceneCollisionHeader0x0068D4_camPosData_00000130[];
extern BgCamInfo old_lost_woods_sceneCollisionHeader0x0068D4_camDataList_00000144[];
extern SurfaceType old_lost_woods_sceneCollisionHeader0x0068D4_polygonTypes_0000016C[];
extern CollisionPoly old_lost_woods_sceneCollisionHeader0x0068D4_polygons_000001DC[1368];
extern Vec3s old_lost_woods_sceneCollisionHeader0x0068D4_vtx_0000575C[745];
extern CollisionHeader old_lost_woods_sceneCollisionHeader0x0068D4;
extern u64 old_lost_woods_sceneTex_006900[];
extern u64 old_lost_woods_sceneTex_007100[];
extern u64 old_lost_woods_sceneTex_007900[];
extern u64 old_lost_woods_sceneTex_008100[];

#endif
