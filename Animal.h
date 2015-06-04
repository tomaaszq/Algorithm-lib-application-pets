#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;


class Animal
{
    int year_animal;
    string name_animal;
public:
    void wpisz_rok(int rok);
    void wpisz_imie(string imie);
    int czytaj_rok();
    string czytaj_imie();
    virtual string say_something()=0; //metoda czysto wirtualna
};

#endif // ANIMAL_H
