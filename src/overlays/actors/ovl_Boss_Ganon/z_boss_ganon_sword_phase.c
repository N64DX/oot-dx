static ColliderQuadInit sKickQuadInit = {
    {
        COL_MATERIAL_HIT8,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_QUAD,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xFFCFFFFF, 0x00, 0x20 },
        { 0x00000000, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_NORMAL | ATELEM_UNK7,
        ACELEM_NONE,
        OCELEM_NONE,
    },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

static ColliderQuadInit sSwordQuadInit = {
    {
        COL_MATERIAL_HIT0,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_QUAD,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0xFFCFFFFF, 0x00, 0x30 },
        { 0x00000000, 0x00, 0x00 },
        ATELEM_ON | ATELEM_SFX_HARD,
        ACELEM_NONE,
        OCELEM_NONE,
    },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0, 0x0),
    /* Deku stick    */ DMG_ENTRY(2, 0x0),
    /* Slingshot     */ DMG_ENTRY(0, 0x0),
    /* Explosive     */ DMG_ENTRY(2, 0x0),
    /* Boomerang     */ DMG_ENTRY(0, 0x0),
    /* Normal arrow  */ DMG_ENTRY(0, 0x0),
    /* Hammer swing  */ DMG_ENTRY(2, 0x0),
    /* Hookshot      */ DMG_ENTRY(0, 0x0),
    /* Kokiri sword  */ DMG_ENTRY(1, 0x0),
    /* Master sword  */ DMG_ENTRY(2, 0x0),
    /* Giant's Knife */ DMG_ENTRY(4, 0x0),
    /* Fire arrow    */ DMG_ENTRY(0, 0x0),
    /* Ice arrow     */ DMG_ENTRY(0, 0x0),
    /* Light arrow   */ DMG_ENTRY(0, 0x0),
    /* Unk arrow 1   */ DMG_ENTRY(0, 0x0),
    /* Unk arrow 2   */ DMG_ENTRY(0, 0x0),
    /* Unk arrow 3   */ DMG_ENTRY(0, 0x0),
    /* Fire magic    */ DMG_ENTRY(0, 0x6),
    /* Ice magic     */ DMG_ENTRY(0, 0xF),
    /* Light magic   */ DMG_ENTRY(0, 0x6),
    /* Shield        */ DMG_ENTRY(0, 0x0),
    /* Mirror Ray    */ DMG_ENTRY(0, 0x0),
    /* Kokiri spin   */ DMG_ENTRY(1, 0x0),
    /* Giant spin    */ DMG_ENTRY(4, 0x0),
    /* Master spin   */ DMG_ENTRY(2, 0x0),
    /* Kokiri jump   */ DMG_ENTRY(2, 0x0),
    /* Giant jump    */ DMG_ENTRY(8, 0x0),
    /* Master jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 1     */ DMG_ENTRY(0, 0x0),
    /* Unblockable   */ DMG_ENTRY(0, 0x0),
    /* Hammer jump   */ DMG_ENTRY(4, 0x0),
    /* Unknown 2     */ DMG_ENTRY(0, 0x0),
};

static Vec3f sBossGanonKickColliderQuads[4] = {
    BLENDERU_TO_ZU(-4.0f, 0.0f,   4.0f, 1000.0f),
    BLENDERU_TO_ZU( 4.0f, 0.0f,   4.0f, 1000.0f),
    BLENDERU_TO_ZU(-6.0f, 0.0f, -10.0f, 1000.0f),
    BLENDERU_TO_ZU( 6.0f, 0.0f, -10.0f, 1000.0f),
};

static Vec3f sBossGanonSwordColliderQuads[4] = {
    BLENDERU_TO_ZU(-2.0f, 20.0f, -1.965282f, 1000.0f),
    BLENDERU_TO_ZU( 4.0f, 20.0f,  2.0348f,   1000.0f),
    BLENDERU_TO_ZU( 4.0f, -1.2f,  2.0348f,   1000.0f),
    BLENDERU_TO_ZU(-2.0f, -1.2f, -1.965282f, 1000.0f),
};

static void (*BossGanon_Anime2Funcs[21])(BossGanon* this, PlayState* play) = {
    BossGanon_SwordPhaseCutscene,
    BossGanon_SetupSwordPhaseIdle,
    BossGanon_SwordPhaseIdle,
    BossGanon_SetupSwordPhaseSlashRight,
    BossGanon_SwordPhaseSlashRight,
    BossGanon_SetupSwordPhaseThrust1,
    BossGanon_SwordPhaseThrust1,
    BossGanon_SetupSwordPhaseKick,
    BossGanon_SwordPhaseKick,
    BossGanon_SetupSwordPhaseSlashDownLeft,
    BossGanon_SwordPhaseSlashDownLeft,
    BossGanon_SetupSwordPhaseThrow,
    BossGanon_SwordPhaseThrow,
    BossGanon_SetupSwordPhaseCatch,
    BossGanon_SwordPhaseCatch,
    BossGanon_SetupSwordPhasePull,
    BossGanon_SwordPhasePull,
    BossGanon_SetupSwordPhaseBlock,
    BossGanon_SwordPhaseBlock,
    BossGanon_SetupSwordPhase3Swing,
    BossGanon_SwordPhase3Swing,
};

static Actor* sLadder = NULL;

void BossGanon_SetupSwordPhaseCutscene(BossGanon* this, PlayState* play) {
    s32 animObjectSlot = Object_GetSlot(&play->objectCtx, OBJECT_GANON_ANIME2);

    if (Object_IsLoaded(&play->objectCtx, animObjectSlot)) {
        this->actionFunc = BossGanon_SwordPhaseCutscene;
        this->csTimer = this->csState = 0;
        this->unk_198 = 1;
        this->animObjectSlot = animObjectSlot;
        gSegments[6] = OS_K0_TO_PHYSICAL(play->objectCtx.slots[animObjectSlot].segment);
        Animation_MorphToPlayOnce(&this->skelAnime, &gGanondorfDefeatedStartAnim, 0.0f);
        this->fwork[GDF_FWORK_1] = Animation_GetLastFrame(&gGanondorfDefeatedStartAnim);
        this->unk_508 = 0.0f;

        sLadder = Actor_Find(&play->actorCtx, ACTOR_BG_GANON_LADDER, ACTORCAT_PROP);
    }
}

void BossGanon_SwordPhaseCutscene(BossGanon* this, PlayState* play) {
    static Color_RGBA8 bloodPrimColor = { 120, 0, 0, 255 };
    static Color_RGBA8 bloodEnvColor = { 120, 0, 0, 255 };
    s16 i;
    u8 moveCam = false;
    Player* player = GET_PLAYER(play);
    Vec3f sp98;
    Vec3f sp8C;
    Vec3f sp80;
    Vec3f sp74;
    Camera* mainCam;
    Vec3f sp64;
    u8 curFrame;

    gSegments[6] = OS_K0_TO_PHYSICAL(play->objectCtx.slots[this->animObjectSlot].segment);

    if (Message_GetState(&play->msgCtx) == TEXT_STATE_NONE)
        this->csTimer++;
    SkelAnime_Update(&this->skelAnime);

    switch (this->csState) {
        case 0:
            Cutscene_StartManual(play, &play->csCtx);
            Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_8);
            this->csCamIndex = Play_CreateSubCamera(play);
            Play_ChangeCameraStatus(play, CAM_ID_MAIN, CAM_STAT_WAIT);
            Play_ChangeCameraStatus(play, this->csCamIndex, CAM_STAT_ACTIVE);

            this->actor.world.pos.x = 0.0f;
            this->actor.world.pos.y = 70.0f;
            this->actor.world.pos.z = -80.0f;

            this->actor.shape.yOffset = -7000.0f;

            this->actor.shape.rot.y = 0;
            this->csState = 1;
            this->csTimer = 0;
            this->useOpenHand = true;
            this->actor.colChkInfo.health = this->actor.maxHealth = Actor_EnemyHealthMultiply(200, BOSS_HP);
            this->actor.colChkInfo.damageTable = &sDamageTable;
            FALLTHROUGH;
        case 1:
            player->actor.shape.rot.y = -0x8000;

            player->actor.world.pos.x = -10.0f;
            player->actor.world.pos.y = 0.0f;
            player->actor.world.pos.z = 115.0f;

            this->envLightMode = 13;

            if (this->csTimer < 30)
                play->envCtx.lightBlend = 0.0f;
            if (this->csTimer >= 2)
                play->envCtx.fillScreen = false;

            this->csCamEye.x = -50.0f;
            this->csCamEye.z = -50.0f;
            this->csCamEye.y = 50.0f;

            this->csCamAt.x = this->unk_1FC.x;
            this->csCamAt.y = this->unk_1FC.y + 30.0f;
            this->csCamAt.z = this->unk_1FC.z;

            if (Animation_OnFrame(&this->skelAnime, this->fwork[GDF_FWORK_1])) {
                Animation_MorphToLoop(&this->skelAnime, &gGanondorfDefeatedLoopAnim, 0.0f);
                this->csState = 2;
                this->csTimer = 0;
            }
            break;

        case 2:
            this->csCamEye.x = -100.0f;
            this->csCamEye.y = 20.0f;
            this->csCamEye.z = -130.0f;

            this->envLightMode = 13;

            this->csCamAt.x = this->unk_1FC.x;
            this->csCamAt.y = this->unk_1FC.y;
            this->csCamAt.z = this->unk_1FC.z + 40.0f;

            if (this->csTimer >= 30) {
                this->csState = 3;
                this->csTimer = 0;
                Message_StartTextbox(play, 0x8125, NULL);
                this->fwork[GDF_FWORK_1] = 1000.0f;
            }

            if ((this->unk_1A2 % 32) == 0)
                Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_BREATH);
            break;
        case 3:
            this->envLightMode = 14;

            if ((this->fwork[GDF_FWORK_1] > 100.0f) && ((this->unk_1A2 % 32) == 0))
                Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_BREATH);

            this->csCamEye.x = 7.0f;
            this->csCamEye.y = 52.0f;
            this->csCamEye.z = -15.0f;

            this->csCamAt.x = this->unk_1FC.x - 5.0f;
            this->csCamAt.y = this->unk_1FC.y + 30.0f - 10.0f;
            this->csCamAt.z = this->unk_1FC.z;

            if ((this->fwork[GDF_FWORK_1] > 100.0f) && (this->csTimer > 60) && (Message_GetState(&play->msgCtx) == TEXT_STATE_NONE)) {
                Audio_StopSfxById(NA_SE_EN_GANON_BREATH);
                Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseCutscenerecoverAnim, 0.0f);
                this->fwork[GDF_FWORK_1] = Animation_GetLastFrame(&SwordPhaseCutscenerecoverAnim);
            } else if (Animation_OnFrame(&this->skelAnime, this->fwork[GDF_FWORK_1])) {
                Animation_MorphToLoop(&this->skelAnime, &SwordPhaseIdleAnim, 0.0f);
                this->csState = 4;
                this->csTimer = 0;
            }
            break;
        case 4:
            this->envLightMode = 14;

            if (this->csTimer == 30) {
                Message_StartTextbox(play, 0x8126, NULL);
                this->csState = 5;
                this->csTimer = 0;
            }
            break;
        case 5:
            if ((this->csTimer > 20) && (Message_GetState(&play->msgCtx) == TEXT_STATE_NONE)) {
                this->csState = 6;
                this->csTimer = 0;

                Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseSlamAnim, 0.0f);
                this->fwork[GDF_FWORK_1] = Animation_GetLastFrame(&SwordPhaseSlamAnim);
                this->csCamMovementScale = 0.05f;
                this->csCamMaxStepScale = 0.0f;

                this->csCamTargetEye.x = 0.0f;
                this->csCamTargetEye.y = 30.0f;
                this->csCamTargetEye.z = 70.0f;

                this->csCamTargetAt.x = this->unk_1FC.x - 5.0f;
                this->csCamTargetAt.y = (this->unk_1FC.y + 30.0f) - 10.0f;
                this->csCamTargetAt.z = this->unk_1FC.z;

                this->csCamEyeMaxStep.x = fabsf(this->csCamEye.x - this->csCamTargetEye.x);
                this->csCamEyeMaxStep.y = fabsf(this->csCamEye.y - this->csCamTargetEye.y);
                this->csCamEyeMaxStep.z = fabsf(this->csCamEye.z - this->csCamTargetEye.z);

                this->csCamAtMaxStep.x = fabsf(this->csCamAt.x - this->csCamTargetAt.x);
                this->csCamAtMaxStep.y = fabsf(this->csCamAt.y - this->csCamTargetAt.y);
                this->csCamAtMaxStep.z = fabsf(this->csCamAt.z - this->csCamTargetAt.z);

                Actor_PlaySfx(&this->actor, NA_SE_EN_FANTOM_ST_LAUGH);
            }
            break;
        case 6:
            moveCam = true;

            curFrame = (u8)this->skelAnime.curFrame;

            if (curFrame < 56)
                Math_ApproachF(&this->csCamMaxStepScale, 0.2f, 1.0f, 0.01f);

            switch (curFrame) {
                case 20:
                    this->useOpenHand = false;
                    this->swordPhase = true;
                    this->swordDl = true;
                    break;
                case 48:
                    SEQCMD_PLAY_SEQUENCE(SEQ_PLAYER_BGM_MAIN, 0, 0, NA_BGM_GANONDORF_BOSS);
                    break;
            }

            SEQCMD_SET_TEMPO(SEQ_PLAYER_BGM_MAIN, 0, 140);
            
            if (Animation_OnFrame(&this->skelAnime, this->fwork[GDF_FWORK_1])) {
                Animation_MorphToLoop(&this->skelAnime, &SwordPhaseSlamloopAnim, 0.0f);
                this->csState = 7;
                this->csTimer = 0;
                this->unk_2E8 = 0;
                this->unk_508 = 0.0f;
                this->fwork[GDF_FWORK_1] = 1000.0f;
                
                this->csCamEye.x = this->csCamTargetEye.x = 0.0f;
                this->csCamEye.y = this->csCamTargetEye.y = (this->unk_1FC.y + 30.0f) - 25.0f;
                this->csCamEye.z = this->csCamTargetEye.z = 7.0f;

                this->csCamAt.x = this->csCamTargetAt.x = 0.0f;
                this->csCamAt.y = this->csCamTargetAt.y = (this->unk_1FC.y + 30.0f) - 25.0f;
                this->csCamAt.z = this->csCamTargetAt.z = this->unk_1FC.z;

                Actor_PlaySfx(&this->actor, NA_SE_EN_VALVAISA_LAND);
                this->ladderFall = true;
            }
            break;
        case 7:
            mainCam = Play_GetCamera(play, CAM_ID_MAIN);
            mainCam->eye = this->csCamEye;
            mainCam->eyeNext = this->csCamEye;
            mainCam->at = this->csCamAt;
            Play_ReturnToMainCam(play, this->csCamIndex, 0);
            this->csState = 8;
            this->csCamIndex = 0;
            Cutscene_StopManual(play, &play->csCtx);
            Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_7);
            Flags_SetSwitch(play, 0x37);
            break;
        case 8:
            Actor_SetPlayerKnockbackLarge(play, &this->actor, 3.0f, this->actor.yawTowardsPlayer, 2.0f, 0x00);
            this->csState = 9;
            this->actor.shape.yOffset = 0.0f;
            this->collider.dim.yShift = 0;
            if (LINK_IS_CHILD)
                Actor_SetScale((Actor*)this, 0.008f);
            break;
        case 9:
            this->actor.world.pos.y = sLadder->world.pos.y;
            sCape->minY = sLadder->world.pos.y;
            SEQCMD_SET_TEMPO(SEQ_PLAYER_BGM_MAIN, 0, 140);
            if (this->csTimer >= 60)
                this->csState = 10;
            break;
        case 10:
            Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseSlamgetupAnim, 0.0f);
            Actor_PlaySfx(&this->actor, NA_SE_EN_FANTOM_ST_LAUGH);
            this->csState = 11;
            break;
        case 11:
            if (Animation_OnFrame(&this->skelAnime, Animation_GetLastFrame(&SwordPhaseSlamgetupAnim))) {
                this->csState = 0;
                BossGanon_SetupSwordPhaseIdle(this, play);
            }
            break;
        case 109:
            Sfx_PlaySfxCentered(NA_SE_EV_EARTHQUAKE - SFX_FLAG);
            break;
    }

    if (this->csCamIndex != 0) {
        if (moveCam) {
            Math_ApproachF(&this->csCamEye.x, this->csCamTargetEye.x, this->csCamMovementScale, this->csCamEyeMaxStep.x * this->csCamMaxStepScale);
            Math_ApproachF(&this->csCamEye.y, this->csCamTargetEye.y, this->csCamMovementScale, this->csCamEyeMaxStep.y * this->csCamMaxStepScale);
            Math_ApproachF(&this->csCamEye.z, this->csCamTargetEye.z, this->csCamMovementScale, this->csCamEyeMaxStep.z * this->csCamMaxStepScale);
            Math_ApproachF(&this->csCamAt.x, this->csCamTargetAt.x, this->csCamMovementScale, this->csCamAtMaxStep.x * this->csCamMaxStepScale);
            Math_ApproachF(&this->csCamAt.y, this->csCamTargetAt.y, this->csCamMovementScale, this->csCamAtMaxStep.y * this->csCamMaxStepScale);
            Math_ApproachF(&this->csCamAt.z, this->csCamTargetAt.z, this->csCamMovementScale, this->csCamAtMaxStep.z * this->csCamMaxStepScale);
        }

        sp64 = this->csCamAt;
        sp64.y += this->unk_70C;
        Play_SetCameraAtEye(play, this->csCamIndex, &sp64, &this->csCamEye);
    }
}

void BossGanon_FacePlayer(BossGanon* this, PlayState* play) {
    s16 angleDiff = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;

    if (ABS(angleDiff) <= 0x4000) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 6, 4000, 100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
        Actor_TrackPlayer(play, &this->actor, &this->headRot, &this->torsoRot, this->actor.focus.pos);
    } else {
        if (angleDiff < 0)
            Math_SmoothStepToS(&this->headRot.y, -0x2000, 6, 6200, 0x100);
        else  Math_SmoothStepToS(&this->headRot.y, 0x2000, 6, 6200, 0x100);

        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 12, 1000, 100);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
}

void BossGanon_UpdateSwordPhase(Actor* thisx, PlayState* play) {
    BossGanon* this = (BossGanon*)thisx;

    this->torsoRot.x = this->torsoRot.y = this->torsoRot.z = 0;

    SEQCMD_SET_TEMPO(SEQ_PLAYER_BGM_MAIN, 0, 140);

    BossGanon_Update(thisx, play);

    Collider_UpdateCylinder(thisx, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);

    Actor_UpdateBgCheckInfo(play, &this->actor, 20.0f, 20.0f, 20.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
}

void BossGanon_UpdateCollider(BossGanon* this, PlayState* play, Vec3f* src, ColliderQuad* collider) {
    Vec3f quadDest[4];

    Matrix_MultVec3f(&src[0], &quadDest[0]);
    Matrix_MultVec3f(&src[1], &quadDest[1]);
    Matrix_MultVec3f(&src[2], &quadDest[2]);
    Matrix_MultVec3f(&src[3], &quadDest[3]);
    Collider_SetQuadVertices(collider, &quadDest[0], &quadDest[1], &quadDest[2], &quadDest[3]);
}

void BossGanon_SetupSwordPhaseSlashDownLeft(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseSwingdownleftAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseSlashDownLeft;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhaseSlashDownLeft(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;

    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
            break;
        case 12:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (curFrame >= 12 && curFrame <= 16) {
        this->swordAT = 1;
        this->actor.speed = 3.5f;
        Actor_MoveXZGravity(&this->actor);

    } else {
        this->swordAT = -1;
        this->actor.speed = 0.0f;
    }

    if (SkelAnime_Update(&this->skelAnime)) {
        this->swordAT = -1;
        BossGanon_SetupSwordPhaseIdle(this, play);

    }
}

void BossGanon_SetupSwordPhase3Swing(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhase3swingsAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhase3Swing;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhase3Swing(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;

    this->skelAnime.movementFlags |= ANIM_FLAG_UPDATE_XZ;
    AnimTaskQueue_AddActorMovement(play, &this->actor, &this->skelAnime, 1.0f);

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
            break;
        case 12:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
        case 22:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
        case 36:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (curFrame >= 33 && curFrame <= 38) { }
    else BossGanon_FacePlayer(this, play);

    this->actor.shape.rot.y = this->actor.world.rot.y;

    if ((curFrame >= 12 && curFrame <= 19) || (curFrame >= 22 && curFrame <= 27) || (curFrame >= 33 && curFrame <= 38))
        this->swordAT = 1;
    else this->swordAT = -1;

    if (SkelAnime_Update(&this->skelAnime)) {
        this->swordAT = -1;
        BossGanon_SetupSwordPhaseIdle(this, play);
    }
}

static u8 sGanonThrustTimer = 0;

void BossGanon_SetupSwordPhaseThrust1(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseThrustAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseThrust1;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
    sGanonThrustTimer = 0;
}

void BossGanon_SwordPhaseThrust1(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;
    
    if (curFrame < 23) {
        BossGanon_FacePlayer(this, play);
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
            break;
        case 20:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (curFrame >= 20 && curFrame <= 35) {
        sGanonThrustTimer++;
        this->swordAT = 1;
        this->actor.speed = 15.5f;
        Actor_MoveXZGravity(&this->actor);
    } else {
        this->swordAT = -1;
        this->actor.speed = 0.0f;
    }

    if (SkelAnime_Update(&this->skelAnime)) {
        this->swordAT = -1;
        BossGanon_SetupSwordPhaseIdle(this, play);
    }

    if (sGanonThrustTimer < 35 && curFrame == 29.0f && Math_Vec3f_DistXZ(&this->actor.world.pos, &GET_PLAYER(play)->actor.world.pos) > 100.0f)
        this->skelAnime.curFrame = 34.0f;
}

void BossGanon_SetupSwordPhaseSlashRight(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseSlashrightAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseSlashRight;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhaseSlashRight(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;
    
    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
            break;
        case 7:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (curFrame >= 7 && curFrame <= 13) {
        this->swordAT = 1;
        this->actor.speed = 4.5f;
        Actor_MoveXZGravity(&this->actor);
    } else {
        this->swordAT = -1;
        this->actor.speed = 0.0f;
    }

    if (SkelAnime_Update(&this->skelAnime)) {
        this->swordAT = -1;
        BossGanon_SetupSwordPhaseIdle(this, play);
    }
}

void BossGanon_SetupSwordPhaseKick(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseKickAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseKick;
    this->kickCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhaseKick(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;
    
    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
            break;
        case 10:
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (!(this->kickCollider.base.atFlags & AT_HIT) && curFrame >= 10 && curFrame <= 14)
        this->kickAT = true;
    else
        this->kickAT = false;

    if (this->kickCollider.base.atFlags & AT_HIT && !this->kickHit) {
        this->kickHit = true;
        Actor_SetPlayerKnockbackLarge(play, &this->actor, 15.0f, this->actor.yawTowardsPlayer, 10.0f, 0x00);
    }

    if (SkelAnime_Update(&this->skelAnime)) {
        this->kickHit = false;
        this->kickAT = false;
        BossGanon_SetupSwordPhaseIdle(this, play);
    }
}

void BossGanon_SetupSwordPhaseThrow(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseThrowAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseThrow;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhaseThrow(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;
    
    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    switch (curFrame) {
        case 1:
            Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_DARKWAVE);
            break;
        case 19:
            this->spawnSword = true;
            this->useOpenHand = true;
            Actor_PlaySfx(&this->actor, NA_SE_EV_NALE_MAGIC);
            break;
    }

    if (SkelAnime_Update(&this->skelAnime)) {
        this->swordAT = -1;
        BossGanon_SetupSwordPhasePull(this, play);
    }
}

static u8 sGanonGrappleCooldown = 0;

void BossGanon_SetupSwordPhasePull(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhasePullAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhasePull;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
    this->pulleyTimer = 0;
    this->grabbedLink = false;
    sGanonGrappleCooldown = 80;
    this->useOpenHand = false;
}

static Vec3f sGrabPos = {0.0f, 0.0f, 0.0f};

void BossGanon_SwordPhasePull(BossGanon* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    u8 curFrame = (u8)this->skelAnime.curFrame;
    u8 i;
    bool finished = SkelAnime_Update(&this->skelAnime);

    this->envLightMode = 13;
    this->beamTexScroll += 96;
    
    if (this->skelAnime.animation == &SwordPhasePullAnim) {
        BossGanon_FacePlayer(this, play);
        this->actor.shape.rot.y = this->actor.world.rot.y;

        switch (curFrame) {
            case 1:
                Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_AT_RETURN);
                break;
        }

        if (finished) {
            Animation_MorphToLoop(&this->skelAnime, &SwordPhasePullidleAnim, 3.0f);

            Math_Vec3f_Copy(&this->beamPos2, &player->actor.world.pos);
            this->beamPos2.y += 20;
        }
    } else {
        if (this->pulleyTimer < 255) this->pulleyTimer++;

        switch(this->pulleyTimer) {
            case 10:
                if (Math_Vec3f_DistXZ(&this->beamPos2, &player->actor.world.pos) <= 60.0f) {
                    this->grabbedLink = true;
                    play->grabPlayer(play, player);
                    player->actor.parent = &this->actor;
                    player->av2.actionVar2 = 0xA;
                    player->actor.speed = player->actor.velocity.y = 0;
                    play->damagePlayer(play, -16);

                }
                break;
            case 20:
                if (this->grabbedLink) {
                    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseGrappleAnim, 3.0f);
                    this->csState = 1;

                }
                break;
        }

        if (this->grabbedLink) {
            if (player->av2.actionVar2 == 0xA) {
                if (this->pulleyTimer >= 20) {
                    Math_Vec3f_Copy(&sGrabPos, &this->rightHandPos);
                    player->actor.world.rot.y = sBossGanonLimbRot.y + 0x8000;
                    if (this->pulleyTimer % 20 == 0) {
                        play->damagePlayer(play, -16);
                        Player_PlaySfx(player, LINK_IS_ADULT ? NA_SE_VO_LI_DAMAGE_S : NA_SE_VO_LI_DAMAGE_S_KID);
                    }
                } else {
                    f32 lerp = ((f32)this->pulleyTimer - 10.0f) * 0.1f;
                    lerp = CLAMP(lerp, 0.0f, 1.0f);

                    sGrabPos.x = F32_LERP(this->beamPos2.x, this->rightHandPos.x, lerp);
                    sGrabPos.y = F32_LERP(this->beamPos2.y, this->rightHandPos.y, lerp);
                    sGrabPos.z = F32_LERP(this->beamPos2.z, this->rightHandPos.z, lerp);
                    player->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x8000;
                }

                for (i = 0; i < 10; i++)
                    BossGanonEff_SpawnShock(play, 700.0f, GDF_SHOCK_PLAYER_PURPLE);
                sGrabPos.y -= 40.0f;
                Math_Vec3f_Copy(&player->actor.world.pos, &sGrabPos);
            }

            if (this->skelAnime.animation == &SwordPhaseGrappleAnim && curFrame == 41) {
                player->actor.world.rot.x = 0;
                player->actor.world.rot.z = 0;
                player->actor.world.pos.y += 40.0f;
                player->av2.actionVar2 = 0x65;
                player->actor.parent = NULL;
                player->csAction = PLAYER_CSACTION_NONE;
                Actor_SetPlayerKnockbackLarge(play, &this->actor, 15.0f, this->actor.shape.rot.y, 2.0f, 0);
            } else if (this->skelAnime.animation == &SwordPhaseGrappleAnim && curFrame < 41) player->av2.actionVar2 = 0xA;

            player->actor.shape.rot.x = player->actor.world.rot.x;
            player->actor.shape.rot.y = player->actor.world.rot.y;
            player->actor.shape.rot.z = player->actor.world.rot.z;

            if (finished) {
                this->csState = 0;
                this->pulleyTimer = 255;
                this->useOpenHand = true;
                BossGanon_SetupSwordPhaseCatch(this, play);
            }

        } else if (this->pulleyTimer >= 20) {
            this->pulleyTimer = 255;
            this->useOpenHand = true;
            BossGanon_SetupSwordPhaseCatch(this, play);
        }
    }
}

void BossGanon_SetupSwordPhaseCatch(BossGanon* this, PlayState* play) {
    Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhasePullAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseCatch;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
}

void BossGanon_SwordPhaseCatch(BossGanon* this, PlayState* play) {
    u8 curFrame = (u8)this->skelAnime.curFrame;
    bool finished = SkelAnime_Update(&this->skelAnime);

    if (this->skelAnime.animation == &SwordPhasePullAnim) {
        switch (curFrame) {
            case 19:
                this->pullSword = true;
                break;
        }

        if (finished)
            Animation_MorphToLoop(&this->skelAnime, &SwordPhasePullidleAnim, 3.0f);
    } else if (this->skelAnime.animation == &SwordPhasePullidleAnim && this->swordCaught) {
        Animation_MorphToPlayOnce(&this->skelAnime, &SwordPhaseCatchAnim, 3.0f);
        this->skelAnime.curFrame = 16;
        this->swordDl = true;
        this->useOpenHand = false;
    } else if (finished) {
        this->pullSword = false;
        this->swordCaught = false;
        BossGanon_SetupSwordPhaseIdle(this, play);
    }
}

void EnGanon_DrawPulley(PlayState* play, Vec3f* pos, Vec3s* rot, Vec3f* scale, u8 r, u8 g, u8 b, u8 a, s16 texScroll) {
    OPEN_DISPS(play->state.gfxCtx, "../z_boss_ganon.c", 6190);
    Gfx_SetupDL_25Xlu(play->state.gfxCtx);
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(play->state.gfxCtx, 0, texScroll, 0, 0));
    Matrix_Translate(pos->x, pos->y, pos->z, MTXMODE_NEW);
    Matrix_RotateZYX(rot->x, rot->y, rot->z, MTXMODE_APPLY);
    Matrix_Scale(scale->x * 0.1f, scale->x * 0.1f, scale->z * 0.001f, MTXMODE_APPLY);
    MATRIX_FINALIZE_AND_LOAD(POLY_XLU_DISP++, play->state.gfxCtx, "../z_boss_ganon.c", 6178);
    gDPSetPrimColor(POLY_XLU_DISP++, 0, 0, r, g, b, a);
    gSPDisplayList(POLY_XLU_DISP++, gGanondorfPulley);
    CLOSE_DISPS(play->state.gfxCtx, "../z_boss_ganon.c", 6199);
}

void BossGanon_DrawPulleys(BossGanon* this, PlayState* play) {
    f32 dist, timer, lerp, a, b;
    bool direction;
    
    if (this->pulleyTimer == 255 || this->pulleyTimer == 0)
        return;

    Actor_PlaySfx(&this->actor, NA_SE_EN_GANON_DARKWAVE_M - SFX_FLAG);

    dist = Math_Vec3f_DistXYZ(&this->rightHandPos, &this->beamPos2);
    timer = (f32)this->pulleyTimer;
    direction = (this->pulleyTimer < 10);
    lerp = (direction ? timer * 0.1f : (timer - 10.0f) * 0.1f);
    lerp = CLAMP(lerp, 0.0f, 1.0f);

    this->beamScale.x = 0.08f;
    this->beamScale.y = 0.08f;

    a = (direction ? 0.0f : dist);
    b = (direction ? dist : 0.0f);
    this->beamScale.z = F32_LERP(a, b, lerp);

    this->beamRot.y = Math_Vec3f_Yaw(&this->rightHandPos, &this->beamPos2);
    this->beamRot.x = Math_Vec3f_Pitch(&this->rightHandPos, &this->beamPos2);

    EnGanon_DrawPulley(play, &this->rightHandPos, &this->beamRot, &this->beamScale, 89, 0, 198, 180, 0);
}

void BossGanon_SetupSwordPhaseBlock(BossGanon* this, PlayState* play) {
    u8 rand = (u8)IRANDOM_RANGE(0, 2);
    AnimationHeader* blockAnim = &SwordPhaseBlock1Anim;

    switch(rand) {
        case 0:
            break;
        case 1:
            blockAnim = &SwordPhaseBlock2Anim;
            break;
        case 2:
            blockAnim = &SwordPhaseBlock3Anim;
            break;
    }

    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.shape.rot.y = this->actor.world.rot.y;

    Animation_MorphToPlayOnce(&this->skelAnime, blockAnim, 2.0f);
    this->actionFunc = BossGanon_SwordPhaseBlock;
    this->swordCollider.base.atFlags &= ~AT_HIT;
    this->actor.speed = 0.0f;
    this->invincible = true;
    this->swordAT = -1;
    this->kickAT = false;
    this->kickHit = false;

    Actor_PlaySfx(&this->actor, NA_SE_IT_SHIELD_REFLECT_SW);
}

void BossGanon_SwordPhaseBlock(BossGanon* this, PlayState* play) {
    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    if (this->skelAnime.curFrame == 8.0f)
        this->invincible = false;

    if (SkelAnime_Update(&this->skelAnime)) {
        BossGanon_SetupSwordPhaseIdle(this, play);
        BossGanon_ChooseNextAction(this, play);

    }
}

/**
 * General attack behavior:
 * If Link is too close, Ganondorf will kick him away.
 * If he's too far away, Ganondorf will throw his sword and use his grapple attack.
 * Otherwise, if sGanonSwordTimer >= sGanonNextChoose, choose a random attack to play.
**/

static u16 sGanonSwordTimer = 0;
static u8 sGanonNextChoose = 0;
static f32 sGanonKickRange = 50.0f;
static f32 sGanonGrappleDist = 180.0f;

void BossGanon_ChooseNextAction(BossGanon* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    f32 dist = this->actor.xzDistToPlayer;
    s16 yawDiff;

    if (dist <= sGanonKickRange) {
        BossGanon_SetupSwordPhaseKick(this, play);
        return;
    }

    yawDiff = Math_Vec3f_Yaw(&this->actor.world.pos, &player->actor.world.pos) - this->actor.shape.rot.y;
    if (ABS(yawDiff) >= 0x2000)
        return;

    if (dist >= sGanonGrappleDist) {
        if (sGanonGrappleCooldown == 0 && (u8)IRANDOM_RANGE(0, 1) == 0)
            BossGanon_SetupSwordPhaseThrow(this, play);
        else BossGanon_SetupSwordPhaseThrust1(this, play);
        return;
    }

    if (dist < sGanonGrappleDist && sGanonSwordTimer >= sGanonNextChoose) {
        sGanonSwordTimer = 0;
        switch((u8)IRANDOM_RANGE(0, 10)) {
            case 0: FALLTHROUGH;
            case 1: FALLTHROUGH;
            case 2: FALLTHROUGH;
            case 3:
                BossGanon_SetupSwordPhaseSlashRight(this, play);
                break;
            case 4: FALLTHROUGH;
            case 5:
                BossGanon_SetupSwordPhaseThrust1(this, play);
                break;
            case 6: FALLTHROUGH;
            case 7: FALLTHROUGH;
            case 8: FALLTHROUGH;
            case 9:
                BossGanon_SetupSwordPhaseSlashDownLeft(this, play);
                break;
            case 10:
                BossGanon_SetupSwordPhaseKick(this, play);
                break;
        }
    }
}

void BossGanon_SetupSwordPhaseIdle(BossGanon* this, PlayState* play) {
    Animation_MorphToLoop(&this->skelAnime, &SwordPhaseIdleAnim, 3.0f);
    this->actionFunc = BossGanon_SwordPhaseIdle;
    this->actor.update = BossGanon_UpdateSwordPhase;
    this->actor.flags |= ACTOR_FLAG_ATTENTION_ENABLED;
    this->skelAnime.movementFlags |= ACTOR_FLAG_ATTENTION_ENABLED;
    sGanonNextChoose = (u8)IRANDOM_RANGE(0, 40);
}

void BossGanon_SwordPhaseIdleIdle(BossGanon* this, PlayState* play) {
    this->actor.speed = 0.0f;
    if (this->actor.xzDistToPlayer >= 100.0f)
        Animation_MorphToLoop(&this->skelAnime, &SwordPhaseWalkAnim, 3.0f);
}

static f32 sReverb = 0.3f;

void BossGanon_SwordPhaseIdleWalk(BossGanon* this, PlayState* play) {
    this->actor.speed = 1.5f;
    Actor_MoveXZGravity(&this->actor);
    if (this->actor.xzDistToPlayer < 100.0f)
        Animation_MorphToLoop(&this->skelAnime, &SwordPhaseIdleAnim, 3.0f);
    if (this->skelAnime.curFrame == 2.0f || this->skelAnime.curFrame == 16.0f)
        Audio_PlaySfxGeneral(NA_SE_EV_KNIGHT_WALK, &gSfxDefaultPos, 4, &sReverb, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

typedef struct BossGanonSwordPhaseIdleFunc {
    AnimationHeader* animation;
    void (*func)(BossGanon* this, PlayState* play);
} BossGanonSwordPhaseIdleFunc;

static BossGanonSwordPhaseIdleFunc sBossGanonSwordPhaseIdleFuncs[2] = {
    {&SwordPhaseIdleAnim, BossGanon_SwordPhaseIdleIdle},
    {&SwordPhaseWalkAnim, BossGanon_SwordPhaseIdleWalk},
};

void BossGanon_SwordPhaseIdle(BossGanon* this, PlayState* play) {
    u8 i;

    sGanonSwordTimer++;
    if (sGanonGrappleCooldown > 0)
        sGanonGrappleCooldown--;

    SkelAnime_Update(&this->skelAnime);

    BossGanon_FacePlayer(this, play);
    this->actor.shape.rot.y = this->actor.world.rot.y;

    for(i = 0; i < 2; i++) {
        BossGanonSwordPhaseIdleFunc v = sBossGanonSwordPhaseIdleFuncs[i];
        if (this->skelAnime.animation != v.animation)
            continue;
        v.func(this, play);
    }

    BossGanon_ChooseNextAction(this, play);
}
