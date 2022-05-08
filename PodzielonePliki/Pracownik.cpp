#include "Pracownik.h"

int Pracownik::licznik = 0;

Pracownik::Pracownik(string imie) : imie{ imie }, idPracownika {++licznik}{
    //zwiekszLicznik();
    //dodajPracownika();
    cout << "tworze obiekt Pracownik nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}

void Pracownik::dodajPracownika() {
    // tu bêdzie dopisanie Pracownika do pliku tekstowego
}

void Pracownik::zwiekszLicznik() {
    licznik++;
}

int Pracownik::pobierzLicznik() {
    return licznik;
}

 