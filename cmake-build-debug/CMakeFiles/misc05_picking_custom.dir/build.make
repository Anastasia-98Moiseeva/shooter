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
CMAKE_SOURCE_DIR = /home/anastasia/Documents/mipt/3d-graph/repositories/ogl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/misc05_picking_custom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/misc05_picking_custom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/misc05_picking_custom.dir/flags.make

CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o: ../misc05_picking/misc05_picking_custom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/misc05_picking/misc05_picking_custom.cpp

CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/misc05_picking/misc05_picking_custom.cpp > CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.i

CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/misc05_picking/misc05_picking_custom.cpp -o CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.s

CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o: ../common/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/shader.cpp

CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/shader.cpp > CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.i

CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/shader.cpp -o CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.s

CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o: ../common/controls.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/controls.cpp

CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/controls.cpp > CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.i

CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/controls.cpp -o CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.s

CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o: ../common/texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/texture.cpp

CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/texture.cpp > CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.i

CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/texture.cpp -o CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.s

CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o: ../common/objloader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/objloader.cpp

CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/objloader.cpp > CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.i

CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/objloader.cpp -o CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.s

CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o: CMakeFiles/misc05_picking_custom.dir/flags.make
CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o: ../common/vboindexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o -c /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/vboindexer.cpp

CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/vboindexer.cpp > CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.i

CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/common/vboindexer.cpp -o CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.s

# Object files for target misc05_picking_custom
misc05_picking_custom_OBJECTS = \
"CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o" \
"CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o" \
"CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o" \
"CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o" \
"CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o" \
"CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o"

# External object files for target misc05_picking_custom
misc05_picking_custom_EXTERNAL_OBJECTS =

misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/misc05_picking/misc05_picking_custom.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/common/shader.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/common/controls.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/common/texture.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/common/objloader.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/common/vboindexer.cpp.o
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/build.make
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libGL.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libGLU.so
misc05_picking_custom: external/glfw-3.1.2/src/libglfw3.a
misc05_picking_custom: external/libGLEW_1130.a
misc05_picking_custom: external/libANTTWEAKBAR_116_OGLCORE_GLFW.a
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/librt.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libm.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libX11.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXrandr.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXinerama.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXi.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXcursor.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/librt.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libm.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libX11.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXrandr.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXinerama.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXi.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libXcursor.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libGL.so
misc05_picking_custom: /usr/lib/x86_64-linux-gnu/libGLU.so
misc05_picking_custom: CMakeFiles/misc05_picking_custom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable misc05_picking_custom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/misc05_picking_custom.dir/link.txt --verbose=$(VERBOSE)
	/snap/clion/107/bin/cmake/linux/bin/cmake -E copy /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/./misc05_picking_custom /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/misc05_picking/

# Rule to build all files generated by this target.
CMakeFiles/misc05_picking_custom.dir/build: misc05_picking_custom

.PHONY : CMakeFiles/misc05_picking_custom.dir/build

CMakeFiles/misc05_picking_custom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/misc05_picking_custom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/misc05_picking_custom.dir/clean

CMakeFiles/misc05_picking_custom.dir/depend:
	cd /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anastasia/Documents/mipt/3d-graph/repositories/ogl /home/anastasia/Documents/mipt/3d-graph/repositories/ogl /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug /home/anastasia/Documents/mipt/3d-graph/repositories/ogl/cmake-build-debug/CMakeFiles/misc05_picking_custom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/misc05_picking_custom.dir/depend

