#ifndef WOODFALL_TEMPLE_SCENE_H
#define WOODFALL_TEMPLE_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern SceneCmd woodfall_sceneCommands[];
extern ActorEntry woodfall_sceneStartPositionList0x000098[];
extern RomFile woodfall_sceneRoomList0x0000E8[];
extern Spawn woodfall_sceneEntranceList0x0000F0[];
extern u16 woodfall_sceneExitList_0000FC[];
extern EnvLightSettings woodfall_sceneLightSettings0x000104[];
extern Path woodfall_scenePathway[];
extern BgCamInfo woodfall_sceneCollisionHeader_003CECCamDataList[];
extern SurfaceType woodfall_sceneCollisionHeader_003CECSurfaceType[];
extern CollisionPoly woodfall_sceneCollisionHeader_003CECPolygons[];
extern Vec3s woodfall_sceneCollisionHeader_003CECVertices[];
extern WaterBox woodfall_sceneCollisionHeader_003CECWaterBoxes[];
extern CollisionHeader woodfall_sceneCollisionHeader_003CEC;

extern u64 woodfall_sceneTex_004990[];
extern u64 woodfall_sceneTex_005190[];
extern u64 woodfall_sceneTex_005590[];
extern u64 woodfall_sceneTex_0055D0[];
extern u64 woodfall_sceneTex_005DD0[];
extern u64 woodfall_sceneTex_0065D0[];
extern u64 woodfall_sceneTex_006DD0[];
extern u64 woodfall_sceneTex_007DD0[];
extern u64 woodfall_sceneTex_007ED0[];
extern u64 woodfall_sceneTex_0086D0[];
extern u64 woodfall_sceneTex_008AD0[];
extern u64 woodfall_sceneTex_0092D0[];
extern u64 woodfall_sceneTex_009AD0[];
extern u64 woodfall_sceneTex_009BD0[];
extern u64 woodfall_sceneTex_009DD0[];
extern u64 woodfall_sceneTLUT_00ADD0[];
extern u64 woodfall_sceneTLUT_00ADF0[];

#endif
