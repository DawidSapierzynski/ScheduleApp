#pragma once
#include <iostream>
#include <list>
#include "Sprzet.h"
class Sprzet;

class Sala
{
private:
	std::string nazwa="";
	int liczbaMiejsc = 0;
	std::list<Sprzet> listaSprzetow;

public:
	Sala(std::string nazwa, int liczbamiejsc);
	~Sala();
	void dodajSprzet(std::string sprzetnazwa);
	void usunSprzet(std::string sprzetnazwa);
	std::string zwrocNazwe();
	std::list <Sprzet> *zwrocListeSprzetow();
	std::string zwrocSprzety();
	void dodajCecheDoSprzetu(std::string sprzetnazwa, std::string sprzetcecha);
	void usunCecheZSprzetu(std::string sprzetnazwa, std::string sprzetcecha);
	std::string wyswietlCechySprzetu(std::string sprzetnazwa);
	int zwrocLiczbeMiejsc();
	int zapiszSale(std::string nazwapliku);
};

