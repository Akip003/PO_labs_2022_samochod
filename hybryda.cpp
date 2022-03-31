#include "klasa.h"
#include<iostream>

void Hybryda::pokaz()
{
	
	samochod::pokaz();
	std::cout << "bateria " << bateria << std::endl;
	std::cout << "paliwo " << paliwo << std::endl;
}