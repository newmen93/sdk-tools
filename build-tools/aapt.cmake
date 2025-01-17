add_library(libaapt STATIC
    ${SRC}/base/tools/aapt/AaptAssets.cpp
    ${SRC}/base/tools/aapt/AaptConfig.cpp
    ${SRC}/base/tools/aapt/AaptUtil.cpp
    ${SRC}/base/tools/aapt/AaptXml.cpp
    ${SRC}/base/tools/aapt/ApkBuilder.cpp
    ${SRC}/base/tools/aapt/Command.cpp
    ${SRC}/base/tools/aapt/CrunchCache.cpp
    ${SRC}/base/tools/aapt/FileFinder.cpp
    ${SRC}/base/tools/aapt/Images.cpp
    ${SRC}/base/tools/aapt/Package.cpp
    ${SRC}/base/tools/aapt/pseudolocalize.cpp
    ${SRC}/base/tools/aapt/Resource.cpp
    ${SRC}/base/tools/aapt/ResourceFilter.cpp
    ${SRC}/base/tools/aapt/ResourceIdCache.cpp
    ${SRC}/base/tools/aapt/ResourceTable.cpp
    ${SRC}/base/tools/aapt/SourcePos.cpp
    ${SRC}/base/tools/aapt/StringPool.cpp
    ${SRC}/base/tools/aapt/WorkQueue.cpp
    ${SRC}/base/tools/aapt/XMLNode.cpp
    ${SRC}/base/tools/aapt/ZipEntry.cpp
    ${SRC}/base/tools/aapt/ZipFile.cpp
    )
    
add_definitions(-DSTATIC_ANDROIDFW_FOR_TOOLS)
include_directories(
    ${SRC}/base/libs/androidfw/include
    ${SRC}/expat/lib
    ${SRC}/fmtlib/include
    ${SRC}/libpng
    ${SRC}/libbase/include
    ${SRC}/core/libutils/include
    ${SRC}/core/libsystem/include
    ${SRC}/logging/liblog/include
    ${SRC}/libbuildversion/include
    ${SRC}/incremental_delivery/incfs/util/include 
    ${SRC}/incremental_delivery/incfs/kernel-headers
    )
    
add_executable(aapt ${SRC}/base/tools/aapt/Main.cpp)
target_link_libraries(aapt
    libaapt
    libandroidfw
    libincfs
    libutils
    libcutils
    libselinux
    libziparchive
    libbase
    libbuildversion
    libprocessgroup
    liblog
    expat
    crypto
    jsoncpp_static
    png_static
    c++_static
    )
    
    