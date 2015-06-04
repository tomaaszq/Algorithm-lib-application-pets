#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Cat:public Animal
{
public:
    Cat (int rok,string imie);
    string say_something();
};

#endif // CAT_H
