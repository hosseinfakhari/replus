project(replus)
cmake_minimum_required(VERSION 3.16)

find_path(HIREDIS_HEADER hiredis)

add_executable(replus main.cpp)

target_include_directories(replus PUBLIC ${HIREDIS_HEADER})

find_library(HIREDIS_LIB hiredis)

find_path(REDIS_PLUS_PLUS_HEADER sw)

target_include_directories(replus PUBLIC ${REDIS_PLUS_PLUS_HEADER})

find_library(REDIS_PLUS_PLUS_LIB redis++)

target_link_libraries(replus ${HIREDIS_LIB} ${REDIS_PLUS_PLUS_LIB})