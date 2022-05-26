#ifndef MAGAZYN_H
#define MAGAZYN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Magazyn; }
QT_END_NAMESPACE

class Magazyn : public QMainWindow
{
    Q_OBJECT

public:
    Magazyn(QWidget *parent = nullptr);
    ~Magazyn();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Magazyn *ui;


};
#endif // MAGAZYN_H
