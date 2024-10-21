#include <iostream>
#include <Tsamochod.h>
#include <TKabriolet.h>

using namespace std;

#include <algorithm>
#include <list>
int main() {
	list<Tsamochod> my_list;
	//Stworzenie pierwszego obiektu
	Tsamochod Auto;
	//Stworzenie drugiego obiektu
	Tsamochod Auto2;
	Auto2.marka = "Volvo";
    Auto.marka = "Toyota";
    //Kopiowanie elementów do listy (4 elementy)
	my_list.push_back(Auto);
    my_list.push_back(Auto2);
    //Konstruktor kopiujacy (6 elementów)
	for (Tsamochod x : my_list) {
		cout << x.marka << '\n';
	}
}
