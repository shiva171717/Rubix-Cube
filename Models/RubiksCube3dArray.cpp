

#include "RubiksCube.h"

class RubiksCube3dArray:public RubiksCube {
private:
    void rotateFace(int ind) {
        char temp[3][3];
        for(int row=0;row<=2;row++){
            for(int col=0;col<=2;col++){
                temp[row][col] = cube[ind][row][col];
            }
        }

        for(int row=0;row<=2;row++){
            for(int col=0;col<=2;col++){
                cube[ind][row][col] = temp[2-col][row];
            }
        }
    }

public:
    char cube[6][3][3]{};


    RubiksCube3dArray(){
        for(int ind=0;ind<6;ind++){
            for(int row=0;row<=2;row++){
                for(int col=0;col<=2;col++){
                    cube[ind][row][col] = getColorLetter(COLOR(ind));
                }
            }
        }
    }

    COLOR getColor(FACE face,unsigned row,unsigned col) const override{
        char color = cube[(int)face][(int)row][(int)col];

        switch (color) {
            case 'B':
                return COLOR::BLUE;

            case 'W':
                return COLOR::WHITE;

            case 'R':
                return COLOR::RED;

            case 'G':
                return COLOR::GREEN;

            case 'Y':
                return COLOR::YELLOW;

            case 'O':
                return COLOR::ORANGE;
        }

    }


    bool isSolved() const override{
        for(int ind=0;ind<6;ind++){
            for(int row=0;row<=2;row++){
                for(int col=0;col<=2;col++){
                    if(this->cube[ind][row][col] == getColorLetter(COLOR(ind))) continue;
                    return false;
                }
            }
        }
        return true;
    }


    RubiksCube& u() override{
        this->rotateFace(0);

        char temp[3];
        for(int i=0;i<3;i++) temp[i] = cube[4][0][i];
        for(int i=0;i<3;i++) cube[4][0][i] = cube[1][0][i];
        for(int i=0;i<3;i++) cube[1][0][i] = cube[2][0][i];
        for(int i=0;i<3;i++) cube[2][0][i] = cube[3][0][i];
        for(int i=0;i<3;i++) cube[3][0][i] = temp[i];

        return *this;
    }

     RubiksCube &uPrime() override {
        this->u();
        this->u();
        this->u();

        return *this;
    }

    RubiksCube &u2() override {
        this->u();
        this->u();

        return *this;
    }

    RubiksCube &l() override {
        this->rotateFace(1);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][i][0];
        for (int i = 0; i < 3; i++) cube[0][i][0] = cube[4][2 - i][2];
        for (int i = 0; i < 3; i++) cube[4][2 - i][2] = cube[5][i][0];
        for (int i = 0; i < 3; i++) cube[5][i][0] = cube[2][i][0];
        for (int i = 0; i < 3; i++) cube[2][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &lPrime() override {
        this->l();
        this->l();
        this->l();

        return *this;
    }

    RubiksCube &l2() override {
        this->l();
        this->l();

        return *this;
    }

    RubiksCube &f() override {
        this->rotateFace(2);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][2][i];
        for (int i = 0; i < 3; i++) cube[0][2][i] = cube[1][2 - i][2];
        for (int i = 0; i < 3; i++) cube[1][2 - i][2] = cube[5][0][2 - i];
        for (int i = 0; i < 3; i++) cube[5][0][2 - i] = cube[3][i][0];
        for (int i = 0; i < 3; i++) cube[3][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &fPrime() override {
        this->f();
        this->f();
        this->f();

        return *this;
    }

    RubiksCube &f2() override {
        this->f();
        this->f();

        return *this;
    }

    RubiksCube &r() override {
        this->rotateFace(3);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][2 - i][2];
        for (int i = 0; i < 3; i++) cube[0][2 - i][2] = cube[2][2 - i][2];
        for (int i = 0; i < 3; i++) cube[2][2 - i][2] = cube[5][2 - i][2];
        for (int i = 0; i < 3; i++) cube[5][2 - i][2] = cube[4][i][0];
        for (int i = 0; i < 3; i++) cube[4][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &rPrime() override {
        this->r();
        this->r();
        this->r();

        return *this;
    }

    RubiksCube &r2() override {
        this->r();
        this->r();

        return *this;
    }

    RubiksCube &b() override {
        this->rotateFace(4);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[0][0][2 - i];
        for (int i = 0; i < 3; i++) cube[0][0][2 - i] = cube[3][2 - i][2];
        for (int i = 0; i < 3; i++) cube[3][2 - i][2] = cube[5][2][i];
        for (int i = 0; i < 3; i++) cube[5][2][i] = cube[1][i][0];
        for (int i = 0; i < 3; i++) cube[1][i][0] = temp_arr[i];

        return *this;
    }

    RubiksCube &bPrime() override {
        this->b();
        this->b();
        this->b();

        return *this;
    }

    RubiksCube &b2() override {
        this->b();
        this->b();

        return *this;
    }

    RubiksCube &d() override {
        this->rotateFace(5);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[2][2][i];
        for (int i = 0; i < 3; i++) cube[2][2][i] = cube[1][2][i];
        for (int i = 0; i < 3; i++) cube[1][2][i] = cube[4][2][i];
        for (int i = 0; i < 3; i++) cube[4][2][i] = cube[3][2][i];
        for (int i = 0; i < 3; i++) cube[3][2][i] = temp_arr[i];

        return *this;
    }

    RubiksCube &dPrime() override {
        this->d();
        this->d();
        this->d();

        return *this;
    }

    RubiksCube &d2() override {
        this->d();
        this->d();

        return *this;
    }

    bool operator==(const RubiksCube3dArray &r1) const {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (r1.cube[i][j][k] != cube[i][j][k]) return false;
                }
            }
        }
        return true;
    }

    RubiksCube3dArray &operator=(const RubiksCube3dArray &r1) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    cube[i][j][k] = r1.cube[i][j][k];
                }
            }
        }
        return *this;
    }


};

struct Hash3d {
    size_t operator()(const RubiksCube3dArray &r1)const {
        string str="";
        for(int face=0;face<6;face++) {
            for(int row=0;row<3;row++) {
                for(int col=0;col<3;col++) {
                    str+=r1.cube[face][row][col];
                }
            }
        }
        return hash<string>()(str);
    }
};