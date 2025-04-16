#ifndef LEVELFACTORY_H
#define LEVELFACTORY_H
#include "Objects/Coin.h"
#include "Objects/Turtle.h"
#include "Objects/Block.h"

class LevelFactory {
public:
  ~LevelFactory() = default;

  virtual Coin* createCoin() = 0;
  virtual Block* createBlock() = 0;
  virtual Turtle* createTurtle() = 0;
};

#endif //LEVELFACTORY_H
