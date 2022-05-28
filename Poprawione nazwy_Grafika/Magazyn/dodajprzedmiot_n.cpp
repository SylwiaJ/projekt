#include "dodajprzedmiot_n.h"
#include "ui_dodajprzedmiot.h"
#include <QMessageBox>

DodajPrzedmiot::DodajPrzedmiot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DodajPrzedmiot)
{
    ui->setupUi(this);
}

DodajPrzedmiot::~DodajPrzedmiot()
{
    delete ui;
}

void DodajPrzedmiot::on_pushButton_clicked()
{
    QString NazwaPrzedmiotu = ui->NazwaPrzedmiotu->text();
    QMessageBox::about(this,"Dodany","Przedmiot zostal poprawnie dodany.");
}

