
#include "PatternDatabases.h"

using namespace std;

PatternDatabases::PatternDatabases(const size_t size) : database(size,0xFF) , size(size), numItems(0){}

PatternDatabases::PatternDatabases(const size_t size, uint8_t init_val): database(size,init_val),size(size),numItems(0){}

bool PatternDatabases::setNummoves(const uint32_t ind, const uint8_t numMoves) {
    uint8_t old_moves = this->getNumMoves(ind);


    if(old_moves==0x0F) {
        this->numItems+=1;
    }

    if(old_moves>numMoves) {
        this->database.set(ind,numMoves);
        return true;
    }
    return false;
}


bool PatternDatabases::setNummoves(const RubiksCube &cube, const uint8_t numMoves) {
    return this->setNummoves(this->getDatabaseIndex(cube),numMoves);
}

uint8_t PatternDatabases::getNumMoves(const uint32_t ind) const {
   return this->database.get(ind);
}

uint8_t PatternDatabases::getNumMoves(const RubiksCube &cube) const {
    return this->getNumMoves(this->getDatabaseIndex(cube));
}

size_t PatternDatabases::getSize() const {
    return this->size;
}

size_t PatternDatabases::getNumItems() const {
    return this->numItems;
}

void PatternDatabases::toFile(const string &filePath) const {
    ofstream writer(filePath, ios::out | ios::binary | ios::trunc);

    if(!writer.is_open())
        throw "Failed to open the file to write";

    writer.write(
            reinterpret_cast<const char*>(this->database.data()),
            this->database.storageSize()
            );

    writer.close();
}

bool PatternDatabases::fromFile(const string &filePath) {
    ifstream reader(filePath, ios::in | ios::ate);

    if(!reader.is_open())
        return false;

    size_t fileSize = reader.tellg();

    if(fileSize != this->database.storageSize()){
        reader.close();
        throw "Database corrupt! Failed to open Reader";
    }

    reader.seekg(0, ios::beg);
    reader.read(
            reinterpret_cast<char*> (this->database.data()),
            this->database.storageSize()
            );
    reader.close();
    this->numItems = this->size;
    return true;
}










