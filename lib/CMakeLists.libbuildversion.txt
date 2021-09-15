add_library(libbuildversion STATIC
    ${SRC}/libbuildversion/libbuildversion.cpp
    )

target_include_directories(libbuildversion PUBLIC
    ${SRC}/libbuildversion/include
    )
    