#ifndef TSAMOCHOD_H
#define TSAMOCHOD_H
#include <iostream>
using namespace std;

class Tsamochod
{
public:Tsamochod();
    string marka;
    float pB;
    float pM;
    float zP;


    void dodaj_marke();
    virtual ~Tsamochod();
    void Jedz(int przyspieszenie);
    void Jedz(bool przyspieszenie);
};

#endif // TSAMOCHOD_H
