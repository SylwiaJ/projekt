#ifndef SPRZET_H
#define SPRZET_H

#include <QDialog>

namespace Ui {
class Sprzet;
}

class Sprzet : public QDialog
{
    Q_OBJECT

public:
    explicit Sprzet(QWidget *parent = nullptr);
    ~Sprzet();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Sprzet *ui;
};

#endif // SPRZET_H
