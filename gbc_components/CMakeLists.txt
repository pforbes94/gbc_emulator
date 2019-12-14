set(gbc_components_SRCS
    include/gbc_components/memory.h
    include/gbc_components/processor.h

    src/memory.c
    src/processor.c
)

add_library(gbc_components SHARED ${gbc_components_SRCS})
target_include_directories(gbc_components
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
