# Rubik's Cube Solver

This project is a C++ implementation of a Rubik's Cube solver that utilizes Korf's Iterative Deepening A* (IDA*) algorithm. The solver also incorporates Breadth-First Search (BFS), Depth-First Search (DFS), and Iterative Deepening Depth-First Search (IDDFS) algorithms for comparison and analysis.

## Features

* Efficiently solves Rubik's Cubes using Korf's IDA* algorithm.
* Includes implementation of BFS, DFS, and IDDFS for reference.
* Utilizes three different data structures to model the cube for optimal performance.

## Performance

* Achieves sub-3-second solving times for cubes scrambled up to 8 times using BFS, DFS, and IDDFS.
* Optimizes the solution using Korf's IDA* algorithm, resulting in sub-10-second solving times for cubes scrambled up to 13 times.
