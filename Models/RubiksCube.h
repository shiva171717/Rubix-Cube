
#ifndef RUBIKSCUBE_H
#define RUBIKSCUBE_H

#include<bits/stdc++.h>
using namespace std;



class RubiksCube {
public:
    enum class FACE{
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };

    enum class COLOR{
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L,LPRIME,L2,
        R,RPRIME,R2,
        U,UPRIME,U2,
        D,DPRIME,D2,
        F,FPRIME,F2,
        B,BPRIME,B2
    };

    /* Given a face,row number and column number it will return the COLOR of that cell in that face */

    virtual COLOR getColor(FACE f,unsigned row,unsigned col) const = 0;

    /*Returns the first letter of the COLOR*/

    static char getColorLetter(COLOR color);


    /*Returns true if the Rubiks Cube is Solved*/

    virtual bool isSolved() const = 0;

    /*Returns the move in string format*/
    static string getMove(MOVE ind);

    /*
        Print the cube in Planar format

        Faces are arranged as follows

            U
        L   F   R   B
            D


        Color Reference:
                W W W
                W w w
                W W W

        G G G   R R R   B B B   O O O
        G G G   R R R   B B B   O O O
        G G G   R R R   B B B   O O O

                Y Y Y
                Y Y Y
                Y Y Y

        row and col numbering
                    b0 c1 c2
                    r1 . .
                    r2 . .

        b0 c1 c2    b0 c1 c2    b0 c1 c2    b0 c1 c2
        r1 . .      r1 . .      r1 . .      r1 . .
        r2 . .      r2 . .      r2 . .      r2 . .

                    b0 c1 c2
                    r1 . .
                    r2 . .

    */

    void print() const;

    /*
        Randomly Shuffle the cube 'times' number of times and return the moves performed
    */

   vector<MOVE> randomShuffleCube(unsigned int times);

   /*
    Perform the move on rubiks cube
   */

    RubiksCube& move(MOVE ind);

    RubiksCube& invert(MOVE ind);


    virtual RubiksCube& f()  = 0;

    virtual RubiksCube& fPrime()  = 0;

    virtual RubiksCube& f2()  = 0;

    virtual RubiksCube& u() = 0;

    virtual RubiksCube& uPrime()  = 0;

    virtual RubiksCube& u2()  = 0;

    virtual RubiksCube& l()  = 0;

    virtual RubiksCube& lPrime()  = 0;

    virtual RubiksCube& l2()  = 0;

    virtual RubiksCube& r()  = 0;

    virtual RubiksCube& rPrime()  = 0;

    virtual RubiksCube& r2()  = 0;

    virtual RubiksCube& b()  = 0;

    virtual RubiksCube& bPrime()  = 0;

    virtual RubiksCube& b2()  = 0;

    virtual RubiksCube& d()  = 0;

    virtual RubiksCube& dPrime()  = 0;

    virtual RubiksCube& d2()  = 0;

    string getCornerColorString(uint8_t ind) const ;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;

};



#endif //RUBIKSCUBE_H
