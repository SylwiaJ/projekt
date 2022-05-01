#ifndef USUNPRACOWNIKA_H
#define USUNPRACOWNIKA_H

#include <QDialog>

namespace Ui {
class Usunpracownika;
}

class Usunpracownika : public QDialog
{
    Q_OBJECT

public:
    explicit Usunpracownika(QWidget *parent = nullptr);
    ~Usunpracownika();

private:
    Ui::Usunpracownika *ui;
};

#endif // USUNPRACOWNIKA_H
