#include "Sprzet.h"

int Sprzet::licznik = 0;

Sprzet::Sprzet(string nazwa) : nazwa{ nazwa }, idSprzetu{ ++licznik } {
    //zwiekszLicznik();
    //dodajSprzet();
    cout << "tworze obiek Sprzet nr " << pobierzLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
}

void Sprzet::zwiekszLicznik() {
    licznik++;
}

int Sprzet::pobierzLicznik() {
    return licznik;
}

void Sprzet::wydaj() {}; //f. wirtualna

void Sprzet::dodajSprzet() {
    // tu b�dzie dopisanie sprz�tu do pliku tekstowego
};

    