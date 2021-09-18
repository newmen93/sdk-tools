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

#message(FATAL_ERROR ${SRC_FILES})
    
add_library(libopenscreen STATIC ${SRC_FILES})
target_include_directories(libopenscreen PUBLIC
    ${SRC}/openscreen
    ${SRC}/jsoncpp/include
    ${SRC}/abseil-cpp
    ${SRC}/boringssl/include
    ${SRC}/protobuf/third_party/googletest/googlemock/include
    ${SRC}/protobuf/third_party/googletest/googletest/include
    )