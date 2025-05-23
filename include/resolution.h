#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "config.h"

#define HIRES_MULTIPLY(var) (var * (HIRES ? 2 : 1))
#define HIRES_DIVIDE(var) (var / (HIRES ? 2 : 1))

#if WIDESCREEN
    #define ASPECT_RATIO (16.0f / 9.0f)
    #define FBDEMO_SHIFT 104
    #define GFXPRINT_SHIFT 6
    #define OCEFF_SHIFT 80
    #define TITLE_SHIFT 156
    #define WS_SHIFT_FULL 104
    #define WS_SHIFT_HALF 52
    #define WS_SHIFT_QUARTER 26
#elif ULTRA_WS
    #define ASPECT_RATIO (21.0f / 9.0f)
    #define FBDEMO_SHIFT 240
    #define GFXPRINT_SHIFT 12
    #define OCEFF_SHIFT 155
    #define TITLE_SHIFT 360
    #define WS_SHIFT_FULL 240
    #define WS_SHIFT_HALF 120
    #define WS_SHIFT_QUARTER 60
#else
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

#if ULTRA_WS
    #define beatingHeartPulsingSizeX ((-130.0f) - 120.0f)
    #define beatingHeartPulsingSizeY (94.5f)
#else
    #define beatingHeartPulsingSizeX ((WIDESCREEN ? (-182.0f) : (-130.0f)) * (HIRES ? 2 : 1))
    #define beatingHeartPulsingSizeY (94.5f * (HIRES ? 2 : 1))
#endif

#if WIDESCREEN || ULTRA_WS
    #define WS_PX_SHIFT 1
#else
    #define WS_PX_SHIFT 0
#endif

#if ULTRA_WS
    #define LULLABY_SHIFT 60
#else
    #define LULLABY_SHIFT 0
#endif

#endif
