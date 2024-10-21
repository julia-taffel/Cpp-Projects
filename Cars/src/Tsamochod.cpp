#include "Tsamochod.h"
#include <iostream>
using namespace std;

Tsamochod::Tsamochod()
{
    cout<<"Wywolujemy konstruktor klasy bazowej"<<endl;
    string marka;
    float pB;
    float pM;
    float zP;
    //ctor
}
void Tsamochod::dodaj_marke()
{
    cout<<"Podaj marke samochodu:";
    cin>>marka;
    cout<<endl;
    cout<<"Podaj pojemnosc baku:";
    cin>>pB;
    cout<<endl;
    cout<<"Podaj predkosc maksymalna:";
    cin>>pM;
    cout<<endl;
    cout<<"Podaj zuzycie paliwa na 100km:";
    cin>>zP;
    cout<<endl;
}
void Tsamochod::Jedz(int przyspieszenie)
{
    float jakSzybko;
    float jakDaleko;
    jakSzybko<=pM;
    cout<<"Podaj jak szybko samochod pojedzie:";
    cin>>jakSzybko;
    jakSzybko=jakSzybko*przyspieszenie;
    cout<<endl;
    cout<<"Podaj jak daleko samochod pojedzie:";
    cin>>jakDaleko;
    cout<<endl;

    if ((jakSzybko<0.3*zP) || (jakSzybko>0.8*zP));
    {
        zP=zP+0.2*zP;
    }
    float ile_litrow=jakDaleko*zP/100;
    cout<<"Samochod spali "<<ile_litrow<<" litrow"<<endl;

    int tank=ile_litrow/pB;
    cout<<"Samochod bedzie musial "<<tank<<" razy tankowac"<<endl;

    float czas_tank=tank*10;
    float ile_czasu=jakDaleko/jakSzybko + czas_tank;
    cout<<"Podroz zajmie "<<ile_czasu<<" godzin"<<endl;
}
void Tsamochod::Jedz(bool przyspieszenie)
{
    cout<<"Twoj samochod przyspiesza"<<endl;
    if (przyspieszenie==true)
    {
        Jedz(8);
    }
}
Tsamochod::~Tsamochod()
{
    cout<<"Wywolujemy destruktor klasy bazowej dla samochodu marki "<<marka<<endl;
    //dtor
}
