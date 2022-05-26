#pragma once
#include <iostream>
#include "ListaPracownikow.h"
using namespace std;

class Pracownik {
private:
	int id;
	string imie;

public:
	Pracownik* nastepny;
	Pracownik(int id,
		string imie = "");

	int setId() const {
		this->id;
	}

	int getId() const {
		return id;
	}

	const string& getImie() const {
		return imie;
	}

	void setImie(const string& imie) {
		this->imie = imie;
	}
};