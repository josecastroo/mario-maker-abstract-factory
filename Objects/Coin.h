#ifndef COIN_H
#define COIN_H
#include <iostream>
#include <sstream>
using namespace std;

class Coin {
public:
    virtual ~Coin() = default;
    virtual string belongsTo() = 0;
};

#endif //COIN_H
