#ifndef USUSPRZEDMIOT_H
#define USUSPRZEDMIOT_H

#include <QDialog>

namespace Ui {
class UsusPrzedmiot;
}

class UsusPrzedmiot : public QDialog
{
    Q_OBJECT

public:
    explicit UsusPrzedmiot(QWidget *parent = nullptr);
    ~UsusPrzedmiot();

private:
    Ui::UsusPrzedmiot *ui;
};

#endif // USUSPRZEDMIOT_H
