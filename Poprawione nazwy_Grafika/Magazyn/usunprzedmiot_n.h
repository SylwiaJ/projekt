#ifndef USUNPRZEDMIOT_H
#define USUNPRZEDMIOT_H

#include <QDialog>

namespace Ui {
class Usunprzedmiot;
}

class Usunprzedmiot : public QDialog
{
    Q_OBJECT

public:
    explicit Usunprzedmiot(QWidget *parent = nullptr);
    ~Usunprzedmiot();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Usunprzedmiot *ui;
};

#endif // USUNPRZEDMIOT_H
