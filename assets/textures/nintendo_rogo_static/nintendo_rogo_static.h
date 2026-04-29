#ifndef NINTENDO_ROGO_STATIC_H
#define NINTENDO_ROGO_STATIC_H

#include "tex_len.h"
#include "ultra64.h"

#define nintendo_rogo_static_Tex_000000_WIDTH 192
#define nintendo_rogo_static_Tex_000000_HEIGHT 32
extern u64 nintendo_rogo_static_Tex_000000[TEX_LEN(u64, nintendo_rogo_static_Tex_000000_WIDTH, nintendo_rogo_static_Tex_000000_HEIGHT, 8)];
#define nintendo_rogo_static_Tex_001800_WIDTH 32
#define nintendo_rogo_static_Tex_001800_HEIGHT 32
extern u64 nintendo_rogo_static_Tex_001800[TEX_LEN(u64, nintendo_rogo_static_Tex_001800_WIDTH, nintendo_rogo_static_Tex_001800_HEIGHT, 8)];
extern Vtx gNintendo64LogoVtx[];
extern Gfx gNintendo64LogoDL[83];
#define nintendo_rogo_static_000029C0_Tex_WIDTH 32
#define nintendo_rogo_static_000029C0_Tex_HEIGHT 32
extern u64 nintendo_rogo_static_000029C0_Tex[TEX_LEN(u64, nintendo_rogo_static_000029C0_Tex_WIDTH, nintendo_rogo_static_000029C0_Tex_HEIGHT, 8)];

#endif
