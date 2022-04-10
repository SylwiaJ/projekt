#include <iostream>
#include <string>

using namespace std;

class Pracownik {
    static int licznik;
public: 
    string imie;

    void setLicznik() {
        licznik++;
    }
       
    int getLicznik() {
        return licznik;
    }

    void dodajPracownika() {
        // tu b�dzie dopisanie pracownika do pliku tekstowego
    }

    Pracownik(string imie) : imie{ imie }{
       setLicznik();       
        //dodajPracownika();
        cout << "tworze obiekt Pracownik nr "<< getLicznik() <<" o imieniu "<< imie<<endl; //TEST - usun��
     }
      
};

class PracownikaBiura: public Pracownik{    
public:
    PracownikaBiura(string imie) : Pracownik(imie){
        //dodajPracownika();
        cout << "tworze obiek Biuro nr "<<getLicznik()<< " o imieniu " << imie << endl; //TEST - usun��
    }
};

class PracownikFizyczny : public Pracownik {
public:
    PracownikFizyczny(string imie) : Pracownik(imie) {
        //dodajPracownika();
        cout << "tworze obiek Fizyczny nr " << getLicznik() << " o imieniu " << imie << endl; //TEST - usun��
    }
};

class PracownikLogistyki :public PracownikFizyczny {
public:
    PracownikLogistyki(string imie) : PracownikFizyczny(imie) {
        //dodajPracownika();
        cout << "tworze obiek Logistyka nr " << getLicznik() << " o imieniu " << imie << endl; //TEST - usun��
    }
};

class PacownikProdukcji : public PracownikFizyczny {
public:
    PacownikProdukcji(string imie) : PracownikFizyczny(imie) {
        //dodajPracownika();
        cout << "tworze obiek Produkcja nr " << getLicznik() << " o imieniu " << imie << endl; //TEST - usun��
    }
};

class KierownikProdukcji : public PacownikProdukcji {
public:
    KierownikProdukcji(string imie) : PacownikProdukcji(imie) {
        //dodajPracownika();
        cout << "tworze obiek KierownikProdukcji nr " << getLicznik() << " o imieniu " << imie << endl; //TEST - usun��
    }
};

class KierownikLogistyki : public PracownikLogistyki {
public:
    KierownikLogistyki(string imie) : PracownikLogistyki(imie) {
        //dodajPracownika();
        cout << "tworze obiek KierownikLogistyki nr " << getLicznik() << " o imieniu " << imie << endl; //TEST - usun��
    }
};


class Sprzet {
    static int licznik;
public: string nazwa;

      void setLicznik() {
          licznik++;
      }

      int getLicznik() {
          return licznik;
      }

      virtual void wydaj() {}; //f. wirtualna

      void dodajSprzet() {
          // tu b�dzie dopisanie sprz�tu do pliku tekstowego
      };

      Sprzet(string nazwa) : nazwa{ nazwa }{
          setLicznik();
          //dodajSprzet();
          cout << "tworze obiek Sprzet nr " << getLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
      }
};

class SprzetWydawany : public Sprzet {
    static int ilosc;
public: 
    int coIleDni=1;
    void wydaj() {
        //ilosc--
    }

    SprzetWydawany(string nazwa) : Sprzet(nazwa) {
        //dodajSprzet();
        cout << "tworze obiek SprzetWydawany nr " << getLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
    }
};

class SprzetWypozyczany : public Sprzet {
public: 
    int naIleDni=1;
    void wydaj() {
    //ilosc--
    }

    SprzetWypozyczany(string nazwa) : Sprzet(nazwa) {
        //dodajSprzet();
        cout << "tworze obiek SprzetWyporzyczany nr " << getLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
    }
};

class Komputer : public Sprzet {
public:
    bool czyWydany=false;
    void wydaj() {
        //czyWydany=true;
    }

    Komputer(string nazwa) : Sprzet(nazwa) {
        //dodajSprzet();
        cout << "tworze obiekt Komputer nr " << getLicznik() << " o nazwie " << nazwa << endl; //TEST - usun��
    }
};

int Pracownik::licznik = 0;
int Sprzet::licznik = 0;

int main() {

    //testy - usun��
    PracownikLogistyki prac1("Adam");
    KierownikLogistyki prac2("Karolina");
    PracownikaBiura prac3("Anna");
    cout << endl;
    Komputer s1("komp");
    SprzetWydawany sw1("rekawiczki");
}