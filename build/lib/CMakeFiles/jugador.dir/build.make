# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = F:\Cmake\bin\cmake.exe

# The command to remove a file.
RM = F:\Cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = G:\codificacion\c++\proyecto\tateti

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = G:\codificacion\c++\proyecto\tateti\build

# Include any dependencies generated for this target.
include lib/CMakeFiles/jugador.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/jugador.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/jugador.dir/flags.make

lib/CMakeFiles/jugador.dir/jugador.cpp.obj: lib/CMakeFiles/jugador.dir/flags.make
lib/CMakeFiles/jugador.dir/jugador.cpp.obj: ../lib/jugador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=G:\codificacion\c++\proyecto\tateti\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/jugador.dir/jugador.cpp.obj"
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\jugador.dir\jugador.cpp.obj -c G:\codificacion\c++\proyecto\tateti\lib\jugador.cpp

lib/CMakeFiles/jugador.dir/jugador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jugador.dir/jugador.cpp.i"
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E G:\codificacion\c++\proyecto\tateti\lib\jugador.cpp > CMakeFiles\jugador.dir\jugador.cpp.i

lib/CMakeFiles/jugador.dir/jugador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jugador.dir/jugador.cpp.s"
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S G:\codificacion\c++\proyecto\tateti\lib\jugador.cpp -o CMakeFiles\jugador.dir\jugador.cpp.s

# Object files for target jugador
jugador_OBJECTS = \
"CMakeFiles/jugador.dir/jugador.cpp.obj"

# External object files for target jugador
jugador_EXTERNAL_OBJECTS =

lib/libjugador.a: lib/CMakeFiles/jugador.dir/jugador.cpp.obj
lib/libjugador.a: lib/CMakeFiles/jugador.dir/build.make
lib/libjugador.a: lib/CMakeFiles/jugador.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=G:\codificacion\c++\proyecto\tateti\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libjugador.a"
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\jugador.dir\cmake_clean_target.cmake
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\jugador.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/jugador.dir/build: lib/libjugador.a

.PHONY : lib/CMakeFiles/jugador.dir/build

lib/CMakeFiles/jugador.dir/clean:
	cd /d G:\codificacion\c++\proyecto\tateti\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\jugador.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/jugador.dir/clean

lib/CMakeFiles/jugador.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\codificacion\c++\proyecto\tateti G:\codificacion\c++\proyecto\tateti\lib G:\codificacion\c++\proyecto\tateti\build G:\codificacion\c++\proyecto\tateti\build\lib G:\codificacion\c++\proyecto\tateti\build\lib\CMakeFiles\jugador.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/jugador.dir/depend

