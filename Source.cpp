#include<iostream>
#include "klasa.h"

int samochod::ile_pojazdow = 0;

int main()
{

samochod:samochod* porsche;
	porsche = new samochod;
	std::cout << "--------------------------------------------------\n";
Spalinowy:Spalinowy* bmw;
	bmw = new Spalinowy;
	bmw->set_rodzaj("sportowy");
	bmw->set_zasieg(20);
	bmw->set_marka("bmw");
	bmw->set_rocznik(1998);
	bmw->set_paliwo("bezyna");
	bmw->pokaz();

	std::cout << "--------------------------------------------------\n";
Elektryczny:Elektryczny* tesla;
	tesla = new Elektryczny;
	tesla->set_rodzaj("sportowy");
	tesla->set_zasieg(20);
	tesla->set_marka("tesla");
	tesla->set_rocznik(1998);
	tesla->set_bateria("70%");
	tesla->pokaz();

	std::cout << "--------------------------------------------------\n";
Hybryda:Hybryda* honda;
	honda = new Hybryda;
	
	honda->set_rodzaj("sportowy");
	honda->set_zasieg(20);
	honda->set_marka("honda");
	honda->set_rocznik(1998);
	honda->set_bateria("98%");
	honda->set_paliwo("gaz");
	honda->pokaz();
	std::cout << "--------------------------------------------------\n";
	
	
	delete honda;
	delete tesla;
	delete bmw;
	delete porsche;
	
	return 0;
}