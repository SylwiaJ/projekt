#include "sprzetwydawany.h"
#include "ui_sprzetwydawany.h"

SprzetWydawany::SprzetWydawany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SprzetWydawany)
{
    ui->setupUi(this);
}

SprzetWydawany::~SprzetWydawany()
{
    delete ui;
}
