#include "SprzetWydawany.h"

SprzetWydawany::SprzetWydawany(string nazwa) : Sprzet(nazwa) {
//dodajSprzet();
cout << "tworze obiek SprzetWydawany nr " << pobierzLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
    }

void SprzetWydawany::wydaj() {
}
