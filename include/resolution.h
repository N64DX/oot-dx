#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "config.h"

// HIRES values
#if HIRES
    #define HIRES_SCALE 2
    #define HIRES_PX_SHIFT 1
#else
    #define HIRES_SCALE 1
    #define HIRES_PX_SHIFT 0
#endif

// WIDESCREEN, ULTRA_WS and DEFAULT values
#if WIDESCREEN
    #define ASPECT_RATIO (16.0f / 9.0f)
    #define FBDEMO_SHIFT 104
    #define GFXPRINT_SHIFT 6
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 80
    #define TITLE_SHIFT 156
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL 104
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#elif ULTRA_WS
    #define ASPECT_RATIO 2.40f
    #define FBDEMO_SHIFT 256
    #define GFXPRINT_SHIFT 13
    #define LULLABY_SHIFT 70
    #define OCEFF_SHIFT 155
    #define TITLE_SHIFT 376
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL 256
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#else
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

// HIRES scaling
#define HIRES_MULTIPLY(var) (var * HIRES_SCALE)
#define HIRES_DIVIDE(var) (var / HIRES_SCALE)

// Beating heart position
#define beatingHeartPulsingSizeX (((-130.0f) - WS_SHIFT_HALF) * HIRES_SCALE)
#define beatingHeartPulsingSizeY (94.5f * HIRES_SCALE)

#endif
