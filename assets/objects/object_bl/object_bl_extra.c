#include "object_bl_extra.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_BiriVtx_1[8] = {
	{{ {-643, -547, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-643, -547, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-643, 676, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-643, 676, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {643, -547, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {643, -547, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {643, 676, 700}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {643, 676, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx object_BiriVtx_2[20] = {
	{{ {0, 533, 0}, 0, {600, -536}, {74, 101, 235, 255} }},
	{{ {0, 676, 700}, 0, {733, 4574}, {74, 101, 235, 255} }},
	{{ {643, 209, 700}, 0, {885, 4276}, {74, 101, 235, 255} }},
	{{ {507, 165, 0}, 0, {837, -833}, {74, 101, 235, 255} }},
	{{ {507, 165, 0}, 0, {837, -833}, {119, 217, 235, 255} }},
	{{ {643, 209, 700}, 0, {885, 4276}, {119, 217, 235, 255} }},
	{{ {397, -547, 700}, 0, {1033, 4408}, {119, 217, 235, 255} }},
	{{ {313, -431, 0}, 0, {1152, -702}, {119, 217, 235, 255} }},
	{{ {313, -431, 0}, 0, {128, -702}, {0, 131, 235, 255} }},
	{{ {397, -547, 700}, 0, {9, 4408}, {0, 131, 235, 255} }},
	{{ {-397, -547, 700}, 0, {184, 4787}, {0, 131, 235, 255} }},
	{{ {-313, -431, 0}, 0, {300, -323}, {0, 131, 235, 255} }},
	{{ {-313, -431, 0}, 0, {300, -323}, {137, 217, 235, 255} }},
	{{ {-397, -547, 700}, 0, {184, 4787}, {137, 217, 235, 255} }},
	{{ {-643, 209, 700}, 0, {507, 4889}, {137, 217, 235, 255} }},
	{{ {-507, 165, 0}, 0, {446, -221}, {137, 217, 235, 255} }},
	{{ {-507, 165, 0}, 0, {446, -221}, {182, 101, 235, 255} }},
	{{ {-643, 209, 700}, 0, {507, 4889}, {182, 101, 235, 255} }},
	{{ {0, 676, 700}, 0, {733, 4574}, {182, 101, 235, 255} }},
	{{ {0, 533, 0}, 0, {600, -536}, {182, 101, 235, 255} }},
};

Gfx gBiriBeam[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(object_BiriVtx_1, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),

    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gDecorativeFlameMaskTex),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 1024),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 2, G_TX_CLAMP | G_TX_MIRROR, 5, 15),
	gsDPSetTileSize(0, 0, 0, 252, 602),
	gsSPDisplayList(0x8000000),

    gsSPVertex(object_BiriVtx_2, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),

	gsSPEndDisplayList(),
};
