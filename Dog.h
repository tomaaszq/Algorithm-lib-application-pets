#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Dog: public Animal
{
public:
    Dog (int rok,string imie);
    string say_something();
};

#endif // DOG_H
