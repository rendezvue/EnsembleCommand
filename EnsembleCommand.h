#ifndef _RENDEZVUE_COMMAND_H_
#define _RENDEZVUE_COMMAND_H_

enum Comand
{
    ENSEMBLE_COMMAND_START,

    ENSEMBLE_COMMAND_NETWORK_IS_ONLINE,

	ENSEMBLE_COMMAND_SOURCE_START,
	ENSEMBLE_GET_SOURCE_LIST,
	ENSEMBLE_SET_SOURCE,
	ENSEMBLE_GET_IMAGE_RESULT,
	ENSEMBLE_COMMAND_SOURCE_END,

	ENSEMBLE_COMMAND_GETIMAGE_START,	
	ENSEMBLE_GET_IMAGE,
	ENSEMBLE_JOB_GET_IMAGE,
	ENSEMBLE_JOB_GET_OBJECT_IMAGE,
	ENSEMBLE_JOB_GET_IMAGE_RESULT,
	ENSEMBLE_JOB_CALIBRATION_GET_IMAGE ,
	ENSEMBLE_TOOL_GET_IMAGE,
	ENSEMBLE_TOOL_GET_OBJECT_IMAGE,
	ENSEMBLE_TOOL_OPTION_GET_IMAGE,
	ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_HISTOGRAM_IMAGE ,
	ENSEMBLE_COMMAND_GETIMAGE_END,

	ENSEMBLE_COMMAND_TACK_COMMON_START,
	ENSEMBLE_TASK_GET_RUN_OPTION,
	ENSEMBLE_TASK_SET_RUN_OPTION,
	ENSEMBLE_TASK_GET_VIEW_OPTION,
	ENSEMBLE_TASK_SET_VIEW_OPTION,
	ENSEMBLE_TASK_SAVE,
	ENSEMBLE_TASK_LOAD,
	ENSEMBLE_COMMAND_TACK_COMMON_END,

	ENSEMBLE_COMMAND_PROJECT_START,
    ENSEMBLE_PRJ_NEW,
    ENSEMBLE_PRJ_DEL,
    ENSEMBLE_PRJ_GET_LIST,
    ENSEMBLE_PRJ_GET_NAME,
	ENSEMBLE_PRJ_SET_NAME,
	ENSEMBLE_PRJ_RUN,
	ENSEMBLE_PRJ_GET_IMAGE_RESULT,
    ENSEMBLE_COMMAND_PROJECT_END, 

	ENSEMBLE_COMMAND_JOB_START,
	ENSEMBLE_JOB_TYPE_GET_LIST,
    ENSEMBLE_JOB_NEW,
    ENSEMBLE_JOB_GET_TYPE_NAME,
    ENSEMBLE_JOB_GET_NAME,
    ENSEMBLE_JOB_SET_NAME,
    ENSEMBLE_JOB_SET_IMAGE,
    ENSEMBLE_JOB_DEL,
    ENSEMBLE_JOB_SET_DETECT_AREA,
    ENSEMBLE_JOB_SET_ZOOM,
    ENSEMBLE_JOB_SET_MASK,
    ENSEMBLE_JOB_UNDO_MASK,
    ENSEMBLE_JOB_DEL_MASK,
    ENSEMBLE_JOB_GET_FEATURE_LEVEL,
    ENSEMBLE_JOB_SET_FEATURE_LEVEL,
    ENSEMBLE_JOB_GET_USE_CUSTOM_FEATURE_OPTION,
    ENSEMBLE_JOB_SET_USE_CUSTOM_FEATURE_OPTION,
    ENSEMBLE_JOB_GET_FEATURE_OPTION,
    ENSEMBLE_JOB_SET_FEATURE_OPTION,
    ENSEMBLE_JOB_SELECT_OBJECT,
    ENSEMBLE_JOB_SET_DETECT_OPTION,
    ENSEMBLE_JOB_GET_DETECT_OPTION,
    ENSEMBLE_JOB_RESET_OBJECT,
    ENSEMBLE_JOB_SET_REF_POINT,
    ENSEMBLE_JOB_DEL_REF_POINT,
	ENSEMBLE_JOB_RUN,
	ENSEMBLE_COMMAND_JOB_END,

	ENSEMBLE_COMMAND_CALIBRATION_START,
	ENSEMBLE_JOB_CALIBRATION_SET_CHESS_INFO ,
	ENSEMBLE_JOB_CALIBRATION_GET_CHESS_INFO ,
	ENSEMBLE_JOB_CALIBRATION_ADD ,
	ENSEMBLE_JOB_CALIBRATION_GET_COUNT ,
	
	ENSEMBLE_JOB_CALIBRATION_GET_INFO ,
	ENSEMBLE_JOB_CALIBRATION_DEL ,
	ENSEMBLE_JOB_CALIBRATION_CLEAR ,
	ENSEMBLE_JOB_CALIBRATION_RUN ,
	ENSEMBLE_JOB_CALIBRATION_SET_CUSTOM_CENTER_POINT ,
	ENSEMBLE_JOB_CALIBRATION_GET_POINT ,
	ENSEMBLE_JOB_CALIBRATION_GET_CHESSPOINT ,
	ENSEMBLE_JOB_CALIBRATION_IS_OK ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_RUN ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_IMAGE_COUNT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_INIT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_FEATURE_POSE ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_SET_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_CALC_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_SET_DIRECTION ,
	ENSEMBLE_COMMAND_CALIBRATION_END,

	ENSEMBLE_COMMAND_TOOL_START,
	ENSEMBLE_GET_TOOL_LIST,
	ENSEMBLE_GET_TOOL_TYPE_NAME,
	ENSEMBLE_TOOL_ADD,
	ENSEMBLE_TOOL_INSERT,
	ENSEMBLE_TOOL_MOVE,
	ENSEMBLE_TOOL_DEL,
	ENSEMBLE_TOOL_GET_NAME,
	ENSEMBLE_TOOL_SET_NAME,
	ENSEMBLE_TOOL_GET_FEATURE_LEVEL,
    ENSEMBLE_TOOL_SET_FEATURE_LEVEL,
    ENSEMBLE_TOOL_GET_USE_CUSTOM_FEATURE_OPTION,
    ENSEMBLE_TOOL_SET_USE_CUSTOM_FEATURE_OPTION,
    ENSEMBLE_TOOL_GET_FEATURE_OPTION,
    ENSEMBLE_TOOL_SET_FEATURE_OPTION,
	ENSEMBLE_TOOL_SELECT_OBJECT,
	ENSEMBLE_TOOL_SET_REF_POINT,
    ENSEMBLE_TOOL_DEL_REF_POINT,
	ENSEMBLE_TOOL_SELECT_ROTATED_OBJECT,
	ENSEMBLE_TOOL_SET_DETECT_OPTION,
    ENSEMBLE_TOOL_GET_DETECT_OPTION,
    ENSEMBLE_TOOL_OPTION_GET_LIST,
    ENSEMBLE_TOOL_OPTION_GET_LIST_COUNT,
    ENSEMBLE_TOOL_OPTION_ADD_NEW,
    ENSEMBLE_TOOL_OPTION_DEL,
    ENSEMBLE_TOOL_OPTION_INSPECT_CRACK_GET_INSPECT_LEVEL,
    ENSEMBLE_TOOL_OPTION_INSPECT_CRACK_SET_INSPECT_LEVEL,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_SET_HISTOGRAM_USE_ELEMENT,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_HISTOGRAM_USE_ELEMENT,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_SET_HISTOGRAM_RANGE,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_HISTOGRAM_RANGE,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_BASE_PIXEL_COUNT,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_SET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_DISTANCE_SET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_DISTANCE_GET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_DISTANCE_GET_ID_INFO_BASE,
    ENSEMBLE_TOOL_OPTION_INSPECT_DISTANCE_GET_ID_INFO_TARGET,
    ENSEMBLE_TOOL_OPTION_INSPECT_ANGLE_SET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_ANGLE_GET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_ANGLE_GET_ID_INFO_BASE,
    ENSEMBLE_TOOL_OPTION_INSPECT_ANGLE_GET_ID_INFO_TARGET,
    ENSEMBLE_TOOL_OPTION_INSPECT_DIAMETER_SET_TOLERANCE,
    ENSEMBLE_TOOL_OPTION_INSPECT_DIAMETER_GET_TOLERANCE,
    ENSEMBLE_TOOL_CIRCLE_GET_CALC_DIAMETER,
    ENSEMBLE_COMMAND_TOOL_END ,

	ENSEMBLE_COMMAND_END
};

#endif
