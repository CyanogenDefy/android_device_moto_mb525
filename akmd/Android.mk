LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm

LOCAL_SRC_FILES := Akmd.cpp Calibrator.cpp main.cpp \
    math/Matrix.cpp math/Vector.cpp \
    device/AKM8973_2_6_29.cpp \
    device/KXTF9.cpp \
    device/BMA150.cpp \
    device/OrientationAdapter.cpp device/TemperatureReaderAdapter.cpp

#LOCAL_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES := liblog libcutils

LOCAL_MODULE := akmd.jordan
LOCAL_MODULE_STEM := akmd.free
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)

