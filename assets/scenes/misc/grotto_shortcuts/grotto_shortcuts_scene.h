#ifndef GROTTO_SHORTCUTS_SCENE_H
#define GROTTO_SHORTCUTS_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd grotto_shortcuts_sceneCommands[];
extern ActorEntry grotto_shortcuts_sceneStartPositionList0x000088[];
extern RomFile grotto_shortcuts_sceneRoomList0x000198[];
extern Spawn grotto_shortcuts_sceneEntranceList0x000210[];
extern u16 grotto_shortcuts_sceneExitList_000234[];
extern EnvLightSettings grotto_shortcuts_sceneLightSettings0x000244[];
extern BgCamInfo grotto_shortcuts_sceneCollisionHeader_00AC9CCamDataList[];
extern SurfaceType grotto_shortcuts_sceneCollisionHeader_00AC9CSurfaceType[];
extern CollisionPoly grotto_shortcuts_sceneCollisionHeader_00AC9CPolygons[];
extern Vec3s grotto_shortcuts_sceneCollisionHeader_00AC9CVertices[];
extern WaterBox grotto_shortcuts_sceneCollisionHeader_00AC9CWaterBoxes[];
extern CollisionHeader grotto_shortcuts_sceneCollisionHeader_00AC9C;
extern u64 grotto_shortcuts_sceneTex_00ACD0[];
extern u64 grotto_shortcuts_sceneTex_00B4D0[];
extern u64 grotto_shortcuts_sceneTex_00C0D0[];
extern u64 grotto_shortcuts_sceneTex_00C8D0[];
extern u64 grotto_shortcuts_sceneTex_00D0D0[];
extern u64 grotto_shortcuts_sceneTex_00E8D0[];
extern u64 grotto_shortcuts_sceneTex_00F0D0[];

#endif
