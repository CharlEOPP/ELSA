file(GLOB_RECURSE ELSA_SOURCES CMAKE_CONFIGURE_DEPENDS
    src/*.cpp
)

add_library(ELSA SHARED ${ELSA_SOURCES})

target_compile_definitions(ELSA PRIVATE EL_PLATFORM_WINDOWS EL_BUILD_DLL)

target_include_directories(ELSA PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include 
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Example: if using spdlog
add_subdirectory(vendor/spdlog)

target_link_libraries(ELSA PUBLIC spdlog::spdlog)

if (MSVC)
    target_compile_options(ELSA PRIVATE /utf-8)
endif()