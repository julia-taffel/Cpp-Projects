#include "TKabriolet.h"

TKabriolet::TKabriolet()
{
   Czy_dach_jest_otwarty=1;
   std::cout<<"Wywolujemy konstruktor"<<std::endl;
    //ctor
}

void TKabriolet::otworz_dach()
{
    Czy_dach_jest_otwarty=1;
}
void TKabriolet::zamknij_dach()
{
    Czy_dach_jest_otwarty=0;
}

TKabriolet::~TKabriolet()
{
   std::cout<<"Wywolujemy destruktor"<<std::endl;
    //dtor
}
