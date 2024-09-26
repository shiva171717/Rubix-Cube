cmake_minimum_required(VERSION 3.28)
project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubiksCubeSolver Solvers/main.cpp
        Models/RubiksCube.cpp
        Models/RubiksCube.h
        Models/RubiksCube1dArray.cpp
        Models/RubiksCube3dArray.cpp
        Models/RubiksCubeBitboard.cpp
        Solvers/DFSSolver.h
        Solvers/BFSSolver.h
        Solvers/IDDFSSolver.h
        Solvers/IDAstarSolver.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/NibbleArray.h
        PatternDatabases/PatternDatabases.cpp
        PatternDatabases/PatternDatabases.h
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/PermutationIndexer.h
        PatternDatabases/math.h
        PatternDatabases/math.cpp
        PatternDatabases/CornerDBMaker.cpp
        PatternDatabases/CornerDBMaker.h
)
