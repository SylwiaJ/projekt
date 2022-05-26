#include "pracownik_m.h"
#include "ui_pracownik.h"
#include "dodajpracownika.h"
#include "usunpracownika.h"


Pracownik::Pracownik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pracownik)
{
    ui->setupUi(this);
}

Pracownik::~Pracownik()
{
    delete ui;
}

void Pracownik::on_pushButton_clicked()
{
    //dodaj
    DodajPracownika Dodaj;//Dodaj to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Dodaj.setModal(true);
    Dodaj.exec();
}


void Pracownik::on_pushButton_2_clicked()
{
    //usun
    Usunpracownika Usun;//Usun to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Usun.setModal(true);
    Usun.exec();
}

