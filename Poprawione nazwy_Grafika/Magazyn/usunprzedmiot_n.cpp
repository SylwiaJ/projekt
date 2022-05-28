#include "usunprzedmiot_n.h"
#include "ui_usunprzedmiot.h"
#include <QMessageBox>

Usunprzedmiot::Usunprzedmiot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usunprzedmiot)
{
    ui->setupUi(this);
}

Usunprzedmiot::~Usunprzedmiot()
{
    delete ui;
}

void Usunprzedmiot::on_pushButton_clicked()
{
    QMessageBox::about(this,"Usuniety","Przedmiot zostal poprawnie usuniety.");
}

