
#include <iostream>
#include "Pracownik.h"
#include "Plik.h"
#include <fstream>

using namespace std;

ListaPracownikow::ListaPracownikow() {
	this->pierwszy = NULL;
	this->ostatni = NULL;
}

void ListaPracownikow::dodajPracownika(Pracownik* nowy) {
	if (pierwszy == NULL) // sprawdzamy czy to pierwszy element listy
	{
		// je¿eli tak to nowy element jest teraz pocz¹tkiem listy
		pierwszy = nowy;
	}
	else {
		// je¿eli nie jest pierwsza to ostatnia te¿ nie jest null
		this->ostatni->nastepny = nowy;
	}
	nowy->nastepny = NULL;
	this->ostatni = nowy;
}

void ListaPracownikow::wypiszListePracownikow() {
	Pracownik* temp = this->pierwszy;
	while (temp != NULL) {
		cout << "Id: " << temp->getId() << endl;
		cout << "Imie: " << temp->getImie() << endl << endl;
		temp = temp->nastepny;
	}

}
void ListaPracownikow::zapiszListePracownikow() {
	fstream plik;
	plik.open("pracownik.txt", ios::trunc | ios::out);
	if (plik.good() == true) {
		cout << "Uzyskano dostep i poprawnie zapisano dane!" << endl;
		Pracownik* temp = this->pierwszy;
		while (temp != NULL) {

			plik << temp->getId() << endl;
			plik << temp->getImie() << endl << endl;
			temp = temp->nastepny;

		}


	}
	else {
		cout << "Nie udalo sie polaczyc z baza";
		exit(0);
	}
	plik.close();
}


// Koniec Jacek

void ListaPracownikow::usunPracownika(int nr) {
	if (nr == 1)
	{
		Pracownik* temp = this->pierwszy;
		pierwszy = temp->nastepny; //poczatek listy, 1 el. wskazuje na 2 el. itd..
	}

	// je¿eli nie jest to pierwszy element
	if (nr >= 2)
	{
		int j = 1;

		// do usuniecia srodkowego elemetnu potrzebujemy wskaznika na osobe n-1
		// wskaznik *temp bedzie wskaznikiem na osobe poprzedzajaca osobe usuwana
		Pracownik* temp = pierwszy;
		while (temp)
		{
			// sprawdzamy czy wskaznik jest na osobie n-1 niz usuwana
			if ((j + 1) == nr) break;

			// jezeli nie to przewijamy petle do przodu
			temp = temp->nastepny;
			j++;
		}

		// wskaznik *temp wskazuje teraz na osobe n-1
		// nadpisujemy wkaznik osoby n na osobe n+1
		// bezpowrotnie tracimy osobe n-ta

		// dodatkowo sprawdzamy czy aby nie jest to ostatni element
		// wtedy nalezy wyzerowac ostatni wskaznik
		if (temp->nastepny->nastepny == 0)
			temp->nastepny = 0;
		// jezeli nie byl to ostatni element
		else
			temp->nastepny = temp->nastepny->nastepny;
	}
}
