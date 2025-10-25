#include "title_static_save.h"

#include "sys_matrix.h"
#include "ultra64.h"

#if OOT_NTSC
u64 gFileSelFile4ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile4ButtonJPNTex.ia16.inc.c"
};

u64 gFileSelFile5ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile5ButtonJPNTex.ia16.inc.c"
};

u64 gFileSelFile6ButtonJPNTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile6ButtonJPNTex.ia16.inc.c"
};
#endif

u64 gFileSelFile4ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile4ButtonENGTex.ia16.inc.c"
};

u64 gFileSelFile5ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile5ButtonENGTex.ia16.inc.c"
};

u64 gFileSelFile6ButtonENGTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile6ButtonENGTex.ia16.inc.c"
};

#if OOT_NTSC_N64 || OOT_PAL
u64 gFileSelFile4ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile4ButtonGERTex.ia16.inc.c"
};

u64 gFileSelFile5ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile5ButtonGERTex.ia16.inc.c"
};

u64 gFileSelFile6ButtonGERTex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile6ButtonGERTex.ia16.inc.c"
};

u64 gFileSelFile4ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile4ButtonFRATex.ia16.inc.c"
};

u64 gFileSelFile5ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile5ButtonFRATex.ia16.inc.c"
};

u64 gFileSelFile6ButtonFRATex[TEX_LEN(u64, gFileSelFileButtonTex_WIDTH, gFileSelFileButtonTex_HEIGHT, 16)] = {
#include "assets/textures/title_static/gFileSelFile6ButtonFRATex.ia16.inc.c"
};
#endif
