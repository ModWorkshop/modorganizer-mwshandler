cmake_minimum_required(VERSION 3.16)

add_executable(mwshandler)
mo2_configure_executable(mwshandler
	WARNINGS OFF
	PRIVATE_DEPENDS uibase)
mo2_install_target(mwshandler)

mo2_deploy_qt(BINARIES mwshandler.exe NOPLUGINS)
