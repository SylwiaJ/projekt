#include "usunpracownika.h"
#include "ui_usunpracownika.h"

Usunpracownika::Usunpracownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usunpracownika)
{
    ui->setupUi(this);
}

Usunpracownika::~Usunpracownika()
{
    delete ui;
}
