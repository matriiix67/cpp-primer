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
include CMakeFiles/test_Person.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_Person.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_Person.dir/flags.make

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o: CMakeFiles/test_Person.dir/flags.make
CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o: ../ch07/test_Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o -c /Users/god/Git/matrix/cpp-primer/ch07/test_Person.cpp

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_Person.dir/ch07/test_Person.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/god/Git/matrix/cpp-primer/ch07/test_Person.cpp > CMakeFiles/test_Person.dir/ch07/test_Person.cpp.i

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_Person.dir/ch07/test_Person.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/god/Git/matrix/cpp-primer/ch07/test_Person.cpp -o CMakeFiles/test_Person.dir/ch07/test_Person.cpp.s

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.requires:

.PHONY : CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.requires

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.provides: CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_Person.dir/build.make CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.provides.build
.PHONY : CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.provides

CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.provides.build: CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o


CMakeFiles/test_Person.dir/ch07/Person.cpp.o: CMakeFiles/test_Person.dir/flags.make
CMakeFiles/test_Person.dir/ch07/Person.cpp.o: ../ch07/Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_Person.dir/ch07/Person.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_Person.dir/ch07/Person.cpp.o -c /Users/god/Git/matrix/cpp-primer/ch07/Person.cpp

CMakeFiles/test_Person.dir/ch07/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_Person.dir/ch07/Person.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/god/Git/matrix/cpp-primer/ch07/Person.cpp > CMakeFiles/test_Person.dir/ch07/Person.cpp.i

CMakeFiles/test_Person.dir/ch07/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_Person.dir/ch07/Person.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/god/Git/matrix/cpp-primer/ch07/Person.cpp -o CMakeFiles/test_Person.dir/ch07/Person.cpp.s

CMakeFiles/test_Person.dir/ch07/Person.cpp.o.requires:

.PHONY : CMakeFiles/test_Person.dir/ch07/Person.cpp.o.requires

CMakeFiles/test_Person.dir/ch07/Person.cpp.o.provides: CMakeFiles/test_Person.dir/ch07/Person.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_Person.dir/build.make CMakeFiles/test_Person.dir/ch07/Person.cpp.o.provides.build
.PHONY : CMakeFiles/test_Person.dir/ch07/Person.cpp.o.provides

CMakeFiles/test_Person.dir/ch07/Person.cpp.o.provides.build: CMakeFiles/test_Person.dir/ch07/Person.cpp.o


# Object files for target test_Person
test_Person_OBJECTS = \
"CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o" \
"CMakeFiles/test_Person.dir/ch07/Person.cpp.o"

# External object files for target test_Person
test_Person_EXTERNAL_OBJECTS =

test_Person: CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o
test_Person: CMakeFiles/test_Person.dir/ch07/Person.cpp.o
test_Person: CMakeFiles/test_Person.dir/build.make
test_Person: CMakeFiles/test_Person.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_Person"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_Person.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_Person.dir/build: test_Person

.PHONY : CMakeFiles/test_Person.dir/build

CMakeFiles/test_Person.dir/requires: CMakeFiles/test_Person.dir/ch07/test_Person.cpp.o.requires
CMakeFiles/test_Person.dir/requires: CMakeFiles/test_Person.dir/ch07/Person.cpp.o.requires

.PHONY : CMakeFiles/test_Person.dir/requires

CMakeFiles/test_Person.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_Person.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_Person.dir/clean

CMakeFiles/test_Person.dir/depend:
	cd /Users/god/Git/matrix/cpp-primer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/god/Git/matrix/cpp-primer /Users/god/Git/matrix/cpp-primer /Users/god/Git/matrix/cpp-primer/cmake-build-debug /Users/god/Git/matrix/cpp-primer/cmake-build-debug /Users/god/Git/matrix/cpp-primer/cmake-build-debug/CMakeFiles/test_Person.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_Person.dir/depend

