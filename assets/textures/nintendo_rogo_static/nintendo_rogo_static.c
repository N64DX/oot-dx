#if OOT_VERSION == NTSC_1_0
#include "extracted/pal-1.0/assets/textures/nintendo_rogo_static/nintendo_rogo_static.h"
#else
#include "nintendo_rogo_static.h"
#endif

#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "versions.h"

u64 nintendo_rogo_static_Tex_000000[TEX_LEN(u64, nintendo_rogo_static_Tex_000000_WIDTH, nintendo_rogo_static_Tex_000000_HEIGHT, 8)] = {
#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static_Tex_000000.i8.inc.c"
};

u64 nintendo_rogo_static_Tex_001800[TEX_LEN(u64, nintendo_rogo_static_Tex_001800_WIDTH, nintendo_rogo_static_Tex_001800_HEIGHT, 8)] = {
#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static_Tex_001800.i8.inc.c"
};

Vtx gNintendo64LogoDL_01001C00_Vtx_fused_[] = {
#if OOT_VERSION == NTSC_1_0
#include "extracted/pal-1.0/assets/textures/nintendo_rogo_static/gNintendo64LogoDL_01001C00_Vtx_fused_.inc.c"
#else
#include "assets/textures/nintendo_rogo_static/gNintendo64LogoDL_01001C00_Vtx_fused_.inc.c"
#endif
};

Gfx gNintendo64LogoDL[83] = {
#if OOT_VERSION == NTSC_1_0
#include "extracted/pal-1.0/assets/textures/nintendo_rogo_static/gNintendo64LogoDL.inc.c"
#else
#include "assets/textures/nintendo_rogo_static/gNintendo64LogoDL.inc.c"
#endif
};

u64 gNintendo64LogoDL_000029C0_Tex[TEX_LEN(u64, gNintendo64LogoDL_000029C0_Tex_WIDTH, gNintendo64LogoDL_000029C0_Tex_HEIGHT, 8)] = {
#if OOT_VERSION == NTSC_1_0
#include "build/pal-1.0/assets/textures/nintendo_rogo_static/gNintendo64LogoDL_000029C0_Tex.i8.inc.c"
#else
#include "assets/textures/nintendo_rogo_static/gNintendo64LogoDL_000029C0_Tex.i8.inc.c"
#endif
};

u64 gNintendo64ExpansionPakLogo[TEX_LEN(u64, 128, 128, 32)] = {
#include "assets/textures/nintendo_rogo_static/gExpansionPakTex.rgba32.inc.c"
};
