#include "Plik.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void Plik::zapiszPracownikaDoPliku(int id, string nazwaPliku, string imie) {
	fstream plik;
	plik.open("pracownik.txt", ios_base::app);
	plik << id;
	plik << imie;
	plik.close();
};

void Plik::zapiszSprzetDoPliku(int id, string nazwaPliku, string nazwa) {
	fstream plik;
	plik.open("sprzet.txt", ios_base::app);
	plik << id;
	plik << nazwa;
	plik.close();
};

	Pracownik Plik::odczytPracownikowZPliku(int id, string nazwaPliku, string imie) {
	ifstream plik;
	string linia;
	int nr = 0;
	plik.open("pracownik.txt", ios::in);
	Pracownik listaPracownikow[50];

	while (!plik.eof()) {
		getline(plik, linia);
		nr++;
	}
	plik.close();
	plik.open("pracownik.txt", ios::in);
	if (plik.good() == true) {
		
		for (int i = 0; i < nr / 3; i++) {
			int id[30];
			string imie[30];
			

			plik >> id[i];
			plik >> imie[i];
			

			listaPracownikow[i] = new Pracownik(id[i], imie[i]);
		}
		return listaPracownikow;
	}
}

void Plik::odczytSprzetuZPliku(int id, string nazwaPliku, string nazwa) {
	ifstream plik;
	string linia;
	int nr = 0;
	plik.open("sprzet.txt", ios::in);
}


void Plik::usunPracownika(int id) {

};

void Plik::usunSprzet(int id) {

};


