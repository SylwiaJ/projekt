#include "wypozyczalnia.h"
#include "ui_wypozyczalnia.h"
#include "sprzetwydawany.h"
#include "sprzetwypozyczany.h"

Wypozyczalnia::Wypozyczalnia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wypozyczalnia)
{
    ui->setupUi(this);
}

Wypozyczalnia::~Wypozyczalnia()
{
    delete ui;
}

void Wypozyczalnia::on_pushButton_clicked()
{
    //Wydawanie
    SprzetWydawany Wydaw;//Wydaw to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Wydaw.setModal(true);
    Wydaw.exec();
}


void Wypozyczalnia::on_pushButton_2_clicked()
{
    //Wypozyczanie
    SprzetWypozyczany Wypo;// Wypo to jest stworzony obiekt w celu otworzenia nowego okna po nacisnieciu
    Wypo.setModal(true);
    Wypo.exec();
}

