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
include k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/depend.make

# Include the progress variables for this target.
include k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/progress.make

# Include the compile flags for this target's objects.
include k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/flags.make

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/flags.make
k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o: k_dominant_characters/test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bogdanof/algo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o"
	cd /home/bogdanof/algo/k_dominant_characters && /home/linuxbrew/.linuxbrew/bin/clang++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_k_dominant_characters.dir/test.cpp.o -c /home/bogdanof/algo/k_dominant_characters/test.cpp

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_k_dominant_characters.dir/test.cpp.i"
	cd /home/bogdanof/algo/k_dominant_characters && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/bogdanof/algo/k_dominant_characters/test.cpp > CMakeFiles/test_k_dominant_characters.dir/test.cpp.i

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_k_dominant_characters.dir/test.cpp.s"
	cd /home/bogdanof/algo/k_dominant_characters && /home/linuxbrew/.linuxbrew/bin/clang++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/bogdanof/algo/k_dominant_characters/test.cpp -o CMakeFiles/test_k_dominant_characters.dir/test.cpp.s

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.requires:
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.requires

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.provides: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.requires
	$(MAKE) -f k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/build.make k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.provides.build
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.provides

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.provides.build: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o

# Object files for target test_k_dominant_characters
test_k_dominant_characters_OBJECTS = \
"CMakeFiles/test_k_dominant_characters.dir/test.cpp.o"

# External object files for target test_k_dominant_characters
test_k_dominant_characters_EXTERNAL_OBJECTS =

test_k_dominant_characters: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o
test_k_dominant_characters: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/build.make
test_k_dominant_characters: libcontrib_catch_main.a
test_k_dominant_characters: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../test_k_dominant_characters"
	cd /home/bogdanof/algo/k_dominant_characters && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_k_dominant_characters.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/build: test_k_dominant_characters
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/build

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/requires: k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/test.cpp.o.requires
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/requires

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/clean:
	cd /home/bogdanof/algo/k_dominant_characters && $(CMAKE_COMMAND) -P CMakeFiles/test_k_dominant_characters.dir/cmake_clean.cmake
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/clean

k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/depend:
	cd /home/bogdanof/algo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bogdanof/algo /home/bogdanof/algo/k_dominant_characters /home/bogdanof/algo /home/bogdanof/algo/k_dominant_characters /home/bogdanof/algo/k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : k_dominant_characters/CMakeFiles/test_k_dominant_characters.dir/depend

