#include "Zwierze.h"

Zwierze::Zwierze(float waga1)
{
    waga=waga1;
    //ctor
}
void Zwierze::Zjedz(float ile)
{

    waga=waga+ile;
}
float Zwierze::getwaga()
{
    return waga;
}
Zwierze::~Zwierze()
{
    //dtor
}
