#ifndef ZWIERZE_H
#define ZWIERZE_H
#include <iostream>

class Zwierze
{
    public:
        Zwierze(float waga1);
        float getwaga();
        void Zjedz(float ile);
        virtual ~Zwierze();


    protected:

    private:
        float waga;
};

#endif // ZWIERZE_H
