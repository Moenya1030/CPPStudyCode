# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\study\C++\studyCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\study\C++\studyCode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/studyCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/studyCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/studyCode.dir/flags.make

CMakeFiles/studyCode.dir/main.cpp.obj: CMakeFiles/studyCode.dir/flags.make
CMakeFiles/studyCode.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\study\C++\studyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/studyCode.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\studyCode.dir\main.cpp.obj -c F:\study\C++\studyCode\main.cpp

CMakeFiles/studyCode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/studyCode.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\study\C++\studyCode\main.cpp > CMakeFiles\studyCode.dir\main.cpp.i

CMakeFiles/studyCode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/studyCode.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\study\C++\studyCode\main.cpp -o CMakeFiles\studyCode.dir\main.cpp.s

# Object files for target studyCode
studyCode_OBJECTS = \
"CMakeFiles/studyCode.dir/main.cpp.obj"

# External object files for target studyCode
studyCode_EXTERNAL_OBJECTS =

studyCode.exe: CMakeFiles/studyCode.dir/main.cpp.obj
studyCode.exe: CMakeFiles/studyCode.dir/build.make
studyCode.exe: CMakeFiles/studyCode.dir/linklibs.rsp
studyCode.exe: CMakeFiles/studyCode.dir/objects1.rsp
studyCode.exe: CMakeFiles/studyCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\study\C++\studyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable studyCode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\studyCode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/studyCode.dir/build: studyCode.exe

.PHONY : CMakeFiles/studyCode.dir/build

CMakeFiles/studyCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\studyCode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/studyCode.dir/clean

CMakeFiles/studyCode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\study\C++\studyCode F:\study\C++\studyCode F:\study\C++\studyCode\cmake-build-debug F:\study\C++\studyCode\cmake-build-debug F:\study\C++\studyCode\cmake-build-debug\CMakeFiles\studyCode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/studyCode.dir/depend
