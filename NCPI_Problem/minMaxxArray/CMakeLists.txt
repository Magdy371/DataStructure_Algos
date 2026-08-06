cmake_minimum_required(VERSION 3.10)
project(NCPI_minMaxxArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(min_maxx_array
    main.cpp
    Solution.cpp
)
