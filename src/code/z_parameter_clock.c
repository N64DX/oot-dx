Gfx* Gfx_DrawTexRect4b(Gfx* gfx, void* texture, s32 fmt, s16 textureWidth, s16 textureHeight, s16 rectLeft, s16 rectTop, s16 rectWidth, s16 rectHeight, s32 cms, s32 masks, s32 rects, u16 dsdx, u16 dtdy) {
    gDPLoadTextureBlock_4b(gfx++, texture, fmt, textureWidth, textureHeight, 0, cms, G_TX_NOMIRROR | G_TX_WRAP, masks, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle(gfx++, rectLeft << 2, rectTop << 2, (rectLeft + rectWidth) << 2, (rectTop + rectHeight) << 2, G_TX_RENDERTILE, rects, 0, dsdx, dtdy);
    return gfx;
}

Gfx* Gfx_DrawTexQuadIA8(Gfx* gfx, void* texture, s16 textureWidth, s16 textureHeight, u16 point) {
    gDPLoadTextureBlock(gfx++, texture, G_IM_FMT_IA, G_IM_SIZ_8b, textureWidth, textureHeight, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle(gfx++, point, point + 2, point + 3, point + 1, 0);
    return gfx;
}

Gfx* Gfx_DrawTexQuad4b(Gfx* gfx, void* texture, s32 fmt, s16 textureWidth, s16 textureHeight, u16 point) {
    gDPLoadTextureBlock_4b(gfx++, texture, fmt, textureWidth, textureHeight, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle(gfx++, point, point + 2, point + 3, point + 1, 0);
    return gfx;
}

#define R_THREE_DAY_CLOCK_Y_POS            (-940)
#define R_THREE_DAY_CLOCK_SUN_MOON_CUTOFF   (215)
#define R_THREE_DAY_CLOCK_HOUR_DIGIT_CUTOFF (218)

s16 sThreeDayClockStarMinuteGlowDirection = 0;
s16 sThreeDayClockStarMinuteGlowTimer = 10;
s16 sThreeDayClockStarMinuteGlowAlpha = 255;
f32 sThreeDayClockStarMinuteScale = 1.0f;

s16 sFinalHoursClockDigitsRed = 0;
s16 sFinalHoursClockFrameEnvRed = 0;
s16 sFinalHoursClockFrameEnvGreen = 0;
s16 sFinalHoursClockFrameEnvBlue = 0;
s16 sFinalHoursClockColorTimer = 15;
s16 sFinalHoursClockColorTargetIndex = 0;

static u8 Interface_PlayerIsMoving(PlayState* play) {
    Player* player = GET_PLAYER(play);
    return (player->stateFlags2 & PLAYER_STATE2_8) || player->actor.speed != 0.0f || (player->stateFlags1 & PLAYER_STATE1_27);
}

/**
 * Draws either the analog three-day clock or the digital final-hours clock
 */
void Interface_DrawClock(PlayState* play) {
    static s16 sThreeDayClockAlpha = 255;
    static s16 sClockAlphaTimer1 = 0;
    static s16 sClockAlphaTimer2 = 0;
    static u16 sThreeDayClockHours[] = {
        CLOCK_TIME(0, 0),  CLOCK_TIME(1, 0),  CLOCK_TIME(2, 0),  CLOCK_TIME(3, 0),  CLOCK_TIME(4, 0),
        CLOCK_TIME(5, 0),  CLOCK_TIME(6, 0),  CLOCK_TIME(7, 0),  CLOCK_TIME(8, 0),  CLOCK_TIME(9, 0),
        CLOCK_TIME(10, 0), CLOCK_TIME(11, 0), CLOCK_TIME(12, 0), CLOCK_TIME(13, 0), CLOCK_TIME(14, 0),
        CLOCK_TIME(15, 0), CLOCK_TIME(16, 0), CLOCK_TIME(17, 0), CLOCK_TIME(18, 0), CLOCK_TIME(19, 0),
        CLOCK_TIME(20, 0), CLOCK_TIME(21, 0), CLOCK_TIME(22, 0), CLOCK_TIME(23, 0), CLOCK_TIME(24, 0) - 1,
        CLOCK_TIME(0, 0),
    };
    //! @bug Because of this array missing two entries to match the length from `sThreeDayClockHours` then garbage data is used to display the current hour.
    static u64* sThreeDayClockHourTextures[] = {
        gThreeDayClockHour12Tex, gThreeDayClockHour1Tex, gThreeDayClockHour2Tex,  gThreeDayClockHour3Tex,
        gThreeDayClockHour4Tex,  gThreeDayClockHour5Tex, gThreeDayClockHour6Tex,  gThreeDayClockHour7Tex,
        gThreeDayClockHour8Tex,  gThreeDayClockHour9Tex, gThreeDayClockHour10Tex, gThreeDayClockHour11Tex,
        gThreeDayClockHour12Tex, gThreeDayClockHour1Tex, gThreeDayClockHour2Tex,  gThreeDayClockHour3Tex,
        gThreeDayClockHour4Tex,  gThreeDayClockHour5Tex, gThreeDayClockHour6Tex,  gThreeDayClockHour7Tex,
        gThreeDayClockHour8Tex,  gThreeDayClockHour9Tex, gThreeDayClockHour10Tex, gThreeDayClockHour11Tex,
    };
    static s16 sClockInvDiamondPrimRed = 0;
    static s16 sClockInvDiamondPrimGreen = 155;
    static s16 sClockInvDiamondPrimBlue = 255;
    static s16 sClockInvDiamondEnvRed = 0;
    static s16 sClockInvDiamondEnvGreen = 0;
    static s16 sClockInvDiamondEnvBlue = 0;
    static s16 sClockInvDiamondTimer = 15;
    static s16 sClockInvDiamondTargetIndex = 0;
    static s16 sClockInvDiamondPrimRedTargets[] = { 100, 0 };
    static s16 sClockInvDiamondPrimGreenTargets[] = { 205, 155 };
    static s16 sClockInvDiamondPrimBlueTargets[] = { 255, 255 };
    static s16 sClockInvDiamondEnvRedTargets[] = { 30, 0 };
    static s16 sClockInvDiamondEnvGreenTargets[] = { 30, 0 };
    static s16 sClockInvDiamondEnvBlueTargets[] = { 100, 0 };
    static s16 sFinalHoursClockDigitsRedTargets[] = { 255, 0 };
    static s16 sFinalHoursClockFrameEnvRedTargets[] = { 100, 0 };
    static s16 sFinalHoursClockFrameEnvGreenTargets[] = { 30, 0 };
    static s16 sFinalHoursClockFrameEnvBlueTargets[] = { 100, 0 };
    static u64* sFinalHoursDigitTextures[] = {
        gFinalHoursClockDigit0Tex, gFinalHoursClockDigit1Tex, gFinalHoursClockDigit2Tex, gFinalHoursClockDigit3Tex,
        gFinalHoursClockDigit4Tex, gFinalHoursClockDigit5Tex, gFinalHoursClockDigit6Tex, gFinalHoursClockDigit7Tex,
        gFinalHoursClockDigit8Tex, gFinalHoursClockDigit9Tex, gFinalHoursClockColonTex,
    };
    static s16 sFinalHoursDigitSlotPosXOffset[] = { 127, 136, 144, 151, 160, 168, 175, 184, };
    static u64* sClockDayTextures[] = { gClockDay1stTex, gClockDay2ndTex, gClockDayFinalTex };
    InterfaceContext* interfaceCtx = &play->interfaceCtx;
    MessageContext* msgCtx = &play->msgCtx;
    f32 temp_f14, sp1D8, timeInMinutes, timeInSeconds, sp1CC;
    u32 timeUntilMoonCrash;
    s16 sp1E6, hourIndex, currentHour, colorStep, index, finalHoursClockSlots[8];
    u16 time;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    if ((msgCtx->msgMode == MSGMODE_NONE || (msgCtx->textId >= 0xA000 && msgCtx->textId <= 0xA1FF)) && !Play_InCsMode(play) && gSaveContext.gameMode == GAMEMODE_NORMAL) {
        // Section: Changes Clock's transparancy depending if Player is moving or not and possibly other things
        if (gSaveContext.hudVisibilityMode == HUD_VISIBILITY_ALL) {
            if (Interface_PlayerIsMoving(play)) {
                sThreeDayClockAlpha = 80;
                sClockAlphaTimer1 = 5;
                sClockAlphaTimer2 = 20;
            } else if (sClockAlphaTimer2 != 0) {
                sClockAlphaTimer2--;
            } else if (sClockAlphaTimer1 != 0) {
                colorStep = ABS_ALT(sThreeDayClockAlpha - 255) / sClockAlphaTimer1;
                sThreeDayClockAlpha += colorStep;
                if (sThreeDayClockAlpha >= 255) {
                    sThreeDayClockAlpha = 255;
                    sClockAlphaTimer1 = 0;
                }
            } else {
                sThreeDayClockAlpha = interfaceCtx->bAlpha;
                sClockAlphaTimer2 = 0;
                sClockAlphaTimer1 = 0;
            }
        } else {
            sThreeDayClockAlpha = interfaceCtx->bAlpha;
            sClockAlphaTimer2 = 0;
            sClockAlphaTimer1 = 0;
        }

        if (!IS_PAUSED(&play->pauseCtx)) {
            Gfx_SetupDL_39Overlay(play->state.gfxCtx);

            // Section: Draw Clock's Hour Lines
            gDPSetAlphaCompare(OVERLAY_DISP++, G_AC_THRESHOLD);
            gDPSetRenderMode(OVERLAY_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 130, 130, 130, sThreeDayClockAlpha);
            gDPSetCombineLERP(OVERLAY_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);
            OVERLAY_DISP = Gfx_DrawTexRect4b(OVERLAY_DISP, gThreeDayClockHourLinesTex, 4, 64, 35, X_HIRES_MULTIPLY(96 + WS_SHIFT_HALF), HIRES_MULTIPLY(180), X_HIRES_MULTIPLY(128), HIRES_MULTIPLY(35), 1, 6, 0, X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));

            // Section: Draw Clock's Border
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 255, sThreeDayClockAlpha);
            gDPSetCombineLERP(OVERLAY_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);
            OVERLAY_DISP = Gfx_DrawTexRect4b(OVERLAY_DISP, gThreeDayClockBorderTex, 4, 64, 48, X_HIRES_MULTIPLY(96 + WS_SHIFT_HALF), HIRES_MULTIPLY(168), X_HIRES_MULTIPLY(128), HIRES_MULTIPLY(50), 1, 6, 0, X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));

            if (CURRENT_DAY == 2 && gSaveContext.save.dayTime >= (CLOCK_TIME(0, 0) + 5) && gSaveContext.save.dayTime < CLOCK_TIME(6, 0)) {
                Gfx_SetupDL_42Overlay(play->state.gfxCtx);
                gSPMatrix(OVERLAY_DISP++, &gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            } else {
                // Section: Draw Three-Day Clock's Diamond
                gDPPipeSync(OVERLAY_DISP++);

                // Time is slowed down to half speed with inverted song of time
                /*if (gSaveContext.save.timeSpeedOffset == -2) {
                    colorStep =  ABS_ALT(sClockInvDiamondPrimRed - sClockInvDiamondPrimRedTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer; // Clock diamond is blue and flashes white
                    if (sClockInvDiamondPrimRed >= sClockInvDiamondPrimRedTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondPrimRed -= colorStep;
                    else sClockInvDiamondPrimRed += colorStep;


                    colorStep = ABS_ALT(sClockInvDiamondPrimGreen - sClockInvDiamondPrimGreenTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer;
                    if (sClockInvDiamondPrimGreen >= sClockInvDiamondPrimGreenTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondPrimGreen -= colorStep;
                    else sClockInvDiamondPrimGreen += colorStep;

                    colorStep = ABS_ALT(sClockInvDiamondPrimBlue - sClockInvDiamondPrimBlueTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer;
                    if (sClockInvDiamondPrimBlue >= sClockInvDiamondPrimBlueTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondPrimBlue -= colorStep;
                    else sClockInvDiamondPrimBlue += colorStep;

                    colorStep = ABS_ALT(sClockInvDiamondEnvRed - sClockInvDiamondEnvRedTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer;
                    if (sClockInvDiamondEnvRed >= sClockInvDiamondEnvRedTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondEnvRed -= colorStep;
                    else sClockInvDiamondEnvRed += colorStep;

                    colorStep = ABS_ALT(sClockInvDiamondEnvGreen - sClockInvDiamondEnvGreenTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer;
                    if (sClockInvDiamondEnvGreen >= sClockInvDiamondEnvGreenTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondEnvGreen -= colorStep;
                    else sClockInvDiamondEnvGreen += colorStep;

                    colorStep = ABS_ALT(sClockInvDiamondEnvBlue - sClockInvDiamondEnvBlueTargets[sClockInvDiamondTargetIndex]) / sClockInvDiamondTimer;
                    if (sClockInvDiamondEnvBlue >= sClockInvDiamondEnvBlueTargets[sClockInvDiamondTargetIndex])
                        sClockInvDiamondEnvBlue -= colorStep;
                    else sClockInvDiamondEnvBlue += colorStep;
 

                    sClockInvDiamondTimer--;

                    if (sClockInvDiamondTimer == 0) {
                        sClockInvDiamondPrimRed = sClockInvDiamondPrimRedTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondPrimGreen = sClockInvDiamondPrimGreenTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondPrimBlue = sClockInvDiamondPrimBlueTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondEnvRed = sClockInvDiamondEnvRedTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondEnvGreen = sClockInvDiamondEnvGreenTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondEnvBlue = sClockInvDiamondEnvBlueTargets[sClockInvDiamondTargetIndex];
                        sClockInvDiamondTimer = 15;
                        sClockInvDiamondTargetIndex ^= 1;
                    }

                    gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
                    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, sClockInvDiamondPrimRed, sClockInvDiamondPrimGreen, 255, sThreeDayClockAlpha);
                    gDPSetEnvColor(OVERLAY_DISP++, sClockInvDiamondEnvRed, sClockInvDiamondEnvGreen, sClockInvDiamondEnvBlue, 0);
                } else {*/
                    // Clock diamond is green for regular timeSpeedOffset
                    gDPSetCombineMode(OVERLAY_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 0, 170, 100, sThreeDayClockAlpha);
                //}

                OVERLAY_DISP = Gfx_TextureIA8(OVERLAY_DISP, gThreeDayClockDiamondTex, 40, 32, X_HIRES_MULTIPLY(140 + WS_SHIFT_HALF), HIRES_MULTIPLY(190), X_HIRES_MULTIPLY(40), HIRES_MULTIPLY(32), X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));

                // Section: Draw Three-Day Clock's Day-Number over Diamond
                gDPPipeSync(OVERLAY_DISP++);
                gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 155, sThreeDayClockAlpha);
                OVERLAY_DISP = Gfx_TextureIA8(OVERLAY_DISP, sClockDayTextures[MIN(CURRENT_DAY, ARRAY_COUNT(sClockDayTextures) - 1)], 48, 27, X_HIRES_MULTIPLY(137 + WS_SHIFT_HALF), HIRES_MULTIPLY(192), X_HIRES_MULTIPLY(48), HIRES_MULTIPLY(27), X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));
                
                // Section: Draw Three-Day Clock's Star (for the Minute Tracker)
                gDPPipeSync(OVERLAY_DISP++);
                if (sThreeDayClockStarMinuteGlowDirection != 0) {
                    sThreeDayClockStarMinuteScale += 0.02f;
                    sThreeDayClockStarMinuteGlowAlpha += 11;
                } else {
                    sThreeDayClockStarMinuteScale -= 0.02f;
                    sThreeDayClockStarMinuteGlowAlpha -= 11;
                }

                sThreeDayClockStarMinuteGlowTimer--;
                if (sThreeDayClockStarMinuteGlowTimer == 0) { // When the timer runs out, flip the glow/scale direction
                    sThreeDayClockStarMinuteGlowTimer = 10;
                    sThreeDayClockStarMinuteGlowDirection ^= 1;
                }

                timeInSeconds = TIME_TO_SECONDS_F(gSaveContext.save.dayTime);
                timeInSeconds -= TRUNCF_BINANG(timeInSeconds / 3600.0f) * 3600.0f;
                Gfx_SetupDL_42Overlay(play->state.gfxCtx);
                gSPMatrix(OVERLAY_DISP++, &gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

                if (sThreeDayClockAlpha != 255) {
                    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 110, sThreeDayClockAlpha);
                } else {
                    gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 110, sThreeDayClockStarMinuteGlowAlpha);
                }

                gDPSetCombineMode(OVERLAY_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                gDPSetAlphaCompare(OVERLAY_DISP++, G_AC_THRESHOLD);
                gDPSetRenderMode(OVERLAY_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);

                Matrix_Translate(0.0f, -86.0f, 0.0f, MTXMODE_NEW);
                Matrix_Scale(1.0f, 1.0f, sThreeDayClockStarMinuteScale, MTXMODE_APPLY);
                Matrix_RotateZF(-(timeInSeconds * 0.0175f) / 10.0f, MTXMODE_APPLY);

                MATRIX_FINALIZE_AND_LOAD(OVERLAY_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
                gSPVertex(OVERLAY_DISP++, &interfaceCtx->actionVtx[12], 4, 0);
                gDPLoadTextureBlock_4b(OVERLAY_DISP++, gThreeDayClockStarMinuteTex, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSP1Quadrangle(OVERLAY_DISP++, 0, 2, 3, 1, 0);
            }

            // Section: Cuts off Three-Day Clock's Sun and Moon when they dip below the clock
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetScissorFrac(OVERLAY_DISP++, G_SC_NON_INTERLACE, 100 << 2, 155 << 2, (SCREEN_WIDTH - 100) << 2, R_THREE_DAY_CLOCK_SUN_MOON_CUTOFF * 4.0f);

            // determines the current hour
            for (hourIndex = 0; hourIndex < ARRAY_COUNT(sThreeDayClockHours) - 1; hourIndex++) {
                //! @bug When this loop iterates to the end without a break, this results in `hourIndex` being 25, leading to an OOB read for `sThreeDayClockHourTextures` because that array and `sThreeDayClockHours` do not have the same length. In practice, this occurs for two frames changing between hours 23 to 24.
                if (gSaveContext.save.dayTime < sThreeDayClockHours[hourIndex + 1])
                    break;
            }

            // Section: Draw Three-Day Clock's Sun (for the Day-Time Hours Tracker)
            time = gSaveContext.save.dayTime;
            sp1D8 = Math_SinS(time) * -40.0f;
            temp_f14 = Math_CosS(time) * -34.0f;
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetCombineMode(OVERLAY_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 100, 110, sThreeDayClockAlpha);
            Matrix_Translate(sp1D8, temp_f14, 0.0f, MTXMODE_NEW);
            Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(OVERLAY_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
            gSPVertex(OVERLAY_DISP++, &interfaceCtx->actionVtx[16], 4, 0);
            OVERLAY_DISP = Gfx_DrawTexQuadIA8(OVERLAY_DISP, gThreeDayClockSunHourTex, 24, 24, 0);

            // Section: Draw Three-Day Clock's Moon (for the Night-Time Hours Tracker)
            sp1D8 = Math_SinS(time) * 40.0f;
            temp_f14 = Math_CosS(time) * 34.0f;
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetCombineMode(OVERLAY_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 55, sThreeDayClockAlpha);
            Matrix_Translate(sp1D8, temp_f14, 0.0f, MTXMODE_NEW);
            Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(OVERLAY_DISP++, play->state.gfxCtx, __FILE__, __LINE__);
            gSPVertex(OVERLAY_DISP++, &interfaceCtx->actionVtx[20], 4, 0);
            OVERLAY_DISP = Gfx_DrawTexQuadIA8(OVERLAY_DISP, gThreeDayClockMoonHourTex, 24, 24, 0);

            // Section: Cuts off Three-Day Clock's Hour Digits when they dip below the clock
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetScissorFrac(OVERLAY_DISP++, G_SC_NON_INTERLACE, 100 << 2, 155 << 2, (SCREEN_WIDTH - 100) << 2, R_THREE_DAY_CLOCK_HOUR_DIGIT_CUTOFF * 4.0f);

            // Section: Draws Three-Day Clock's Hour Digit Above the Sun
            sp1CC = gSaveContext.save.dayTime * 0.000096131f; // (2.0f * 3.15f / 0x10000)

            // Rotates Three-Day Clock's Hour Digit To Above the Sun
            Matrix_Translate(0.0f, R_THREE_DAY_CLOCK_Y_POS / 10.0f, 0.0f, MTXMODE_NEW);
            Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
            Matrix_RotateZF(-(sp1CC - 3.15f), MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(OVERLAY_DISP++, play->state.gfxCtx, __FILE__, __LINE__);

            // Draws Three-Day Clock's Hour Digit Above the Sun
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetCombineLERP(OVERLAY_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 0, 0, 0, sThreeDayClockAlpha);
            gSPVertex(OVERLAY_DISP++, &interfaceCtx->actionVtx[24], 8, 0);
            OVERLAY_DISP = Gfx_DrawTexQuad4b(OVERLAY_DISP, sThreeDayClockHourTextures[hourIndex], G_IM_FMT_I, 16, 11, 0);

            // Colours the Three-Day Clocks's Hour Digit Above the Sun
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 155, sThreeDayClockAlpha);
            gSP1Quadrangle(OVERLAY_DISP++, 4, 6, 7, 5, 0);

            // Section: Draws Three-Day Clock's Hour Digit Above the Moon
            // Rotates Three-Day Clock's Hour Digit To Above the Moon
            Matrix_Translate(0.0f, R_THREE_DAY_CLOCK_Y_POS / 10.0f, 0.0f, MTXMODE_NEW);
            Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
            Matrix_RotateZF(-sp1CC, MTXMODE_APPLY);
            MATRIX_FINALIZE_AND_LOAD(OVERLAY_DISP++, play->state.gfxCtx, __FILE__, __LINE__);

            // Draws Three-Day Clock's Hour Digit Above the Moon
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetCombineLERP(OVERLAY_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 0, 0, 0, sThreeDayClockAlpha);
            gSPVertex(OVERLAY_DISP++, &interfaceCtx->actionVtx[32], 8, 0);
            OVERLAY_DISP = Gfx_DrawTexQuad4b(OVERLAY_DISP, sThreeDayClockHourTextures[hourIndex], G_IM_FMT_I, 16, 11, 0);

            // Colours the Three-Day Clocks's Hour Digit Above the Moon
            gDPPipeSync(OVERLAY_DISP++);
            gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 155, sThreeDayClockAlpha);
            gSP1Quadrangle(OVERLAY_DISP++, 4, 6, 7, 5, 0);
            gDPSetScissor(OVERLAY_DISP++, G_SC_NON_INTERLACE, 0, 0, gScreenWidth, gScreenHeight);

            // Final Hours
            if (CURRENT_DAY == 2 && gSaveContext.save.dayTime >= (CLOCK_TIME(0, 0) + 5) && gSaveContext.save.dayTime < CLOCK_TIME(6, 0)) {
                if (gSaveContext.save.dayTime >= CLOCK_TIME(5, 0)) {
                    // The Final Hours clock will flash red

                    colorStep = ABS_ALT(sFinalHoursClockDigitsRed - sFinalHoursClockDigitsRedTargets[sFinalHoursClockColorTargetIndex]) / sFinalHoursClockColorTimer;
                    if (sFinalHoursClockDigitsRed >=
                        sFinalHoursClockDigitsRedTargets[sFinalHoursClockColorTargetIndex]) {
                        sFinalHoursClockDigitsRed -= colorStep;
                    } else sFinalHoursClockDigitsRed += colorStep;

                    colorStep = ABS_ALT(sFinalHoursClockFrameEnvRed - sFinalHoursClockFrameEnvRedTargets[sFinalHoursClockColorTargetIndex]) / sFinalHoursClockColorTimer;
                    if (sFinalHoursClockFrameEnvRed >=
                        sFinalHoursClockFrameEnvRedTargets[sFinalHoursClockColorTargetIndex]) {
                        sFinalHoursClockFrameEnvRed -= colorStep;
                    } else sFinalHoursClockFrameEnvRed += colorStep;

                    colorStep = ABS_ALT(sFinalHoursClockFrameEnvGreen - sFinalHoursClockFrameEnvGreenTargets[sFinalHoursClockColorTargetIndex]) / sFinalHoursClockColorTimer;
                    if (sFinalHoursClockFrameEnvGreen >=
                        sFinalHoursClockFrameEnvGreenTargets[sFinalHoursClockColorTargetIndex]) {
                        sFinalHoursClockFrameEnvGreen -= colorStep;
                    } else sFinalHoursClockFrameEnvGreen += colorStep;

                    colorStep = ABS_ALT(sFinalHoursClockFrameEnvBlue - sFinalHoursClockFrameEnvBlueTargets[sFinalHoursClockColorTargetIndex]) / sFinalHoursClockColorTimer;
                    if (sFinalHoursClockFrameEnvBlue >=
                        sFinalHoursClockFrameEnvBlueTargets[sFinalHoursClockColorTargetIndex]) {
                        sFinalHoursClockFrameEnvBlue -= colorStep;
                    } else sFinalHoursClockFrameEnvBlue += colorStep;

                    sFinalHoursClockColorTimer--;

                    if (sFinalHoursClockColorTimer == 0) {
                        sFinalHoursClockDigitsRed = sFinalHoursClockDigitsRedTargets[sFinalHoursClockColorTargetIndex];
                        sFinalHoursClockFrameEnvRed = sFinalHoursClockFrameEnvRedTargets[sFinalHoursClockColorTargetIndex];
                        sFinalHoursClockFrameEnvGreen = sFinalHoursClockFrameEnvGreenTargets[sFinalHoursClockColorTargetIndex];
                        sFinalHoursClockFrameEnvBlue = sFinalHoursClockFrameEnvBlueTargets[sFinalHoursClockColorTargetIndex];
                        sFinalHoursClockColorTimer = 6;
                        sFinalHoursClockColorTargetIndex ^= 1;
                    }
                }

                sp1E6 = sThreeDayClockAlpha;
                if (sp1E6 != 0)
                    sp1E6 = 255;

                Gfx_SetupDL_39Overlay(play->state.gfxCtx);

                // Section: Draws Final-Hours Clock's Frame
                gSPMatrix(OVERLAY_DISP++, &gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                gDPSetAlphaCompare(OVERLAY_DISP++, G_AC_THRESHOLD);
                gDPSetRenderMode(OVERLAY_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
                gDPSetCombineLERP(OVERLAY_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
                gDPSetPrimColor(OVERLAY_DISP++, 0, 0, 255, 255, 195, sp1E6);
                gDPSetEnvColor(OVERLAY_DISP++, sFinalHoursClockFrameEnvRed, sFinalHoursClockFrameEnvGreen, sFinalHoursClockFrameEnvBlue, 0);
                OVERLAY_DISP = Gfx_DrawTexRect4b(OVERLAY_DISP, gFinalHoursClockFrameTex, 3, 80, 13, X_HIRES_MULTIPLY(119 + WS_SHIFT_HALF), HIRES_MULTIPLY(202), X_HIRES_MULTIPLY(80), HIRES_MULTIPLY(13), 0, 0, 0, X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));
                timeUntilMoonCrash = TIME_UNTIL_CHALLENGE_END;
                timeInMinutes = TIME_TO_MINUTES_F(timeUntilMoonCrash);

                // digits for hours
                finalHoursClockSlots[0] = 0;
                finalHoursClockSlots[1] = timeInMinutes / 60.0f;
                finalHoursClockSlots[2] = timeInMinutes / 60.0f;

                while (finalHoursClockSlots[1] >= 10) {
                    finalHoursClockSlots[0]++;
                    finalHoursClockSlots[1] -= 10;
                }

                // digits for minutes
                finalHoursClockSlots[3] = 0;
                finalHoursClockSlots[4] = (s32)timeInMinutes % 60;
                finalHoursClockSlots[5] = (s32)timeInMinutes % 60;

                while (finalHoursClockSlots[4] >= 10) {
                    finalHoursClockSlots[3]++;
                    finalHoursClockSlots[4] -= 10;
                }

                // digits for seconds
                finalHoursClockSlots[6] = 0;
                finalHoursClockSlots[7] = timeUntilMoonCrash - (u32)((finalHoursClockSlots[2] * ((f32)0x10000 / 24)) + (finalHoursClockSlots[5] * ((f32)0x10000 / (24 * 60))));

                while (finalHoursClockSlots[7] >= 10) {
                    finalHoursClockSlots[6]++;
                    finalHoursClockSlots[7] -= 10;
                }

                // Colon separating hours from minutes and minutes from seconds
                finalHoursClockSlots[2] = finalHoursClockSlots[5] = 10;

                // Section: Draws Final-Hours Clock's Digits
                gDPPipeSync(OVERLAY_DISP++);
                gDPSetPrimColor(OVERLAY_DISP++, 0, 0, sFinalHoursClockDigitsRed, 0, 0, sp1E6);
                gDPSetEnvColor(OVERLAY_DISP++, sFinalHoursClockDigitsRed, 0, 0, 0);

                for (hourIndex=0; hourIndex < ARRAY_COUNT(sFinalHoursDigitSlotPosXOffset); hourIndex++) {
                    index = sFinalHoursDigitSlotPosXOffset[hourIndex];
                    OVERLAY_DISP = Gfx_TextureI8(OVERLAY_DISP, sFinalHoursDigitTextures[finalHoursClockSlots[hourIndex]], 8, 8, X_HIRES_MULTIPLY(index + WS_SHIFT_HALF), HIRES_MULTIPLY(205), X_HIRES_MULTIPLY(8), HIRES_MULTIPLY(8), X_HIRES_DIVIDE(1 << 10), HIRES_DIVIDE(1 << 10));
                }
            }
        }
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
