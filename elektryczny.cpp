#include "klasa.h"
#include<iostream>
void Elektryczny::pokaz()
{
	samochod::pokaz();
	std::cout << "bateria " <<bateria<< std::endl;
	
}

void Elektryczny::set_bateria(std::string a)
{
	bateria = a;
}
