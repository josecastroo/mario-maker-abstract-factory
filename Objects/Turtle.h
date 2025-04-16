#ifndef TURTLE_H
#define TURTLE_H
#include <iostream>
#include <sstream>
using namespace std;

class Turtle {
public:
  virtual ~Turtle() = default;
  virtual string belongsTo() = 0;
};

#endif //TURTLE_H
