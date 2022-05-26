#pragma once
#include "Plik.h"
#include "Sprzet.h"
#include "Pracownik.h"
#include <iostream>
#include <fstream>

class Plik {
public:
	void zapiszPracownikaDoPliku(int id, string nazwaPliku = "", string imie = "");
	void zapiszSprzetDoPliku(int id, string nazwaPliku = "", string nazwa = "");
	Pracownik[] odczytPracownikowZPliku(int id, string nazwaPliku = "", string nazwa = "");
	 odczytSprzetuZPliku(int id, string nazwaPliku = "", string nazwa = "");
	void usunPracownika(int id);
	void usunSprzet(int id);
};

	