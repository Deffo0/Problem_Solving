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
CMAKE_SOURCE_DIR = "C:\Users\ahmed\CLionProjects\F.Number of Ways"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/F_Number_of_Ways.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/F_Number_of_Ways.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/F_Number_of_Ways.dir/flags.make

CMakeFiles/F_Number_of_Ways.dir/main.cpp.obj: CMakeFiles/F_Number_of_Ways.dir/flags.make
CMakeFiles/F_Number_of_Ways.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/F_Number_of_Ways.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\F_Number_of_Ways.dir\main.cpp.obj -c "C:\Users\ahmed\CLionProjects\F.Number of Ways\main.cpp"

CMakeFiles/F_Number_of_Ways.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/F_Number_of_Ways.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ahmed\CLionProjects\F.Number of Ways\main.cpp" > CMakeFiles\F_Number_of_Ways.dir\main.cpp.i

CMakeFiles/F_Number_of_Ways.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/F_Number_of_Ways.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ahmed\CLionProjects\F.Number of Ways\main.cpp" -o CMakeFiles\F_Number_of_Ways.dir\main.cpp.s

# Object files for target F_Number_of_Ways
F_Number_of_Ways_OBJECTS = \
"CMakeFiles/F_Number_of_Ways.dir/main.cpp.obj"

# External object files for target F_Number_of_Ways
F_Number_of_Ways_EXTERNAL_OBJECTS =

F_Number_of_Ways.exe: CMakeFiles/F_Number_of_Ways.dir/main.cpp.obj
F_Number_of_Ways.exe: CMakeFiles/F_Number_of_Ways.dir/build.make
F_Number_of_Ways.exe: CMakeFiles/F_Number_of_Ways.dir/linklibs.rsp
F_Number_of_Ways.exe: CMakeFiles/F_Number_of_Ways.dir/objects1.rsp
F_Number_of_Ways.exe: CMakeFiles/F_Number_of_Ways.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable F_Number_of_Ways.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\F_Number_of_Ways.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/F_Number_of_Ways.dir/build: F_Number_of_Ways.exe

.PHONY : CMakeFiles/F_Number_of_Ways.dir/build

CMakeFiles/F_Number_of_Ways.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\F_Number_of_Ways.dir\cmake_clean.cmake
.PHONY : CMakeFiles/F_Number_of_Ways.dir/clean

CMakeFiles/F_Number_of_Ways.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ahmed\CLionProjects\F.Number of Ways" "C:\Users\ahmed\CLionProjects\F.Number of Ways" "C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug" "C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug" "C:\Users\ahmed\CLionProjects\F.Number of Ways\cmake-build-debug\CMakeFiles\F_Number_of_Ways.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/F_Number_of_Ways.dir/depend

