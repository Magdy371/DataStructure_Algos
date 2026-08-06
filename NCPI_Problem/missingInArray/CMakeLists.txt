cmake_minimum_required(VERSION 3.10)
project(NCPI_missingInArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(missing_in_array
    main.cpp
    Solution.cpp
)
