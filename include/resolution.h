#ifndef RESOLUTION_H
#define RESOLUTION_H

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: HIRES, 2: WIDE, 3: ULTRAWIDE
#define SCREEN_MODE 0

// Derived from SCREEN_MODE
#define DEFAULT    (SCREEN_MODE == 0 ? 1 : 0) // SCREEN_DEFAULT   (320x240)
#define HIRES      (SCREEN_MODE == 1 ? 1 : 0) // SCREEN_HIRES     (640x480)
#define WIDESCREEN (SCREEN_MODE == 2 ? 1 : 0) // SCREEN_WIDE      (424x240)
#define ULTRA_WS   (SCREEN_MODE == 3 ? 1 : 0) // SCREEN_ULTRAWIDE (576x240)

// Include widescreen JPEGs that have been squished from 420x240 to 320x240
// All screen modes can handle original and widescreen backgrounds
// The following configuration is recommended however
#if WIDESCREEN || ULTRA_WS
    #define WS_JPEG true
#else
    #define WS_JPEG false
#endif

// Derived from WS_JPEG
#if WS_JPEG
    #define JPEG_POS_DEFAULT ((320 - 424) * 2)
    #define JPEG_POS_WIDE 0
    #define JPEG_POS_ULTRAWIDE ((576 - 424) * 2)
    #define JPEG_WIDTH 424
    #define JPEG_SCALE 775
#else
    #define JPEG_POS_DEFAULT 0
    #define JPEG_POS_WIDE ((424 - 320) * 2)
    #define JPEG_POS_ULTRAWIDE ((576 - 320) * 2)
    #define JPEG_WIDTH 320
    #define JPEG_SCALE 1024
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

// Values
#if HIRES
    #define SCREEN_WIDTH 640
    #define SCREEN_HEIGHT 480
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define C_BUTTON_EQUIP_1 660
    #define C_BUTTON_EQUIP_2 900
    #define C_BUTTON_EQUIP_3 1140
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define HIRES_SCALE 2
    #define HIRES_PX_SHIFT 1
    #define JPEG_FRAME_X (JPEG_POS_DEFAULT * 2)
    #define JPEG_FRAME_W (JPEG_WIDTH * 4 * 2)
    #define JPEG_FRAME_H (240 * 4 * 2)
    #define JPEG_SCALE_W (JPEG_SCALE / 2)
    #define JPEG_SCALE_H (1024 / 2)
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_MIRROR_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#elif WIDESCREEN
    #define SCREEN_WIDTH 424
    #define SCREEN_HEIGHT 240
    #define ASPECT_RATIO (16.0f / 9.0f)
    #define C_BUTTON_EQUIP_1 ((SCREEN_WIDTH - 320) * 5 + 660)
    #define C_BUTTON_EQUIP_2 ((SCREEN_WIDTH - 320) * 5 + 900)
    #define C_BUTTON_EQUIP_3 ((SCREEN_WIDTH - 320) * 5 + 1140)
    #define FBDEMO_SHIFT (SCREEN_WIDTH - 320)
    #define GFXPRINT_SHIFT 6
    #define HIRES_SCALE 1
    #define HIRES_PX_SHIFT 0
    #define JPEG_FRAME_X JPEG_POS_WIDE
    #define JPEG_FRAME_W (JPEG_WIDTH * 4)
    #define JPEG_FRAME_H (240 * 4)
    #define JPEG_SCALE_W JPEG_SCALE
    #define JPEG_SCALE_H 1024
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 80
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
    #define WS_MIRROR_SHIFT 16
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL (SCREEN_WIDTH - 320)
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#elif ULTRA_WS
    #define SCREEN_WIDTH 576
    #define SCREEN_HEIGHT 240
    #define ASPECT_RATIO 2.4f
    #define C_BUTTON_EQUIP_1 ((SCREEN_WIDTH - 320) * 5 + 660)
    #define C_BUTTON_EQUIP_2 ((SCREEN_WIDTH - 320) * 5 + 900)
    #define C_BUTTON_EQUIP_3 ((SCREEN_WIDTH - 320) * 5 + 1140)
    #define FBDEMO_SHIFT (SCREEN_WIDTH - 320)
    #define GFXPRINT_SHIFT 13
    #define HIRES_SCALE 1
    #define HIRES_PX_SHIFT 0
    #define JPEG_FRAME_X JPEG_POS_ULTRAWIDE
    #define JPEG_FRAME_W (JPEG_WIDTH * 4)
    #define JPEG_FRAME_H (240 * 4)
    #define JPEG_SCALE_W JPEG_SCALE
    #define JPEG_SCALE_H 1024
    #define LULLABY_SHIFT 70
    #define OCEFF_SHIFT 155
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
    #define WS_MIRROR_SHIFT 8
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL (SCREEN_WIDTH - 320)
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#else
    #define SCREEN_WIDTH 320
    #define SCREEN_HEIGHT 240
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define C_BUTTON_EQUIP_1 660
    #define C_BUTTON_EQUIP_2 900
    #define C_BUTTON_EQUIP_3 1140
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define HIRES_SCALE 1
    #define HIRES_PX_SHIFT 0
    #define JPEG_FRAME_X JPEG_POS_DEFAULT
    #define JPEG_FRAME_W (JPEG_WIDTH * 4)
    #define JPEG_FRAME_H (240 * 4)
    #define JPEG_SCALE_W JPEG_SCALE
    #define JPEG_SCALE_H 1024
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_MIRROR_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

// Scaling macros
#define HIRES_MULTIPLY(var) ((var) * HIRES_SCALE)
#define HIRES_DIVIDE(var)   ((var) / HIRES_SCALE)

#endif
