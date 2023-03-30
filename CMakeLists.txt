cmake_minimum_required(VERSION 3.0.0)


project(028_OOP_bsp VERSION 0.1.0)


include(CTest)

enable_testing()

file(GLOB_RECURSE PROJECT_SRC 
    ${PROJECT_SOURCE_DIR}/src/*.cpp 
    ${PROJECT_SOURCE_DIR}/src/*.c 
    ${PROJECT_SOURCE_DIR}/include/*.h
    ${PROJECT_SOURCE_DIR}/include/*.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SRC})

target_include_directories(${PROJECT_NAME} PRIVATE 
    ${PROJECT_SOURCE_DIR}/src/ 
    ${PROJECT_SOURCE_DIR}/include/)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
