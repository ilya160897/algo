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
include graph/graph/CMakeFiles/bin/graph.dir/depend.make

# Include the progress variables for this target.
include graph/graph/CMakeFiles/bin/graph.dir/progress.make

# Include the compile flags for this target's objects.
include graph/graph/CMakeFiles/bin/graph.dir/flags.make

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o: graph/graph/CMakeFiles/bin/graph.dir/flags.make
graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o: graph/graph/test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bogdanof/algo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bin/graph.dir/test.cpp.o -c /home/bogdanof/algo/graph/graph/test.cpp

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bin/graph.dir/test.cpp.i"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bogdanof/algo/graph/graph/test.cpp > CMakeFiles/bin/graph.dir/test.cpp.i

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bin/graph.dir/test.cpp.s"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bogdanof/algo/graph/graph/test.cpp -o CMakeFiles/bin/graph.dir/test.cpp.s

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.requires:
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.requires

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.provides: graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.requires
	$(MAKE) -f graph/graph/CMakeFiles/bin/graph.dir/build.make graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.provides.build
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.provides

graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.provides.build: graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o: graph/graph/CMakeFiles/bin/graph.dir/flags.make
graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o: graph/graph/graph.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bogdanof/algo/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bin/graph.dir/graph.cpp.o -c /home/bogdanof/algo/graph/graph/graph.cpp

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bin/graph.dir/graph.cpp.i"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bogdanof/algo/graph/graph/graph.cpp > CMakeFiles/bin/graph.dir/graph.cpp.i

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bin/graph.dir/graph.cpp.s"
	cd /home/bogdanof/algo/graph/graph && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bogdanof/algo/graph/graph/graph.cpp -o CMakeFiles/bin/graph.dir/graph.cpp.s

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.requires:
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.requires

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.provides: graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.requires
	$(MAKE) -f graph/graph/CMakeFiles/bin/graph.dir/build.make graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.provides.build
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.provides

graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.provides.build: graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o

# Object files for target bin/graph
bin/graph_OBJECTS = \
"CMakeFiles/bin/graph.dir/test.cpp.o" \
"CMakeFiles/bin/graph.dir/graph.cpp.o"

# External object files for target bin/graph
bin/graph_EXTERNAL_OBJECTS =

bin/graph: graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o
bin/graph: graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o
bin/graph: graph/graph/CMakeFiles/bin/graph.dir/build.make
bin/graph: libcontrib_catch_main.a
bin/graph: graph/graph/libcustom_graph.a
bin/graph: math/lib/integer_log/libinteger_log.a
bin/graph: graph/lca/max_edge_up_to_lca/libmax_edge_up_to_lca.a
bin/graph: graph/graph/CMakeFiles/bin/graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/graph"
	cd /home/bogdanof/algo/graph/graph && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bin/graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graph/graph/CMakeFiles/bin/graph.dir/build: bin/graph
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/build

graph/graph/CMakeFiles/bin/graph.dir/requires: graph/graph/CMakeFiles/bin/graph.dir/test.cpp.o.requires
graph/graph/CMakeFiles/bin/graph.dir/requires: graph/graph/CMakeFiles/bin/graph.dir/graph.cpp.o.requires
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/requires

graph/graph/CMakeFiles/bin/graph.dir/clean:
	cd /home/bogdanof/algo/graph/graph && $(CMAKE_COMMAND) -P CMakeFiles/bin/graph.dir/cmake_clean.cmake
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/clean

graph/graph/CMakeFiles/bin/graph.dir/depend:
	cd /home/bogdanof/algo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bogdanof/algo /home/bogdanof/algo/graph/graph /home/bogdanof/algo /home/bogdanof/algo/graph/graph /home/bogdanof/algo/graph/graph/CMakeFiles/bin/graph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graph/graph/CMakeFiles/bin/graph.dir/depend

