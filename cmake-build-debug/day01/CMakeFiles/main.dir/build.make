# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\c_test_pro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\c_test_pro\cmake-build-debug

# Include any dependencies generated for this target.
include day01/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include day01/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include day01/CMakeFiles/main.dir/flags.make

day01/CMakeFiles/main.dir/main.c.obj: day01/CMakeFiles/main.dir/flags.make
day01/CMakeFiles/main.dir/main.c.obj: day01/CMakeFiles/main.dir/includes_C.rsp
day01/CMakeFiles/main.dir/main.c.obj: ../day01/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\c_test_pro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object day01/CMakeFiles/main.dir/main.c.obj"
	cd /d F:\c_test_pro\cmake-build-debug\day01 && F:\mingw\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\main.dir\main.c.obj   -c F:\c_test_pro\day01\main.c

day01/CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	cd /d F:\c_test_pro\cmake-build-debug\day01 && F:\mingw\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\c_test_pro\day01\main.c > CMakeFiles\main.dir\main.c.i

day01/CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	cd /d F:\c_test_pro\cmake-build-debug\day01 && F:\mingw\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\c_test_pro\day01\main.c -o CMakeFiles\main.dir\main.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

day01/main.exe: day01/CMakeFiles/main.dir/main.c.obj
day01/main.exe: day01/CMakeFiles/main.dir/build.make
day01/main.exe: day01/CMakeFiles/main.dir/linklibs.rsp
day01/main.exe: day01/CMakeFiles/main.dir/objects1.rsp
day01/main.exe: day01/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\c_test_pro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable main.exe"
	cd /d F:\c_test_pro\cmake-build-debug\day01 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
day01/CMakeFiles/main.dir/build: day01/main.exe

.PHONY : day01/CMakeFiles/main.dir/build

day01/CMakeFiles/main.dir/clean:
	cd /d F:\c_test_pro\cmake-build-debug\day01 && $(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : day01/CMakeFiles/main.dir/clean

day01/CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\c_test_pro F:\c_test_pro\day01 F:\c_test_pro\cmake-build-debug F:\c_test_pro\cmake-build-debug\day01 F:\c_test_pro\cmake-build-debug\day01\CMakeFiles\main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : day01/CMakeFiles/main.dir/depend

