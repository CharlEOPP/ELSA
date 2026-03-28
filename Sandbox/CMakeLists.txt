file(GLOB_RECURSE SANDBOX_SOURCES
    src/*.cpp
)

add_executable(Sandbox ${SANDBOX_SOURCES})

target_link_libraries(Sandbox PRIVATE ELSA)

target_compile_definitions(Sandbox PRIVATE
    EL_PLATFORM_WINDOWS
)

# Optional: ensure correct working directory (nice for assets later)
set_target_properties(Sandbox PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)

# 🔥 CRITICAL: Copy ELSA.dll next to Sandbox.exe after build
add_custom_command(TARGET Sandbox POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:ELSA>
        $<TARGET_FILE_DIR:Sandbox>
)