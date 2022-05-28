#ifndef SPRZETWYPOZYCZANY_H
#define SPRZETWYPOZYCZANY_H

#include <QDialog>

namespace Ui {
class SprzetWypozyczany;
}

class SprzetWypozyczany : public QDialog
{
    Q_OBJECT

public:
    explicit SprzetWypozyczany(QWidget *parent = nullptr);
    ~SprzetWypozyczany();

private:
    Ui::SprzetWypozyczany *ui;
};

#endif // SPRZETWYPOZYCZANY_H
