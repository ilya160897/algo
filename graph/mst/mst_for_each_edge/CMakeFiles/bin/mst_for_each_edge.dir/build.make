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
include graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/depend.make

# Include the progress variables for this target.
include graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/progress.make

# Include the compile flags for this target's objects.
include graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/flags.make

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/flags.make
graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o: graph/mst/mst_for_each_edge/test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bogdanof/algo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o"
	cd /home/bogdanof/algo/graph/mst/mst_for_each_edge && /home/linuxbrew/.linuxbrew/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o -c /home/bogdanof/algo/graph/mst/mst_for_each_edge/test.cpp

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.i"
	cd /home/bogdanof/algo/graph/mst/mst_for_each_edge && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bogdanof/algo/graph/mst/mst_for_each_edge/test.cpp > CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.i

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.s"
	cd /home/bogdanof/algo/graph/mst/mst_for_each_edge && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bogdanof/algo/graph/mst/mst_for_each_edge/test.cpp -o CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.s

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.requires:
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.requires

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.provides: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.requires
	$(MAKE) -f graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/build.make graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.provides.build
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.provides

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.provides.build: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o

# Object files for target bin/mst_for_each_edge
bin/mst_for_each_edge_OBJECTS = \
"CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o"

# External object files for target bin/mst_for_each_edge
bin/mst_for_each_edge_EXTERNAL_OBJECTS =

bin/mst_for_each_edge: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o
bin/mst_for_each_edge: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/build.make
bin/mst_for_each_edge: libcontrib_catch_main.a
bin/mst_for_each_edge: graph/graph/libcustom_graph.a
bin/mst_for_each_edge: math/lib/integer_log/libinteger_log.a
bin/mst_for_each_edge: graph/lca/max_edge_up_to_lca/libmax_edge_up_to_lca.a
bin/mst_for_each_edge: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/mst_for_each_edge"
	cd /home/bogdanof/algo/graph/mst/mst_for_each_edge && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bin/mst_for_each_edge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/build: bin/mst_for_each_edge
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/build

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/requires: graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/test.cpp.o.requires
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/requires

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/clean:
	cd /home/bogdanof/algo/graph/mst/mst_for_each_edge && $(CMAKE_COMMAND) -P CMakeFiles/bin/mst_for_each_edge.dir/cmake_clean.cmake
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/clean

graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/depend:
	cd /home/bogdanof/algo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bogdanof/algo /home/bogdanof/algo/graph/mst/mst_for_each_edge /home/bogdanof/algo /home/bogdanof/algo/graph/mst/mst_for_each_edge /home/bogdanof/algo/graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graph/mst/mst_for_each_edge/CMakeFiles/bin/mst_for_each_edge.dir/depend

