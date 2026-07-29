cmake_minimum_required(VERSION 3.16)

project(DataStructure_Algos LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE PROJECT_MAIN_FILES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*/main.cpp"
)

foreach(MAIN_FILE IN LISTS PROJECT_MAIN_FILES)
    file(RELATIVE_PATH REL_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${MAIN_FILE}")
    string(REPLACE "/" "_" TARGET_NAME "${REL_PATH}")
    string(REPLACE ".cpp" "" TARGET_NAME "${TARGET_NAME}")

    add_executable("${TARGET_NAME}" "${MAIN_FILE}"
            ITI/Day2_OPP/Complex.cpp)
    target_include_directories("${TARGET_NAME}" PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
    )
endforeach()
