#include "KierownikLogistyki.h"

KierownikLogistyki::KierownikLogistyki(string imie) : PracownikLogistyki(imie) {
    //dodajPracownika();
    cout << "tworze obiek KierownikLogistyki nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}