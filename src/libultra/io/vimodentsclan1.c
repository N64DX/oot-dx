/**
 * @file vimodentsclan1.c
 *
 * NTSC LAN1 Video Mode
 *
 * L = Low Resolution
 * A = Anti-Aliased
 * N = Deinterlaced
 * 1 = 16-bit Framebuffer
 */
#include "resolution.h"
#include "ultra64.h"
#include "ultra64/viint.h"

OSViMode osViModeNtscHan1 = {
    OS_VI_NTSC_HAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_SERRATE_ON |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl
        WIDTH(1280),                   // width
        BURST(57, 34, 5, 62),          // burst
        VSYNC(524),                    // vSync
        HSYNC(3093, 0),                // hSync
        LEAP(3093, 3093),              // leap
        HSTART(108, 748),              // hStart
        SCALE(1, 0),                   // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(1280),       // origin
            SCALE(1, 0),        // yScale
            VSTART(35, 509),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]
            ORIGIN(2560),       // origin
            SCALE(1, 0),        // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};

OSViMode osViModeNtscLan1 = {
    OS_VI_NTSC_LAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_ANTIALIAS_MODE_1 |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl
        WIDTH(SCREEN_WIDTH),           // width
        BURST(57, 34, 5, 62),          // burst
        VSYNC(525),                    // vSync
        HSYNC(3093, 0),                // hSync
        LEAP(3093, 3093),              // leap
        HSTART(108, 748),              // hStart
        (SCREEN_WIDTH*512)/320,        // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(SCREEN_WIDTH * 2),  // origin
            (SCREEN_HEIGHT*1024)/240,  // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]
            ORIGIN(SCREEN_WIDTH * 2),  // origin
            (SCREEN_HEIGHT*1024)/240,  // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};
