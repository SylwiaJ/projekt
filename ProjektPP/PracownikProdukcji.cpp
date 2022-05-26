#include "PracownikProdukcji.h"

PracownikProdukcji::PracownikProdukcji(string imie) : PracownikFizyczny(imie) {
    //dodajPracownika();
    cout << "tworze obiek Pracownik Produkcji nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}