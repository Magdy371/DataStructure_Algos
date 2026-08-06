cmake_minimum_required(VERSION 3.10)
project(Queues LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(queues
    main.cpp
    Queues.cpp
    Node.cpp
)
