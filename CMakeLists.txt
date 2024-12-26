cmake_minimum_required(VERSION 3.16)
project(simpleGameEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "C:/Users/nithi/Documents/SDL2-devel-2.30.10-mingw/SDL2-2.30.10/x86_64-w64-mingw32")
#C:/Users/Nithilan/OneDrive/Documents/CLion/SDL2-devel-2.30.9-mingw/SDL2-2.30.9/x86_64-w64-mingw32
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

# Add source files
add_executable(simpleGameEngine main.cpp
        config.cpp
        config.h
        engine.cpp
        engine.h
        game_objects.cpp
        input_handler.cpp
        renderer.cpp
        renderer.h
        utils.cpp
        input_handler.h
)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})

