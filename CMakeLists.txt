cmake_minimum_required(VERSION 3.21)
project(SortVisualisation)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortVisualisation main.cpp View/View.cpp View/View.h Controller/SortController.cpp Controller/SortController.h Model/Model.h)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(SortVisualisation sfml-system sfml-window sfml-graphics sfml-audio sfml-network)