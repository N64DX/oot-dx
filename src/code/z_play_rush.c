void Play_SetDungeonRushEntry(PlayState* this) {
    u8 currentAge = gSaveContext.save.linkAge;
    u8 newAge     = currentAge;
    
    if (R_BEATEN_RUSH_MODE || IS_CUTSCENE_LAYER || !IS_RUSH_QUEST)
        return;

    switch (gEntranceTable[((void)0, gSaveContext.save.entranceIndex)].sceneId) {
        case SCENE_DEKU_TREE:
        case SCENE_DODONGOS_CAVERN:
        case SCENE_JABU_JABU:
            if (IS_BOSS_RUSH) {
                gSaveContext.save.entranceIndex = ENTR_LINKS_HOUSE_0;
                newAge = LINK_AGE_CHILD;
                break;
            }
            FALLTHROUGH;
        case SCENE_LINKS_HOUSE:
        case SCENE_DEKU_TREE_BOSS:
        case SCENE_DODONGOS_CAVERN_BOSS:
        case SCENE_JABU_JABU_BOSS:
            newAge = LINK_AGE_CHILD;
            break;

        case SCENE_FOREST_TEMPLE:
        case SCENE_FIRE_TEMPLE:
        case SCENE_WATER_TEMPLE:
        case SCENE_SHADOW_TEMPLE:
        case SCENE_INSIDE_GANONS_CASTLE:
        case SCENE_GANONS_TOWER:
            if (IS_BOSS_RUSH) {
                gSaveContext.save.entranceIndex = ENTR_LINKS_HOUSE_0;
                newAge = LINK_AGE_CHILD;
                break;
            }
            FALLTHROUGH;
        case SCENE_TEMPLE_OF_TIME:
        case SCENE_FOREST_TEMPLE_BOSS:
        case SCENE_FIRE_TEMPLE_BOSS:
        case SCENE_WATER_TEMPLE_BOSS:
        case SCENE_SHADOW_TEMPLE_BOSS:
        case SCENE_SPIRIT_TEMPLE_BOSS:
        case SCENE_GANONDORF_BOSS:
        case SCENE_GANON_BOSS:
            newAge = LINK_AGE_ADULT;
            break;

        case SCENE_GANONS_TOWER_COLLAPSE_INTERIOR:
        case SCENE_INSIDE_GANONS_CASTLE_COLLAPSE:
        case SCENE_GANONS_TOWER_COLLAPSE_EXTERIOR:
            if (IS_BOSS_RUSH) {
                gSaveContext.save.entranceIndex = ENTR_LINKS_HOUSE_0;
                newAge = LINK_AGE_CHILD;
                break;
            }
            newAge = LINK_AGE_ADULT;
            break;

        case SCENE_SPIRIT_TEMPLE:
            if (IS_DUNGEON_RUSH) {
                if (gSaveContext.save.entranceIndex == ENTR_SPIRIT_TEMPLE_DR)
                    newAge = !gSaveContext.save.linkAge;
                break;
            }
            FALLTHROUGH;

        case SCENE_DESERT_COLOSSUS:
            if (IS_DUNGEON_RUSH)
                break;
            FALLTHROUGH;

        default:
            gSaveContext.save.entranceIndex = ENTR_LINKS_HOUSE_0;
            newAge = LINK_AGE_CHILD;
    }

    if (currentAge != newAge && R_QUEST_MODE != DUNGEON_CHILD_RUSH) {
        Inventory_SwapAgeEquipment();
        gSaveContext.save.linkAge = newAge;
        this->swapEquipment = true;
    } else this->swapEquipment = false;
}

void Play_SetDungeonRushProgress(PlayState* this) {
    u8 i;

    if (!this->progressRush)
        return;
    this->progressRush = false;
    
    if (IS_BOSS_RUSH) {
        switch (gSaveContext.save.entranceIndex) {
            case ENTR_GANONDORF_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_SPIRIT - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.items[SLOT_ARROW_LIGHT] = ITEM_ARROW_LIGHT;
                Inventory_ChangeUpgrade(UPG_STRENGTH, 3);
                break;

            case ENTR_SPIRIT_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_MIRROR);
                gSaveContext.save.info.shieldDurability[2] = MAX_DURABILITY_SHIELD_MIRROR;
                Inventory_ChangeUpgrade(UPG_STRENGTH, 2);
                break;

            case ENTR_SHADOW_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_BOOTS, EQUIP_INV_BOOTS_HOVER);
                break;

            case ENTR_WATER_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.items[SLOT_HOOKSHOT] = ITEM_LONGSHOT;
                for (i=0; i<4; i++) {
                    if (gSaveContext.save.info.equips.buttonItems[i] == ITEM_HOOKSHOT) {
                        gSaveContext.save.info.equips.buttonItems[i] = ITEM_LONGSHOT;
                        Interface_LoadItemIcon1(this, i);
                    }
                    if (DPAD_BUTTON(i) == SLOT_HOOKSHOT)
                        Interface_LoadItemIcon1(this, i+4);
                }
                break;

            case ENTR_FIRE_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.items[SLOT_HAMMER] = ITEM_HAMMER;
                SET_HAMMER;
                break;

            case ENTR_FOREST_TEMPLE_BOSS_0:
                SET_EVENTCHKINF(EVENTCHKINF_45);
                gSaveContext.save.info.inventory.items[SLOT_BOW] = ITEM_BOW;
                Inventory_ChangeUpgrade(UPG_QUIVER, 1);
                AMMO(ITEM_BOW) = CAPACITY(UPG_QUIVER, 1);
                break;

            case ENTR_JABU_JABU_BOSS_0:
                gSaveContext.save.info.inventory.items[SLOT_BOOMERANG] = ITEM_BOOMERANG;
                break;

            case ENTR_DODONGOS_CAVERN_BOSS_0:
                gSaveContext.save.info.inventory.items[SLOT_BOMB] = ITEM_BOMB;
                Inventory_ChangeUpgrade(UPG_BOMB_BAG, 1);
                AMMO(ITEM_BOMB) = CAPACITY(UPG_BOMB_BAG, 1);
                break;

            case ENTR_DEKU_TREE_BOSS_0:
                gSaveContext.save.info.inventory.items[SLOT_SLINGSHOT] = ITEM_SLINGSHOT;
                Inventory_ChangeUpgrade(UPG_BULLET_BAG, 1);
                AMMO(ITEM_SLINGSHOT) = CAPACITY(UPG_BULLET_BAG, 1);
                break;
        }
    }

    if (IS_RUSH_QUEST) {
        switch (gSaveContext.save.entranceIndex) {
            case ENTR_GANONS_TOWER_0:
            case ENTR_GANONDORF_BOSS_0:
                gSaveContext.save.info.playerData.isDoubleDefenseAcquired = true;
                gSaveContext.save.info.inventory.defenseHearts = 20;
                break;

            case ENTR_INSIDE_GANONS_CASTLE_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_SPIRIT - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.items[SLOT_ARROW_LIGHT] = ITEM_ARROW_LIGHT;
                if (IS_CHILD_QUEST) {
                    SET_FAIRYS_SWORD;
                    SET_AMULET_OF_ENERGY;
                    SET_GOLDEN_FEATHER;
                    SET_MASTER_SWORD;
                    gSaveContext.save.info.inventory.items[SLOT_MAGIC_BEAN] = ITEM_GOLDEN_FEATHER;
                    gSaveContext.save.info.isEnhancedSpinAcquired = true;
                    for (i=0; i<4; i++) {
                        if (gSaveContext.save.info.equips.buttonItems[i] == ITEM_ROCS_FEATHER) {
                            gSaveContext.save.info.equips.buttonItems[i] = ITEM_GOLDEN_FEATHER;
                            Interface_LoadItemIcon1(this, i);
                        }
                        if (DPAD_BUTTON(i) == SLOT_MAGIC_BEAN)
                            Interface_LoadItemIcon1(this, i+4);
                    }
                }
                break;

            case ENTR_SPIRIT_TEMPLE_0:
            case ENTR_SPIRIT_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_SHADOW - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.items[SLOT_ARROW_ICE] = ITEM_ARROW_ICE;
                gSaveContext.save.info.inventory.items[SLOT_NAYRUS_LOVE] = ITEM_NAYRUS_LOVE;
                break;

            case ENTR_SHADOW_TEMPLE_0:
            case ENTR_SHADOW_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_WATER - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.items[SLOT_LENS_OF_TRUTH] = ITEM_LENS_OF_TRUTH;
                break;

            case ENTR_WATER_TEMPLE_0:
            case ENTR_WATER_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_FIRE - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_BIGGORON);
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_BOOTS, EQUIP_INV_BOOTS_IRON);
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_TUNIC, EQUIP_INV_TUNIC_ZORA);
                gSaveContext.save.info.playerData.bgsFlag = true;
                gSaveContext.save.info.playerData.swordHealth = 8;
                if (gSaveContext.save.info.inventory.items[SLOT_BOTTLE_4] == ITEM_NONE)
                    gSaveContext.save.info.inventory.items[SLOT_BOTTLE_4] = ITEM_BOTTLE_FAIRY;
                break;

            case ENTR_FIRE_TEMPLE_0:
            case ENTR_FIRE_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_FOREST - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_STORMS - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_TUNIC, EQUIP_INV_TUNIC_GORON);
                gSaveContext.save.info.inventory.items[SLOT_ARROW_FIRE] = ITEM_ARROW_FIRE;
                gSaveContext.save.info.playerData.isMagicAcquired = gSaveContext.save.info.playerData.isDoubleMagicAcquired = true;
                gSaveContext.magicFillTarget = gSaveContext.save.info.playerData.magic = 0x60;
                gSaveContext.magicCapacity = gSaveContext.save.info.playerData.magicLevel = gSaveContext.save.info.playerData.magic = 0;
                if (gSaveContext.save.info.inventory.items[SLOT_BOTTLE_3] == ITEM_NONE)
                    gSaveContext.save.info.inventory.items[SLOT_BOTTLE_3] = ITEM_BOTTLE_FAIRY;
                if (IS_CHILD_QUEST) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_HEROS);
                    SET_HEROS_SWORD;
                }
                break;

            case ENTR_FOREST_TEMPLE_0:
            case ENTR_FOREST_TEMPLE_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_MEDALLION_LIGHT - ITEM_MEDALLION_FOREST + QUEST_MEDALLION_FOREST];
                gSaveContext.save.info.inventory.items[SLOT_HOOKSHOT] = ITEM_HOOKSHOT;
                if (gSaveContext.save.info.inventory.items[SLOT_BOTTLE_2] == ITEM_NONE)
                    gSaveContext.save.info.inventory.items[SLOT_BOTTLE_2] = ITEM_BOTTLE_FAIRY;
                if (IS_CHILD_QUEST) {
                    gSaveContext.save.info.inventory.items[SLOT_MAGIC_BEAN] = ITEM_ROCS_FEATHER;
                    SET_ROCS_FEATHER;
                }
                break;

            case ENTR_TEMPLE_OF_TIME_0:
                SET_EVENTCHKINF(EVENTCHKINF_45);
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_ZORA_SAPPHIRE - ITEM_KOKIRI_EMERALD + QUEST_KOKIRI_EMERALD];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_TIME - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_MASTER);
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_HYLIAN);
                gSaveContext.save.info.shieldDurability[1] = MAX_DURABILITY_SHIELD_HYLIAN;
                gSaveContext.save.info.inventory.items[SLOT_OCARINA] = ITEM_OCARINA_OF_TIME;
                for (i=0; i<4; i++)
                    if (gSaveContext.save.info.equips.buttonItems[i] == ITEM_OCARINA_FAIRY)
                        gSaveContext.save.info.equips.buttonItems[i] = ITEM_OCARINA_OF_TIME;
                if (IS_CHILD_QUEST) {
                    gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_HEROS);
                    Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_MASTER);
                    Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_HYLIAN);
                    gSaveContext.save.info.shieldDurability[3] = MAX_DURABILITY_SHIELD_HEROS;
                    gSaveContext.save.info.equips.buttonItems[0] = ITEM_SWORD_MASTER;
                    gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 0;
                    SET_HEROS_SHIELD;
                }
                break;

            case ENTR_JABU_JABU_0:
            case ENTR_JABU_JABU_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_GORON_RUBY - ITEM_KOKIRI_EMERALD + QUEST_KOKIRI_EMERALD];
                gSaveContext.save.info.inventory.items[SLOT_DINS_FIRE] = ITEM_DINS_FIRE;
                gSaveContext.save.info.inventory.items[SLOT_FARORES_WIND] = ITEM_FARORES_WIND;
                gSaveContext.save.info.playerData.isMagicAcquired = true;
                gSaveContext.magicFillTarget = gSaveContext.save.info.playerData.magic = 0x30;
                gSaveContext.magicCapacity = gSaveContext.save.info.playerData.magicLevel = gSaveContext.save.info.playerData.magic = 0;
                Inventory_ChangeUpgrade(UPG_SCALE, 1);
                break;

            case ENTR_DODONGOS_CAVERN_0:
            case ENTR_DODONGOS_CAVERN_BOSS_0:
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_KOKIRI_EMERALD - ITEM_KOKIRI_EMERALD + QUEST_KOKIRI_EMERALD];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_LULLABY - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_EPONA - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_SARIA - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.questItems |= gBitFlags[ITEM_SONG_SUN - ITEM_SONG_MINUET + QUEST_SONG_MINUET];
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_HYLIAN);
                Inventory_ChangeUpgrade(UPG_STRENGTH, 1);
                gSaveContext.save.info.shieldDurability[1] = MAX_DURABILITY_SHIELD_HYLIAN;
                gSaveContext.save.info.inventory.items[SLOT_OCARINA] = ITEM_OCARINA_FAIRY;
                if (gSaveContext.save.info.inventory.items[SLOT_BOTTLE_1] == ITEM_NONE)
                    gSaveContext.save.info.inventory.items[SLOT_BOTTLE_1] = ITEM_BOTTLE_FAIRY;
                break;

            case ENTR_DEKU_TREE_0:
            case ENTR_DEKU_TREE_BOSS_0:
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_DEKU);
                gSaveContext.save.info.inventory.equipment |= OWNED_EQUIP_FLAG_ALT(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_KOKIRI);
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_KOKIRI);
                Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_DEKU);
                gSaveContext.save.info.shieldDurability[0] = MAX_DURABILITY_SHIELD_DEKU;
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_SWORD_KOKIRI;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 0;
                break;
        }
    }

    if (this->swapEquipment) {
        this->swapEquipment = false;
        if (LINK_IS_CHILD) {
            if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_KOKIRI)) {
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_KOKIRI);
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_SWORD_KOKIRI;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 0;
            } else {
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_NONE);
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_NONE;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 1;
            }

            if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_DEKU))
                Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_DEKU);
            else if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_HYLIAN))
                Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_HYLIAN);
            else Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_NONE);

            Inventory_ChangeEquipment(EQUIP_TYPE_TUNIC,  EQUIP_VALUE_TUNIC_KOKIRI);
            Inventory_ChangeEquipment(EQUIP_TYPE_BOOTS,  EQUIP_VALUE_BOOTS_KOKIRI);
        } else {
            if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_MASTER)) {
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_MASTER);
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_SWORD_MASTER;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 0;
            } else if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SWORD, EQUIP_INV_SWORD_BIGGORON)) {
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_BIGGORON);
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_SWORD_BIGGORON;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 0;
            } else {
                Inventory_ChangeEquipment(EQUIP_TYPE_SWORD, EQUIP_VALUE_SWORD_NONE);
                gSaveContext.save.info.equips.buttonItems[0] = ITEM_NONE;
                gSaveContext.save.info.infTable[INFTABLE_INDEX_1DX] = 1;
            }

            if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_HYLIAN))
                Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_HYLIAN);
            else if (CHECK_OWNED_EQUIP(EQUIP_TYPE_SHIELD, EQUIP_INV_SHIELD_MIRROR))
                Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_MIRROR);
            else Inventory_ChangeEquipment(EQUIP_TYPE_SHIELD, EQUIP_VALUE_SHIELD_NONE);
        }
    }
}
