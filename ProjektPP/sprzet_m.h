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

private:
    Ui::Sprzet *ui;
};

#endif // SPRZET_H
