#include "cutscene_commands.h"

static CutsceneData gStoneTowerTemple1Cs[] = {
    CS_HEADER(2, 60),
    CS_CAM_EYE_SPLINE(0, 60),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 0.0f), -810, 30, -780, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 0.0f), -810, 30, -780, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 0.0f), -810, 30, -780, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 0.0f), -810, 30, -780, 0),
        CS_CAM_POINT(CS_CAM_STOP, 0, 0, CS_FLOAT(0x0, 0.0f), -810, 30, -780, 0),
    CS_CAM_AT_SPLINE(0, 60),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42700000, 60.0f), -810, 159, -1262, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42700000, 60.0f), -810, 159, -1262, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42700000, 60.0f), -810, 159, -1262, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42700000, 60.0f), -810, 159, -1262, 0),
        CS_CAM_POINT(CS_CAM_STOP, 0, 0, CS_FLOAT(0x42700000, 60.0f), -810, 159, -1262, 0),
    CS_END_OF_SCRIPT(),
};

static CutsceneData* cutscenes[] = { gStoneTowerTemple1Cs };
