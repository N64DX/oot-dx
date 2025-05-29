#ifndef NINTENDO_ROGO_STATIC_H
#define NINTENDO_ROGO_STATIC_H 1

#include "versions.h"

extern u64 nintendo_rogo_static_Tex_000000[];
extern u64 nintendo_rogo_static_Tex_001800[];
extern Vtx nintendo_rogo_staticVtx_001C00[];
extern Gfx gNintendo64LogoDL[];
#if OOT_VERSION == NTSC_1_0
extern u64 nintendo_rogo_staticTex_002A50[];
#else
extern u64 nintendo_rogo_staticTex_0029C0[];
#endif

#endif
