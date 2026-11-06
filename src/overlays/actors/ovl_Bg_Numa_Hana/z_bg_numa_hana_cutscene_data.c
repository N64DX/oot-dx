#include "cutscene_commands.h"

static CutsceneData gWoodfallTempleCs[] = {
    CS_HEADER(2, 180),
    CS_CAM_EYE_SPLINE(0, 180),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 75.0f), 316, -1005, 242, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 75.0f), 316, -1005, 242, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 75.0f), 316, -1005, 242, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x0, 75.0f), 316, -1005, 242, 0),
        CS_CAM_POINT(CS_CAM_STOP, 0, 0, CS_FLOAT(0x0, 75.0f), 316, -1005, 242, 0),
    CS_CAM_AT_SPLINE(0, 180),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42960000, 75.0f), 0, -1385, 0, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42960000, 75.0f), 0, -1385, 0, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42960000, 75.0f), 0, -1385, 0, 0),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, CS_FLOAT(0x42960000, 75.0f), 0, -1385, 0, 0),
        CS_CAM_POINT(CS_CAM_STOP, 0, 0, CS_FLOAT(0x42960000, 75.0f), 0, -1385, 0, 0),
    CS_END_OF_SCRIPT(),
};

static CutsceneData* cutscenes[] = { gWoodfallTempleCs };
