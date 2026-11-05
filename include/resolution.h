#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "z_math.h"
#include "main.h"

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: HIRES, 2: WIDE, 3: ULTRAWIDE, 4: HIRES_PRO
#define SCREEN_MODE         0
#define INGAME_ASPECT_RATIO 1

// Runtime aspect ratio, selected in game
#if INGAME_ASPECT_RATIO
    #define DEFAULT    0
    #define HIRES      0
    #define WIDESCREEN 1
    #define ULTRA_WS   0
    #define HIRES_PRO  0

    #define SCREEN_X          gScreenWidth
    #define SCREEN_WIDTH      gScreenWidth
    #define SCREEN_WIDTH_MAX  576
    #define SCREEN_WIDTH_INIT 320
    #define SCREEN_WIDTH_MONO 432
#else
// Derived from SCREEN_MODE
#define DEFAULT    (SCREEN_MODE == 0 ? 1 : 0) // SCREEN_DEFAULT   (320x240)
#define HIRES      (SCREEN_MODE == 1 ? 1 : 0) // SCREEN_HIRES     (640x480)
#define WIDESCREEN (SCREEN_MODE == 2 ? 1 : 0) // SCREEN_WIDE      (432x240)
#define ULTRA_WS   (SCREEN_MODE == 3 ? 1 : 0) // SCREEN_ULTRAWIDE (576x240)
#define HIRES_PRO  (SCREEN_MODE == 4 ? 1 : 0) // SCREEN_HIRES_PRO (640x240)

// Target width
#if HIRES
    #define SCREEN_X 640
#elif WIDESCREEN
    #define SCREEN_X 432
#elif ULTRA_WS
    #define SCREEN_X 576
#else
    #define SCREEN_X 320
#endif

// @setting: SCREEN_WIDTH
// Framebuffer size, which should match SCREEN_X in most cases
// Other values will work, but an uneven SCALE_X can lead to visual inconsistencies
#if HIRES_PRO
    #define SCREEN_WIDTH 640
#else
    #define SCREEN_WIDTH SCREEN_X
#endif
#define SCREEN_WIDTH_MAX  SCREEN_WIDTH
#define SCREEN_WIDTH_INIT SCREEN_WIDTH
#define SCREEN_WIDTH_MONO SCREEN_WIDTH
#endif

// SCREEN_HEIGHT
#if HIRES
    #define SCREEN_HEIGHT 480
#else
    #define SCREEN_HEIGHT 240
#endif



// Scaling definitions
#define HIRES_SCALE (SCREEN_HEIGHT / 240)
#if INGAME_ASPECT_RATIO
    #define SCALE_X 1.0f
#else
    #define SCALE_X     ((f32)(SCREEN_WIDTH) / (f32)(SCREEN_X))
#endif

// Scaling macros
#define HIRES_MULTIPLY(var)   ((var) * HIRES_SCALE)
#define HIRES_DIVIDE(var)     ((var) / HIRES_SCALE)
#define X_MULTIPLY(var)       ROUND((var) * SCALE_X)
#define X_DIVIDE(var)         ROUND((var) / SCALE_X)
#define X_HIRES_MULTIPLY(var) ROUND((var) * HIRES_SCALE * SCALE_X)
#define X_HIRES_DIVIDE(var)   ROUND((var) / HIRES_SCALE / SCALE_X)



// Hires shifts
#if HIRES
    #define HIRES_PX_SHIFT 1
#else
    #define HIRES_PX_SHIFT 0
#endif

// Widescreen shifts
#define WS_SHIFT_FULL    (SCREEN_X / HIRES_SCALE - 320)
#define WS_SHIFT_HALF    (WS_SHIFT_FULL / 2)
#define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)



// @setting: WS_JPEG
// Include widescreen JPEGs that have been squished from 420x240 to 320x240
// All screen modes can handle original and widescreen backgrounds
#if INGAME_ASPECT_RATIO
    #define GFXPRINT_SHIFT  ((SCREEN_WIDTH == 432) ? 6 : ((SCREEN_WIDTH == 576) ? 13 : 0))
    #define RAMPRINT_SHIFT  ((SCREEN_WIDTH == 432) ? 8 : ((SCREEN_WIDTH == 576) ? 17 : 0))
    #define LULLABY_SHIFT   ((SCREEN_WIDTH == 432) ? 0 : ((SCREEN_WIDTH == 576) ? 70 : 0))
    #define OCEFF_SHIFT     ((SCREEN_WIDTH == 432) ? 80 : ((SCREEN_WIDTH == 576) ? 155 : 18))
    #define WS_JPEG         1
    #define WS_PX_SHIFT     ((SCREEN_WIDTH == 320) ? 0 : 1)
    #define UWS_JPEG_SHIFT  73
#elif WIDESCREEN
    #define GFXPRINT_SHIFT  6
    #define RAMPRINT_SHIFT  8
    #define LULLABY_SHIFT   0
    #define OCEFF_SHIFT     80
    #define WS_JPEG         1
    #define WS_PX_SHIFT     1
#elif ULTRA_WS
    #define GFXPRINT_SHIFT  13
    #define RAMPRINT_SHIFT  17
    #define LULLABY_SHIFT   70
    #define OCEFF_SHIFT     155
    #define WS_JPEG         1
    #define WS_PX_SHIFT     1
#else
    #define GFXPRINT_SHIFT  0
    #define RAMPRINT_SHIFT  0
    #define LULLABY_SHIFT   0
    #define OCEFF_SHIFT     18
    #define WS_JPEG         0
    #define WS_PX_SHIFT     0
#endif

// Derived from WS_JPEG
#if WS_JPEG
    #define JPEG_SCALE 760
    #define JPEG_WIDTH 432
#else
    #define JPEG_SCALE 1024
    #define JPEG_WIDTH 320
#endif

#endif
