# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\danie\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\danie\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Summenberechnung.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Summenberechnung.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Summenberechnung.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Summenberechnung.dir/flags.make

CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj: CMakeFiles/Summenberechnung.dir/flags.make
CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj: C:/Users/danie/Documents/Programmieren/Tutorium_MdSE1/Uez1/Summenberechnung.c
CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj: CMakeFiles/Summenberechnung.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj"
	C:\Users\danie\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj -MF CMakeFiles\Summenberechnung.dir\Summenberechnung.c.obj.d -o CMakeFiles\Summenberechnung.dir\Summenberechnung.c.obj -c C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\Summenberechnung.c

CMakeFiles/Summenberechnung.dir/Summenberechnung.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Summenberechnung.dir/Summenberechnung.c.i"
	C:\Users\danie\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\Summenberechnung.c > CMakeFiles\Summenberechnung.dir\Summenberechnung.c.i

CMakeFiles/Summenberechnung.dir/Summenberechnung.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Summenberechnung.dir/Summenberechnung.c.s"
	C:\Users\danie\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\Summenberechnung.c -o CMakeFiles\Summenberechnung.dir\Summenberechnung.c.s

# Object files for target Summenberechnung
Summenberechnung_OBJECTS = \
"CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj"

# External object files for target Summenberechnung
Summenberechnung_EXTERNAL_OBJECTS =

Summenberechnung.exe: CMakeFiles/Summenberechnung.dir/Summenberechnung.c.obj
Summenberechnung.exe: CMakeFiles/Summenberechnung.dir/build.make
Summenberechnung.exe: CMakeFiles/Summenberechnung.dir/linkLibs.rsp
Summenberechnung.exe: CMakeFiles/Summenberechnung.dir/objects1.rsp
Summenberechnung.exe: CMakeFiles/Summenberechnung.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Summenberechnung.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Summenberechnung.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Summenberechnung.dir/build: Summenberechnung.exe
.PHONY : CMakeFiles/Summenberechnung.dir/build

CMakeFiles/Summenberechnung.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Summenberechnung.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Summenberechnung.dir/clean

CMakeFiles/Summenberechnung.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1 C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1 C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug C:\Users\danie\Documents\Programmieren\Tutorium_MdSE1\Uez1\cmake-build-debug\CMakeFiles\Summenberechnung.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Summenberechnung.dir/depend

