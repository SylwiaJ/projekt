#include "Sprzet.h"

int Sprzet::licznik = 0;

Sprzet::Sprzet(string nazwa) : nazwa{ nazwa }, idSprzetu{ ++licznik } {
    //zwiekszLicznik();
    //dodajSprzet();
    cout << "tworze obiek Sprzet nr " << pobierzLicznik() << " o nazwie " << nazwa << endl; //TEST - usun¹æ
}

void Sprzet::zwiekszLicznik() {
    licznik++;
}

int Sprzet::pobierzLicznik() {
    return licznik;
}

void Sprzet::wydaj() {}; //f. wirtualna

void Sprzet::dodajSprzet() {
    // tu bêdzie dopisanie sprzêtu do pliku tekstowego
};

    