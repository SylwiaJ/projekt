#include "Komputer.h"

Komputer::Komputer(string nazwa) : Sprzet(nazwa) {
    //dodajSprzet();
    czyWydany = false;
    cout << "tworze obiekt Komputer nr " << pobierzLicznik() << " o nazwie " << nazwa << " wydany: "<< czyWydany <<endl; //TEST - usun��
}

void Komputer::wydaj() {
    czyWydany = true;
}
