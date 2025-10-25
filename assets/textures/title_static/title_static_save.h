#ifndef TITLE_STATIC_SAVE_H
#define TITLE_STATIC_SAVE_H

#include "tex_len.h"
#include "ultra64.h"
#include "versions.h"

#define gFileSelFileButtonTex_WIDTH 64
#define gFileSelFileButtonTex_HEIGHT 16

#if OOT_NTSC
extern u64 gFileSelFile4ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile5ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile6ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
#endif

extern u64 gFileSelFile4ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile5ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile6ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];

#if OOT_NTSC_N64 || OOT_PAL
extern u64 gFileSelFile4ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile5ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile6ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];

extern u64 gFileSelFile4ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile5ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
extern u64 gFileSelFile6ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)];
#endif

#endif
