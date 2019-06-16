#pragma once
#include<string>
#include <fstream>

class Grupa
{
private:
	std::string nazwa="";
	int liczbaStudentow=0;

public:
	Grupa(std::string nazwa, int liczbaStudentow);
	~Grupa();
	std::string zwrocNazwe();
	int zwrocLiczbeStudentow();
	void zmienNazwe(std::string nazwa);
	void zmienLiczbeStudentow(int liczba);
	int zapiszGrupe(std::string nazwapliku);
};

