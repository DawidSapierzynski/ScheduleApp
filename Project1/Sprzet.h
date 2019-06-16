#pragma once
#include <string>
#include <list>
#include <fstream>

class Sprzet
{
private:
	std::string nazwa="";
	std::list <std::string> listacech;
	
public:
	Sprzet(std::string nazwa);
	~Sprzet();
	std::string zwrocNazwe();
	void dodajceche(std::string cecha);
	void usunceche(std::string cecha);
	std::list <std::string> zwroclistecech();
	std::string zwroccechy();
	int zapiszSprzet(std::string nazwapliku);
};

