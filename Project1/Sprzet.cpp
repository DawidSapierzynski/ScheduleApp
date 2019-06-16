#include "Sprzet.h"


Sprzet::Sprzet(std::string nazwa)
{
	this->nazwa = nazwa;
}


Sprzet::~Sprzet()
{
	this->listacech.clear();
}

std::string Sprzet::zwrocNazwe()
{
	return nazwa;
}

void Sprzet::dodajceche(std::string cecha)
{
	listacech.push_back(cecha);	//dodanie do listy cechy
}

void Sprzet::usunceche(std::string cecha)
{
	listacech.remove(cecha);	//usuniecie z listy cechy
}

std::list<std::string> Sprzet::zwroclistecech()
{
	return listacech;			//zwraca liste cech
}

std::string Sprzet::zwroccechy()
{
	std::string cechy = "";
	for (std::list<std::string>::iterator iter = listacech.begin(); iter != listacech.end(); ++iter) {	//petla po wszystkich elementach listy
		cechy += *iter;	//polaczenie wszystkich cech w jeden String
		cechy += ";";	//cechy oddzielone ";"
	}
	
	return cechy;
}

int Sprzet::zapiszSprzet(std::string nazwapliku)
{
	std::string linia;
	std::fstream plik;

	plik.open(nazwapliku, std::ios::out | std::ios::app);
	if (plik.good() == true)
	{
		plik << nazwa << std::endl;
		for (std::list<std::string>::iterator iter = listacech.begin(); iter != listacech.end(); ++iter) {	//petla po wszystkich elementach listy
			plik << *iter << std::endl;
		}
		
		plik.close();
		return 0;
	}
	else
		return -1;
}


