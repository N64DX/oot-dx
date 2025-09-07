/*
 * File: z_select.c
 * Overlay: ovl_select
 * Description: Debug Scene Select Menu
 */

#include "libc64/qrand.h"
#include "libu64/gfxprint.h"
#include "alloca.h"
#include "array_count.h"
#include "console_logo_state.h"
#include "controller.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "map_select_state.h"
#if PLATFORM_N64
#include "n64dd.h"
#endif
#include "printf.h"
#include "regs.h"
#include "segment_symbols.h"
#include "seqcmd.h"
#include "sequence.h"
#include "sfx.h"
#include "terminal.h"
#include "translation.h"
#include "ultra64.h"
#include "play_state.h"
#include "save.h"
#include "sram.h"

typedef struct {
    u16   entrance_index;
    char* name;
} warp_t;

typedef struct {
    Vec3f pos;
    u16   yaw;
    char* name;
} room_t;

typedef struct {
    u8      number_of_rooms;
    room_t* room;
} rooms_t;

void MapSelect_LoadTitle(MapSelectState* this) {
    this->state.running = false;
    SET_NEXT_GAMESTATE(&this->state, ConsoleLogo_Init, ConsoleLogoState);
}

void MapSelect_LoadRoom(u16 entrance, u8 roomNum, u8 maxRoomNum) {
    if (roomNum > 0 && roomNum <= maxRoomNum)
        gSaveContext.save.entranceIndex = entrance + (roomNum - 1) * 4;
}

void MapSelect_LoadGame(MapSelectState* this, s32 entranceIndex) {
    PRINTF_COLOR_BLUE();
    PRINTF("\n\n\nＦＩＬＥ＿ＮＯ＝%x\n\n\n", gSaveContext.fileNum);
    PRINTF_RST();
    if (gSaveContext.fileNum == 0xFF) {
        Sram_InitDebugSave();
        // Set the fill target to be the saved magic amount
        gSaveContext.magicFillTarget = gSaveContext.save.info.playerData.magic;
        // Set `magicLevel` and `magic` to 0 so `magicCapacity` then `magic` grows from nothing
        // to respectively the full capacity and `magicFillTarget`
        gSaveContext.magicCapacity = 0;
        gSaveContext.save.info.playerData.magicLevel = gSaveContext.save.info.playerData.magic = 0;
    }
    gSaveContext.buttonStatus[0] = gSaveContext.buttonStatus[1] = gSaveContext.buttonStatus[2] =
        gSaveContext.buttonStatus[3] = gSaveContext.buttonStatus[4] = BTN_ENABLED;
    dpadStatus[0] = dpadStatus[1] = dpadStatus[2] = dpadStatus[3] = BTN_ENABLED;
    gSaveContext.forceRisingButtonAlphas = gSaveContext.nextHudVisibilityMode = gSaveContext.hudVisibilityMode =
        gSaveContext.hudVisibilityModeTimer = 0; // false, HUD_VISIBILITY_NO_CHANGE
    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM_MAIN, 0);
    gSaveContext.save.entranceIndex = entranceIndex;

    if (entranceIndex == ENTR_DEKU_TREE_0)
        MapSelect_LoadRoom(DBG_DEKU_TREE_0, this->roomNum, 11);
    else if (entranceIndex == ENTR_DODONGOS_CAVERN_0)
        MapSelect_LoadRoom(DBG_DODONGOS_CAVERN_0, this->roomNum, 16);
    else if (entranceIndex == ENTR_JABU_JABU_0)
        MapSelect_LoadRoom(DBG_JABU_JABU_0, this->roomNum, 15);
    else if (entranceIndex == ENTR_FOREST_TEMPLE_0)
        MapSelect_LoadRoom(DBG_FOREST_TEMPLE_0, this->roomNum, 22);
    else if (entranceIndex == ENTR_FIRE_TEMPLE_0)
        MapSelect_LoadRoom(DBG_FIRE_TEMPLE_0, this->roomNum, 26);
    else if (entranceIndex == ENTR_WATER_TEMPLE_0)
        MapSelect_LoadRoom(DBG_WATER_TEMPLE_0, this->roomNum, 22);
    else if (entranceIndex == ENTR_SHADOW_TEMPLE_0)
        MapSelect_LoadRoom(DBG_SHADOW_TEMPLE_0, this->roomNum, 22);
    else if (entranceIndex == ENTR_SPIRIT_TEMPLE_0)
        MapSelect_LoadRoom(DBG_SPIRIT_TEMPLE_0, this->roomNum, 28);
    else if (entranceIndex == ENTR_ICE_CAVERN_0)
        MapSelect_LoadRoom(DBG_ICE_CAVERN_0, this->roomNum, 12);
    else if (entranceIndex == ENTR_BOTTOM_OF_THE_WELL_0)
        MapSelect_LoadRoom(DBG_BOTTOM_OF_THE_WELL_0, this->roomNum, 7);
    else if (entranceIndex == ENTR_GERUDO_TRAINING_GROUND_0)
        MapSelect_LoadRoom(DBG_GERUDO_TRAINING_GROUND_0, this->roomNum, 11);
    else if (entranceIndex == ENTR_INSIDE_GANONS_CASTLE_0)
        MapSelect_LoadRoom(DBG_INSIDE_GANONS_CASTLE_0, this->roomNum, 20);
    else if (entranceIndex == ENTR_GANONS_TOWER_0)
        MapSelect_LoadRoom(DBG_GANONS_TOWER_0, this->roomNum, 9);

    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[RESPAWN_MODE_DOWN].entranceIndex = ENTR_LOAD_OPENING;
    gSaveContext.seqId = (u8)NA_BGM_DISABLED;
    gSaveContext.natureAmbienceId = 0xFF;
    gSaveContext.showTitleCard = true;
    gWeatherMode = WEATHER_MODE_CLEAR;

    R_ENABLE_MIRROR = this->mirrorMode;
#if OOT_VERSION <= PAL_1_1
    R_QUEST_MODE = this->questMode;
#endif

    this->state.running = false;
    SET_NEXT_GAMESTATE(&this->state, Play_Init, PlayState);
}

void MapSelect_SetEvent(MapSelectState* this, u8 type, u16 flag) {
    switch (type) {
        case EVENT:
            if (GET_EVENTCHKINF(flag))
                CLEAR_EVENTCHKINF(flag);
            else SET_EVENTCHKINF(flag);
            break;
        case ITEM:
            if (GET_ITEMGETINF(flag))
                CLEAR_ITEMGETINF(flag);
            else SET_ITEMGETINF(flag);
            break;
        case INFTABLE:
            if (GET_INFTABLE(flag))
                CLEAR_INFTABLE(flag);
            else SET_INFTABLE(flag);
            break;
        case CARPENTERS:
            if (!GET_EVENTCHKINF(EVENTCHKINF_CARPENTER_0_RESCUED)) {
                SET_EVENTCHKINF(EVENTCHKINF_CARPENTER_0_RESCUED);
                SET_EVENTCHKINF(EVENTCHKINF_CARPENTER_1_RESCUED);
                SET_EVENTCHKINF(EVENTCHKINF_CARPENTER_2_RESCUED);
                SET_EVENTCHKINF(EVENTCHKINF_CARPENTER_3_RESCUED);
            }
            else {
                CLEAR_EVENTCHKINF(EVENTCHKINF_CARPENTER_0_RESCUED);
                CLEAR_EVENTCHKINF(EVENTCHKINF_CARPENTER_1_RESCUED);
                CLEAR_EVENTCHKINF(EVENTCHKINF_CARPENTER_2_RESCUED);
                CLEAR_EVENTCHKINF(EVENTCHKINF_CARPENTER_3_RESCUED);
            }
            break;
        case NABOORU:
            if (!GET_EVENTCHKINF(EVENTCHKINF_DEFEATED_NABOORU_KNUCKLE)) {
                SET_EVENTCHKINF(EVENTCHKINF_DEFEATED_NABOORU_KNUCKLE);
                SET_EVENTCHKINF(EVENTCHKINF_3B);
                SET_EVENTCHKINF(EVENTCHKINF_C0);
                gSaveContext.save.info.sceneFlags[SCENE_SPIRIT_TEMPLE_BOSS].swch |= (1 << flag);
            }
            else {
                CLEAR_EVENTCHKINF(EVENTCHKINF_DEFEATED_NABOORU_KNUCKLE);
                CLEAR_EVENTCHKINF(EVENTCHKINF_3B);
                CLEAR_EVENTCHKINF(EVENTCHKINF_C0);
                gSaveContext.save.info.sceneFlags[SCENE_SPIRIT_TEMPLE_BOSS].swch &= ~(1 << flag);
            }
            break;
        case MASK:
            if (!GET_ITEMGETINF(ITEMGETINF_23)) {
                SET_ITEMGETINF(ITEMGETINF_23);
                SET_ITEMGETINF(ITEMGETINF_24);
                SET_ITEMGETINF(ITEMGETINF_25);
                SET_ITEMGETINF(ITEMGETINF_26);
                SET_ITEMGETINF(ITEMGETINF_38);
                SET_ITEMGETINF(ITEMGETINF_39);
                SET_ITEMGETINF(ITEMGETINF_3A);
                SET_ITEMGETINF(ITEMGETINF_3B);
                SET_ITEMGETINF(ITEMGETINF_3F);
                SET_ITEMGETINF(ITEMGETINF_2A);
                SET_EVENTCHKINF(EVENTCHKINF_PAID_BACK_KEATON_MASK);
                SET_EVENTCHKINF(EVENTCHKINF_PAID_BACK_SKULL_MASK);
                SET_EVENTCHKINF(EVENTCHKINF_PAID_BACK_SPOOKY_MASK);
                SET_EVENTCHKINF(EVENTCHKINF_PAID_BACK_BUNNY_HOOD);
            }
            else {
                CLEAR_ITEMGETINF(ITEMGETINF_23);
                CLEAR_ITEMGETINF(ITEMGETINF_24);
                CLEAR_ITEMGETINF(ITEMGETINF_25);
                CLEAR_ITEMGETINF(ITEMGETINF_26);
                CLEAR_ITEMGETINF(ITEMGETINF_38);
                CLEAR_ITEMGETINF(ITEMGETINF_39);
                CLEAR_ITEMGETINF(ITEMGETINF_3A);
                CLEAR_ITEMGETINF(ITEMGETINF_3B);
                CLEAR_ITEMGETINF(ITEMGETINF_3F);
                CLEAR_ITEMGETINF(ITEMGETINF_2A);
                CLEAR_EVENTCHKINF(EVENTCHKINF_PAID_BACK_KEATON_MASK);
                CLEAR_EVENTCHKINF(EVENTCHKINF_PAID_BACK_SKULL_MASK);
                CLEAR_EVENTCHKINF(EVENTCHKINF_PAID_BACK_SPOOKY_MASK);
                CLEAR_EVENTCHKINF(EVENTCHKINF_PAID_BACK_BUNNY_HOOD);
            }
            break;
        case WELL:
            if (!GET_EVENTCHKINF(flag)) {
                SET_EVENTCHKINF(flag);
                gSaveContext.save.info.sceneFlags[SCENE_WINDMILL_AND_DAMPES_GRAVE].swch |= (1 << 2);
            }
            else {
                CLEAR_EVENTCHKINF(flag);
                gSaveContext.save.info.sceneFlags[SCENE_WINDMILL_AND_DAMPES_GRAVE].swch &= ~(1 << 2);
            }
            break;
        case SHADOW:
            if (!GET_EVENTCHKINF(EVENTCHKINF_AA)) {
                SET_EVENTCHKINF(EVENTCHKINF_AA);
                SET_EVENTCHKINF(EVENTCHKINF_54);
            }
            else {
                CLEAR_EVENTCHKINF(EVENTCHKINF_AA);
                CLEAR_EVENTCHKINF(EVENTCHKINF_54);
            }
            break;
        default:
            gSaveContext.save.info.sceneFlags[type].clear ^= (1 << flag);
            break;
    }
}

char* MapSelect_GetEvent(MapSelectState* this, u8 type, u16 flag) {
    switch (type) {
        case EVENT:
        case WELL:
        case SHADOW:
            return GET_EVENTCHKINF(flag) ? "On" : "Off";
        case ITEM:
        case MASK:
            return GET_ITEMGETINF(flag) ? "On" : "Off";
        case INFTABLE:
             return GET_INFTABLE(flag) ? "On" : "Off";
        case CARPENTERS:
            return (GET_EVENTCHKINF(EVENTCHKINF_CARPENTER_0_RESCUED) && GET_EVENTCHKINF(EVENTCHKINF_CARPENTER_1_RESCUED) && GET_EVENTCHKINF(EVENTCHKINF_CARPENTER_2_RESCUED) && GET_EVENTCHKINF(EVENTCHKINF_CARPENTER_3_RESCUED)) ? "On" : "Off";
        case NABOORU:
            return (GET_EVENTCHKINF(EVENTCHKINF_DEFEATED_NABOORU_KNUCKLE) && GET_EVENTCHKINF(EVENTCHKINF_3B) && GET_EVENTCHKINF(EVENTCHKINF_C0) && (gSaveContext.save.info.sceneFlags[SCENE_SPIRIT_TEMPLE_BOSS].swch &= (1 << flag))) ? "On" : "Off";
        default:
            return gSaveContext.save.info.sceneFlags[type].clear & (1 << flag) ? "On" : "Off";
    }

}

#if PLATFORM_N64
void func_80800AD0_unknown(MapSelectState* this, s32 arg1) {
    if (D_80121212 != 0) {
        n64dd_SetDiskVersion(1);
    }
}

void func_80800B08_unknown(MapSelectState* this, s32 arg1) {
    if (D_80121212 != 0) {
        n64dd_SetDiskVersion(0);
    }
}
#endif

static MapSelectEntry sMapSelectEntries[] = {
    { " 1:Hyrule Field", MapSelect_LoadGame, ENTR_HYRULE_FIELD_0 },
    { " 2:Kakariko Village", MapSelect_LoadGame, ENTR_KAKARIKO_VILLAGE_0 },
    { " 3:Graveyard", MapSelect_LoadGame, ENTR_GRAVEYARD_0 },
    { " 4:Zora's River", MapSelect_LoadGame, ENTR_ZORAS_RIVER_0 },
    { " 5:Kokiri Forest", MapSelect_LoadGame, ENTR_KOKIRI_FOREST_0 },
    { " 6:Sacred Forest Meadow", MapSelect_LoadGame, ENTR_SACRED_FOREST_MEADOW_0 },
    { " 7:Lake Hylia", MapSelect_LoadGame, ENTR_LAKE_HYLIA_0 },
    { " 8:Zora's Domain", MapSelect_LoadGame, ENTR_ZORAS_DOMAIN_0 },
    { " 9:Zora's Fountain", MapSelect_LoadGame, ENTR_ZORAS_FOUNTAIN_0 },
    { "10:Gerudo Valley", MapSelect_LoadGame, ENTR_GERUDO_VALLEY_0 },
    { "11:Lost Woods", MapSelect_LoadGame, ENTR_LOST_WOODS_0 },
    { "12:Desert Colossus", MapSelect_LoadGame, ENTR_DESERT_COLOSSUS_0 },
    { "13:Gerudo's Fortress", MapSelect_LoadGame, ENTR_GERUDOS_FORTRESS_0 },
    { "14:Haunted Wasteland", MapSelect_LoadGame, ENTR_HAUNTED_WASTELAND_0 },
    { "15:Hyrule Castle", MapSelect_LoadGame, ENTR_HYRULE_CASTLE_0 },
    { "16:Death Mountain Trail", MapSelect_LoadGame, ENTR_DEATH_MOUNTAIN_TRAIL_0 },
    { "17:Death Mountain Crater", MapSelect_LoadGame, ENTR_DEATH_MOUNTAIN_CRATER_0 },
    { "18:Goron City", MapSelect_LoadGame, ENTR_GORON_CITY_0 },
    { "19:Lon Lon Ranch", MapSelect_LoadGame, ENTR_LON_LON_RANCH_0 },
    { "20:" T(GFXP_HIRAGANA "ﾄｷﾉﾏ", "Temple of Time"), MapSelect_LoadGame, ENTR_TEMPLE_OF_TIME_0 },
    { "21:" T(GFXP_HIRAGANA "ｹﾝｼﾞｬﾉﾏ", "Chamber of Sages"), MapSelect_LoadGame, ENTR_CHAMBER_OF_THE_SAGES_0 },
    { "22:" T(GFXP_HIRAGANA "ｼｬﾃｷｼﾞｮｳ", "Shooting Gallery"), MapSelect_LoadGame, ENTR_SHOOTING_GALLERY_0 },
    { "23:" T(GFXP_KATAKANA "ﾊｲﾗﾙ" GFXP_HIRAGANA "ﾆﾜ" GFXP_KATAKANA "ｹﾞｰﾑ", "Castle Courtyard"), MapSelect_LoadGame,
      ENTR_CASTLE_COURTYARD_GUARDS_DAY_0 },
    { "24:" T(GFXP_HIRAGANA "ﾊｶｼﾀﾄﾋﾞｺﾐｱﾅ", "Grave (ReDead)"), MapSelect_LoadGame, ENTR_REDEAD_GRAVE_0 },
    { "25:" T(GFXP_HIRAGANA "ﾊｶｼﾀﾄﾋﾞｺﾐｱﾅ 2", "Grave (Fairy's Fountain)"), MapSelect_LoadGame,
      ENTR_GRAVE_WITH_FAIRYS_FOUNTAIN_0 },
    { "26:" T(GFXP_HIRAGANA "ｵｳｹ ﾉ ﾊｶｱﾅ", "Royal Family's Tomb"), MapSelect_LoadGame, ENTR_ROYAL_FAMILYS_TOMB_0 },
    { "27:" T(GFXP_HIRAGANA "ﾀﾞｲﾖｳｾｲﾉｲｽﾞﾐ", "Great Fairy's Fountain (R)"), MapSelect_LoadGame,
      ENTR_GREAT_FAIRYS_FOUNTAIN_MAGIC_0 },
    { "28:" T(GFXP_HIRAGANA "ﾄﾋﾞｺﾐ ﾖｳｾｲ ｱﾅ", "Fairy's Fountain"), MapSelect_LoadGame, ENTR_FAIRYS_FOUNTAIN_0 },
    { "29:" T(GFXP_HIRAGANA "ﾏﾎｳｾｷ ﾖｳｾｲﾉｲｽﾞﾐ", "Great Fairy's Fountain (G)"), MapSelect_LoadGame,
      ENTR_GREAT_FAIRYS_FOUNTAIN_SPELLS_0 },
    { "30:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ｻｲｼｭｳｾﾝ", "Top of Ganon's Tower"), MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_EXTERIOR_0 },
    { "31:" T(GFXP_KATAKANA "ﾊｲﾗﾙ" GFXP_HIRAGANA "ﾅｶﾆﾜ", "Zelda's Courtyard"), MapSelect_LoadGame,
      ENTR_CASTLE_COURTYARD_ZELDA_0 },
    { "32:" T(GFXP_HIRAGANA "ﾂﾘﾎﾞﾘ", "Fishing Pond"), MapSelect_LoadGame, ENTR_FISHING_POND_0 },
    { "33:" T(GFXP_KATAKANA "ﾎﾞﾑﾁｭｳﾎﾞｰﾘﾝｸﾞ", "Bombchu Bowling Alley"), MapSelect_LoadGame, ENTR_BOMBCHU_BOWLING_ALLEY_0 },
    // Talon's House
    { "34:" T(GFXP_KATAKANA "ﾛﾝﾛﾝ" GFXP_HIRAGANA "ﾎﾞｸｼﾞｮｳ ｿｳｺ 1", "Talon's House"), MapSelect_LoadGame,
      ENTR_LON_LON_BUILDINGS_0 },
    // Ranch Silo
    { "35:" T(GFXP_KATAKANA "ﾛﾝﾛﾝ" GFXP_HIRAGANA "ﾎﾞｸｼﾞｮｳ ｿｳｺ 2", "Ranch Silo"), MapSelect_LoadGame,
      ENTR_LON_LON_BUILDINGS_1 },
    { "36:" T(GFXP_HIRAGANA "ﾐﾊﾘ ｺﾞﾔ", "Guard House"), MapSelect_LoadGame, ENTR_MARKET_GUARD_HOUSE_0 },
    { "37:" T(GFXP_HIRAGANA "ﾏﾎｳ ﾉ ｸｽﾘﾔ", "Granny's Potion Shop"), MapSelect_LoadGame, ENTR_POTION_SHOP_GRANNY_0 },
    { "38:" T(GFXP_HIRAGANA "ﾀｶﾗﾊﾞｺﾔ", "Treasure Box Shop"), MapSelect_LoadGame, ENTR_TREASURE_BOX_SHOP_0 },
    { "39:" T(GFXP_HIRAGANA "ｷﾝ " GFXP_KATAKANA "ｽﾀﾙﾁｭﾗ ﾊｳｽ", "House of Skulltula"), MapSelect_LoadGame,
      ENTR_HOUSE_OF_SKULLTULA_0 },
    { "40:" T(GFXP_HIRAGANA "ｼﾞｮｳｶﾏﾁ ｲﾘｸﾞﾁ", "Market Entrance"), MapSelect_LoadGame,
      ENTR_MARKET_ENTRANCE_DAY_0 },
    { "41:" T(GFXP_HIRAGANA "ｼﾞｮｳｶﾏﾁ", "Market"), MapSelect_LoadGame, ENTR_MARKET_DAY_0 },
    { "42:" T(GFXP_HIRAGANA "ｳﾗﾛｼﾞ", "Back Alley"), MapSelect_LoadGame, ENTR_BACK_ALLEY_DAY_0 },
    { "43:" T(GFXP_HIRAGANA "ﾄｷﾉｼﾝﾃﾞﾝ ﾏｴ", "Temple of Time (Exterior)"), MapSelect_LoadGame,
      ENTR_TEMPLE_OF_TIME_EXTERIOR_DAY_0 },
    { "44:" T(GFXP_HIRAGANA "ﾘﾝｸﾉｲｴ", "Link's House"), MapSelect_LoadGame, ENTR_LINKS_HOUSE_0 },
    { "45:" T(GFXP_KATAKANA "ｶｶﾘｺ" GFXP_HIRAGANA "ﾑﾗﾉﾅｶﾞﾔ", "Kakariko Guest House"), MapSelect_LoadGame,
      ENTR_KAKARIKO_CENTER_GUEST_HOUSE_0 },
    { "46:" T(GFXP_HIRAGANA "ｳﾗﾛｼﾞﾉ ｲｴ", "Back Alley House"), MapSelect_LoadGame, ENTR_BACK_ALLEY_HOUSE_0 },
    { "47:" T(GFXP_HIRAGANA "ｺｷﾘﾉﾑﾗ ﾓﾉｼﾘｷｮｳﾀﾞｲﾉｲｴ", "Know-It-All Brothers' House"), MapSelect_LoadGame,
      ENTR_KNOW_IT_ALL_BROS_HOUSE_0 },
    { "48:" T(GFXP_HIRAGANA "ｺｷﾘﾉﾑﾗ ﾌﾀｺﾞﾉｲｴ", "Twins' House"), MapSelect_LoadGame,
      ENTR_TWINS_HOUSE_0 },
    { "49:" T(GFXP_HIRAGANA "ｺｷﾘﾉﾑﾗ " GFXP_KATAKANA "ﾐﾄﾞ" GFXP_HIRAGANA "ﾉｲｴ", "Mido's House"),
      MapSelect_LoadGame, ENTR_MIDOS_HOUSE_0 },
    { "50:" T(GFXP_HIRAGANA "ｺｷﾘﾉﾑﾗ " GFXP_KATAKANA "ｻﾘｱ" GFXP_HIRAGANA "ﾉｲｴ", "Saria's House"),
      MapSelect_LoadGame, ENTR_SARIAS_HOUSE_0 },
    { "51:" T(GFXP_HIRAGANA "ｳﾏｺﾞﾔ", "Stable"), MapSelect_LoadGame, ENTR_STABLE_0 },
    { "52:" T(GFXP_HIRAGANA "ﾊｶﾓﾘﾉｲｴ", "Gravekeeper's Hut"), MapSelect_LoadGame, ENTR_GRAVEKEEPERS_HUT_0 },
    { "53:" T(GFXP_HIRAGANA "ｳﾗﾛｼﾞ ｲﾇｵﾊﾞｻﾝﾉｲｴ", "Dog Lady's House"), MapSelect_LoadGame,
      ENTR_DOG_LADY_HOUSE_0 },
    { "54:" T(GFXP_HIRAGANA "ｶｶﾘｺﾑﾗ " GFXP_KATAKANA "ｲﾝﾊﾟ" GFXP_HIRAGANA "ﾉｲｴ", "Impa's House"),
      MapSelect_LoadGame, ENTR_IMPAS_HOUSE_0 },
    { "55:" T(GFXP_KATAKANA "ﾊｲﾘｱ" GFXP_HIRAGANA " ｹﾝｷｭｳｼﾞｮ", "Lakeside Laboratory"), MapSelect_LoadGame,
      ENTR_LAKESIDE_LABORATORY_0 },
    { "56:" T(GFXP_KATAKANA "ﾃﾝﾄ", "Tent"), MapSelect_LoadGame, ENTR_CARPENTERS_TENT_0 },
    { "57:" T(GFXP_HIRAGANA "ﾀﾃﾉﾐｾ", "Bazaar"), MapSelect_LoadGame, ENTR_BAZAAR_0 },
    { "58:" T(GFXP_HIRAGANA "ｺｷﾘｿﾞｸﾉﾐｾ", "Kokiri Shop"), MapSelect_LoadGame, ENTR_KOKIRI_SHOP_0 },
    { "59:" T(GFXP_KATAKANA "ｺﾞﾛﾝ" GFXP_HIRAGANA "ﾉﾐｾ", "Goron Shop"), MapSelect_LoadGame, ENTR_GORON_SHOP_0 },
    { "60:" T(GFXP_KATAKANA "ｿﾞｰﾗ" GFXP_HIRAGANA "ﾉﾐｾ", "Zora Shop"), MapSelect_LoadGame, ENTR_ZORA_SHOP_0 },
    { "61:" T(GFXP_KATAKANA "ｶｶﾘｺ" GFXP_HIRAGANA "ﾑﾗ  ｸｽﾘﾔ", "Potion Shop (Kakariko)"), MapSelect_LoadGame,
      ENTR_POTION_SHOP_KAKARIKO_0 },
    { "62:" T(GFXP_HIRAGANA "ｼﾞｮｳｶﾏﾁ ｸｽﾘﾔ", "Potion Shop (Market)"), MapSelect_LoadGame,
      ENTR_POTION_SHOP_MARKET_0 },
    { "63:" T(GFXP_HIRAGANA "ｳﾗﾛｼﾞ ﾖﾙﾉﾐｾ", "Bombchu Shop"), MapSelect_LoadGame, ENTR_BOMBCHU_SHOP_0 },
    { "64:" T(GFXP_HIRAGANA "ｵﾒﾝﾔ", "Happy Mask Shop"), MapSelect_LoadGame, ENTR_HAPPY_MASK_SHOP_0 },
    { "65:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾉｼｭｳﾚﾝｼﾞｮｳ", "Gerudo Training Ground"), MapSelect_LoadGame,
      ENTR_GERUDO_TRAINING_GROUND_0 },
    { "66:" T(GFXP_HIRAGANA "ﾖｳｾｲﾉｷﾉ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Deku Tree"), MapSelect_LoadGame,
      ENTR_DEKU_TREE_0 },
    { "67:" T(GFXP_HIRAGANA "ﾖｳｾｲﾉｷﾉ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ ﾎﾞｽ", "Deku Tree (Boss)"), MapSelect_LoadGame,
      ENTR_DEKU_TREE_BOSS_0 },
    { "68:" T(GFXP_KATAKANA "ﾄﾞﾄﾞﾝｺﾞ ﾀﾞﾝｼﾞｮﾝ", "Dodongo's Cavern"), MapSelect_LoadGame, ENTR_DODONGOS_CAVERN_0 },
    { "69:" T(GFXP_KATAKANA "ﾄﾞﾄﾞﾝｺﾞ ﾀﾞﾝｼﾞｮﾝ ﾎﾞｽ", "Dodongo's Cavern (Boss)"), MapSelect_LoadGame,
      ENTR_DODONGOS_CAVERN_BOSS_0 },
    { "70:" T(GFXP_HIRAGANA "ｷｮﾀﾞｲｷﾞｮ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Jabu-Jabu"), MapSelect_LoadGame,
      ENTR_JABU_JABU_0 },
    { "71:" T(GFXP_HIRAGANA "ｷｮﾀﾞｲｷﾞｮ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ ﾎﾞｽ", "Jabu-Jabu (Boss)"), MapSelect_LoadGame,
      ENTR_JABU_JABU_BOSS_0 },
    { "72:" T(GFXP_HIRAGANA "ﾓﾘﾉｼﾝﾃﾞﾝ", "Forest Temple"), MapSelect_LoadGame, ENTR_FOREST_TEMPLE_0 },
    { "73:" T(GFXP_HIRAGANA "ﾓﾘﾉｼﾝﾃﾞﾝ " GFXP_KATAKANA "ﾎﾞｽ", "Forest Temple (Boss)"), MapSelect_LoadGame,
      ENTR_FOREST_TEMPLE_BOSS_0 },
    { "74:" T(GFXP_HIRAGANA "ｲﾄﾞｼﾀ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Bottom of the Well"), MapSelect_LoadGame,
      ENTR_BOTTOM_OF_THE_WELL_0 },
    { "75:" T(GFXP_HIRAGANA "ﾊｶｼﾀ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Shadow Temple"), MapSelect_LoadGame,
      ENTR_SHADOW_TEMPLE_0 },
    { "76:" T(GFXP_HIRAGANA "ﾊｶｼﾀ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ ﾎﾞｽ", "Shadow Temple (Boss)"),
      MapSelect_LoadGame, ENTR_SHADOW_TEMPLE_BOSS_0 },
    { "77:" T(GFXP_HIRAGANA "ﾋﾉｼﾝﾃﾞﾝ", "Fire Temple"), MapSelect_LoadGame, ENTR_FIRE_TEMPLE_0 },
    { "78:" T(GFXP_HIRAGANA "ﾋﾉｼﾝﾃﾞﾝ " GFXP_KATAKANA "ﾎﾞｽ", "Fire Temple (Boss)"), MapSelect_LoadGame,
      ENTR_FIRE_TEMPLE_BOSS_0 },
    { "79:" T(GFXP_HIRAGANA "ﾐｽﾞﾉｼﾝﾃﾞﾝ", "Water Temple"), MapSelect_LoadGame, ENTR_WATER_TEMPLE_0 },
    { "80:" T(GFXP_HIRAGANA "ﾐｽﾞﾉｼﾝﾃﾞﾝ " GFXP_KATAKANA "ﾎﾞｽ", "Water Temple (Boss)"), MapSelect_LoadGame,
      ENTR_WATER_TEMPLE_BOSS_0 },
    { "81:" T(GFXP_HIRAGANA "ｼﾞｬｼﾝｿﾞｳ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Spirit Temple"), MapSelect_LoadGame,
      ENTR_SPIRIT_TEMPLE_0 },
    // Iron Knuckle's Lair
    { "82:" T(GFXP_HIRAGANA "ｼﾞｬｼﾝｿﾞｳ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ ｱｲｱﾝﾅｯｸ", "Spirit Temple (Iron Knuckle)"),
      MapSelect_LoadGame, ENTR_SPIRIT_TEMPLE_BOSS_0 },
    // Twinrova's Lair
    { "83:" T(GFXP_HIRAGANA "ｼﾞｬｼﾝｿﾞｳ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ ﾎﾞｽ", "Spirit Temple (Boss)"),
      MapSelect_LoadGame, ENTR_SPIRIT_TEMPLE_BOSS_2 },
    { "84:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ", "Ganon's Tower"), MapSelect_LoadGame, ENTR_GANONS_TOWER_0 },
    { "85:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ" GFXP_KATAKANA "ﾎﾞｽ", "Ganon's Tower (Boss)"), MapSelect_LoadGame,
      ENTR_GANONDORF_BOSS_0 },
    { "86:" T(GFXP_HIRAGANA "ｺｵﾘﾉﾄﾞｳｸﾂ", "Ice Cavern"), MapSelect_LoadGame, ENTR_ICE_CAVERN_0 },
    // Dampé's Grave
    { "87:" T(GFXP_HIRAGANA "ﾊｶｼﾀ" GFXP_KATAKANA "ﾘﾚｰ", "Dampe's Grave"), MapSelect_LoadGame,
      ENTR_WINDMILL_AND_DAMPES_GRAVE_0 },
    { "88:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾁｶ " GFXP_KATAKANA "ﾀﾞﾝｼﾞｮﾝ", "Inside Ganon's Castle"),
      MapSelect_LoadGame, ENTR_INSIDE_GANONS_CASTLE_0 },
    { "89:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ｻｲｼｭｳｾﾝ " GFXP_KATAKANA "ﾃﾞﾓ & ﾊﾞﾄﾙ",
              "Ganon (Boss)"),
      MapSelect_LoadGame, ENTR_GANON_BOSS_0 },
    { "90:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ ｿﾉｺﾞ 1", "Ganon's Tower Collapse 1"), MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_0 },
    { "91:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ ｿﾉｺﾞ 2", "Ganon's Tower Collapse 2"), MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_2 },
    { "92:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ ｿﾉｺﾞ 3", "Ganon's Tower Collapse 3"), MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_4 },
    { "93:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾉﾄｳ ｿﾉｺﾞ 4", "Ganon's Tower Collapse 4"), MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_6 },
    { "94:" T(GFXP_KATAKANA "ｶﾞﾉﾝ" GFXP_HIRAGANA "ﾁｶ ｿﾉｺﾞ", "Ganon's Tower Collapse 5"), MapSelect_LoadGame,
      ENTR_INSIDE_GANONS_CASTLE_COLLAPSE_0 },
    { "95:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 1-2", "Thieves' Hideout 1-2"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_0 },
    { "96:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 3-4 9-10", "Thieves' Hideout 3-4 9-10"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_2 },
    { "97:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 5-6", "Thieves' Hideout 5-6"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_4 },
    { "98:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 7-8", "Thieves' Hideout 7-8"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_6 },
    { "99:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 11-12", "Thieves' Hideout 11-12"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_10 },
    { "100:" T(GFXP_KATAKANA "ｹﾞﾙﾄﾞ" GFXP_HIRAGANA "ﾂｳﾛ 13", "Thieves' Hideout 13"), MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_12 },
    // Gossip Stone & Chest Grotto
    { "101:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 0", "Grotto (Gossip Stone)"), MapSelect_LoadGame, ENTR_GROTTOS_0 },
    // Skulltula & Gold Skulltula Grotto
    { "102:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 1", "Grotto (Skulltula)"), MapSelect_LoadGame, ENTR_GROTTOS_1 },
    // Business Scrub & Heart Piece Grotto
    { "103:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 2", "Grotto (Business Scrub)"), MapSelect_LoadGame, ENTR_GROTTOS_2 },
    // Redeads Grotto
    { "104:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 3", "Grotto (ReDeads)"), MapSelect_LoadGame, ENTR_GROTTOS_3 },
    // 3 Business Scrubs Grotto
    { "105:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 4", "Grotto (3 Business Scrubs)"), MapSelect_LoadGame, ENTR_GROTTOS_4 },
    // Gossip Stone, Skulltula & Cow Grotto
    { "106:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 5", "Grotto (GS & Cow)"), MapSelect_LoadGame, ENTR_GROTTOS_5 },
    // Octorok Grotto
    { "107:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 6", "Grotto (Octorok)"), MapSelect_LoadGame, ENTR_GROTTOS_6 },
    // Business Scrub & Deku Nut Upgrade Grotto
    { "108:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 7", "Grotto (Deku Nut Upgrade)"), MapSelect_LoadGame, ENTR_GROTTOS_7 },
    // 2 Wolfos Grotto
    { "109:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 8", "Grotto (Wolfos)"), MapSelect_LoadGame, ENTR_GROTTOS_8 },
    // Bombable Walls Grotto
    { "110:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 9", "Grotto (Bombable Walls)"), MapSelect_LoadGame, ENTR_GROTTOS_9 },
    // 2 Business Scrubs Grotto
    { "111:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 10", "Grotto (2 Business Scrubs)"), MapSelect_LoadGame, ENTR_GROTTOS_10 },
    // Tektite & Heart Piece Grotto
    { "112:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 11", "Grotto (Tektite)"), MapSelect_LoadGame, ENTR_GROTTOS_11 },
    // Deku Stage Grotto
    { "113:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 12", "Grotto (Deku Stage)"), MapSelect_LoadGame, ENTR_GROTTOS_12 },
    // Rupees & Cow Grotto
    { "114:" T(GFXP_HIRAGANA "ｶｸｼﾄﾋﾞｺﾐｱﾅ 13", "Grotto (Rupees & Cow)"), MapSelect_LoadGame, ENTR_GROTTOS_13 },
    { "115:" T(GFXP_KATAKANA "ﾊｲﾗﾙ ﾃﾞﾓ", "Cutscene Map"), MapSelect_LoadGame, ENTR_CUTSCENE_MAP_0 },
#if DEBUG_ASSETS
    { "116:" T(GFXP_HIRAGANA "ﾍﾞｯｼﾂ (ﾀｶﾗﾊﾞｺ" GFXP_KATAKANA "ﾜｰﾌﾟ)", "Besitu"),
      MapSelect_LoadGame, ENTR_BESITU_0 },
    { "117:" T(GFXP_HIRAGANA "ｻｻ" GFXP_KATAKANA "ﾃｽﾄ", "Sasa Test"), MapSelect_LoadGame, ENTR_SASATEST_0 },
    { "118:" T(GFXP_KATAKANA "ﾃｽﾄﾏｯﾌﾟ", "Test"), MapSelect_LoadGame, ENTR_TEST01_0 },
    { "119:" T(GFXP_KATAKANA "ﾃｽﾄﾙｰﾑ", "Test Room"), MapSelect_LoadGame, ENTR_TESTROOM_0 },
    { "120:" T(GFXP_HIRAGANA "ﾁｭｳ" GFXP_KATAKANA "ｽﾀﾛﾌｫｽ" GFXP_HIRAGANA "ﾍﾞﾔ", "Syotes"),
      MapSelect_LoadGame, ENTR_SYOTES_0 },
    { "121:" T(GFXP_KATAKANA "ﾎﾞｽｽﾀﾛﾌｫｽ" GFXP_HIRAGANA "ﾍﾞﾔ", "Syotes 2"), MapSelect_LoadGame,
      ENTR_SYOTES2_0 },
    { "122:" "Sutaru", MapSelect_LoadGame, ENTR_SUTARU_0 },
    { "123:" T("jikkenjyou", "Shooting Gallery (Test)"), MapSelect_LoadGame, ENTR_TEST_SHOOTING_GALLERY_0 },
    { "124:Depth" T(GFXP_KATAKANA " ﾃｽﾄ", " Test"), MapSelect_LoadGame, ENTR_DEPTH_TEST_0 },
    { "125:" T(GFXP_KATAKANA "ﾊｲﾗﾙ" GFXP_HIRAGANA "ﾆﾜ" GFXP_KATAKANA "ｹﾞｰﾑ2", "Castle Courtyard (Beta)"),
      MapSelect_LoadGame, ENTR_HAIRAL_NIWA2_0 },
#endif
#if PLATFORM_N64
    { "116:" T(GFXP_HIRAGANA "ｳｨﾝﾄﾞﾐﾙ", "Windmill"), MapSelect_LoadGame, ENTR_WINDMILL_AND_DAMPES_GRAVE_1 },
    { "117:" T(GFXP_HIRAGANA "ｶﾞﾉﾝｼﾞｮｳﾉｿﾄ", "Outside Ganon's Castle"), MapSelect_LoadGame, MAP_OUTSIDE_GANONS_CASTLE_0 },
    { "118:" T(GFXP_HIRAGANA "ﾚｲｸﾊｲﾘｱﾐﾁ", "Lake Hylia Trail"), MapSelect_LoadGame, ENTR_ROAD_TO_LAKE_HYLIA_0 },
    { "119:" T(GFXP_HIRAGANA "ﾄﾘﾃﾞﾐﾁ", "Fortress Trail"), MapSelect_LoadGame, ENTR_ROAD_TO_FORTRESS_0 },
    { "120:" T(GFXP_HIRAGANA "ｽｶﾙﾁｭﾗﾄﾞｳｸﾂ", "Skulltula Cavern"), MapSelect_LoadGame, ENTR_SWAMP_SPIDER_HOUSE_0 },
    { "121:" T(GFXP_HIRAGANA "ｼｮｰﾄｶｯﾄﾄﾋﾞｺﾐｱ 1", "Grotto (Shortcut 1)"), MapSelect_LoadGame, ENTR_GROTTO_SHORTCUTS_0 },
    { "122:" T(GFXP_HIRAGANA "ｼｮｰﾄｶｯﾄﾄﾋﾞｺﾐｱ 2", "Grotto (Shortcut 2)"), MapSelect_LoadGame, ENTR_GROTTO_SHORTCUTS_2 },
    { "123:" T(GFXP_HIRAGANA "ｼｮｰﾄｶｯﾄﾄﾋﾞｺﾐｱ 3", "Grotto (Dinolfos)"), MapSelect_LoadGame, ENTR_GROTTO_SHORTCUTS_4 },
#endif
    { "Title", (void*)MapSelect_LoadTitle, 0 },
};

static SaveSelectEntry sSaveSelectEntries[] = {
    { 0, "Talked Malon Castle",      EVENT,                      EVENTCHKINF_TALKED_TO_MALON_FIRST_TIME   },
    { 0, "Got Weird Egg",            EVENT,                      EVENTCHKINF_RECEIVED_WEIRD_EGG           },
    { 0, "Talon Woken Castle",       EVENT,                      EVENTCHKINF_TALON_WOKEN_IN_CASTLE        },
    { 0, "Talon Woken Kakariko",     EVENT,                      EVENTCHKINF_TALON_WOKEN_IN_KAKARIKO      },
    { 0, "Talon Returned Castle",    EVENT,                      EVENTCHKINF_TALON_RETURNED_FROM_CASTLE   },
    { 0, "Talon Returned Kakariko",  EVENT,                      EVENTCHKINF_TALON_RETURNED_FROM_KAKARIKO },
    { 0, "Zelda Visited",            EVENT,                      EVENTCHKINF_40                           },
    { 0, "Zelda Fled",               EVENT,                      EVENTCHKINF_80                           },
    { 0, "Gave Zelda's Letter",      INFTABLE,                   INFTABLE_76                              },
    { 0, "Gave Letter King Zora",    EVENT,                      EVENTCHKINF_GAVE_LETTER_TO_KING_ZORA     },
    { 0, "Opened Jabu-Jabu",         EVENT,                      EVENTCHKINF_OPENED_JABU_JABU             },
    { 0, "Opened Door of Time",      EVENT,                      EVENTCHKINF_OPENED_DOOR_OF_TIME          },
    { 0, "Pulled Master Sword",      EVENT,                      EVENTCHKINF_45                           },
    { 0, "Learned Song of Storms",   EVENT,                      EVENTCHKINF_5B                           },
    { 0, "Learned Prelude of Light", EVENT,                      EVENTCHKINF_55                           },
    { 0, "Activated Scarecrow",      EVENT,                      EVENTCHKINF_9C                           },
    { 0, "Epona Obtained",           EVENT,                      EVENTCHKINF_EPONA_OBTAINED               },
    { 0, "Race Cow Unlocked",        EVENT,                      EVENTCHKINF_HORSE_RACE_COW_UNLOCK        },
    { 0, "Carpenters Freed",         CARPENTERS,                 EVENTCHKINF_CARPENTER_0_RESCUED          },
    { 0, "Deku Tree Died",           EVENT,                      EVENTCHKINF_07                           },
    { 0, "Got Kokiri's Emerald",     EVENT,                      EVENTCHKINF_09                           },
    { 0, "Got Goron's Ruby",         EVENT,                      EVENTCHKINF_25                           },
    { 0, "Got Zora's Sapphire",      EVENT,                      EVENTCHKINF_37                           },
    { 0, "Cleansed Kokiri Forest",   EVENT,                      EVENTCHKINF_48                           },
    { 0, "Cleansed Death Mountain",  EVENT,                      EVENTCHKINF_49                           },
    { 0, "Cleansed Lake Hylia",      EVENT,                      EVENTCHKINF_4A                           },
    { 0, "Death Mountain Erupted",   EVENT,                      EVENTCHKINF_2F                           },
    { 0, "Unfrozen King Zora",       INFTABLE,                   INFTABLE_138                             },
    { 0, "Restored Lake Hylia",      EVENT,                      EVENTCHKINF_RESTORED_LAKE_HYLIA          },
    { 0, "Shadow Attacks Kakariko",  SHADOW,                     EVENTCHKINF_AA                           },
    { 0, "Fast Windmill",            EVENT,                      EVENTCHKINF_65                           },
    { 0, "Drained Well",             WELL,                       EVENTCHKINF_DRAINED_WELL                 },
    { 0, "Sheik Reveal",             EVENT,                      EVENTCHKINF_C4                           },
    { 0, "Rainbow Bridge",           EVENT,                      EVENTCHKINF_CREATED_RAINBOW_BRIDGE       },
    { 0, "Killed Gohma",             SCENE_DEKU_TREE_BOSS,       1,                                       },
    { 0, "Killed King Dodongo",      SCENE_DODONGOS_CAVERN_BOSS, 1,                                       },
    { 0, "Killed Barinade",          SCENE_JABU_JABU_BOSS,       1,                                       },
    { 0, "Killed Phantom Ganon",     SCENE_FOREST_TEMPLE_BOSS,   1,                                       },
    { 0, "Killed Volvagia",          SCENE_FIRE_TEMPLE_BOSS,     1,                                       },
    { 0, "Killed Morpha",            SCENE_WATER_TEMPLE_BOSS,    1,                                       },
    { 0, "Killed Bongo Bongo",       SCENE_SHADOW_TEMPLE_BOSS,   1                                        },
    { 0, "Killed Nabooru",           NABOORU,                    5                                        },
    { 0, "Killed Twinrova",          SCENE_SPIRIT_TEMPLE_BOSS,   3                                        },
    { 0, "Completed Mask Quest",     MASK,                       ITEMGETINF_3F,                           },
    { 0, "Got Bottle Cucco Lady",    ITEM,                       ITEMGETINF_0C,                           },
    { 0, "Got Pocket Egg",           ITEM,                       ITEMGETINF_2C,                           },
    { 0, "Got Cojiro",               ITEM,                       ITEMGETINF_2E,                           },
};

void MapSelect_UpdateMenu(MapSelectState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    MapSelectEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ALL(input->press.button, BTN_START) && gSaveContext.fileNum != 0xFF) {
            this->mainTab = !this->mainTab;

            if (this->currentEntryBackup >= 0) {
                s32 temp = this->currentEntry;
                this->currentEntry = this->currentEntryBackup;
                this->currentEntryBackup = temp;
                
                temp = this->topDisplayedEntry;
                this->topDisplayedEntry = this->topDisplayedEntryBackup;
                this->topDisplayedEntryBackup = temp;
                
                temp = this->pageDownIndex;
                this->pageDownIndex = this->pageDownIndexBackup;
                this->pageDownIndexBackup = temp;
            } else {
                this->currentEntryBackup = this->currentEntry;
                this->topDisplayedEntryBackup = this->topDisplayedEntry;
                this->pageDownIndexBackup = this->pageDownIndex;
                this->currentEntry = this->topDisplayedEntry = this->pageDownIndex = 0;
            }

            if (this->mainTab) {
                this->count = ARRAY_COUNT(sMapSelectEntries);
                if ((dREG(80) >= 0) && (dREG(80) < this->count)) {
                    this->currentEntry = dREG(80);
                    this->topDisplayedEntry = dREG(81);
                    this->pageDownIndex = dREG(82);
                }
            } else {
                this->count = ARRAY_COUNT(sSaveSelectEntries);
                if ((dREG(86) >= 0) && (dREG(87) < this->count)) {
                    this->currentEntry = dREG(86);
                    this->topDisplayedEntry = dREG(87);
                    this->pageDownIndex = dREG(88);
                }
            }
        }
        
        if (this->mainTab) {
            if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
                selectedEntry = &this->entries[this->currentEntry];
                if (selectedEntry->loadFunc != NULL) {
                    selectedEntry->loadFunc(this, selectedEntry->entranceIndex);
                }
            }

            if (CHECK_BTN_ALL(input->press.button, BTN_B)) {
                if (LINK_AGE_IN_YEARS == YEARS_ADULT) {
                    gSaveContext.save.linkAge = LINK_AGE_CHILD;
                } else {
                    gSaveContext.save.linkAge = LINK_AGE_ADULT;
                }
            }

            if (CHECK_BTN_ALL(input->press.button, BTN_Z)) {
                if (gSaveContext.save.cutsceneIndex == 0x8000) {
                    gSaveContext.save.cutsceneIndex = 0;
                } else if (gSaveContext.save.cutsceneIndex == 0) {
                    gSaveContext.save.cutsceneIndex = 0xFFF0;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF0) {
                    gSaveContext.save.cutsceneIndex = 0xFFF1;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF1) {
                    gSaveContext.save.cutsceneIndex = 0xFFF2;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF2) {
                    gSaveContext.save.cutsceneIndex = 0xFFF3;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF3) {
                    gSaveContext.save.cutsceneIndex = 0xFFF4;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF4) {
                    gSaveContext.save.cutsceneIndex = 0xFFF5;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF5) {
                    gSaveContext.save.cutsceneIndex = 0xFFF6;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF6) {
                    gSaveContext.save.cutsceneIndex = 0xFFF7;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF7) {
                    gSaveContext.save.cutsceneIndex = 0xFFF8;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF8) {
                    gSaveContext.save.cutsceneIndex = 0xFFF9;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF9) {
                    gSaveContext.save.cutsceneIndex = 0xFFFA;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFFA) {
                    gSaveContext.save.cutsceneIndex = 0x8000;
                }
            } else if (CHECK_BTN_ALL(input->press.button, BTN_R)) {
                if (gSaveContext.save.cutsceneIndex == 0x8000) {
                    gSaveContext.save.cutsceneIndex = 0xFFFA;
                } else if (gSaveContext.save.cutsceneIndex == 0) {
                    gSaveContext.save.cutsceneIndex = 0x8000;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF0) {
                    gSaveContext.save.cutsceneIndex = 0;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF1) {
                    gSaveContext.save.cutsceneIndex = 0xFFF0;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF2) {
                    gSaveContext.save.cutsceneIndex = 0xFFF1;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF3) {
                    gSaveContext.save.cutsceneIndex = 0xFFF2;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF4) {
                    gSaveContext.save.cutsceneIndex = 0xFFF3;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF5) {
                    gSaveContext.save.cutsceneIndex = 0xFFF4;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF6) {
                    gSaveContext.save.cutsceneIndex = 0xFFF5;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF7) {
                    gSaveContext.save.cutsceneIndex = 0xFFF6;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF8) {
                    gSaveContext.save.cutsceneIndex = 0xFFF7;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFF9) {
                    gSaveContext.save.cutsceneIndex = 0xFFF8;
                } else if (gSaveContext.save.cutsceneIndex == 0xFFFA) {
                    gSaveContext.save.cutsceneIndex = 0xFFF9;
                }
            }

            gSaveContext.save.nightFlag = 0;
            if (gSaveContext.save.cutsceneIndex == 0) {
                gSaveContext.save.nightFlag = 1;
            }

    #if OOT_VERSION <= PAL_1_1
            if (CHECK_BTN_ALL(input->press.button, BTN_CUP)) {
                this->questMode++;
                if (this->questMode > QUEST_MAX)
                    this->questMode = 0;
            }
            else
    #endif
            if (CHECK_BTN_ALL(input->press.button, BTN_CDOWN)) {
                this->mirrorMode = (this->mirrorMode == 1) ? 0 : 1;
            }

            if (CHECK_BTN_ALL(input->press.button, BTN_CLEFT)) {
                this->roomNum--;
                if (this->roomNum < 0)
                    this->roomNum = 0;
                dREG(89) = this->roomNum;
            } else if (CHECK_BTN_ALL(input->press.button, BTN_CRIGHT)) {
                this->roomNum++;
                if (this->roomNum > 28)
                    this->roomNum = 28;
                dREG(89) = this->roomNum;
            }
            
        } else if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
            SaveSelectEntry* selectedSaveEntry = &this->saveEntries[this->currentEntry];
            MapSelect_SetEvent(this, selectedSaveEntry->type, selectedSaveEntry->flag);
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DUP)) {
            if (this->lockUp == true) {
                this->timerUp = 0;
            }
            if (this->timerUp == 0) {
                this->timerUp = 20;
                this->lockUp = true;
                Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                     &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->verticalInput = R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DUP) && this->timerUp == 0) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                 &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DDOWN)) {
            if (this->lockDown == true) {
                this->timerDown = 0;
            }
            if (this->timerDown == 0) {
                this->timerDown = 20;
                this->lockDown = true;
                Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                     &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->verticalInput = -R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DDOWN) && (this->timerDown == 0)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                 &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = -R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DLEFT) || CHECK_BTN_ALL(input->cur.button, BTN_DLEFT)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                 &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = R_UPDATE_RATE;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DRIGHT) || CHECK_BTN_ALL(input->cur.button, BTN_DRIGHT)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale,
                                 &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = -R_UPDATE_RATE;
        }
    }

    if (CHECK_BTN_ALL(input->press.button, BTN_L)) {
        this->pageDownIndex++;
        this->pageDownIndex = this->mainTab ? ((this->pageDownIndex + ARRAY_COUNT(this->pageDownStops)) % ARRAY_COUNT(this->pageDownStops)) : ((this->pageDownIndex + 3) % 3);
        this->currentEntry = this->topDisplayedEntry = this->pageDownStops[this->pageDownIndex];
    }

    this->verticalInputAccumulator += this->verticalInput;

    if (this->verticalInputAccumulator < -7) {
        this->verticalInput = 0;
        this->verticalInputAccumulator = 0;

        this->currentEntry++;
        this->currentEntry = (this->currentEntry + this->count) % this->count;

        if (this->currentEntry == ((this->topDisplayedEntry + this->count + 19) % this->count)) {
            this->topDisplayedEntry++;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }
    }

    if (this->verticalInputAccumulator > 7) {
        this->verticalInput = 0;
        this->verticalInputAccumulator = 0;

        if (this->currentEntry == this->topDisplayedEntry) {
            this->topDisplayedEntry -= 2;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }

        this->currentEntry--;
        this->currentEntry = (this->currentEntry + this->count) % this->count;

        if (this->currentEntry == ((this->topDisplayedEntry + this->count) % this->count)) {
            this->topDisplayedEntry--;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }
    }

    this->currentEntry = (this->currentEntry + this->count) % this->count;
    this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;

    if (this->mainTab) {
        dREG(80) = this->currentEntry;
        dREG(81) = this->topDisplayedEntry;
        dREG(82) = this->pageDownIndex;
    } else {
        dREG(86) = this->currentEntry;
        dREG(87) = this->topDisplayedEntry;
        dREG(88) = this->pageDownIndex;
    }

    if (this->timerUp != 0) {
        this->timerUp--;
    }

    if (this->timerUp == 0) {
        this->lockUp = false;
    }

    if (this->timerDown != 0) {
        this->timerDown--;
    }

    if (this->timerDown == 0) {
        this->lockDown = false;
    }
}

void MapSelect_PrintMenu(MapSelectState* this, GfxPrint* printer) {
    s32 scene;
    s32 i;
    char* name;

    GfxPrint_SetColor(printer, 255, 155, 150, 255);
    GfxPrint_SetPos(printer, 12, 2);
    GfxPrint_Printf(printer, "ZELDA MAP SELECT");
    GfxPrint_SetColor(printer, 255, 255, 255, 255);

    for (i = 0; i < 20; i++) {
        GfxPrint_SetPos(printer, 9, i + 4);

        scene = (this->topDisplayedEntry + i + this->count) % this->count;
        if (scene == this->currentEntry) {
            GfxPrint_SetColor(printer, 255, 20, 20, 255);
        } else {
            GfxPrint_SetColor(printer, 200, 200, 55, 255);
        }

        name = this->entries[scene].name;
        if (name == NULL) {
            name = "**Null**";
        }

        GfxPrint_Printf(printer, "%s", name);
    };

    GfxPrint_SetColor(printer, 155, 55, 150, 255);
    GfxPrint_SetPos(printer, 22, 25);

#if OOT_VERSION <= PAL_1_1
    switch (this->questMode) {
        case VANILLA_QUEST:
            GfxPrint_Printf(printer, "Vanilla Quest");
            break;
        case MASTER_QUEST:
            GfxPrint_Printf(printer, "Master Quest");
            break;
        case URA_QUEST:
            GfxPrint_Printf(printer, "Ura Quest");
            break;
        case CHILD_QUEST:
            GfxPrint_Printf(printer, "Child Quest");
            break;
        default:
            GfxPrint_Printf(printer, "Quest:%d", this->questMode);
            break;
    }
#endif
    
    GfxPrint_SetColor(printer, 155, 55, 150, 255);
    GfxPrint_SetPos(printer, 22, 26);
    GfxPrint_Printf(printer, "Mirror:%d", this->mirrorMode);
}

void MapSelect_PrintSaveMenu(MapSelectState* this, GfxPrint* printer) {
    s32 entry;
    s32 i;
    char* name;

    GfxPrint_SetColor(printer, 255, 155, 150, 255);
    GfxPrint_SetPos(printer, 10, 2);
    GfxPrint_Printf(printer, "ZELDA SAVE FLAG EDITOR");
    GfxPrint_SetColor(printer, 255, 255, 255, 255);

    for (i=0; i<20; i++) {
        entry = (this->topDisplayedEntry + i + this->count) % this->count;

        if (entry == this->currentEntry)
            GfxPrint_SetColor(printer, 255, 20, 20, 255);
        else GfxPrint_SetColor(printer, 200, 200, 55, 255);

        GfxPrint_SetPos(printer, 1, i + 4);
        if (this->saveEntries[entry].number < 10)
            GfxPrint_Printf(printer, " %d:%s", this->saveEntries[entry].number, this->saveEntries[entry].name);
        else GfxPrint_Printf(printer, "%d:%s", this->saveEntries[entry].number, this->saveEntries[entry].name);

        GfxPrint_SetPos(printer, 31, i + 4);
        GfxPrint_Printf(printer, "%s", MapSelect_GetEvent(this, this->saveEntries[entry].type, this->saveEntries[entry].flag));
    };
}

static const char* sLoadingMessages[] = {
    T(GFXP_HIRAGANA "ｼﾊﾞﾗｸｵﾏﾁｸﾀﾞｻｲ", "Please wait a minute"),
    T(GFXP_HIRAGANA "ﾁｮｯﾄ ﾏｯﾃﾈ", "Hold on a sec"),
    T(GFXP_KATAKANA "ｳｪｲﾄ ｱ ﾓｰﾒﾝﾄ", "Wait a moment"),
    T(GFXP_KATAKANA "ﾛｰﾄﾞ" GFXP_HIRAGANA "ﾁｭｳ", "Loading"),
    T(GFXP_HIRAGANA "ﾅｳ ﾜｰｷﾝｸﾞ", "Now working"),
    T(GFXP_HIRAGANA "ｲﾏ ﾂｸｯﾃﾏｽ", "Now creating"),
    T(GFXP_HIRAGANA "ｺｼｮｳｼﾞｬﾅｲﾖ", "It's not broken"),
    T(GFXP_KATAKANA "ｺｰﾋｰ ﾌﾞﾚｲｸ", "Coffee Break"),
    T(GFXP_KATAKANA "Bﾒﾝｦｾｯﾄｼﾃｸﾀﾞｻｲ", "Please set B side"),
    T(GFXP_HIRAGANA "ｼﾞｯﾄ" GFXP_KATAKANA "ｶﾞﾏﾝ" GFXP_HIRAGANA "ﾉ" GFXP_KATAKANA "ｺ" GFXP_HIRAGANA "ﾃﾞｱｯﾀ",
      "Be patient, now"),
    T(GFXP_HIRAGANA "ｲﾏｼﾊﾞﾗｸｵﾏﾁｸﾀﾞｻｲ", "Please wait just a minute"),
    T(GFXP_HIRAGANA "ｱﾜﾃﾅｲｱﾜﾃﾅｲ｡ﾋﾄﾔｽﾐﾋﾄﾔｽﾐ｡", "Don't worry, take a break."),
};

void MapSelect_PrintLoadingMessage(MapSelectState* this, GfxPrint* printer) {
    s32 randomMsg;

    GfxPrint_SetPos(printer, 10, 15);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    randomMsg = Rand_ZeroOne() * ARRAY_COUNT(sLoadingMessages);
    GfxPrint_Printf(printer, "%s", sLoadingMessages[randomMsg]);
}

void MapSelect_PrintRoomNumSetting(MapSelectState* this, GfxPrint* printer) {
    GfxPrint_SetPos(printer, 4, 27);
    GfxPrint_SetColor(printer, 255, 255, 55, 255);

    if (this->roomNum > 0)
        GfxPrint_Printf(printer, "Room:%d", this->roomNum - 1);
    else GfxPrint_Printf(printer, "Room:Default");
}

static const char* sAgeLabels[] = {
    T(GFXP_HIRAGANA "17(ﾜｶﾓﾉ)", "17(Adult)"),
    T(GFXP_HIRAGANA "10(ﾜｶｽｷﾞ)", "10(Child)"),
};

void MapSelect_PrintAgeSetting(MapSelectState* this, GfxPrint* printer, s32 age) {
    GfxPrint_SetPos(printer, 4, 26);
    GfxPrint_SetColor(printer, 255, 255, 55, 255);
    GfxPrint_Printf(printer, "Age:%s", sAgeLabels[age]);
}

void MapSelect_PrintCutsceneSetting(MapSelectState* this, GfxPrint* printer, u16 csIndex) {
    char* label;

    GfxPrint_SetPos(printer, 4, 25);
    GfxPrint_SetColor(printer, 255, 255, 55, 255);

    switch (csIndex) {
        case 0:
            label = T(GFXP_HIRAGANA " ﾖﾙ " GFXP_KATAKANA "ｺﾞﾛﾝ", "Night");
            gSaveContext.save.dayTime = CLOCK_TIME(0, 0);
            break;
        case 0x8000:
            // clang-format off
            gSaveContext.save.dayTime = CLOCK_TIME(12, 0); label = T(GFXP_HIRAGANA "ｵﾋﾙ " GFXP_KATAKANA "ｼﾞｬﾗ", "Day");
            // clang-format on
            break;
        case 0xFFF0:
            // clang-format off
            gSaveContext.save.dayTime = CLOCK_TIME(12, 0); label = T("ﾃﾞﾓ00", "Cutscene 00");
            // clang-format on
            break;
        case 0xFFF1:
            label = T("ﾃﾞﾓ01", "Cutscene 01");
            break;
        case 0xFFF2:
            label = T("ﾃﾞﾓ02", "Cutscene 02");
            break;
        case 0xFFF3:
            label = T("ﾃﾞﾓ03", "Cutscene 03");
            break;
        case 0xFFF4:
            label = T("ﾃﾞﾓ04", "Cutscene 04");
            break;
        case 0xFFF5:
            label = T("ﾃﾞﾓ05", "Cutscene 05");
            break;
        case 0xFFF6:
            label = T("ﾃﾞﾓ06", "Cutscene 06");
            break;
        case 0xFFF7:
            label = T("ﾃﾞﾓ07", "Cutscene 07");
            break;
        case 0xFFF8:
            label = T("ﾃﾞﾓ08", "Cutscene 08");
            break;
        case 0xFFF9:
            label = T("ﾃﾞﾓ09", "Cutscene 09");
            break;
        case 0xFFFA:
            label = T("ﾃﾞﾓ0A", "Cutscene 0A");
            break;
    };

    gSaveContext.skyboxTime = gSaveContext.save.dayTime;
    GfxPrint_Printf(printer, "Stage:" GFXP_KATAKANA "%s", label);
}

void MapSelect_DrawMenu(MapSelectState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx, "../z_select.c", 930);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    Gfx_SetupDL_28Opa(gfxCtx);

    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    
    if (this->mainTab) {
        
        MapSelect_PrintMenu(this, printer);
        MapSelect_PrintRoomNumSetting(this, printer);
        MapSelect_PrintAgeSetting(this, printer, ((void)0, gSaveContext.save.linkAge));
        MapSelect_PrintCutsceneSetting(this, printer, ((void)0, gSaveContext.save.cutsceneIndex));
    } else {
        MapSelect_PrintSaveMenu(this, printer);
    }
    
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx, "../z_select.c", 966);
}

void MapSelect_DrawLoadingScreen(MapSelectState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx, "../z_select.c", 977);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    Gfx_SetupDL_28Opa(gfxCtx);

    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    MapSelect_PrintLoadingMessage(this, printer);
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx, "../z_select.c", 1006);
}

void MapSelect_Draw(MapSelectState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;

    OPEN_DISPS(gfxCtx, "../z_select.c", 1013);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);

    if (!this->state.running) {
        MapSelect_DrawLoadingScreen(this);
    } else {
        MapSelect_DrawMenu(this);
    }

    CLOSE_DISPS(gfxCtx, "../z_select.c", 1037);
}

void MapSelect_Main(GameState* thisx) {
    MapSelectState* this = (MapSelectState*)thisx;

    MapSelect_UpdateMenu(this);
    MapSelect_Draw(this);
}

void MapSelect_Destroy(GameState* thisx) {
    PRINTF("%c", BEL);
    PRINTF(T("*** view_cleanupはハングアップするので、呼ばない ***\n",
             "*** view_cleanup will hang, so it won't be called ***\n"));
}

void MapSelect_Init(GameState* thisx) {
    MapSelectState* this = (MapSelectState*)thisx;
    u8 i;

    this->state.main = MapSelect_Main;
    this->state.destroy = MapSelect_Destroy;
    this->entries = sMapSelectEntries;
    this->saveEntries = sSaveSelectEntries;
    this->topDisplayedEntry = 0;
    this->currentEntry = 0;
    this->pageDownStops[0] = 0;  // Hyrule Field
    this->pageDownStops[1] = 19; // Temple Of Time
    this->pageDownStops[2] = 37; // Treasure Chest Game
    this->pageDownStops[3] = 51; // Gravekeeper's Hut
    this->pageDownStops[4] = 59; // Zora Shop
    this->pageDownStops[5] = 73; // Bottom of the Well
    this->pageDownStops[6] = 91; // Escaping Ganon's Tower 3
    this->pageDownIndex = 0;
    this->count = ARRAY_COUNT(sMapSelectEntries);
    View_Init(&this->view, this->state.gfxCtx);
    this->view.flags = (VIEW_PROJECTION_ORTHO | VIEW_VIEWPORT);
    this->verticalInputAccumulator = 0;
    this->verticalInput = 0;
    this->timerUp = 0;
    this->timerDown = 0;
    this->lockUp = 0;
    this->lockDown = 0;
    this->roomNum = 0;
    this->mainTab = true;
    this->currentEntryBackup = this->topDisplayedEntryBackup = this->pageDownIndexBackup = -1;

    if (gSaveContext.fileNum == 0xFF)
        this->mainTab = true;

    for (i=1; i<=ARRAY_COUNT(sSaveSelectEntries); i++)
        this->saveEntries[i-1].number = i;
    
#if OOT_VERSION <= PAL_1_1
    this->questMode  = QUEST_MODE;
#endif
    this->mirrorMode = MIRROR_MODE ? 1 : 0;

    if ((dREG(80) >= 0) && (dREG(80) < this->count)) {
        this->currentEntry = dREG(80);
        this->topDisplayedEntry = dREG(81);
        this->pageDownIndex = dREG(82);
    }
    this->roomNum = dREG(89);

    R_UPDATE_RATE = 1;

    {
        u32 size = (uintptr_t)_z_select_staticSegmentRomEnd - (uintptr_t)_z_select_staticSegmentRomStart;

        this->staticSegment = GAME_STATE_ALLOC(&this->state, size, "../z_select.c", 1114);
        DMA_REQUEST_SYNC(this->staticSegment, (uintptr_t)_z_select_staticSegmentRomStart, size, "../z_select.c", 1115);
    }

    gSaveContext.save.cutsceneIndex = 0x8000;
    gSaveContext.save.linkAge = LINK_AGE_CHILD;
}
