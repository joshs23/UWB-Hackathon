cmake_minimum_required(VERSION 3.21)
project(UWB_Hackathon)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(UWB_Hackathon
        GameCode.cpp
        GameCode.h
        NewsStory.cpp
        NewsStory.h)
