
#include "RubiksCube.h"

class RubiksCube1dArray:public RubiksCube{
private:

    static inline int getIndex(int ind,int row,int col){
        return 9*ind+3*row+col;
    }

    void rotateFace(int ind){
        char temp[3][3];
        for(int row=0;row<=2;row++){
            for(int col=0;col<=2;col++){
                temp[row][col] = cube[getIndex(ind,row,col)];
            }
        }

        for(int row=0;row<=2;row++){
            for(int col=0;col<=2;col++){
                cube[getIndex(ind,row,col)] = temp[2-col][row];
            }
        }
    }

public:
    char cube[54]{};

    RubiksCube1dArray(){
        for(int ind=0;ind<6;ind++){
            for(int row=0;row<=2;row++){
                for(int col=0;col<=2;col++){
                    cube[getIndex(ind,row,col)] = getColorLetter(COLOR(ind));
                }
            }
        }
    }

    COLOR getColor(FACE face,unsigned row,unsigned col) const override{
        char color = cube[getIndex((int)face,(int)row,(int)col)];

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
                    if(this->cube[getIndex(ind,row,col)] == getColorLetter(COLOR(ind))) continue;
                    return false;
                }
            }
        }
        return true;
    }

    RubiksCube& u() override{
        this->rotateFace(0);

        char temp[3];
        for(int i=0;i<3;i++) temp[i] = cube[getIndex(4,0,i)];
        for(int i=0;i<3;i++) cube[getIndex(4,0,i)] = cube[getIndex(1,0,i)];
        for(int i=0;i<3;i++) cube[getIndex(1,0,i)] = cube[getIndex(2,0,i)];
        for(int i=0;i<3;i++) cube[getIndex(2,0,i)] = cube[getIndex(3,0,i)];
        for(int i=0;i<3;i++) cube[getIndex(3,0,i)] = temp[i];

        return *this;
    }

    RubiksCube& uPrime() override{
        this->u();
        this->u();
        this->u();

        return *this;
    }

    RubiksCube& u2() override{
        this->u();
        this->u();

        return *this;
    }

    RubiksCube& l() override{
        this->rotateFace(1);

        char temp[3];
        for(int i=0;i<3;i++) temp[i] = cube[getIndex(0,i,0)];
        for(int i=0;i<3;i++) cube[getIndex(0,i,0)] = cube[getIndex(4,2-i,2)];
        for(int i=0;i<3;i++) cube[getIndex(4,i,2)] = cube[getIndex(5,2-i,0)];
        for(int i=0;i<3;i++) cube[getIndex(5,i,0)] = cube[getIndex(2,i,0)];
        for(int i=0;i<3;i++) cube[getIndex(2,i,0)] = temp[i];

        return *this;
    }

    RubiksCube& lPrime() override{
        this->l();
        this->l();
        this->l();

        return *this;
    }

    RubiksCube& l2() override{
        this->l();
        this->l();

        return *this;
    }

    RubiksCube& f() override{
        this->rotateFace(2);


        char temp[3];
        for(int i=0;i<3;i++) temp[i] = cube[getIndex(0,2,i)];
        for(int i=0;i<3;i++) cube[getIndex(0,2,i)] = cube[getIndex(1,2-i,2)];
        for(int i=0;i<3;i++) cube[getIndex(1,i,2)] = cube[getIndex(5,0,i)];
        for(int i=0;i<3;i++) cube[getIndex(5,0,i)] = cube[getIndex(3,2-i,0)];
        for(int i=0;i<3;i++) cube[getIndex(3,i,0)] = temp[i];

        return *this;

    }

    RubiksCube& fPrime() override{
        this->f();
        this->f();
        this->f();
        return *this;

    }

    RubiksCube& f2() override{
        this->f();
        this->f();

        return *this;

    }

     RubiksCube &r() override {
        this->rotateFace(3);

        char temp_arr[3] = {};
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[getIndex(0, 2 - i, 2)];
        for (int i = 0; i < 3; i++) cube[getIndex(0, 2 - i, 2)] = cube[getIndex(2, 2 - i, 2)];
        for (int i = 0; i < 3; i++) cube[getIndex(2, 2 - i, 2)] = cube[getIndex(5, 2 - i, 2)];
        for (int i = 0; i < 3; i++) cube[getIndex(5, 2 - i, 2)] = cube[getIndex(4, i, 0)];
        for (int i = 0; i < 3; i++) cube[getIndex(4, i, 0)] = temp_arr[i];

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
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[getIndex(0, 0, 2 - i)];
        for (int i = 0; i < 3; i++) cube[getIndex(0, 0, 2 - i)] = cube[getIndex(3, 2 - i, 2)];
        for (int i = 0; i < 3; i++) cube[getIndex(3, 2 - i, 2)] = cube[getIndex(5, 2, i)];
        for (int i = 0; i < 3; i++) cube[getIndex(5, 2, i)] = cube[getIndex(1, i, 0)];
        for (int i = 0; i < 3; i++) cube[getIndex(1, i, 0)] = temp_arr[i];

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
        for (int i = 0; i < 3; i++) temp_arr[i] = cube[getIndex(2, 2, i)];
        for (int i = 0; i < 3; i++) cube[getIndex(2, 2, i)] = cube[getIndex(1, 2, i)];
        for (int i = 0; i < 3; i++) cube[getIndex(1, 2, i)] = cube[getIndex(4, 2, i)];
        for (int i = 0; i < 3; i++) cube[getIndex(4, 2, i)] = cube[getIndex(3, 2, i)];
        for (int i = 0; i < 3; i++) cube[getIndex(3, 2, i)] = temp_arr[i];

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

    bool operator==(const RubiksCube1dArray&r1) const{
        for(int i=0;i<54;i++){
            if (cube[i]!=r1.cube[i]) return false;
        }
        return true;
    }

    RubiksCube1dArray& operator=(const RubiksCube1dArray&r1){
         for (int i = 0; i < 54; i++) {
            cube[i] = r1.cube[i];
        }
        return *this;
    }

};

struct Hash1d {
    size_t operator()(const RubiksCube1dArray &r1)const {
        string str="";
        for(int i=0;i<54;i++) str+=r1.cube[i];
        return hash<string>()(str);
    }
};
