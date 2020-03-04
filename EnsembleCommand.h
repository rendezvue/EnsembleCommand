#ifndef _RENDEZVUE_COMMAND_H_
#define _RENDEZVUE_COMMAND_H_

enum Comand
{
    ENSEMBLE_COMMAND_START,

    ENSEMBLE_COMMAND_NETWORK_IS_ONLINE,

	ENSEMBLE_COMMAND_SOURCE_START,
	ENSEMBLE_GET_SOURCE_LIST,
	ENSEMBLE_SET_SOURCE,
	ENSEMBLE_COMMAND_SOURCE_END,

#if 0
	ENSEMBLE_COMMAND_TRIGGER_START,	
	ENSEMBLE_TRIGGER_PRJ_RUN,
	ENSEMBLE_COMMAND_TRIGGER_END,	
#endif

	ENSEMBLE_COMMAND_GETIMAGE_START,	
	ENSEMBLE_GET_IMAGE,
	ENSEMBLE_GET_IMAGE_RESULT,
	ENSEMBLE_JOB_GET_IMAGE,
	ENSEMBLE_JOB_GET_OBJECT_IMAGE,
	ENSEMBLE_JOB_GET_IMAGE_RESULT,
	ENSEMBLE_JOB_CALIBRATION_GET_IMAGE ,
	ENSEMBLE_TOOL_GET_IMAGE,
	ENSEMBLE_TOOL_GET_OBJECT_IMAGE,
	ENSEMBLE_TOOL_OPTION_GET_IMAGE,
	ENSEMBLE_TOOL_OPTION_INSPECT_COLOR_GET_HISTOGRAM_IMAGE ,
	ENSEMBLE_PRJ_GET_IMAGE_RESULT,
	ENSEMBLE_COMMAND_GETIMAGE_END,

	ENSEMBLE_COMMAND_TACK_COMMON_START,
	ENSEMBLE_TASK_GET_PARENT_TREE,
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
    ENSEMBLE_PRJ_GET_JOB_INFO,
	ENSEMBLE_PRJ_SET_NAME,
	ENSEMBLE_PRJ_SET_TRIGGER_RUN,
	ENSEMBLE_PRJ_GET_TRIGGER_RUN,
	ENSEMBLE_PRJ_RUN,
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
    ENSEMBLE_JOB_SET_ERASE,
    ENSEMBLE_JOB_DEL_ERASE,
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
	ENSEMBLE_JOB_CALIBRATION_COPY ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_RUN ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_IMAGE_COUNT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_INIT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_FEATURE_POSE ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_SET_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_GET_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_CALC_CALIB_MAT ,
	ENSEMBLE_JOB_CALIBRATION_STANDALONE_SET_DIRECTION ,
	ENSEMBLE_COMMAND_CALIBRATION_END,

	ENSEMBLE_COMMAND_CAMERA_START,
	ENSEMBLE_CAMERA_SET_READY,
	ENSEMBLE_CAMERA_SET_AUTO_EXPOSURE,
	ENSEMBLE_CAMERA_SET_MANUAL_EXPOSURE_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_EXPOSURE_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_EXPOSURE_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_EXPOSURE_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_GAIN_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_GAIN_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_GAIN_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_GAIN_VALUE,
	ENSEMBLE_CAMERA_SET_AUTO_FOCUS,
	ENSEMBLE_CAMERA_GET_AUTO_FOCUS_AREA,
	ENSEMBLE_CAMERA_SET_MANUAL_FOCUS_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_FOCUS_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_FOCUS_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_FOCUS_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_BRIGHTNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_BRIGHTNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_BRIGHTNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_BRIGHTNESS_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_SHARPNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_SHARPNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_SHARPNESS_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_SHARPNESS_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_CONTRAST_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_CONTRAST_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_CONTRAST_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_CONTRAST_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_ISO_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_ISO_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_ISO_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_ISO_VALUE,
	ENSEMBLE_CAMERA_SET_MANUAL_SHUTTER_SPEED_VALUE,
	ENSEMBLE_CAMERA_GET_MANUAL_SHUTTER_SPEED_VALUE,
	ENSEMBLE_CAMERA_GET_MIN_SHUTTER_SPEED_VALUE,
	ENSEMBLE_CAMERA_GET_MAX_SHUTTER_SPEED_VALUE,
	ENSEMBLE_CAMERA_SET_FLIP_V,
	ENSEMBLE_CAMERA_GET_FLIP_V,
	ENSEMBLE_CAMERA_SET_FLIP_H,
	ENSEMBLE_CAMERA_GET_FLIP_H,
	ENSEMBLE_CAMERA_SET_FACTORY_RESET,
	ENSEMBLE_CAMERA_SET_CONFIG_RUN,
	ENSEMBLE_CAMERA_CAPTURE_SW_TRIGGER,
	ENSEMBLE_COMMAND_CAMERA_END,

	ENSEMBLE_COMMAND_DIGITAL_IO_START,
	ENSEMBLE_DIGITAL_IO_GET_IN,
	ENSEMBLE_DIGITAL_IO_SET_OUT,
	ENSEMBLE_COMMAND_DIGITAL_IO_END,
	
	ENSEMBLE_COMMAND_TOOL_START,
	ENSEMBLE_GET_TOOL_LIST,
	ENSEMBLE_GET_TOOL_TYPE_NAME,
	ENSEMBLE_TOOL_ADD,
	ENSEMBLE_TOOL_INSERT,
	ENSEMBLE_TOOL_MOVE,
	ENSEMBLE_TOOL_DEL,
	ENSEMBLE_TOOL_GET_NAME,
	ENSEMBLE_TOOL_SET_NAME,
	ENSEMBLE_TOOL_SET_MASK,
    ENSEMBLE_TOOL_UNDO_MASK,
    ENSEMBLE_TOOL_DEL_MASK,
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
	ENSEMBLE_TOOL_DETECT_LINE_SELECT_ROTATED_OBJECT,
    ENSEMBLE_TOOL_DETECT_OBJCT_GET_INSPECT_TOLERANCE_INFO,
    ENSEMBLE_TOOL_DETECT_OBJCT_SET_INSPECT_TOLERANCE_INFO,
    ENSEMBLE_TOOL_DETECT_CODE_GET_CODE_TYPE,
    ENSEMBLE_TOOL_DETECT_CODE_GET_CODE_DATA,
    ENSEMBLE_TOOL_DETECT_CODE_GET_PADDING,
    ENSEMBLE_TOOL_DETECT_CODE_SET_PADDING,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_GET_DIRECTION,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_SET_DIRECTION,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_GET_REGION,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_SET_REGION,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_GET_INSPECT_BASE_INFO,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_GET_INSPECT_TOLERANCE_INFO,
    ENSEMBLE_TOOL_OFFSET_DISTANCE_SET_INSPECT_TOLERANCE_INFO ,
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

    ENSEMBLE_UPDATE_START,
    ENSEMBLE_UPDATE_GET_VERSION_LIST,
    ENSEMBLE_UPDATE_SET_VERSION,
    ENSEMBLE_UPDATE_END,

	ENSEMBLE_COMMAND_END
};

#endif
