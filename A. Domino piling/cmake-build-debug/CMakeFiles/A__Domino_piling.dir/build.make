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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CLion-2020.3.2\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\CLion-2020.3.2\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\ahmed\CLionProjects\A. Domino piling"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A__Domino_piling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A__Domino_piling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A__Domino_piling.dir/flags.make

CMakeFiles/A__Domino_piling.dir/main.cpp.obj: CMakeFiles/A__Domino_piling.dir/flags.make
CMakeFiles/A__Domino_piling.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A__Domino_piling.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A__Domino_piling.dir\main.cpp.obj -c "C:\Users\ahmed\CLionProjects\A. Domino piling\main.cpp"

CMakeFiles/A__Domino_piling.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A__Domino_piling.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ahmed\CLionProjects\A. Domino piling\main.cpp" > CMakeFiles\A__Domino_piling.dir\main.cpp.i

CMakeFiles/A__Domino_piling.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A__Domino_piling.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ahmed\CLionProjects\A. Domino piling\main.cpp" -o CMakeFiles\A__Domino_piling.dir\main.cpp.s

# Object files for target A__Domino_piling
A__Domino_piling_OBJECTS = \
"CMakeFiles/A__Domino_piling.dir/main.cpp.obj"

# External object files for target A__Domino_piling
A__Domino_piling_EXTERNAL_OBJECTS =

A__Domino_piling.exe: CMakeFiles/A__Domino_piling.dir/main.cpp.obj
A__Domino_piling.exe: CMakeFiles/A__Domino_piling.dir/build.make
A__Domino_piling.exe: CMakeFiles/A__Domino_piling.dir/linklibs.rsp
A__Domino_piling.exe: CMakeFiles/A__Domino_piling.dir/objects1.rsp
A__Domino_piling.exe: CMakeFiles/A__Domino_piling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A__Domino_piling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A__Domino_piling.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A__Domino_piling.dir/build: A__Domino_piling.exe

.PHONY : CMakeFiles/A__Domino_piling.dir/build

CMakeFiles/A__Domino_piling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\A__Domino_piling.dir\cmake_clean.cmake
.PHONY : CMakeFiles/A__Domino_piling.dir/clean

CMakeFiles/A__Domino_piling.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ahmed\CLionProjects\A. Domino piling" "C:\Users\ahmed\CLionProjects\A. Domino piling" "C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug" "C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug" "C:\Users\ahmed\CLionProjects\A. Domino piling\cmake-build-debug\CMakeFiles\A__Domino_piling.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A__Domino_piling.dir/depend

