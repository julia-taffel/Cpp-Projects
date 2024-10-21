#include <iostream>
#include <list>
#include <algorithm>
#include <time.h>
using namespace std;
//zalozenia: losowanie karty, wrzucanie kart do kontenerów, porównywanie karty, if, empty - sprawdza czy kontener jest pusty, wylonienie zwyciezcy
int main()
{
    //dwa kontenery przechowujace po 10 kart dla gracza
    srand(time(NULL));
    list<int> gracz1;
    for (int k1=0; k1<=10; k1++)
    {
        gracz1.push_back(rand()%11);
    }
    list<int> gracz2;
    for (int k2=0; k2<=10; k2++)
    {
        gracz2.push_back(rand()%11);
    }
    list<int> remis;
    int k1;
    int k2;
    while(true)
    {
        k1=gracz1.front();
        k2=gracz2.front();
        cout<<k1<<endl;
        cout<<k2<<endl;
        if (k1>k2)
        {
            cout<<"Karty dla Gracza 1"<<endl;
            gracz1.push_back(k1);
            gracz1.push_back(k2);
            gracz2.pop_front();
            gracz1.pop_front();
            while (!remis.empty())
            {
                gracz1.push_back(remis.front());
                remis.pop_front();
            }
        }
        if (k2>k1)
        {
            cout<<"Karty dla Gracza 2"<<endl;
            gracz2.push_back(k2);
            gracz2.push_back(k1);
            gracz1.pop_front();
            gracz2.pop_front();
            while (!remis.empty())
            {
                gracz2.push_back(remis.front());
                remis.pop_front();
            }
        }
        if (k1==k2)
        {
            cout<<"Remis"<<endl;
            remis.push_back(k2);
            remis.push_back(k1);
            gracz1.pop_front();
            gracz2.pop_front();
        }


        if ((gracz1.empty()) || (gracz2.empty()))
        {
            cout<<"Koniec gry"<<endl;
            if (gracz2.empty()) cout<<"Gracz 1 wygrywa!"<<endl;
            if (gracz1.empty()) cout<<"Gracz 2 wygrywa!"<<endl;
            return 0;
        }
    }
}
