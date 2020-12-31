cmake_minimum_required(VERSION 3.17)
project(studyCode)

set(CMAKE_CXX_STANDARD 14)

# 如果你只需要根目录下的 test 文件夹的所有 .cpp 文件
file (GLOB files test/*.cpp)
# 如果你只有两层目录的话
file (GLOB files *.cpp */*.cpp)
# 同理，三层的话
file (GLOB files *.cpp */*.cpp */*/*.cpp)

# 官方提供了一种递归的方法
# 这样在运行框会多一个 CMakeCXXCompilerId，不过无伤大雅
file (GLOB_RECURSE files *.cpp)
add_executable( main.cpp)