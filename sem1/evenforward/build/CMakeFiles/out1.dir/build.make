# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/daniel/code/vk/sem1/evenforward/build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniel/code/vk/sem1/evenforward/build

# Include any dependencies generated for this target.
include CMakeFiles/out1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/out1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/out1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/out1.dir/flags.make

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o: CMakeFiles/out1.dir/flags.make
CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o: /home/daniel/code/vk/sem1/evenforward/evenforward1.cc
CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o: CMakeFiles/out1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniel/code/vk/sem1/evenforward/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o -MF CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o.d -o CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o -c /home/daniel/code/vk/sem1/evenforward/evenforward1.cc

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniel/code/vk/sem1/evenforward/evenforward1.cc > CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.i

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniel/code/vk/sem1/evenforward/evenforward1.cc -o CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.s

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o: CMakeFiles/out1.dir/flags.make
CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o: /home/daniel/code/vk/sem1/evenforward/tests.cc
CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o: CMakeFiles/out1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniel/code/vk/sem1/evenforward/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o -MF CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o.d -o CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o -c /home/daniel/code/vk/sem1/evenforward/tests.cc

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniel/code/vk/sem1/evenforward/tests.cc > CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.i

CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniel/code/vk/sem1/evenforward/tests.cc -o CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.s

# Object files for target out1
out1_OBJECTS = \
"CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o" \
"CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o"

# External object files for target out1
out1_EXTERNAL_OBJECTS =

out1: CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/evenforward1.cc.o
out1: CMakeFiles/out1.dir/home/daniel/code/vk/sem1/evenforward/tests.cc.o
out1: CMakeFiles/out1.dir/build.make
out1: lib/libgtest_main.a
out1: lib/libgtest.a
out1: CMakeFiles/out1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daniel/code/vk/sem1/evenforward/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable out1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out1.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=out1 -D TEST_EXECUTABLE=/home/daniel/code/vk/sem1/evenforward/build/out1 -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/daniel/code/vk/sem1/evenforward/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=out1_TESTS -D CTEST_FILE=/home/daniel/code/vk/sem1/evenforward/build/out1[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/out1.dir/build: out1
.PHONY : CMakeFiles/out1.dir/build

CMakeFiles/out1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/out1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/out1.dir/clean

CMakeFiles/out1.dir/depend:
	cd /home/daniel/code/vk/sem1/evenforward/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniel/code/vk/sem1/evenforward/build /home/daniel/code/vk/sem1/evenforward/build /home/daniel/code/vk/sem1/evenforward/build /home/daniel/code/vk/sem1/evenforward/build /home/daniel/code/vk/sem1/evenforward/build/CMakeFiles/out1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/out1.dir/depend

