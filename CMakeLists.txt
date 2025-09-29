cmake_minimum_required(VERSION 3.24)
project(Project_GL LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Dependencies ----
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(assimp CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(OpenAL CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

add_executable(Project_GL
    Framework/Application.cpp
    Framework/Graphics/Renderer.cpp
    Framework/Window.cpp
    Game/Main.cpp
)

target_link_libraries(Project_GL PRIVATE
    glfw
    glm::glm
    glad::glad
    assimp::assimp
    imgui::imgui
    OpenAL::OpenAL
    spdlog::spdlog
)
