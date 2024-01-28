cmake_minimum_required(VERSION 3.27)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_PREFIX_PATH "/root/lib/cmake/Qt5Widgets")

find_package(Qt5Widgets REQUIRED)

add_executable(Laboratorio main.cpp
        Barra.cpp
        Barra.h
        Observer.h
        CaricatoreFile.cpp
        CaricatoreFile.h
        Subject.h
        File.cpp
        File.h
)


target_link_libraries(Laboratorio PRIVATE Qt5::Widgets)

add_library(core Laboratorio main.cpp
        Barra.cpp
        Barra.h
        Observer.h
        CaricatoreFile.cpp
        CaricatoreFile.h
        Subject.h
        Observer.cpp
        File.cpp
        File.h
)

target_link_libraries(core Qt5::Widgets)


add_subdirectory(test)