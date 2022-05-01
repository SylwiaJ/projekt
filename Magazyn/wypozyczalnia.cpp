#include "wypozyczalnia.h"
#include "ui_wypozyczalnia.h"

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
