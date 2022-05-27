#include "sprzet.h"
#include "ui_sprzet.h"
#include "usunprzedmiot.h"
#include "dodajprzedmiot.h"

Sprzet::Sprzet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sprzet)
{
    ui->setupUi(this);
}

Sprzet::~Sprzet()
{
    delete ui;
}

void Sprzet::on_pushButton_2_clicked()
{
    //Okno usun przedmiot
    Usunprzedmiot Usunn;//Usunn to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Usunn.setModal(true);
    Usunn.exec();
}


void Sprzet::on_pushButton_clicked()
{
    //Okno dodaj przedmiot
    DodajPrzedmiot Dodajj;//Dodajj to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Dodajj.setModal(true);
    Dodajj.exec();

}

