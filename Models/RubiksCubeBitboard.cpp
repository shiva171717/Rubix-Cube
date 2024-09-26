
#include "RubiksCube.h"

/*
    white -> 1
    green -> 2
    red -> 4
    blue ->6
    orange ->16
    yellow->32

    Representation of 1 face
        0 1 2
        7 _ 3
        6 5 4

*/

class RubiksCubeBitboard:public RubiksCube {
private:
    uint64_t solved_cube[6]{};
    int arr[3][3]={{0,1,2},
                {7,8,3},
                {6,5,4}};

    uint64_t one_8=(1<<8)-1;
    uint64_t one_24=(1<<24)-1;

    void rotateFace(int ind) {
        uint64_t face_config=cube[ind];
        face_config >>= 48;
        cube[ind]=(cube[ind]<<16)|face_config;
    }

    void rotateSide(int s1, int s1_1, int s1_2, int s1_3, int s2, int s2_1, int s2_2, int s2_3) {
        uint64_t clr1 = (cube[s2]&(one_8<<(8*s2_1))) >> (8*s2_1);
        uint64_t clr2 = (cube[s2]&(one_8<<(8*s2_2))) >> (8*s2_2);
        uint64_t clr3 = (cube[s2]&(one_8<<(8*s2_3))) >> (8*s2_3);

        cube[s1] = (cube[s1] & (~(one_8<<(8*s1_1)))) | (clr1<<(8*s1_1));
        cube[s1] = (cube[s1] & (~(one_8<<(8*s1_2)))) | (clr2<<(8*s1_2));
        cube[s1] = (cube[s1] & (~(one_8<<(8*s1_3)))) | (clr3<<(8*s1_3));
    }


public:
    uint64_t cube[6]{};

    RubiksCubeBitboard() {
        for(int face =0;face<6;face++) {
            uint64_t color = (1<<face);
            cube[face]=0;
            for(int faceIdx=0;faceIdx<8;faceIdx++) {
                cube[face] |= color << (8*faceIdx);
            }
            solved_cube[face]=cube[face];
        }
    }

    COLOR getColor(FACE face, unsigned row, unsigned col) const override {
        int idx = arr[(int)row][(int)col];
        if(idx==8) return (COLOR)((int)face);

        uint64_t face_config = cube[(int)face];
        uint64_t color = (face_config>>(8*idx))&(one_8);

        int bit_pos=0;
        while(color!=0) {
            color>>=1;
            bit_pos+=1;
        }
        return (COLOR)(bit_pos-1);
    }

    bool isSolved() const override {
        for(int face=0;face<6;face++) {
            if(solved_cube[face]!=cube[face]) return false;
        }
        return true;
    }


    RubiksCube &u() override {
        this->rotateFace(0);

        uint64_t temp = cube[2]&one_24;
        cube[2] = (cube[2]&(~one_24)) | (cube[3]&one_24);
        cube[3] = (cube[3]&(~one_24)) | (cube[4]&one_24);
        cube[4] = (cube[4]&(~one_24)) | (cube[1]&one_24);
        cube[1] = (cube[1]&(~one_24)) | temp;

        return *this;
    }

    RubiksCube &uPrime() override {
        this->u();
        this->u();
        this->u();

        return *this;
    };

    RubiksCube &u2() override {
        this->u();
        this->u();

        return *this;
    };

    RubiksCube &l() override {
        this->rotateFace(1);

        uint64_t clr1 = (cube[2] & (one_8<<(8*0))) >>(8*0);
        uint64_t clr2 = (cube[2] & (one_8<<(8*7))) >>(8*7);
        uint64_t clr3 = (cube[2] & (one_8<<(8*6))) >>(8*6);

        this->rotateSide(2,0,7,6,0,0,7,6);
        this->rotateSide(0,0,7,6,4,4,3,2);
        this->rotateSide(4,2,3,4,5,6,7,0);

        cube[5] = (cube[5] & (~(one_8<<(8*0)))) | (clr1<<(8*0));
        cube[5] = (cube[5] & (~(one_8<<(8*7)))) | (clr2<<(8*7));
        cube[5] = (cube[5] & (~(one_8<<(8*6)))) | (clr3<<(8*6));

        return *this;

    };

    RubiksCube &lPrime() override {
        this->l();
        this->l();
        this->l();

        return *this;
    };

    RubiksCube &l2() override {
        this->l();
        this->l();

        return *this;
    };

    RubiksCube &f() override {
        this->rotateFace(2);

        uint64_t clr1 = (cube[0] & (one_8<<(8*6))) >>(8*6);
        uint64_t clr2 = (cube[0] & (one_8<<(8*5))) >>(8*5);
        uint64_t clr3 = (cube[0] & (one_8<<(8*4))) >>(8*4);

        this->rotateSide(0,6,5,4,1,4,3,2);
        this->rotateSide(1,2,3,4,5,0,1,2);
        this->rotateSide(5,0,1,2,3,6,7,0);

        cube[3] = (cube[3] & (~(one_8<<(8*0)))) | (clr1<<(8*0));
        cube[3] = (cube[3] & (~(one_8<<(8*7)))) | (clr2<<(8*7));
        cube[3] = (cube[3] & (~(one_8<<(8*6)))) | (clr3<<(8*6));

        return *this;
    };

    RubiksCube &fPrime() override {
        this->f();
        this->f();
        this->f();
        return *this;
    };

    RubiksCube &f2() override {
        this->f();
        this->f();

        return *this;
    };

    RubiksCube &r() override {
        this->rotateFace(3);
        uint64_t clr1 = (cube[0] & (one_8 << (8 * 2))) >> (8 * 2);
        uint64_t clr2 = (cube[0] & (one_8 << (8 * 3))) >> (8 * 3);
        uint64_t clr3 = (cube[0] & (one_8 << (8 * 4))) >> (8 * 4);

        this->rotateSide(0, 2, 3, 4, 2, 2, 3, 4);
        this->rotateSide(2, 2, 3, 4, 5, 2, 3, 4);
        this->rotateSide(5, 2, 3, 4, 4, 6, 7, 0);

        cube[4] = (cube[4] & ~(one_8 << (8 * 0))) | (clr3 << (8 * 0));
        cube[4] = (cube[4] & ~(one_8 << (8 * 7))) | (clr2 << (8 * 7));
        cube[4] = (cube[4] & ~(one_8 << (8 * 6))) | (clr1 << (8 * 6));

        return *this;
    };

    RubiksCube &rPrime() override {
        this->r();
        this->r();
        this->r();

        return *this;
    };

    RubiksCube &r2() override {
        this->r();
        this->r();

        return *this;
    };

    RubiksCube &b() override {
        this->rotateFace(4);

        uint64_t clr1 = (cube[0] & (one_8 << (8 * 0))) >> (8 * 0);
        uint64_t clr2 = (cube[0] & (one_8 << (8 * 1))) >> (8 * 1);
        uint64_t clr3 = (cube[0] & (one_8 << (8 * 2))) >> (8 * 2);

        this->rotateSide(0, 0, 1, 2, 3, 2, 3, 4);
        this->rotateSide(3, 2, 3, 4, 5, 4, 5, 6);
        this->rotateSide(5, 4, 5, 6, 1, 6, 7, 0);

        cube[1] = (cube[1] & ~(one_8 << (8 * 6))) | (clr1 << (8 * 6));
        cube[1] = (cube[1] & ~(one_8 << (8 * 7))) | (clr2 << (8 * 7));
        cube[1] = (cube[1] & ~(one_8 << (8 * 0))) | (clr3 << (8 * 0));

        return *this;
    };

    RubiksCube &bPrime() override {
        this->b();
        this->b();
        this->b();

        return *this;
    };

    RubiksCube &b2() override {
        this->b();
        this->b();

        return *this;
    };

    RubiksCube &d() override {
        this->rotateFace(5);

        uint64_t clr1 = (cube[2] & (one_8 << (8 * 4))) >> (8 * 4);
        uint64_t clr2 = (cube[2] & (one_8 << (8 * 5))) >> (8 * 5);
        uint64_t clr3 = (cube[2] & (one_8 << (8 * 6))) >> (8 * 6);

        this->rotateSide(2, 4, 5, 6, 1, 4, 5, 6);
        this->rotateSide(1, 4, 5, 6, 4, 4, 5, 6);
        this->rotateSide(4, 4, 5, 6, 3, 4, 5, 6);

        cube[3] = (cube[3] & ~(one_8 << (8 * 4))) | (clr1 << (8 * 4));
        cube[3] = (cube[3] & ~(one_8 << (8 * 5))) | (clr2 << (8 * 5));
        cube[3] = (cube[3] & ~(one_8 << (8 * 6))) | (clr3 << (8 * 6));

        return *this;
    };

    RubiksCube &dPrime() override {
        this->d();
        this->d();
        this->d();

        return *this;
    };

    RubiksCube &d2() override {
        this->d();
        this->d();

        return *this;
    }

    bool operator==(const RubiksCubeBitboard &r1) const {
        for (int i = 0; i < 6; i++) {
            if (cube[i] != r1.cube[i]) return false;
        }
        return true;
    }

    RubiksCubeBitboard &operator=(const RubiksCubeBitboard &r1) {
        for (int i = 0; i < 6; i++) {
            cube[i] = r1.cube[i];
        }
        return *this;
    }


};

struct HashBitBoard {
    size_t operator()(const RubiksCubeBitboard &r1) const{
        uint64_t final_hash = 0;
        for(int i=0;i<6;i++) final_hash ^=r1.cube[i];
        return (size_t)final_hash;
    }
};