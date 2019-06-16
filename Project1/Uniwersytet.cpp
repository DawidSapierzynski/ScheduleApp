#include "Uniwersytet.h"



Uniwersytet::Uniwersytet(std::string nazwa)
{
	this->nazwa = nazwa;
}


Uniwersytet::~Uniwersytet()
{
	planZajec.clear();
	listaSal.clear();
	listaGrup.clear();
}

int Uniwersytet::dodajLekcje(std::string nazwa, std::string dzien, std::string godzina, std::string nazwasali, std::string nazwagrupy, std::list<Sprzet> listaSprzetowWymagana)
{
	Lekcja* lekcja=nullptr;
	Sala* sala= nullptr;
	Grupa* grupa= nullptr;

	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {		//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwasali) {
			sala = &(*iter);
			break;
		}
	}

	for (std::list<Grupa>::iterator iter = listaGrup.begin(); iter != listaGrup.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwagrupy) {
			grupa = &(*iter);
			break;
		}
	}

	if (sala == nullptr || grupa == nullptr){ 
		return -2;	
	}
		

	lekcja=Lekcja::konstLekcja(nazwa, dzien, godzina, sala, grupa, listaSprzetowWymagana);
	if (lekcja != 0) {
		planZajec.push_back(*lekcja);
		return 0;
	}
	delete lekcja;
	return -1;
}

void Uniwersytet::usunLekcje(std::string dzien, std::string godzina, std::string sala)
{
	for (std::list<Lekcja>::iterator iter = planZajec.begin(); iter != planZajec.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocDzien() == dzien && (*iter).zwrocGodzine() == godzina && (*iter).zwrocSale() == sala) {
			planZajec.erase(iter);
			return;
		}
	}
}

void Uniwersytet::dodajSale(std::string nazwa, int liczbamiejsc)
{
	listaSal.push_back(*(new Sala(nazwa, liczbamiejsc)));
}

void Uniwersytet::usunSale(std::string nazwa)
{
	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwa) {
			listaSal.erase(iter);
			return;
		}
	}
}

void Uniwersytet::dodajSprzetDoSali(std::string nazwasali, std::string sprzet)
{
	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwasali) {
			(*iter).dodajSprzet(sprzet);
			return;
		}
	}
}

void Uniwersytet::usunSprzetZSali(std::string nazwasali, std::string sprzet)
{
	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwasali) {
			(*iter).usunSprzet(sprzet);
			return;
		}
	}
}

void Uniwersytet::dodajCecheDoSprzetuWSali(std::string nazwasali, std::string nazwasprzetu, std::string cecha)
{
	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwasali) {
			(*iter).dodajCecheDoSprzetu(nazwasprzetu, cecha);
			return;
		}
	}
}

void Uniwersytet::usunCecheZSprzetuWSali(std::string nazwasali, std::string nazwasprzetu, std::string cecha)
{
	for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwasali) {
			(*iter).usunCecheZSprzetu(nazwasprzetu, cecha);
			return;
		}
	}
}

void Uniwersytet::dodajGrupe(std::string nazwa, int liczbaStudentow)
{
	listaGrup.push_back(*(new Grupa(nazwa, liczbaStudentow)));
}

void Uniwersytet::usunGrupe(std::string nazwa)
{
	for (std::list<Grupa>::iterator iter = listaGrup.begin(); iter != listaGrup.end(); ++iter) {	//petla po wszystkich elementach listy
		if ((*iter).zwrocNazwe() == nazwa) {
			listaGrup.erase(iter);
			return;
		}
	}
}

int Uniwersytet::zapiszWszystko(std::string nazwapliku, int flaga)
{
	std::fstream plik;

	plik.open(nazwapliku, std::ios::out | std::ios::app);
	if (plik.good() == true)
	{
		if (flaga == 0)
			plik << nazwa << std::endl;
		else if (flaga == 1) {
			for (std::list<Lekcja>::iterator iter = planZajec.begin(); iter != planZajec.end(); ++iter) {	//petla po wszystkich elementach listy
				iter->zapiszLekcje(nazwapliku);
			}
		}else if (flaga == 2) {
			plik << std::endl;
			for (std::list<Sala>::iterator iter = listaSal.begin(); iter != listaSal.end(); ++iter) {	//petla po wszystkich elementach listy
				iter->zapiszSale(nazwapliku);
			}
		}else if (flaga == 3) {
			plik << std::endl;
			for (std::list<Grupa>::iterator iter = listaGrup.begin(); iter != listaGrup.end(); ++iter) {	//petla po wszystkich elementach listy
				iter->zapiszGrupe(nazwapliku);
			}
		}

		plik.close();
		return 0;
	}
	else
		return -1;
}
