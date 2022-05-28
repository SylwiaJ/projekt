#include "magazyn_n.h"
#include "ui_magazyn.h"
#include "pracownik_n.h"
#include "sprzet_n.h"
#include "wypozyczalnia_n.h"

Magazyn::Magazyn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Magazyn)
{
    ui->setupUi(this);
}

Magazyn::~Magazyn()
{
    delete ui;
}


void Magazyn::on_pushButton_2_clicked()
{
    Pracownik Prac;//Prac to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Prac.setModal(true);
    Prac.exec();
}


void Magazyn::on_pushButton_3_clicked()
{
    Sprzet Sprz;//Sprz to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Sprz.setModal(true);
    Sprz.exec();
}


void Magazyn::on_pushButton_clicked()
{
    Wypozyczalnia Wypo;//Wypo to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Wypo.setModal(true);
    Wypo.exec();
}

