#include "Sala.h"



Sala::Sala(std::string nazwa, int liczbamiejsc)
{
	this->nazwa = nazwa;
	this->liczbaMiejsc = liczbamiejsc;
	for (int i = 0; i < liczbamiejsc; i++) { //Tworze krzes³a i lawki aby zapewniæ iloœæ miejsc
		listaSprzetow.push_back(*(new Sprzet("lawka")));
		listaSprzetow.push_back(*(new Sprzet("krzeslo")));
	}
}


Sala::~Sala()
{
	this->listaSprzetow.clear();
}

void Sala::dodajSprzet(std::string sprzetnazwa)
{
	listaSprzetow.push_back(*(new Sprzet(sprzetnazwa)));
}

void Sala::usunSprzet(std::string sprzetnazwa)
{
	for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {	//Pêtla po liœcie sprzêtów
		if ((*iter).zwrocNazwe() == sprzetnazwa) {
			listaSprzetow.erase(iter);
			return;
		}
	}
}

std::string Sala::zwrocNazwe()
{
	return nazwa;
}

std::list<Sprzet>* Sala::zwrocListeSprzetow()
{
	return &listaSprzetow;
}

std::string Sala::zwrocSprzety()
{
	std::string sprzet = "";
	for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {	//petla po wszystkich elementach listy
		sprzet += (*iter).zwrocNazwe();	//polaczenie wszystkich sprzetow w jeden String
		sprzet += ";";	//sprzety oddzielone ";"
	}

	return sprzet;
}

void Sala::dodajCecheDoSprzetu(std::string sprzetnazwa, std::string sprzetcecha)
{
	for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == sprzetnazwa) {
			(*iter).dodajceche(sprzetcecha);
			return;
		}
	}

}

void Sala::usunCecheZSprzetu(std::string sprzetnazwa, std::string sprzetcecha)
{
	for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == sprzetnazwa) {
			(*iter).usunceche(sprzetcecha);
			return;
		}
	}
}

std::string Sala::wyswietlCechySprzetu(std::string sprzetnazwa)
{
	for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == sprzetnazwa) {
			return (*iter).zwroccechy();
		}
	}
	return 0;
}

int Sala::zwrocLiczbeMiejsc()
{
	return this->liczbaMiejsc;
}

int Sala::zapiszSale(std::string nazwapliku)
{
	std::string linia;
	std::fstream plik;

	plik.open(nazwapliku, std::ios::out | std::ios::app);
	if (plik.good() == true)
	{
		plik << nazwa << std::endl;
		plik << liczbaMiejsc << std::endl;
		for (std::list<Sprzet>::iterator iter = listaSprzetow.begin(); iter != listaSprzetow.end(); ++iter) {//petla po wszystkich elementach listy
			iter->zapiszSprzet(nazwapliku);
		}

		plik.close();
		return 0;
	}
	else
		return -1;
}
