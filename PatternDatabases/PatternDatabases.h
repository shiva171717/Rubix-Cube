
#ifndef PATTERNDATABASES_H
#define PATTERNDATABASES_H

#include "../Models/RubiksCube.h"
#include "NibbleArray.h"
#include <bits/stdc++.h>

using namespace std;

class PatternDatabases {
    NibbleArray database;
    size_t size;

    size_t numItems;

public:
    PatternDatabases(const size_t size);

    PatternDatabases(const size_t size,uint8_t init_val);

    virtual uint32_t getDatabaseIndex(const RubiksCube &cube) const =0 ;

    virtual bool setNummoves(const RubiksCube &cube,const uint8_t numMoves) ;

    virtual bool setNummoves(const uint32_t ind,const uint8_t numMoves) ;

    virtual uint8_t getNumMoves(const RubiksCube &cube) const ;

    virtual uint8_t getNumMoves(const uint32_t ind) const;

    virtual size_t getSize() const;

    virtual size_t getNumItems() const;

    virtual void toFile(const string &filePath) const;

    virtual bool fromFile(const string &filePath);


};



#endif //PATTERNDATABASES_H
