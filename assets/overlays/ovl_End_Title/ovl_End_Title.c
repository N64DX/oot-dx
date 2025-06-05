#include "ovl_End_Title.h"

#include "gfx.h"
#include "sys_matrix.h"

#if OOT_VERSION == IQUE_CN

static Gfx sEmptyDL1[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL1.inc.c"
};

static u64 sIQueTop[TEX_LEN(u64, sIQueTop_WIDTH, sIQueTop_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sIQueTop.ia8.inc.c"
};

static u64 sIQueBottom[TEX_LEN(u64, sIQueBottom_WIDTH, sIQueBottom_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sIQueBottom.ia8.inc.c"
};

static Gfx sEmptyDL2[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL2.inc.c"
};

static u64 sNintendoLeftTex[TEX_LEN(u64, sNintendoLeftTex_WIDTH, sNintendoLeftTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sNintendoLeftTex.ia8.inc.c"
};

static Gfx sEmptyDL3[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL3.inc.c"
};

static u64 sNintendoRightTex[TEX_LEN(u64, sNintendoRightTex_WIDTH, sNintendoRightTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sNintendoRightTex.ia8.inc.c"
};

static Gfx sEmptyDL4[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL4.inc.c"
};

static u64 sPresentedByTex[TEX_LEN(u64, sPresentedByTex_WIDTH, sPresentedByTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sPresentedByTex.ia8.inc.c"
};

static Gfx sEmptyDL5[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL5.inc.c"
};

static u64 sTheEndTex[TEX_LEN(u64, sTheEndTex_WIDTH, sTheEndTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sTheEndTex.ia8.inc.c"
};

static Gfx sEmptyDL6[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL6.inc.c"
};

static u64 sTheLegendOfZeldaTex[TEX_LEN(u64, sTheLegendOfZeldaTex_WIDTH, sTheLegendOfZeldaTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sTheLegendOfZeldaTex.ia8.inc.c"
};

static Gfx sEmptyDL7[1] = {
#include "assets/overlays/ovl_End_Title/sEmptyDL7.inc.c"
};

static u64 sOcarinaOfTimeTex[TEX_LEN(u64, sOcarinaOfTimeTex_WIDTH, sOcarinaOfTimeTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sOcarinaOfTimeTex.ia8.inc.c"
};

static Vtx sTriforceVtx[6] = {
#include "assets/overlays/ovl_End_Title/sTriforceVtx.inc.c"
};

static Gfx sTriforceDL[12] = {
#include "assets/overlays/ovl_End_Title/sTriforceDL.inc.c"
};

static Gfx sPresentedByNintendoDL[57] = {
#include "assets/overlays/ovl_End_Title/sPresentedByNintendoDL.inc.c"
};

#else

static u64 sTheLegendOfZeldaTex[TEX_LEN(u64, sTheLegendOfZeldaTex_WIDTH, sTheLegendOfZeldaTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sTheLegendOfZeldaTex.ia8.inc.c"
};

static u64 sOcarinaOfTimeTex[TEX_LEN(u64, sOcarinaOfTimeTex_WIDTH, sOcarinaOfTimeTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sOcarinaOfTimeTex.ia8.inc.c"
};

static u64 sTheEndTex[TEX_LEN(u64, sTheEndTex_WIDTH, sTheEndTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sTheEndTex.ia8.inc.c"
};

static u64 sNintendoLeftTex[TEX_LEN(u64, sNintendoLeftTex_WIDTH, sNintendoLeftTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sNintendoLeftTex.ia8.inc.c"
};

static u64 sNintendoRightTex[TEX_LEN(u64, sNintendoRightTex_WIDTH, sNintendoRightTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sNintendoRightTex.ia8.inc.c"
};

static u64 sPresentedByTex[TEX_LEN(u64, sPresentedByTex_WIDTH, sPresentedByTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_End_Title/sPresentedByTex.ia8.inc.c"
};

static Vtx sTriforceVtx[6] = {
#include "assets/overlays/ovl_End_Title/sTriforceVtx.inc.c"
};

static Gfx sTriforceDL[12] = {
#include "assets/overlays/ovl_End_Title/sTriforceDL.inc.c"
};

static Gfx sPresentedByNintendoDL[37] = {
#include "assets/overlays/ovl_End_Title/sPresentedByNintendoDL.inc.c"
};

#endif
