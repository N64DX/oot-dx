#ifndef OBJECT_MIR_RAY_H
#define OBJECT_MIR_RAY_H

#include "tex_len.h"
#include "ultra64.h"

extern Vtx gShieldBeamImageDL_06000000_Vtx_fused_[];
extern Gfx gShieldBeamImageDL[27];
#define gShieldBeamImageCircleTex_WIDTH 16
#define gShieldBeamImageCircleTex_HEIGHT 16
extern u64 gShieldBeamImageCircleTex[TEX_LEN(u64, gShieldBeamImageCircleTex_WIDTH, gShieldBeamImageCircleTex_HEIGHT, 16)];
#define gShieldBeamImageGerudoSymbolNewTex_WIDTH 32
#define gShieldBeamImageGerudoSymbolNewTex_HEIGHT 32
extern u64 gShieldBeamImageGerudoSymbolNewTex[TEX_LEN(u64, gShieldBeamImageGerudoSymbolNewTex_WIDTH, gShieldBeamImageGerudoSymbolNewTex_HEIGHT, 16)];
extern Vtx gShieldBeamGlowDL_06000B90_Vtx[];
extern Gfx gShieldBeamGlowDL[21];
#define gShieldBeamGlowRayTex_WIDTH 8
#define gShieldBeamGlowRayTex_HEIGHT 256
extern u64 gShieldBeamGlowRayTex[TEX_LEN(u64, gShieldBeamGlowRayTex_WIDTH, gShieldBeamGlowRayTex_HEIGHT, 16)];

extern Gfx gMajoraShieldBeamImageDL[];
extern Gfx gMajoraShieldBeamGlowDL[];

#endif
