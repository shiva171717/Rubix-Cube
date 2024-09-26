#include<bits/stdc++.h>
#include "../Models/RubiksCube1dArray.cpp"
#include "../Models/RubiksCube3dArray.cpp"
#include "DFSSolver.h"
#include "BFSSolver.h"
#include "IDDFSSolver.h"
#include "IDAstarSolver.h"
#include "../PatternDatabases/CornerDBMaker.h"
#include "../PatternDatabases/CornerPatternDatabase.h"

int main() {


    // cube.l2();
    // cube.b2();
    // cube.r();
    // cube.f2();
    // cube.u();
    // cube.r2();

    // for(int i=0;i<10;i++){
    //     RubiksCubeBitboard cube;
    //     vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
    //     for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //
    //
    //     cube.print();
    //
    //     DFSSolver<RubiksCubeBitboard, HashBitBoard> dfsSolver(cube,6);
    //     vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();
    //
    //     for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //     dfsSolver.rubikscube.print();
    // }




    // unordered_map<RubiksCubeBitboard,bool,HashBitBoard> mp;

    // cube.l2();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;
    // cube.b2();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;
    // cube.r();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;
    // cube.f2();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;
    // cube.u();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;
    // cube.r2();
    // cout<<mp[cube]<<"\n";
    // mp[cube]=true;

    // cube.r2();
    // cout<<mp[cube]<<endl;

    // cube.print();

    // cube.lPrime();
    // cube.print();
    // for(int i=0;i<30;i++){
    //     RubiksCubeBitboard cube;
    //     vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
    //     for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //     cube.print();
    //
    //     BFSSolver<RubiksCubeBitboard, HashBitBoard> bfsSolver(cube);
    //     vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();
    //
    //     for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //     bfsSolver.rubikscube.print();
    // }



    // cube.l2();
    // cube.b2();
    // cube.r();
    // cube.f2();
    // cube.u();
    // cube.r2();

    // for(int i=0;i<10;i++){
    //     RubiksCube3dArray cube;
    //     vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
    //     for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //
    //
    //     cube.print();
    //
    //     IDDFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube,6);
    //     vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();
    //
    //     for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    //     cout << "\n";
    //     dfsSolver.rubikscube.print();
    // }


    // CornerPatternDatabase cornerDB(0x99);
    // RubiksCubeBitboard cube;
    // // cout<<cornerDB.getDatabaseIndex(cube)<<endl;
    // cube.print();
    //
    // cout << (int)cornerDB.getNumMoves(cube) << "\n";
    //
    // cornerDB.setNummoves(cube, 5);
    //
    // cout << (int)cornerDB.getNumMoves(cube) << "\n";
    //
    // cube.randomShuffleCube(1);
    // cube.print();
    // cout << (int)cornerDB.getNumMoves(cube) << "\n";
    //
    // cornerDB.setNummoves(cube, 6);
    //
    // cout << (int)cornerDB.getNumMoves(cube) << "\n";


    string fileName = "C:\\Users\\prath\\OneDrive\\Desktop\\Projects\\Rubik's Cube Solver\\Databases\\cornerDatabase.txt";

    // CornerDBMaker dbMaker(fileName, 0x99);
    // dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();
    cout << "\n";

    IDASTARSOLVER<RubiksCubeBitboard,HashBitBoard> idastarSolver(cube,fileName);

    vector<RubiksCube::MOVE> solve_moves = idastarSolver.solve();

    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    idastarSolver.rubikscube.print();

}
