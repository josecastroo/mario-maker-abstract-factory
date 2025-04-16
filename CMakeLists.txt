cmake_minimum_required(VERSION 3.30)
project(SuperMarioMaker)

set(CMAKE_CXX_STANDARD 20)

add_executable(SuperMarioMaker main.cpp
        LevelFactory.h
        Objects/Block.h
        Objects/Coin.h
        Objects/Turtle.h
        ConcreteFactories/SuperMarioWorldFactory.cpp
        ConcreteFactories/SuperMarioWorldFactory.h
        ConcreteFactories/SuperMarioBros3Factory.cpp
        ConcreteFactories/SuperMarioBros3Factory.h
        ConcreteObjects/SMB3Objects/SMB3Block.cpp
        ConcreteObjects/SMB3Objects/SMB3Block.h
        ConcreteObjects/SMB3Objects/SMB3Coin.cpp
        ConcreteObjects/SMB3Objects/SMB3Coin.h
        ConcreteObjects/SMB3Objects/SMB3Turtle.cpp
        ConcreteObjects/SMB3Objects/SMB3Turtle.h
        ConcreteObjects/SMWObjects/SMWBlock.cpp
        ConcreteObjects/SMWObjects/SMWBlock.h
        ConcreteObjects/SMWObjects/SMWCoin.cpp
        ConcreteObjects/SMWObjects/SMWCoin.h
        ConcreteObjects/SMWObjects/SMWTurtle.cpp
        ConcreteObjects/SMWObjects/SMWTurtle.h)
