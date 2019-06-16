#include "Grupa.h"



Grupa::Grupa(std::string nazwa, int liczbaStudentow)
{
	this->nazwa = nazwa;
	this->liczbaStudentow = liczbaStudentow;
}


Grupa::~Grupa()
{
}

std::string Grupa::zwrocNazwe()
{
	return this->nazwa;
}

int Grupa::zwrocLiczbeStudentow()
{
	return this->liczbaStudentow;
}

void Grupa::zmienNazwe(std::string nazwa)
{
	this->nazwa = nazwa;
}

void Grupa::zmienLiczbeStudentow(int liczba)
{
	this->liczbaStudentow = liczba;
}

int Grupa::zapiszGrupe(std::string nazwapliku)
{
	std::fstream plik;

	plik.open(nazwapliku, std::ios::out | std::ios::app);	//Otwiera plik
	if (plik.good() == true)	//Sprawdzam czy plik zosta³ otworzony
	{
		plik << nazwa << std::endl;		//Zapisuje atrybuty do pliku
		plik << liczbaStudentow << std::endl;
		plik.close();	//zamykam plik
		return 0;
	}else
		return -1;
}
