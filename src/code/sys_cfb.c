#include "sys_cfb.h"

#include "libu64/debug.h"
#include "attributes.h"
#include "gfx.h"
#include "line_numbers.h"
#include "printf.h"
#include "translation.h"

#pragma increment_block_number "gc-eu:128 gc-eu-mq:128 gc-jp:128 gc-jp-ce:128 gc-jp-mq:128 gc-us:128 gc-us-mq:128" \
                               "pal-1.1:128"

uintptr_t sSysCfbFbPtr[3];
uintptr_t sSysCfbEnd;

void SysCfb_Init(s32 n64dd) {
    u32 screenSize;
    UNUSED_NDEBUG uintptr_t tmpFbEnd;

    if (osMemSize >= 0x800000) {
        PRINTF(T("８Ｍバイト以上のメモリが搭載されています\n", "8MB or more memory is installed\n"));
        sSysCfbEnd = 0x80800000;
    } else if (osMemSize >= 0x400000) {
        PRINTF("RAM4M mode\n");
        sSysCfbEnd = 0x80400000;
    } else {
        LogUtils_HungupThread("../sys_cfb.c", LN4(305, 308, 322, 341, 354));
    }

    screenSize = SCREEN_WIDTH * SCREEN_HEIGHT;
    sSysCfbEnd &= ~0x3F;

    if (1) {}

    PRINTF(T("システムが使用する最終アドレスは %08x です\n", "The final address used by the system is %08x\n"),
           sSysCfbEnd);
    sSysCfbFbPtr[FRAMEBUFFER_0] = sSysCfbEnd - (screenSize * 6);
    sSysCfbFbPtr[FRAMEBUFFER_1] = sSysCfbEnd - (screenSize * 4);
    sSysCfbFbPtr[REDRAW_BUFFER] = sSysCfbEnd - (screenSize * 2);
    PRINTF(T("フレームバッファのアドレスは %08x と %08x です\n", "Frame buffer addresses are %08x and %08x\n"),
           sSysCfbFbPtr[0], sSysCfbFbPtr[1]);
}

void SysCfb_Reset(void) {
    sSysCfbFbPtr[FRAMEBUFFER_0] = 0;
    sSysCfbFbPtr[FRAMEBUFFER_1] = 0;
    sSysCfbFbPtr[REDRAW_BUFFER] = 0;
    sSysCfbEnd = 0;
}

void* SysCfb_GetFbPtr(s32 idx) {
    if (idx < 3) {
        return (void*)sSysCfbFbPtr[idx];
    }
    return NULL;
}

void* SysCfb_GetFbEnd(void) {
    return (void*)sSysCfbEnd;
}
