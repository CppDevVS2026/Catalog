cmake_minimum_required(VERSION 4.0)
project(Catalog)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)


add_executable(Catalog src/main.cpp
        modules/Models/Composition.ixx)

target_include_directories(Catalog PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)


# Grab every .ixx file in the modules folder
file(GLOB_RECURSE MY_MODULES "modules/*.ixx")

target_sources(Catalog
        PUBLIC
        FILE_SET CXX_MODULES
        FILES ${MY_MODULES}
)