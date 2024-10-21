#include <iostream>
#include <math.h>
using namespace std;

int dzialanie;
float dodawanie(float liczba1, float liczba2)
{
    return liczba1+liczba2;
}
float odejmowanie(float liczba1, float liczba2)
{
    return liczba1-liczba2;
}
float mnozenie(float liczba1, float liczba2)
{
    return liczba1*liczba2;
}
float dzielenie(float liczba1, float liczba2)
{
    return liczba1/liczba2;
}
float pierwiastkowanie(float liczba1)
{
    return sqrt(liczba1);
}
int main()

{
for (;;)
 {

    cout << "Mozliwe dzialania:" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Wyjscie z programu" << endl;
    cout << "Jakie dzialanie chcesz podjac? Podaj numer dzialania:";
    cin >> dzialanie;
    float liczba1, liczba2;
    const float grawitacja=9.807;

    switch (dzialanie)
    {
        case 1:
        {
            cout<<"Wybrano dodawanie. Podaj liczby w dowolnej kolejnosci." << endl;
            cin>>liczba1;
            cin>>liczba2;
            cout<<dodawanie(liczba1, liczba2)<<endl;
            break;
        }
        case 2:
            {
            cout<<"Wybrano odejmowanie. Podaj liczby w odpowiedniej kolejnosci" <<endl;
            cin>>liczba1;
            cin>>liczba2;
            cout<<odejmowanie(liczba1, liczba2)<<endl;
            break;
            }
        case 3:
            {
            cout<<"Wybrano mnozenie. Podaj liczby w dowolnej kolejnosci" <<endl;
            cin>>liczba1;
            cin>>liczba2;
            cout<<mnozenie(liczba1, liczba2)<<endl;
            break;
            }
        case 4:
            {
            cout<<"Wybrano dzielenie. Podaj liczby w odpowiedniej kolejnosci" <<endl;
            cin>>liczba1;
            cin>>liczba2;
            if (liczba2==0)
                {
                cout<<"Podaj inna liczbe niz zero"<<endl;
                cin>>liczba2;
                }
            cout<<dzielenie(liczba1, liczba2)<<endl;
            break;
            }
        case 5:
            {
            return 0;
            }
        case 6:
            {
            float wynik;
            cin>>liczba1;
            wynik=liczba1*grawitacja;
            cout<<wynik<<endl;
            break;
            }
        case 7:
            {
            cout<<"Wybrano pierwiastkowanie kwadratowe. Podaj liczbe" <<endl;
            cin>>liczba1;
            cout<<pierwiastkowanie(liczba1)<<endl;
            }
        default:
            {
            break;
            }
    }
 }
    return 0;
}



