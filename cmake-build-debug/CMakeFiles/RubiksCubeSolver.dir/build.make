# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/RubiksCubeSolver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/RubiksCubeSolver.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/RubiksCubeSolver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RubiksCubeSolver.dir/flags.make

CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/Solvers/main.cpp
CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\Solvers\main.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\Solvers\main.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Solvers\main.cpp"

CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Solvers\main.cpp" > CMakeFiles\RubiksCubeSolver.dir\Solvers\main.cpp.i

CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Solvers\main.cpp" -o CMakeFiles\RubiksCubeSolver.dir\Solvers\main.cpp.s

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/Models/RubiksCube.cpp
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube.cpp"

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube.cpp" > CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube.cpp.i

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube.cpp" -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube.cpp.s

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/Models/RubiksCube1dArray.cpp
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube1dArray.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube1dArray.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube1dArray.cpp"

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube1dArray.cpp" > CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube1dArray.cpp.i

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube1dArray.cpp" -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube1dArray.cpp.s

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/Models/RubiksCube3dArray.cpp
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube3dArray.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube3dArray.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube3dArray.cpp"

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube3dArray.cpp" > CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube3dArray.cpp.i

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCube3dArray.cpp" -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCube3dArray.cpp.s

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/Models/RubiksCubeBitboard.cpp
CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCubeBitboard.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCubeBitboard.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCubeBitboard.cpp"

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCubeBitboard.cpp" > CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCubeBitboard.cpp.i

CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\Models\RubiksCubeBitboard.cpp" -o CMakeFiles\RubiksCubeSolver.dir\Models\RubiksCubeBitboard.cpp.s

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/PatternDatabases/NibbleArray.cpp
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\NibbleArray.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\NibbleArray.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\NibbleArray.cpp"

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\NibbleArray.cpp" > CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\NibbleArray.cpp.i

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\NibbleArray.cpp" -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\NibbleArray.cpp.s

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/PatternDatabases/PatternDatabases.cpp
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\PatternDatabases.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\PatternDatabases.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\PatternDatabases.cpp"

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\PatternDatabases.cpp" > CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\PatternDatabases.cpp.i

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\PatternDatabases.cpp" -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\PatternDatabases.cpp.s

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/PatternDatabases/CornerPatternDatabase.cpp
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerPatternDatabase.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerPatternDatabase.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerPatternDatabase.cpp"

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerPatternDatabase.cpp" > CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerPatternDatabase.cpp.i

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerPatternDatabase.cpp" -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerPatternDatabase.cpp.s

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/PatternDatabases/math.cpp
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\math.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\math.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\math.cpp"

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\math.cpp" > CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\math.cpp.i

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\math.cpp" -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\math.cpp.s

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/flags.make
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj: C:/Users/prath/OneDrive/Desktop/Projects/Rubik's\ Cube\ Solver/PatternDatabases/CornerDBMaker.cpp
CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj: CMakeFiles/RubiksCubeSolver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj -MF CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerDBMaker.cpp.obj.d -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerDBMaker.cpp.obj -c "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerDBMaker.cpp"

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerDBMaker.cpp" > CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerDBMaker.cpp.i

CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2024.1.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\PatternDatabases\CornerDBMaker.cpp" -o CMakeFiles\RubiksCubeSolver.dir\PatternDatabases\CornerDBMaker.cpp.s

# Object files for target RubiksCubeSolver
RubiksCubeSolver_OBJECTS = \
"CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj" \
"CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj"

# External object files for target RubiksCubeSolver
RubiksCubeSolver_EXTERNAL_OBJECTS =

RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/Solvers/main.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube1dArray.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCube3dArray.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/Models/RubiksCubeBitboard.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/NibbleArray.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/PatternDatabases.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerPatternDatabase.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/math.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/PatternDatabases/CornerDBMaker.cpp.obj
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/build.make
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/linkLibs.rsp
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/objects1.rsp
RubiksCubeSolver.exe: CMakeFiles/RubiksCubeSolver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable RubiksCubeSolver.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RubiksCubeSolver.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RubiksCubeSolver.dir/build: RubiksCubeSolver.exe
.PHONY : CMakeFiles/RubiksCubeSolver.dir/build

CMakeFiles/RubiksCubeSolver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RubiksCubeSolver.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RubiksCubeSolver.dir/clean

CMakeFiles/RubiksCubeSolver.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver" "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver" "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug" "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug" "C:\Users\prath\OneDrive\Desktop\Projects\Rubik's Cube Solver\cmake-build-debug\CMakeFiles\RubiksCubeSolver.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/RubiksCubeSolver.dir/depend
