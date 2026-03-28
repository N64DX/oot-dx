#include "object_umajump.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gJumpableHorseFenceBrickTex[TEX_LEN(u64, gJumpableHorseFenceBrickTex_WIDTH, gJumpableHorseFenceBrickTex_HEIGHT, 16)] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceBrickTex.rgba16.inc.c"
};

u64 gJumpableHorseFenceMetalBarTex[TEX_LEN(u64, gJumpableHorseFenceMetalBarTex_WIDTH, gJumpableHorseFenceMetalBarTex_HEIGHT, 16)] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceMetalBarTex.rgba16.inc.c"
};

Vtx gJumpableHorseFenceVtx[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceVtx.inc.c"
};

Gfx gJumpableHorseFenceDL[37] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceDL.inc.c"
};

u8 object_umajump_zeros_001348[8] = { 0 };

BgCamInfo gJumpableHorseFenceBgCamList[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceBgCamList.inc.c"
};

SurfaceType gJumpableHorseFenceSurfaceTypes[] = {
#include "assets/objects/object_umajump/gJumpableHorseFenceSurfaceTypes.inc.c"
};

SurfaceType gJumpableBigHorseFenceSurfaceTypes[] = {
#include "assets/objects/object_umajump/gJumpableBigHorseFenceSurfaceTypes.inc.c"
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

CollisionHeader gJumpableBigHorseFenceCol = {
#include "assets/objects/object_umajump/gJumpableBigHorseFenceCol.inc.c"
};
