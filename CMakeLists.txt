project("qt-sample")

cmake_minimum_required(VERSION 3.15)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/source)

find_package(Qt5 COMPONENTS Widgets DataVisualization REQUIRED)

add_executable(qt-sample
    source/mainwindow.ui
    source/mainwindow.cpp
    source/main.cpp
)

target_link_libraries(qt-sample Qt5::Widgets Qt5::DataVisualization)
