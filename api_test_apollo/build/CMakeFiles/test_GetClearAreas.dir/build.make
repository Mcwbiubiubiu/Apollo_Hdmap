# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mcw/api_test_apollo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mcw/api_test_apollo/build

# Include any dependencies generated for this target.
include CMakeFiles/test_GetClearAreas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_GetClearAreas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_GetClearAreas.dir/flags.make

CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o: CMakeFiles/test_GetClearAreas.dir/flags.make
CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o: ../api/test_GetClearAreas.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mcw/api_test_apollo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o -c /home/mcw/api_test_apollo/api/test_GetClearAreas.cpp

CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mcw/api_test_apollo/api/test_GetClearAreas.cpp > CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.i

CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mcw/api_test_apollo/api/test_GetClearAreas.cpp -o CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.s

# Object files for target test_GetClearAreas
test_GetClearAreas_OBJECTS = \
"CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o"

# External object files for target test_GetClearAreas
test_GetClearAreas_EXTERNAL_OBJECTS =

test_GetClearAreas: CMakeFiles/test_GetClearAreas.dir/api/test_GetClearAreas.cpp.o
test_GetClearAreas: CMakeFiles/test_GetClearAreas.dir/build.make
test_GetClearAreas: libhdmap.so
test_GetClearAreas: /usr/local/lib/libprotobuf.so
test_GetClearAreas: /usr/local/lib/libprotobuf.so
test_GetClearAreas: CMakeFiles/test_GetClearAreas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mcw/api_test_apollo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_GetClearAreas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_GetClearAreas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_GetClearAreas.dir/build: test_GetClearAreas

.PHONY : CMakeFiles/test_GetClearAreas.dir/build

CMakeFiles/test_GetClearAreas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_GetClearAreas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_GetClearAreas.dir/clean

CMakeFiles/test_GetClearAreas.dir/depend:
	cd /home/mcw/api_test_apollo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mcw/api_test_apollo /home/mcw/api_test_apollo /home/mcw/api_test_apollo/build /home/mcw/api_test_apollo/build /home/mcw/api_test_apollo/build/CMakeFiles/test_GetClearAreas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_GetClearAreas.dir/depend

