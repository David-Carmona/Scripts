# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/traxas_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/traxas_ws/build

# Utility rule file for suitesparse_package.

# Include the progress variables for this target.
include suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/progress.make

suitesparse_package: suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/build.make

.PHONY : suitesparse_package

# Rule to build all files generated by this target.
suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/build: suitesparse_package

.PHONY : suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/build

suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/clean:
	cd /home/david/traxas_ws/build/suitesparse/suitesparse && $(CMAKE_COMMAND) -P CMakeFiles/suitesparse_package.dir/cmake_clean.cmake
.PHONY : suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/clean

suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/depend:
	cd /home/david/traxas_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/traxas_ws/src /home/david/traxas_ws/src/suitesparse/suitesparse /home/david/traxas_ws/build /home/david/traxas_ws/build/suitesparse/suitesparse /home/david/traxas_ws/build/suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : suitesparse/suitesparse/CMakeFiles/suitesparse_package.dir/depend
