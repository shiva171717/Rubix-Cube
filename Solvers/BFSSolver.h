
#include<bits/stdc++.h>
#include "../Models/RubiksCube.h"

#ifndef BFSSOLVER_H
#define BFSSOLVER_H

template<typename T,typename H>
class BFSSolver {
private:
    unordered_map<T,RubiksCube::MOVE,H> back_pointer;
    unordered_map<T,bool,H> visited;
    vector<RubiksCube::MOVE> moves;

     T bfs() {
         queue<T> q;
         q.push(rubikscube);
         visited[rubikscube]=true;
         // map<vector<int>,int> mp;
         // vector<int>t(6);
         // mp[t]+=1;

         int cnt=0;

         while(!q.empty()) {
             T node = q.front();q.pop();
             // cout<<cnt<<endl;
             if(node.isSolved()) {
                 return node;
             }
             for(int i=0;i<18;i++) {
                 node.move(RubiksCube::MOVE(i));
                 // for(int i=0;i<6;i++) {
                 //     t[i]=node.cube[i];
                 // }
                 if (visited[node]==false) {
                     visited[node]=true;
                     // mp[t]+=1;
                     q.push(node);
                     back_pointer[node] = RubiksCube::MOVE(i);
                 }
                 node.invert(RubiksCube::MOVE(i));

             }
         }

         // for(auto it:mp) {
         //     if(it.second>1) cout<<it.second<<endl;
         // }

         return rubikscube;
     }


public:
    T rubikscube;

    BFSSolver(T _rubikscube) : rubikscube(_rubikscube){}

    vector<RubiksCube::MOVE> solve() {

        T solved_cube = bfs();
        auto curr_node = solved_cube;
        while(!(curr_node==rubikscube)) {
            moves.push_back(back_pointer[curr_node]);
            curr_node.invert(back_pointer[curr_node]);
        }
        rubikscube=solved_cube;
        reverse(moves.begin(),moves.end());
        return moves;
    }

};

#endif //BFSSOLVER_H
