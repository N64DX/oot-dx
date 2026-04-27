#include "assets/objects/object_spot00_objects/object_spot00_objects.h"
#include "object_spot00_objects_extra.h"

SurfaceType gHyruleFieldCastleDrawbridgeHorseBlockedSurfaceTypes[] = {
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
                SURFACE_MATERIAL_WOOD,
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
};

CollisionHeader gHyruleFieldCastleDrawbridgeHorseBlockedCol = {
    {
        -180, // x
        -10, // y
        -10, // z
    }, // minBounds
    {
        180, // x
        10, // y
        410, // z
    }, // maxBounds
    8, // numVertices
    gHyruleFieldCastleDrawbridgeVtxList, // vtxList
    12, // numPolygons
    gHyruleFieldCastleDrawbridgePolyList, // polyList
    gHyruleFieldCastleDrawbridgeHorseBlockedSurfaceTypes, // surfaceTypeList
    gHyruleFieldCastleDrawbridgeBgCamList, // bgCamList
    0, // numWaterBoxes
    NULL, // waterBoxes
};
