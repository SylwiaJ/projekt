#include "PracownikBiura.h"
#include "PracownikProdukcji.h"
#include "KierownikProdukcji.h"
#include "PracownikLogistyki.h"
#include "KierownikLogistyki.h"
#include "SprzetWydawany.h"
#include "SprzetWypozyczany.h"
#include "Komputer.h"


int main() {

    //TESTY - usun¹æ
    PracownikLogistyki prac1("Adam");
    cout << endl;
    KierownikLogistyki prac2("Karolina");
    cout << endl;
    PracownikBiura prac3("Anna");
    cout << endl;
    KierownikProdukcji aaa("aaa");
    cout << endl;
    PracownikProdukcji aaq("aaaq");
    cout << endl<<endl;

    SprzetWydawany sw1("rekawiczki");
    cout << endl;
    SprzetWypozyczany s("qqq");
    cout << endl;
    Komputer s1("komp");
   
}