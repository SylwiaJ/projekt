#include "PracownikFizyczny.h"

PracownikFizyczny::PracownikFizyczny(string imie):Pracownik(imie){
	//dodajPracownika();
	cout << "tworze obiek Fizyczny nr " << pobierzLicznik() << " o imieniu " << imie << endl; //TEST - usun¹æ
}
