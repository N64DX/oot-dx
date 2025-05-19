#ifndef CONFIG_H
#define CONFIG_H

/**
 * 640x480 high resolution
*/
#define HIRES true

/**
 * Use Interlaced Mode for hires
*/
#define INTERLACED false

/**
 * Use low poly model for Link when the camera is far away
*/
#define LINK_LOD false

/**
 * 21:9 Widescreen
 * Extends the viewport to 640px over the original 320px
 * Incompatible with hires mode
*/
#define ULTRA_WS false

/**
 * 16:9 Widescreen
 * Extends the viewport to 424px over the original 320px
 * Uses 640x360 if hires mode is enabled
*/
#define WIDESCREEN false

#endif
