#ifndef RESOLUTION_H
#define RESOLUTION_H

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: HIRES, 2: WIDE, 3: ULTRAWIDE, 4: HIRES_PRO
#define SCREEN_MODE 4

// Derived from SCREEN_MODE
#define DEFAULT    (SCREEN_MODE == 0 ? 1 : 0) // SCREEN_DEFAULT   (320x240)
#define HIRES      (SCREEN_MODE == 1 ? 1 : 0) // SCREEN_HIRES     (640x480)
#define WIDESCREEN (SCREEN_MODE == 2 ? 1 : 0) // SCREEN_WIDE      (424x240)
#define ULTRA_WS   (SCREEN_MODE == 3 ? 1 : 0) // SCREEN_ULTRAWIDE (576x240)
#define HIRES_PRO  (SCREEN_MODE == 4 ? 1 : 0) // SCREEN_HIRES_PRO (640x240)

// @setting: WS_JPEG and widescreen definitions
// Include widescreen JPEGs that have been squished from 420x240 to 320x240
// All screen modes can handle original and widescreen backgrounds
#if WIDESCREEN || ULTRA_WS
    #define WS_JPEG true
    #define WS_PX_SHIFT 1
#else
    #define WS_JPEG false
    #define WS_PX_SHIFT 0
#endif

// Derived from WS_JPEG
#if WS_JPEG
    #define JPEG_SCALE 775
    #define JPEG_WIDTH 424
#else
    #define JPEG_SCALE 1024
    #define JPEG_WIDTH 320
#endif

// Shrine scene light settings
// Out of bounds collision can still be seen despite being recolored black
// Changing the light settings hides it, but also changes appearance of the halo 
#if ((WIDESCREEN && !WS_JPEG) || ULTRA_WS)
    #define SHRINE_LIGHT_1 0x00
    #define SHRINE_LIGHT_2 0x00
    #define SHRINE_LIGHT_3 0x07FA
    #define SHRINE_N_LIGHT_1 0x00
    #define SHRINE_N_LIGHT_2 0x00
    #define SHRINE_N_LIGHT_3 0x07DA
    #define SHRINE_R_LIGHT_1 0x00
    #define SHRINE_R_LIGHT_2 0x00
    #define SHRINE_R_LIGHT_3 0x07EA
#else
    #define SHRINE_LIGHT_1 0x82
    #define SHRINE_LIGHT_2 0x8C
    #define SHRINE_LIGHT_3 0x07CA
    #define SHRINE_N_LIGHT_1 0x12
    #define SHRINE_N_LIGHT_2 0x1C
    #define SHRINE_N_LIGHT_3 0x07CA
    #define SHRINE_R_LIGHT_1 0x32
    #define SHRINE_R_LIGHT_2 0x37
    #define SHRINE_R_LIGHT_3 0x07CA
#endif

// Fixed values
#if HIRES
    #define SCREEN_WIDTH 640
    #define SCREEN_HEIGHT 480
    #define SCREEN_X 640
    #define GFXPRINT_SHIFT 0
    #define HIRES_PX_SHIFT 1
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define WS_MIRROR_SHIFT 0
#elif WIDESCREEN
    #define SCREEN_WIDTH 424
    #define SCREEN_HEIGHT 240
    #define SCREEN_X 424
    #define GFXPRINT_SHIFT 6
    #define HIRES_PX_SHIFT 0
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 80
    #define WS_MIRROR_SHIFT 16
#elif ULTRA_WS
    #define SCREEN_WIDTH 576
    #define SCREEN_HEIGHT 240
    #define SCREEN_X 576
    #define GFXPRINT_SHIFT 13
    #define HIRES_PX_SHIFT 0
    #define LULLABY_SHIFT 70
    #define OCEFF_SHIFT 155
    #define WS_MIRROR_SHIFT 8
#elif HIRES_PRO
    #define SCREEN_WIDTH 640
    #define SCREEN_HEIGHT 240
    #define SCREEN_X 320
    #define GFXPRINT_SHIFT 0
    #define HIRES_PX_SHIFT 1
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define WS_MIRROR_SHIFT 0
#else
    #define SCREEN_WIDTH 320
    #define SCREEN_HEIGHT 240
    #define SCREEN_X 320
    #define GFXPRINT_SHIFT 0
    #define HIRES_PX_SHIFT 0
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define WS_MIRROR_SHIFT 0
#endif

// Scaling definitions
#define HIRES_SCALE (SCREEN_HEIGHT / 240)
#define SCALE_X (SCREEN_WIDTH / SCREEN_X)

// Scaling macros
#define HIRES_MULTIPLY(var) ((var) * HIRES_SCALE)
#define HIRES_DIVIDE(var)   ((var) / HIRES_SCALE)

// Aspect ratio
#define ASPECT_RATIO ((f32)(SCREEN_WIDTH) / SCALE_X / SCREEN_HEIGHT)

// JPEG
#define JPEG_FRAME_X ((SCREEN_WIDTH / HIRES_SCALE / SCALE_X - JPEG_WIDTH) * 2)
#define JPEG_FRAME_W (JPEG_WIDTH * 4 * HIRES_SCALE * SCALE_X)
#define JPEG_FRAME_H (240 * 4 * HIRES_SCALE)
#define JPEG_SCALE_W (JPEG_SCALE / HIRES_SCALE / SCALE_X)
#define JPEG_SCALE_H (1024 / HIRES_SCALE)

// Widescreen shifts
#define WS_SHIFT_FULL (SCREEN_WIDTH / HIRES_SCALE / SCALE_X - 320)
#define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
#define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#define C_BUTTON_EQUIP_1 (WS_SHIFT_FULL * 5 + 660)
#define C_BUTTON_EQUIP_2 (WS_SHIFT_FULL * 5 + 900)
#define C_BUTTON_EQUIP_3 (WS_SHIFT_FULL * 5 + 1140)
#define FBDEMO_SHIFT (WS_SHIFT_FULL + 18)
#define TITLE_SHIFT (WS_SHIFT_FULL / 3 * 2)

#endif
