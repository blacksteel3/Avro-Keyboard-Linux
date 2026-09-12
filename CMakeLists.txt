cmake_minimum_required(VERSION 3.20)

project(
    AvroKeyboardLinux
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(avro-keyboard-linux
    src/main.cpp
    src/Abbreviation.cpp
    src/BanglaChars.cpp
)