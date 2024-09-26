
#include<bits/stdc++.h>
#include "../Models/RubiksCube.h"
#include "../PatternDatabases/CornerPatternDatabase.h"
#ifndef IDASTARSOLVER_H
#define IDASTARSOLVER_H

template<typename T,typename H>
class IDASTARSOLVER {
private:
    CornerPatternDatabase cornerDB;
    vector<RubiksCube::MOVE> moves;
    unordered_map<T,RubiksCube::MOVE,H> back_pointer;
    unordered_map<T,bool,H> visited;

    struct Node {
        T cube;
        int depth;
        int estimate;

        Node(T _cube, int _depth, int _estimate) : cube(_cube), depth(_depth), estimate(_estimate) {};
    };

    struct compareNode{
        bool operator()(pair<Node,int>const &p1,pair<Node,int> &p2) {
            Node n1 = p1.first, n2 = p2.first;
            if(n1.depth+n1.estimate==n2.depth+n2.estimate) {
                return n1.estimate>n2.estimate;
            }
            else {
                return n1.estimate+n1.depth > n2.estimate+n2.depth;
            }
        }
    };


    void resetStructure() {
        moves.clear();
        back_pointer.clear();
        visited.clear();
    }

    pair<T,int> IDAstar(int bound) {
        priority_queue<pair<Node,int>,vector<pair<Node,int>>,compareNode> pq;
        Node start = Node(rubikscube,0,cornerDB.getNumMoves(rubikscube));

        pq.push(make_pair(start,0));
        int next_bound = 100;
        while(!pq.empty()) {
            pair<Node,int> f = pq.top();pq.pop();
            Node node = f.first;
            if(visited[node.cube]) continue;

            visited[node.cube]=true;
            back_pointer[node.cube]=RubiksCube::MOVE(f.second);

            if(node.cube.isSolved()) return make_pair(node.cube,bound);

            node.depth++;

            for(int i=0;i<18;i++) {
                auto curr_move = RubiksCube::MOVE(i);
                node.cube.move(curr_move);
                if(!visited[node.cube]) {
                    node.estimate = cornerDB.getNumMoves(node.cube);
                    if(node.depth+node.estimate>bound) {
                        next_bound=min(next_bound,node.depth+node.estimate);
                    }
                    else {
                        pq.push(make_pair(node,i));
                    }
                }
                node.cube.invert(curr_move);
            }
        }

        return make_pair(rubikscube,next_bound);
    }


public:
    T rubikscube;

    IDASTARSOLVER(T _rubikscube,string file_name) {
        rubikscube=_rubikscube;
        cornerDB.fromFile(file_name);
    }

    vector<RubiksCube::MOVE> solve() {
        int bound=1;
        auto p = IDAstar(bound);
        while(p.second!=bound) {
            resetStructure();
            bound=p.second;
            p=IDAstar(bound);
        }

        T solved_cube = p.first;

        T curr_cube = solved_cube;

        while(!(curr_cube==rubikscube)) {
            auto curr_move = back_pointer[curr_cube];
            moves.push_back(curr_move);
            curr_cube.invert(curr_move);
        }

        rubikscube = solved_cube;

        reverse(moves.begin(),moves.end());

        return moves;
    }
};
#endif //IDASTARSOLVER_H
