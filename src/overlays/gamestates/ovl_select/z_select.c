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
#include "z64play.h"
#include "z64save.h"
#include "z64sram.h"

void MapSelect_LoadTitle(MapSelectState* this) {
    this->state.running = false;
    SET_NEXT_GAMESTATE(&this->state, ConsoleLogo_Init, ConsoleLogoState);
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
    gSaveContext.forceRisingButtonAlphas = gSaveContext.nextHudVisibilityMode = gSaveContext.hudVisibilityMode =
        gSaveContext.hudVisibilityModeTimer = 0; // false, HUD_VISIBILITY_NO_CHANGE
    SEQCMD_STOP_SEQUENCE(SEQ_PLAYER_BGM_MAIN, 0);
    gSaveContext.save.entranceIndex = entranceIndex;
    gSaveContext.respawnFlag = 0;
    gSaveContext.respawn[RESPAWN_MODE_DOWN].entranceIndex = ENTR_LOAD_OPENING;
    gSaveContext.seqId = (u8)NA_BGM_DISABLED;
    gSaveContext.natureAmbienceId = 0xFF;
    gSaveContext.showTitleCard = true;
    gWeatherMode = WEATHER_MODE_CLEAR;

    this->state.running = false;
    SET_NEXT_GAMESTATE(&this->state, Play_Init, PlayState);
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
    { "20:Temple of Time", MapSelect_LoadGame, ENTR_TEMPLE_OF_TIME_0 },
    { "21:Chamber of Sages", MapSelect_LoadGame, ENTR_CHAMBER_OF_THE_SAGES_0 },
    { "22:Shooting Gallery", MapSelect_LoadGame, ENTR_SHOOTING_GALLERY_0 },
    { "23:Castle Courtyard", MapSelect_LoadGame,
      ENTR_CASTLE_COURTYARD_GUARDS_DAY_0 },
    { "24:Grave (ReDead)", MapSelect_LoadGame, ENTR_REDEAD_GRAVE_0 },
    { "25:Grave (Fairy's Fountain)", MapSelect_LoadGame,
      ENTR_GRAVE_WITH_FAIRYS_FOUNTAIN_0 },
    { "26:Royal Family's Tomb", MapSelect_LoadGame, ENTR_ROYAL_FAMILYS_TOMB_0 },
    { "27:Great Fairy's Fountain (R)", MapSelect_LoadGame,
      ENTR_GREAT_FAIRYS_FOUNTAIN_MAGIC_0 },
    { "28:Fairy's Fountain", MapSelect_LoadGame, ENTR_FAIRYS_FOUNTAIN_0 },
    { "29:Great Fairy's Fountain (G)", MapSelect_LoadGame,
      ENTR_GREAT_FAIRYS_FOUNTAIN_SPELLS_0 },
    { "30:Top of Ganon's Tower", MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_EXTERIOR_0 },
    { "31:Zelda's Courtyard", MapSelect_LoadGame,
      ENTR_CASTLE_COURTYARD_ZELDA_0 },
    { "32:Fishing Pond", MapSelect_LoadGame, ENTR_FISHING_POND_0 },
    { "33:Bombchu Bowling Alley", MapSelect_LoadGame, ENTR_BOMBCHU_BOWLING_ALLEY_0 },
    // Talon's House
    { "34:Talon's House", MapSelect_LoadGame,
      ENTR_LON_LON_BUILDINGS_0 },
    // Ranch Silo
    { "35:Ranch Silo", MapSelect_LoadGame,
      ENTR_LON_LON_BUILDINGS_1 },
    { "36:Guard House", MapSelect_LoadGame, ENTR_MARKET_GUARD_HOUSE_0 },
    { "37:Granny's Potion Shop", MapSelect_LoadGame, ENTR_POTION_SHOP_GRANNY_0 },
    { "38:Treasure Box Shop", MapSelect_LoadGame, ENTR_TREASURE_BOX_SHOP_0 },
    { "39:House of Skulltula", MapSelect_LoadGame,
      ENTR_HOUSE_OF_SKULLTULA_0 },
    { "40:Market Entrance", MapSelect_LoadGame,
      ENTR_MARKET_ENTRANCE_DAY_0 },
    { "41:Market", MapSelect_LoadGame, ENTR_MARKET_DAY_0 },
    { "42:Market Back Alley", MapSelect_LoadGame, ENTR_BACK_ALLEY_DAY_0 },
    { "43:Temple of Time (Exterior)", MapSelect_LoadGame,
      ENTR_TEMPLE_OF_TIME_EXTERIOR_DAY_0 },
    { "44:Link's House", MapSelect_LoadGame, ENTR_LINKS_HOUSE_0 },
    { "45:Kakariko Guest House", MapSelect_LoadGame,
      ENTR_KAKARIKO_CENTER_GUEST_HOUSE_0 },
    { "46:Market Back Alley House", MapSelect_LoadGame, ENTR_BACK_ALLEY_HOUSE_0 },
    { "47:Know-It-All Brothers' House", MapSelect_LoadGame,
      ENTR_KNOW_IT_ALL_BROS_HOUSE_0 },
    { "48:Twins' House", MapSelect_LoadGame,
      ENTR_TWINS_HOUSE_0 },
    { "49:Mido's House",
      MapSelect_LoadGame, ENTR_MIDOS_HOUSE_0 },
    { "50:Saria's House",
      MapSelect_LoadGame, ENTR_SARIAS_HOUSE_0 },
    { "51:Stable", MapSelect_LoadGame, ENTR_STABLE_0 },
    { "52:Gravekeeper's Hut", MapSelect_LoadGame, ENTR_GRAVEKEEPERS_HUT_0 },
    { "53:Dog Lady's House", MapSelect_LoadGame,
      ENTR_DOG_LADY_HOUSE_0 },
    { "54:Impa's House",
      MapSelect_LoadGame, ENTR_IMPAS_HOUSE_0 },
    { "55:Lakeside Laboratory", MapSelect_LoadGame,
      ENTR_LAKESIDE_LABORATORY_0 },
    { "56:Tent", MapSelect_LoadGame, ENTR_CARPENTERS_TENT_0 },
    { "57:Bazaar", MapSelect_LoadGame, ENTR_BAZAAR_0 },
    { "58:Kokiri Shop", MapSelect_LoadGame, ENTR_KOKIRI_SHOP_0 },
    { "59:Goron Shop", MapSelect_LoadGame, ENTR_GORON_SHOP_0 },
    { "60:Zora Shop", MapSelect_LoadGame, ENTR_ZORA_SHOP_0 },
    { "61:Potion Shop (Kakariko)", MapSelect_LoadGame,
      ENTR_POTION_SHOP_KAKARIKO_0 },
    { "62:Potion Shop (Market)", MapSelect_LoadGame,
      ENTR_POTION_SHOP_MARKET_0 },
    { "63:Bombchu Shop", MapSelect_LoadGame, ENTR_BOMBCHU_SHOP_0 },
    { "64:Happy Mask Shop", MapSelect_LoadGame, ENTR_HAPPY_MASK_SHOP_0 },
    { "65:Gerudo Training Ground", MapSelect_LoadGame,
      ENTR_GERUDO_TRAINING_GROUND_0 },
    { "66:Deku Tree", MapSelect_LoadGame,
      ENTR_DEKU_TREE_0 },
    { "67:Deku Tree (Boss)", MapSelect_LoadGame,
      ENTR_DEKU_TREE_BOSS_0 },
    { "68:Dodongo's Cavern", MapSelect_LoadGame, ENTR_DODONGOS_CAVERN_0 },
    { "69:Dodongo's Cavern (Boss)", MapSelect_LoadGame,
      ENTR_DODONGOS_CAVERN_BOSS_0 },
    { "70:Jabu-Jabu", MapSelect_LoadGame,
      ENTR_JABU_JABU_0 },
    { "71:Jabu-Jabu (Boss)", MapSelect_LoadGame,
      ENTR_JABU_JABU_BOSS_0 },
    { "72:Forest Temple", MapSelect_LoadGame, ENTR_FOREST_TEMPLE_0 },
    { "73:Forest Temple (Boss)", MapSelect_LoadGame,
      ENTR_FOREST_TEMPLE_BOSS_0 },
    { "74:Bottom of the Well", MapSelect_LoadGame,
      ENTR_BOTTOM_OF_THE_WELL_0 },
    { "75:Shadow Temple", MapSelect_LoadGame,
      ENTR_SHADOW_TEMPLE_0 },
    { "76:Shadow Temple (Boss)",
      MapSelect_LoadGame, ENTR_SHADOW_TEMPLE_BOSS_0 },
    { "77:Fire Temple", MapSelect_LoadGame, ENTR_FIRE_TEMPLE_0 },
    { "78:Fire Temple (Boss)", MapSelect_LoadGame,
      ENTR_FIRE_TEMPLE_BOSS_0 },
    { "79:Water Temple", MapSelect_LoadGame, ENTR_WATER_TEMPLE_0 },
    { "80:Water Temple (Boss)", MapSelect_LoadGame,
      ENTR_WATER_TEMPLE_BOSS_0 },
    { "81:Spirit Temple", MapSelect_LoadGame,
      ENTR_SPIRIT_TEMPLE_0 },
    // Iron Knuckle's Lair
    { "82:Spirit Temple (Iron Knuckle)",
      MapSelect_LoadGame, ENTR_SPIRIT_TEMPLE_BOSS_0 },
    // Twinrova's Lair
    { "83:Spirit Temple (Boss)",
      MapSelect_LoadGame, ENTR_SPIRIT_TEMPLE_BOSS_2 },
    { "84:Ganon's Tower", MapSelect_LoadGame, ENTR_GANONS_TOWER_0 },
    { "85:Ganondorf (Boss)", MapSelect_LoadGame,
      ENTR_GANONDORF_BOSS_0 },
    { "86:Ice Cavern", MapSelect_LoadGame, ENTR_ICE_CAVERN_0 },
    // Dampé's Grave
    { "87:Dampe's Grave", MapSelect_LoadGame,
      ENTR_WINDMILL_AND_DAMPES_GRAVE_0 },
    { "88:Inside Ganon's Castle",
      MapSelect_LoadGame, ENTR_INSIDE_GANONS_CASTLE_0 },
    { "89:Ganon (Boss)",
      MapSelect_LoadGame, ENTR_GANON_BOSS_0 },
    { "90:Ganon's Tower Collapse 1", MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_0 },
    { "91:Ganon's Tower Collapse 2", MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_2 },
    { "92:Ganon's Tower Collapse 3", MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_4 },
    { "93:Ganon's Tower Collapse 4", MapSelect_LoadGame,
      ENTR_GANONS_TOWER_COLLAPSE_INTERIOR_6 },
    { "94:Ganon's Tower Collapse 5", MapSelect_LoadGame,
      ENTR_INSIDE_GANONS_CASTLE_COLLAPSE_0 },
    { "95:Thieves' Hideout 1", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_0 },
    { "96:Thieves' Hideout 2", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_2 },
    { "97:Thieves' Hideout 3", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_4 },
    { "98:Thieves' Hideout 4", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_6 },
    { "99:Thieves' Hideout 5", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_10 },
    { "100:Thieves' Hideout 6", MapSelect_LoadGame,
      ENTR_THIEVES_HIDEOUT_12 },
    // Gossip Stone & Chest Grotto
    { "101:Grotto (Gossip Stone)", MapSelect_LoadGame, ENTR_GROTTOS_0 },
    // Skulltula & Gold Skulltula Grotto
    { "102:Grotto (Skulltula)", MapSelect_LoadGame, ENTR_GROTTOS_1 },
    // Business Scrub & Heart Piece Grotto
    { "103:Grotto (Business Scrub)", MapSelect_LoadGame, ENTR_GROTTOS_2 },
    // Redeads Grotto
    { "104:Grotto (ReDeads)", MapSelect_LoadGame, ENTR_GROTTOS_3 },
    // 3 Business Scrubs Grotto
    { "105:Grotto (3 Business Scrubs)", MapSelect_LoadGame, ENTR_GROTTOS_4 },
    // Gossip Stone, Skulltula & Cow Grotto
    { "106:Grotto (GS & Cow)", MapSelect_LoadGame, ENTR_GROTTOS_5 },
    // Octorok Grotto
    { "107:Grotto (Octorok)", MapSelect_LoadGame, ENTR_GROTTOS_6 },
    // Business Scrub & Deku Nut Upgrade Grotto
    { "108:Grotto (Deku Nut Upgrade)", MapSelect_LoadGame, ENTR_GROTTOS_7 },
    // 2 Wolfos Grotto
    { "109:Grotto (Wolfos)", MapSelect_LoadGame, ENTR_GROTTOS_8 },
    // Bombable Walls Grotto
    { "110:Grotto (Bombable Walls)", MapSelect_LoadGame, ENTR_GROTTOS_9 },
    // 2 Business Scrubs Grotto
    { "111:Grotto (2 Business Scrubs)", MapSelect_LoadGame, ENTR_GROTTOS_10 },
    // Tektite & Heart Piece Grotto
    { "112:Grotto (Tektite)", MapSelect_LoadGame, ENTR_GROTTOS_11 },
    // Deku Stage Grotto
    { "113:Grotto (Deku Stage)", MapSelect_LoadGame, ENTR_GROTTOS_12 },
    // Rupees & Cow Grotto
    { "114:Grotto (Rupees & Cow)", MapSelect_LoadGame, ENTR_GROTTOS_13 },
    { "115:Cutscene Map", MapSelect_LoadGame, ENTR_CUTSCENE_MAP_0 },
#if DEBUG_FEATURES
    { "116:Besitu",
      MapSelect_LoadGame, ENTR_BESITU_0 },
    { "117:Sasa Test", MapSelect_LoadGame, ENTR_SASATEST_0 },
    { "118:Test", MapSelect_LoadGame, ENTR_TEST01_0 },
    { "119:Test Room", MapSelect_LoadGame, ENTR_TESTROOM_0 },
    { "120:Syotes",
      MapSelect_LoadGame, ENTR_SYOTES_0 },
    { "121:Syotes 2", MapSelect_LoadGame,
      ENTR_SYOTES2_0 },
    { "122:Sutaru", MapSelect_LoadGame, ENTR_SUTARU_0 },
    { "123:Shooting Gallery (Test)", MapSelect_LoadGame, ENTR_TEST_SHOOTING_GALLERY_0 },
    { "124:Depth Test", MapSelect_LoadGame, ENTR_DEPTH_TEST_0 },
    { "125:Castle Courtyard (Beta)",
      MapSelect_LoadGame, ENTR_HAIRAL_NIWA2_0 },
#endif
    { "Title", (void*)MapSelect_LoadTitle, 0 },
#if PLATFORM_N64
    { "64DD TEST  n64dd_SetDiskVersion(1)", (void*)func_80800AD0_unknown, 0 },
    { "64DD TEST2 n64dd_SetDiskVersion(0)", (void*)func_80800B08_unknown, 0 },
#endif
};

void MapSelect_UpdateMenu(MapSelectState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    MapSelectEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ALL(input->press.button, BTN_A) || CHECK_BTN_ALL(input->press.button, BTN_START)) {
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

        // user can change "opt", but it doesn't do anything
        if (CHECK_BTN_ALL(input->press.button, BTN_CUP)) {
            this->opt--;
        }
        if (CHECK_BTN_ALL(input->press.button, BTN_CDOWN)) {
            this->opt++;
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
        this->pageDownIndex =
            (this->pageDownIndex + ARRAY_COUNT(this->pageDownStops)) % ARRAY_COUNT(this->pageDownStops);
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

    dREG(80) = this->currentEntry;
    dREG(81) = this->topDisplayedEntry;
    dREG(82) = this->pageDownIndex;

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
    GfxPrint_SetPos(printer, 20, 26);
    GfxPrint_Printf(printer, "OPT=%d", this->opt);
}

static const char* sLoadingMessages[] = {
    "Please wait a minute",
    "Hold on a sec",
    "Wait a moment",
    "Loading",
    "Now working",
    "Now creating",
    "It's not broken",
    "Coffee Break",
    "Please set B side",
    "Be patient, now",
    "Please wait just a minute",
    "Don't worry, take a break.",
};

void MapSelect_PrintLoadingMessage(MapSelectState* this, GfxPrint* printer) {
    s32 randomMsg;

    GfxPrint_SetPos(printer, 10, 15);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);
    randomMsg = Rand_ZeroOne() * ARRAY_COUNT(sLoadingMessages);
    GfxPrint_Printf(printer, "%s", sLoadingMessages[randomMsg]);
}

static const char* sAgeLabels[] = {
    "17(Adult)",
    "10(Child)",
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
            label = "Night";
            gSaveContext.save.dayTime = CLOCK_TIME(0, 0);
            break;
        case 0x8000:
            // clang-format off
            gSaveContext.save.dayTime = CLOCK_TIME(12, 0); label = "Day";
            // clang-format on
            break;
        case 0xFFF0:
            // clang-format off
            gSaveContext.save.dayTime = CLOCK_TIME(12, 0); label = "Cutscene 00";
            // clang-format on
            break;
        case 0xFFF1:
            label = "Cutscene 01";
            break;
        case 0xFFF2:
            label = "Cutscene 02";
            break;
        case 0xFFF3:
            label = "Cutscene 03";
            break;
        case 0xFFF4:
            label = "Cutscene 04";
            break;
        case 0xFFF5:
            label = "Cutscene 05";
            break;
        case 0xFFF6:
            label = "Cutscene 06";
            break;
        case 0xFFF7:
            label = "Cutscene 07";
            break;
        case 0xFFF8:
            label = "Cutscene 08";
            break;
        case 0xFFF9:
            label = "Cutscene 09";
            break;
        case 0xFFFA:
            label = "Cutscene 0A";
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
    Gfx_SetupFrame(gfxCtx, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    Gfx_SetupDL_28Opa(gfxCtx);

    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    MapSelect_PrintMenu(this, printer);
    MapSelect_PrintAgeSetting(this, printer, ((void)0, gSaveContext.save.linkAge));
    MapSelect_PrintCutsceneSetting(this, printer, ((void)0, gSaveContext.save.cutsceneIndex));
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);

    CLOSE_DISPS(gfxCtx, "../z_select.c", 966);
}

void MapSelect_DrawLoadingScreen(MapSelectState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx, "../z_select.c", 977);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0);
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
    Gfx_SetupFrame(gfxCtx, 0, 0, 0);
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

    this->state.main = MapSelect_Main;
    this->state.destroy = MapSelect_Destroy;
    this->entries = sMapSelectEntries;
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
    this->opt = 0;
    this->count = ARRAY_COUNT(sMapSelectEntries);
    View_Init(&this->view, this->state.gfxCtx);
    this->view.flags = (VIEW_PROJECTION_ORTHO | VIEW_VIEWPORT);
    this->verticalInputAccumulator = 0;
    this->verticalInput = 0;
    this->timerUp = 0;
    this->timerDown = 0;
    this->lockUp = 0;
    this->lockDown = 0;
    this->unk_234 = 0;

    if ((dREG(80) >= 0) && (dREG(80) < this->count)) {
        this->currentEntry = dREG(80);
        this->topDisplayedEntry = dREG(81);
        this->pageDownIndex = dREG(82);
    }

    R_UPDATE_RATE = 1;

    {
        u32 size = (uintptr_t)_z_select_staticSegmentRomEnd - (uintptr_t)_z_select_staticSegmentRomStart;

        this->staticSegment = GAME_STATE_ALLOC(&this->state, size, "../z_select.c", 1114);
        DMA_REQUEST_SYNC(this->staticSegment, (uintptr_t)_z_select_staticSegmentRomStart, size, "../z_select.c", 1115);
    }

    gSaveContext.save.cutsceneIndex = 0x8000;
    gSaveContext.save.linkAge = LINK_AGE_CHILD;
}
