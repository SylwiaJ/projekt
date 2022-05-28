#include "dodajpracownika.h"
#include "ui_dodajpracownika.h"

DodajPracownika::DodajPracownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DodajPracownika)
{
    ui->setupUi(this);
}

DodajPracownika::~DodajPracownika()
{
    delete ui;
}

void DodajPracownika::on_comboBox_activated(int index)
{
//Rodzaje stanowiska
}

