#include "global.h"
#include "vt.h"

RomFile sNaviMsgFiles[];

// called by
// - initcontext: for gkeep
// - spawn list scene command: for link's object
// - special files scene command: for subkeep object if any
s32 Object_SpawnPersistent(ObjectContext* objectCtx, s16 objectId) {
    u32 size;

    objectCtx->entries[objectCtx->numEntries].id = objectId;
    size = gObjectTable[objectId].vromEnd - gObjectTable[objectId].vromStart;

    osSyncPrintf("OBJECT[%d] SIZE %fK SEG=%x\n", objectId, size / 1024.0f,
                 objectCtx->entries[objectCtx->numEntries].segment);

    osSyncPrintf("num=%d adrs=%x end=%x\n", objectCtx->numEntries,
                 (s32)objectCtx->entries[objectCtx->numEntries].segment + size, objectCtx->spaceEnd);

    ASSERT(((objectCtx->numEntries < ARRAY_COUNT(objectCtx->entries)) &&
            (((s32)objectCtx->entries[objectCtx->numEntries].segment + size) < (u32)objectCtx->spaceEnd)),
           "this->num < OBJECT_EXCHANGE_BANK_MAX && (this->status[this->num].Segment + size) < this->endSegment",
           "../z_scene.c", 142);

    DmaMgr_SendRequest1(objectCtx->entries[objectCtx->numEntries].segment, gObjectTable[objectId].vromStart,
                        size, "../z_scene.c", 145);

    if (objectCtx->numEntries < (ARRAY_COUNT(objectCtx->entries) - 1)) {
        objectCtx->entries[objectCtx->numEntries + 1].segment =
            (void*)ALIGN16((s32)objectCtx->entries[objectCtx->numEntries].segment + size);
    }

    objectCtx->numEntries++;
    objectCtx->numPersistentEntries = objectCtx->numEntries;

    return objectCtx->numEntries - 1;
}

// 1000 kilobytes
#define OBJECT_SPACE_SIZE_BASE (1000 * 1024)

void Object_InitContext(PlayState* play, ObjectContext* objectCtx) {
    PlayState* play2 = play;
    u32 spaceSize;
    s32 i;

    if (play2->sceneNum == SCENE_SPOT00) {
        spaceSize = OBJECT_SPACE_SIZE_BASE;
    } else if (play2->sceneNum == SCENE_GANON_DEMO) {
        if (gSaveContext.sceneSetupIndex != 4) {
            spaceSize = OBJECT_SPACE_SIZE_BASE + (150 * 1024);
        } else {
            spaceSize = OBJECT_SPACE_SIZE_BASE;
        }
    } else if (play2->sceneNum == SCENE_JYASINBOSS) {
        spaceSize = OBJECT_SPACE_SIZE_BASE + (50 * 1024);
    } else if (play2->sceneNum == SCENE_KENJYANOMA) {
        spaceSize = OBJECT_SPACE_SIZE_BASE + (50 * 1024);
    } else if (play2->sceneNum == SCENE_GANON_BOSS) {
        spaceSize = OBJECT_SPACE_SIZE_BASE + (50 * 1024);
    } else {
        spaceSize = OBJECT_SPACE_SIZE_BASE;
    }

    objectCtx->numEntries = objectCtx->numPersistentEntries = 0;
    objectCtx->mainKeepEntry = objectCtx->subKeepEntry = 0;

    for (i = 0; i < ARRAY_COUNT(objectCtx->entries); i++) {
        objectCtx->entries[i].id = OBJECT_INVALID;
    }

    osSyncPrintf(VT_FGCOL(GREEN));
    // "Object exchange bank data %8.3fKB"
    osSyncPrintf("オブジェクト入れ替えバンク情報 %8.3fKB\n", spaceSize / 1024.0f);
    osSyncPrintf(VT_RST);

    objectCtx->spaceStart = objectCtx->entries[0].segment =
        GameState_Alloc(&play->state, spaceSize, "../z_scene.c", 219);
    objectCtx->spaceEnd = (void*)((s32)objectCtx->spaceStart + spaceSize);

    objectCtx->mainKeepEntry = Object_SpawnPersistent(objectCtx, OBJECT_GAMEPLAY_KEEP);
    gSegments[4] = VIRTUAL_TO_PHYSICAL(objectCtx->entries[objectCtx->mainKeepEntry].segment);
}

void Object_UpdateLoadEntries(ObjectContext* objectCtx) {
    s32 i;
    ObjectEntry* entry = &objectCtx->entries[0];
    RomFile* objectFile;
    u32 size;

    for (i = 0; i < objectCtx->numEntries; i++) {
        if (entry->id < 0) {
            if (entry->dmaRequest.vromAddr == 0) {
                osCreateMesgQueue(&entry->loadQueue, &entry->loadMsg, 1);
                objectFile = &gObjectTable[-entry->id];
                size = objectFile->vromEnd - objectFile->vromStart;

                osSyncPrintf("OBJECT EXCHANGE BANK-%2d SIZE %8.3fK SEG=%08x\n", i, size / 1024.0f, entry->segment);

                DmaMgr_SendRequest2(&entry->dmaRequest, entry->segment, objectFile->vromStart, size, 0,
                                    &entry->loadQueue, NULL, "../z_scene.c", 266);
            } else if (osRecvMesg(&entry->loadQueue, NULL, OS_MESG_NOBLOCK) == 0) {
                entry->id = -entry->id;
            }
        }
        entry++;
    }
}

s32 Object_GetEntry(ObjectContext* objectCtx, s16 objectId) {
    s32 i;

    for (i = 0; i < objectCtx->numEntries; i++) {
        if (ABS(objectCtx->entries[i].id) == objectId) {
            return i;
        }
    }

    return -1;
}

s32 Object_IsEntryLoaded(ObjectContext* objectCtx, s32 entry) {
    if (objectCtx->entries[entry].id > 0) {
        return true;
    } else {
        return false;
    }
}

void func_800981B8(ObjectContext* objectCtx) {
    s32 i;
    s32 id;
    u32 size;

    for (i = 0; i < objectCtx->numEntries; i++) {
        id = objectCtx->entries[i].id;
        size = gObjectTable[id].vromEnd - gObjectTable[id].vromStart;
        osSyncPrintf("OBJECT[%d] SIZE %fK SEG=%x\n", objectCtx->entries[i].id, size / 1024.0f,
                     objectCtx->entries[i].segment);
        osSyncPrintf("num=%d adrs=%x end=%x\n", objectCtx->numEntries,
                     (s32)objectCtx->entries[i].segment + size, objectCtx->spaceEnd);
        DmaMgr_SendRequest1(objectCtx->entries[i].segment, gObjectTable[id].vromStart, size, "../z_scene.c", 342);
    }
}

void* func_800982FC(ObjectContext* objectCtx, s32 entryIndex, s16 objectId) {
    ObjectEntry* entry = &objectCtx->entries[entryIndex];
    RomFile* objectFile = &gObjectTable[objectId];
    u32 size;
    void* nextPtr;

    entry->id = -objectId;
    entry->dmaRequest.vromAddr = 0;

    size = objectFile->vromEnd - objectFile->vromStart;
    osSyncPrintf("OBJECT EXCHANGE NO=%2d BANK=%3d SIZE=%8.3fK\n", entryIndex, objectId, size / 1024.0f);

    nextPtr = (void*)ALIGN16((s32)entry->segment + size);

    ASSERT(nextPtr < objectCtx->spaceEnd, "nextptr < this->endSegment", "../z_scene.c", 381);

    // "Object exchange free size=%08x"
    osSyncPrintf("オブジェクト入れ替え空きサイズ=%08x\n", (s32)objectCtx->spaceEnd - (s32)nextPtr);

    return nextPtr;
}

s32 Scene_ExecuteCommands(PlayState* play, SceneCmd* sceneCmd) {
    u32 cmdCode;

    while (true) {
        cmdCode = sceneCmd->base.code;
        osSyncPrintf("*** Scene_Word = { code=%d, data1=%02x, data2=%04x } ***\n", cmdCode, sceneCmd->base.data1,
                     sceneCmd->base.data2);

        if (cmdCode == SCENE_CMD_ID_END) {
            break;
        }

        if (cmdCode < ARRAY_COUNT(gSceneCmdHandlers)) {
            gSceneCmdHandlers[cmdCode](play, sceneCmd);
        } else {
            osSyncPrintf(VT_FGCOL(RED));
            osSyncPrintf("code の値が異常です\n"); // "code variable is abnormal"
            osSyncPrintf(VT_RST);
        }
        sceneCmd++;
    }
    return 0;
}

void Scene_CommandSpawnList(PlayState* play, SceneCmd* cmd) {
    ActorEntry* linkEntry = play->linkActorEntry =
        (ActorEntry*)SEGMENTED_TO_VIRTUAL(cmd->spawnList.segment) + play->setupEntranceList[play->curSpawn].spawn;
    s16 linkObjectId;

    play->linkAgeOnLoad = ((void)0, gSaveContext.linkAge);

    linkObjectId = gLinkObjectIds[((void)0, gSaveContext.linkAge)];

    gActorOverlayTable[linkEntry->id].initInfo->objectId = linkObjectId;
    Object_SpawnPersistent(&play->objectCtx, linkObjectId);
}

void Scene_CommandActorList(PlayState* play, SceneCmd* cmd) {
    play->numSetupActors = cmd->actorList.num;
    play->setupActorList = SEGMENTED_TO_VIRTUAL(cmd->actorList.segment);
}

void Scene_CommandUnused2(PlayState* play, SceneCmd* cmd) {
    play->unk_11DFC = SEGMENTED_TO_VIRTUAL(cmd->unused02.segment);
}

void Scene_CommandCollisionHeader(PlayState* play, SceneCmd* cmd) {
    CollisionHeader* colHeader = SEGMENTED_TO_VIRTUAL(cmd->colHeader.segment);

    colHeader->vtxList = SEGMENTED_TO_VIRTUAL(colHeader->vtxList);
    colHeader->polyList = SEGMENTED_TO_VIRTUAL(colHeader->polyList);
    colHeader->surfaceTypeList = SEGMENTED_TO_VIRTUAL(colHeader->surfaceTypeList);
    colHeader->cameraDataList = SEGMENTED_TO_VIRTUAL(colHeader->cameraDataList);
    colHeader->waterBoxes = SEGMENTED_TO_VIRTUAL(colHeader->waterBoxes);

    BgCheck_Allocate(&play->colCtx, play, colHeader);
}

void Scene_CommandRoomList(PlayState* play, SceneCmd* cmd) {
    play->numRooms = cmd->roomList.num;
    play->roomList = SEGMENTED_TO_VIRTUAL(cmd->roomList.segment);
}

void Scene_CommandEntranceList(PlayState* play, SceneCmd* cmd) {
    play->setupEntranceList = SEGMENTED_TO_VIRTUAL(cmd->entranceList.segment);
}

void Scene_CommandSpecialFiles(PlayState* play, SceneCmd* cmd) {
    if (cmd->specialFiles.keepObjectId != OBJECT_INVALID) {
        play->objectCtx.subKeepEntry = Object_SpawnPersistent(&play->objectCtx, cmd->specialFiles.keepObjectId);
        gSegments[5] = VIRTUAL_TO_PHYSICAL(play->objectCtx.entries[play->objectCtx.subKeepEntry].segment);
    }

    if (cmd->specialFiles.cUpElfMsgNum != 0) {
        play->cUpElfMsgs = Play_LoadFile(play, &sNaviMsgFiles[cmd->specialFiles.cUpElfMsgNum - 1]);
    }
}

void Scene_CommandRoomBehavior(PlayState* play, SceneCmd* cmd) {
    play->roomCtx.curRoom.behaviorType1 = cmd->roomBehavior.gpFlag1;
    play->roomCtx.curRoom.behaviorType2 = cmd->roomBehavior.gpFlag2 & 0xFF;
    play->roomCtx.curRoom.lensMode = (cmd->roomBehavior.gpFlag2 >> 8) & 1;
    play->msgCtx.disableWarpSongs = (cmd->roomBehavior.gpFlag2 >> 0xA) & 1;
}

void Scene_CommandMeshHeader(PlayState* play, SceneCmd* cmd) {
    play->roomCtx.curRoom.meshHeader = SEGMENTED_TO_VIRTUAL(cmd->mesh.segment);
}

void Scene_CommandObjectList(PlayState* play, SceneCmd* cmd) {
    s32 i;
    s32 j;
    s32 k;
    ObjectEntry* entry;
    ObjectEntry* invalidatedEntry;
    ObjectEntry* entries;
    s16* objectListEntry = SEGMENTED_TO_VIRTUAL(cmd->objectList.segment);
    void* nextPtr;

    k = 0;
    i = play->objectCtx.numPersistentEntries;
    entries = play->objectCtx.entries;
    entry = &play->objectCtx.entries[i];

    while (i < play->objectCtx.numEntries) {
        if (entry->id != *objectListEntry) {

            invalidatedEntry = &play->objectCtx.entries[i];
            for (j = i; j < play->objectCtx.numEntries; j++) {
                invalidatedEntry->id = OBJECT_INVALID;
                invalidatedEntry++;
            }

            play->objectCtx.numEntries = i;
            Actor_KillActorsWithUnloadedObject(play, &play->actorCtx);

            continue;
        }

        i++;
        k++;
        objectListEntry++;
        entry++;
    }

    ASSERT(cmd->objectList.num <= ARRAY_COUNT(play->objectCtx.entries),
           "scene_info->object_bank.num <= OBJECT_EXCHANGE_BANK_MAX", "../z_scene.c", 705);

    while (k < cmd->objectList.num) {
        nextPtr = func_800982FC(&play->objectCtx, i, *objectListEntry);
        if (i < (ARRAY_COUNT(play->objectCtx.entries) - 1)) {
            entries[i + 1].segment = nextPtr;
        }
        i++;
        k++;
        objectListEntry++;
    }

    play->objectCtx.numEntries = i;
}

void Scene_CommandLightList(PlayState* play, SceneCmd* cmd) {
    s32 i;
    LightInfo* lightInfo = SEGMENTED_TO_VIRTUAL(cmd->lightList.segment);

    for (i = 0; i < cmd->lightList.num; i++) {
        LightContext_InsertLight(play, &play->lightCtx, lightInfo);
        lightInfo++;
    }
}

void Scene_CommandPathList(PlayState* play, SceneCmd* cmd) {
    play->setupPathList = SEGMENTED_TO_VIRTUAL(cmd->pathList.segment);
}

void Scene_CommandTransitionActorList(PlayState* play, SceneCmd* cmd) {
    play->transiActorCtx.numActors = cmd->transiActorList.num;
    play->transiActorCtx.list = SEGMENTED_TO_VIRTUAL(cmd->transiActorList.segment);
}

void TransitionActor_InitContext(GameState* state, TransitionActorContext* transiActorCtx) {
    transiActorCtx->numActors = 0;
}

void Scene_CommandLightSettingsList(PlayState* play, SceneCmd* cmd) {
    play->envCtx.numLightSettings = cmd->lightSettingList.num;
    play->envCtx.lightSettingsList = SEGMENTED_TO_VIRTUAL(cmd->lightSettingList.segment);
}

void Scene_CommandSkyboxSettings(PlayState* play, SceneCmd* cmd) {
    play->skyboxId = cmd->skyboxSettings.skyboxId;
    play->envCtx.skyboxConfig = play->envCtx.changeSkyboxNextConfig = cmd->skyboxSettings.unk_05;
    play->envCtx.lightMode = cmd->skyboxSettings.unk_06;
}

void Scene_CommandSkyboxDisables(PlayState* play, SceneCmd* cmd) {
    play->envCtx.skyboxDisabled = cmd->skyboxDisables.unk_04;
    play->envCtx.sunMoonDisabled = cmd->skyboxDisables.unk_05;
}

void Scene_CommandTimeSettings(PlayState* play, SceneCmd* cmd) {
    if ((cmd->timeSettings.hour != 0xFF) && (cmd->timeSettings.min != 0xFF)) {
        gSaveContext.skyboxTime = gSaveContext.dayTime =
            ((cmd->timeSettings.hour + (cmd->timeSettings.min / 60.0f)) * 60.0f) / ((f32)(24 * 60) / 0x10000);
    }

    if (cmd->timeSettings.unk_06 != 0xFF) {
        play->envCtx.sceneTimeSpeed = cmd->timeSettings.unk_06;
    } else {
        play->envCtx.sceneTimeSpeed = 0;
    }

    if (gSaveContext.sunsSongState == SUNSSONG_INACTIVE) {
        gTimeSpeed = play->envCtx.sceneTimeSpeed;
    }

    play->envCtx.sunPos.x = -(Math_SinS(((void)0, gSaveContext.dayTime) - CLOCK_TIME(12, 0)) * 120.0f) * 25.0f;
    play->envCtx.sunPos.y = (Math_CosS(((void)0, gSaveContext.dayTime) - CLOCK_TIME(12, 0)) * 120.0f) * 25.0f;
    play->envCtx.sunPos.z = (Math_CosS(((void)0, gSaveContext.dayTime) - CLOCK_TIME(12, 0)) * 20.0f) * 25.0f;

    if (((play->envCtx.sceneTimeSpeed == 0) && (gSaveContext.cutsceneIndex < 0xFFF0)) ||
        (gSaveContext.entranceIndex == ENTR_SPOT06_8)) {
        gSaveContext.skyboxTime = ((void)0, gSaveContext.dayTime);

        if ((gSaveContext.skyboxTime > CLOCK_TIME(4, 0)) && (gSaveContext.skyboxTime < CLOCK_TIME(6, 30))) {
            gSaveContext.skyboxTime = CLOCK_TIME(5, 0) + 1;
        } else if ((gSaveContext.skyboxTime >= CLOCK_TIME(6, 30)) && (gSaveContext.skyboxTime <= CLOCK_TIME(8, 0))) {
            gSaveContext.skyboxTime = CLOCK_TIME(8, 0) + 1;
        } else if ((gSaveContext.skyboxTime >= CLOCK_TIME(16, 0)) && (gSaveContext.skyboxTime <= CLOCK_TIME(17, 0))) {
            gSaveContext.skyboxTime = CLOCK_TIME(17, 0) + 1;
        } else if ((gSaveContext.skyboxTime >= CLOCK_TIME(18, 0) + 1) &&
                   (gSaveContext.skyboxTime <= CLOCK_TIME(19, 0))) {
            gSaveContext.skyboxTime = CLOCK_TIME(19, 0) + 1;
        }
    }
}

void Scene_CommandWindSettings(PlayState* play, SceneCmd* cmd) {
    s8 x = cmd->windSettings.x;
    s8 y = cmd->windSettings.y;
    s8 z = cmd->windSettings.z;

    play->envCtx.windDirection.x = x;
    play->envCtx.windDirection.y = y;
    play->envCtx.windDirection.z = z;

    play->envCtx.windSpeed = cmd->windSettings.unk_07;
}

void Scene_CommandExitList(PlayState* play, SceneCmd* cmd) {
    play->setupExitList = SEGMENTED_TO_VIRTUAL(cmd->exitList.segment);
}

void Scene_CommandUndefined9(PlayState* play, SceneCmd* cmd) {
}

void Scene_CommandSoundSettings(PlayState* play, SceneCmd* cmd) {
    play->sequenceCtx.seqId = cmd->soundSettings.seqId;
    play->sequenceCtx.natureAmbienceId = cmd->soundSettings.natureAmbienceId;

    if (gSaveContext.seqId == (u8)NA_BGM_DISABLED) {
        Audio_QueueSeqCmd(cmd->soundSettings.specId | 0xF0000000);
    }
}

void Scene_CommandEchoSettings(PlayState* play, SceneCmd* cmd) {
    play->roomCtx.curRoom.echo = cmd->echoSettings.echo;
}

void Scene_CommandAlternateHeaderList(PlayState* play, SceneCmd* cmd) {
    s32 pad;
    SceneCmd* altHeader;

    osSyncPrintf("\n[ZU]sceneset age    =[%X]", ((void)0, gSaveContext.linkAge));
    osSyncPrintf("\n[ZU]sceneset time   =[%X]", ((void)0, gSaveContext.cutsceneIndex));
    osSyncPrintf("\n[ZU]sceneset counter=[%X]", ((void)0, gSaveContext.sceneSetupIndex));

    if (gSaveContext.sceneSetupIndex != 0) {
        altHeader = ((SceneCmd**)SEGMENTED_TO_VIRTUAL(cmd->altHeaders.segment))[gSaveContext.sceneSetupIndex - 1];

        if (1) {}

        if (altHeader != NULL) {
            Scene_ExecuteCommands(play, SEGMENTED_TO_VIRTUAL(altHeader));
            (cmd + 1)->base.code = SCENE_CMD_ID_END;
        } else {
            // "Coughh! There is no specified dataaaaa!"
            osSyncPrintf("\nげぼはっ！ 指定されたデータがないでええっす！");

            if (gSaveContext.sceneSetupIndex == 3) {
                altHeader =
                    ((SceneCmd**)SEGMENTED_TO_VIRTUAL(cmd->altHeaders.segment))[gSaveContext.sceneSetupIndex - 2];

                // "Using adult day data there!"
                osSyncPrintf("\nそこで、大人の昼データを使用するでええっす！！");

                if (altHeader != NULL) {
                    Scene_ExecuteCommands(play, SEGMENTED_TO_VIRTUAL(altHeader));
                    (cmd + 1)->base.code = SCENE_CMD_ID_END;
                }
            }
        }
    }
}

void Scene_CommandCutsceneData(PlayState* play, SceneCmd* cmd) {
    osSyncPrintf("\ngame_play->demo_play.data=[%x]", play->csCtx.segment);
    play->csCtx.segment = SEGMENTED_TO_VIRTUAL(cmd->cutsceneData.segment);
}

// Camera & World Map Area
void Scene_CommandMiscSettings(PlayState* play, SceneCmd* cmd) {
    YREG(15) = cmd->miscSettings.cameraMovement;
    gSaveContext.worldMapArea = cmd->miscSettings.area;

    if ((play->sceneNum == SCENE_SHOP1) || (play->sceneNum == SCENE_SYATEKIJYOU)) {
        if (LINK_AGE_IN_YEARS == YEARS_ADULT) {
            gSaveContext.worldMapArea = 1;
        }
    }

    if (((play->sceneNum >= SCENE_SPOT00) && (play->sceneNum <= SCENE_GANON_TOU)) ||
        ((play->sceneNum >= SCENE_ENTRA) && (play->sceneNum <= SCENE_SHRINE_R))) {
        if (gSaveContext.cutsceneIndex < 0xFFF0) {
            gSaveContext.worldMapAreaData |= gBitFlags[gSaveContext.worldMapArea];
            osSyncPrintf("０００  ａｒｅａ＿ａｒｒｉｖａｌ＝%x (%d)\n", gSaveContext.worldMapAreaData,
                         gSaveContext.worldMapArea);
        }
    }
}

void (*gSceneCmdHandlers[SCENE_CMD_ID_MAX])(PlayState*, SceneCmd*) = {
    Scene_CommandSpawnList,           // SCENE_CMD_ID_SPAWN_LIST
    Scene_CommandActorList,           // SCENE_CMD_ID_ACTOR_LIST
    Scene_CommandUnused2,             // SCENE_CMD_ID_UNUSED_2
    Scene_CommandCollisionHeader,     // SCENE_CMD_ID_COLLISION_HEADER
    Scene_CommandRoomList,            // SCENE_CMD_ID_ROOM_LIST
    Scene_CommandWindSettings,        // SCENE_CMD_ID_WIND_SETTINGS
    Scene_CommandEntranceList,        // SCENE_CMD_ID_ENTRANCE_LIST
    Scene_CommandSpecialFiles,        // SCENE_CMD_ID_SPECIAL_FILES
    Scene_CommandRoomBehavior,        // SCENE_CMD_ID_ROOM_BEHAVIOR
    Scene_CommandUndefined9,          // SCENE_CMD_ID_UNDEFINED_9
    Scene_CommandMeshHeader,          // SCENE_CMD_ID_MESH_HEADER
    Scene_CommandObjectList,          // SCENE_CMD_ID_OBJECT_LIST
    Scene_CommandLightList,           // SCENE_CMD_ID_LIGHT_LIST
    Scene_CommandPathList,            // SCENE_CMD_ID_PATH_LIST
    Scene_CommandTransitionActorList, // SCENE_CMD_ID_TRANSITION_ACTOR_LIST
    Scene_CommandLightSettingsList,   // SCENE_CMD_ID_LIGHT_SETTINGS_LIST
    Scene_CommandTimeSettings,        // SCENE_CMD_ID_TIME_SETTINGS
    Scene_CommandSkyboxSettings,      // SCENE_CMD_ID_SKYBOX_SETTINGS
    Scene_CommandSkyboxDisables,      // SCENE_CMD_ID_SKYBOX_DISABLES
    Scene_CommandExitList,            // SCENE_CMD_ID_EXIT_LIST
    NULL,                             // SCENE_CMD_ID_END
    Scene_CommandSoundSettings,       // SCENE_CMD_ID_SOUND_SETTINGS
    Scene_CommandEchoSettings,        // SCENE_CMD_ID_ECHO_SETTINGS
    Scene_CommandCutsceneData,        // SCENE_CMD_ID_CUTSCENE_DATA
    Scene_CommandAlternateHeaderList, // SCENE_CMD_ID_ALTERNATE_HEADER_LIST
    Scene_CommandMiscSettings,        // SCENE_CMD_ID_MISC_SETTINGS
};

RomFile sNaviMsgFiles[] = {
    ROM_FILE(elf_message_field),
    ROM_FILE(elf_message_ydan),
    ROM_FILE_UNSET,
};

s16 gLinkObjectIds[] = { OBJECT_LINK_BOY, OBJECT_LINK_CHILD };

u32 gObjectTableSize = ARRAY_COUNT(gObjectTable);

// Object linker symbol declarations (used in the table below)
#define DEFINE_OBJECT(name, _1) DECLARE_ROM_SEGMENT(name)
#define DEFINE_OBJECT_NULL(_0, _1)
#define DEFINE_OBJECT_UNSET(_0)

#include "tables/object_table.h"

#undef DEFINE_OBJECT
#undef DEFINE_OBJECT_NULL
#undef DEFINE_OBJECT_UNSET

// Object Table definition
#define DEFINE_OBJECT(name, _1) ROM_FILE(name),
#define DEFINE_OBJECT_NULL(name, _1) ROM_FILE_EMPTY(name),
#define DEFINE_OBJECT_UNSET(_0) { 0 },

RomFile gObjectTable[] = {
#include "tables/object_table.h"
};

#undef DEFINE_OBJECT
#undef DEFINE_OBJECT_NULL
#undef DEFINE_OBJECT_UNSET
