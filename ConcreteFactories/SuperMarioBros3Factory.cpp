#include "SuperMarioBros3Factory.h"

SuperMarioBros3Factory::SuperMarioBros3Factory() {}
SuperMarioBros3Factory::~SuperMarioBros3Factory() {}

Block* SuperMarioBros3Factory::createBlock() { return new SMB3Block();}
Turtle* SuperMarioBros3Factory::createTurtle() { return new SMB3Turtle();}
Coin* SuperMarioBros3Factory::createCoin() { return new SMB3Coin(); }