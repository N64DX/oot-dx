#ifndef GROTTOS2_SCENE_H
#define GROTTOS2_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern ActorEntry grottos2_sceneStartPositionList0x000088[];
extern RomFile grottos2_sceneRoomList0x000198[];
extern Spawn grottos2_sceneEntranceList0x000210[];
extern u16 grottos2_sceneExitList_000234[];
extern EnvLightSettings grottos2_sceneLightSettings0x000244[];
extern CollisionHeader grottos2_sceneCollisionHeader_00AC9C;

extern u64 grottos2_sceneTex_001620[];
extern u64 grottos2_sceneTex_001820[];
extern u64 grottos2_sceneTex_00ACD0[];
extern u64 grottos2_sceneTex_00B4D0[];
extern u64 grottos2_sceneTex_00C0D0[];
extern u64 grottos2_sceneTex_00C8D0[];
extern u64 grottos2_sceneTex_00D0D0[];
extern u64 grottos2_sceneTex_00D8D0[];
extern u64 grottos2_sceneTex_00E8D0[];
extern u64 grottos2_sceneTex_00F0D0[];
extern u64 grottos2_sceneTex_00F4D0[];

#endif
