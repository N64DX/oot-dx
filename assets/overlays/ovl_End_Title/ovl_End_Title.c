#include "assets/overlays/ovl_End_Title/ovl_End_Title.h"

#include "gfx.h"
#include "sys_matrix.h"

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

