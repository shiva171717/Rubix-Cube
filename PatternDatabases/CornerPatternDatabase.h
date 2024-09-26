

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H

#include "../Models/RubiksCube.h"
#include "PatternDatabases.h"
#include "PermutationIndexer.h"

class CornerPatternDatabase: public PatternDatabases{
    PermutationIndexer<8> permIndexer;
public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube &cube) const override;
};



#endif //CORNERPATTERNDATABASE_H
