#

TARGET_DIR=/usr/local/rplidar_sdk
MKDIR=mkdir -p
CP=cp

install:
	$(MKDIR) $(TARGET_DIR)/cmake
	$(MKDIR) $(TARGET_DIR)/include/hal
	$(MKDIR) $(TARGET_DIR)/lib
	$(CP) output/Linux/Release/*.a  $(TARGET_DIR)/lib
	$(CP) sdk/include/*.h  $(TARGET_DIR)/include
	$(CP) sdk/src/hal/types.h  $(TARGET_DIR)/include/hal
	$(CP) cmake/rplidar_sdk-config.cmake.in $(TARGET_DIR)/cmake/rplidar_sdk-config.cmake

