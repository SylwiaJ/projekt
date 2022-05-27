#ifndef SPRZETWYDAWANY_H
#define SPRZETWYDAWANY_H

#include <QDialog>

namespace Ui {
class SprzetWydawany;
}

class SprzetWydawany : public QDialog
{
    Q_OBJECT

public:
    explicit SprzetWydawany(QWidget *parent = nullptr);
    ~SprzetWydawany();

private:
    Ui::SprzetWydawany *ui;
};

#endif // SPRZETWYDAWANY_H
