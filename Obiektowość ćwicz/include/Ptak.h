#ifndef PTAK_H
#define PTAK_H
#include <Zwierze.h>
#include <iostream>

class Ptak:
    public Zwierze
{
    public:
        Ptak(float waga):Zwierze(waga)
        {

        }
        virtual ~Ptak();
        void Lot(float jak_wysoko);
    protected:

    private:
};

#endif // PTAK_H
