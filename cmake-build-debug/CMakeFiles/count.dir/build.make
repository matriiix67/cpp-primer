# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/god/Git/matrix/cpp-primer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/god/Git/matrix/cpp-primer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/count.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/count.dir/flags.make

CMakeFiles/count.dir/ch10/count.cpp.o: CMakeFiles/count.dir/flags.make
CMakeFiles/count.dir/ch10/count.cpp.o: ../ch10/count.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/count.dir/ch10/count.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/count.dir/ch10/count.cpp.o -c /Users/god/Git/matrix/cpp-primer/ch10/count.cpp

CMakeFiles/count.dir/ch10/count.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/count.dir/ch10/count.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/god/Git/matrix/cpp-primer/ch10/count.cpp > CMakeFiles/count.dir/ch10/count.cpp.i

CMakeFiles/count.dir/ch10/count.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/count.dir/ch10/count.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/god/Git/matrix/cpp-primer/ch10/count.cpp -o CMakeFiles/count.dir/ch10/count.cpp.s

CMakeFiles/count.dir/ch10/count.cpp.o.requires:

.PHONY : CMakeFiles/count.dir/ch10/count.cpp.o.requires

CMakeFiles/count.dir/ch10/count.cpp.o.provides: CMakeFiles/count.dir/ch10/count.cpp.o.requires
	$(MAKE) -f CMakeFiles/count.dir/build.make CMakeFiles/count.dir/ch10/count.cpp.o.provides.build
.PHONY : CMakeFiles/count.dir/ch10/count.cpp.o.provides

CMakeFiles/count.dir/ch10/count.cpp.o.provides.build: CMakeFiles/count.dir/ch10/count.cpp.o


# Object files for target count
count_OBJECTS = \
"CMakeFiles/count.dir/ch10/count.cpp.o"

# External object files for target count
count_EXTERNAL_OBJECTS =

count: CMakeFiles/count.dir/ch10/count.cpp.o
count: CMakeFiles/count.dir/build.make
count: CMakeFiles/count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable count"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/count.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/count.dir/build: count

.PHONY : CMakeFiles/count.dir/build

CMakeFiles/count.dir/requires: CMakeFiles/count.dir/ch10/count.cpp.o.requires

.PHONY : CMakeFiles/count.dir/requires

CMakeFiles/count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/count.dir/cmake_clean.cmake
.PHONY : CMakeFiles/count.dir/clean

CMakeFiles/count.dir/depend:
	cd /Users/god/Git/matrix/cpp-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/god/Git/matrix/cpp-primer /Users/god/Git/matrix/cpp-primer /Users/god/Git/matrix/cpp-primer/cmake-build-debug /Users/god/Git/matrix/cpp-primer/cmake-build-debug /Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles/count.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/count.dir/depend

