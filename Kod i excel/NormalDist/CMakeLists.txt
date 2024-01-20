cmake_minimum_required(VERSION 3.27)
project(NormalDist)

set(CMAKE_CXX_STANDARD 23)

find_package(Matplot++ CONFIG REQUIRED)

add_executable(NormalDist main.cpp
        NormalDistribution.cpp)

target_link_libraries(NormalDist PRIVATE Matplot++::cimg  Matplot++::matplot)
