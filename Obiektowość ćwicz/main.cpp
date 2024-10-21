#include <iostream>
#include <Zwierze.h>
#include <Ptak.h>
#include <Ssak.h>

using namespace std;

int main()
{

    Ssak krolik(5);
    Ssak malpa(7);
    Ptak drozd(1);
    malpa.Zjedz(4);
    cout<<malpa.getwaga()<<endl;
    cout<<krolik.getwaga()<<endl;
    cout<<drozd.getwaga()<<endl;
    malpa.Bieg(30);
    drozd.Lot(1000);

    return 0;
}
