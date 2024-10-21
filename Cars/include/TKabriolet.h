#ifndef TKABRIOLET_H
#define TKABRIOLET_H
#include <Tsamochod.h>

class TKabriolet:
    public Tsamochod
{
    public:
        TKabriolet();
        virtual ~TKabriolet();
        bool Czy_dach_jest_otwarty;
        void otworz_dach();
        void zamknij_dach();
    protected:

    private:
};

#endif // TKABRIOLET_H
