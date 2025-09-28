#include "ultra64.h"
#include "tex_len.h"
#include "versions.h"
#include "actor.h"

#if OOT_NTSC_N64
u64 gSwampSpiderHouseTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardENGTex.ia8.inc.c"
};

u64 gSwampSpiderHouseTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardGERTex.ia8.inc.c"
};

u64 gSwampSpiderHouseTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardFRATex.ia8.inc.c"
};

u64 gSwampSpiderHouseTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardJPNTex.ia8.inc.c"
};

#else

#if OOT_NTSC
u64 gSwampSpiderHouseTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardJPNTex.ia8.inc.c"
};
#endif

u64 gSwampSpiderHouseTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardENGTex.ia8.inc.c"
};

#if OOT_PAL
u64 gSwampSpiderHouseTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardGERTex.ia8.inc.c"
};

u64 gSwampSpiderHouseTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gSwampSpiderHouseTitleCardFRATex.ia8.inc.c"
};
#endif

#endif
