CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
PROJECT (framework)

IF(APPLE AND (${CMAKE_SYSTEM_NAME} MATCHES "Darwin"))
ADD_DEFINITIONS(-DMACOS_X=1)
ENDIF()

SET (framework_SOURCES
	CVarSystem.cpp
	CmdSystem.cpp
	Common.cpp
	Compressor.cpp
	Console.cpp
	DemoFile.cpp
	DeclAF.cpp
	DeclEntityDef.cpp
	DeclFX.cpp
	DeclManager.cpp
	DeclParticle.cpp
	DeclPDA.cpp
	DeclSkin.cpp
	DeclTable.cpp
	EditField.cpp
	EventLoop.cpp
	File.cpp
	FileSystem.cpp
	KeyInput.cpp
	Unzip.cpp
	UsercmdGen.cpp
	Session_menu.cpp
	Session.cpp
	async/AsyncClient.cpp
	async/AsyncNetwork.cpp
	async/AsyncServer.cpp
	async/MsgChannel.cpp
	async/NetworkSystem.cpp
	async/ServerScan.cpp)

ADD_LIBRARY (framework
	${framework_SOURCES})
