cmake_minimum_required(VERSION 3.24)
project(test)
set(SOURCE_FILE
    main.cpp
    utils.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILE})
