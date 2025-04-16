#ifndef BLOCK_H
#define BLOCK_H
#include <iostream>
#include <sstream>
using namespace std;


class Block {
public:
    virtual ~Block() = default;
    virtual string belongsTo() = 0;
};

#endif //BLOCK_H
