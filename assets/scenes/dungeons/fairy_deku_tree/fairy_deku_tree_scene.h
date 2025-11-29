#ifndef FAIRY_DEKU_TREE_SCENE_H
#define FAIRY_DEKU_TREE_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern RomFile fairy_deku_tree_sceneRoomList0x0001F8[];
extern TransitionActorEntry fairy_deku_tree_sceneTransitionActorList0x000078[];
extern Spawn fairy_deku_tree_sceneEntranceList0x000268[];
extern ActorEntry fairy_deku_tree_sceneStartPositionList0x000058[];
extern u16 fairy_deku_tree_sceneExitList0x00026C[];
extern EnvLightSettings fairy_deku_tree_sceneLightSettings0x000270[];
extern Vec3s fairy_deku_tree_sceneCollisionHeader0x00EA9C_camPosData_00000300[];
extern BgCamInfo fairy_deku_tree_sceneCollisionHeader0x00EA9C_camDataList_000003D8[];
extern SurfaceType fairy_deku_tree_sceneCollisionHeader0x00EA9C_polygonTypes_00000468[];
extern CollisionPoly fairy_deku_tree_sceneCollisionHeader0x00EA9C_polygons_00000580[2892];
extern Vec3s fairy_deku_tree_sceneCollisionHeader0x00EA9C_vtx_0000BA40[2063];
extern CollisionHeader fairy_deku_tree_sceneCollisionHeader0x00EA9C;
extern u64 fairy_deku_tree_sceneTex_00BB60[];
extern u64 fairy_deku_tree_sceneTex_016B60[];
extern u64 fairy_deku_tree_sceneTex_00EAD0[];
extern u64 fairy_deku_tree_sceneTex_00FAD0[];
extern u64 fairy_deku_tree_sceneTex_002210[];
extern u64 fairy_deku_tree_sceneTex_011B60[];
extern u64 fairy_deku_tree_sceneTex_011360[];
extern u64 fairy_deku_tree_sceneTex_003928[];
extern u64 fairy_deku_tree_sceneTex_004BD0[];
extern u64 fairy_deku_tree_sceneTex_001210[];
extern u64 fairy_deku_tree_sceneTex_013B60[];
extern u64 fairy_deku_tree_sceneTex_000630[];
extern u64 fairy_deku_tree_sceneTex_004128[];
extern u64 fairy_deku_tree_sceneTex_004598[];
extern u64 fairy_deku_tree_sceneTex_004928[];
extern u64 fairy_deku_tree_sceneTex_002598[];
extern u64 fairy_deku_tree_sceneTex_007E78[];
extern u64 fairy_deku_tree_sceneTex_014B60[];

#endif
