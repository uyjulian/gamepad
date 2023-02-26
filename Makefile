
SOURCES += Main.cpp src/GamePadDeviceInspector.cpp src/GamePadDirectInputDevice.cpp src/GamePadDirectInputMappingDB.cpp src/GamePadForceFeedbackDevice.cpp src/GamePadInputDevicePort.cpp src/GamePadLog.cpp src/GamePadUtil.cpp src/GamePadXInputDevice.cpp src/GamepadInputContext.cpp

INCFLAGS += -I./src

LDLIBS += -lole32 -loleaut32 -luuid

PROJECT_BASENAME = gamepad

include external/tp_stubz/Rules.lib.make
