#pragma once
#include"Lekcja.h"

class Uniwersytet
{
private:
	std::string nazwa = "";
	std::list<Lekcja> planZajec;
	std::list<Sala> listaSal;
	std::list<Grupa> listaGrup;

public:
	Uniwersytet(std::string nazwa);
	~Uniwersytet();

	int dodajLekcje(std::string nazwa, std::string dzien, std::string godzina, std::string nazwasali, std::string nazwagrupy, std::list<Sprzet> listaSprzetowWymagana);
	void usunLekcje(std::string dzien, std::string godzina, std::string sala);
	void dodajSale(std::string nazwa, int liczbamiejsc);
	void usunSale(std::string nazwa);
	void dodajSprzetDoSali(std::string nazwasali, std::string sprzet);
	void usunSprzetZSali(std::string nazwasali, std::string sprzet);
	void dodajCecheDoSprzetuWSali(std::string nazwasali, std::string nazwasprzetu, std::string cecha);
	void usunCecheZSprzetuWSali(std::string nazwasali, std::string nazwasprzetu, std::string cecha);
	void dodajGrupe(std::string nazwa, int liczbaStudentow);
	void usunGrupe(std::string nazwa);
	int zapiszWszystko(std::string nazwapliku, int flaga);

};

