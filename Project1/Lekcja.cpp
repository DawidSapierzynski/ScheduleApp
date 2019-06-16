#include "Lekcja.h"



Lekcja::Lekcja(std::string nazwa, std::string dzien, std::string godzina, Sala *sala, Grupa *grupa)
{
	this->nazwa = nazwa;
	this->dzien = dzien;
	this->godzina = godzina;
	this->sala = sala;
	this->grupa = grupa;
}


Lekcja::~Lekcja()
{
}

//Funkcja konstruj¹ca obiekt Lekcja, poniewa¿ konstruktor jest prywatny, aby sprawdzaæ wymagania
Lekcja* Lekcja::konstLekcja(std::string nazwa, std::string dzien, std::string godzina, Sala* sala, Grupa* grupa, std::list<Sprzet> listaSprzetowWymagana)
{
	int test = 0;
	if (grupa->zwrocLiczbeStudentow()<=sala->zwrocLiczbeMiejsc()) { //jeœli liczba studentów jest wiêksz ni¿ liczba miejsc zwróæ 0
		for (std::list<Sprzet>::iterator iter = listaSprzetowWymagana.begin(); iter != listaSprzetowWymagana.end(); ++iter) {	//Pêtla po wszystkich sprzetach z listaSprzetowWymagana

			for (std::list<Sprzet>::iterator iter2 = sala->zwrocListeSprzetow()->begin(); iter2 != sala->zwrocListeSprzetow()->end(); ++iter2) {	//Petla po wszystkich sprzetach z sali

				if ((*iter).zwrocNazwe() == (*iter2).zwrocNazwe()) { //Porównanie nazw
					test++;
					break;
				}
			}
		}

	}
	else
	{
		return 0;
	}

	if (listaSprzetowWymagana.size() == test) {
		return new Lekcja(nazwa, dzien, godzina, sala, grupa);
	}
	else {
		return 0;
	}	
}

std::string Lekcja::zwrocNazwe()
{
	return nazwa;
}

std::string Lekcja::zwrocDzien()
{
	return dzien;
}

std::string Lekcja::zwrocGodzine()
{
	return godzina;
}

std::string Lekcja::zwrocSale()
{
	return sala->zwrocNazwe();
}

int Lekcja::zapiszLekcje(std::string nazwapliku)
{
	std::fstream plik;

	plik.open(nazwapliku, std::ios::out | std::ios::app);
	if (plik.good() == true)
	{
		plik << nazwa << std::endl;	//Zapisuje atrybuty
		plik << dzien << std::endl;
		plik << godzina << std::endl;
		sala->zapiszSale(nazwapliku);
		grupa->zapiszGrupe(nazwapliku);
		
		plik.close();
		return 0;
	}
	else
		return -1;
}
