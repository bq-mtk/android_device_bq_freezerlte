LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE       := agps_profiles_conf2.xml
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := agps_profiles_conf2.xml
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := slp_conf
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := slp_conf
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)
