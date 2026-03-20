#ifndef OBJECT_BG_TELEPORTER_H
#define OBJECT_BG_TELEPORTER_H

#include "ultra64.h"
#include "gfx.h"
#include "z_math.h"
#include "bgcheck.h"
#include "array_count.h"

extern Gfx gBgTeleporterDL[];
extern u64 RoomTeleporter_roomteleporter2_ci8[];
extern u64 RoomTeleporter_roomteleporter2_pal_rgba16[];
extern u64 RoomTeleporter_roomteleporter_ci8[];
extern u64 RoomTeleporter_roomteleporter_pal_rgba16[];
extern Vtx RoomTeleporter_RoomTeleporter_mesh_layer_Opaque_vtx_cull[8];
extern Vtx RoomTeleporter_RoomTeleporter_mesh_layer_Opaque_vtx_0[16];
extern Gfx RoomTeleporter_RoomTeleporter_mesh_layer_Opaque_tri_0[];
extern Vtx RoomTeleporter_RoomTeleporter_mesh_layer_Opaque_vtx_1[9];
extern Gfx RoomTeleporter_RoomTeleporter_mesh_layer_Opaque_tri_1[];
extern Gfx mat_RoomTeleporter_f3dlite_material_001_layerOpaque[];
extern Gfx mat_revert_RoomTeleporter_f3dlite_material_001_layerOpaque[];
extern Gfx mat_RoomTeleporter_f3dlite_material_layerOpaque[];
extern Gfx mat_revert_RoomTeleporter_f3dlite_material_layerOpaque[];
extern Gfx RoomTeleporter[];
extern SurfaceType collision_RoomTeleporterCol_polygonTypes[1];
extern Vec3s collision_RoomTeleporterCol_vertices[9];
extern CollisionPoly collision_RoomTeleporterCol_polygons[12];
extern CollisionHeader collision_RoomTeleporterCol_collisionHeader;

#endif
