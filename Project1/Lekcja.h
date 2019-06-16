#pragma once
#include"Sala.h"
#include"Grupa.h"

class Lekcja
{
private:
	std::string nazwa="";
	std::string dzien="";
	std::string godzina="";
	Sala *sala= nullptr;
	Grupa *grupa= nullptr;
	Lekcja(std::string nazwa, std::string dzien, std::string godzina, Sala* sala, Grupa* grupa);
public:
	~Lekcja();
	static Lekcja* konstLekcja(std::string nazwa, std::string dzien, std::string godzina, Sala* sala, Grupa* grupa, std::list<Sprzet> listaSprzetowWymagana);
	std::string zwrocNazwe();
	std::string zwrocDzien();
	std::string zwrocGodzine();
	std::string zwrocSale();
	int zapiszLekcje(std::string nazwapliku);
};

