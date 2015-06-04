#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

// Menu użytkownika

int menu ()
{
    int k;
    cout << "W tej aplikacji możesz zrobić:" << endl <<
            " 1. Dopisz psa" << endl <<
            " 2. Dopisz kota" << endl <<
            " 3. Wyświetl listę" << endl <<
            " 4. Sortuj wg. roku urodzenia" << endl <<
            " 5. Sortuj wg. imion" << endl <<
            " 6. Polimorficzny chór zwierząt!" << endl <<
            " Inny. Zakończ program !" << endl <<
            "Co chcesz zrobić?:";
    cin >> k;
    return k;
}

// Do sortowania po roku urodzenia zwierzaka
bool mniejszyrok (Animal *a, Animal*b)
{
    return a->czytaj_rok()<b->czytaj_rok();
}

//Do sortowania po imieniu zwierzęcia
bool mniejszeimie (Animal *a, Animal *b)
{
    string tmp1, tmp2;
    tmp1 = a->czytaj_imie();
    tmp2 = b->czytaj_imie();

    transform(tmp1.begin(),tmp1.end(),tmp1.begin(), ::tolower);
    transform(tmp2.begin(),tmp2.end(),tmp2.begin(), ::tolower);

    return tmp1<tmp2;
}

//Do wyświetlania danych
void wyswietl (Animal *a)
{
    cout << "   " << a->czytaj_imie() << endl
            << "   " << a->czytaj_rok() << endl
               << "   " << a->say_something() << endl << endl;
}

//Do wykazania polimorfizmu
void chor_zwierzat (Animal*a)
{
    cout << a->say_something() << endl;
}

int main()
{
    int k,rok;
    string imie;
    vector <Animal*> tab; //tablica dynamiczna wskaźników na klasę Animal
    do
    {
    k=menu ();
    switch(k)
    {
    case 1:
        cout << "Podaj rok urodzenia psiny:";
        cin >> rok;
        cout << "Podaj imię pieska:";
        cin >> imie;
        tab.push_back(new Dog(rok,imie));
        break;
    case 2:
        cout << "Podaj rok urodzenia kotka:";
        cin >> rok;
        cout << "Podaj imię kotka:";
        cin >> imie;
        tab.push_back(new Cat(rok,imie));
        break;
    case 3: //wyświetlanie zwierząt za pomocą for_each z STL
        cout << "To jest lista zwierząt:" << endl;
        for_each(tab.begin(),tab.end(),wyswietl);
        break;
    case 4: //sortowanie za pomocą sort z STL
        sort(tab.begin(),tab.end(),mniejszyrok);
        break;
    case 5:
        sort(tab.begin(),tab.end(),mniejszeimie);
        break;
    case 6: //wykazanie polimorfizmu używając for_each z STL
        for_each(tab.begin(),tab.end(),chor_zwierzat);
    }
    }
    while(k==1||k==2||k==3||k==4||k==5||k==6);



    return 0;
}

