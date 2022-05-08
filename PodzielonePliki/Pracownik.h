#pragma once
#include <iostream>
using namespace std;

class Pracownik {

private:
    static int licznik;
    const int idPracownika;
    string imie;

public: 
    Pracownik(string imie);
    void dodajPracownika();

    static void zwiekszLicznik();
    static int pobierzLicznik();
};