# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = D:\usefulTools\Cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\usefulTools\Cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Git_Project\github\file_module

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Git_Project\github\file_module\build

# Include any dependencies generated for this target.
include CMakeFiles/Testfile.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Testfile.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Testfile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Testfile.dir/flags.make

CMakeFiles/Testfile.dir/test.cpp.obj: CMakeFiles/Testfile.dir/flags.make
CMakeFiles/Testfile.dir/test.cpp.obj: CMakeFiles/Testfile.dir/includes_CXX.rsp
CMakeFiles/Testfile.dir/test.cpp.obj: D:/Git_Project/github/file_module/test.cpp
CMakeFiles/Testfile.dir/test.cpp.obj: CMakeFiles/Testfile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Git_Project\github\file_module\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Testfile.dir/test.cpp.obj"
	D:\usefulTools\MinGW\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Testfile.dir/test.cpp.obj -MF CMakeFiles\Testfile.dir\test.cpp.obj.d -o CMakeFiles\Testfile.dir\test.cpp.obj -c D:\Git_Project\github\file_module\test.cpp

CMakeFiles/Testfile.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Testfile.dir/test.cpp.i"
	D:\usefulTools\MinGW\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Git_Project\github\file_module\test.cpp > CMakeFiles\Testfile.dir\test.cpp.i

CMakeFiles/Testfile.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Testfile.dir/test.cpp.s"
	D:\usefulTools\MinGW\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Git_Project\github\file_module\test.cpp -o CMakeFiles\Testfile.dir\test.cpp.s

# Object files for target Testfile
Testfile_OBJECTS = \
"CMakeFiles/Testfile.dir/test.cpp.obj"

# External object files for target Testfile
Testfile_EXTERNAL_OBJECTS =

Testfile.exe: CMakeFiles/Testfile.dir/test.cpp.obj
Testfile.exe: CMakeFiles/Testfile.dir/build.make
Testfile.exe: Cpp/libFileCpp.a
Testfile.exe: CMakeFiles/Testfile.dir/linkLibs.rsp
Testfile.exe: CMakeFiles/Testfile.dir/objects1.rsp
Testfile.exe: CMakeFiles/Testfile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Git_Project\github\file_module\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Testfile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Testfile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Testfile.dir/build: Testfile.exe
.PHONY : CMakeFiles/Testfile.dir/build

CMakeFiles/Testfile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Testfile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Testfile.dir/clean

CMakeFiles/Testfile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Git_Project\github\file_module D:\Git_Project\github\file_module D:\Git_Project\github\file_module\build D:\Git_Project\github\file_module\build D:\Git_Project\github\file_module\build\CMakeFiles\Testfile.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Testfile.dir/depend

