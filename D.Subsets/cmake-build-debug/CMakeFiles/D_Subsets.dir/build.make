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
CMAKE_SOURCE_DIR = C:\Users\ahmed\CLionProjects\D.Subsets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/D_Subsets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/D_Subsets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/D_Subsets.dir/flags.make

CMakeFiles/D_Subsets.dir/main.cpp.obj: CMakeFiles/D_Subsets.dir/flags.make
CMakeFiles/D_Subsets.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/D_Subsets.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\D_Subsets.dir\main.cpp.obj -c C:\Users\ahmed\CLionProjects\D.Subsets\main.cpp

CMakeFiles/D_Subsets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/D_Subsets.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ahmed\CLionProjects\D.Subsets\main.cpp > CMakeFiles\D_Subsets.dir\main.cpp.i

CMakeFiles/D_Subsets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/D_Subsets.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ahmed\CLionProjects\D.Subsets\main.cpp -o CMakeFiles\D_Subsets.dir\main.cpp.s

# Object files for target D_Subsets
D_Subsets_OBJECTS = \
"CMakeFiles/D_Subsets.dir/main.cpp.obj"

# External object files for target D_Subsets
D_Subsets_EXTERNAL_OBJECTS =

D_Subsets.exe: CMakeFiles/D_Subsets.dir/main.cpp.obj
D_Subsets.exe: CMakeFiles/D_Subsets.dir/build.make
D_Subsets.exe: CMakeFiles/D_Subsets.dir/linklibs.rsp
D_Subsets.exe: CMakeFiles/D_Subsets.dir/objects1.rsp
D_Subsets.exe: CMakeFiles/D_Subsets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable D_Subsets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\D_Subsets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/D_Subsets.dir/build: D_Subsets.exe

.PHONY : CMakeFiles/D_Subsets.dir/build

CMakeFiles/D_Subsets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\D_Subsets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/D_Subsets.dir/clean

CMakeFiles/D_Subsets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ahmed\CLionProjects\D.Subsets C:\Users\ahmed\CLionProjects\D.Subsets C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug C:\Users\ahmed\CLionProjects\D.Subsets\cmake-build-debug\CMakeFiles\D_Subsets.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/D_Subsets.dir/depend

