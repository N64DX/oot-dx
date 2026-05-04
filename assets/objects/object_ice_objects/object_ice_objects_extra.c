#include "assets/objects/object_ice_objects/object_ice_objects.h"
#include "object_ice_objects_extra.h"

#include "array_count.h"

Vec3s gPurpleIceWallVtxList[] = {
#include "assets/objects/object_ice_objects/gPurpleIceWallVtxList.inc.c"
};

CollisionPoly gPurpleIceWallPolyList[] = {
#include "assets/objects/object_ice_objects/gPurpleIceWallPolyList.inc.c"
};

Gfx gPurpleIceBlockDL[30] = {
#include "assets/objects/object_ice_objects/gPurpleIceBlockDL.inc.c"
};

Gfx gPurpleIceWallDL[20] = {
#include "assets/objects/object_ice_objects/gPurpleIceWallDL.inc.c"
};

CollisionHeader gPurpleIceWallCol = {
#include "assets/objects/object_ice_objects/gPurpleIceWallCol.inc.c"
};
