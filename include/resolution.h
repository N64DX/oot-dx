#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "main.h"

// @setting: SCREEN_MODE
#define SCREEN_MODE 0

// @setting: INGAME_ASPECT_RATIO
#define INGAME_ASPECT_RATIO 1

// Derived from settings above
#define DEFAULT    ((INGAME_ASPECT_RATIO) ? 0 : ((SCREEN_MODE == 0) ? 1 : 0)) // 320x240
#define WIDESCREEN ((INGAME_ASPECT_RATIO) ? 1 : ((SCREEN_MODE == 1) ? 1 : 0)) // 432x240
#define ULTRA_WS   ((INGAME_ASPECT_RATIO) ? 0 : ((SCREEN_MODE == 2) ? 1 : 0)) // 576x240

// Dynamic or static SCREEN_WIDTH
#define SCREEN_WIDTH ((INGAME_ASPECT_RATIO) ? gScreenWidth : ((ULTRA_WS) ? 576 : ((WIDESCREEN) ? 432 : 320)))

// Aspect ratio variables
#define SCREEN_WIDTH_INIT ((INGAME_ASPECT_RATIO) ? 320 : SCREEN_WIDTH)
#define SCREEN_WIDTH_MONO ((INGAME_ASPECT_RATIO) ? 432 : SCREEN_WIDTH)
#define SCREEN_WIDTH_MAX  ((INGAME_ASPECT_RATIO) ? 576 : SCREEN_WIDTH)

// Widescreen shifts
#define GFXPRINT_SHIFT   ((SCREEN_WIDTH == 432) ? 6  : ((SCREEN_WIDTH == 576) ? 13  : 0 ))
#define RAMPRINT_SHIFT   ((SCREEN_WIDTH == 432) ? 8  : ((SCREEN_WIDTH == 576) ? 17  : 0 ))
#define LULLABY_SHIFT    ((SCREEN_WIDTH == 432) ? 0  : ((SCREEN_WIDTH == 576) ? 70  : 0 ))
#define OCEFF_SHIFT      ((SCREEN_WIDTH == 432) ? 80 : ((SCREEN_WIDTH == 576) ? 155 : 18))
#define WS_JPEG          ((INGAME_ASPECT_RATIO) ? 1  : ((SCREEN_WIDTH == 320) ? 0   : 1 ))
#define WS_PX_SHIFT      ((SCREEN_WIDTH == 320) ? 0  : 1)
#define WS_SHIFT_FULL    (SCREEN_WIDTH - 320)
#define WS_SHIFT_HALF    (WS_SHIFT_FULL / 2)
#define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)

// JPEG scaling, width and scissor size
#define JPEG_SCALE ((WS_JPEG) ? 760 : 1024)
#define JPEG_WIDTH ((WS_JPEG) ? 432 : 320)
#define JPEG_SHIFT ((SCREEN_WIDTH - JPEG_WIDTH) / 2)

#endif
