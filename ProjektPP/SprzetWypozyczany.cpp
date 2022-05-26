#include "SprzetWypozyczany.h"

SprzetWypozyczany::SprzetWypozyczany(string nazwa) : Sprzet(nazwa) {
    //dodajSprzet();
    cout << "tworze obiek SprzetWyporzyczany nr " << pobierzLicznik() << " o nazwie " << nazwa << endl; //TEST - usun¹æ
}
void SprzetWypozyczany::wydaj() {
}
