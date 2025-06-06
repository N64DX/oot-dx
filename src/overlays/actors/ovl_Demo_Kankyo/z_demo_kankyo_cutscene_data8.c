#include "z_demo_kankyo.h"
#include "cutscene_commands.h"

// clang-format off
CutsceneData gChildWarpOutToTCS[] = {
    CS_HEADER(5, 1120),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_OUT, 36, 46),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_IN, 30, 35),
    CS_CAM_EYE_SPLINE_REL_TO_PLAYER(0, 1091),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CAA, 60.324867f), 41, 75, 49, 0x1F1C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CAA, 60.324867f), 41, 75, 49, 0x1F8C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CAA, 60.324867f), 41, 75, 49, 0x1FFC),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CAA, 60.324867f), 41, 75, 49, 0x206C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42714CAA, 60.324867f), 41, 75, 49, 0x20DC),
    CS_CAM_AT_SPLINE_REL_TO_PLAYER(0, 1120),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CAA, 60.324867f), 24, 52, 29, 0x1F1C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CAA, 60.324867f), 24, 52, 29, 0x1F8C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 1000, CS_FLOAT(0x42714CAA, 60.324867f), 24, 52, 29, 0x1FFC),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CAA, 60.324867f), 24, 52, 29, 0x206C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42714CAA, 60.324867f), 24, 52, 29, 0x20DC),
    CS_MISC_LIST(1),
        CS_MISC(CS_MISC_STOP_CUTSCENE, 95, 96, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFDF, 0x00000019, 0x00000000, 0xFFFFFFDF, 0x00000019, 0x00000000, 0x00000000, 0x00000000),
    CS_END_OF_SCRIPT(),
};
// clang-format on
