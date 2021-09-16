cmake_minimum_required(VERSION 3.14.2)
project(sdk-tools)

# See: https://android.googlesource.com/platform/external/boringssl/+/platform-tools-${ANDROID_VERSION}/BORINGSSL_REVISION
set(BORINGSSL_VERSION ae2bb641735447496bed334c495e4868b981fe32)

# sub project list
set(subproject 
    avb
	adb
	base
	core
	extras
	libbase
	libziparchive
	logging
	native
	selinux
	f2fs-tools
	e2fsprogs
	incremental_delivery
	fmtlib
	boringssl
	pcre
	libpng
	expat
	protobuf
	)
	
# TODO: https://cmake.org/cmake/help/v3.0/module/ExternalProject.html
# To patch the submodule
execute_process(COMMAND git submodule --quiet update)
foreach(v ${subproject})
	file(GLOB patches ${CMAKE_SOURCE_DIR}/patches/${v}/*.patch)
	if(patches)
		message(STATUS "Applying patches for: ${v}")
		execute_process(COMMAND git -C
			${CMAKE_SOURCE_DIR}/src/${v} am ${patches}
			RESULT_VARIABLE ret)
		if(NOT "${ret}" STREQUAL "0")
			message(FATAL_ERROR "Couldn't apply patches for ${v}")
		endif()
	endif(patches)
endforeach(v)

if(NOT EXISTS ${CMAKE_SOURCE_DIR}/src/incremental_delivery/sysprop/include)
    execute_process(
        COMMAND mkdir src/incremental_delivery/sysprop/include
        COMMAND cp patches/IncrementalProperties.sysprop.h src/incremental_delivery/sysprop/include
        COMMAND cp patches/IncrementalProperties.sysprop.cpp src/incremental_delivery/sysprop
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        )
endif()

enable_language(ASM)
# set global cflags and cxxflags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=gnu11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=gnu++2a")
    
set(TOOLS_VERSION 31.0.2)
set(SRC ${CMAKE_SOURCE_DIR}/src)
# libfsmgr (required by fastboot) requires a 64-bit off_t for lseek.
add_definitions(-D_FILE_OFFSET_BITS=64)

add_subdirectory(src/boringssl EXCLUDE_FROM_ALL)
add_subdirectory(src/fmtlib EXCLUDE_FROM_ALL)
add_subdirectory(src/pcre/dist2 EXCLUDE_FROM_ALL)
add_subdirectory(src/libpng EXCLUDE_FROM_ALL)
add_subdirectory(src/expat EXCLUDE_FROM_ALL)
add_subdirectory(src/zopfli EXCLUDE_FROM_ALL)
add_subdirectory(src/jsoncpp EXCLUDE_FROM_ALL)

add_subdirectory(lib)
#add_subdirectory(build-tools)
add_subdirectory(platform-tools)

find_package(Protobuf REQUIRED)

# CPack configuration for creating source tarballs which already include
set(CPACK_SOURCE_GENERATOR "TXZ")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "${PROJECT_NAME}-${TOOLS_VERSION}")
set(CPACK_SOURCE_IGNORE_FILES "/patches/" "/build/" "/.git/" "/tests/"
	"/testdata/" "/extras/simpleperf/scripts/" "\\\\.so$" "\\\\.a$" "\\\\.zip$"
	"/vendor/base/[a-k].*" "/vendor/base/[m-z].*" "without_trace_offcpu.html"
	"\\\\.orig" "\\\\.rej" "aes_128_gcm.txt" "aes_256_gcm.txt"
	"/fuzz/" "\\\\.tar$" "\\\\.tar\\\\..*$" "\\\\.tgz$" "\\\\.data$"
	"/wycheproof_testvectors/")
include(CPack)