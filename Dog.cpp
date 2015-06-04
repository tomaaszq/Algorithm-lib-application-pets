#include "Animal.h"
#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(int rok, string imie)
{
    wpisz_imie(imie);
    wpisz_rok(rok);
}
string Dog::say_something()
{
    return "hau hau!";
}
