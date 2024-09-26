
#include<bits/stdc++.h>
#include "../Models/RubiksCube.h"

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

template<typename T,typename H>
class DFSSolver {
private:
    int max_search_depth;
    unordered_map<T,bool,H> visited;
    vector<RubiksCube::MOVE> moves;

    bool dfs(int depth) {
        if(rubikscube.isSolved()) return true;
        if(depth>max_search_depth) return false;
        for(int i=0;i<18;i++) {
            rubikscube.move(RubiksCube::MOVE(i));
            if(visited[rubikscube]==true) {
                rubikscube.invert(RubiksCube::MOVE(i));continue;
            }
            moves.push_back(RubiksCube::MOVE(i));
            visited[rubikscube]=true;
            if(dfs(depth+1)) return true;
            visited[rubikscube]=false;
            moves.pop_back();
            rubikscube.invert(RubiksCube::MOVE(i));
        }
        return false;
    }


public:
    T rubikscube;

    DFSSolver(T _rubikscube,int _max_search_depth= 8) : rubikscube(_rubikscube),max_search_depth(_max_search_depth){}

    vector<RubiksCube::MOVE> solve() {
        dfs(0);
        visited[rubikscube]=true;
        return moves;
    }

};
#endif //DFSSOLVER_H
