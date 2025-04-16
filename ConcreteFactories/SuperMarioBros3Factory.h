#ifndef SUPERMARIOBROS3FACTORY_H
#define SUPERMARIOBROS3FACTORY_H
#include "../LevelFactory.h"
#include "../Objects/Block.h"
#include "../Objects/Turtle.h"
#include "../Objects/Coin.h"
#include "../ConcreteObjects/SMB3Objects/SMB3Block.h"
#include "../ConcreteObjects/SMB3Objects/SMB3Coin.h"
#include "../ConcreteObjects/SMB3Objects/SMB3Turtle.h"

class SuperMarioBros3Factory : public LevelFactory {
public:
  SuperMarioBros3Factory();
  ~SuperMarioBros3Factory();

  Block* createBlock() override;
  Turtle* createTurtle() override;
  Coin*  createCoin() override;
};

#endif //SUPERMARIOBROS3FACTORY_H
