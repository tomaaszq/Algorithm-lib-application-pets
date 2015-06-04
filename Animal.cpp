#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;


void Animal::wpisz_imie(string imie)
{
    name_animal=imie;
}
void Animal::wpisz_rok(int rok)
{
    year_animal=rok;
}
string Animal::czytaj_imie()
{
    return name_animal;
}
int Animal::czytaj_rok()
{
    return year_animal;
}
