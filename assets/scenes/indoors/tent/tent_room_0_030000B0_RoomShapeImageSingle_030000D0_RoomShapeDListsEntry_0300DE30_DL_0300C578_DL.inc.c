    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
   
 gsSPVertex(&tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL_030000E0_Vtx_fused_[2872],
 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 0),
   
 gsSPVertex(&tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL_030000E0_Vtx_fused_[1072],
 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSPEndDisplayList(),
