#ifndef CONFIG_H
#define CONFIG_H

#define SCREEN_DEFAULT   0 // 320x240
#define SCREEN_HIRES     1 // 640x480
#define SCREEN_WIDE      2 // 424x240
#define SCREEN_ULTRAWIDE 3 // 560x240

/**
 * Use Interlaced Mode for Hires
*/
#define INTERLACED false

/**
 * Use low poly model for Link when the camera is far away
*/
#define LINK_LOD false

/**
 * Choose Screen Mode
*/
#define SCREEN_MODE SCREEN_HIRES

// Derived from chosen Screen Mode
#define HIRES (SCREEN_MODE == SCREEN_HIRES ? 1 : 0)
#define WIDESCREEN (SCREEN_MODE == SCREEN_WIDE ? 1 : 0)
#define ULTRA_WS (SCREEN_MODE == SCREEN_ULTRAWIDE ? 1 : 0)

#endif
