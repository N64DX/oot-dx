/*
 * File: z_title.c
 * Overlay: ovl_title
 * Description: Displays the Nintendo Logo
 */

#include "libu64/gfxprint.h"
#if PLATFORM_N64
#include "cic6105.h"
#include "n64dd.h"
#endif

#include "alloca.h"
#include "build.h"
#include "console_logo_state.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "padmgr.h"
#include "printf.h"
#include "regs.h"
#include "resolution.h"
#include "segment_symbols.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "sys_debug_controller.h"
#include "sys_freeze.h"
#include "title_setup_state.h"
#include "versions.h"
#include "actor.h"
#include "environment.h"
#include "save.h"

#include "assets/textures/nintendo_rogo_static/nintendo_rogo_static.h"

void ConsoleLogo_PrintBuildInfo(Gfx** gfxP) {
#if OOT_VERSION == NTSC_1_0
    char buildInfo[] = "    NTSC 1.0";
#elif OOT_VERSION == NTSC_1_1
    char buildInfo[] = "    NTSC 1.1";
#elif OOT_VERSION == PAL_1_0
    char buildInfo[] = "     PAL 1.0";
#elif OOT_VERSION == NTSC_1_2
    char buildInfo[] = "    NTSC 1.2";
#elif OOT_VERSION == PAL_1_1
    char buildInfo[] = "     PAL 1.1";
#elif OOT_VERSION == GC_JP
    char buildInfo[] = "       GC JP";
#elif OOT_VERSION == GC_JP_MQ
    char buildInfo[] = "    GC JP MQ";
#elif OOT_VERSION == GC_US
    char buildInfo[] = "       GC US";
#elif OOT_VERSION == GC_US_MQ
    char buildInfo[] = "    GC US MQ";
#elif OOT_VERSION == GC_EU_MQ_DBG
    char buildInfo[] = "GC EU MQ DBG";
#elif OOT_VERSION == GC_EU
    char buildInfo[] = "       GC EU";
#elif OOT_VERSION == GC_EU_MQ
    char buildInfo[] = "    GC EU MQ";
#elif OOT_VERSION == GC_JP_CE
    char buildInfo[] = "    GC JP CE";
#elif OOT_VERSION == IQUE_CN
    char buildInfo[] = "     IQUE CN";
#else
    char buildInfo[] = "     UNKNOWN";
#endif

#if HIRES
    char screenModeInfo[] = "640x480i";
#elif WIDESCREEN
    char screenModeInfo[] = "424x240p";
#elif ULTRA_WS
    char screenModeInfo[] = "576x240p";
#else
    char screenModeInfo[] = "320x240p";
#endif

    Gfx* gfx;
    GfxPrint* printer;

    gfx = *gfxP;
    gfx = Gfx_SetupDL_28(gfx);
    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, gfx);
    GfxPrint_SetColor(printer, 125, 125, 255, 255);
    GfxPrint_SetPos(printer, 8, 20);
    GfxPrint_Printf(printer, "OoT DX v%s", DX_VERSION);
    GfxPrint_SetColor(printer, 125, 255, 125, 255);
    GfxPrint_SetPos(printer, 21, 20);
    GfxPrint_Printf(printer, DEBUG_FEATURES ? "       Debug" : "     Release");
    GfxPrint_SetColor(printer, 255, 255, 125, 255);
    GfxPrint_SetPos(printer, 21, 22);
    GfxPrint_Printf(printer, "%s", buildInfo);
    GfxPrint_SetColor(printer, 255, 125, 125, 255);
    GfxPrint_SetPos(printer, 8, 22);
    GfxPrint_Printf(printer, "%s", screenModeInfo);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    GfxPrint_SetPos(printer, 8, 25);
    GfxPrint_Printf(printer, "By Admentus & GhostlyDark");
    gfx = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);
    *gfxP = gfx;
}

void ConsoleLogo_PrintExpansionPak(Gfx** gfxP) {
    Gfx* gfx;
    GfxPrint* printer;
    
    gfx = *gfxP;
    gfx = Gfx_SetupDL_28(gfx);
    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, gfx);
    
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    GfxPrint_SetPos(printer, 11, 19);
    GfxPrint_Printf(printer, "N64 EXPANSION PAK");
    GfxPrint_SetPos(printer, 13, 20);
    GfxPrint_Printf(printer, "NOT INSTALLED");
	
    GfxPrint_SetPos(printer, 5, 22);
    GfxPrint_Printf(printer, "THE N64 EXPANSION PAK ACCESSORY");  
	GfxPrint_SetPos(printer, 5, 23);
    GfxPrint_Printf(printer, "MUST BE INSTALLED IN THE N64 FOR");	
	GfxPrint_SetPos(printer, 5, 24);
    GfxPrint_Printf(printer, "THIS GAME. SEE THE N64 EXPANSION");
	GfxPrint_SetPos(printer, 7, 25);
    GfxPrint_Printf(printer, "PAK INSTRUCTION BOOKLET.");
    
    gfx = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);
    *gfxP = gfx;
}

void ConsoleLogo_Calc(ConsoleLogoState* this) {
    if ((this->coverAlpha == 0) && (this->visibleDuration != 0)) {
        this->unk_1D4--;
        this->visibleDuration--;
        if (this->unk_1D4 == 0) {
            this->unk_1D4 = 400;
        }
    } else {
        this->coverAlpha += this->addAlpha;
        if (this->coverAlpha <= 0) {
            this->coverAlpha = 0;
            this->addAlpha = 3;
        } else if (this->coverAlpha >= 255) {
            this->coverAlpha = 255;
            this->exit = true;
        }
    }
    this->uls = this->ult & 0x7F;
    this->ult++;
}

void ConsoleLogo_Calc_Jumper_Pack(ConsoleLogoState* this) {
    if ((this->coverAlpha == 0) && (this->visibleDuration != 0)) {
        this->visibleDuration--;
        this->unk_1D4--;
        if (this->unk_1D4 == 0)
            this->unk_1D4 = 100;
    } else {
        this->coverAlpha += this->addAlpha;
        if (this->coverAlpha <= 0)
            this->coverAlpha = 0;
    }
    this->uls = this->ult & 0x7F;
    this->ult++;
}

void ConsoleLogo_SetupView(ConsoleLogoState* this, f32 x, f32 y, f32 z) {
    View* view = &this->view;
    Vec3f eye;
    Vec3f lookAt;
    Vec3f up;

    eye.x = x;
    eye.y = y;
    eye.z = z;
    up.x = up.z = 0.0f;
    up.y = 1.0f;
    lookAt.x = lookAt.y = lookAt.z = 0.0f;

    View_SetPerspective(view, 30.0f, 10.0f, 12800.0f);
    View_LookAt(view, &eye, &lookAt, &up);
    View_Apply(view, VIEW_ALL);
}

void ConsoleLogo_Draw(ConsoleLogoState* this) {
    static s16 sTitleRotY = 0;
    static Lights1 sTitleLights = gdSPDefLights1(100, 100, 100, 255, 255, 255, 69, 69, 69);

    u16 y;
    u16 idx;
    s32 pad1;
    Vec3f v3;
    Vec3f v1;
    Vec3f v2;
    s32 pad2;
    s32 pad3;

    OPEN_DISPS(this->state.gfxCtx, "../z_title.c", 395);

    v3.x = 69;
    v3.y = 69;
    v3.z = 69;
    v2.x = -4949.148;
    v2.y = 4002.5417;
    v1.x = 0;
    v1.y = 0;
    v1.z = 0;
    v2.z = 1119.0837;

    func_8002EABC(&v1, &v2, &v3, this->state.gfxCtx);
    gSPSetLights1(POLY_OPA_DISP++, sTitleLights);
    ConsoleLogo_SetupView(this, 0, 150.0, 300.0);
    Gfx_SetupDL_25Opa(this->state.gfxCtx);
    Matrix_Translate(-53.0, -5.0, 0, MTXMODE_NEW);
    Matrix_Scale(1.0, 1.0, 1.0, MTXMODE_APPLY);
    Matrix_RotateZYX(0, sTitleRotY, 0, MTXMODE_APPLY);

    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, this->state.gfxCtx, "../z_title.c", 424);
    gSPDisplayList(POLY_OPA_DISP++, gNintendo64LogoDL);
    Gfx_SetupDL_39Opa(this->state.gfxCtx);
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCycleType(POLY_OPA_DISP++, G_CYC_2CYCLE);
    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_PASS, G_RM_CLD_SURF2);
    gDPSetCombineLERP(POLY_OPA_DISP++, TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT,
                      COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 170, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 255, 128);

    gDPLoadMultiBlock(POLY_OPA_DISP++, nintendo_rogo_static_Tex_001800, 0x100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0,
                      G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 11);

    for (idx = 0, y = 94; idx < 16; idx++, y += 2) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, &((u8*)nintendo_rogo_static_Tex_000000)[0x180 * idx], G_IM_FMT_I,
                            G_IM_SIZ_8b, 192, 2, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                            G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gDPSetTileSize(POLY_OPA_DISP++, 1, this->uls, (this->ult & 0x7F) - (idx << 2), 0, 0);
        gSPTextureRectangle(POLY_OPA_DISP++, HIRES_MULTIPLY((WS_SHIFT_HALF + 97) << 2), HIRES_MULTIPLY(y << 2), HIRES_MULTIPLY((WS_SHIFT_HALF + 289) << 2), HIRES_MULTIPLY((y + 2) << 2), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(1 << 10),
                            HIRES_DIVIDE(1 << 10));
    }

    Environment_FillScreen(this->state.gfxCtx, 0, 0, 0, (s16)this->coverAlpha, FILL_SCREEN_XLU);

    sTitleRotY += 300;

    CLOSE_DISPS(this->state.gfxCtx, "../z_title.c", 483);
}

void ConsoleLogo_DrawQuestImageRGBA32(GraphicsContext* gfxCtx, s16 centerX, s16 centerY, u8* source, u32 width, u32 height) {
    u8* curTexture;
    s32 textureCount, rectLeft, rectTop, remainingSize, textureSize, i;
    u32 textureHeight;

    OPEN_DISPS(gfxCtx, "../z_title.c", UNK_LINE);

    Gfx_SetupDL_56Opa(gfxCtx);

    curTexture = source;
    rectLeft = centerX - (width / 2);
    rectTop = centerY - (height / 2);
    remainingSize = (width * height) << 2;
    textureHeight = 4096 / (width << 2);
    textureSize = (width * textureHeight) << 2;
    textureCount = remainingSize / textureSize;
    if ((remainingSize % textureSize) != 0)
        textureCount++;

    gDPSetTileCustom(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, width - 1, textureHeight - 1, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    remainingSize -= textureSize;

    for (i=0; i<textureCount; i++) {
        gDPSetTextureImage(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, width, curTexture);
        gDPLoadSync(POLY_OPA_DISP++);
        gDPLoadTile(POLY_OPA_DISP++, G_TX_LOADTILE, 0, 0, (width - 1) << 2, (textureHeight - 1) << 2);
        gSPTextureRectangle(POLY_OPA_DISP++, HIRES_MULTIPLY((rectLeft + WS_SHIFT_HALF) << 2), HIRES_MULTIPLY(rectTop << 2), HIRES_MULTIPLY((rectLeft + WS_SHIFT_HALF + (s32)width) << 2), HIRES_MULTIPLY((rectTop + textureHeight) << 2), G_TX_RENDERTILE, 0, 0, HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));
        curTexture += textureSize;
        rectTop += textureHeight;

        if ((remainingSize - textureSize) < 0) {
            if (remainingSize > 0) {
                textureHeight = remainingSize / (s32)(width << 2);
                remainingSize -= textureSize;
                gDPSetTileCustom(POLY_OPA_DISP++, G_IM_FMT_RGBA, G_IM_SIZ_32b, 0, 0, width - 1, textureHeight - 1, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
            }
        } else remainingSize -= textureSize;
    }

    CLOSE_DISPS(gfxCtx, "../z_title.c", UNK_LINE);
}

void ConsoleLogo_Draw_Jumper_Pack(ConsoleLogoState* this) {
    static s16 sTitleRotY = 0;
    static Lights1 sTitleLights = gdSPDefLights1(100, 100, 100, 255, 255, 255, 69, 69, 69);

    u16 y, idx;
    Vec3f v1, v2, v3;

    OPEN_DISPS(this->state.gfxCtx, "../z_title.c", 395);

    v1.x = v1.y = v1.z = 0;
    v2.x = -4949.148;
    v2.y = 4002.5417;
    v2.z = 1119.0837;
    v3.x = v3.y = v3.z = 69;

    func_8002EABC(&v1, &v2, &v3, this->state.gfxCtx);
    gSPSetLights1(POLY_OPA_DISP++, sTitleLights);
    ConsoleLogo_SetupView(this, 0, 150.0, 300.0);
    Gfx_SetupDL_39Opa(this->state.gfxCtx);
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCycleType(POLY_OPA_DISP++, G_CYC_2CYCLE);
    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_PASS, G_RM_CLD_SURF2);
    gDPSetCombineLERP(POLY_OPA_DISP++, TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 256);
    ConsoleLogo_DrawQuestImageRGBA32(this->state.gfxCtx, 160, 80, (u8*)gNintendo64ExpansionPakLogo, 128, 128);
    Environment_FillScreen(this->state.gfxCtx, 0, 0, 0, (s16)this->coverAlpha, FILL_SCREEN_XLU);
    sTitleRotY += 300;
    CLOSE_DISPS(this->state.gfxCtx, "../z_title.c", 483);
}

void ConsoleLogo_Main(GameState* thisx) {
    ConsoleLogoState* this = (ConsoleLogoState*)thisx;
    Gfx* gfx;

    OPEN_DISPS(this->state.gfxCtx, "../z_title.c", 494);

    gSPSegment(POLY_OPA_DISP++, 0, NULL);
    gSPSegment(POLY_OPA_DISP++, 1, this->staticSegment);
    Gfx_SetupFrame(this->state.gfxCtx, true, 0, 0, 0, 0);

    if (osMemSize >= 0x800000) {
        ConsoleLogo_Calc(this);
        ConsoleLogo_Draw(this);
        gfx = POLY_OPA_DISP;
        ConsoleLogo_PrintBuildInfo(&gfx);
        POLY_OPA_DISP = gfx;
    } else {
        ConsoleLogo_Calc_Jumper_Pack(this);
        ConsoleLogo_Draw_Jumper_Pack(this); 
        gfx = POLY_OPA_DISP;
        ConsoleLogo_PrintExpansionPak(&gfx);
        POLY_OPA_DISP = gfx;
    }

    if (this->exit) {
        gSaveContext.seqId = (u8)NA_BGM_DISABLED;
        gSaveContext.natureAmbienceId = 0xFF;
        gSaveContext.gameMode = GAMEMODE_TITLE_SCREEN;
        this->state.running = false;
        SET_NEXT_GAMESTATE(&this->state, TitleSetup_Init, TitleSetupState);
    }

    CLOSE_DISPS(this->state.gfxCtx, "../z_title.c", 541);
}

void ConsoleLogo_Destroy(GameState* thisx) {
    ConsoleLogoState* this = (ConsoleLogoState*)thisx;

#if PLATFORM_N64
    if (this->unk_1E0) {
        if (func_801C7818() != 0) {
            func_800D31A0();
        }
        func_801C7268();
    }
#endif

#if PLATFORM_N64
    func_800014E8();
#endif
}

void ConsoleLogo_Init(GameState* thisx) {
    u32 size = (uintptr_t)_nintendo_rogo_staticSegmentRomEnd - (uintptr_t)_nintendo_rogo_staticSegmentRomStart;
    ConsoleLogoState* this = (ConsoleLogoState*)thisx;

#if PLATFORM_N64
    if ((D_80121210 != 0) && (D_80121211 != 0) && (D_80121212 == 0)) {
        if (func_801C7658() != 0) {
            func_800D31A0();
        }
        this->unk_1E0 = true;
    } else {
        this->unk_1E0 = false;
    }
#endif

    this->staticSegment = GAME_STATE_ALLOC(&this->state, size, "../z_title.c", 611);
    PRINTF("z_title.c\n");
    ASSERT(this->staticSegment != NULL, "this->staticSegment != NULL", "../z_title.c", 614);
    DMA_REQUEST_SYNC(this->staticSegment, (uintptr_t)_nintendo_rogo_staticSegmentRomStart, size, "../z_title.c", 615);
    R_UPDATE_RATE = 1;
    Matrix_Init(&this->state);
    View_Init(&this->view, this->state.gfxCtx);
    this->state.main = ConsoleLogo_Main;
    this->state.destroy = ConsoleLogo_Destroy;
    this->exit = false;

#if OOT_VERSION < GC_US || PLATFORM_IQUE
    if (!(gPadMgr.validCtrlrsMask & 1)) {
        gSaveContext.fileNum = 0xFEDC;
    } else {
        gSaveContext.fileNum = 0xFF;
    }
#else
    gSaveContext.fileNum = 0xFF;
#endif

    Sram_Alloc(&this->state, &this->sramCtx);
    Sram_InitSram(&this->state, &this->sramCtx);

    if (osMemSize >= 0x800000 && SKIP_LOGO)
        this->exit = true;

    this->ult = 0;
    this->unk_1D4 = 0x14;
    this->coverAlpha = 255;
    this->addAlpha = -3;
    this->visibleDuration = 0x3C;
}
