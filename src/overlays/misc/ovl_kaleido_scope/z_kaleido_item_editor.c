#include "z_kaleido_scope.h"
#include "file_select_state.h"

#include "libu64/gfxprint.h"
#include "array_count.h"
#include "controller.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "printf.h"
#include "play_state.h"
#include "save.h"

void KaleidoScope_SwitchTabItemEditor(void);

typedef enum ItemEditorTabs {
    /* 0xFF */ ITEM_EDITOR_TAB_SELECT = -1,
    /* 0x00 */ ITEM_EDITOR_TAB_ITEMS,
    /* 0x01 */ ITEM_EDITOR_TAB_AMMO,
    /* 0x02 */ ITEM_EDITOR_TAB_EQUIPMENT,
    /* 0x03 */ ITEM_EDITOR_TAB_UPGRADES,
    /* 0x04 */ ITEM_EDITOR_TAB_SONGS,
    /* 0x05 */ ITEM_EDITOR_TAB_QUEST,
    /* 0x06 */ ITEM_EDITOR_TAB_DUNGEON_KEYS,
    /* 0x07 */ ITEM_EDITOR_TAB_DUNGEON_QUEST,
    /* 0x08 */ ITEM_EDITOR_TAB_RESET_SCENE_FLAGS,
    /* 0x09 */ ITEM_EDITOR_TAB_MAX
} ItemEditorTabs;

typedef struct ItemEditorEntry {
    /* 0x00 */ u8 questMode, param1, param2, param3;
    /* 0x04 */ char* name;
    /* 0x08 */ void  (*setFunc) (u8, u8, u8, struct PlayState*);
    /* 0x0C */ char* (*getFunc) (u8, u8, u8);
} ItemEditorEntry; // size = 0x10

typedef struct ItemEditorState {
    /* 0x00 */ ItemEditorEntry* entries;
    /* 0x04 */ s16 verticalInputAccumulator, verticalInput;
    /* 0x08 */ u8 count, timerUp, timerDown, lockUp, lockDown;
    /* 0x0D */ s8 tab, topDisplayedEntry, topDisplayedTabEntry, currentEntry, currentTabEntry;
    /* 0x12 */ s8 savedEntry[ITEM_EDITOR_TAB_MAX];
    /* 0x1E */ u8 savedTopEntry[ITEM_EDITOR_TAB_MAX];
    /* 0x28 */ u8 visibleIndices[30];
} ItemEditorState; // size = 0x48

ItemEditorState state;

u8 firstTimeUse = false;

void ItemEditor_SetItem(u8 firstItem, u8 lastItem, u8 slot, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A) {
        if (gSaveContext.save.info.inventory.items[slot] == ITEM_NONE)
            gSaveContext.save.info.inventory.items[slot] = firstItem;
        else if (gSaveContext.save.info.inventory.items[slot] < lastItem)
            gSaveContext.save.info.inventory.items[slot]++;
        else gSaveContext.save.info.inventory.items[slot] = ITEM_NONE;
    } else if (play->state.input[0].press.button == BTN_B) {
        if (gSaveContext.save.info.inventory.items[slot] == ITEM_NONE)
            gSaveContext.save.info.inventory.items[slot] = lastItem;
        else if (gSaveContext.save.info.inventory.items[slot] > firstItem)
            gSaveContext.save.info.inventory.items[slot]--;
        else gSaveContext.save.info.inventory.items[slot] = ITEM_NONE;
    }
}

void ItemEditor_SetCQItem(u8 firstItem, u8 lastItem, u8 slot, PlayState* play) {
    if (IS_CHILD_QUEST_AS_CHILD)
        ItemEditor_SetItem(firstItem, lastItem, slot, play);
}

void ItemEditor_SetArrow(u8 item, u8 bit, u8 slot, PlayState* play) {
    if (!IS_CHILD_QUEST_AS_CHILD) {
        gSaveContext.save.info.inventory.items[slot] = (gSaveContext.save.info.inventory.items[slot] == ITEM_NONE ? SLOT(item) : ITEM_NONE);
        if (SLOT(item))
            gSaveContext.save.info.obtainedItems.items |= (0x80 >> bit);
        else gSaveContext.save.info.obtainedItems.items &= ~(0x80 >> bit);
    } else gSaveContext.save.info.obtainedItems.items ^= (0x80 >> bit);
}

void ItemEditor_SetBottle(u8 firstItem, u8 lastItem, u8 slot, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A) {
        if (gSaveContext.save.info.inventory.items[slot] == ITEM_NONE)
            gSaveContext.save.info.inventory.items[slot] = firstItem;
        else if (gSaveContext.save.info.inventory.items[slot] < lastItem)
            gSaveContext.save.info.inventory.items[slot]++;
        else if (gSaveContext.save.info.inventory.items[slot] == lastItem)
            gSaveContext.save.info.inventory.items[slot] = ITEM_BOTTLE_POTION_SHIELD;
        else gSaveContext.save.info.inventory.items[slot] = ITEM_NONE;
    } else if (play->state.input[0].press.button == BTN_B) {
        if (gSaveContext.save.info.inventory.items[slot] == ITEM_NONE)
            gSaveContext.save.info.inventory.items[slot] = ITEM_BOTTLE_POTION_SHIELD;
        else if (gSaveContext.save.info.inventory.items[slot] == ITEM_BOTTLE_POTION_SHIELD)
            gSaveContext.save.info.inventory.items[slot] = lastItem;
        else if (gSaveContext.save.info.inventory.items[slot] > firstItem)
            gSaveContext.save.info.inventory.items[slot]--;
        else gSaveContext.save.info.inventory.items[slot] = ITEM_NONE;
    }
}

void ItemEditor_SetAmmo(u8 item, u8 upgrade, u8 max, PlayState* play) {
    u8 ammoMax = (max == 0) ? CUR_CAPACITY(upgrade) : max;

    if (play->state.input[0].press.button == BTN_A && AMMO(item) < ammoMax)
        AMMO(item)++;
    else if (play->state.input[0].press.button == BTN_B && AMMO(item) > 0)
        AMMO(item)--;
    else if (play->state.input[0].press.button == BTN_CRIGHT)
        AMMO(item) = (AMMO(item) < ammoMax - 10) ? AMMO(item) + 10 : ammoMax;
    else if (play->state.input[0].press.button == BTN_CLEFT)
        AMMO(item) = (AMMO(item) > 10) ? AMMO(item) - 10 : 0;
    else if (play->state.input[0].press.button == BTN_CUP)
        AMMO(item) = ammoMax;
    else if (play->state.input[0].press.button == BTN_CDOWN)
        AMMO(item) = 0;
}

void ItemEditor_SetRupees(u8 param1, u8 param2, u8 param3, PlayState* play) {
    u16 max = (CUR_UPG_VALUE(UPG_WALLET2) > 0) ? CUR_CAPACITY(UPG_WALLET2) : CUR_CAPACITY(UPG_WALLET);

    if (play->state.input[0].press.button == BTN_A && gSaveContext.save.info.playerData.rupees < max)
        gSaveContext.save.info.playerData.rupees++;
    else if (play->state.input[0].press.button == BTN_B && gSaveContext.save.info.playerData.rupees > 0)
        gSaveContext.save.info.playerData.rupees--;
    else if (play->state.input[0].press.button == BTN_CRIGHT) 
        gSaveContext.save.info.playerData.rupees = (gSaveContext.save.info.playerData.rupees < max - 100) ? gSaveContext.save.info.playerData.rupees + 100 : max;    
    else if (play->state.input[0].press.button == BTN_CLEFT)
        gSaveContext.save.info.playerData.rupees = (gSaveContext.save.info.playerData.rupees > 100) ? gSaveContext.save.info.playerData.rupees - 100 : 0;    
    else if (play->state.input[0].press.button == BTN_CUP)
        gSaveContext.save.info.playerData.rupees = max;
    else if (play->state.input[0].press.button == BTN_CDOWN)
        gSaveContext.save.info.playerData.rupees = 0;
}

void ItemEditor_SetSkulltulas(u8 param1, u8 param2, u8 max, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A && gSaveContext.save.info.inventory.gsTokens < max)
        gSaveContext.save.info.inventory.gsTokens++;
    else if (play->state.input[0].press.button == BTN_B && gSaveContext.save.info.inventory.gsTokens > 0)
        gSaveContext.save.info.inventory.gsTokens--;
    else if (play->state.input[0].press.button == BTN_CRIGHT) 
        gSaveContext.save.info.inventory.gsTokens = (gSaveContext.save.info.inventory.gsTokens < max - 10) ? gSaveContext.save.info.inventory.gsTokens + 10 : max;    
    else if (play->state.input[0].press.button == BTN_CLEFT)
        gSaveContext.save.info.inventory.gsTokens = (gSaveContext.save.info.inventory.gsTokens > 10) ? gSaveContext.save.info.inventory.gsTokens - 10 : 0;    
    else if (play->state.input[0].press.button == BTN_CUP)
        gSaveContext.save.info.inventory.gsTokens = max;
    else if (play->state.input[0].press.button == BTN_CDOWN)
        gSaveContext.save.info.inventory.gsTokens = 0;
    
    if (gSaveContext.save.info.inventory.gsTokens > 0)
        gSaveContext.save.info.inventory.questItems |= gBitFlags[QUEST_SKULL_TOKEN];
    else gSaveContext.save.info.inventory.questItems &= ~gBitFlags[QUEST_SKULL_TOKEN];
}

void ItemEditor_SetEquipment(u8 item, u8 type, u8 upgrade, PlayState* play) {
    if (!upgrade)
        gSaveContext.save.info.inventory.equipment ^= OWNED_EQUIP_FLAG_ALT(type, item);

    if (type == EQUIP_TYPE_SWORD) {
        if (upgrade) {
            if (item == EQUIP_INV_SWORD_MASTER) {
                if (!CHECK_OWNED_EQUIP_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_MASTER)) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.obtainedItems.masterSword = 0;
                } else if (!gSaveContext.save.info.obtainedItems.masterSword) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.obtainedItems.masterSword = 1;
                } else {
                    gSaveContext.save.info.inventory.equipment &= ~OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.obtainedItems.masterSword = 0;
                }
            } else if (item == EQUIP_INV_SWORD_BIGGORON) {
                if (!CHECK_OWNED_EQUIP_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_BIGGORON)) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.playerData.bgsFlag = 0;
                } else if (!gSaveContext.save.info.playerData.bgsFlag) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.playerData.bgsFlag = 1;
                } else {
                    gSaveContext.save.info.inventory.equipment &= ~OWNED_EQUIP_FLAG_ALT(type, item);
                    gSaveContext.save.info.playerData.bgsFlag = 0;
                }
            }
        }

        if (CUR_EQUIP_VALUE(EQUIP_TYPE_SWORD) == (item + 1) && !CHECK_OWNED_EQUIP_ALT(type, item)) {
            Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, PLAYER_SWORD_NONE);
            gSaveContext.save.info.equips.buttonItems[0] = ITEM_NONE;
            gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 1;
            Player_SetEquipmentData(play, GET_PLAYER(play));
        }

        if (item == EQUIP_INV_SWORD_KOKIRI || item == EQUIP_INV_SWORD_HEROS) {
            if (CHECK_OWNED_EQUIP_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_HEROS))
                SET_HEROS_SWORD;
            else CLEAR_HEROS_SWORD;
            play->pauseCtx.wasInDebug = true;
        }

        if (item == EQUIP_INV_SWORD_BIGGORON)
            gSaveContext.save.info.playerData.swordHealth = CHECK_OWNED_EQUIP_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_BIGGORON) ? MAX_SWORD_HEALTH : 0;
    } else if (type == EQUIP_TYPE_SHIELD) {
        if (item == EQUIP_INV_SHIELD_HYLIAN || item == EQUIP_INV_SHIELD_HEROS) {
            if (CHECK_OWNED_EQUIP_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SHIELD_HEROS))
                SET_HEROS_SHIELD;
            else CLEAR_HEROS_SHIELD;
            play->pauseCtx.wasInDebug = true;
        }
    }
}

void ItemEditor_SetHealth(u8 type, u8 max, u8 param3, PlayState* play) {
    s16* health;
    s16 maxHealth;
    s16 rounded, next, prev;

    if (type == 2) {
        gSaveContext.save.info.playerData.isDoubleDefenseAcquired ^= 1;
        gSaveContext.save.info.inventory.defenseHearts = gSaveContext.save.info.playerData.isDoubleDefenseAcquired ? max : 0;
        return;
    }

    if (type == 0) {
        health = &gSaveContext.save.info.playerData.health;
        maxHealth = gSaveContext.save.info.playerData.healthCapacity;
    } else {
        health = &gSaveContext.save.info.playerData.healthCapacity;
        maxHealth = max * 0x10;
    }

    if (play->state.input[0].press.button == BTN_A) {
        rounded = (*health / 0x10) * 0x10;
        next = rounded + 0x10;
        *health = (next <= maxHealth) ? next : maxHealth;
    } else if (play->state.input[0].press.button == BTN_B) {
        rounded = ((*health + 0xF) / 0x10) * 0x10;
        prev = rounded - 0x10;
        *health = (*health > 0) ? ((prev < *health) ? prev : *health - 0x10) : 0;
    } else if (play->state.input[0].press.button == BTN_CUP) {
        *health = maxHealth;
    } else if (play->state.input[0].press.button == BTN_CDOWN) {
        *health = 0;
    } else if (play->state.input[0].press.button == BTN_CLEFT) {
        *health = (*health > 0xA0) ? *health - 0xA0 : 0;
    } else if (play->state.input[0].press.button == BTN_CRIGHT) {
        next = *health + 0xA0;
        *health = (next <= maxHealth) ? next : maxHealth;
    }

    if (type == 1 && gSaveContext.save.info.playerData.health > gSaveContext.save.info.playerData.healthCapacity)
        gSaveContext.save.info.playerData.health = gSaveContext.save.info.playerData.healthCapacity;
}

void ItemEditor_SetHeart(u8 param1, u8 param2, u8 param3, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A && (((gSaveContext.save.info.inventory.questItems & 0xF0000000) & 0xF0000000) >> QUEST_HEART_PIECE_COUNT) != 3)
        gSaveContext.save.info.inventory.questItems += 1 << QUEST_HEART_PIECE_COUNT;
    else if (play->state.input[0].press.button == BTN_B && (((gSaveContext.save.info.inventory.questItems & 0xF0000000) & 0xF0000000) >> QUEST_HEART_PIECE_COUNT) != 0)
        gSaveContext.save.info.inventory.questItems -= (1 << QUEST_HEART_PIECE_COUNT);
}

void ItemEditor_SetMagic(u8 param1, u8 param2, u8 param3, PlayState* play) {
    u8 level = gSaveContext.save.info.playerData.isMagicAcquired + gSaveContext.save.info.playerData.isDoubleMagicAcquired;

    if (play->state.input[0].press.button == BTN_A)
        level = (level + 1) % 3;
    else if (play->state.input[0].press.button == BTN_B)
        level = (level + 2) % 3;

    if (!CHECK_BTN_ANY(play->state.input[0].press.button, BTN_A | BTN_B))
        return;

    switch (level) {
        case 0: // No magic
            gSaveContext.save.info.playerData.isMagicAcquired = gSaveContext.save.info.playerData.isDoubleMagicAcquired = false;
            gSaveContext.save.info.playerData.magic = gSaveContext.save.info.playerData.magicLevel = 0;
            break;
        case 1: // Normal magic
            gSaveContext.save.info.playerData.isMagicAcquired = true;
            gSaveContext.save.info.playerData.isDoubleMagicAcquired = false;
            gSaveContext.magicFillTarget = MAGIC_NORMAL_METER;
            gSaveContext.save.info.playerData.magicLevel = 1;
            gSaveContext.save.info.playerData.magic = 0;
            gSaveContext.magicState = MAGIC_STATE_STEP_CAPACITY;
            break;
        case 2: // Double magic
            gSaveContext.save.info.playerData.isMagicAcquired = gSaveContext.save.info.playerData.isDoubleMagicAcquired = true;
            gSaveContext.magicFillTarget = MAGIC_DOUBLE_METER;
            gSaveContext.save.info.playerData.magicLevel = 2;
            gSaveContext.save.info.playerData.magic = 0;
            gSaveContext.magicState = MAGIC_STATE_STEP_CAPACITY;
            break;
    }
}

void ItemEditor_SetUpgrade(u8 upgrade, u8 max, u8 param3, PlayState* play) {
    if (upgrade ==  UPG_WALLET) {
        u8 level = CUR_UPG_VALUE(UPG_WALLET) + CUR_UPG_VALUE(UPG_WALLET2);

        if (play->state.input[0].press.button == BTN_A && level < max)
            level++;
        else if (play->state.input[0].press.button == BTN_B && level > 0)
            level--;

        Inventory_ChangeUpgrade(UPG_WALLET,  (level < 3) ?  level      : 3);
        Inventory_ChangeUpgrade(UPG_WALLET2, (level > 3) ? (level - 3) : 0);
    } else if (play->state.input[0].press.button == BTN_A && CUR_UPG_VALUE(upgrade) < max)
        Inventory_ChangeUpgrade(upgrade, CUR_UPG_VALUE(upgrade) + 1);
    else if (play->state.input[0].press.button == BTN_B && CUR_UPG_VALUE(upgrade) > 0)
        Inventory_ChangeUpgrade(upgrade, CUR_UPG_VALUE(upgrade) - 1);
}

void ItemEditor_SetObtainedSkill(u8 bit, u8 param2, u8 param3, PlayState* play) {
    gSaveContext.save.info.obtainedSkills.skills ^= (0x80 >> bit);
}

void ItemEditor_SetObtainedItem(u8 bit, u8 param2, u8 param3, PlayState* play) {
    gSaveContext.save.info.obtainedItems.items ^= (0x80 >> bit);
}

void ItemEditor_SetDurability(u8 shield, u8 max, u8 param3, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A && gSaveContext.save.info.shields[shield].upgrade < max) {
        gSaveContext.save.info.shields[shield].upgrade++;
        gSaveContext.save.info.shields[shield].durability = Player_GetMaxShieldDurability(shield+1);
    }
    else if (play->state.input[0].press.button == BTN_B && gSaveContext.save.info.shields[shield].upgrade > 0) {
        gSaveContext.save.info.shields[shield].upgrade--;
        gSaveContext.save.info.shields[shield].durability = Player_GetMaxShieldDurability(shield+1);
    }
}

void ItemEditor_SetQuest(u8 quest, u8 param2, u8 param3, PlayState* play) {
    gSaveContext.save.info.inventory.questItems ^= gBitFlags[quest];
}

void ItemEditor_SetKeys(u8 scene, u8 param2, u8 param3, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A && gSaveContext.save.info.inventory.dungeonKeys[scene] < 20)
        gSaveContext.save.info.inventory.dungeonKeys[scene]++;
    else if (play->state.input[0].press.button == BTN_B && gSaveContext.save.info.inventory.dungeonKeys[scene] >= 0)
        gSaveContext.save.info.inventory.dungeonKeys[scene]--;
}

void ItemEditor_SetDungeon(u8 scene, u8 param2, u8 param3, PlayState* play) {
    if (play->state.input[0].press.button == BTN_A) 
        gSaveContext.save.info.inventory.dungeonItems[scene] = 7;  
    else if (play->state.input[0].press.button == BTN_CUP) 
        gSaveContext.save.info.inventory.dungeonItems[scene] ^= gBitFlags[DUNGEON_BOSS_KEY];    
    else if (play->state.input[0].press.button == BTN_CLEFT)
        gSaveContext.save.info.inventory.dungeonItems[scene] ^= gBitFlags[DUNGEON_COMPASS];    
    else if (play->state.input[0].press.button == BTN_CRIGHT)
        gSaveContext.save.info.inventory.dungeonItems[scene] ^= gBitFlags[DUNGEON_MAP];
    else if (play->state.input[0].press.button == BTN_B || play->state.input[0].press.button == BTN_CDOWN)
        gSaveContext.save.info.inventory.dungeonItems[scene] = 0;
}

void ItemEditor_SetFlagsClear(u8 clear, u8 param2, u8 param3, PlayState* play) {
    switch (clear) {
        case 0:
            gSaveContext.save.info.sceneFlags[play->sceneId].chest       = play->actorCtx.flags.chest   = 0;
            break;
        case 1:
            gSaveContext.save.info.sceneFlags[play->sceneId].swch        = play->actorCtx.flags.swch    = play->actorCtx.flags.tempSwch    = 0;
            break;
        case 2:
            gSaveContext.save.info.sceneFlags[play->sceneId].clear       = play->actorCtx.flags.clear   = play->actorCtx.flags.tempClear   = 0;
            break;
        case 3:
            gSaveContext.save.info.sceneFlags[play->sceneId].collect     = play->actorCtx.flags.collect = play->actorCtx.flags.tempCollect = 0;
            break;
        case 4:
            gSaveContext.save.info.sceneFlags[play->sceneId].extra.quest = 0;
            gSaveContext.save.info.sceneFlags[play->sceneId].extra.exit  = 0;
            gSaveContext.save.info.sceneFlags[play->sceneId].extra.unk   = 0;
            break;
        case 5:
            gSaveContext.save.info.sceneFlags[play->sceneId].rooms       = 0;
            break;
        case 6:
            gSaveContext.save.info.sceneFlags[play->sceneId].floors      = 0;
            break;
    }
}

char* ItemEditor_GetItem(u8 item, u8 param2, u8 slot) {
    if (IS_CHILD_QUEST_AS_CHILD) {
        switch (item) {
            case ITEM_ARROW_FIRE:
                return gSaveContext.save.info.obtainedItems.fireArrow  ? "Set" : "None";
            case ITEM_ARROW_ICE:
                return gSaveContext.save.info.obtainedItems.iceArrow   ? "Set" : "None";
            case ITEM_ARROW_LIGHT:
                return gSaveContext.save.info.obtainedItems.lightArrow ? "Set" : "None";
        }

        switch (gSaveContext.save.info.inventory.items[slot]) {
            case ITEM_SWORD_FAIRYS:
                return "Set";
         
            case ITEM_ROCS_FEATHER:
                return "Roc's Feather";
            case ITEM_GOLDEN_FEATHER:
                return "Golden Feather";

            case ITEM_PICTOBOX:
                return "Pictobox";
            case ITEM_SHRINE_KEY:
                return "Shrine Key";
        }
    }

    switch (gSaveContext.save.info.inventory.items[slot]) {
        case ITEM_DEKU_STICK:
        case ITEM_DEKU_NUT:
        case ITEM_BOMB:
        case ITEM_BOW:
        case ITEM_ARROW_FIRE:
        case ITEM_DINS_FIRE:
        case ITEM_SLINGSHOT:
        case ITEM_BOMBCHU:
        case ITEM_ARROW_ICE:
        case ITEM_FARORES_WIND:
        case ITEM_BOOMERANG:
        case ITEM_LENS_OF_TRUTH:
        case ITEM_MAGIC_BEAN:
        case ITEM_HAMMER:
        case ITEM_ARROW_LIGHT:
        case ITEM_NAYRUS_LOVE:
            return "Set";

        case ITEM_OCARINA_FAIRY:
            return "Fairy Ocarina";
        case ITEM_OCARINA_OF_TIME:
            return "Ocarina of Time";

        case ITEM_HOOKSHOT:
            return "Hookshot";
        case ITEM_LONGSHOT:
            return "Longshot";

        case ITEM_BOTTLE_EMPTY:
            return "Empty Bottle";
        case ITEM_BOTTLE_POTION_RED:
            return "Red Potion";
        case ITEM_BOTTLE_POTION_GREEN:
            return "Green Potion";
        case ITEM_BOTTLE_POTION_BLUE:
            return "Blue Potion";
        case ITEM_BOTTLE_FAIRY:
            return "Bottled Fairy";
        case ITEM_BOTTLE_FISH:
            return "Fish";
        case ITEM_BOTTLE_MILK_FULL:
            return "Milk";
        case ITEM_BOTTLE_RUTOS_LETTER:
            return "Letter";
        case ITEM_BOTTLE_BLUE_FIRE:
            return "Blue Fire";
        case ITEM_BOTTLE_BUG:
            return "Bug";
        case ITEM_BOTTLE_BIG_POE:
            return "Big Poe";
        case ITEM_BOTTLE_MILK_HALF:
            return "Milk (Half)";
        case ITEM_BOTTLE_POE:
            return "Poe";
        case ITEM_BOTTLE_POTION_SHIELD:
            return "Shield Potion";

        case ITEM_WEIRD_EGG:
            return "Weird Egg";
        case ITEM_CHICKEN:
            return "Chicken";
        case ITEM_ZELDAS_LETTER:
            return "Zelda's Letter";
        case ITEM_MASK_KEATON:
            return "Keaton Mask";
        case ITEM_MASK_SKULL:
            return "Skull Mask";
        case ITEM_MASK_SPOOKY:
            return "Spooky Mask";
        case ITEM_MASK_BUNNY_HOOD:
            return "Bunny Hood";
        case ITEM_MASK_GORON:
            return "Goron Mask";
        case ITEM_MASK_ZORA:
            return "Zora Mask";
        case ITEM_MASK_GERUDO:
            return "Gerudo Mask";
        case ITEM_MASK_TRUTH:
            return "Mask of Truth";
        case ITEM_SOLD_OUT:
            return "SOLD OUT";

        case ITEM_POCKET_EGG:
            return "Pocket Egg";
        case ITEM_POCKET_CUCCO:
            return "Pocket Cucco";
        case ITEM_COJIRO:
            return "Cojiro";
        case ITEM_ODD_MUSHROOM:
            return "Odd Mushroom";
        case ITEM_ODD_POTION:
            return "Odd Potion";
        case ITEM_POACHERS_SAW:
            return "Poacher's Saw";
        case ITEM_BROKEN_GORONS_SWORD:
            return IS_CHILD_QUEST ? "Gold Dust" : "Goron's Sword";
        case ITEM_PRESCRIPTION:
            return "Prescription";
        case ITEM_EYEBALL_FROG:
            return "Eyeball Frog";
        case ITEM_EYE_DROPS:
            return "Eye Drops";
        case ITEM_CLAIM_CHECK:
            return "Claim Check";

        case ITEM_NONE:
            return "None";
        default:
            return "Unknown";
    }
}

char* ItemEditor_GetAmmo(u8 item, u8 type, u8 param3) {
    static char buf[5];
    u16 ammo;
    u8 i = 0;

    if (type == 0xFF)
        ammo = gSaveContext.save.info.playerData.rupees;
    else if (type == 0xFE)
        ammo = gSaveContext.save.info.inventory.gsTokens;
    else ammo = AMMO(item);

    if (ammo >= 1000)
        buf[i++] = '0' + (ammo / 1000);
    if (ammo >= 100)
        buf[i++] = '0' + (ammo / 100 % 10);
    if (ammo >= 10)
        buf[i++] = '0' + (ammo / 10 % 10);

    buf[i++] = '0' + (ammo % 10);
    buf[i] = '\0';

    return buf;
}

char* ItemEditor_GetEquipment(u8 item, u8 type, u8 upgrade) {
    if (upgrade && type == EQUIP_TYPE_SWORD) {
        if (item == EQUIP_INV_SWORD_MASTER && (gBitFlags[1] & gSaveContext.save.info.inventory.equipment))
            return IS_RAZOR_SWORD ? "Razor Sword" : "Master Sword";
        else if (item == EQUIP_INV_SWORD_BIGGORON && (gBitFlags[2] & gSaveContext.save.info.inventory.equipment)) {
            if (IS_CHILD_QUEST)
                return gSaveContext.save.info.playerData.bgsFlag ? "Gilded Sword" : "Silver Sword";
            return gSaveContext.save.info.playerData.bgsFlag ? "Biggoron Sword" : "Giant's Knife";
        }
    }

    return (CHECK_OWNED_EQUIP_ALT(type, item)) ? "Set" : "None";
}

char* ItemEditor_GetHealth(u8 type, u8 param2, u8 param3) {
    static char buf[3];
    u16 health;
    u8 i = 0;

    if (type == 0)
        health = gSaveContext.save.info.playerData.health / 0x10;
    else if (type == 1)
        health = gSaveContext.save.info.playerData.healthCapacity / 0x10;
    else if (type == 2)
        return gSaveContext.save.info.playerData.isDoubleDefenseAcquired ? "Set" : "None";
    else if (type == 3)
        health = gSaveContext.magicCapacity;

    if (health >= 10)
        buf[i++] = '0' + (health / 10 % 10);

    buf[i++] = '0' + (health % 10);
    buf[i] = '\0';

    return buf;
}

char* ItemEditor_GetHeart(u8 param1, u8 param2, u8 param3) {
    static char buf[2] = { '0', '\0' };
    buf[0] = '0' + (((gSaveContext.save.info.inventory.questItems & 0xF0000000) & 0xF0000000) >> QUEST_HEART_PIECE_COUNT);
    return buf;
}

char* ItemEditor_GetMagic(u8 type, u8 param2, u8 param3) {
    switch (gSaveContext.save.info.playerData.magicLevel) {
        case 0:
            return "None";
        case 1:
            return "Normal";
        case 2:
            return "Double";
        default:
            return "Unknown";
    }
}

char* ItemEditor_GetUpgrade(u8 upgrade, u8 param2, u8 param3) {
    static char buf[2] = { '0', '\0' };
    if (upgrade == UPG_WALLET)
        buf[0] = '0' + CUR_UPG_VALUE(UPG_WALLET) + + CUR_UPG_VALUE(UPG_WALLET2);
    else buf[0] = '0' + CUR_UPG_VALUE(upgrade);
    return buf;
}

char* ItemEditor_GetObtainedSkill(u8 bit, u8 param2, u8 param3) {
    return (gSaveContext.save.info.obtainedSkills.skills & (0x80 >> bit)) ? "Set" : "None";
}

char* ItemEditor_GetObtainedItem(u8 bit, u8 param2, u8 param3) {
    return (gSaveContext.save.info.obtainedItems.items & (0x80 >> bit)) ? "Set" : "None";
}

char* ItemEditor_GetDurability(u8 shield, u8 param2, u8 param3) {
    static char buf[2] = { '0', '\0' };
    buf[0] = '0' + gSaveContext.save.info.shields[shield].upgrade;
    return buf;
}

char* ItemEditor_GetQuest(u8 quest, u8 param2, u8 param3) {
    return (CHECK_QUEST_ITEM(quest)) ? "Set" : "None";
}

char* ItemEditor_GetKeys(u8 scene, u8 param2, u8 param3) {
    static char buf[3];
    s8 keys = gSaveContext.save.info.inventory.dungeonKeys[scene];
    u8 i = 0;

    if (keys == -1)
        return "None";
    if (keys >= 10)
        buf[i++] = '0' + (keys / 10 % 10);

    buf[i++] = '0' + (keys % 10);
    buf[i] = '\0';

    return buf;
}

char* ItemEditor_GetDungeon(u8 scene, u8 param2, u8 param3) {
    static char buf[13];
    u8 items = gSaveContext.save.info.inventory.dungeonItems[scene];
    u8 i = 0, j;
    const char* str;
    u8 mask = gBitFlags[DUNGEON_BOSS_KEY] | gBitFlags[DUNGEON_COMPASS] | gBitFlags[DUNGEON_MAP];

    if ((items & mask) == mask)
        return "All";

    if (items & gBitFlags[DUNGEON_BOSS_KEY]) {
        if (i != 0)
            buf[i++] = '/';
        str = "Boss";
        for (j=0; str[j] != '\0'; j++)
            buf[i++] = str[j];
    }

    if (items & gBitFlags[DUNGEON_COMPASS]) {
        if (i != 0)
            buf[i++] = '/';
        str = "Compass";
        for (j=0; str[j] != '\0'; j++)
            buf[i++] = str[j];
    }

    if (items & gBitFlags[DUNGEON_MAP]) {
        if (i != 0)
            buf[i++] = '/';
        str = "Map";
        for (j=0; str[j] != '\0'; j++)
            buf[i++] = str[j];
    }

    buf[i] = '\0';

    if (i == 0)
        return "None";
    return buf;
}

char* ItemEditor_GetFlagsClear(u8 param1, u8 param2, u8 param3) {
    return "Clear";
}

char* sItemEditorTabEntries[] = { "Item Editor", "Ammo Editor", "Equipment Editor", "Upgrade Editor", "Song Editor", "Quest Editor", "Dungeon Keys Editor", "Dungeon Quest Editor", "Reset Scene Flags" };

ItemEditorEntry sItemEditorItemEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, ITEM_DEKU_STICK,    ITEM_DEKU_STICK,      SLOT_DEKU_STICK,    "Deku Stick",    ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_DEKU_NUT,      ITEM_DEKU_NUT,        SLOT_DEKU_NUT,      "Deku Nut",      ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOMB,          ITEM_BOMB,            SLOT_BOMB,          "Bomb",          ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOMBCHU,       ITEM_BOMBCHU,         SLOT_BOMBCHU,       "Bombchu",       ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_SLINGSHOT,     ITEM_SLINGSHOT,       SLOT_SLINGSHOT,     "Slingshot",     ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOW,           ITEM_BOW,             SLOT_BOW,           "Bow",           ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_ARROW_FIRE,    0,                    SLOT_ARROW_FIRE,    "Fire Arrow",    ItemEditor_SetArrow,        ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_ARROW_ICE,     1,                    SLOT_ARROW_ICE,     "Ice Arrow",     ItemEditor_SetArrow,        ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_ARROW_LIGHT,   2,                    SLOT_ARROW_LIGHT,   "Light Arrow",   ItemEditor_SetArrow,        ItemEditor_GetItem         },
    { SHOW_OPTION_ONLY_CQ,    6,                  0,                    0,                  "Bomb Arrow",    ItemEditor_SetObtainedItem, ItemEditor_GetObtainedItem },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOOMERANG,     ITEM_BOOMERANG,       SLOT_BOOMERANG,     "Boomerang",     ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_HOOKSHOT,      ITEM_LONGSHOT,        SLOT_HOOKSHOT,      "Hookshot",      ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_HAMMER,        ITEM_HAMMER,          SLOT_HAMMER,        "Hammer",        ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_OCARINA_FAIRY, ITEM_OCARINA_OF_TIME, SLOT_OCARINA,       "Ocarina",       ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_LENS_OF_TRUTH, ITEM_LENS_OF_TRUTH,   SLOT_LENS_OF_TRUTH, "Lens of Truth", ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_MAGIC_BEAN,    ITEM_MAGIC_BEAN,      SLOT_MAGIC_BEAN,    "Magic Bean",    ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_DINS_FIRE,     ITEM_DINS_FIRE,       SLOT_DINS_FIRE,     "Din's Fire",    ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_FARORES_WIND,  ITEM_FARORES_WIND,    SLOT_FARORES_WIND,  "Farore's Wind", ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_NAYRUS_LOVE,   ITEM_NAYRUS_LOVE,     SLOT_NAYRUS_LOVE,   "Nayru's Love",  ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOTTLE_EMPTY,  ITEM_BOTTLE_POE,      SLOT_BOTTLE_1,      "Bottle #1",     ItemEditor_SetBottle,       ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOTTLE_EMPTY,  ITEM_BOTTLE_POE,      SLOT_BOTTLE_2,      "Bottle #2",     ItemEditor_SetBottle,       ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOTTLE_EMPTY,  ITEM_BOTTLE_POE,      SLOT_BOTTLE_3,      "Bottle #3",     ItemEditor_SetBottle,       ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOTTLE_EMPTY,  ITEM_BOTTLE_POE,      SLOT_BOTTLE_4,      "Bottle #4",     ItemEditor_SetBottle,       ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_POCKET_EGG,    ITEM_CLAIM_CHECK,     SLOT_TRADE_ADULT,   "Adult Trade",   ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ALL_QUESTS, ITEM_WEIRD_EGG,     ITEM_SOLD_OUT,        SLOT_TRADE_CHILD,   "Child Trade",   ItemEditor_SetItem,         ItemEditor_GetItem         },
    { SHOW_OPTION_ONLY_CQ,    ITEM_ROCS_FEATHER,  ITEM_GOLDEN_FEATHER,  SLOT_FEATHER,       "Feather",       ItemEditor_SetCQItem,       ItemEditor_GetItem         },
    { SHOW_OPTION_ONLY_CQ,    ITEM_SWORD_FAIRYS,  ITEM_SWORD_FAIRYS,    SLOT_SWORD_FAIRYS,  "Fairy's Sword", ItemEditor_SetCQItem,       ItemEditor_GetItem         },
    { SHOW_OPTION_ONLY_CQ,    ITEM_PICTOBOX,      ITEM_SHRINE_KEY,      SLOT_QUEST,         "CQ Trade",      ItemEditor_SetCQItem,       ItemEditor_GetItem         },
};

ItemEditorEntry sItemEditorAmmoEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, 0,               0xFF,            0,   "Rupees",     ItemEditor_SetRupees,     ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, 0,               0xFE,            100, "Skulltulas", ItemEditor_SetSkulltulas, ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_DEKU_STICK, UPG_DEKU_STICKS, 0,   "Deku Stick", ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_DEKU_NUT,   UPG_DEKU_NUTS,   0,   "Deku Nut",   ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOMB,       UPG_BOMB_BAG,    0,   "Bomb",       ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOMBCHU,    0,               50,  "Bombchu",    ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_SLINGSHOT,  UPG_BULLET_BAG,  0,   "Slingshot",  ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_BOW,        UPG_QUIVER,      0,   "Bow",        ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
    { SHOW_OPTION_ALL_QUESTS, ITEM_MAGIC_BEAN, 0,               15,  "Magic Bean", ItemEditor_SetAmmo,       ItemEditor_GetAmmo },
};

ItemEditorEntry sItemEditorEquipmentEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_SWORD_KOKIRI,   EQUIP_TYPE_SWORD,  0, "Kokiri Sword",  ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_NO_CQ,      EQUIP_INV_SWORD_MASTER,   EQUIP_TYPE_SWORD,  0, "Master Sword",  ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_NO_CQ,      EQUIP_INV_SWORD_BIGGORON, EQUIP_TYPE_SWORD,  1, "Giant's Knife", ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SWORD_HEROS,    EQUIP_TYPE_SWORD,  0, "Hero's Sword",  ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SWORD_MASTER,   EQUIP_TYPE_SWORD,  1, "Razor Sword",   ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SWORD_BIGGORON, EQUIP_TYPE_SWORD,  1, "Silver Sword",  ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_SHIELD_DEKU,    EQUIP_TYPE_SHIELD, 0, "Deku Shield",   ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_SHIELD_HYLIAN,  EQUIP_TYPE_SHIELD, 0, "Hylian Shield", ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_SHIELD_HEROS,   EQUIP_TYPE_SHIELD, 0, "Hero's Shield", ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_SHIELD_MIRROR,  EQUIP_TYPE_SHIELD, 0, "Mirror Shield", ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_TUNIC_GORON,    EQUIP_TYPE_TUNIC,  0, "Goron Tunic",   ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_TUNIC_ZORA,     EQUIP_TYPE_TUNIC,  0, "Zora Tunic",    ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_BOOTS_IRON,     EQUIP_TYPE_BOOTS,  0, "Iron Boots",    ItemEditor_SetEquipment, ItemEditor_GetEquipment },
    { SHOW_OPTION_ALL_QUESTS, EQUIP_INV_BOOTS_HOVER,    EQUIP_TYPE_BOOTS,  0, "Hover Boots",   ItemEditor_SetEquipment, ItemEditor_GetEquipment },
};

ItemEditorEntry sItemEditorUpgradesEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, 0,                        0, 0, "Health",                   ItemEditor_SetHealth,        ItemEditor_GetHealth        },
    { SHOW_OPTION_NO_CQ,      1,                       20, 0, "Max Health",               ItemEditor_SetHealth,        ItemEditor_GetHealth        },
    { SHOW_OPTION_NO_CQ,      2,                       20, 0, "Double Defense",           ItemEditor_SetHealth,        ItemEditor_GetHealth        },   
    { SHOW_OPTION_ONLY_CQ,    1,                       30, 0, "Max Health",               ItemEditor_SetHealth,        ItemEditor_GetHealth        },
    { SHOW_OPTION_ONLY_CQ,    2,                       30, 0, "Double Defense",           ItemEditor_SetHealth,        ItemEditor_GetHealth        },
    { SHOW_OPTION_ALL_QUESTS, 0,                        0, 0, "Piece of Heart",           ItemEditor_SetHeart,         ItemEditor_GetHeart         },
    { SHOW_OPTION_ALL_QUESTS, 0,                        0, 0, "Magic",                    ItemEditor_SetMagic,         ItemEditor_GetMagic         },
    { SHOW_OPTION_ONLY_CQ,    2,                        0, 0, "Half Magic Cost",          ItemEditor_SetObtainedSkill, ItemEditor_GetObtainedSkill },
    { SHOW_OPTION_ONLY_CQ,    0,                        0, 0, "Enhanced Spin",            ItemEditor_SetObtainedSkill, ItemEditor_GetObtainedSkill },
    { SHOW_OPTION_NO_CQ,      UPG_WALLET,               2, 0, "Wallet",                   ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ONLY_CQ,    UPG_WALLET,               6, 0, "Wallet",                   ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ALL_QUESTS, UPG_DEKU_STICKS,          3, 0, "Deku Stick",               ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ALL_QUESTS, UPG_DEKU_NUTS,            3, 0, "Deku Nuts",                ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_NO_CQ,      UPG_BULLET_BAG,           3, 0, "Bullet Bag",               ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_NO_CQ,      UPG_QUIVER,               3, 0, "Quiver",                   ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ONLY_CQ,    UPG_BULLET_BAG,           4, 0, "Bullet Bag",               ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ONLY_CQ,    UPG_QUIVER,               4, 0, "Quiver",                   ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ALL_QUESTS, UPG_BOMB_BAG,             3, 0, "Bomb Bag",                 ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ALL_QUESTS, UPG_STRENGTH,             3, 0, "Strength",                 ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ALL_QUESTS, UPG_SCALE,                2, 0, "Scale",                    ItemEditor_SetUpgrade,       ItemEditor_GetUpgrade       },
    { SHOW_OPTION_ONLY_CQ,    1,                        0, 0, "Perfect Block",            ItemEditor_SetObtainedSkill, ItemEditor_GetObtainedSkill },
    { SHOW_OPTION_ONLY_CQ,    3,                        0, 0, "Amulet of Energy",         ItemEditor_SetObtainedItem,  ItemEditor_GetObtainedItem  },
    { SHOW_OPTION_ONLY_CQ,    3,                        0, 0, "Further Jump",             ItemEditor_SetObtainedSkill, ItemEditor_GetObtainedSkill },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SHIELD_DEKU,    7, 0, "Deku Shield Durability",   ItemEditor_SetDurability,    ItemEditor_GetDurability    },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SHIELD_HYLIAN,  7, 0, "Hylian Shield Durability", ItemEditor_SetDurability,    ItemEditor_GetDurability    },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SHIELD_HEROS,   7, 0, "Hero's Shield Durability", ItemEditor_SetDurability,    ItemEditor_GetDurability    },
    { SHOW_OPTION_ONLY_CQ,    EQUIP_INV_SHIELD_MIRROR,  7, 0, "Mirror Shield Durability", ItemEditor_SetDurability,    ItemEditor_GetDurability    },
};

ItemEditorEntry sItemEditorSongEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_LULLABY,  0, 0, "Zelda's Lullaby",    ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_EPONA,    0, 0, "Epona's Song",       ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_SARIA,    0, 0, "Saria's Song",       ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_SUN,      0, 0, "Sun's Song",         ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_TIME,     0, 0, "Song of Time",       ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_STORMS,   0, 0, "Song of Storms",     ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_MINUET,   0, 0, "Minuet of Forest",   ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_BOLERO,   0, 0, "Bolero of Fire",     ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_SERENADE, 0, 0, "Serenade of Water",  ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_REQUIEM,  0, 0, "Requiem of Water",   ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_NOCTURNE, 0, 0, "Nocturne of Shadow", ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_SONG_PRELUDE,  0, 0, "Prelude of Light",   ItemEditor_SetQuest, ItemEditor_GetQuest },
};

ItemEditorEntry sItemEditorQuestEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, QUEST_KOKIRI_EMERALD,   0, 0, "Kokiri's Emerald", ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_GORON_RUBY,       0, 0, "Goron's Ruby",     ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_ZORA_SAPPHIRE,    0, 0, "Zora's Sapphire",  ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_LIGHT,  0, 0, "Light Medallion",  ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_FOREST, 0, 0, "Forest Medallion", ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_FIRE,   0, 0, "Fire Medallion",   ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_WATER,  0, 0, "Water Medallion",  ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_SHADOW, 0, 0, "Shadow Medallion", ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_MEDALLION_SPIRIT, 0, 0, "Spirit Medallion", ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_STONE_OF_AGONY,   0, 0, "Stone of Agony",   ItemEditor_SetQuest, ItemEditor_GetQuest },
    { SHOW_OPTION_ALL_QUESTS, QUEST_GERUDOS_CARD,     0, 0, "Gerudo's Card",    ItemEditor_SetQuest, ItemEditor_GetQuest },
};

ItemEditorEntry sItemEditorDungeonKeysEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, SCENE_DEKU_TREE,              0, 0, "Deku Tree",          ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_DODONGOS_CAVERN,        0, 0, "Dodongo's Cavern",   ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_JABU_JABU,              0, 0, "Jabu-Jabu",          ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ONLY_CQ,    SCENE_DEKU_TREE_BOSS,         0, 0, "Ancient Hollow",     ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_FOREST_TEMPLE,          0, 0, "Forest Temple",      ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_FIRE_TEMPLE,            0, 0, "Fire Temple",        ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_WATER_TEMPLE,           0, 0, "Water Temple",       ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_SHADOW_TEMPLE,          0, 0, "Shadow Temple",      ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_SPIRIT_TEMPLE,          0, 0, "Spirit Temple",      ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ONLY_CQ,    SCENE_DODONGOS_CAVERN_BOSS,   0, 0, "Woodfall Temple",    ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_ICE_CAVERN,             0, 0, "Ice Cavern",         ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_BOTTOM_OF_THE_WELL,     0, 0, "Bottom of the Well", ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_THIEVES_HIDEOUT,        0, 0, "Thieves' Hideout",   ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_GERUDO_TRAINING_GROUND, 0, 0, "Training Ground",    ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_INSIDE_GANONS_CASTLE,   0, 0, "Ganon's Castle",     ItemEditor_SetKeys, ItemEditor_GetKeys },
    { SHOW_OPTION_ALL_QUESTS, SCENE_TREASURE_BOX_SHOP,      0, 0, "Teasure Box Shop",   ItemEditor_SetKeys, ItemEditor_GetKeys },
};

ItemEditorEntry sItemEditorDungeonQuestEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, SCENE_DEKU_TREE,              0, 0, "Deku Tree",          ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_DODONGOS_CAVERN,        0, 0, "Dodongo's Cavern",   ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_JABU_JABU,              0, 0, "Jabu-Jabu",          ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ONLY_CQ,    SCENE_DEKU_TREE_BOSS,         0, 0, "Ancient Hollow",     ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_FOREST_TEMPLE,          0, 0, "Forest Temple",      ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_FIRE_TEMPLE,            0, 0, "Fire Temple",        ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_WATER_TEMPLE,           0, 0, "Water Temple",       ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_SHADOW_TEMPLE,          0, 0, "Shadow Temple",      ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_SPIRIT_TEMPLE,          0, 0, "Spirit Temple",      ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ONLY_CQ,    SCENE_DODONGOS_CAVERN_BOSS,   0, 0, "Woodfall Temple",    ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ONLY_CQ,    SCENE_JABU_JABU_BOSS,         0, 0, "Goron Mines",        ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_ICE_CAVERN,             0, 0, "Ice Cavern",         ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_BOTTOM_OF_THE_WELL,     0, 0, "Bottom of the Well", ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_GERUDO_TRAINING_GROUND, 0, 0, "Training Ground",    ItemEditor_SetDungeon, ItemEditor_GetDungeon },
    { SHOW_OPTION_ALL_QUESTS, SCENE_INSIDE_GANONS_CASTLE,   0, 0, "Ganon's Tower",      ItemEditor_SetDungeon, ItemEditor_GetDungeon },
};

ItemEditorEntry sItemEditorSceneFlagsEntries[] = {
    { SHOW_OPTION_ALL_QUESTS, 0, 0, 0, "Chests",        ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 1, 0, 0, "Switches",      ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 2, 0, 0, "Enemy Clears",  ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 3, 0, 0, "Item Collects", ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 4, 0, 0, "Extra",         ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 5, 0, 0, "Rooms",         ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
    { SHOW_OPTION_ALL_QUESTS, 6, 0, 0, "Floors",        ItemEditor_SetFlagsClear, ItemEditor_GetFlagsClear },
};

void ItemEditor_FilterEntries(ItemEditorEntry* entries, u8 totalCount) {
    u8 i, j = 0;

    state.entries = entries;
    for (i=0; i < totalCount; i++)
        if (entries[i].questMode == SHOW_OPTION_ALL_QUESTS || (entries[i].questMode == SHOW_OPTION_ONLY_CQ && IS_CHILD_QUEST) || (entries[i].questMode == SHOW_OPTION_NO_CQ && !IS_CHILD_QUEST))
            state.visibleIndices[j++] = i;
    state.count = j;
}

void KaleidoScope_UpdateItemEditorMenu(PlayState* play) {
    Input* input = &play->state.input[0];
    ItemEditorEntry* selectedEntry;
    PauseContext* pauseCtx = &play->pauseCtx;
    s8* currentEntry;
    s8* topDisplayedEntry;

    if (state.tab == ITEM_EDITOR_TAB_SELECT) {
        currentEntry = &state.currentTabEntry;
        topDisplayedEntry = &state.topDisplayedTabEntry;
    } else {
        currentEntry = &state.currentEntry;
        topDisplayedEntry = &state.topDisplayedEntry;
    }

    if (state.verticalInputAccumulator == 0 && pauseCtx->debugState == PAUSE_DEBUG_STATE_INVENTORY_EDITOR_OPEN) {
        if (state.tab == ITEM_EDITOR_TAB_SELECT) {
            if (CHECK_BTN_ALL(input->rel.button, BTN_L))
                pauseCtx->debugState = PAUSE_DEBUG_STATE_CLOSED;

            if (CHECK_BTN_ANY(input->press.button, BTN_A)) {
                state.tab = state.currentTabEntry;
                
                switch (state.tab) {
                    case ITEM_EDITOR_TAB_ITEMS:
                        ItemEditor_FilterEntries(sItemEditorItemEntries, ARRAY_COUNT(sItemEditorItemEntries));
                        break;
                    case ITEM_EDITOR_TAB_AMMO:
                        ItemEditor_FilterEntries(sItemEditorAmmoEntries, ARRAY_COUNT(sItemEditorAmmoEntries));
                        break;
                    case ITEM_EDITOR_TAB_EQUIPMENT:
                        ItemEditor_FilterEntries(sItemEditorEquipmentEntries, ARRAY_COUNT(sItemEditorEquipmentEntries));
                        break;
                    case ITEM_EDITOR_TAB_UPGRADES:
                        ItemEditor_FilterEntries(sItemEditorUpgradesEntries, ARRAY_COUNT(sItemEditorUpgradesEntries));
                        break;
                    case ITEM_EDITOR_TAB_SONGS:
                        ItemEditor_FilterEntries(sItemEditorSongEntries, ARRAY_COUNT(sItemEditorSongEntries));
                        break;
                    case ITEM_EDITOR_TAB_QUEST:
                        ItemEditor_FilterEntries(sItemEditorQuestEntries, ARRAY_COUNT(sItemEditorQuestEntries));
                        break;
                    case ITEM_EDITOR_TAB_DUNGEON_KEYS:
                        ItemEditor_FilterEntries(sItemEditorDungeonKeysEntries, ARRAY_COUNT(sItemEditorDungeonKeysEntries));
                        break;
                    case ITEM_EDITOR_TAB_DUNGEON_QUEST:
                        ItemEditor_FilterEntries(sItemEditorDungeonQuestEntries, ARRAY_COUNT(sItemEditorDungeonQuestEntries));
                        break;
                    case ITEM_EDITOR_TAB_RESET_SCENE_FLAGS:
                        ItemEditor_FilterEntries(sItemEditorSceneFlagsEntries, ARRAY_COUNT(sItemEditorSceneFlagsEntries));
                        break;
                }

                KaleidoScope_SwitchTabItemEditor();
                SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            }
        } else {
            if (CHECK_BTN_ALL(input->rel.button, BTN_L)) {
                state.savedEntry[state.tab]    = state.currentEntry;
                state.savedTopEntry[state.tab] = state.topDisplayedEntry;
                state.tab                      = ITEM_EDITOR_TAB_SELECT;
                state.count                    = ARRAY_COUNT(sItemEditorTabEntries);
            }

            if (CHECK_BTN_ANY(input->press.button, BTN_A | BTN_B | BTN_CRIGHT | BTN_CLEFT | BTN_CDOWN | BTN_CUP)) {
                selectedEntry = &state.entries[state.visibleIndices[state.currentEntry]];
                selectedEntry->setFunc(selectedEntry->param1, selectedEntry->param2, selectedEntry->param3, play);
                SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            }
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DUP) || input->rel.stick_y > 30) {
            if (state.lockUp == true)
                state.timerUp = 0;
            if (state.timerUp == 0) {
                state.timerUp = 20;
                state.lockUp = true;
                SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
                state.verticalInput = R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DUP) && state.timerUp == 0) {
            SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            state.verticalInput = R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DDOWN) || input->rel.stick_y < -30) {
            if (state.lockDown == true)
                state.timerDown = 0;
            if (state.timerDown == 0) {
                state.timerDown = 20;
                state.lockDown = true;
                SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
                state.verticalInput = -R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DDOWN) && (state.timerDown == 0)) {
            SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            state.verticalInput = -R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DLEFT) || CHECK_BTN_ALL(input->cur.button, BTN_DLEFT)) {
            SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            state.verticalInput = R_UPDATE_RATE;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DRIGHT) || CHECK_BTN_ALL(input->cur.button, BTN_DRIGHT)) {
            SFX_PLAY_CENTERED(NA_SE_IT_SWORD_IMPACT);
            state.verticalInput = -R_UPDATE_RATE;
        }
    }

    state.verticalInputAccumulator += state.verticalInput;

    if (state.verticalInputAccumulator < -7) {
        state.verticalInput = 0;
        state.verticalInputAccumulator = 0;

        (*currentEntry)++;
        *currentEntry = (*currentEntry + state.count) % state.count;

        if (state.count > 24 && (*currentEntry == ((*topDisplayedEntry + state.count + (state.count >= 23 ? 23 : state.count-1)) % state.count))) {
            (*topDisplayedEntry)++;
            *topDisplayedEntry = (*topDisplayedEntry + state.count) % state.count;
        }
    }

    if (state.verticalInputAccumulator > 7) {
        state.verticalInput = 0;
        state.verticalInputAccumulator = 0;

        if (state.count > 24 && *currentEntry == *topDisplayedEntry) {
            *topDisplayedEntry -= 2;
            *topDisplayedEntry = (*topDisplayedEntry + state.count) % state.count;
        }

        (*currentEntry)--;
        *currentEntry = (*currentEntry + state.count) % state.count;

        if (state.count > 24 && (*currentEntry == ((*topDisplayedEntry + state.count) % state.count))) {
            (*topDisplayedEntry)--;
            *topDisplayedEntry = (*topDisplayedEntry + state.count) % state.count;
        }
    }

    *currentEntry = (*currentEntry + state.count) % state.count;
    *topDisplayedEntry = (*topDisplayedEntry + state.count) % state.count;

    if (state.timerUp != 0)
        state.timerUp--;

    if (state.timerUp == 0)
        state.lockUp = false;

    if (state.timerDown != 0)
        state.timerDown--;

    if (state.timerDown == 0)
        state.lockDown = false;
}

void KaleidoScope_ResetItemEditor(void) {
    u8 i;

    state.tab = ITEM_EDITOR_TAB_SELECT;
    state.count = ARRAY_COUNT(sItemEditorTabEntries);

    state.topDisplayedTabEntry = 0;
    state.currentTabEntry = 0;

    state.verticalInputAccumulator = 0;
    state.verticalInput = 0;
    state.timerUp = 0;
    state.timerDown = 0;
    state.lockUp = 0;
    state.lockDown = 0;

    for (i=0; i<ITEM_EDITOR_TAB_MAX; i++) {
        state.savedEntry[i]    = 0;
        state.savedTopEntry[i] = 0;
    }

    KaleidoScope_SwitchTabItemEditor();
    firstTimeUse = true;
}

void KaleidoScope_SwitchTabItemEditor(void) {
    if (state.tab >= ITEM_EDITOR_TAB_ITEMS) {
        state.currentEntry      = state.savedEntry[state.tab];
        state.topDisplayedEntry = state.savedTopEntry[state.tab];
    } else {
        state.currentEntry      = 0;
        state.topDisplayedEntry = 0;
    }
}

void KaleidoScope_DrawItemEditor(PlayState* play) {
    PauseContext* pauseCtx = &play->pauseCtx;
    GraphicsContext* gfxCtx = play->state.gfxCtx;
    GfxPrint printer;
    u16 title, i;
    s8* currentEntry;
    s8* topDisplayedEntry;
    u8 shift = 20;

    if (pauseCtx->debugState == PAUSE_DEBUG_STATE_INVENTORY_EDITOR_OPENING && !firstTimeUse)
        KaleidoScope_ResetItemEditor();

    KaleidoScope_UpdateItemEditorMenu(play);

    if (pauseCtx->debugState == PAUSE_DEBUG_STATE_INVENTORY_EDITOR_OPENING)
        pauseCtx->debugState = PAUSE_DEBUG_STATE_INVENTORY_EDITOR_OPEN;

    OPEN_DISPS(gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_39Opa(gfxCtx);

    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 220);
    gDPFillRectangle(POLY_OPA_DISP++, X_HIRES_MULTIPLY(24 + WS_SHIFT_HALF), HIRES_MULTIPLY(12), X_HIRES_MULTIPLY(298 + WS_SHIFT_HALF), HIRES_MULTIPLY(228));
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineLERP(POLY_OPA_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, POLY_OPA_DISP);

    GfxPrint_SetColor(&printer, 255, 155, 150, 255);
    GfxPrint_SetPos(&printer, 12, 2);

    if (state.tab == ITEM_EDITOR_TAB_SELECT) {
        GfxPrint_Printf(&printer, "Debug Menu");
        currentEntry = &state.currentTabEntry;
        topDisplayedEntry = &state.topDisplayedTabEntry;
    }
    else {
        GfxPrint_Printf(&printer, "%s", sItemEditorTabEntries[state.tab]);
        currentEntry = &state.currentEntry;
        topDisplayedEntry = &state.topDisplayedEntry;
    }

    if (state.tab == ITEM_EDITOR_TAB_UPGRADES)
        shift = 30;
    else if (state.tab > ITEM_EDITOR_TAB_UPGRADES)
        shift = 25;

    for (i=0; i<(state.count < 24 ? state.count : 24); i++) {
        GfxPrint_SetPos(&printer, 4 - WS_PX_SHIFT, i + 4);

        title = (*topDisplayedEntry + i + state.count) % state.count;
        if (title == *currentEntry)
            GfxPrint_SetColor(&printer, 255, 20, 20, 255);
        else GfxPrint_SetColor(&printer, 200, 200, 55, 255);

        if (state.tab > ITEM_EDITOR_TAB_SELECT) {
            ItemEditorEntry* entry = &state.entries[state.visibleIndices[title]];
            GfxPrint_Printf(&printer, "%s", entry->name);
            GfxPrint_SetPos(&printer, shift - WS_PX_SHIFT, i + 4);
            GfxPrint_Printf(&printer, "%s", entry->getFunc(entry->param1, entry->param2, entry->param3));
        } else GfxPrint_Printf(&printer, "%s", sItemEditorTabEntries[title]);
    };

    POLY_OPA_DISP = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);

    CLOSE_DISPS(gfxCtx, __FILE__, __LINE__);
}
