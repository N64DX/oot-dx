#ifndef RESOLUTION_H
#define RESOLUTION_H

#define SCREEN_DEFAULT   0 // 320x240
#define SCREEN_HIRES     1 // 640x480
#define SCREEN_WIDE      2 // 424x240
#define SCREEN_ULTRAWIDE 3 // 576x240

// @setting: Use interlaced mode for hires
#define INTERLACED false

// @setting: SCREEN_MODE option
#define SCREEN_MODE SCREEN_DEFAULT

// Derived from SCREEN_MODE setting
#define HIRES (SCREEN_MODE == SCREEN_HIRES ? 1 : 0)
#define WIDESCREEN (SCREEN_MODE == SCREEN_WIDE ? 1 : 0)
#define ULTRA_WS (SCREEN_MODE == SCREEN_ULTRAWIDE ? 1 : 0)

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
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
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
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 80
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
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
    #define LULLABY_SHIFT 70
    #define OCEFF_SHIFT 155
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
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
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

// Scaling macros
#define HIRES_MULTIPLY(var) (var * HIRES_SCALE)
#define HIRES_DIVIDE(var) (var / HIRES_SCALE)

// Beating heart position
#define beatingHeartPulsingSizeX (((-130.0f) - WS_SHIFT_HALF) * HIRES_SCALE)
#define beatingHeartPulsingSizeY (94.5f * HIRES_SCALE)

#endif
