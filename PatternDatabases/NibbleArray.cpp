

#include "NibbleArray.h"

using namespace std;

NibbleArray::NibbleArray(const size_t size, const uint8_t val) : size(size),arr(size/2+1,val){}

uint8_t NibbleArray::get(const size_t pos) const{
    size_t actual_pos = pos/2;
    uint8_t val = arr[actual_pos];

    if(pos&1) {
        return val & 0x0F;
    }
    else {
        return val>>4;
    }

}

void NibbleArray::set(size_t pos, const uint8_t val) {
    size_t actual_pos = pos/2;
    uint8_t currVal = arr[actual_pos];

    if(pos&1) {
        arr[actual_pos] = (currVal & 0xF0) | (val & 0x0F);
    }
    else {
        arr[actual_pos] = (currVal & 0x0F) | (val<<4);
    }



}

unsigned char *NibbleArray::data() {
    return this->arr.data();
}

const unsigned char *NibbleArray::data() const {
    return this->arr.data();
}

size_t NibbleArray::storageSize() const {
    return this->arr.size();
}

void NibbleArray::inflate(vector<uint8_t> &dest) const {
    dest.reserve(this->size);

    for(unsigned i=0;i<this->size;i++) {
        dest.push_back(this->get(i));
    }
}

void NibbleArray::reset(const uint8_t val) {
    fill(this->arr.begin(),this->arr.end(),val);
}









