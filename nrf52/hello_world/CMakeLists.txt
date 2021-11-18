# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

execute_process(
	COMMAND git describe --long --dirty --always
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE BUILD_INFO
	OUTPUT_STRIP_TRAILING_WHITESPACE
)
add_compile_definitions(VERSION_BUILD_INFO="${BUILD_INFO}")
target_sources(app PRIVATE src/main.c)
