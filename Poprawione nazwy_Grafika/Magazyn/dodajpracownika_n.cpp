#include "dodajpracownika_n.h"
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

