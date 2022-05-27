#ifndef WYPOZYCZALNIA_H
#define WYPOZYCZALNIA_H

#include <QDialog>

namespace Ui {
class Wypozyczalnia;
}

class Wypozyczalnia : public QDialog
{
    Q_OBJECT

public:
    explicit Wypozyczalnia(QWidget *parent = nullptr);
    ~Wypozyczalnia();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Wypozyczalnia *ui;
};

#endif // WYPOZYCZALNIA_H
