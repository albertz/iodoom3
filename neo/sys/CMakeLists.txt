CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT (sys)

# Only linux version at this moment
FIND_PACKAGE (Threads REQUIRED)

IF(APPLE AND (${CMAKE_SYSTEM_NAME} MATCHES "Darwin"))
ADD_DEFINITIONS(-DMACOS_X=1)
SET (sys_SOURCES
	sys_local.cpp
	posix/posix_net.cpp
	posix/posix_main.cpp
	posix/posix_signal.cpp
	posix/posix_threads.cpp
	osx/DOOMController.mm
	osx/macosx_event.mm
	osx/macosx_glimp.mm
	osx/macosx_guids.cpp
	osx/macosx_sound.cpp
	osx/macosx_sys.mm
	osx/macosx_utils.mm
	osx/macosx_misc.mm
	osx/PickMonitor.cpp
	osx/PreferencesDialog.cpp
	osx/showcursor.c
	stub/util_stub.cpp)
	
ELSEIF(UNIX)

SET (sys_SOURCES
	sys_local.cpp
	posix/posix_net.cpp
	posix/posix_main.cpp
	posix/posix_signal.cpp
	posix/posix_threads.cpp
	linux/stack.cpp
	linux/main.cpp
	stub/util_stub.cpp)
ENDIF()

ADD_EXECUTABLE (sys
	${sys_SOURCES})

# Additional libs
SET (sys_LIBS
	${CMAKE_THREAD_LIBS_INIT})

# D3 libs
LIST (APPEND sys_LIBS
	idlib)

TARGET_LINK_LIBRARIES (sys
	${LIBS})
