//definicje funkcji
#include "klasa.h"
#include<iostream>
void samochod::biegNastepny()
{
	if (bieg < 6)
		bieg++;
}
void samochod::biegPoprzedni()
{
	if (bieg > 0)
		bieg--;
}

void samochod::uruchom()
{
	wlaczony = true;
	bieg = 1;
}

void samochod::wylacz()
{
	wlaczony = false;
	bieg = 0;
	predkosc = 0;
}

void samochod::przyspiesz()
{
	if (wlaczony == true)
	{
		if (predkosc < 90)
			predkosc += 10;
		else
			predkosc = 100;
	}
	if (predkosc % 20 == 0)
		biegNastepny();

}


void samochod::hamuj()
{
	if (predkosc >= 10)
		predkosc -= 10;
	else
		predkosc = 0;

	if (predkosc / 20 == 0)
		biegPoprzedni();
}

void samochod::pokaz()
{
	std::cout << "rodzaj "<<rodzaj<<std::endl<<"zasieg "<<  zasieg<< std::endl << "marka "<< marka<<std::endl<<"rocznik "<<rocznik<<std::endl;

}

void samochod::set_rocznik(int x)
{
	rocznik = x;
}

void samochod::set_marka(std::string x)
{
	marka = x;
}

void samochod::set_zasieg(double x)
{
	zasieg = x;
}





void samochod::set_rodzaj(std::string x)
{
	rodzaj = x;
}

void stan(samochod car)
{
	std::cout << "wlaczony: " << car.wlaczony << "\nbieg: " << car.bieg << "\npredkosc: " << car.predkosc;

}

std::ostream& operator<<(std::ostream& os, const samochod& car)
{
	os << "wlaczony: " << car.wlaczony << "\nbieg: " << car.bieg << "\npredkosc: " << car.predkosc;

	return os;

}




