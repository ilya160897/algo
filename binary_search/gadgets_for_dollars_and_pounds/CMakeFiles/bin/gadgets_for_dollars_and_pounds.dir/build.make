# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bogdanof/algo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bogdanof/algo

# Include any dependencies generated for this target.
include binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/depend.make

# Include the progress variables for this target.
include binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/progress.make

# Include the compile flags for this target's objects.
include binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/flags.make

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/flags.make
binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o: binary_search/gadgets_for_dollars_and_pounds/test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bogdanof/algo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o"
	cd /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds && /home/linuxbrew/.linuxbrew/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o -c /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds/test.cpp

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.i"
	cd /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds/test.cpp > CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.i

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.s"
	cd /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds/test.cpp -o CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.s

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.requires:
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.requires

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.provides: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.requires
	$(MAKE) -f binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/build.make binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.provides.build
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.provides

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.provides.build: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o

# Object files for target bin/gadgets_for_dollars_and_pounds
bin/gadgets_for_dollars_and_pounds_OBJECTS = \
"CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o"

# External object files for target bin/gadgets_for_dollars_and_pounds
bin/gadgets_for_dollars_and_pounds_EXTERNAL_OBJECTS =

bin/gadgets_for_dollars_and_pounds: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o
bin/gadgets_for_dollars_and_pounds: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/build.make
bin/gadgets_for_dollars_and_pounds: libcontrib_catch_main.a
bin/gadgets_for_dollars_and_pounds: graph/graph/libcustom_graph.a
bin/gadgets_for_dollars_and_pounds: math/lib/integer_log/libinteger_log.a
bin/gadgets_for_dollars_and_pounds: graph/lca/max_edge_up_to_lca/libmax_edge_up_to_lca.a
bin/gadgets_for_dollars_and_pounds: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/gadgets_for_dollars_and_pounds"
	cd /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/build: bin/gadgets_for_dollars_and_pounds
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/build

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/requires: binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/test.cpp.o.requires
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/requires

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/clean:
	cd /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds && $(CMAKE_COMMAND) -P CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/cmake_clean.cmake
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/clean

binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/depend:
	cd /home/bogdanof/algo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bogdanof/algo /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds /home/bogdanof/algo /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds /home/bogdanof/algo/binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : binary_search/gadgets_for_dollars_and_pounds/CMakeFiles/bin/gadgets_for_dollars_and_pounds.dir/depend

