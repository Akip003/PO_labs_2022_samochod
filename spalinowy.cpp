#include "klasa.h"
#include<iostream>

void Spalinowy::pokaz()
{
	samochod::pokaz();
	std::cout << "paliwo " << paliwo << std::endl;
	
}

void Spalinowy::set_paliwo(std::string a)
{
	paliwo = a;
}
