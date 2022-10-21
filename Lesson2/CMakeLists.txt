cmake_minimum_required(VERSION 3.0.0)
project(opencvlesson1 VERSION 0.1.0)
add_subdirectory(my_lib)
include(CTest)
enable_testing()

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(opencvlesson1 main.cpp)
target_link_libraries(opencvlesson1  my_lib )
target_link_libraries( opencvlesson1 ${OpenCV_LIBS} )




set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
