#include "PracownikLogistyki.h"

PracownikLogistyki::PracownikLogistyki(string imie) : PracownikFizyczny(imie) {
	//dodajPracownika();
	cout << "tworze obiek Logistyka nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}
