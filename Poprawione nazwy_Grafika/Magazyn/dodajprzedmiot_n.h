#ifndef DODAJPRZEDMIOT_H
#define DODAJPRZEDMIOT_H

#include <QDialog>

namespace Ui {
class DodajPrzedmiot;
}

class DodajPrzedmiot : public QDialog
{
    Q_OBJECT

public:
    explicit DodajPrzedmiot(QWidget *parent = nullptr);
    ~DodajPrzedmiot();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DodajPrzedmiot *ui;
};

#endif // DODAJPRZEDMIOT_H
