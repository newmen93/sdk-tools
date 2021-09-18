file(GLOB_RECURSE SRC_FILES 
    ${SRC}/openscreen/discovery/dnssd/impl/*.cc
    ${SRC}/openscreen/discovery/dnssd/public/*.cc
    ${SRC}/openscreen/discovery/mdns/*.cc
    ${SRC}/openscreen/discovery/mdns/public/*.cc
    ${SRC}/openscreen/platform/api/*.cc
    ${SRC}/openscreen/platform/base/*.cc
    ${SRC}/openscreen/platform/impl/*.cc
    ${SRC}/openscreen/util/*.cc
    )

foreach(file ${SRC_FILES})
    if(${file} MATCHES ".*_mac.cc" OR ${file} MATCHES "base64.cc"
        OR ${file} MATCHES ".*_unittest.cc")
        list(REMOVE_ITEM SRC_FILES ${file})
    endif()
endforeach()

add_library(libopenscreen STATIC ${SRC_FILES})
target_include_directories(libopenscreen PUBLIC
    ${SRC}/openscreen
    ${SRC}/jsoncpp/include
    ${SRC}/abseil-cpp
    ${SRC}/boringssl/include
    )
    