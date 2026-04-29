#include "nintendo_rogo_static.h"

#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 nintendo_rogo_static_Tex_000000[TEX_LEN(u64, nintendo_rogo_static_Tex_000000_WIDTH, nintendo_rogo_static_Tex_000000_HEIGHT, 8)] = {
#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static_Tex_000000.i8.inc.c"
};

u64 nintendo_rogo_static_Tex_001800[TEX_LEN(u64, nintendo_rogo_static_Tex_001800_WIDTH, nintendo_rogo_static_Tex_001800_HEIGHT, 8)] = {
#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static_Tex_001800.i8.inc.c"
};

Vtx gNintendo64LogoVtx[] = {
#include "assets/textures/nintendo_rogo_static/gNintendo64LogoVtx.inc.c"
};

Gfx gNintendo64LogoDL[83] = {
#include "assets/textures/nintendo_rogo_static/gNintendo64LogoDL.inc.c"
};

u8 nintendo_rogo_static_zeros_0029B8[8] = { 0 };

u64 nintendo_rogo_static_000029C0_Tex[TEX_LEN(u64, nintendo_rogo_static_000029C0_Tex_WIDTH, nintendo_rogo_static_000029C0_Tex_HEIGHT, 8)] = {
#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static_000029C0_Tex.i8.inc.c"
};

