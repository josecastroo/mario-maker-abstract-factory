#ifndef SUPERMARIOWORLDFACTORY_H
#define SUPERMARIOWORLDFACTORY_H
#include "../LevelFactory.h"
#include "../Objects/Block.h"
#include "../Objects/Turtle.h"
#include "../Objects/Coin.h"
#include "../ConcreteObjects/SMWObjects/SMWBlock.h"
#include "../ConcreteObjects/SMWObjects/SMWCoin.h"
#include "../ConcreteObjects/SMWObjects/SMWTurtle.h"

class SuperMarioWorldFactory : public LevelFactory {
public:
  SuperMarioWorldFactory();
  ~SuperMarioWorldFactory();

  Block* createBlock() override;
  Turtle* createTurtle() override;
  Coin* createCoin() override;
};



#endif //SUPERMARIOWORLDFACTORY_H
