#include "Animal.h"
#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(int rok, string imie)
{
    wpisz_imie(imie);
    wpisz_rok(rok);
}
string Cat::say_something()
{
    return "Miauuu";
}
