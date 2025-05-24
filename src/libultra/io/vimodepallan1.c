/**
 * @file vimodepallan1.c
 *
 * PAL LAN1 Video Mode
 *
 * L = Low Resolution
 * A = Anti-Aliased
 * N = Deinterlaced
 * 1 = 16-bit Framebuffer
 */
#include "config.h"
#include "ultra64.h"
#include "ultra64/viint.h"

OSViMode osViModePalHan1 = {
    OS_VI_PAL_HAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_SERRATE_ON |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl
        WIDTH(1280),                   // width
        BURST(58, 30, 4, 69),          // burst
        VSYNC(624),                    // vSync
        HSYNC(3177, 23),               // hSync
        LEAP(3183, 3181),              // leap
        HSTART(128, 768),              // hStart
        SCALE(1, 0),                   // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(1280),        // origin
            SCALE(1, 0),         // yScale
            VSTART(93, 567),     // vStart
            BURST(107, 2, 9, 0), // vBurst
            VINTR(2),            // vIntr
        },
        {
            // [1]
            ORIGIN(2560),         // origin
            SCALE(1, 0),          // yScale
            VSTART(95, 569),      // vStart
            BURST(105, 2, 13, 0), // vBurst
            VINTR(2),             // vIntr
        },
    },
};

OSViMode osViModePalLan1 = {
    OS_VI_PAL_LAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_ANTIALIAS_MODE_1 |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl

#if HIRES
        WIDTH(640),                    // width
#elif ULTRA_WS
        WIDTH(576),                    // width
#elif WIDESCREEN
        WIDTH(424),                    // width
#else
        WIDTH(320),                    // width
#endif

        BURST(58, 30, 4, 69),          // burst
        VSYNC(625),                    // vSync
        HSYNC(3177, 23),               // hSync
        LEAP(3183, 3181),              // leap
        HSTART(128, 768),              // hStart

#if HIRES
        0x400,                         // xScale
#elif ULTRA_WS
        0x39A,                         // xScale
#elif WIDESCREEN
        0x2A6,                         // xScale
#else
        SCALE(2, 0),                   // xScale
#endif

        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]

#if HIRES
            ORIGIN(1280),       // origin
#elif ULTRA_WS
            ORIGIN(1152),       // origin
#elif WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

#if HIRES
            0x800,              // yScale
#else
            SCALE(1, 0),        // yScale
#endif

            VSTART(95, 569),     // vStart
            BURST(107, 2, 9, 0), // vBurst
            VINTR(2),            // vIntr
        },
        {
            // [1]

#if HIRES
            ORIGIN(1280),       // origin
#elif ULTRA_WS
            ORIGIN(1152),       // origin
#elif WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

#if HIRES
            0x800,              // yScale
#else
            SCALE(1, 0),        // yScale
#endif

            VSTART(95, 569),     // vStart
            BURST(107, 2, 9, 0), // vBurst
            VINTR(2),            // vIntr
        },
    },
};
