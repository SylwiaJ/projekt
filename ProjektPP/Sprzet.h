#pragma once
#include <iostream>
using namespace std;

class Sprzet {

private:
	static int licznik;
	const int idSprzetu;
	string nazwa;

public:
    Sprzet(string nazwa);

    void zwiekszLicznik();
    int pobierzLicznik();
    virtual void wydaj(); //f. wirtualna
    void dodajSprzet();

};

