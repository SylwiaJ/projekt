#include "PracownikBiura.h"

PracownikBiura::PracownikBiura(string imie) : Pracownik(imie) {
    //dodajPracownika();
    cout << "tworze obiek PracownikBiura nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}

