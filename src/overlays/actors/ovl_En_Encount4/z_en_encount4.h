#ifndef Z_EN_ENCOUNT4_H
#define Z_EN_ENCOUNT4_H

#include "ultra64.h"
#include "actor.h"
#include "path.h"

#define ENENCOUNT4_SPAWNS_TOTAL_MAX_INFINITE 63 // aka 0x3F, All bits set

#define ENENCOUNT4_GET_TYPE(thisx)             (((thisx)->params >> 11) & 0x1F)
#define ENENCOUNT4_GET_SPAWN_ACTIVE_MAX(thisx) (((thisx)->params >> 6) & 0x1F)
#define ENENCOUNT4_GET_SPAWN_TOTAL_MAX(thisx)   ((thisx)->params & 0x3F)
#define ENENCOUNT4_GET_PATH_INDEX(thisx)        ((thisx)->params & 0x3F) // Used only by EN_ENCOUNT4_SKULLFISH_PATHING which doesn't use SpawnTotalMax

#define ENENCOUNT4_PATH_INDEX_NONE 0x3F

#define ENENCOUNT4_GET_SPAWN_TIME_MIN(thisx)     ((thisx)->world.rot.x) // Time to wait between spawning
#define ENENCOUNT4_GET_SPAWN_DROP_ID(thisx)      ((thisx)->world.rot.y) // Read from EnPr2, index to drop table array
#define ENENCOUNT4_GET_SPAWN_DISTANCE_MAX(thisx) ((thisx)->world.rot.z) // Negative means infinite distance

typedef enum EnEncount4Enemy {
    /* 0 */ EN_ENCOUNT4_GRASSHOPPER,
    /* 1 */ EN_ENCOUNT4_WALLMASTER,
    /* 2 */ EN_ENCOUNT4_SKULLFISH_RESPAWNING,
    /* 3 */ EN_ENCOUNT4_SKULLFISH_PATHING // path required
} EnEncount4Enemy;

struct EnEncount4;

typedef void (*EnEncount4ActionFunc)(struct EnEncount4*, struct PlayState*);

typedef struct EnEncount4 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ EnEncount4ActionFunc actionFunc;
    /* 0x148 */ Path* path;
    /* 0x14C */ s16 spawnActiveMax;
    /* 0x14E */ s16 spawnActiveCount;
    /* 0x150 */ s16 type;
    /* 0x152 */ s16 spawnTotalCount;
    /* 0x154 */ s16 spawnTotalMax;
    /* 0x156 */ s16 timer;
    /* 0x158 */ s16 spawnTimeMin;
    /* 0x15A */ s16 pathIndex;
    /* 0x15C */ s32 spawnDropTable; // unused by us, passed to EnPr2
    /* 0x160 */ f32 spawnDistanceMax;
} EnEncount4; // size = 0x164

#endif
