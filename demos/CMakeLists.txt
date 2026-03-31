cmake_minimum_required(VERSION 3.10)
project(CGAL_Demo)

find_package(CGAL REQUIRED)

add_executable(demo arrangement_demo.cpp)

target_link_libraries(demo CGAL::CGAL)