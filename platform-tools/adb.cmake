set(ADB_PROTO_SRC)  # adb proto source files
set(ADB_PROTO_HDRS) # adb proto head files
set(ADB_PROTO_DIR ${CMAKE_SOURCE_DIR}/src/adb/proto)

file(GLOB_RECURSE PROTO_FILES ${ADB_PROTO_DIR}/*.proto)

foreach(proto ${PROTO_FILES})
    get_filename_component(FIL_WE ${proto} NAME_WE)
    
    set(TARGET_CPP_FILE "${ADB_PROTO_DIR}/${FIL_WE}.pb.cc")
    set(TARGET_HEAD_FILE "${ADB_PROTO_DIR}/${FIL_WE}.pb.h")
    
    if(EXISTS ${TARGET_CPP_FILE} AND EXISTS ${TARGET_HEAD_FILE})
        list(APPEND ADB_PROTO_SRC ${TARGET_CPP_FILE})
        list(APPEND ADB_PROTO_HDRS ${TARGET_HEAD_FILE})
    else()
        # execute the protoc command to generate the proto targets
        execute_process(
            COMMAND ${CMAKE_BINARY_DIR}/bin/protoc ${proto}
            --proto_path=${ADB_PROTO_DIR}
            --cpp_out=${ADB_PROTO_DIR}
            WORKING_DIRECTORY ${ADB_PROTO_DIR}
        )
        message(STATUS "generate cpp file ${TARGET_CPP_FILE}")
        message(STATUS "generate head file ${TARGET_HEAD_FILE}")
    endif()
endforeach()

set_source_files_properties(${ADB_PROTO_SRC} ${ADB_PROTO_HDRS} PROPERTIES GENERATED TRUE)

# ApkEntry.proto
set(FASTDEPLOY_PROTO_SRC)  # adb proto source files
set(FASTDEPLOY_PROTO_HDRS) # adb proto head files
set(FASTDEPLOY_PROTO_DIR ${CMAKE_SOURCE_DIR}/src/adb/fastdeploy/proto)
if(EXISTS ${FASTDEPLOY_PROTO_DIR}/ApkEntry.pb.h 
  AND EXISTS ${FASTDEPLOY_PROTO_DIR}/ApkEntry.pb.cc)
    
    set(TARGET_CPP_FILE "${FASTDEPLOY_PROTO_DIR}/ApkEntry.pb.cc")
    set(TARGET_HEAD_FILE "${FASTDEPLOY_PROTO_DIR}/ApkEntry.pb.h")
    
    list(APPEND FASTDEPLOY_PROTO_SRC ${TARGET_CPP_FILE})
    list(APPEND FASTDEPLOY_PROTO_HDRS ${TARGET_HEAD_FILE})
else()
    # execute the protoc command to generate the proto targets
    execute_process(
        COMMAND ${CMAKE_BINARY_DIR}/bin/protoc ${FASTDEPLOY_PROTO_DIR}/ApkEntry.proto
        --proto_path=${FASTDEPLOY_PROTO_DIR}
        --cpp_out=${FASTDEPLOY_PROTO_DIR}
        WORKING_DIRECTORY ${FASTDEPLOY_PROTO_DIR}
    )
    message(STATUS "generate cpp file ${TARGET_CPP_FILE}")
    message(STATUS "generate head file ${TARGET_HEAD_FILE}")
endif()

set_source_files_properties(${FASTDEPLOY_PROTO_SRC} ${FASTDEPLOY_PROTO_HDRS} PROPERTIES GENERATED TRUE)

add_definitions(
    -DPLATFORM_TOOLS_VERSION="${TOOLS_VERSION}"
    -DPLATFORM_TOOLS_VENDOR="${TOOLS_VENDOR}"
    )

# No fastdeploy because it requires deployagent.inc
add_library(libadb STATIC
    ${SRC}/adb/adb.cpp
    ${SRC}/adb/adb_io.cpp
    ${SRC}/adb/adb_listeners.cpp
    ${SRC}/adb/adb_mdns.cpp
    ${SRC}/adb/adb_trace.cpp
    ${SRC}/adb/adb_unique_fd.cpp
    ${SRC}/adb/adb_utils.cpp
    ${SRC}/adb/fdevent/fdevent.cpp
    ${SRC}/adb/services.cpp
    ${SRC}/adb/sockets.cpp
    ${SRC}/adb/socket_spec.cpp
    ${SRC}/adb/sysdeps/env.cpp
    ${SRC}/adb/sysdeps/errno.cpp
    ${SRC}/adb/transport.cpp
    ${SRC}/adb/transport_fd.cpp
    ${SRC}/adb/types.cpp
    ${SRC}/adb/client/openscreen/mdns_service_info.cpp
    ${SRC}/adb/client/openscreen/mdns_service_watcher.cpp
    ${SRC}/adb/client/openscreen/platform/logging.cpp
    ${SRC}/adb/client/openscreen/platform/task_runner.cpp
    ${SRC}/adb/client/openscreen/platform/udp_socket.cpp
    ${SRC}/adb/client/auth.cpp
    ${SRC}/adb/client/adb_wifi.cpp
    ${SRC}/adb/client/usb_libusb.cpp
    ${SRC}/adb/client/transport_local.cpp
    ${SRC}/adb/client/mdnsresponder_client.cpp
    ${SRC}/adb/client/mdns_utils.cpp
    ${SRC}/adb/client/transport_mdns.cpp
    ${SRC}/adb/client/transport_usb.cpp
    ${SRC}/adb/client/pairing/pairing_client.cpp
    ${SRC}/adb/client/usb_linux.cpp
    ${SRC}/adb/fdevent/fdevent_epoll.cpp
    ${SRC}/adb/sysdeps_unix.cpp
    ${SRC}/adb/sysdeps/posix/network.cpp
    ${ADB_PROTO_SRC} ${ADB_PROTO_HDRS}
    )

target_compile_definitions(libadb PRIVATE -D_GNU_SOURCE)
target_compile_definitions(libadb PUBLIC -DADB_HOST=1)
target_include_directories(libadb PUBLIC
    ${SRC}/base/libs/androidfw/include
    ${SRC}/boringssl/include
    ${SRC}/adb
    ${SRC}/adb/proto
    ${SRC}/adb/crypto/include
    ${SRC}/adb/pairing_auth/include
    ${SRC}/adb/pairing_connection/include
    ${SRC}/adb/tls/include
    ${SRC}/core/include
    ${SRC}/fmtlib/include
    ${SRC}/core/libcrypto_utils/include
    ${SRC}/core/libcutils/include
    ${SRC}/libbase/include
    ${SRC}/libziparchive/include
    ${SRC}/native/include
    ${SRC}/protobuf/src
    ${SRC}/zstd/lib
    ${SRC}/libusb/include
    ${SRC}/brotli/c/include
    ${SRC}/libbuildversion/include
    ${SRC}/mdnsresponder/mDNSShared
    ${SRC}/openscreen
    ${SRC}/abseil-cpp
    ${SRC}/core/diagnose_usb/include
    ${SRC}/boringssl/third_party/googletest/include
    ${SRC}/incremental_delivery/incfs/util/include 
    )

add_library(libadb_crypto STATIC
    ${SRC}/adb/crypto/key.cpp
    ${SRC}/adb/crypto/rsa_2048_key.cpp
    ${SRC}/adb/crypto/x509_generator.cpp
    ${ADB_PROTO_HDRS}
    )

target_include_directories(libadb_crypto PUBLIC
    ${SRC}/adb
    ${SRC}/adb/crypto/include
    ${SRC}/adb/proto
    ${SRC}/boringssl/include
    ${SRC}/core/libcrypto_utils/include
    ${SRC}/libbase/include
    ${SRC}/protobuf/src
    )

add_library(libadb_tls_connection STATIC
    ${SRC}/adb/tls/adb_ca_list.cpp
    ${SRC}/adb/tls/tls_connection.cpp
    )

target_include_directories(libadb_tls_connection PUBLIC
    ${SRC}/adb
    ${SRC}/adb/tls/include
    ${SRC}/boringssl/include
    ${SRC}/libbase/include
    )
    
add_library(libadb_pairing_connection STATIC
    ${SRC}/adb/pairing_connection/pairing_connection.cpp
    )
target_include_directories(libadb_pairing_connection PUBLIC
    ${SRC}/adb/pairing_connection/include
    ${SRC}/adb/pairing_auth/include
    ${SRC}/adb/tls/include
    ${SRC}/adb/proto
    ${SRC}/libbase/include
    ${SRC}/boringssl/include
    ${SRC}/protobuf/src
    )

add_library(libadb_pairing_auth STATIC
    ${SRC}/adb/pairing_auth/aes_128_gcm.cpp
    ${SRC}/adb/pairing_auth/pairing_auth.cpp
    )
target_include_directories(libadb_pairing_auth PUBLIC
    ${SRC}/adb/pairing_auth/include
    ${SRC}/libbase/include
    ${SRC}/boringssl/include
    ${SRC}/protobuf/src
    )

add_library(libadb_sysdeps STATIC
    ${SRC}/adb/sysdeps/env.cpp
    )
target_include_directories(libadb_sysdeps PUBLIC
    ${SRC}/libbase/include
    ${SRC}/adb
    )

add_library(libfastdeploy STATIC
    ${SRC}/adb/fastdeploy/deploypatchgenerator/apk_archive.cpp
    ${SRC}/adb/fastdeploy/deploypatchgenerator/deploy_patch_generator.cpp
    ${SRC}/adb/fastdeploy/deploypatchgenerator/patch_utils.cpp
    ${SRC}/adb/fastdeploy/proto/ApkEntry.proto
    ${FASTDEPLOY_PROTO_SRC} ${FASTDEPLOY_PROTO_HDRS}
    )
target_include_directories(libfastdeploy PUBLIC
    ${SRC}/adb
    ${SRC}/libbase/include
    ${SRC}/protobuf/src
    ${SRC}/boringssl/include
    )

add_library(libcrypto STATIC
    ${SRC}/core/libcrypto_utils/android_pubkey.cpp
    )
target_include_directories(libcrypto PUBLIC
    ${SRC}/core/libcrypto_utils/include 
    ${SRC}/boringssl/include
    )

add_executable(adb
    ${SRC}/adb/client/adb_client.cpp
    ${SRC}/adb/client/bugreport.cpp
    ${SRC}/adb/client/commandline.cpp
    ${SRC}/adb/client/file_sync_client.cpp
    ${SRC}/adb/client/main.cpp
    ${SRC}/adb/client/console.cpp
    ${SRC}/adb/client/adb_install.cpp
    ${SRC}/adb/client/line_printer.cpp
    ${SRC}/adb/client/fastdeploy.cpp
    ${SRC}/adb/client/fastdeploycallbacks.cpp
    ${SRC}/adb/client/incremental.cpp
    ${SRC}/adb/client/incremental_server.cpp
    ${SRC}/adb/client/incremental_utils.cpp
    ${SRC}/adb/shell_service_protocol.cpp
    ${ADB_PROTO_HDRS}
    )

target_include_directories(adb PRIVATE
    ${SRC}/core/include 
    ${SRC}/libbase/include 
    ${SRC}/adb
    ${SRC}/adb/fastdeploy/deployagent
    ${SRC}/core/libcrypto_utils/include 
    ${SRC}/boringssl/include
    )
target_link_options(adb PRIVATE -static)
target_link_libraries(adb
    libadb
    libadb_crypto
    libadb_tls_connection
    libadb_pairing_connection
    libadb_pairing_auth
    libcrypto
    libadb_sysdeps
    libfastdeploy
    libincfs
    libpackagelistparser
    libselinux
    libbase
    libutils
    libcutils
    libdiagnoseusb
    libandroidfw
    libbuildversion
    libziparchive
    libmdnssd
    libopenscreen
    libusb
    libabsl_base
    libabsl_strings
    liblog
    libzstd_static
    libprotoc
    brotlicommon-static
    brotlidec-static
    brotlienc-static
    lz4_static
    c++_static
    crypto
    ssl
    z
    )
