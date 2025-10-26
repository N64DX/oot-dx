#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "z_math.h"

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: HIRES, 2: WIDE, 3: ULTRAWIDE, 4: HIRES_PRO
#define SCREEN_MODE 0

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

// SCREEN_HEIGHT
#if HIRES
    #define SCREEN_HEIGHT 480
#else
    #define SCREEN_HEIGHT 240
#endif



// Scaling definitions
#define HIRES_SCALE (SCREEN_HEIGHT / 240)
#define SCALE_X     ((f32)(SCREEN_WIDTH) / (f32)(SCREEN_X))

// Scaling macros
#define HIRES_MULTIPLY(var) ((var) * HIRES_SCALE)
#define HIRES_DIVIDE(var)   ((var) / HIRES_SCALE)
#define X_MULTIPLY(var)     ROUND((var) * SCALE_X)
#define X_DIVIDE(var)       ROUND((var) / SCALE_X)



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
#define C_BUTTON_EQUIP_1 (WS_SHIFT_FULL * 5 + 660)
#define C_BUTTON_EQUIP_2 (WS_SHIFT_FULL * 5 + 900)
#define C_BUTTON_EQUIP_3 (WS_SHIFT_FULL * 5 + 1140)



// @setting: WS_JPEG
// Include widescreen JPEGs that have been squished from 420x240 to 320x240
// All screen modes can handle original and widescreen backgrounds
#if WIDESCREEN
    #define GFXPRINT_SHIFT  6
    #define LULLABY_SHIFT   0
    #define OCEFF_SHIFT     80
    #define WS_JPEG         1
    #define WS_PX_SHIFT     1
#elif ULTRA_WS
    #define GFXPRINT_SHIFT  13
    #define LULLABY_SHIFT   70
    #define OCEFF_SHIFT     155
    #define WS_JPEG         1
    #define WS_PX_SHIFT     1
#else
    #define GFXPRINT_SHIFT  0
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

// Shrine scene light settings
// Out of bounds collision can still be seen despite being recolored black
// Changing the light settings hides it, but also changes appearance of the halo 
#if ((WIDESCREEN && !WS_JPEG) || ULTRA_WS)
    #define SHRINE_LIGHT_1   0x00
    #define SHRINE_LIGHT_2   0x00
    #define SHRINE_LIGHT_3   0x07FA
    #define SHRINE_N_LIGHT_1 0x00
    #define SHRINE_N_LIGHT_2 0x00
    #define SHRINE_N_LIGHT_3 0x07DA
    #define SHRINE_R_LIGHT_1 0x00
    #define SHRINE_R_LIGHT_2 0x00
    #define SHRINE_R_LIGHT_3 0x07EA
#else
    #define SHRINE_LIGHT_1   0x82
    #define SHRINE_LIGHT_2   0x8C
    #define SHRINE_LIGHT_3   0x07CA
    #define SHRINE_N_LIGHT_1 0x12
    #define SHRINE_N_LIGHT_2 0x1C
    #define SHRINE_N_LIGHT_3 0x07CA
    #define SHRINE_R_LIGHT_1 0x32
    #define SHRINE_R_LIGHT_2 0x37
    #define SHRINE_R_LIGHT_3 0x07CA
#endif

#endif
