cmake_minimum_required(VERSION 2.8)

project(gradient-descent)

find_package(MPI REQUIRED)
find_package(Boost COMPONENTS program_options mpi serialization REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} ${MPI_LIBRARIES} pthread)
