#pragma once
//definicja klasy
#include<iostream>
class samochod
{
private:
	bool wlaczony;
	int bieg;
	int predkosc;
	std::string rodzaj;
	std::string marka;
	int rocznik;
	double zasieg;
	

	void biegNastepny();
	void biegPoprzedni();
public:
	samochod(void) : wlaczony(0), bieg(0), predkosc(0)
	{
		std::cout << "Dodano samochod" << std::endl;
		dodaj();
	};
	~samochod()
	{
		std::cout << "usunieto samochod" << std::endl;
		usun();
		
	}
	void uruchom();
	void wylacz();
	void przyspiesz();
	void hamuj();
	void pokaz();
	void set_rocznik(int x);
	void set_marka(std::string x);
	void set_zasieg(double x);
	void set_rodzaj(std::string x);
	friend void stan(samochod car);
	friend std::ostream& operator<<(std::ostream&, const samochod&);

	static int ile_pojazdow;
	static void dodaj() 
	{ 
		ile_pojazdow++; 
		std::cout <<"obecna liczba samochodow: "<< ile_pojazdow << std::endl; 
	}
	static void usun() 
	{ 
		ile_pojazdow--; 
		std::cout << "obecna liczba samochodow: " << ile_pojazdow << std::endl; 
	}
};

class Spalinowy : virtual public samochod
{
	
public:
	std::string paliwo;
	Spalinowy()
	{
		std::cout << "utworzono samochod spalinowy\n";
	}
	void pokaz();
	void set_paliwo(std::string a);
};

class Elektryczny : virtual public samochod
{
	
public:
	std::string bateria;
	Elektryczny()
	{
		std::cout << "utworzono samochod elektryczny\n";
	}
	
	void pokaz();
	void set_bateria(std::string a);
};

class Hybryda : public Elektryczny, public Spalinowy
{
public:
	Hybryda()
	{
		std::cout << "utworzono samochod hybrydowy\n";
	}
	void pokaz();
	
};