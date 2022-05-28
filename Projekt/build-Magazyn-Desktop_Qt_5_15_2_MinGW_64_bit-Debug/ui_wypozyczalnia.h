/********************************************************************************
** Form generated from reading UI file 'wypozyczalnia.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYPOZYCZALNIA_H
#define UI_WYPOZYCZALNIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wypozyczalnia
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Wypozyczalnia)
    {
        if (Wypozyczalnia->objectName().isEmpty())
            Wypozyczalnia->setObjectName(QString::fromUtf8("Wypozyczalnia"));
        Wypozyczalnia->resize(400, 300);
        verticalLayoutWidget = new QWidget(Wypozyczalnia);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 89, 301, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Wypozyczalnia);

        QMetaObject::connectSlotsByName(Wypozyczalnia);
    } // setupUi

    void retranslateUi(QDialog *Wypozyczalnia)
    {
        Wypozyczalnia->setWindowTitle(QCoreApplication::translate("Wypozyczalnia", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Wypozyczalnia", "Wydawanie", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Wypozyczalnia", "Wypozyczanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wypozyczalnia: public Ui_Wypozyczalnia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYPOZYCZALNIA_H
