cmake_minimum_required(VERSION 3.24)
project(Project_GL LANGUAGES C CXX)

set (CMAKE_C_STANDARD 17)
set (CMAKE_C_STANDARD_REQUIRED ON)
set (CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# GLAD
add_library(GLAD STATIC IMPORTED)
set_target_properties(GLAD PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/glad.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/glad.lib"
)

# GLFW
add_library(GLFW STATIC IMPORTED)
set_target_properties(GLFW PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/glfw3dll.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/glfw3dll.lib"
)

# GLM
add_library(GLM STATIC IMPORTED)
set_target_properties(GLM PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/glm.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/glm.lib"
)

# Assimp
add_library(ASSIMP STATIC IMPORTED)
set_target_properties(ASSIMP PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/assimp-vc143-mtd.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/assimp-vc143-mt.lib"
)

# Draco
add_library(DRACO STATIC IMPORTED)
set_target_properties(DRACO PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/draco.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/draco.lib"
)

# fmt
add_library(FMT STATIC IMPORTED)
set_target_properties(FMT PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/fmtd.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/fmt.lib"
)

# ImGui
add_library(IMGUI STATIC IMPORTED)
set_target_properties(IMGUI PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/imguid.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/imgui.lib"
)

# ImGuizmo
add_library(IMGUIZMO STATIC IMPORTED)
set_target_properties(IMGUIZMO PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/imguizmo.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/imguizmo.lib"
)

# Kubazip
add_library(KUBAZIP STATIC IMPORTED)
set_target_properties(KUBAZIP PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/kubazip.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/kubazip.lib"
)

# Minizip
add_library(MINIZIP STATIC IMPORTED)
set_target_properties(MINIZIP PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/minizip.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/minizip.lib"
)

# OpenAL
add_library(OPENAL32 STATIC IMPORTED)
set_target_properties(OPENAL32 PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/OpenAL32.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/OpenAL32.lib"
)

# poly2tri
add_library(POLY2TRI STATIC IMPORTED)
set_target_properties(POLY2TRI PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/poly2tri.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/poly2tri.lib"
)

# polyclipping
add_library(POLYCLIPPING STATIC IMPORTED)
set_target_properties(POLYCLIPPING PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/polyclipping.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/polyclipping.lib"
)

# pugixml
add_library(PUGIXML STATIC IMPORTED)
set_target_properties(PUGIXML PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/pugixml.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/pugixml.lib"
)

# spdlog
add_library(SPDLOG STATIC IMPORTED)
set_target_properties(SPDLOG PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/spdlogd.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/spdlog.lib"
)

# zlib
add_library(ZLIB STATIC IMPORTED)
set_target_properties(ZLIB PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/External/Includes"
        IMPORTED_LOCATION_DEBUG       "${CMAKE_SOURCE_DIR}/External/Libraries/Debug/zlibd.lib"
        IMPORTED_LOCATION_RELEASE     "${CMAKE_SOURCE_DIR}/External/Libraries/Release/zlib.lib"
)

set(EXTERNAL_LIBS
        GLAD GLFW GLM
        ASSIMP DRACO FMT IMGUI IMGUIZMO
        KUBAZIP MINIZIP OPENAL32 POLY2TRI POLYCLIPPING
        PUGIXML SPDLOG ZLIB)

set(DLL_NAME_PAIRS
        assimp-vc143-mtd.dll|assimp-vc143-mt.dll
        fmtd.dll|fmt.dll
        spdlogd.dll|spdlog.dll
        zlibd1.dll|zlib1.dll
)

set(DLL_SAME_BOTH
        draco.dll
        glfw3.dll
        kubazip.dll
        minizip.dll
        OpenAL32.dll
        poly2tri.dll
        pugixml.dll
)

function(configure_runtime_dlls target_name)
    foreach(_pair IN LISTS DLL_NAME_PAIRS)
        string(REPLACE "|" ";" _parts "${_pair}")
        list(GET _parts 0 _dbg)
        list(GET _parts 1 _rel)
        add_custom_command(TARGET ${target_name} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_SOURCE_DIR}/External/Binaries/$<IF:$<CONFIG:Debug>,Debug,Release>/$<IF:$<CONFIG:Debug>,${_dbg},${_rel}>"
                "$<TARGET_FILE_DIR:${target_name}>/$<IF:$<CONFIG:Debug>,${_dbg},${_rel}>"
                VERBATIM)
    endforeach()
    foreach(_dll IN LISTS DLL_SAME_BOTH)
        add_custom_command(TARGET ${target_name} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_SOURCE_DIR}/External/Binaries/$<CONFIG>/${_dll}"
                "$<TARGET_FILE_DIR:${target_name}>/${_dll}"
                VERBATIM)
    endforeach()
endfunction()

# ---- Single top-level target definition (no subdirectory CMakeLists) ----
add_executable(Project_GL
        Framework/Application.cpp
        Framework/Graphics/Renderer.cpp
        Framework/Window.cpp
        Game/Main.cpp
)

target_link_libraries(Project_GL PRIVATE ${EXTERNAL_LIBS})

target_include_directories(Project_GL PRIVATE ${CMAKE_SOURCE_DIR}/External/Includes)

configure_runtime_dlls(Project_GL)
