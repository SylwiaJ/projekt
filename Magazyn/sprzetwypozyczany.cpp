#include "sprzetwypozyczany.h"
#include "ui_sprzetwypozyczany.h"

SprzetWypozyczany::SprzetWypozyczany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SprzetWypozyczany)
{
    ui->setupUi(this);
}

SprzetWypozyczany::~SprzetWypozyczany()
{
    delete ui;
}
