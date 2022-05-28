#ifndef DODAJPRACOWNIKA_H
#define DODAJPRACOWNIKA_H

#include <QDialog>

namespace Ui {
class DodajPracownika;
}

class DodajPracownika : public QDialog
{
    Q_OBJECT

public:
    explicit DodajPracownika(QWidget *parent = nullptr);
    ~DodajPracownika();

private slots:


private:
    Ui::DodajPracownika *ui;
};

#endif // DODAJPRACOWNIKA_H
