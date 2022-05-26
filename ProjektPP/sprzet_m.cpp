#include "sprzet.h"
#include "ui_sprzet.h"

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
