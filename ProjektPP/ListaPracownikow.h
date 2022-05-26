//#pragma once
//#include <iostream>
//#include "Pracownik.h"
//using namespace std;

#ifndef LISTAPRACOWNIKOW_H_
#define LISTAPRACOWNIKOW_H_

class ListaPracownikow {
public:
	Pracownik* pierwszy; // wskaünik na poczπtek listy
	Pracownik* ostatni; // wskaünik na koniec listy
	void dodajPracownika(Pracownik* nowy);
	void usunPracownika(int nr);
	void wypiszListePracownikow();
	void zapiszListePracownikow();
	ListaPracownikow();
};

#endif /* LISTAPRACOWNIKOW_H_ */

