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

private:
    Ui::Wypozyczalnia *ui;
};

#endif // WYPOZYCZALNIA_H
