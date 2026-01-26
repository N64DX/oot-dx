#include "assets/textures/icon_item_dungeon_static/icon_item_dungeon_static.h"
#include "icon_item_dungeon_static_all.h"

u64 gMMDungeonMapLinkHeadTex[TEX_LEN(u64, gDungeonMapLinkHeadTex_WIDTH, gDungeonMapLinkHeadTex_HEIGHT, 16)] = {
#include "assets/textures/icon_item_dungeon_static/gMMDungeonMapLinkHeadTex.rgba16.inc.c"
};

u64 gMMDungeonMapSkullTex[TEX_LEN(u64, gDungeonMapSkullTex_WIDTH, gDungeonMapSkullTex_HEIGHT, 16)] = {
#include "assets/textures/icon_item_dungeon_static/gMMDungeonMapSkullTex.rgba16.inc.c"
};
