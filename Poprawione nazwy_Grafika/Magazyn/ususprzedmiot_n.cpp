#include "ususprzedmiot.h"
#include "ui_ususprzedmiot.h"

UsusPrzedmiot::UsusPrzedmiot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsusPrzedmiot)
{
    ui->setupUi(this);
}

UsusPrzedmiot::~UsusPrzedmiot()
{
    delete ui;
}
