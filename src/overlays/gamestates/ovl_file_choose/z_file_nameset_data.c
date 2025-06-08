#include "file_select.h"

#include "ultra64.h"
#include "gfx.h"
#include "versions.h"

Vtx gNameEntryVtx[] = {
#include "assets/overlays/ovl_file_choose/gNameEntryVtx.inc.c"
};

#if OOT_NTSC_N64
s16 gCharPageHira[] = {
#include "assets/overlays/ovl_file_choose/gCharPageHira.inc.c"
};

s16 gCharPageKata[] = {
#include "assets/overlays/ovl_file_choose/gCharPageKata.inc.c"
};

s16 gCharPageEng[] = {
#include "assets/overlays/ovl_file_choose/gCharPageEng.inc.c"
};

s16 gNextCharPage[] = {
#include "assets/overlays/ovl_file_choose/gNextCharPage.inc.c"
};

Vtx gOptionsMenuHeadersVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuHeadersAllVtx.inc.c"
};

Vtx gOptionsMenuSettingsVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuSettingsAllVtx.inc.c"
};

Vtx gOptionsMenuSettingsJapaneseVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuSettingsJapaneseVtx.inc.c"
};

Vtx gOptionsDividerSoundVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerSoundAllVtx.inc.c"
};

Vtx gOptionsDividerZTargetVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerZTargetAllVtx.inc.c"
};

Vtx gOptionsMenuLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuLanguageAllVtx.inc.c"
};

Vtx gOptionsDividerLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerLanguageAllVtx.inc.c"
};

#elif OOT_NTSC
s16 gCharPageHira[] = {
#include "assets/overlays/ovl_file_choose/gCharPageHira.inc.c"
};

s16 gCharPageKata[] = {
#include "assets/overlays/ovl_file_choose/gCharPageKata.inc.c"
};

s16 gCharPageEng[] = {
#include "assets/overlays/ovl_file_choose/gCharPageEng.inc.c"
};

s16 gNextCharPage[] = {
#include "assets/overlays/ovl_file_choose/gNextCharPage.inc.c"
};
#endif

#if !OOT_NTSC_N64
Vtx gOptionsMenuHeadersVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuHeadersVtx.inc.c"
};
#endif

#if OOT_PAL && PLATFORM_GC
Vtx gOptionsMenuHeadersGERVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuHeadersGERVtx.inc.c"
};
#endif

#if !OOT_NTSC_N64
Vtx gOptionsMenuSettingsVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuSettingsVtx.inc.c"
};
#endif

#if OOT_PAL && PLATFORM_GC
Vtx gOptionsMenuSettingsGERVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuSettingsGERVtx.inc.c"
};
#endif

#if OOT_PAL && PLATFORM_N64
Vtx gOptionsMenuBrightnessVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuBrightnessVtx.inc.c"
};

#if !OOT_NTSC_N64
Vtx gOptionsMenuLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuLanguageVtx.inc.c"
};
#endif

u8 ovl_file_choose_zeros_000640[320] = { 0 };
#endif

#if !OOT_NTSC_N64
Vtx gOptionsDividerSoundVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerSoundVtx.inc.c"
};

Vtx gOptionsDividerZTargetVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerZTargetVtx.inc.c"
};

Vtx gOptionsDividerBrightnessVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerBrightnessVtx.inc.c"
};
#endif

#if OOT_PAL && PLATFORM_N64
Vtx gOptionsDividerLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerLanguageVtx.inc.c"
};
#endif

#if OOT_PAL
s16 gCharPageEng[] = {
#include "assets/overlays/ovl_file_choose/gCharPageEng.inc.c"
};
#endif

#if OOT_MQ
u64 gLogoOcarinaOfTimeTex[TEX_LEN(u64, gLogoWidth_WIDTH, gLogoWidth_HEIGHT, 32)] = {
#include "assets/overlays/ovl_file_choose/gLogoOcarinaOfTimeTex.rgba32.inc.c"
};
#else
u64 gLogoMasterQuestTex[TEX_LEN(u64, gLogoWidth_WIDTH, gLogoWidth_HEIGHT, 32)] = {
#include "assets/overlays/ovl_file_choose/gLogoMasterQuestTex.rgba32.inc.c"
};
#endif

u64 gMirrorModeTex[TEX_LEN(u64, gQuestTitle_WIDTH, gQuestTitle_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gMirrorModeTex.ia8.inc.c"
};

u64 gQuestOcarinaOfTimeTex[TEX_LEN(u64, gQuestTitle_WIDTH, gQuestTitle_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestOcarinaOfTimeTex.ia8.inc.c"
};

u64 gQuestMasterQuestTex[TEX_LEN(u64, gQuestTitle_WIDTH, gQuestTitle_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestMasterQuestTex.ia8.inc.c"
};
