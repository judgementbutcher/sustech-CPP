cmake_minimum_required(VERSION 3.22)

project(exercise5)

aux_source_directory(./src DIR_SRCS)

include_directories(include)

add_executable(exercise5 ${DIR_SRCS})

