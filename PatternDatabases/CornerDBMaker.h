
#ifndef CORNERDBMAKER_H
#define CORNERDBMAKER_H

#include "CornerPatternDatabase.h"
#include "../Models/RubiksCubeBitboard.cpp"

class CornerDBMaker {
private:
    string filename;
    CornerPatternDatabase cornerDB;
public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName,uint8_t init_val);

    bool bfsAndStore();
};



#endif //CORNERDBMAKER_H
