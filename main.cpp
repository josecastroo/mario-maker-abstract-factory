#include "LevelFactory.h"
#include "ConcreteFactories/SuperMarioBros3Factory.h"
#include "ConcreteFactories/SuperMarioWorldFactory.h"

int main() {
    LevelFactory* factorySMW = new SuperMarioWorldFactory();
    LevelFactory* factorySMB3 = new SuperMarioBros3Factory();

    cout << endl << "Elementos de Super Mario World:" << endl;
    cout << factorySMW->createCoin()->belongsTo() << endl;
    cout << factorySMW->createBlock()->belongsTo() << endl;
    cout << factorySMW->createTurtle()->belongsTo() << endl << endl;

    cout << "Elementos de Super Mario Bros 3:" << endl;
    cout << factorySMB3->createCoin()->belongsTo() << endl;
    cout << factorySMB3->createBlock()->belongsTo() << endl;
    cout << factorySMB3->createTurtle()->belongsTo() << endl;

    return 0;
}