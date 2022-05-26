#ifndef PRACOWNIK_M_H
#define PRACOWNIK_M_H

#include <QDialog>

namespace Ui {
class Pracownik;
}

class Pracownik : public QDialog
{
    Q_OBJECT

public:
    explicit Pracownik(QWidget *parent = nullptr);
    ~Pracownik();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Pracownik *ui;
};

#endif // PRACOWNIK_M_H
