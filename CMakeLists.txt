cmake_minimum_required(VERSION 4.0)
project(Catalog)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)


add_executable(Catalog src/main.c
)

target_include_directories(Catalog PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

