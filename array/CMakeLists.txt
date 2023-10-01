cmake_minimum_required(VERSION 3.24)
project(array)

set(
    SOURCE_FILE
    main.cpp
    functions.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${SOURCE_FILE}
)