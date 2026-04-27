#include "object_umajump.h"
#include "array_count.h"
#include "camera.h"
#include "z_math.h"

BgCamInfo gJumpableHorseFenceBgCamList[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceBgCamList.inc.c"
};

SurfaceType gJumpableHorseFenceSurfaceTypes[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceSurfaceTypes.inc.c"
};

CollisionPoly gJumpableHorseFencePolyList[] = {
#include "assets/objects/object_umajump/gJumpableHorseFencePolyList.inc.c"
};

Vec3s gJumpableHorseFenceVtxList[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceVtxList.inc.c"
};

CollisionHeader gJumpableHorseFenceCol = {
#include "assets/objects/object_umajump/gJumpableHorseFenceCol.inc.c"
};

SurfaceType gJumpableBigHorseFenceSurfaceTypes[] = {   
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_1,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ true
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
        }, // data
    }, // 0
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
                /* isHorseBlocked */ true
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
        }, // data
    }, // 1
};

CollisionHeader gJumpableBigHorseFenceCol = {
    {
        -1600, // x
        0, // y
        -100, // z
    }, // minBounds
    {
        1600, // x
        800, // y
        100, // z
    }, // maxBounds
    ARRAY_COUNT(gJumpableHorseFenceVtxList), // numVertices
    gJumpableHorseFenceVtxList, // vtxList
    ARRAY_COUNT(gJumpableHorseFencePolyList), // numPolygons
    gJumpableHorseFencePolyList, // polyList
    gJumpableBigHorseFenceSurfaceTypes, // surfaceTypeList
    gJumpableHorseFenceBgCamList, // bgCamList
    0, // numWaterBoxes
    NULL, // waterBoxes
};
