#include "LevelFactory.h"
#include "ConcreteFactories/SuperMarioBros3Factory.h"
#include "ConcreteFactories/SuperMarioWorldFactory.h"

int main() {
    LevelFactory* factorySMW = new SuperMarioWorldFactory();
    LevelFactory* factorySMB3 = new SuperMarioBros3Factory();

    // objetos de SuperMarioWorld
    Coin* SMWCoin = factorySMW->createCoin();
    Block* SMWBlock = factorySMW->createBlock();
    Turtle* SMWTurtle = factorySMW->createTurtle();

    // objetos de SuperMarioBros3
    Coin* SMB3Coin = factorySMB3->createCoin();
    Block* SMB3Block = factorySMB3->createBlock();
    Turtle* SMB3Turtle = factorySMB3->createTurtle();

    cout << endl << "Elementos de Super Mario World:" << endl;
    cout << SMWCoin->belongsTo() << endl;
    cout << SMWBlock->belongsTo() << endl;
    cout << SMWTurtle->belongsTo() << endl;

    cout << endl << "Elementos de Super Mario Bros 3:" << endl;
    cout << SMB3Coin->belongsTo() << endl;
    cout << SMB3Block->belongsTo() << endl;
    cout << SMB3Turtle->belongsTo() << endl;

    delete factorySMW;
    delete factorySMB3;
    delete SMWCoin;
    delete SMWBlock;
    delete SMWTurtle;
    delete SMB3Coin;
    delete SMB3Block;
    delete SMB3Turtle;

    return 0;
}