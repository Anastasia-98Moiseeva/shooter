# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anastasia/Documents/mipt/3d-graph/shooter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug

# Include any dependencies generated for this target.
include external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/depend.make

# Include the progress variables for this target.
include external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/progress.make

# Include the compile flags for this target's objects.
include external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/flags.make

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.o: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/flags.make
external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.o: ../external/glfw-3.1.2/tests/msaa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.o"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/msaa.dir/msaa.c.o   -c /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/tests/msaa.c

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/msaa.dir/msaa.c.i"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/tests/msaa.c > CMakeFiles/msaa.dir/msaa.c.i

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/msaa.dir/msaa.c.s"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/tests/msaa.c -o CMakeFiles/msaa.dir/msaa.c.s

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.o: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/flags.make
external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.o: ../external/glfw-3.1.2/deps/getopt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.o"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/msaa.dir/__/deps/getopt.c.o   -c /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/deps/getopt.c

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/msaa.dir/__/deps/getopt.c.i"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/deps/getopt.c > CMakeFiles/msaa.dir/__/deps/getopt.c.i

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/msaa.dir/__/deps/getopt.c.s"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/deps/getopt.c -o CMakeFiles/msaa.dir/__/deps/getopt.c.s

# Object files for target msaa
msaa_OBJECTS = \
"CMakeFiles/msaa.dir/msaa.c.o" \
"CMakeFiles/msaa.dir/__/deps/getopt.c.o"

# External object files for target msaa
msaa_EXTERNAL_OBJECTS =

external/glfw-3.1.2/tests/msaa: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/msaa.c.o
external/glfw-3.1.2/tests/msaa: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/__/deps/getopt.c.o
external/glfw-3.1.2/tests/msaa: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/build.make
external/glfw-3.1.2/tests/msaa: external/glfw-3.1.2/src/libglfw3.a
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/librt.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libm.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libX11.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libXrandr.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libXinerama.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libXi.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libXcursor.so
external/glfw-3.1.2/tests/msaa: /usr/lib/x86_64-linux-gnu/libGL.so
external/glfw-3.1.2/tests/msaa: external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable msaa"
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/msaa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/build: external/glfw-3.1.2/tests/msaa

.PHONY : external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/build

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/clean:
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests && $(CMAKE_COMMAND) -P CMakeFiles/msaa.dir/cmake_clean.cmake
.PHONY : external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/clean

external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/depend:
	cd /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anastasia/Documents/mipt/3d-graph/shooter /home/anastasia/Documents/mipt/3d-graph/shooter/external/glfw-3.1.2/tests /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests /home/anastasia/Documents/mipt/3d-graph/shooter/cmake-build-debug/external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : external/glfw-3.1.2/tests/CMakeFiles/msaa.dir/depend

