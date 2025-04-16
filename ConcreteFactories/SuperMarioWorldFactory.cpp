#include "SuperMarioWorldFactory.h"

SuperMarioWorldFactory::SuperMarioWorldFactory() {}
SuperMarioWorldFactory::~SuperMarioWorldFactory() {}

 Block* SuperMarioWorldFactory::createBlock() { return new SMWBlock(); }
 Turtle* SuperMarioWorldFactory::createTurtle() { return new SMWTurtle(); }
 Coin* SuperMarioWorldFactory::createCoin() { return new SMWCoin(); }