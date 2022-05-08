#include "KierownikProdukcji.h"

KierownikProdukcji::KierownikProdukcji(string imie) : PracownikProdukcji(imie) {
    //dodajPracownika();
    cout << "tworze obiek KierownikProdukcji nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}
